#include <string>

#include <iostream>

using namespace std;



class plane {



private:

        string name; 

        int pass; 

        int vol; 

protected:

        int year; 

        int weight;  

public:

        string company; 

        int price; 



    plane ();

    plane (string planename, int planepass, int planevol, int planeyear, int plainweight );



    string getName();

    int getPass();

    int getVol();

    int getYear();

    int getWeight();



    void get_inf();



    ~plane();

};
