#include<iostream>
#include <string>

using namespace std;



void movie_info(string name, int minutes = 90) {
    cout << "Movie name: " << name << endl;
    cout << "Running time: " << minutes << " minutes" << endl;
}

int main() {



    //question 5

    string movie_name = "ANIMAL";
    int movie_time = 142;

    movie_info(movie_name);

    movie_info(movie_name, movie_time);


    return 0;
}
