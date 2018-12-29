#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

#define CLASSROOM_PATH "C://Users//Nil//Desktop//timetables//file1_classrooms.csv"
#define TEACHERS_PATH "C://Users//Nil//Desktop//timetables//file2_teachers.csv"
#define GROUPS_SUBJECTS_PATH "C://Users//Nil//Desktop//timetables//file3_groups_subjects.csv"

#define GROUPS_DESTIONATION_PATH "C://Users//Nil//Desktop//timetables//group_%s.csv"
#define TEACHERS_DESTIONATION_PATH "C://Users//Nil//Desktop//timetables//teacher_%s.csv"

//NOTE: The assignation of internal ids start with 1!!!!


typedef struct group_subjectTeacher_pair {
    int teacherId;
    int subjectId;
    int groupId;
    int classroomId;
    group_subjectTeacher_pair *next;
} group_subjectTeacher_pair;

typedef struct timetable {
    int hourId;
    int day;
    group_subjectTeacher_pair *listGST_pairs;       
    timetable* nextHour;
} timetable;


#endif
