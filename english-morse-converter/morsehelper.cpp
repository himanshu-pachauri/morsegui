#include <iostream>
#include "morsehelper.h"
#include <vector>
#include <sstream> 

/*

/ for words
space for letters 
        englishToMorseLib.put("A", ".-");//
        englishToMorseLib.put("B", "-...");
        englishToMorseLib.put("C", "-.-.");
        englishToMorseLib.put("D", "-..");
        englishToMorseLib.put("E", ".");
        englishToMorseLib.put("F", "..-.");
        englishToMorseLib.put("G", "--.");
        englishToMorseLib.put("H", "....");
        englishToMorseLib.put("I", "..");
        englishToMorseLib.put("J", ".---");
        englishToMorseLib.put("K", "-.-");
        englishToMorseLib.put("L", ".-..");
        englishToMorseLib.put("M", "--");
        englishToMorseLib.put("N", "-.");
        englishToMorseLib.put("O", "---");
        englishToMorseLib.put("P", ".--.");
        englishToMorseLib.put("Q", "--.-");
        englishToMorseLib.put("R", ".-.");
        englishToMorseLib.put("S", "...");
        englishToMorseLib.put("T", "-");
        englishToMorseLib.put("U", "..-");
        englishToMorseLib.put("V", "...-");
        englishToMorseLib.put("W", ".--");
        englishToMorseLib.put("X", "-..-");
        englishToMorseLib.put("Y", "-.--");
        englishToMorseLib.put("Z", "--..");

        englishToMorseLib.put("0", "-----");
        englishToMorseLib.put("1", ".----");
        englishToMorseLib.put("2", "..---");
        englishToMorseLib.put("3", "...--");
        englishToMorseLib.put("4", "....-");
        englishToMorseLib.put("5", ".....");
        englishToMorseLib.put("6", "-....");
        englishToMorseLib.put("7", "--...");
        englishToMorseLib.put("8", "---..");
        englishToMorseLib.put("9", "----.");

        englishToMorseLib.put(".", ".-.-.-");
        englishToMorseLib.put(",", "--..--");
        englishToMorseLib.put("?", "..--..");
        englishToMorseLib.put(":", "---...");
        englishToMorseLib.put("-", "-....-");
        englishToMorseLib.put("@", ".--.-.");
        englishToMorseLib.put("error", "........");

*/
morsehelper::morsehelper(){
englishToMorseMap.insert(std::pair<std::string,std::string>("A", ".-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("B", "-..."));
englishToMorseMap.insert(std::pair<std::string,std::string>("C", "-.-."));
englishToMorseMap.insert(std::pair<std::string,std::string>("D", "-.."));
englishToMorseMap.insert(std::pair<std::string,std::string>("E", "."));
englishToMorseMap.insert(std::pair<std::string,std::string>("F", "..-."));
englishToMorseMap.insert(std::pair<std::string,std::string>("G", "--."));
englishToMorseMap.insert(std::pair<std::string,std::string>("H", "...."));
englishToMorseMap.insert(std::pair<std::string,std::string>("I", ".."));
englishToMorseMap.insert(std::pair<std::string,std::string>("J", ".---"));
englishToMorseMap.insert(std::pair<std::string,std::string>("K", "-.-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("L", ".-.."));
englishToMorseMap.insert(std::pair<std::string,std::string>("M", "--"));
englishToMorseMap.insert(std::pair<std::string,std::string>("N", "-."));
englishToMorseMap.insert(std::pair<std::string,std::string>("O", "---"));
englishToMorseMap.insert(std::pair<std::string,std::string>("P", ".--."));
englishToMorseMap.insert(std::pair<std::string,std::string>("Q", "--.-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("R", ".-."));
englishToMorseMap.insert(std::pair<std::string,std::string>("S", "..."));
englishToMorseMap.insert(std::pair<std::string,std::string>("T", "-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("U", "..-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("V", "...-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("W", ".--"));
englishToMorseMap.insert(std::pair<std::string,std::string>("X", "-..-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("Y", "-.--"));
englishToMorseMap.insert(std::pair<std::string,std::string>("Z", "--.."));
englishToMorseMap.insert(std::pair<std::string,std::string>("0", "-----"));
englishToMorseMap.insert(std::pair<std::string,std::string>("1", ".----"));
englishToMorseMap.insert(std::pair<std::string,std::string>("2", "..---"));
englishToMorseMap.insert(std::pair<std::string,std::string>("3", "...--"));
englishToMorseMap.insert(std::pair<std::string,std::string>("4", "....-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("5", "....."));
englishToMorseMap.insert(std::pair<std::string,std::string>("6", "-...."));
englishToMorseMap.insert(std::pair<std::string,std::string>("7", "--..."));
englishToMorseMap.insert(std::pair<std::string,std::string>("8", "---.."));
englishToMorseMap.insert(std::pair<std::string,std::string>("9", "----."));
englishToMorseMap.insert(std::pair<std::string,std::string>(".", ".-.-.-"));
englishToMorseMap.insert(std::pair<std::string,std::string>(",", "--..--"));
englishToMorseMap.insert(std::pair<std::string,std::string>("?", "..--.."));
englishToMorseMap.insert(std::pair<std::string,std::string>(":", "---..."));
englishToMorseMap.insert(std::pair<std::string,std::string>("-", "-....-"));
englishToMorseMap.insert(std::pair<std::string,std::string>("@", ".--.-."));
englishToMorseMap.insert(std::pair<std::string,std::string>(" ", "/"));
englishToMorseMap.insert(std::pair<std::string,std::string>("error", "........"));
for(std::map<std::string,std::string>::iterator it=englishToMorseMap.begin();it!=englishToMorseMap.end();++it){
//std::cout<<"Key :"<<it->first <<" value: "<<it->second<<std::endl;
morseToenglishMap.insert(std::pair<std::string,std::string>(it->second,it->first));
}
// std::cout<<"morse to english map"<<std::endl;

// for(std::map<std::string,std::string>::iterator it=morseToenglishMap.begin();it!=morseToenglishMap.end();++it){
// std::cout<<"Key :"<<it->first <<" value: "<<it->second<<std::endl;

// }

// std::cout<<"english to morse map"<<std::endl;
// for(std::map<std::string,std::string>::iterator it=englishToMorseMap.begin();it!=englishToMorseMap.end();++it){
// std::cout<<"Key :"<<it->first <<" value: "<<it->second<<std::endl;

// }


}
morsehelper::~morsehelper(){
   
     
}
void morsehelper::convertEnglishToMorse(std::string &Eng,std::string &morse){
std::string &temp=Eng;
morse="";
for(std::string::iterator it_str =temp.begin();it_str!=temp.end();++it_str){
  morse+=englishToMorseMap.find(std::string(1,*it_str))->second;     
  morse+=std::string(1,charregex);
}

}
void morsehelper::convertMorseToEnglish(std::string &morse,std::string &Eng){
std::string temp=morse;
Eng="";
std::stringstream check1,temp_stream;
check1.str(morse); 
std::vector<std::string> tokens;
std::string intermediate,temp_intermediate;
std::cout<<check1.str()<<std::endl;
while(getline(check1,intermediate,charregex)){
  tokens.push_back(intermediate);
}
for(std::vector<std::string>::iterator it_vec=tokens.begin();it_vec!=tokens.end();++it_vec){
 Eng+=morseToenglishMap.find(*it_vec)->second;
}
}