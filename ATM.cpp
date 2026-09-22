// ============================================================
//  ATM - Sistemi Bankar
//  nga Erion Nezha (c) 2026. Te gjitha te drejtat te rezervuara.
// ============================================================
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
 
    // Private variables used inside class
private:
    string name;
    int accnumber;
    char type[10];
    int amount = 0;
    int tot = 0;
 
    // Public variables
public:
    // Function to set the person's data
    void setvalue()
    {
        cout << "Shkruaj emrin\n";
        cin.ignore();
 
        // To use space in string
        getline(cin, name);
 
        cout << "Shkruaj numrin e llogarise\n";
        cin >> accnumber;
        cout << "Shkruaj llojin e llogarise\n";
        cin >> type;
        cout << "Shkruaj bilancin\n";
        cin >> tot;
    }
 
    // Function to display the required data
    void showdata()
    {
        cout << "Emri:" << name << endl;
        cout << "Nr. llogarise:" << accnumber << endl;
        cout << "Lloji i llogarise:" << type << endl;
        cout << "Bilanci:" << tot << endl;
    }
 
    // Function to deposit the amount in ATM
    void deposit()
    {
        cout << "\nShkruaj shumen per depozite\n";
        cin >> amount;
    }
 
    // Function to show the balance amount
    void showbal()
    {
        tot = tot + amount;
        cout << "\nBilanci total eshte: " << tot;
    }
 
    // Function to withdraw the amount in ATM
    void withdrawl()
    {
        int a, avai_balance;
        cout << "Shkruaj shumen per terheqje\n";
        cin >> a;
        avai_balance = tot - a;
        cout << "Bilanci i disponueshem eshte: " << avai_balance;
    }
};
 
// Driver Code
int main()
{
    // Object of class
    Bank b;
 
    int choice;
 
    // Infinite while loop to choose
    // options everytime
    while (1) {
        cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~MIRESEVINI~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
             << "~~~~~~~~~\n\n";
        cout << "Zgjidhni\n";
        cout << "\t1. Shkruaj emrin, numrin dhe llojin e llogarise\n";
        cout << "\t2. Shiko te dhenat\n";
        cout << "\t3. Depozito para\n";
        cout << "\t4. Shiko bilancin total\n";
        cout << "\t5. Terhiq para\n";
        cout << "\t6. Dil\n";
        cin >> choice;
 
        // Choices to select from
        switch (choice) {
        case 1:
            b.setvalue();
            break;
        case 2:
            b.showdata();
            break;
        case 3:
            b.deposit();
            break;
        case 4:
            b.showbal();
            break;
        case 5:
            b.withdrawl();
            break;
        case 6:
            exit(1);
            break;
        default:
            cout << "\nZgjedhje e pavlefshme\n";
        }
    }
}