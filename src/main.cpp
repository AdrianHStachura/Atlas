#include "database.cpp"

int main(void)
{
    int TCP_PORT = 123;

    // create database
    
    // data base
    database myDatabase;
    //record
    myDatabase.create_record("Adrian");    
    
    myDatabase.db_add_field("Favorite_Guitar", "Stratocaster","Adrian");
    
    return 0;
}
