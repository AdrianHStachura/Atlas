#include "headers.h"


class record
{
private:
    // hash map of fields
                    // search by string not record       and variant so many data types in the data structure
    std::unordered_map<std::string, std::variant<int,double,bool,std::string>> fields;
public:
    // favorite guitar
    int add_field(std::string field_name,std::string data)
    {
        // only limited to strings right now 
        fields[field_name] = data;

        return 0;
    }
    int delete_field(std::string field_name)
    {
        return 0;
    }     
};


// records needs to me a hashmap so a hashmap inside of a hashmap
class database
{
private:
    // hash map of records 
    std::unordered_map<std::string,record> records;
    
public:

    int create_record(std::string recordName)
    {
        // make a record
        record newRecord;

        // record name is the KEY
        records[recordName] = newRecord;

        // put it in database 
        return 0;
    }
    // Todo create a function for main() to be able to access and edit the fields

    // for a sunny day!
    /**int delete_record(std::string recordName, std::string databaseName)
    {
        return 0;
    }
    **/     
};

