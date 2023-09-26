#ifndef BOT_H
#define BOT_H

#include <vector>
#include <string>

class Bot {
public:
    Bot(); // constructor
    void getInput();
    void answerQuestion(); 
    void addToConversation(const std::string& str);
    void printConversation();


private:
    std::vector<std::string> conversation;
    std::string userInput;
};

#endif