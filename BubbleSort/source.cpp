/*
Jason Bowerman 
organizes items using a bubble search
*/
#include <iostream>
#include <fstream>

using namespace std;

ifstream in("words.txt");//my file


void loadWords(string words[], int & size);
void printWords(string words[], int size, string tag);  //function prototypes 
void bubbleSort(string words[], int size);
int main()
{
	//checking if the file failed to open
	if(in.fail())
		cout<<"could not open words.txt";
	
	string words[1000];
	int size = 0;
	
	loadWords(words, size); //original orientation
	printWords(words,size,"Original Orientation");
	bubbleSort(words,size); //sorted orientation
	printWords(words,size,"Sorted Orientation");
	
	return 0;
}

//loads all the words from the file
void loadWords(string words[], int & size)
{
	while(in.peek() != EOF)
	{
		in>>words[size];
		size++;
	}
}

//prints all the words int the array
void printWords(string words[], int size, string tag)
{
	cout<<"\n-------------------\n"<<tag<<"\n-------------------\n";
	for(int i = 0; i < size; i++)
	{
		cout<<words[i]<<endl;
	}
	cout<<endl;
}

//where the magic happens
void bubbleSort(string words[], int size)
{
	string temp;
	
	for(int i = 0; i < size; i++)
	{
		for(int j = 0; j < size - i - 1; j++) //if you start at 1 here then it will never check the first value
		{
			if(words[j] > words[j+1]) // determins if an itteration is greater than the one following
			{
				temp = words[j];
				words[j] = words[j+1];  // simple swap of strings in the array
				words[j+1] = temp;
			}
		}
	}
}
