#include <iostream>
using namespace std;

double volume(int r){
    return (4/3*3.14)*(r*r*r);


}

    int main()
    {
    	int radius;
    	float vol;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";
        cout<<" Input the radius of ball : ";
    	cin>>radius;

        cout<<" The volume of ball is : "<< volume(radius) << endl;
        return 0;
    }
