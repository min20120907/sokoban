#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QKeyEvent>
#include <QPixmap>
#include <QLabel>
class player : public QObject
{
    Q_OBJECT

public:
    player();
    void keyPressEvent(QKeyEvent *key);
signals:
    void character_turned_back();
    void character_turned_front();
    void character_turned_left();
    void character_turned_right();
public slots:
    void character_turn_back();
    void character_turn_front();
    void character_turn_left();
    void character_turn_right();

private:
    QLabel *player_facing;
    QPixmap *front;
    QPixmap *back;
    QPixmap *left;
    QPixmap *right;
};

#endif // PLAYER_H
