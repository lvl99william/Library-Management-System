//
// Created by william on 7/14/24.
//

#ifndef FICTIONBOOK_H
#define FICTIONBOOK_H

#include <string>
#include <vector>
#include "Book.h"

class FictionBook : public Book {
private:
    std::string genre;
    std::string mainCharacter;
    std::string setting;
    std::string plotSummary;
    std::string theme;
    std::string narrativeStyle;
    std::string tone;
    std::vector<std::string> secondaryCharacters;
    bool awardWinner;
    std::string seriesName;
    int seriesNumber;
    bool hasIllustrations;

public:
    FictionBook(std::string title, std::string author, int yearPublished, std::string genre, std::string mainCharacter,
                std::string setting, std::string plotSummary, std::string theme, std::string narrativeStyle,
                std::string tone, const std::vector<std::string>& secondaryCharacters,
                bool awardWinner, std::string seriesName, int seriesNumber, bool hasIllustrations);

    void displayDetails() const override;
};




#endif //FICTIONBOOK_H
