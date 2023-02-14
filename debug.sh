#!/bin/sh
set -e
cd Debug
cmake --build .
./platformer $@
