#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , counter(0) {
    ui->setupUi(this);

    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
    ui->txtResult->setText("0");

    connect(ui->btnCount, &QPushButton::clicked, this, &MainWindow::onCountClicked);
    connect(ui->btnReset, &QPushButton::clicked, this, &MainWindow::onResetClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onCountClicked() {
    counter++;
    QString s = QString::number(counter);

    ui->labelInfo->setText("Painiketta painettu " + s + " kertaa");
    ui->txtResult->setText(s);
}

void MainWindow::onResetClicked() {
    counter = 0;
    QString s = QString::number(counter);


    ui->labelInfo->setText("Painiketta painettu 0 kertaa");
    ui->txtResult->setText(s);
}
