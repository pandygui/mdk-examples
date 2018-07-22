/*
 * Copyright (c) 2018 WangBin <wbsecg1 at gmail.com>
 */
#ifndef QMDKWidgetRenderer_H
#define QMDKWidgetRenderer_H

#include <QOpenGLWidget>
#include <memory>

namespace mdk {
class Player;
}
class QMDKPlayer;
#ifndef Q_MDK_API
#define Q_MDK_API Q_DECL_IMPORT
#endif
class Q_MDK_API QMDKWidgetRenderer : public QOpenGLWidget
{
    Q_OBJECT
public:
    QMDKWidgetRenderer(QWidget *parent = nullptr);
    ~QMDKWidgetRenderer();
    void setSource(QMDKPlayer* player);

protected:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
private:
    std::shared_ptr<QMDKPlayer> player_;
};
#endif // QMDKWidgetRenderer_H
