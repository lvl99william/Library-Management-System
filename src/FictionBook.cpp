//
// Created by william on 7/14/24.
//

#include "../include/FictionBook.h"

FictionBook::FictionBook(std::string title, std::string author, int yearPublished, std::string genre, std::string mainCharacter,
                         std::string setting, std::string plotSummary, std::string theme, std::string narrativeStyle,
                         std::string tone, const std::vector<std::string>& secondaryCharacters,
                         bool awardWinner, std::string seriesName, int seriesNumber, bool hasIllustrations)
    : Book(title, author, yearPublished), genre(genre), mainCharacter(mainCharacter), setting(setting),
      plotSummary(plotSummary), theme(theme), narrativeStyle(narrativeStyle), tone(tone),
      secondaryCharacters(secondaryCharacters), awardWinner(awardWinner), seriesName(seriesName),
      seriesNumber(seriesNumber), hasIllustrations(hasIllustrations) {}

void FictionBook::displayDetails() const {
    Book::displayDetails();
    std::cout << "Genre: " << genre << std::endl;
    std::cout << "Main Character: " << mainCharacter << std::endl;
    std::cout << "Setting: " << setting << std::endl;
    std::cout << "Plot Summary: " << plotSummary << std::endl;
    std::cout << "Theme: " << theme << std::endl;
    std::cout << "Narrative Style: " << narrativeStyle << std::endl;
    std::cout << "Tone: " << tone << std::endl;
    std::cout << "Secondary Characters: ";
    for (const auto& character : secondaryCharacters) {
        std::cout << character << ", ";
    }
    std::cout << std::endl;
    std::cout << "Award Winner: " << (awardWinner ? "Yes" : "No") << std::endl;
    std::cout << "Series Name: " << seriesName << std::endl;
    std::cout << "Series Number: " << seriesNumber << std::endl;
    std::cout << "Illustrations: " << (hasIllustrations ? "Yes" : "No") << std::endl;
}