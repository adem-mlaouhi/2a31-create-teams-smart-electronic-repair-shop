#ifndef CONNECTION_H
#define CONNECTION_H

#include <QSqlDatabase>

class Connection
{
public:
    Connection();          // Constructor
    bool createconnect();  // Function to open connection

private:
    QSqlDatabase db;       // Database object
};

#endif // CONNECTION_H
