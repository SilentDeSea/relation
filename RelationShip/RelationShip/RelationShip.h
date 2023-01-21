#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_RelationShip.h"

class RelationShip : public QMainWindow
{
    Q_OBJECT

public:
    RelationShip(QWidget *parent = Q_NULLPTR);

private:
    Ui::RelationShipClass ui;
};
