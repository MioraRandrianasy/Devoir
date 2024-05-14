#ifndef __POINT__
#define __POINT__

#include <iostream>
#include <fstream>
#include <string>

class CodeActivation
{
private:
    std::string keyTest = "AZERTYUIOP";
    int point;
    bool status = false;

public:
    CodeActivation();
    ~CodeActivation();
    bool verifCodeActivation();
    void activation();
    bool getStatus();
    int getPoint();
};

#endif