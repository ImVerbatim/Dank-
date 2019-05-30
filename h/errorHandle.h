#pragma once

#include <string>
#include <iostream>
enum ErrorPriority {
    SOURCE_ERROR,
    SOURCE_WARNING,
    INTERNAL_ERROR,
    RUNTIME_ERROR 
    };


    class ErrorHandler {
         private:
            bool isError; 
        
        public: 
            void setIsError(bool isError) { this->isError= isError; }
            bool getIfError() { return isError; }
            void log(std::string msg,ErrorPriority err);
            void msg(std::string msg);
            std::string priorityToStr(ErrorPriority err);

    };

    extern ErrorHandler error;
     class DankErrors {
         private: 
            std::string msg;
            ErrorPriority errPriority;

         public:
            DankErrors(std::string msg, ErrorPriority errPri);

            void log();

    };




