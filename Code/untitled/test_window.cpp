#include "test_window.h"
#include "ui_test_window.h"

test_window::test_window(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::test_window)
{
    ui->setupUi(this);

    scatter_graph = new QtDataVisualization::Q3DScatter();
    container_widget = QWidget::createWindowContainer(scatter_graph);
    ui->gridLayout_Target->addWidget(container_widget);
}

test_window::~test_window()
{
    delete ui;
}

