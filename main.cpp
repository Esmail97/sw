#include <iostream>
using namespace std;

double volume(int r){
    return (4/3*3.14)*(r*r*r);


}

    int main()
    {
    	int rad1;
    	float volsp;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;

        cout<<" The volume of a sphere is : "<< volume(rad1) << endl;
        return 0;
    }
