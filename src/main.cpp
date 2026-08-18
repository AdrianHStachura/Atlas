#include "database.cpp"
// #include "input.cpp"

int main(void)
{
    int TCP_PORT = 123;

    // create database

    database myDatabase;
    myDatabase.create_record("Adrian");    

    return 0;
}
