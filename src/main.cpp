#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator T;
    QStringList langs;
    langs << "Español" << "Portugués" << "Inglés";
    QString lang = QInputDialog::getItem(NULL, "Idioma", "Selecciona un idioma", langs);

    if (lang == "Portugués")
    {
        T.load("://languages/portugues.qm");
    }
    else if (lang == "Inglés")
    {
        T.load("://languages/ingles.qm");
    }

    if (lang != "Español")
    {
        a.installTranslator(&T);
    }

    a.setStyle("fusion");
    MainWindow w;
    w.show();
    return a.exec();
}
