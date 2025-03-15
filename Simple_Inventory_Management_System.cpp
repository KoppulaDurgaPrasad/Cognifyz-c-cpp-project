#include<bits/stdc++.h>
using namespace std;

struct Item { // Structure to stoore item details
    int id; // Id of the item
    string name; // Name of the item
    int quantity; // Qunatity of the item
    double price; // Price of the item
};

void addItem(Item inventory[], int &count) //Functions to add an item to the inventory
{
    cout<<"Enter ID: ";
    cin>>inventory[count].id;
    cin.ignore(); // Cleat input buffer
    cout<<"Enter Name: ";
    getline(cin,inventory[count].name);
    cout<<"Enter Quantity: ";
    cin>>inventory[count].quantity;
    cout<<"Enter Price: ";
    cin>>inventory[count].price;
    count++; // Increases inventory count after adding an item
}

void displayItems(Item inventory[], int count) // Function to display all items in the inventory
{
    for(int i=0;i<count;i++)
    {
	
        cout<<inventory[i].id<<" "<<inventory[i].name<<" "<<inventory[i].quantity<<" $"<<inventory[i].price<<endl;
    }
}

void searchByID(Item inventory[], int count) // Function to search for an item by its ID
{
    int id;
    cout<<"Enter ID: ";
    cin>>id;
    for(int i=0;i<count;i++)
    {
        if(inventory[i].id == id)
        {
           cout<<inventory[i].id<<" "<<inventory[i].name<<" "<<inventory[i].quantity<<" $"<<inventory[i].price<<endl;
        }
    }
}

void searchByName(Item inventory[], int count) // Function to search for an item by its Name
{
    string name;
    cin.ignore();
    cout<<"Enter Name: ";
    getline(cin, name);
    for (int i=0;i<count;i++)
    {
        if (inventory[i].name==name)
        {
            cout<<inventory[i].id<<" "<<inventory[i].name<<" "<<inventory[i].quantity<<" /-" << inventory[i].price << endl;
        }
    }
}

int main()
{
    Item inventory[100]; // to store upto 100 items
    int count=0,choice=0; // variables to track item and user choice
    while(true) // Infinite loop to keep the menu running until user exits
	{
        cout<<"1.Add\n2.Display\n3.Search ID\n4.Search Name\n5.Exit\nChoice: ";
        cin>>choice;
        switch(choice) // Switch case to handle user choices
		{
            case 1:addItem(inventory, count); 
			break;
            case 2:displayItems(inventory, count); 
			break;
            case 3:searchByID(inventory, count);
			 break;
            case 4:searchByName(inventory, count);
			 break;
            case 5:return 0;  // Clean exit
            default: cout << "Invalid choice, try again.\n";
        }
    }
    return 0; // End of Program
}
