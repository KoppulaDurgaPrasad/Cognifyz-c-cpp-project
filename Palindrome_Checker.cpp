#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String: "; //Prompts the user to Enter a String: 
    getline(cin, str); // Read the entire input string
    char temp;
    string str1=str;
    int z=str.length(); //String length
    for(int i=0;i<z/2;i++)
    {
		temp=str[i];
		str[i]=str[z-i-1];
		str[z-i-1]=temp;
	}
	if (str==str1) {
        cout<< "Given String \""<<str1<<"\" is a Palindrome"<< endl;
    } else {
        cout<<"Given String \""<<str1<<"\" is not a Palindrome" << endl;
    }
    return 0; // End of the program
}
