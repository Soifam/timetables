#ifndef GROUPS_HPP
#define GROUPS_HPP

#include <string>
#include "teachers.hpp"

//class "groups" includes the groups, their subjects, teachers, and links (aka MAIN DATA)

class groups;

struct tSubject {
    std::string label;
    int subjectId;
    tTeacher* teacher;
    tSubject* nextSubject;
};


struct tGroup {
    std::string label;
    int groupId;    
    int studentNumber;    
    tSubject* firstSubject;
    tGroup* nextGroup;
};


class groups {
    public:
        groups();
        void getGroups(groups go);
        tGroup *head, *tail;
};

#endif