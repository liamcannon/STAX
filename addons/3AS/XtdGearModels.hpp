class XtdGearModels {
	class CfgWeapons {
		class GVAR(helmet_ColdAssault) {
			label = "[3AS] Cold Assault Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"212th",
					"501st",
					"Rex"
				};
			};

			class Base { label = "Base"; };
			class 212th { label = "212th"; };
			class 501st { label = "501st"; };
			class Rex { label = "Rex"; };
		};

		class GVAR(helmet_Katarn) {
			label = "[3AS] Katarn Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"Boss",
					"Fixer",
					"Scorch",
					"Sev",
					"Gregor",
					"Omega",
				};
			};

			class Base { label = "Base"; };
			class Boss { label = "Boss"; };
			class Fixer { label = "Fixer"; };
			class Scorch { label = "Scorch"; };
			class Sev { label = "Sev"; };
			class Gregor { label = "Gregor"; };
			class Omega { label = "Omega"; };
		};
		class GVAR(helmet_p1) {
		label = "[3AS] Phase 1 Helmets";
		author = AUTHOR;
		options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"SGT",
					"LT",
					"CPT",
					"CC",
					"EOD",
					"501st",
					"212th",
					"91st",
					"327th",
				};
			};

			class Base { label = "Base"; };
			class SGT { label = "SGT"; };
			class LT { label = "LT"; };
			class CPT { label = "CPT"; };
			class CC { label = "CC"; };
			class EOD { label = "EOD"; };
			class 501st { label = "501st"; };
			class 212th { label = "212th"; };
			class 91st { label = "91st"; };
			class 327th { label = "327th"; };
		};

		class GVAR(helmet_p2_pilot) {
			label = "[3AS] Phase 2 Pilot Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"Republic",
					"Razor",
					"101st",
					"212th",
					"91st",
					"327th"
				};
			};

			class Base { label = "Base"; };
			class Republic { label = "Republic"; };
			class Razor { label = "Razor"; };
			class 101st { label = "101st"; };
			class 212th { label = "212th"; };
			class 91st { label = "91st"; };
			class 327th { label = "327th"; };
		};

		class GVAR(helmet_p3_pilot) {
			label = "[3AS] Phase 3 Pilot Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"501st",
				};
			};

			class Base { label = "Base"; };
			class 501st { label = "501st"; };
		};

		class GVAR(helmet_tanker) {
			label = "[3AS] Tanker Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"501st",
					"91st",
					"212th"
				};
			};

			class Base { label = "Base"; };
			class 501st { label = "501st"; };
			class 212th { label = "212th"; };
			class 91st { label = "91st"; };
		};

		class GVAR(uniform_ColdAssault) {
			label = "[3AS] Cold Assault Uniforms";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"212th",
					"501st",
				};
			};

			class Base { label = "Base"; };
			class 212th { label = "212th"; };
			class 501st { label = "501st"; };
		};

		class GVAR(uniform_katarn) {
			label = "[3AS] Katarn Uniforms";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"Boss",
					"Fixer",
					"Scorch",
					"Sev",
					"Gregor",
					"Omega",
				};
			};

			class Base { label = "Base"; };
			class Boss { label = "Boss"; };
			class Fixer { label = "Fixer"; };
			class Scorch { label = "Scorch"; };
			class Sev { label = "Sev"; };
			class Gregor { label = "Gregor"; };
			class Omega { label = "Omega"; };
		};

		class GVAR(uniform_pilot_p3) {
			label = "[3AS] Phase 3 Pilot Uniforms";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"501st",
				};
			};

			class Base { label = "Base"; };
			class 501st { label = "501st"; };
		};

		class GVAR(uniform_TSeries) {
			label = "[3AS] T-Series Uniforms";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Green",
					"Red",
					"TV24",
				};
			};

			class Green { label = "Green"; };
			class Red { label = "Red"; };
			class TV24 { label = "TV24"; };
		};

		class GVAR(vest_Katarn) {
			label = "[3AS] Katarn Vests";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Tech",
					"FoxtrotTech",
					"Omega",
					"Teamleader",
					"Boss",
					"FoxtrotTeamleader",
				};
			};

			class Tech { label = "Tech"; };
			class FoxtrotTech { label = "Foxtrot Tech"; };
			class Omega { label = "Omega"; };
			class Teamleader { label = "Teamleader"; };
			class Boss { label = "Boss"; };
			class FoxtrotTeamleader { label = "Foxtrot Teamleader"; };
		};

		class GVAR(helmet_CIS) {
			label = "[3AS] CIS Helmets";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"Medic",
				};
			};

			class Base { label = "Base"; };
			class Medic { label = "Medic"; };
		};

		class GVAR(uniform_CIS) {
			label = "[3AS] CIS Uniforms";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Light",
					"Heavy",
					"Medic",
					"Officer"
				};
			};

			class Light { label = "Light"; };
			class Heavy { label = "Heavy"; };
			class Medic { label = "Medic"; };
			class Officer { label = "Officer"; };
		};
	};

	class CfgVehicles {
		class GVAR(backpack_ColdAssault) {
			label = "[3AS] Cold Assault Backpacks";
			author = AUTHOR;
			options = {"camo"};

			class camo {
				changeingame = 0;
				values[] = {
					"Base",
					"212th",
					"501st",
				};
			};

			class Base { label = "Base"; };
			class 212th { label = "212th"; };
			class 501st { label = "501st"; };
		};
	};
};
