// restaurant menu system
#include <iostream>
using namespace std;
int main()
{
    int order, no_deals;
    cout << " Welcom to Shree Haridash restaurant " << endl;
    cout << "  MENU CARD" << endl;
    cout << endl;
    cout << "(1)  Sev Tamatar+5 Roti          $50 only." << endl;
    cout << "(2) Paneer Masala +5 Roti            $90 only." << endl;
    cout << "(3)    Dal Fry + 6 Roti                    $.45 only." << endl;
    cout << "(4)  Paneer Chilly   +5 Roti              $100 only." << endl;
    cout << "(5)        Mix Veg +5 Roti                   $ 80 only." << endl;
    cout << "(6)       Fry Rice                              $ 40 only." << endl;
    cout << endl;
    cout << "Please select the order number: ";
    cin >> order;
    cout << "Please enter the number of deals: ";
    cin >> no_deals;
    cout << endl;
    switch (order)
    {

    case 1:
        cout << "Order :Sev Tamartar +5 roti." << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $50only." << endl;
        cout << "Total price : " << "$" << 50 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    case 2:
        cout << "Paneer Masala +  5 Roti." << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $90  only." << endl;
        cout << "Total price : " << "$" << 90 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    case 3:
        cout << "Order :Dal Fry." << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $40 only." << endl;
        cout << "Total price : " << "$" << 40 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    case 4:
        cout << "Order : Paneer Chilly+5  Roti." << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $100only." << endl;
        cout << "Total price : " << "$" << 100 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    case 5:
        cout << "Order :  Mix Veg + 5 Roti  ." << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $80 only." << endl;
        cout << "Total price : " << "$" << 80 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    case 6:
        cout << "Order : Fry Ricr" << endl;
        cout << "Number of deals : " << no_deals << endl;
        cout << "Price of each deal: $40only." << endl;
        cout << "Total price : " << "$" << 40 * no_deals << " " << "only." << endl;
        cout << endl;
        cout << "THANK YOU FOR COMING" << endl;
        break;
    }
    return 0;
}