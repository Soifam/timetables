#ifndef CLASSROOM_HPP
#define CLASSROOM_HPP

class classroom;


        
typedef struct tClassroom {
    std::string label;
    std::string type;
    int studentCapacity;
    int classroomId;    
    tClassroom* nextClassroom;
} tClassroom;


class classroom {

    public:
        classroom();        
        void getClassrooms(classroom co);                  
        tClassroom *head, *tail;        
    
};

#endif