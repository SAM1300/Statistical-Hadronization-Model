#include<iostream>
# include <fstream>
#include<cmath>
using namespace std;
int main()
{
	double quant1, err1, quant2, err2, part1, part2 ;
	cout<<"Enter the value of first quantity";
	cin>>quant1;
	cout<<"Enter the value of error in first quantity";
	cin>>err1;
	cout << "Enter Particle id of particle in numerator";
	cin >> part1;
	cout<<"Enter the value of second quantity";
	cin>>quant2;
	cout<<"Enter the value of error in second quantity";
	cin>>err2;
	cout << "Enter Particle id of particle in denominator";
	cin >> part2;
	double quant=quant1/quant2;
	double err= quant*sqrt(((err1/quant1)*(err1/quant1))+((err2/quant2)*(err2/quant2)));
	cout<<quant<<"+-"<<err;
	ofstream f;
	f.open("60-80upnewt.txt",ios_base::app);
	f << part1 << "\t" << part2 << "\t" << "60-80" << "\t" << quant << "\t" << err << "\n";
	f.close();
	
}
