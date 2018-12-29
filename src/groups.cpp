#include "main.hpp"
#include "classroom.hpp"
#include "teachers.hpp"
#include "groups.hpp"
#include <iostream>
#include <fstream>
#include <string>


groups::groups() {
            groups::head = NULL;
            groups::tail = NULL;
        }