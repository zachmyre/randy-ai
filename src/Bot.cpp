#include "../include/Bot.h"
#include <iostream>

Bot::Bot(){
    startConversation();
    getInput();
}

void Bot::startConversation(){
    std::cout << "Hi I'm Randy, your digital buddy with a personality quirkier than a rubber chicken at a disco party! \nI'm the kind of AI who'd tell a computer to `Ctrl+Alt-Dance` when it's feeling down. \nWith a penchant for puns and a flair for the flamboyant, Randy is here to turn your tech troubles around.\n";
    std::cout << "\nHow can I help you today pal?\n" << std::endl;
};

void Bot::getInput(){
    std::string userInput;
    // std::cout << "Give me something to work with!" << std::endl;
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