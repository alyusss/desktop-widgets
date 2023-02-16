#ifndef BASEWIDGET_H
#define BASEWIDGET_H

#include <QDialog>

class BaseWidget : public QDialog
{
    Q_OBJECT

private:
    int _width;
    int _height;
    QBrush _brush;
    QPoint _offPos;

    void _initUI();
    void _initSignalSlots();

protected:
    void paintEvent(QPaintEvent *event) Q_DECL_OVERRIDE;
    void mousePressEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseMoveEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void mouseReleaseEvent(QMouseEvent *event) Q_DECL_OVERRIDE;
    void keyPressEvent(QKeyEvent *event) Q_DECL_OVERRIDE;

public:
    QString name;
    BaseWidget(QWidget *parent = 0);
    BaseWidget(QColor background, QWidget *parent = 0);
    BaseWidget(int width, int height, QColor background, QWidget *parent = 0);
    void setBrush(QBrush brush);
};

#endif // BASEWIDGET_H