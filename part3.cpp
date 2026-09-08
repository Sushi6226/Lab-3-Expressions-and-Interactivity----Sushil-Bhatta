#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
    const double rate = 0.075;

    double price;
    
    cout << fixed << setprecision(2);

    cout << "\n Enter the price of an item: $";
    cin >> price;

    if (price <= 0 )
    {
        cout << "you want it for free or do i pay you for that???";
        return 0;
    }

    double taxAmt = price * rate;
    double totalAmt = taxAmt + price;

    cout << "Original price: $" << price << endl;
    cout << "Sales tax: $" << taxAmt << endl;
    cout << "Total cost: $" << totalAmt << endl;
    return 0;
}