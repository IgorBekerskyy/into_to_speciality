#include "plane.h"

using namespace std;



plane:: plane (string plane_name, int plane_pass, int plane_vol, int plane_year , int plane_weight ){

    name = plane_name;

    pass = plane_pass;

    vol = plane_vol;

   year = plane_year;

   weight = plane_weight ;

}

    string plane::getName(){

    return name;}



    int plane::getPass(){

    return pass;}



    int plane::getVol() {

    return vol;}



    int plane::getYear() {

    return year;}



    int plane::getWeight() {

    return weight;}



    void plane::get_inf() {

        cout << "\nName" <<"\""<<getName() << "\""<<" ||"

        << " Number of passengers  " << getPass() <<" ||"

        << " Volume " << getVol() <<" ||"

        << " Year of foundation " << getYear() <<" ||"

        << " Weight " << getWeight() << "\n";
    }

    plane::~plane() { }

