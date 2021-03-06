// UKSF
class UKSF_B_Rifleman: CUP_B_BAF_Soldier_MTP {
    scope = 2;
    author = "UKSF";
    editorSubcategory = QEGVAR(common,1para);
    displayName = "Rifleman";
    cost = 100000;
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Rifleman.jpg);
    uniformClass = "UK3CB_BAF_U_CombatUniform_MTP_1Para";
    backpack = "";
    weapons[] = { "Throw","Put" };
    respawnWeapons[] = { "Throw","Put" };
    magazines[] = {};
    respawnMagazines[] = {};
    items[] = {};
    respawnItems[] = {};
    linkedItems[] = { "ItemMap","ItemCompass","ItemWatch" };
    respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch" };
};
class UKSF_B_Officer: UKSF_B_Rifleman {
    displayName = "Officer";
    icon = "iconManOfficer";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Officer.jpg);
    linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","UK3CB_BAF_H_Beret_PR" };
    respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","UK3CB_BAF_H_Beret_PR" };
};
class UKSF_B_SectionLeader: UKSF_B_Rifleman {
    displayName = "Section Leader";
    icon = "iconManLeader";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_SectionLeader.jpg);
};
class UKSF_B_Medic: UKSF_B_Rifleman {
    displayName = "Combat Medic";
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Medic.jpg);
    uniformClass = "UK3CB_BAF_U_CombatUniform_MTP_CSMR";
};
class UKSF_B_Sniper: UKSF_B_Rifleman {
    displayName = "Sniper";
    camouflage = 0.6;
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Sniper.jpg);
};
class UKSF_B_Pathfinder: UKSF_B_Rifleman {
    displayName = "PF Patrolman";
    uniformClass = "Gen3_Multicam";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Pathfinder.jpg);
    engineer = 1;
};
class UKSF_B_PathfinderMedic: UKSF_B_Pathfinder {
    displayName = "PF Patrolman Medic";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_PathfinderMedic.jpg);
    attendant = 1;
};
class UKSF_B_Pilot: UKSF_B_Rifleman {
    editorSubcategory = QEGVAR(common,jsfaw);
    displayName = "Pilot";
    threat[] = {1, 1, 1};
    engineer = 1;
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Pilot.jpg);
    model = "\A3\characters_F_gamma\Guerrilla\ig_guerrilla2_1.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { QPATHTOEF(gear,data\uniforms\ATC.paa) };
    uniformClass = "UKSF_U_RAF_Blues";
    linkedItems[] = { "ItemMap","ItemCompass","ItemWatch","UK3CB_BAF_H_Beret_RAF" };
    respawnLinkedItems[] = { "ItemMap","ItemCompass","ItemWatch","UK3CB_BAF_H_Beret_RAF" };
    ACE_GForceCoef = 0.7;
};
class UKSF_B_Pilot_7: UKSF_B_Rifleman {
    editorSubcategory = QEGVAR(common,jsfaw);
    displayName = "Pilot (7 Sqn.)";
    threat[] = {1, 1, 1};
    engineer = 1;
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Pilot_7.jpg);
    model = "\A3\Characters_F\Common\coveralls.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { QPATHTOEF(gear,data\uniforms\pilot_coveralls_7.paa) };
    uniformClass = "UKSF_U_PilotCoveralls_7";
    ACE_GForceCoef = 0.7;
};
class UKSF_B_Pilot_656: UKSF_B_Pilot_7 {
    displayName = "Pilot (656 Sqn.)";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Pilot_656.jpg);
    model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
    hiddenSelections[] = { "Camo" };
    hiddenSelectionsTextures[] = { QPATHTOEF(gear,data\uniforms\pilot_uniform_656.paa) };
    uniformClass = "UKSF_U_PilotUniform_656";
    ACE_GForceCoef = 0.7;
};
class UKSF_B_Pilot_617: UKSF_B_Pilot_7 {
    displayName = "Pilot (617 Sqn.)";
    editorPreview = QPATHTOEF(common,data\previews\UKSF_B_Pilot_617.jpg);
    model = "\A3\characters_F\Common\pilot_f.p3d";
    hiddenSelections[] = { "camo" };
    hiddenSelectionsTextures[] = { QPATHTOEF(gear,data\uniforms\pilot_gsuit_617.paa) };
    uniformClass = "UKSF_U_PilotGSuit_617";
    ACE_GForceCoef = 0.7;
};
