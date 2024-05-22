#include <iostream>
#include <database/sqlite3.h>
#include <string>

class Database {
private:
    sqlite3* db;
    char* errMsg;
    int rc;

    static int callback(void* NotUsed, int argc, char** argv, char** azColName) {
        for (int i = 0; i < argc; i++) {
            std::cout << azColName[i] << " = " << (argv[i] ? argv[i] : "NULL") << std::endl;
        }
        std::cout << std::endl;
        return 0;
    }

public:
    Database(const std::string& databaseName) {
        rc = sqlite3_open(databaseName.c_str(), &db);
        if (rc) {
            std::cerr << "Error opening SQLite3 database: " << sqlite3_errmsg(db) << std::endl;
            sqlite3_close(db);
        } else {
            std::cout << "Opened database successfully\n";
        }
    }

    ~Database() {
        sqlite3_close(db);
    }

    void executeSQL(const std::string& sql) {
        rc = sqlite3_exec(db, sql.c_str(), callback, 0, &errMsg);
        if (rc != SQLITE_OK) {
            std::cerr << "SQL error: " << errMsg << std::endl;
            sqlite3_free(errMsg);
        } else {
            std::cout << "Operation done successfully\n";
        }
    }
};
