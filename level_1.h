#ifndef LEVEL_1_H
#define LEVEL_1_H

#include <QObject>
#include <QMessageBox>
#include "mainwindow.h"
class level_1 : public QObject
{
    Q_OBJECT
public:
    explicit level_1(QObject *parent = nullptr);
    struct array {short int map[10][10];};
    array arr;
    static array const arrdata;
    void map_gen();
    QPixmap** ground;
    QPixmap** wall;
    QPixmap** target;
    QPixmap** box;
    QPixmap** player;

    QLabel** Ground;
    QLabel** Wall;
    QLabel** Target;
    QLabel** Box;
    QLabel** Player;

signals:

public slots:
};

#endif // LEVEL_1_H
