
#include "morsehelper.h"
int main(int argc,char **argv){
morsehelper helper;
std::string english="ABC HIMASHU";
std::string morse="";

 helper.convertEnglishToMorse(english,morse);
 //std::cout<<morse<<std::endl;
helper.convertMorseToEnglish(morse,english);
std::cout<<english<<std::endl;


}