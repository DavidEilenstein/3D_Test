#ifndef TEST_WINDOW_H
#define TEST_WINDOW_H

#include <QMainWindow>
#include <QtDataVisualization>
#include <QWidget>

using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class test_window; }
QT_END_NAMESPACE

class test_window : public QMainWindow
{
    Q_OBJECT

public:
    test_window(QWidget *parent = nullptr);
    ~test_window();

private:
    Ui::test_window *ui;

    QtDataVisualization::Q3DScatter *scatter_graph;
    QWidget *container_widget;
};
#endif // TEST_WINDOW_H
