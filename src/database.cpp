#include "headers.h"




/*
TODO!

Dont Allow for records have the same name

Fields Needs More Data Types

Functions needed

Delete Record 
Delete Field


*/




class record
{
private:
    // hash map of fields
                    // search by string not record       and variant so many data types in the data structure
    std::unordered_map<std::string,std::string> fields;
public:
    // favorite guitar
    int add_field(std::string field_name,std::string data)
    {
        // only limited to strings right now 
        fields[field_name] = data;
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
        // find if duplicate 
        // make a record
        record newRecord;   

        // record name is the KEY
        records[recordName] = newRecord;

        return 0;
    }
    
    int db_add_field(std::string field_name,std::string data, std::string recordName_s)
    {
        // search hashmap of records for recordName
        //recordName_s using find

        
        auto recordName_r = records.find(recordName_s);

        // If its there then we somehow turn it into a record
        if (recordName_r == records.end())
        {
            // key is not found
            return 1;
        }
        // else it is found 

        // I have no idea how this works i need to research first second etc LOL
        recordName_r->second.add_field(field_name,data);
    
        return 0;
    } 
};

