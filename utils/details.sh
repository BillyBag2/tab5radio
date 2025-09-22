#!/bin/bash

FQBN="m5stack:esp32:m5stack_tab5"

# Get board details using arduino-cli
arduino-cli board details --fqbn "$FQBN"