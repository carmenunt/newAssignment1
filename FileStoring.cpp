#include "FileStoring.hpp"
#include "List.hpp"
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

int writeInFile(List newList) {
    ofstream g;

    g.open("output.txt");
//    if(g.is_open())
//    {
//        int i = 0;
//        while (newList[i])
//        g<<"Hello all."<<endl;
//        g<<"I´m writing files."<<endl;
//        g<<"55"<<endl;
//        g.close();
//    }
//    else
//    {
//        std::cout<<"ERROR: COULD NOT WRITE FILE"<<std::endl;
//    }


    std::ifstream f;
    std::string data = "";

    f.open("output.txt");
//    if(input.is_open())
//    {
//        while (!f.eof())
//        {
//            f>>number;
//            if (f.fail())
//            {
//                f.clear(); // clears the error state
//            }
//            else
//                number>=0 ? data->GetSimpleTreePozitive()->Insert(number) : data->GetSimpleTreeNegative()->Insert(number);
//
//            f>>sign;
//
//
//        }
    f.close();
    return 0;
}

//        void IOHandler::load()
//        {
//            std::ifstream input;
//            input.open("input.numbers.txt");    //Open file
//            if(input.is_open())
//            {
//                std::string contents = "";
//                std::string line;
//                std::string section;
//                while(!input.eof()){            //While end hasn't been reached
//                    getline(input, line);       //Read line
//                    while (line.length() > 0)
//                        //Parse line
//                    {
//                        section = line.substr(0, line.find(','));
//                        line.erase(0, line.find(','));
//                        if(line.find(',') != ~0U)
//                            line.erase(0, line.find(',')+1);
//                        if(section.find('.') != ~0U)
//                            section = section.substr(0, section.find('.'));
//                        std::istringstream convert(section);
//                        int aux = 0;
//                        convert>>aux;
//                        std::cout<<"Inserting "<<aux<<std::endl;
//                        if(convert.fail())
//                            aux = 0;                                //Not an integer
//                        else
//                        {
//                            this->processNumber(aux, false);           //If converted to integer, process it
//                        }
//                    }
//                }
//            }
//        }

