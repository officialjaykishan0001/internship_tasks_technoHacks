#include<iostream>
#include<vector>
#include<random>
#include<string>
using namespace std;


/**
 * Work : Random password generator task on internship at technohacks
 * Programmer : Jay kishan kharwar
 * Date and Time : 31-08-2023 , Thursday.
 * 
*/

void suffle_Password(string &password)
{
	for(int i=0;i<password.size();i++)
	{
		swap(password[i],password[i+1]);
	}

	return ;
}
int main()
{
	string uppercase_letter = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	string lowercase_letter = "abcdefghijklmnopqrstuvwxyz";
	string symbol = "!@#$%^&*~";
	string numbers = "1234567890";
	
	string all_character = uppercase_letter + numbers + lowercase_letter + symbol;
	
	int length = 12;
	
	random_device rd;
	
	mt19937 generator(rd());
	
	uniform_int_distribution<int> distribution(0,all_character.size()-1);
	
	string password;
	
	for(int i = 0;i< length;i++)
	{
		password += all_character[distribution(generator)];
	}
	
	suffle_Password(password);
	cout<<"password : "<<password<<endl;
	return 0;
}
/**
 * Jai Jai Jai Bajarangbali...
 * this program coded by Jay kishan kharwar
 * at
 * time : 5:50
 * date : 31 -08 - 2023 
*/