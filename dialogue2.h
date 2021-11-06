#ifndef DIALOQUE_H
#define DIALOQUE_H
#include<QWidget>
 #include<QLabel>
#include<QLineEdit>
#include<QCheckBox>
#include<QPushButton>


class dialogue :public QWidget
{
public:
    explicit dialogue(QWidget *parent=nullptr);
protected:
    void createWidgets();
    void placeWidgets();
    void makeConnexions();

protected:
  QLabel *label;
  QLineEdit *edit;
  QPushButton *search;
  QPushButton *close;


  QCheckBox *c1;
   QCheckBox *c2;


};

#endif // DIALOQUE_H
