#include "main.hpp"
#include "classroom.hpp"
#include "teachers.hpp"
#include "groups.hpp"
#include <iostream>
#include <fstream>
#include <string>



int main () {
   

    classroom co;
    co.getClassrooms(co);

    teachers to;  
    to.getTeachers(to);

    // groups go;
    // go.getGroups(go);

    

    
    // int found=0;
    // while (found==0) {
    //    for (int i=0; i<30; i++) {
            

    //     }
    // }

    //Create timetable file 
    char fileChar[100];
    std::snprintf (fileChar, sizeof fileChar, GROUPS_DESTIONATION_PATH, "caca1234");
    std::string filePath = fileChar;    
    std::ofstream fTimetable(filePath);   
    fTimetable << ";MONDAY;TUESDAY;WEDNESDAY;THURSDAY;FRIDAY\n";
    fTimetable << "8:10-9:10\n9:10-10:10\n10:10-10:30\n10:30-11:30\n11:30-12:30\n12:30-12:45\n12:45-13:45\n13:45-14:45\n";
    fTimetable.close();
    
    
    std::cout << "funcionaaaa" << std::endl;
    system("pause");
    return 0;
}