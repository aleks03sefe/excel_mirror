#include <qapplication.h>
#include <qmainwindow.h>
#include <qstringlist.h>
#include <qtablewidget.h>

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);

  QMainWindow window;
  window.setWindowTitle("excel");
  window.resize(900, 600);

  QTableWidget *table = new QTableWidget;

  table->setColumnCount(26); // current max
  table->setRowCount(20);

  QStringList labels; // we make a list for what each column cell we have made should be labeled as
  for (int i = 0; i < table->columnCount(); i++) {

    labels.append(QString(QChar('A' + i)));// we move true the list and lable all the cells from A-Z
  }
  table->setHorizontalHeaderLabels(labels); // we set the lables over the column numbers

  window.setCentralWidget(table);

  window.show();
  return app.exec();
}