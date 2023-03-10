/** \file Book_info.h 
* \brief Class declaration, function prototypes,class functions,necessary libraries are defined here.
* \details The file contains the declaration of all the libraries that will be used in this project. It
* also contains the declaration of the class from which objects will be created in the main program. It 
* contains the prototype definitions for all the functions that will be required for the user tio communicate with the 
* database.
* <BR>
* \author Joseph Uche
* \date 06-03-2023
*/

#include <winsqlite/winsqlite3.h>
#include <string>
#include <cstring>
#include <iostream>
using namespace std;

class Book {
public:
	string title;
	string authors_name;
	string isbn;
	int publication_year;
	string availability;
	Book();
	void read_details(sqlite3* db);
	void save_details(sqlite3* db);

};

int count_callback(void* data, int argc, char** argv, char** colName);//
int callback(void* data, int argc, char** argv, char** colName);//
int print_callback(void* data, int argc, char** argv, char** colName);//


int is_in_database(sqlite3* db,string isbn);//

string change_title(sqlite3* db,string isbn);//
string change_authors_name(sqlite3* db,string isbn);//
int change_publication_year(sqlite3* db,string isbn);//
string change_isbn(sqlite3* db, string isbn);//
void change_availability(sqlite3* db, string isbn);
bool delete_book(sqlite3* db, string isbn);//
void print_table(sqlite3* db);//
void count_books(sqlite3* db);//
void search_by_title(sqlite3* db);//
void search_by_author(sqlite3* db);//
void search_by_year(sqlite3* db);//
void check_availability(sqlite3* db);//

