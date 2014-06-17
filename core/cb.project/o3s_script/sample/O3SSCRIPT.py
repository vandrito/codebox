#   _______ ______  _______    ________________        ______  _________ _______ 
#  (  ___  ) ___  \(  ____ \  (  ____ \__   __/\     /|  __  \ \__   __/(  ___  )
#  | (   ) |/   \  \ (    \/  | (    \/  ) (  | )   ( | (  \  )   ) (   | (   ) |
#  | |   | |  ___) / (_____   | (_____   | |  | |   | | |   ) |   | |   | |   | |
#  | |   | | (___ ((_____  )  (_____  )  | |  | |   | | |   | |   | |   | |   | |
#  | |   | |     ) \     ) |        ) |  | |  | |   | | |   ) |   | |   | |   | |
#  | (___) |\___/  /\____) |  /\____) |  | |  | (___) | (__/  )___) (___| (___) |
#  (_______)______/\_______)  \_______)  )_(  (_______)______/ \_______/(_______)
#
#
# @file    : O3SSCRIPT.py
# @author  : ...
# @version : 1.0.0 
#

import random
import math 

class O3SSCRIPT:
    def __init__(self, id):
        pass

    def main(self): 
        pass
 
    def stop(self):
        pass
        
scriptInstances = dict()

def init(instanceName):
    global scriptInstances
    scriptInstances[instanceName] = O3SSCRIPT(instanceName)

def main(instanceName):
    global scriptInstances
    scriptInstances[instanceName].main()

def stop(instanceName):
    global scriptInstances
    scriptInstances[instanceName].stop()
