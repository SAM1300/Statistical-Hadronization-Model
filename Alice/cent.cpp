#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double yield1, npart1, yield2, npart2, yield3, error1, error2, error3, n1_er ,n2_er;
	cout<<"Enter the yield at first centrality";
	cin>>yield1;
	cout<<"Enter the error in first yield";
	cin>>error1;
	cout<<"Enter Npart at first centrality";
	cin>>npart1;
	cout << "Enter error in Npart at first centrality";
	cin >> n1_er;
	cout<<"Enter the yield at second centrality";
	cin>>yield2;
	cout<<"Enter the error in second yield";
	cin>>error2;
	cout<<"Enter Npart at second centrality";
	cin>>npart2;
	cout << "Enter error in Npart at Second centrality";
	cin >> n2_er;
	double n1=npart1/(npart1+npart2);
	double n2=npart2/(npart1+npart2);

	yield3=(yield1*n1)+(yield2*n2);
	error3=sqrt(((n1*error1)*(n1*error1))+((n2*error2)*(n2*error2))+(((n2*(yield1-yield2)*n1_er)/(npart1+npart2))*((n2*(yield1-yield2)*n1_er)/(npart1+npart2)))+(((n1*(yield2-yield1)*n2_er)/(npart1+npart2))*((n1*(yield2-yield1)*n2_er)/(npart1+npart2))));

	cout<<"Combined yield"<<yield3<<"+-"<<error3;
}
