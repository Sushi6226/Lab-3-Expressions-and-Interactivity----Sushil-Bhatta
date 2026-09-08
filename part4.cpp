#include <iostream>

using namespace std;

int main ()
{
    int nOfpeople;
    int slPerPerson;
    int slPerPizza;

    cout << "\n\n How many people will be at ther at the party? ";
    cin >> nOfpeople;
    
    cout << "\n\n How many pizza will each person have? ";
    cin >> slPerPerson;

    cout << "\n\n How many slices will ther in a pizza? ";
    cin >> slPerPizza;

    int totalSneeded = nOfpeople * slPerPerson;
    int PizzaNeeded = totalSneeded / slPerPizza;

     if(totalSneeded % slPerPizza != 0)
    {
        PizzaNeeded++;
    }


    int leftoverSL = slPerPizza - (totalSneeded % slPerPizza);

cout<<"You will need to order " << PizzaNeeded << " pizzas" <<endl;
cout<<"There will be " << leftoverSL << " leftover slices." <<endl;

return 0;

}