#include "../include/Bot.h"
#include <iostream>

Bot::Bot(){
    std::cout << "Hello, I am randy. I will be your ai agent today." << std::endl;
    getInput();
}

void Bot::getInput(){
    std::string userInput;
    std::cout << "Give me something to work with!" << std::endl;
    std::getline(std::cin, userInput);
    conversation.push_back(userInput);
    printConversation();

}

void Bot::printConversation(){
    std::cout << "Conversation: " << std::endl;
    for(int i = 0; i < conversation.size(); i++){
        std::cout << conversation[i] << std::endl;
    }
    getInput();
}