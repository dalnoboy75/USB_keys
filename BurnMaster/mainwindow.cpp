#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "keystable.h"
#include "orgtable.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->keySelectionList->setCurrentIndex(-1);
    ui->orgSelectionList->setCurrentIndex(-1);
    ui->findKeyButton->setIcon(QIcon::fromTheme("edit-find"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_keysCheckButton_clicked()
{
    KeysTable *keyWindow = new KeysTable;
    keyWindow->show();

}


void MainWindow::on_orgCheckButton_clicked()
{
    OrgTable *orgWindow = new OrgTable;
    orgWindow->show();
}

