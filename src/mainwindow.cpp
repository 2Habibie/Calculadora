#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_calcularButton_clicked()
{
    const double n1 = ui->doubleSpinBoxNumero1->value();
    const double n2 = ui->doubleSpinBoxNumero2->value();
    double res = 0.0;

    switch (ui->comboBoxOperacion->currentIndex())
    {
    case 0:  // Suma
        res = n1 + n2;
        break;
    case 1:  // Resta
        res = n1 - n2;
        break;
    case 2:  // Multiplicacion
        res = n1 * n2;
        break;
    case 3:  // División
        res = n1 / n2;
        break;
    }

    QMessageBox::information(this, tr("Resultado"), tr("El resultado es: %1").arg(res));
}

void MainWindow::on_actionSalir_triggered()
{
    close();
}

void MainWindow::on_pushButton_clicked()
{
    on_actionSalir_triggered();
}
