#ifndef ORGTABLE_H
#define ORGTABLE_H

#include <QWidget>

namespace Ui {
class OrgTable;
}

class OrgTable : public QWidget
{
    Q_OBJECT

public:
    explicit OrgTable(QWidget *parent = nullptr);
    ~OrgTable();

private:
    Ui::OrgTable *ui;
};

#endif // ORGTABLE_H
