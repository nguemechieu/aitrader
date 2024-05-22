
#include <iostream>

class Candlestick {
private:
    double open;
    double high;
    double low;
    double close;
    double volume;  // Optional: Can be omitted if not needed

public:
    // Constructor with initialization list
    Candlestick(double open, double high, double low, double close, double volume)
    : open(open), high(high), low(low), close(close), volume(volume) {}

    // Accessor methods for each attribute
    double getOpen() const { return open; }
    double getHigh() const { return high; }
    double getLow() const { return low; }
    double getClose() const { return close; }
    double getVolume() const { return volume; }

    // Mutator methods for each attribute (optional, depending on whether you allow modifications after creation)
    void setOpen(double value) { open = value; }
    void setHigh(double value) { high = value; }
    void setLow(double value) { low = value; }
    void setClose(double value) { close = value; }
    void setVolume(double value) { volume = value; }

    // Method to display the candlestick data
    void display() const {
        std::cout << "Open: " << open << ", High: " << high
                  << ", Low: " << low << ", Close: " << close
                  << ", Volume: " << volume << std::endl;
    }
};
