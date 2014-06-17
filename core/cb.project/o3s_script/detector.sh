#!/bin/sh

if [ -f $1/*.py ]; then
  echo "O3S"
  exit 0
else
  exit 1
fi
