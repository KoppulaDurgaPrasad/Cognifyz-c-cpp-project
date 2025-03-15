#include<stdio.h>
int main ()
{
	FILE *F1,*F2; // File pointers for source and destination files
	char ch,Source_File[100],Dest_File[100]; // Variables to store characters and file names
	// Prompt user for source file name and read input
	printf("Enter Source File name: ");
	scanf("%s",Source_File); 
	// Prompt user for destination file name and read input
	printf("\n Enter Destination File name: ");
	scanf("%s",Dest_File);
	// Open source file in read mode
	F1=fopen(Source_File,"r");
	if(!F1)
	{
	// If file cannot be opened, print error and exit
	printf("Error opening source file.\n");
	return 1;
    }
    // Open destination file in write mode
    F2=fopen(Dest_File,"w");
    if(!F2)
    {
    	// If file cannot be created, print error, close source file and exit
    	printf("Error creating destination file.\n");
    	fclose(F1);
    	return 1;
	}
	// Copy contents from source file to destination file character by character
    while((ch=fgetc(F1))!=EOF)
    {
    	fputc(ch,F2);
	}
	printf("File copied successfully.\n"); // Print success message
	// Close both files
	fclose(F1);
	fclose(F2);
	return 0; // End of  the program
}


