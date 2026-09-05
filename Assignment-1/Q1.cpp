/* Develop a menu driven program to demonstrate the following operations of Arrays
    -----MENU-----
    1. CREATE
    2. DISPLAY
    3. INSERT
    4. DELETE
    5. LINEAR SEARCH
    6. EXIT 
*/
#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n = 0;
    int choice;

    do
    {
        cout << "\n---- MENU ----\n";
        cout << "1. CREATE"<<endl;
        cout << "2. DISPLAY"<<endl;
        cout << "3. INSERT"<<endl;
        cout << "4. DELETE"<<endl;
        cout << "5. LINEAR SEARCH"<<endl;
        cout << "6. EXIT"<<endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:                                          //ARRAY CREATION
            cout << "\nEnter number of elements: ";
            cin >> n;

            if (n < 1 || n > 100)
            {
                cout << "Invalid size\n";
                n = 0;
                break;
            }

            cout << "Enter "<< n << " elements:\n";

            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }

            cout << "Array created\n";
            break;

        case 2:                                        //DISPLAY ARRAY
            if (n == 0)
            {
                cout << "Array is empty.\n";
            }
            else
            {
                cout << "Array elements: ";

                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }

                cout << endl;
            }
            break;

        case 3:                                      //INSERTION OF ELEMENTS IN ARRAY
        {
            int value, position;

            if (n == 100)
            {
                cout << "Array is full\n";
                break;
            }

            cout << "\nEnter value to insert: ";
            cin >> value;

            cout << "Enter position (1 to " << n + 1 << "): ";
            cin >> position;

            if (position < 1 || position > n + 1)
            {
                cout << "Invalid position.\n";
            }
            else
            {
                for (int i = n; i >= position; i--)
                {
                    arr[i] = arr[i - 1];
                }

                arr[position - 1] = value;
                n++;

                cout << "Element inserted \n";
            }

            break;
        }

        case 4:                                         //DELETION OF ELEMENTS IN ARRAY
        {
            int position;

            if (n == 0)
            {
                cout << "Array is empty\n";
                break;
            }

            cout << "\nEnter position to delete (1 to " << n << "): ";
            cin >> position;

            if (position < 1 || position > n)
            {
                cout << "Invalid position.\n";
            }
            else
            {

                for (int i = position - 1; i < n - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }

                n--;

                cout << "Element deleted\n";
            }

            break;
        }

        case 5:                                         //LINEAR SEARCH
        {
            int value;
            bool found = false;

            if (n == 0)
            {
                cout << "Array is empty\n";
                break;
            }

            cout << "\nEnter element to search: ";
            cin >> value;

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    cout << "Element found at position " << i + 1 << ".\n";
                    found = true;
                    break;
                }
            }

            if (!found)
            {
                cout << "Element not found.\n";
            }

            break;
        }

        case 6:                                              //EXIT
            cout << "\nExiting program...\n";
            break;

        default:
            cout << "\nInvalid choice\n";
        }

    } while (choice != 6);

    return 0;
}        