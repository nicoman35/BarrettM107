class CfgPatches {
	class Dagger_Barrett {
		requiredaddons[]	= {
			"A3_Weapons_F",
			"A3_Characters_F",
			"A3_Characters_F_Exp_Vests"
		};
		requiredversion		= 1.3200001;
		units[]				= {
			"NIC_Sniper_M107",
			"NIC_ej_m107_50Suppressor_ejacc_pointer_IRoptic_tws",
			"NIC_Sniper_M107_pack"
		};
		weapons[]			= {"ej_m107"};
		magazines[]			= {
			"Barret_mag",
			"BarretAP_mag",
			"BarretSLAP_mag",
			"BarretSLAP_T_mag",
			"BarretHE_mag",
			"BarretHE_T_mag"
		};
	};
};
class Mode_SemiAuto;
class asdg_SlotInfo;
class asdg_FrontSideRail: asdg_SlotInfo {
	class compatibleItems;
};
class asdg_OpticRail1913;
class asdg_OpticRail1913_short;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class asdg_UnderSlot;
class CfgWeapons {
	class Rifle;
	class Rifle_Base_F: Rifle {
		class WeaponSlotsInfo;
	};
	class UGL_F;
	class ej_barrett_base: Rifle_Base_F	{
		changeFiremodeSound[]		= {
			"\DaggerBarrett\sound\Safety.wav",
			0.5,
			1
		};
		ACE_barrelLength			= 737;
		author						= "Mr.Rad";
		descriptionshort			= $STR_NIC_M107_DESC_SHRT;
		discreteDistance[]			= {100, 200, 300, 400, 500, 600};
		discreteDistanceinitindex	= 1;
		dispersion					= 9.999997e-006;
		distanceZoomMax				= 2500;
		distanceZoomMin				= 2500;
		dexterity					= 0.44999999;
		scope						= 2;
		maxZeroing					= 2500;
		model						= "\DaggerBarrett\Barrett\ej_m107.p3d";
		picture						= "\DaggerBarrett\data\UI\w_m107_x_ca.paa";
		UiPicture					= "\A3\Weapons_F\Data\UI\icon_sniper_CA.paa";
		handanim[]					= {
			"\DaggerBarrett\data\anim\m107b.rtm"
		};
		displayname					= "M107-X";
		recoil						= "recoil_dmr_02";
		deployedPivot				= "bipod";
		hasBipod					= "true";
		soundBipodDown[]			= {
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_down",
			0.70794576,
			1,
			20
		};
		soundBipodUp[]				= {
			"A3\Sounds_F_Mark\arsenal\sfx\bipods\Bipod_generic_up",
			0.70794576,
			1,
			20
		};
		magazines[]					= {
			"Barret_mag",
			"BarretAP_mag",
			"BarretSLAP_mag",
			"BarretSLAP_T_mag",
			"BarretHE_Mag",
			"BarretHE_T_mag",
		};
		modes[]						= {
			"BarretSingle"
		};
		muzzles[]					= {
			"this",
			"securite"
		};
		class securite: Rifle_Base_F {	
			displayName				= $STR_NIC_M107_SAFE;
			changeFiremodeSound[]		= {
				"\DaggerBarrett\sound\Safety.wav",
				0.5,
				1
			};
			magazines[]				= {
				"R3F_securite_mag"
			};
			begin1[]				= {
				"",
				1,
				1,
				1
			};
			soundBegin[]			= {
				"begin1",
				1
			};
			reloadMagazineSound[]	= {
				"",
				1,
				1,
				1
			};
			drySound[]				= {
				"",
				1,
				1,
				1
			};
			optics					= "true";
			modelOptics				= "-";
			opticsZoomMin			= 0.375;
			opticsZoomMax			= 1.1;
			opticsZoomInit			= 0.75;
			memoryPointCamera		= "eye";
		};
		reloadAction				= "GestureReloadDMR05";
		reloadMagazineSound[]		= {
			"A3\sounds_f\weapons\reloads\new_trg",
			0.39810699,
			1,
			30
		};
		reloadsound[]				= {
			"A3\sounds_f\weapons\reloads\new_trg.wav",
			0.1,
			1,
			30
		};
		selectionfireanim			= "muzzleflash";
		weaponinfotype				= "RscWeaponZeroing";
		weaponsoundeffect			= "";
		weight						= 0;
		class Library {
			libtextdesc = "Barrett M107";
		};
		class GunClouds {
			access				= 0;
			cloudletaccy		= 0;
			cloudletalpha		= 0.30000001;
			cloudletanimperiod	= 1;
			cloudletcolor[]		= {1, 1, 1, 0};
			cloudletduration	= 0.050000001;
			cloudletfadein		= 0;
			cloudletfadeout		= 0.1;
			cloudletgrowup		= 0.050000001;
			cloudletmaxyspeed	= 100;
			cloudletminyspeed	= -100;
			cloudletshape		= "cloudletClouds";
			cloudletsize		= 1;
			deltat				= 0;
			initt				= 0;
			interval			= -0.02;
			size				= 0.30000001;
			sourcesize			= 0.02;
			timetolive			= 0;
			class Table {
				class T0 {
					color[]	= {1, 1, 1, 0};
					maxt	= 0;
				};
			};
		};
		class WeaponSlotsInfo {
			allowedslots[] 	= {901};
			mass			= 240;
			class MuzzleSlot: SlotInfo {
				access				= 1;
				compatibleitems[]	= {
					"50Suppressor_ej"
				};
				displayname			= $STR_NIC_M107_MZZL;
				linkproxy			= "\A3\data_f\proxies\weapon_slots\MUZZLE";
				scope				= 0;
			};
			class asdg_OpticRail1913_IAR: asdg_OpticRail1913 {};
			class asdg_FrontSideRail_IAR: asdg_FrontSideRail {};
			class CowsSlot: CowsSlot {};
			class PointerSlot: PointerSlot{};
		};
		class BarretSingle: Mode_SemiAuto {
			sounds[] = {
				"StandardSound",
				"SilencedSound"
			};
			class BaseSoundModeType {
				weaponSoundEffect="DefaultRifle";
				closure1[] = {
					"A3\sounds_f\weapons\closure\closure_rifle_2",
					0.25118864,
					1,
					10
				};
				closure2[] = {
					"A3\sounds_f\weapons\closure\closure_rifle_3",
					0.25118864,
					1,
					10
				};
				soundClosure[] = {
					"closure1",
					0.5,
					"closure2",
					0.5
				};
			};
			class StandardSound: BaseSoundModeType {
				begin1[] = {
					"DaggerBarrett\sound\m107.wav",
					1.7782794,
					1,
					1200
				};
				begin2[] = {
					"DaggerBarrett\sound\m107.wav",
					1.7782794,
					1,
					1200
				};
				begin3[] = {
					"DaggerBarrett\sound\m107.wav",
					1.7782794,
					1,
					1200
				};
				soundBegin[] = {
					"begin1",
					0.5,
					"begin2",
					0.5,
					"begin3",
					0.5
				};
			};
			class SilencedSound: BaseSoundModeType {
				begin1[]		= {
					"DaggerBarrett\sound\m107suppressed.wav",
					0.80000001,
					1,
					300
				};
				begin2[]		= {
					"DaggerBarrett\sound\m107suppressed.wav",
					0.80000001,
					1,
					300
				};
				soundBegin[]	= {
					"begin1",
					0.333,
					"begin2",
					0.333
				};
			};
			displayname			= "Semi";
			dispersion			= 0.00043635;
			maxrange			= 2500;
			maxrangeprobab		= 0.2;
			midrange			= 2500;
			midrangeprobab		= 0.69999999;
			minrange			= 2;
			minrangeprobab		= 0.30000001;
			multiplier			= 1;
			reloadtime			= 0.150000001;
		};
		class EGLM_Launcher: UGL_F {
			displayName						= "EGLM";
			descriptionShort				= "EGLM";
			useModelOptics					= "false";
			useExternalOptic				= "false";
			magazines[]						= {
				"1Rnd_HE_Grenade_shell",
				"UGL_FlareWhite_F",
				"UGL_FlareGreen_F",
				"UGL_FlareRed_F",
				"UGL_FlareYellow_F",
				"UGL_FlareCIR_F",
				"1Rnd_Smoke_Grenade_shell",
				"1Rnd_SmokeRed_Grenade_shell",
				"1Rnd_SmokeGreen_Grenade_shell",
				"1Rnd_SmokeYellow_Grenade_shell",
				"1Rnd_SmokePurple_Grenade_shell",
				"1Rnd_SmokeBlue_Grenade_shell",
				"1Rnd_SmokeOrange_Grenade_shell",
				"3Rnd_HE_Grenade_shell",
				"3Rnd_UGL_FlareWhite_F",
				"3Rnd_UGL_FlareGreen_F",
				"3Rnd_UGL_FlareRed_F",
				"3Rnd_UGL_FlareYellow_F",
				"3Rnd_UGL_FlareCIR_F",
				"3Rnd_Smoke_Grenade_shell",
				"3Rnd_SmokeRed_Grenade_shell",
				"3Rnd_SmokeGreen_Grenade_shell",
				"3Rnd_SmokeYellow_Grenade_shell",
				"3Rnd_SmokePurple_Grenade_shell",
				"3Rnd_SmokeBlue_Grenade_shell",
				"3Rnd_SmokeOrange_Grenade_shell",
				"1RndHEDP_shell",
				"M576_shell"
			};
			cameraDir="GL look";
			discreteDistance[]				= {100, 200, 300, 400};
			discreteDistanceCameraPoint[]	= {
				"GL eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex		= 1;
		};
		aiDispersionCoefY			= 6;
		aiDispersionCoefX			= 4;
		drySound[]					= {
			"A3\sounds_f\weapons\Other\dry_1",
			0.56234133,
			1,
			10
		};
	};
	class ej_m107: ej_barrett_base {
		scope						= 2;
		displayname					= "M107-X (War)";
		hiddenSelections[]			= {
			"camo"
		};
		hiddenSelectionsTextures[]	= {
			"\DaggerBarrett\data\m107_co_war.paa"
		};
	};
	class ej_m107_tan: ej_barrett_base {
		scope						= 2;
		displayname					= "M107-X (Tan)";
		hiddenSelections[]			=	{
			"camo"
		};
		hiddenSelectionsTextures[]	= {
			"\DaggerBarrett\data\m107_tan_co.paa"
		};
	};
	class ej_m107_CTRG: ej_barrett_base	{
		scope						= 2;
		displayname					= "M107-X (Dazzle)";
		hiddenSelections[] 			= {
			"camo"
		};
		hiddenSelectionsTextures[] 	= {
			"\DaggerBarrett\data\m107_CTRG_co.paa"
		};
	};
	class NIC_ej_m107_50Suppressor_ejacc_pointer_IRoptic_tws: ej_m107 {
		displayName					= "M107-X (War)";
		scope						= 2;
		class LinkedItems {
		  class LinkedItemsMuzzle {
			slot					= "MuzzleSlot";
			item					= "50Suppressor_ej";
		  };
		  class LinkedItemsOptic {
			slot					= "CowsSlot";
			item					= "optic_tws";
		  };
		  class LinkedItemsAcc {
			slot					= "PointerSlot";
			item					= "acc_pointer_IR";
		  };
		};
	};
};
class CfgAmmo {
	class BulletBase;
	class R3F_securite_Ball: BulletBase	{
		hit								= 0;
		cartridge						= "FxCartridge_Small";
		cost							= 0;
		typicalSpeed					= 0;
		airFriction						= 0;
		caliber							= 0;
		model							= "\A3\Weapons_f\Data\bullettracer\tracer_white";
		tracerScale						= 0;
		tracerStartTime					= 0;
		tracerEndTime					= 0;
		nvgOnly							= 0;
	};
	class EJ_B_127x99_Ball: BulletBase {
		ACE_ammoTempMuzzleVelocityShifts[]={-26.549999, -25.469999, -22.85, -20.120001, -16.98, -12.8, -7.6399999, -1.53, 5.96, 15.17, 26.190001};
		ACE_ballisticCoefficients[]		= {0.67000002};
		ACE_barrelLengths[]				= {737};		
		ACE_bulletLength				= 58.674;
		ACE_bulletMass					= 41.925598;
		ACE_caliber						= 12.954;
		ACE_dragModel					= 1;
		ACE_muzzleVelocities[]			= {950};
		ACE_standardAtmosphere			= "ASM";
		ACE_velocityBoundaries[]		= {};
		airFriction						= -0.00094499899;
		airLock							= 1;
		audibleFire						= 15;
		caliber							= 3.00;
		cartridge						= "FxCartridge_127";
		cost							= 5;
		dangerRadiusHit					= 18;
		deflecting						= 15;
		hit								= 75;
		indirectHit						= 0;
		indirectHitRange				= 0;
		model							= "\A3\Weapons_f\Data\bullettracer\tracer_red";
		suppressionRadiusBulletClose	= 2;
		suppressionRadiusHit			= 1.5;
		tracerScale						= 1.2;
		tracerStartTime					= 0.075000003;
		tracerEndTime					= 5;
		typicalSpeed					= 950;
		visibleFire						= 10;		
	};
	class 50_hollow: EJ_B_127x99_Ball	{
		ACE_muzzleVelocities[]			= {930};
		typicalSpeed					= 930;
		hit								= 180;
		caliber							= 2.4;
	};
	class EJ_B_127x99_AP: EJ_B_127x99_Ball {
		ACE_bulletMass					= 48.925598;
		ACE_muzzleVelocities[]			= {860};
		hit								= 60;
		caliber							= 4.5;
		typicalSpeed					= 860;
	};
	class EJ_B_127x99_SLAP: EJ_B_127x99_Ball {
		ACE_bulletMass					= 23.33;
		ACE_muzzleVelocities[]			= {1200};
		aiAmmoUsageFlags				= "64 + 256";
		hit								= 55;
		caliber							= 5.5;
		typicalSpeed					= 1200;
		airFriction						= -0.00047035;
	};
	class B_127x99_HE: EJ_B_127x99_Ball {
		ACE_muzzleVelocities[]			= {930};
		airFriction						= -0.00056000001;
		caliber							= 2.5999999;
		dangerRadiusHit					= 50;
		craterEffects					= "ExploAmmoCrater";
		explosionEffects				= "ExploAmmoExplosion";
		explosionEffectsRadius			= 2.5;
		explosionSoundEffect			= "DefaultExplosion";
		Explosive						= 0.9;
		fuseDistance					= 10;
		hit								= 100;
		indirectHit						= 10;
		indirectHitRange				= 2.5;
		model							= "\A3\Weapons_f\Data\bullettracer\tracer_white";
		typicalSpeed					= 930;
		visibleFireTime=3;
		soundFly[]						= {
			"",
			1,
			1,
			50
		};
		soundHit1[]						= {
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_01",
			1.7782794,
			1,
			1600
		};
		soundHit2[]						= {
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_02",
			1.7782794,
			1,
			1600
		};
		soundHit3[]						= {
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_03",
			1.7782794,
			1,
			1600
		};
		soundHit4[]						= {
			"A3\Sounds_F\arsenal\explosives\shells\30mm40mm_shell_explosion_04",
			1.7782794,
			1,
			1600
		};
		multiSoundHit[]					= {
			"soundHit1",
			0.25,
			"soundHit2",
			0.25,
			"soundHit3",
			0.25,
			"soundHit4",
			0.25
		};
		class CamShakeExplode {
			power		= "(13^0.5)";
			duration	= "((round (13^0.5))*0.2 max 0.2)";
			frequency	= 20;
			distance	= "((13^0.5)*3)";
		};
		class CamShakeHit {
			power		= 13;
			duration	= "((round (13^0.25))*0.2 max 0.2)";
			frequency	= 20;
			distance	= 1;
		};
	};
};
class CfgMagazines {
	class 5Rnd_127x108_Mag;
	class Barret_mag: 5Rnd_127x108_Mag {
		ammo				= "EJ_B_127x99_Ball";
		count				= 10;
		displayNameShort	= "FMJ";
		displayname			= $STR_NIC_M107_MAG_FMJ;
		descriptionShort 	= $STR_NIC_M107_SHRT_FMJ;
		initspeed			= 950;
		picture				= "\A3\weapons_f\data\UI\M_20Rnd_762x51_CA.paa";
		scope				= 2;
		tracersevery		= 0;
		mass				= 15;
	};
	class BarretAP_mag: Barret_mag {
		ammo				= "EJ_B_127x99_AP";
		displayNameShort	= "AP";
		displayname			= $STR_NIC_M107_MAG_AP;
		descriptionShort 	= $STR_NIC_M107_SHRT_AP;
		initspeed			= 900;
	};
	class BarretSLAP_mag: Barret_mag {
		ammo				= "EJ_B_127x99_SLAP";
		displayNameShort	= "SLAP";
		displayname			= $STR_NIC_M107_MAG_SLAP;
		descriptionShort 	= $STR_NIC_M107_SHRT_SLAP;
		initspeed			= 1200;
	};
	class BarretSLAP_T_mag: BarretSLAP_mag {
		displayNameShort	= "SLAP-T";
		displayname			= $STR_NIC_M107_MAG_SLAP_T;
		descriptionShort 	= $STR_NIC_M107_SHRT_SLAP_T;
		tracersevery		= 1;
	};
	class BarretHE_mag: Barret_mag {
		ammo				= "B_127x99_HE";
		displayNameShort	= "HE";
		displayname			= $STR_NIC_M107_MAG_HE;
		descriptionShort 	= $STR_NIC_M107_SHRT_HE;
		initspeed			= 930;
	};
	class BarretHE_T_mag: BarretHE_mag {
		displayNameShort	= "HE-T";
		displayname			= $STR_NIC_M107_MAG_HE_T;
		descriptionShort 	= $STR_NIC_M107_SHRT_HE_T;
		tracersevery		= 1;
	};
	class BarretHP_mag: Barret_mag {
		ammo				= "50_hollow";
		displayNameShort	= "HP";
		displayname			= $STR_NIC_M107_MAG_HP;
		descriptionShort 	= $STR_NIC_M107_SHRT_HP;
		initspeed			= 930;
	};
	class CA_Magazine;
	class R3F_securite_mag: CA_Magazine	{
		scope				= 1;
		displayName			= "";
		count				= 0;
		initSpeed			= 0;
		tracersEvery		= 0;
		ammo				= "R3F_securite_Ball";
		picture				= "";
		mass				= 0;
		class Library {
			libTextDesc = "";
		};
	};
};
class cfgVehicles {
	class B_ghillie_sard_F;
	class B_Kitbag_mcamo;
	class NIC_Sniper_M107: B_ghillie_sard_F {
		faction					= "BLU_F";
		side					= 1;
		displayName				= $STR_NIC_M107_SNIPER;		
		uniformClass			= "U_B_FullGhillie_sard";
		author					= "NIC";
		weapons[]				= {
			"NIC_ej_m107_50Suppressor_ejacc_pointer_IRoptic_tws",
			"Put",
			"Throw"
		};
		respawnWeapons[]		= {
			"NIC_ej_m107_50Suppressor_ejacc_pointer_IRoptic_tws",
			"Put",
			"Throw"
		};
		items[]					= {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		respawnItems[]			= {
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit",
			"FirstAidKit"
		};
		magazines[]				= {
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag"
		};
		respawnMagazines[]		= {
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag",
			"BarretSLAP_T_mag"
		};
		linkedItems[]			= {
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles",
			"Rangefinder",
			"H_HelmetB_grass",
			"V_HarnessO_ghex_F",
			"KA_MCU",		
			"NVGoggles"
		};
		respawnLinkedItems[]			= {
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio",
			"ItemGPS",
			"NVGoggles",
			"Rangefinder",
			"H_HelmetB_grass",
			"V_HarnessO_ghex_F",
			"KA_MCU",
			"NVGoggles"
		};
		backpack = "NIC_Sniper_M107_pack";
	};
	class NIC_Sniper_M107_pack: B_Kitbag_mcamo {
		scope = 1;
		class TransportMagazines {
			class _xx_BarretSLAP_T_mag {
				 count		= 18;
				 magazine	= "BarretSLAP_T_mag";
			};
		};
		class TransportItems{};
		class TransportWeapons{};
	};
};