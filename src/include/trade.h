#include <iostream>
#include <string>
#include <ctime>
#include <vector>

class Trade {
private:
    std::string symbol;
    double volume;
    double openPrice;
    double closePrice;
    std::string tradeType;
    std::time_t openTime;
    std::time_t closeTime;
    bool isOpen;

public:
    Trade(const std::string& symbol, double volume, double openPrice, const std::string& tradeType)
    : symbol(symbol), volume(volume), openPrice(openPrice), tradeType(tradeType) {
        openTime = std::time(nullptr);
        isOpen = true;
    }

    // Simulate opening a trade
    void openTrade() {
        std::cout << "Opening trade for " << volume << " of " << symbol << " at price " << openPrice << std::endl;
        isOpen = true;
        openTime = std::time(nullptr);
    }

    // Simulate closing a trade
    void closeTrade(double closePrice) {
        this->closePrice = closePrice;
        closeTime = std::time(nullptr);
        isOpen = false;
        std::cout << "Closing trade for " << volume << " of " << symbol << " at price " << closePrice << std::endl;
    }

    // Modify an existing trade
    void modifyTrade(double newVolume) {
        std::cout << "Modifying trade. Old Volume: " << volume << " New Volume: " << newVolume << std::endl;
        volume = newVolume;
    }

    // Display trade information
    void displayTradeInfo() const {
        std::cout << "Trade Details:" << std::endl
                  << "Symbol: " << symbol << std::endl
                  << "Volume: " << volume << std::endl
                  << "Open Price: " << openPrice << std::endl
                  << (isOpen ? "Trade is open." : "Trade is closed.") << std::endl
                  << "Open Time: " << ctime(&openTime)
                  << (isOpen ? "" : "Close Time: " + std::string(ctime(&closeTime)) + "Close Price: " + std::to_string(closePrice)) << std::endl;
    }
};


