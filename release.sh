#!/bin/sh
set -e
cd Release
cmake --build .
./platformer $@
