#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <fstream>
using namespace std;

//structure to hold single CDR, write members
struct CDR {
	char num[15];
	char num1[15];
	int day;
	int month;
	int Year;
	int hour;
	int mint;
	int sec;

};

//file name globally
const char filename[50] = "cdr.txt";

//function prototypes
void menu();
void print(CDR);
void showall();
void readf(CDR [], int);
void writef(CDR [], int);
void printHTML(char [12]);
int countCalls(char [12]);
void Delete(int);

int main() {
	
	char choice;
	do {
		menu();
		choice = getche();
		cout<<endl;
		char num[12];
		switch(choice) {
			case '1':
				cout<<"Showing all the records\n";
				showall();
				break;
			case '2':
				cout<<"Reading first 10 records \n";
				//readf
				//writef
				cout<<"Records have been written to new file\n";
				break;
			case '3':
				cout<<"Enter a number to generate HTML report: ";
				cin.getline(num, 12);
				//printHTML(num);
				cout<<"Report generated, open the file in browser";
				break;
			case '4':
				cout<<"Enter a number to count calls made: ";
				cin.getline(num, 12);
				//cout<<coutCalls(num);
				break;
			case '5':
				cout<<"Enter record no to delete: ";
				int id;
				cin>>id;
				//Delete(id);
				break;
			case '6':
				break;
			default:
				cout<<"Invalid input";
		}
	}while(choice != '6');
	return 0;
}


//-----------------------------
//     function definitions
//-----------------------------
void menu() {
	cout<<"\nSelect an option\n";
	cout<<"\t1. Show All\n";
	cout<<"\t2. Write records to new file\n";
	cout<<"\t3. Filter caller record and save to HTML file\n";
	cout<<"\t4. Count calls\n";
	cout<<"\t5. Delete call record\n";
	cout<<"\t6. Exit: ";
}
void print(CDR B) {
	
		cout << B.num << " " << B.num1 << " " << B.day << " " << B.month << " " << B.Year << " " << B.hour << " " << B.mint << " " << B.sec<<endl;

}void showall() {
	ifstream file;
	file.open(filename);
	if (!file) {
		cout << "Not Found ";
		return;

	}
	CDR c;
	while (file >>c. num >>c. num1 >>c. day >>c. month >>c. year >>c. hour >>c. mint >>c. sec) {

		print(c);
	}

	




}