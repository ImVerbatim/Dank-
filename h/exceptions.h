#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#include "exception"

class NoFileName : public std::exception 
{
    virtual const char* what() const throw()
    {
        return "No filename specified!";
    }

};


class FileDoesNotExist: public std::exception 
{
    virtual const char* what() const throw()
    {
        return "The Input file does not exist!";
    }

};
#endif