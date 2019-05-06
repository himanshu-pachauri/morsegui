#ifndef MORSE_HELPER_H
#define MORSE_HELPER_H
#include <map>
#include <iostream>
#include <string>
class morsehelper{
    private:
    std::map<std::string,std::string> englishToMorseMap;
    std::map<std::string,std::string> morseToenglishMap;
  	const char charregex=' ';
  	const char wordregex='/';
    public: 
    morsehelper();
    void convertEnglishToMorse(std::string &,std::string &);
    void  convertMorseToEnglish(std::string &,std::string &);

    ~morsehelper();

};


#endif 
