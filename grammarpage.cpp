#include "grammarpage.h"

#include "test.h"

QGrammarPage::QGrammarPage(QWidget* parent):QWidget (parent)
{
    SetupGui();
    LoadList();
}

QGrammarPage::~QGrammarPage()
{

}

void QGrammarPage::SetupGui()
{
    m_pList = new QListWidget();
    m_pText = new QTextEdit();

    m_pLeftVL = new QVBoxLayout();
    m_pMainHL = new QHBoxLayout();

    m_pLeftVL->addWidget(m_pList);
    m_pMainHL->addLayout(m_pLeftVL);
    m_pMainHL->addWidget(m_pText, 1);

    setLayout(m_pMainHL);
}

void QGrammarPage::LoadList()
{
    QSqlQuery query(db.GetDatabase());

    //FillDb(query); //test function

    query.exec("SELECT * FROM test;");

    while(query.next())
        m_pList->addItem(query.value(0).toString());
}
