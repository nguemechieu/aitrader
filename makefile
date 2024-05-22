dependencies:
    @echo "Installing required packages..."
    sudo apt-get update
    sudo apt-get install -y libsome-lib-dev libanother-lib-dev

build:
    gcc -o myprogram main.c

all: dependencies build