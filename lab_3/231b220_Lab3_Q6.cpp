#include <iostream>

using namespace std;

class rectangle{

    int lenght , width ;

    public:
        int area( int l  = 0 , int b = 0){

            int area_ = l * b ;
            return area_ ;
        }

        int para(int l = 0 , int b = 0 ){
            int para_ = 2*( l + b );
            return para_;
        }

        void set_parameter(int l = 0 , int b = 0){
            lenght = l;
            width = b;
        }

        void get_parameter(){
            cout<< "Lenght: " << lenght << "\n"<< "width :" << width << endl;
        }
};


int main(){

    class rectangle rect ;
    rect.set_parameter();
    rect.get_parameter();
    return 0;

}
