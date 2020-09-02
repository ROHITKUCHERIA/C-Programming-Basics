//***********************  Memory Allocation & using Arrays in Classes ********************


#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void intitCounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no : " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the Price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}
int main()
{
    Shop s1;
    s1.intitCounter();
    s1.setPrice();
    s1.setPrice();
    s1.setPrice();
    s1.displayPrice();
    return 0;
}