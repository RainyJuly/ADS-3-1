#include "MySet.h"
#define menu "1)Insert the key\n2)Erase the key\n3)Find the key\n4)Print the tree\n5)Esc\n"

int main()   
{
	Set s;
	unsigned choice = 1;
	double value;
	while (choice)
	{
		cout << menu;
		cin >> choice;
		switch (choice)
		{
		case 1:
			system("cls");
			cout << "Enter the key to insert: ";
			while (!(cin>> value) || (cin.peek() != '\n'))
			{
				cin.clear();
				while (cin.get() != '\n');
				cout<< "Error!"<< endl;
			}
			

			(s.insert(int(value))) ? cout <<  int(value) << " " << " was inserted!" << endl : cout << "The key"<<" " << int(value)<< " " << " was already added" << endl;
			break;                                                                  
		case 2:
			system("cls");
			cout << "Enter the key to erase: ";
			cin >> value;
			(s.erase(int(value))) ? cout  << int(value) << " " << "was erased" << endl : cout << "This key" << " " << int(value) << " " << "doesn't exist in this tree" << endl;
			break;
		case 3:
			system("cls");
			cout << "Enter the key to find: ";
			cin >> value;
			(s.find(int(value))) ? cout << "The key" << " " << int(value) << " " << "exists here" << endl : cout << "The key" << " " << int(value) << " " << "does not exist here" << endl;
			break;
		case 4:
			system("cls");
			cout << "Your tree is:\n";
			cout<<s;
			cout << endl;
			break;
		case 5:
			system("cls");
			cout << "Do you want to continue with empty tree?\n1)Yes\n2)No" << endl;
			cin >> value;
			if (value == 1)
			{
				choice = 1;
				s.clear();
				system("cls");
				break;
			}
			else
			{
				choice = 0;
				system("cls");
				break;
			}
		}
	}
	return 0;
}