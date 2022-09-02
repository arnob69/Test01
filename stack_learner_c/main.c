

// user can take input as many times as they want
// the application will terminate when user enter 0
// user can see a list of menu items and select form it
// user can store int number inside a list
// user can perform CRUD (create , read , update ,delete)
// user can able to clear the list

#include <stdio.h>
int main(void)
{
    // system("cls"); for windown
    system("clear"); // for linux
    int usr_input;
    int data[100];
    int length = 0;
    int custom_index = 0;
    int value = 0;
    int i = 0;
    do
    {
        // creating menu and displaying menu items
        printf("Menu:\n");
        printf("---------------------\n");
        printf("1. Add\n");
        printf("2. Insert\n");
        printf("3. Edit\n");
        printf("4. Delete\n");
        printf("5. Display\n");
        printf("6. Clear\n");
        printf("0. Exit\n");
        printf("---------------------\n");
        printf("Chose an option \n");
        scanf("%d", &usr_input);
        system("clear");
        printf("\n");
        // performing action according to user input
        
        switch (usr_input)
        {
        case 0:
        {
            printf("Thanks for using this tools ! \nRespect++\n");
            // this will terminate the program instantly
            break;
        }
        case 1:
        {
            // Add at the last index
            printf("Enter an intiger to add at the end of array \n");
            scanf("%d", &value);
            data[length] = value;
            printf("%d is added at the index %d\n", value, length);
            length++;
            break;
        }
        case 2:
        {
            // insert
            printf("Enter an index between 0 - %d\n", length);
            scanf("%d", &custom_index);
            if (custom_index <= length)
            {
                printf("Enter an intiger value to add at the index %d\n", custom_index);
                scanf("%d", &value);
                for (i = length; i > custom_index; i--)
                {
                    data[i] = data[i - 1];
                }
                data[custom_index] = value;
                length++;
                printf("%d is inserted at the index %d\n", value, custom_index);
            }
            else
            {
                printf("Invalid index\n");
            }

            break;
        }
        case 3:
        {
            // Edit or replace
            printf("Enter an index between 0 - %d\n", length);
            scanf("%d", &custom_index);
            if (custom_index <= length)
            {
                printf("Enter the new value for index %d\n", custom_index);
                scanf("%d", &value);
                data[custom_index] = value;
                printf("Index %d is updated \n", custom_index);
            }
            else
            {
                printf("Invalid index\n");
            }

            break;
        }
        case 4:
        {

            // delete
            printf("Enter the index between 0 - %d , you want to delete\n", length-1);
            scanf("%d", &custom_index);
            if (custom_index < length)
            {
                for (i = custom_index; i < length; i++)
                {
                    data[i] = data[i + 1];
                }
                data[length] = 0;
                length--;
                printf("Value of index %d is deleted\n", custom_index);
            }
            else
            {
                printf("Invalid input\n");
            }

            break;
        }
        case 5:
        {
            // disply all element of array
            if (length == 0)
            {
                printf("The array is empty! You need to add some items before displaying array :V\n");
            }
            else
            {
                printf("Displaying all the array item ! \n");
                printf("Data : ");
                for (i = 0; i < length; i++)
                {
                    printf("%d  ", data[i]);
                }
            }
            printf("\n");
            break;
        }
        case 6:
        {
            // clear
            if (length > 0)
            {
                for (i = 0; i <= length; i++)
                {
                    data[i] = 0;
                }
                length = 0;
                printf("Data array is cleared succesfully !\n");
            }
            break;
        }
        default:
        {
            printf("Wrong input! please try again\n");
            break;
        }
        }
    } while (usr_input != 0);

    return 0;
}
