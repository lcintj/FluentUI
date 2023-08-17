#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QQuickItem>
#include <QQuickPaintedItem>
#include <QPainter>
#include "stdafx.h"

class ScreenshotBackground : public QQuickPaintedItem
{
    Q_OBJECT;
    QML_NAMED_ELEMENT(ScreenshotBackground)
public:
    ScreenshotBackground(QQuickItem* parent = nullptr);
    void paint(QPainter* painter) override;

private:
    QRect _desktopGeometry;
    QPixmap _desktopPixmap;
};


class Screenshot : public QQuickPaintedItem
{
    Q_OBJECT
    QML_NAMED_ELEMENT(Screenshot)
    Q_PROPERTY_AUTO(QPoint,start);
    Q_PROPERTY_AUTO(QPoint,end);
    Q_PROPERTY_AUTO(QColor,maskColor);
public:
    Screenshot(QQuickItem* parent = nullptr);
    void paint(QPainter* painter) override;

private:
    QRect _desktopGeometry;
};

#endif // SCREENSHOT_H