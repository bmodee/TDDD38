/* 
Date: 2020-22-02
Created by: Björn Modée
Description: a program that prints a tax (VAT) table. The program is supposed to ask the user for the
following values

The user will NEVER enter any other data type than float values, and these will always be in the
interval [-100.00, +100000.00].
*/

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    cout << endl;
    cout << "INPUT" << "\n" << "======" << endl;
    float first_price, second_price, stride, tax_percent;
    cout << "Enter first price: "; //Lower limit for the prices
    cin >> first_price;
    cout << "Enter second price: "; //Upper limit for the prices
    cin >> second_price;
    cout << "Enter stride "; //length for each step in the table
    cin >> stride;
    cout << "Enter tax percent: "; //Tax percentage (a decimal number between 0 and 100 %)
    cin >> tax_percent;



    cout << "\n" << "\n" << "TAX TABLE" << "\n" << "=========" << endl;
    cout << setw(7) << "Price" << setw(15) << "Tax" << setw(20) << "Price with tax" << endl;
    cout << "-----------------------------------------------------" << endl;
    

    for (float price = first_price; price <= second_price; price = price + stride){
        float tax = price*(tax_percent/100);
        float price_w_tax = price + tax;
        cout << setw(7) << price << setw(15) << tax << setw(20) << price_w_tax << endl;
    }
}