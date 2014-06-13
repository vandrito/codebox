//   _______ ______  _______    ________________        ______  _________ _______ 
//  (  ___  ) ___  \(  ____ \  (  ____ \__   __/\     /|  __  \ \__   __/(  ___  )
//  | (   ) |/   \  \ (    \/  | (    \/  ) (  | )   ( | (  \  )   ) (   | (   ) |
//  | |   | |  ___) / (_____   | (_____   | |  | |   | | |   ) |   | |   | |   | |
//  | |   | | (___ ((_____  )  (_____  )  | |  | |   | | |   | |   | |   | |   | |
//  | |   | |     ) \     ) |        ) |  | |  | |   | | |   ) |   | |   | |   | |
//  | (___) |\___/  /\____) |  /\____) |  | |  | (___) | (__/  )___) (___| (___) |
//  (_______)______/\_______)  \_______)  )_(  (_______)______/ \_______/(_______)
//
//
// @file    : O3SSIM.cpp
// @author  : ...
// @version : 1.0.0
//
#include "SimulationModel.h"


class O3SSIM: public O3S::SimulationModel {
public:

    O3SSIM(){
       // @TODO: Insert you code here
    }
     
    virtual ~O3SSIM(){
       // @TODO: Insert you code here
    }

    /** Initialize simulation
        */
    virtual void init() {
    }

    /** Simulation behavior
     */
    virtual void run() {

    }

    /** Called on simulation stop
     */
    virtual void stop() {

    }

private:

};


REGISTER_SIMULATION( O3SSIM );
