#ifndef GITQWIDGET_H
#define GITQWIDGET_H

#include <QMainWindow>

class GitQWidget : public QMainWindow
{
    Q_OBJECT

public:
    GitQWidget(QWidget *parent = nullptr);
    ~GitQWidget();
};
#endif // GITQWIDGET_H
