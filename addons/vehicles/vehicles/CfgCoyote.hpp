class UK3CB_BAF_Coyote_L111A1_Base_D: UK3CB_BAF_Jackal_Base_D {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class ViewOptics {
                visionMode[] = {};
            };
        };
    };
};
class UK3CB_BAF_Coyote_Passenger_L111A1_D: UK3CB_BAF_Coyote_L111A1_Base_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_L134A1_Base_D: UK3CB_BAF_Jackal_Base_D {
    class Turrets: Turrets {
        class MainTurret: MainTurret {
            class ViewOptics {
                visionMode[] = {};
            };
        };
    };};
class UK3CB_BAF_Coyote_Passenger_L134A1_D: UK3CB_BAF_Coyote_L134A1_Base_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Passenger_L111A1_W: UK3CB_BAF_Coyote_Passenger_L111A1_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Passenger_L134A1_W: UK3CB_BAF_Coyote_Passenger_L134A1_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Logistics_L111A1_D: UK3CB_BAF_Coyote_Passenger_L111A1_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Logistics_L111A1_W: UK3CB_BAF_Coyote_Logistics_L111A1_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Logistics_L134A1_D: UK3CB_BAF_Coyote_Passenger_L134A1_D {
    COVER_ACTIONS
};
class UK3CB_BAF_Coyote_Logistics_L134A1_W: UK3CB_BAF_Coyote_Logistics_L134A1_D {
    COVER_ACTIONS
};
