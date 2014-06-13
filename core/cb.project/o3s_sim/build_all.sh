#!/bin/bash

# Script args
WORKSPACE=$1

export O3S_BASE=/opt/o3s/
cd $WORKSPACE && make -f Makefile.simulation