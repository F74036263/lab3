#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <algorithm>
using namespace std;

int n,i,sum=0;
vector<int> cow(10000);

int main()
{
	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out", ios::out);
	infile>>n;
	
	for (i=0;i<n;i++)
	{
        	infile>>cow[i];
		
	}
	sort(cow.begin(),cow.end());
	for(i=9999;i>=9995;i--)
	{
		sum=sum+cow[i];
	}
	outfile<<sum<<endl;
    
} 
