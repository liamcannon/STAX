#include "script_component.hpp"

class CfgPatches
{
    class ADDON
    {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "A3_Data_F_Decade_Loadorder",
            "acex_main",
        };
        author = AUTHOR;
        VERSION_CONFIG;
    };

    class XADDON: ADDON { // just in-case anything requires "acex_main"
        units[] = {};
        weapons[] = {};
    };
};

class CfgMods {
    class Mod_Base;
    class PREFIX: Mod_Base {
        name = "Starwars ACEX Compat";
    };
};

