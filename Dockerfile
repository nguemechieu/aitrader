# Use the official GCC image as the base image
FROM gcc:latest

# Set the working directory in the container
WORKDIR /usr/src/app

# Install Boost, CMake, and Qt5
RUN apt-get update && apt-get install -y \
    libboost-all-dev \
    cmake \
    qt5-default \
    qt5-qmake

# Copy the current directory contents into the container at /usr/src/app
COPY . .

# Configure and build the project
RUN mkdir build && cd build && \
    cmake .. && \
    make

# Command to run the executable
CMD ["./build/AITrader"]