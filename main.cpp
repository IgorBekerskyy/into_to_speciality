#include "plane.h"

#include <iostream>



int main() {

   plane first ("Mriya", 700 , 170, 1985, 270);


   first.company  = "Airways";
   
   
   cout <<"Company: "<< first.company<<endl;
   
   
   first.price = 300000000;
   
   
    cout <<"Price:  "<< first.price<<endl;
    
    
    
    
    
    first.get_inf();





    plane second ("Boeing", 500, 140, 1996, 210 );
    
    
    second.company = "Qatar Airlines";
    
    
    cout <<"Company: "<< second.company<<endl;


    second.price = 250000000;
    
    
    cout <<"Price:  "<< second.price<<endl;

    second.get_inf();
    
    
    
    


    plane third ("Airbus ", 600,130, 2001 , 195);


    third.company = "Turkish Airlines";
    
    
     cout <<"Company: "<< third.company<<endl;
     

    third.price = 190000000;
    
    
    cout <<"Price:  "<< third.price<<endl;


    third.get_inf();



} 
