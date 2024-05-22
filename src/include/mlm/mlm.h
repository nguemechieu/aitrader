#include <iostream>
#include <vector>

class LinearRegression {
private:
    double slope;
    double intercept;

public:
    LinearRegression() : slope(0), intercept(0) {}

    void fit(const std::vector<double>& x, const std::vector<double>& y) {
        double sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0;
        int n = x.size();

        for (int i = 0; i < n; i++) {
            sum_x += x[i];
            sum_y += y[i];
            sum_xy += x[i] * y[i];
            sum_x2 += x[i] * x[i];
        }

        slope = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
        intercept = (sum_y - slope * sum_x) / n;
    }

    double predict(double x) {
        return slope * x + intercept;
    }

    void displayEquation() {
        std::cout << "y = " << slope << "x + " << intercept << std::endl;
    }
};

