#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;

//structure to hold single book
struct MCQ {
	struct Mcq{
    char question[300];
    char answer[150];
    char opt1[150];
    char opt2[150];
    char opt3[150];
    char opt4[150];
} ;


//file name globally
const char filename[50] = "qbank.txt";

//function prototypes
void readN(MCQ [], int);
bool askQuestion(MCQ);


int main() {
	
	getch();
	return 0;
}


//-----------------------------
//     function definitions
//-----------------------------

