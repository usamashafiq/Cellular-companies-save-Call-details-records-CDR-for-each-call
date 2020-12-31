#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;

//structure to hold single book
struct Book {
	int id;
	char title[300];
	char author[200];
	float price;
	int pages;
};

//file name globally
const char filename[50] = "collection.txt";

//function prototypes
void menu();
void search(int);
void insert(Book);
void Delete(int);
void modify(Book);
void reportHTML();

int main() {
	char choice;
	do {
		menu();
		choice = getche();
		cout<<endl;
		int id;
		Book b;
		switch(choice) {
			case '1':
				cout<<"Enter book id to search: ";
				cin>>id;
				//search(id);
				break;
			case '2':
				cout<<"Enter the book information \n";
				cout<<"ID: ";
				cin>>b.id;
				cout<<"Title: ";
				cin.getline(b.title, 300);
				cout<<"Author: ";
				cin.getline(b.author, 200);
				cout<<"Price: ";
				cin>>b.price;
				cout<<"Pages: ";
				cin>>b.pages;
				//insert(b);
				break;
			case '3':
				cout<<"Which book record you wnat to delete. input ID: ";
				cin>>id;
				//Delete(id);
				break;
			case '4':
				cout<<"Enter book id you wnat to modify: ";
				cin>>b.id;
				cout<<"Enter new title: ";
				cin.getline(b.title, 300);
				cout<<"Enter new author: ";
				cin.getline(b.author, 200);
				cout<<"Enter new pages: ";
				cin>>b.pages;
				cout<<"Enter new price: ";
				cin>>b.price;
				//modify(b);
				break;
			case '5':
				cout<<"Generating report wait";
				//reportHTML();
				cout<<"Report generated, open the file in browser";
				break;
			case '6':
				break;
			default:
				cout<<"Invalid input";
		}
	}while(choice != '6');
}


//-----------------------------
//     function definitions
//-----------------------------
void menu() {
	cout<<"\nSelect an option\n";
	cout<<"\t1. Search\n";
	cout<<"\t2. Add record\n";
	cout<<"\t3. Delete record\n";
	cout<<"\t4. Modify record\n";
	cout<<"\t5. Generate HTML reprot\n";
	cout<<"\t6. Exit: ";
}
