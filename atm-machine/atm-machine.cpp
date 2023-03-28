#include<iostream>
using namespace std;

int main()
{
    // Initialize variables
    int choice;
    float balance = 5000.00, withdraw, deposit;

    // Display the ATM menu to the user
    cout<<"********Welcome to ATM Service**************"<<endl;
    cout<<"1. Check Balance"<<endl;
    cout<<"2. Withdraw Cash"<<endl;
    cout<<"3. Deposit Cash"<<endl;
    cout<<"4. Quit"<<endl;
    cout<<"*********************************************"<<endl;

    // Prompt the user to enter their choice
    cout<<"Enter your choice: ";
    cin>>choice;

    // Switch statement to handle user's choice
    switch(choice)
    {
        // Case 1: Check Balance
        case 1:
            // Display the user's current balance
            cout<<"Your balance is: "<<balance<<endl;
            break;

        // Case 2: Withdraw Cash
        case 2:
            // Prompt the user to enter the amount they want to withdraw
            cout<<"Enter the amount you want to withdraw: ";
            cin>>withdraw;

            // If user has insufficient funds, display an error message
            if(balance < withdraw)
            {
                cout<<"Insufficient balance"<<endl;
            }
            // Otherwise, subtract the withdrawal amount from the user's balance and display the updated balance
            else
            {
                balance = balance - withdraw;
                cout<<"You have withdrawn "<<withdraw<<" and your remaining balance is "<<balance<<endl;
            }
            break;

        // Case 3: Deposit Cash
        case 3:
            // Prompt the user to enter the amount they want to deposit
            cout<<"Enter the amount you want to deposit: ";
            cin>>deposit;

            // Add the deposit amount to the user's balance and display the updated balance
            balance = balance + deposit;
            cout<<"You have deposited "<<deposit<<" and your new balance is "<<balance<<endl;
            break;

        // Case 4: Quit
        case 4:
            // Display a message thanking the user for using the ATM service
            cout<<"Thank you for using our ATM service"<<endl;
            break;

        // Default case: Invalid Choice
        default:
            // Display an error message for invalid choice
            cout<<"Invalid choice"<<endl;
    }

    // End the program
    return 0;
}



// In this program, the user is presented with four options - check balance, withdraw cash, deposit cash, or quit. The user enters their choice, and based on the input, the program performs 
// the corresponding action. If the user selects the "Withdraw Cash" option, they are prompted to enter the amount they want to withdraw. If the user's account balance is insufficient, the program 
// will display a message informing the user that they do not have sufficient funds. Similarly, if the user selects the "Deposit Cash" option, they are prompted to enter the amount they want to 
// deposit. Finally, if the user selects the "Quit" option, the program will terminate.