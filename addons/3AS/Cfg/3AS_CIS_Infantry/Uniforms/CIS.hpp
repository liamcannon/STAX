class 3AS_U_CIS_Light_Armor: 3AS_Uniform_CIS_Human_Base {
	class XtdGearInfo {
		model = QGVAR(uniform_CIS);
		camo = "Light";
	};
};

class 3AS_U_CIS_Heavy_Armor: 3AS_Uniform_CIS_Heavy_Base {
	class XtdGearInfo {
		model = QGVAR(uniform_CIS);
		camo = "Heavy";
	};
};

class 3AS_U_CIS_Medic_Armor: 3AS_U_CIS_Light_Armor {
	class XtdGearInfo {
		model = QGVAR(uniform_CIS);
		camo = "Medic";
	};
};

class 3AS_U_CIS_Officer_Armor: 3AS_U_CIS_Light_Armor {
	class XtdGearInfo {
		model = QGVAR(uniform_CIS);
		camo = "Officer";
	};
};
