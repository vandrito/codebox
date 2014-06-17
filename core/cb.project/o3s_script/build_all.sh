#!/bin/bash

# Script args
WORKSPACE=$1

export O3S_BASE=/opt/o3s/
cd $WORKSPACE && /opt/o3s/tools/bin/ScriptCreator O3SSCRIPT.scriptspec