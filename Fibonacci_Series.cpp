#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of terms: \n"; // Prompt user to enter the number of terms in the Fibonacci series
    cin>>n;
    int f1=0,f2=1; // Initialize first two terms of the series
    cout<<"Fibonacci Series: "<<f1<<","<<f2<<","; // Print the first two numbers
    int f3=f1+f2;
    for (int i=3;i<=n;i++) {
        cout<<f3<<","; // Print the next term in the series
        f1=f2;
        f2=f3;
        f3=f1+f2;
    }
    return 0; // End of the Program
}
/*
Other ways to achieve the same functionality:
1. Using  Recursive Function:
Example:
    int fibonacci(int n)
	{
    if (n <= 1)
        return n;
    return fibonacci(n-1) + fibonacci(n-2);
    }
2. Using Binet's Formula:
   Example:
   int binet(int n) 
   {
   double phi = (1 + sqrt(5)) / 2;
   return round(pow(phi, n) / sqrt(5));
	}
*/
