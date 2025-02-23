#include "orgtable.h"
#include "ui_orgtable.h"

OrgTable::OrgTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::OrgTable)
{
    ui->setupUi(this);
    ui->orgTable->resizeColumnsToContents();
}
OrgTable::~OrgTable()
{
    delete ui;
}
