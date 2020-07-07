#include "Luggage.cpp"
#include<iostream>
#include <vector>
using namespace std;
int luggage::count = 0;

int main()
{
	vector <luggage*> container;
	int choice_1 = 0;
	int choice_2 = 0;
	while (choice_1 != 4) // while the choice is not 4 the program and menu keep running
	{
		cout << "\n";
		cout << "Welcome to the Luggage Manager!\n";
		cout << "-------------------------------" << endl;
		cout << " 1) Add luggage\n";	
		cout << " 2) Remove luggage\n";
		cout << " 3) Show all luggage\n";
		cout << " 4) Exit\n";
		cout << " Enter your choice: \n";
		cin >> choice_1;

		switch (choice_1)
		{
		case 1:
			system("cls");
			cout << "\n";
			cout << "Which type of luggage would you liked to add?" << endl;
			cout << "---------------------------------------------" << endl;
			cout << " 1) Box" << endl;
			cout << " 2) Sphere" << endl;
			cout << " 3) Cube" << endl;
			cout << " 4) Pyramid" << endl;
			cout << " 5) Cylinder" << endl;
			cout << " 6) Cone" << endl;
			cout << " 7) Ellipsoid" << endl;
			cout << " 8) Hexagonal Prisim" << endl;
			cout << "\n";
			cout << "Enter your choice" << endl;
			cin >> choice_2;

			switch (choice_2)
			{
			case 1:
			{
				double height, length, width;
				cout << "Enter the height of the box" << endl;
				cin >> height;
				cout << "Enter the length of the box" << endl;
				cin >> length;
				cout << "Enter the width of the box" << endl;
				cin >> width;
				container.push_back(new box(height, width, length));
				cout << "Added box to container" << endl;
				break;
			}
			case 2:
			{
				double radius;
				cout << "Enter the radius of the sphere" << endl;
				cin >> radius;
				container.push_back(new sphere(radius));
				cout << "Added sphere to container" << endl;
				break;
			}
			case 3:
			{
				double width;
				cout << "Enter the length of the cube" << endl;
				cin >> width;
				container.push_back(new cube(width));
				cout << "Added cube to container" << endl;
				break;
			}
			case 4:
			{
				double base, height;
				cout << "Enter the base of the pyramid" << endl;
				cin >> base;
				cout << "Enter the height of the pyramid" << endl;
				cin >> height;
				container.push_back(new pyramid(base, height));
				cout << "Added pyramid to container" << endl;
				break;
			}
			case 5:
			{
				double radius, length;
				cout << "Enter the length of the cylinder" << endl;
				cin >> length;
				cout << "Enter the radius of the cylinder" << endl;
				cin >> radius;
				container.push_back(new cylinder(radius, length));
				cout << "Added cylinder to container" << endl;
				break;
			}
			case 6:
			{
				double radius, height;
				cout << "Enter the radius of the cone" << endl;
				cin >> radius;
				cout << "Enter the height of the cone" << endl;
				cin >> height;
				container.push_back(new cone(radius, height));
				cout << "Added cone to container" << endl;
				break;
			}
			case 7:
			{
				double axis1, axis2, axis3;
				cout << "Enter the 1st axis of the ellipsoid" << endl;
				cin >> axis1;
				cout << "Enter the 2nd axis of the ellipsoid" << endl;
				cin >> axis2;
				cout << "Enter the 3rd axis of the ellipsoid" << endl;
				cin >> axis3;
				container.push_back(new ellipsoid(axis1, axis2, axis3));
				cout << "Added ellipsoid to container" << endl;
				break;
			}
			case 8:
			{
				double edge, height;
				cout << "Enter the edge of the hexagonal prisim" << endl;
				cin >> edge;
				cout << "Enter the height of the hexagonal prisim" << endl;
				cin >> height;
				container.push_back(new hexagonalPrisim(edge, height));
				cout << "Added hexagonal prisim to container" << endl;
				break;
			}
			default:
			{
				cout << "Incorrect choice" << endl;
				break;
			}
			}
			break;
		case 2:
		{
			system("cls");
			cout << "\n";
			int count = 1;
			int input = 0;
			if (container.empty())
			{
				cout << "There are no luggages in the container" << endl;
			}
			else
			{
				cout << "Enter the number of which luggage item you would like to remove" << endl;
				cout << "---------------------------------------------------------------" << endl;
				for (int i = 0; i < container.size(); i++)
				{
					cout << count++ << ") " << container[i]->getType() << ": " << container[i]->getVolume() << " cm3" << endl;
				}
				cout << "Enter your choice" << endl;
				cin >> input;
				cout << "Removed " << container[input - 1]->getType() << ": " << container[input - 1]->getVolume() << " cm3" << endl;
				delete container[input - 1];
				container.erase(container.begin() + input - 1);
			}
			break;
		}
		case 3:
		{
			system("cls");
			cout << "\n";
			int count = 1;
			cout << "Displaying all luggages" << endl;
			cout << "--------------------" << endl;
			for (int i = 0; i < container.size(); i++)
			{
				cout << count++ << ") " << container[i]->getType() << ": " << container[i]->getVolume() << " cm3" << endl;
			}
			double volume_total = 0.0;
			for (int i = 0; i < container.size(); i++)
			{
				volume_total += container[i]->getVolume();
			}
			cout << "\nTotal number of luggage items: " <<luggage::GetCount() <<endl;
			cout << "Total volume of all items: " << volume_total <<" cm3" << endl;
			break;
		}
		case 4:
			system("cls");
			cout << "Thank you for using our service!" << endl;
			break;
		default:
			system("cls");
			cout << "Not a Valid Choice. \n";
			cout << "Please choose again.\n";
		}
	}
	return 0;
}
