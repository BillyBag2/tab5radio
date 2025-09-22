#!/bin/bash

BOARD="m5stack:esp32:m5stack_tab5"

# Compile the Arduino project in the current directory
arduino-cli compile --fqbn $BOARD ./TAB5Radio --build-path ./build --verbose
