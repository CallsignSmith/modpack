class CfgVehicles {
    class LandVehicle;
    class Car: LandVehicle {
        class ACE_Actions;
        class Turrets;
        class HitPoints;
    };
    class Car_F: Car {
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions;
        };
        class Turrets: Turrets {
            class MainTurret;
        };
        class HitPoints: HitPoints {
            class HitBody;
            class HitEngine;
            class HitFuel;
        };
    };
    class UK3CB_BAF_Jackal_Base_D: Car_F {
        faction = "CUP_B_GB";
        crew = "CUP_B_BAF_Soldier_MTP";
        typicalCargo[] = { "CUP_B_BAF_Soldier_MTP" };
        fuelCapacity = 15; // Reduced from 100. Gives ~40km range. 230L tank
        hullDamageCauseExplosion = 0;
        maxSpeed = 129;
        peakTorque = 800;
        class Turrets: Turrets {
            class MainTurret;
        };
        class HitPoints: HitPoints {
            class HitBody: HitBody {
                armor = 1.5; // Default: 0.7
            };
            class HitEngine: HitEngine {
                armor = 4; // Default: 2
            };
            class HitFuel: HitFuel {
                armor = 2; // Default: 1
            };
        };
    };
    class UK3CB_BAF_LandRover_Base: Car_F {
        fuelCapacity = 10; // Reduced from 70. Gives ~30km range. 93L tank
        ace_refuel_fuelCapacity = 93;
        hullDamageCauseExplosion = 0;
        peakTorque = 1000;
        maxOmega = 450;
        class HitPoints: HitPoints {
            class HitBody: HitBody {
                armor = 1.5; // Default: 0.7
            };
            class HitEngine: HitEngine {
                armor = 4; // Default: 2
            };
            class HitFuel: HitFuel {
                armor = 2; // Default: 1
            };
        };
        class Turrets: Turrets {
            class MainTurret;
        };
        COVER_ACTIONS
    };
    class Wheeled_APC_F: Car_F {
        class NewTurret;
    };

    #include "vehicles\CfgBulldog.hpp"
    #include "vehicles\CfgCoyote.hpp"
    #include "vehicles\CfgJackal.hpp"
    #include "vehicles\CfgLandRover.hpp"
    #include "vehicles\CfgMastiff.hpp"
    #include "vehicles\CfgRidgeback.hpp"
    #include "vehicles\CfgWolfhound.hpp"
    #include "vehicles\CfgHemtt.hpp"
    #include "vehicles\CfgJackalCUP.hpp"
    #include "vehicles\CfgCoyoteCUP.hpp"
    #include "vehicles\CfgLandRoverCUP.hpp"

    class Tank_F;
    class CUP_2S6_Base: Tank_F {
        radarType = 2;
    };
    class CUP_ZSU23_Base: Tank_F {
        radarType = 2;
    };

    class Boat_F;
    class Rubber_duck_base_F: Boat_F {
        class VehicleTransport {
            class Cargo {
                parachuteClass = "B_Parachute_02_F";
                parachuteHeightLimit = 40;
                canBeTransported = 1;
                dimensions[] = {"bbox_1_1_pos", "bbox_2_2_pos"};
            };
        };
    };
};
