#include <iostream>
using namespace std;


class shirt{
public:
    int collarsize ,  sleeveLength;


};


class pants{
public:
    float waistSize ,inSeam;

};


void displayClothingFacts(int c , int s){
        cout<<"Collarsize "<< c << "\n"<<"Sleevlenght "<< s;
}

void displayClothingFacts(float w , float i){
        cout << "WaistSize " << w << "\n" << "inSeam" << i ;
}

int main(){
     class shirt s1;
     class pants p1;
     s1.collarsize = 10 ;
     s1.sleeveLength = 15 ;
     p1.inSeam = 10.01;
     p1.waistSize = 30.1;

     displayClothingFacts(s1.collarsize , s1.sleeveLength);
     cout << "\n";
     displayClothingFacts(p1.inSeam , p1.waistSize);
     return 0 ;



return 0;
}
