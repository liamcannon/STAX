#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "STAX_main"
        };
        authors[] = {
            "Cannon"
        };
        author = AUTHOR; // primary author name, either yours or your team's, considered for the whole mod
        VERSION_CONFIG;
    };

    skipWhenMissingDependencies = 1;
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
#include "XtdGearModels.hpp"