#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"Enter a String: "; //Prompts the user to Enter a String: 
    getline(cin, str); // Read the entire input string
    char temp;
    int z=str.length(); //String length
    for(int i=0;i<z/2;i++)
    {
		temp=str[i];
		str[i]=str[z-i-1];
		str[z-i-1]=temp;
	}
    cout<<"The Reversed String is: "<<str; //print the Reversed String
    return 0; // End of the program
}
/* 
Other ways to reverse a string in C++:
1. Using Built-in Functions:
   Example: reverse(str.begin(),str.end());
2. Using a for loop with swap function:
   Example: 
   for (int i=0;i<z/2;i++) {
       swap(str[i],str[z-i-1]);
   }
*/
