#!/bin/sh

if [ -f $1/Makefile.simulation ]; then
  echo "O3S"
  exit 0
else
  exit 1
fi
