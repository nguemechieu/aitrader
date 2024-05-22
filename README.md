
# AITrader
![aitrader](./src/logo/AITrader_Logo.jpg)
AITrader is a powerful and efficient automated trading application built in C++ designed for high-frequency trading on cryptocurrency and stock markets. It leverages advanced artificial intelligence algorithms to analyze market data and execute trades at optimal times.

## Features

- **Real-Time Data Processing**: Fast and efficient processing of real-time market data.
- **AI-Driven Trading Strategies**: Utilizes machine learning algorithms to predict market movements and make trading decisions.
- **Customizable Trading Strategies**: Users can customize trading strategies according to their risk appetite and investment goals.
- **Graphical User Interface**: Includes a user-friendly dashboard for monitoring trades and market conditions.
- **Detailed Analytics**: Offers comprehensive analytics on past trades and market trends.
- **Multi-Platform Support**: Compatible with major operating systems including Windows, macOS, and Linux.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes.

### Prerequisites

What you need to install the software and how to install them:

```bash
sudo apt-get install build-essential
sudo apt-get install libboost-all-dev
sudo apt-get install qt5-default
```

### Installing

A step-by-step series of examples that tell you how to get a development environment running:

```bash
git clone https://github.com/nguemechieu/aitrader.git
cd aitrader
mkdir build && cd build
cmake ..
make
```

This will compile the AITrader app and create an executable in the `build` directory.

### Running the tests

Explain how to run the automated tests for this system:

```bash
./run_tests
```

## Usage

How to use the app in live trading environments:

```bash
./aitrader --config yourconfigfile.cfg
```

## Built With

- [C++](https://en.cppreference.com/w/) - The main programming language used
- [Qt](https://www.qt.io/) - Used to create the graphical user interface
- [Boost](https://www.boost.org/) - Used for various utility functions and components

## Contributing

Please read [CONTRIBUTING.md](https://github.com/nguemechieu/aitrader/CONTRIBUTING.md) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

We use [SemVer](http://semver.org/) for versioning. For the versions available, see the [tags on this repository](https://github.com/nguemechieu/aitrader/tags).

## Authors

- **Noel Nguemechieu** - *Initial work* - [nguemechieu](https://github.com/nguemechieu)

See also the list of [contributors](https://github.com/nguemechieu/aitrader/contributors) who participated in this project.

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details

## Acknowledgments

- Hat tip to anyone whose code was used
- Inspiration
- etc
