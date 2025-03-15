#include<stdio.h>  

int main()
{
    int n; // Store the number of subjects
    printf("Enter no. of Subjects: "); // Prompt the user to enter the number of subjects
    scanf("%d", &n);  // Read user input
    if (n<=0) // Check if the entered number of subjects is negative
    {
        printf("Invalid number of Subjects. Please enter a Positive number.\n");
        return 0; // Exit the program if input is invalid
    }
    else
    {
        int i;
        float Grades[n],sum=0.0,average; // Array to store grades, sum variable, and average variable
        for (i=0;i<n;i++) // Loop to input grades for each subject
        {
            printf("Enter grade in between 1 to 10 for the Subject %d: ",i+1);
            scanf("%f", &Grades[i]); // Read grade input
            sum += Grades[i]; // Add each grade to sum
        }
        average = sum / n; // Calculate the average of grades
        printf("The recorded average is: %.2f\n",average); // Print the recorded average with two decimal precision
    }
    return 0;  // End of  the Program
}

