#ifndef KEYSTABLE_H
#define KEYSTABLE_H

#include <QWidget>

namespace Ui {
class KeysTable;
}

class KeysTable : public QWidget
{
    Q_OBJECT

public:
    explicit KeysTable(QWidget *parent = nullptr);
    ~KeysTable();

private:
    Ui::KeysTable *ui;
};

#endif // KEYSTABLE_H
