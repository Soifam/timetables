#ifndef TEACHERS_HPP
#define TEACHERS_HPP

#include <string>

class teachers;

typedef struct tTeacher {

    std::string label;
    std::string tutor;

    int teacherId;

    int hours_GuardAula;
    int hours_GuardPati;
    
    tTeacher* nextTeacher;

} tTeacher;

class teachers {
    public:
        teachers();
        void getTeachers(teachers to);
        tTeacher *head, *tail;
};



#endif