#include <iostream>
using namespace std;
int main()
{
	int burgerPrice = 350, drinkPrice = 120, friesPrice = 150;
	int totalBill = (2 * burgerPrice) + drinkPrice + friesPrice;
	float salesTax = totalBill * 0.07;
	float finalAmount = totalBill + salesTax;
	float average = finalAmount/4.0;
	cout <<"Total Bill: " << totalBill << " Pkr" <<endl;
	cout <<"Sales Tax 7(%): " << salesTax << " Pkr" <<endl;
	cout <<"Final Amount (with Tax): " << finalAmount <<" pkr" <<endl;
	cout <<"Average Cost Per Item: " << average << " Pkr" <<endl;
	return 0;
}
