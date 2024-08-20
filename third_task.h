#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>

namespace third_task {
    int solution(int argc, char *argv[]);

    class PhoneBook : public QWidget {
    Q_OBJECT

    public:
        explicit PhoneBook();

    private slots:

        void addContact();

        void deleteContact();

        void loadContacts();

    private:
        QLineEdit *name;
        QLineEdit *phone;
        QListWidget *contacts;
    };

}