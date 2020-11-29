#include "Client.h"

Client::Client() {

}
Client::Client(string fullName, string address) {
	this->name = fullName;
	this->address = address;
}
Client::Client(string fullName, string address, int totalSales) {
	this->name = fullName;
	this->address = address;
	this->totalSales = totalSales;
}

void Client::PrintInfo() {
	cout << "Name: " << name << endl;
	cout << "Address: " << address << endl;
	cout << "Total Sales: " << totalSales << endl << endl;
}