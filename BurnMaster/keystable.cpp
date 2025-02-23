#include "keystable.h"
#include "ui_keystable.h"

KeysTable::KeysTable(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::KeysTable)
{
    ui->setupUi(this);
    ui->keysTable->resizeColumnsToContents();

}

KeysTable::~KeysTable()
{
    delete ui;
}
