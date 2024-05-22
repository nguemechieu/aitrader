#!/bin/bash

# Stop execution on any error
set -e

# Optional: Echo commands to terminal
set -x

# Update package list
echo "Updating package list..."
sudo apt-get update

# Install dependencies
echo "Installing dependencies..."
sudo apt-get install -y git curl vim

# Set environment variables
echo "Setting environment variables..."
export PROJECT_ENV="development"
export DB_HOST="localhost"
export DB_PORT="3306"

# Create necessary directories
echo "Creating directories..."
mkdir -p ./aitrader

# Check if a specific file exists and create it if it doesn't
CONFIG_FILE="./aitrader/config"
if [ ! -f "$CONFIG_FILE" ]; then
    echo "Creating config file..."
    touch "$CONFIG_FILE"
    echo "Configurations go here" > "$CONFIG_FILE"
fi

echo "Configuration completed successfully."
