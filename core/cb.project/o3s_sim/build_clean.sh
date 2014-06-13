#!/bin/bash

# Script args
WORKSPACE=$1

cd $WORKSPACE && make -f Makefile.simulation clean