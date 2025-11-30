#include <iostream>
using namespace std;
int main()
{
	float ticket = 1200;
	float discount = ticket * 0.25;
	float discounted = ticket - discount;
	float serviceCharges = discounted * 0.08;
	float finalAmount = discounted + serviceCharges;
	cout <<"Ticket Price = 1200" <<endl;
	cout <<"Discount = 25% added" <<endl;
	cout <<"Service Charges = 8% added" <<endl;
	cout <<"Online Booking Fee = 50 PKR" <<endl;
	cout <<"final Ticket Cost: " <<endl;
	return 0;
}
