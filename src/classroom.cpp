#include "main.hpp"
#include "classroom.hpp"
#include "teachers.hpp"
#include "groups.hpp"
#include <iostream>
#include <fstream>
#include <string>


classroom::classroom() {
            classroom::head = NULL;
            classroom::tail = NULL;
        }

void classroom::getClassrooms(classroom co)    {

    std::cout << "\n\n #### ADDING CLASSROOMS #### \n";

    std::ifstream fClassrooms(CLASSROOM_PATH);
    
    while (fClassrooms.good()) {
                
        tClassroom *temp = new tClassroom;            
        temp->nextClassroom = NULL;
        
        std::string capacity; 

        getline(fClassrooms, temp->label, ';');
        if (temp->label.compare("") == 0) {break;}

        std::cout << "Adding " << temp->label << "... " << std::endl;

        getline(fClassrooms, temp->type, ';');
        getline(fClassrooms, capacity, '\n');        
        temp->studentCapacity = std::stoi(capacity);
        
                
      
        if(co.head == NULL)
            {
                temp->classroomId = 1;
                co.head = temp;
                co.tail = temp;
                temp=NULL;
            }
            else
            {	
                temp->classroomId = co.tail->classroomId + 1;
                co.tail->nextClassroom = temp;
                co.tail = temp;
            } 
    }             
    
    fClassrooms.close();
       
      
    }
