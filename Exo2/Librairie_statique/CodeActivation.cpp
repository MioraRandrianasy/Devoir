#include "./CodeActivation.hpp"

bool CodeActivation::verifCodeActivation()
{
    std::ifstream fs("code.txt");
    if (fs.fail())
    {
        std::cout << "Le fichier contenant la clé d'activation est introuvable" << std::endl;
        return false;
    }
    else
    {
        std::string key;
        fs >> key;
        fs.close();
        if (key == keyTest)
        {
            std::cout << "Activé" << std::endl;
            activation();
            return true;
        }
        else
        {
            std::string s;
            std::ifstream tryFyle("essai.txt");
            tryFyle >> s;
            tryFyle.close();
            int i = stoi(s), value;
            std::ofstream w("essai.txt");
            value = (i - 1);
            w << value;
            w.close();
            return false;
        }
    }
}

void CodeActivation::activation()
{
    std::ofstream fs("essai.txt");
    fs << "activated";
    status = true;
    fs.close();
}

CodeActivation::CodeActivation()
{
    std::string i;
    std::ifstream fs("essai.txt");
    if (fs.fail())
    {
        std::cout << "essai.txt introuvable" << std::endl,
        point = 0;
    }
    else
    {
        fs >> i;
        if (i == "activated")
        {
            status = true;
        }
        else
        {
            point = stoi(i);
        }
        fs.close();
    }
}

CodeActivation::~CodeActivation()
{
}

bool CodeActivation::getStatus()
{
    return status;
}

int CodeActivation::getPoint()
{
    return point;
}
