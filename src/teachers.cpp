#include "main.hpp"
#include "classroom.hpp"
#include "teachers.hpp"
#include "groups.hpp"
#include <iostream>
#include <fstream>
#include <string>


teachers::teachers() {
            teachers::head = NULL;
            teachers::tail = NULL;
        }

void teachers::getTeachers(teachers to)    {

    std::cout << "\n\n #### ADDING TEACHERS #### \n";

    std::ifstream fTeachers(TEACHERS_PATH);    
    
    while (fTeachers.good()) {
                
        tTeacher *temp = new tTeacher;            
        temp->nextTeacher = NULL;
        
        std::string tempHours_Aula, tempHours_Pati;

        getline(fTeachers, temp->label, ';');
        if (temp->label.compare("") == 0) {break;}

        std::cout << "Adding " << temp->label << "... " << std::endl;

        getline(fTeachers, temp->tutor, ';');
        getline(fTeachers, tempHours_Aula, ';');
        getline(fTeachers, tempHours_Pati, '\n');
            
          
        temp->hours_GuardAula = std::stoi(tempHours_Aula);
        temp->hours_GuardPati = std::stoi(tempHours_Pati);
        
               
        
        if(to.head == NULL)
            {
                temp->teacherId = 1;
                to.head = temp;
                to.tail = temp;
                temp=NULL;
            }
            else
            {	
                temp->teacherId = to.tail->teacherId + 1;
                to.tail->nextTeacher = temp;
                to.tail = temp;
                
            } 
        }  
        
    fTeachers.close();  
}
