#define _ARMA_

class CfgPatches
{
	class namalsk_light_patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"namalsk","a3_animals_f","ns_sounds","ns_rocks","ns_structures","ns_a2","ns_roads","ns_plants","ns_jbad","A3_Map_Stratis","A3_Data_F","A3_Sounds_F","A3Data","A3_Structures_F_Items_Cans","A3_Structures_F_Wrecks","A3_Structures_F_Civ_Lamps","winter","A3_Structures_F_Items_Vessels","A3_Structures_F_Civ_Constructions","A3_Structures_F_Dominants_WIP","Wall","Ind_Coltan_Mine","A3_Structures_F_Mil_Helipads","A3_Roads_F","A3_Structures_F_Walls","A3_Structures_F_Civ_Garbage","mil","A3_Structures_F_Ind_Cargo","hangar_2","A_stationhouse","Ind_Garage01","Ind_PowerStation","Generalstore","A3_Structures_F_Naval_Piers","A3_Map_Stratis_Data","A3_Plants_F"};
		author[] = {"Sumrak, ported by Lappihuan & Exile Mod Team"};
		ammo[] = {};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class Namalsk_intro1
		{
			directory = "nst\namalsk_light_patch\CutScenes\Namalsk_intro1.namalsk";
		};
	};
};
class CfgWorlds
{
	class DefaultWorld
	{
		class Grid;
		class DefaultClutter;
		class Weather
		{
			class Overcast;
		};
		class WaterExPars;
	};
	class CAWorld: DefaultWorld
	{
		class Grid{};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
			class RainbowConfig;
			class RainConfig;
			class Overcast: Overcast
			{
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class DefaultLighting;
	class namalsk: CAWorld
	{
		class ReplaceObjects{};
		class Sounds
		{
			sounds[] = {};
		};
		class Animation
		{
			vehicles[] = {};
		};
		author = "Sumrak, ported by Lappihuan & Exile Mod Team";
		access = 3;
		worldId = 4;
		icon = "";
		pictureMap = "nst\namalsk_light_patch\Data\namalsk_ca.paa";
		cutscenes[] = {"Namalsk_intro1"};
		description = "Namalsk";
		worldName = "nst\namalsk\namalsk.wrp";
		pictureShot = "nst\namalsk_light_patch\ui_namalsk_ca.paa";
		plateFormat = "ML$ - #####";
		plateLetters = "ABCDEGHIKLMNOPRSTVXZ";
		latitude = -53.833;
		longitude = 170.500;
		landGrid = 50;
		loadingTexts[] = {"Namalsk is an island in the Bering sea first colonized by the Soviet Union in the 1950s","Namalsk was of strategic value during the cold war, but was abandoned with the end of the Soviet Union","After a big coal mine was found, a city was built to provide accommodation for the workers and their families","Due the rough weather in the Bering Sea the mountains will be covered in snow during the whole year"};
		class Grid: Grid
		{
			offsetX = 0;
			offsetY = 0;
			class Zoom1
			{
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = 100;
			};
			class Zoom2
			{
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = 1000;
			};
			class Zoom3
			{
				zoomMax = 1e+030;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = 10000;
			};
		};
		dynLightMinBrightnessAmbientCoef = 0.5;
		dynLightMinBrightnessAbsolute = 0.05;
		skyObject = "a3\Map_Stratis\data\obloha.p3d";
		horizontObject = "a3\Map_Stratis\data\horizont.p3d";
		skyTexture = "nst\namalsk\data\sky_semicloudy_sky.paa";
		skyTextureR = "nst\namalsk\data\sky_semicloudy_lco.paa";
		skyColorInfluencesFogColor = 0;
		enableBloodSplashes = 1;
		enableFootsteps = 1;
		enableTracks = 1;
		fullDetailDist = 40;
		noDetailDist = 60;
		minRocksInRockSquare = 4;
		minTreesInForestSquare = 5;
		soundMapSizeCoef = 4;
		midDetailTexture = "nst\namalsk\data\middle_mco.paa";
		envTexture = ""; //"a3\Data_f\env_land_ca.paa";
		satelliteNormalBlendStart = 0;
		satelliteNormalBlendEnd = 70;
		satelliteNormalOnDetail = 1;
		terrainBlendMaxBrightenCoef = "0.0f";
		terrainBlendMaxDarkenCoef = "0.0f";
		class SimulWeather
		{
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000;
			fadeMaxAltitudeKm = 15;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 0;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 96;
			cloudGridLength = 96;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1000000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 100;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4;
			opticalDensity = 0.5;
			alphaSharpness = 0.88;
			selfShadowScale = 0.93499994;
			mieAsymmetry = 0.5087;
			minimumLightElevationDegrees = 6;
			directLightCoef = 1;
			indirectLightCoef = 0.04;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe
			{
				rayleigh[] = {0.00749,0.01388,0.02878};
				mie[] = {0.0046,0.0046,0.0046};
				haze = 30;
				hazeBaseKm = 1;
				hazeScaleKm = 0.2;
				hazeEccentricity = 1;
				brightnessAdjustment = 1;
				cloudiness = 0.6;
				cloudBaseKm = 0.2;
				cloudHeightKm = 7;
				directLight = 1;
				indirectLight = 1;
				ambientLight = 0.2;
				noiseOctaves = 4.3;
				noisePersistence = 0.535;
				fractalAmplitude = 2.3;
				fractalWavelength = 240;
				extinction = 8.4;
				diffusivity = 0.001;
				churn = 10;
				rainEffectStrength = 1;
			};
			class Overcast
			{
				class Weather1: DefaultKeyframe
				{
					overcast = 0;
					haze = 30;
					cloudiness = 0.55;
					diffusivity = 0.001;
					extinction = 3.9;
					seqFileKeyframe = 0;
				};
				class Weather2: DefaultKeyframe
				{
					overcast = 0.2;
					haze = 35;
					cloudiness = 0.58;
					diffusivity = 0.001;
					extinction = 4.3;
					seqFileKeyframe = 0;
				};
				class Weather3: DefaultKeyframe
				{
					overcast = 0.4;
					haze = 40;
					cloudiness = 0.63;
					diffusivity = 0.001;
					extinction = 6;
					seqFileKeyframe = 3;
				};
				class Weather4: DefaultKeyframe
				{
					overcast = 0.6;
					haze = 45;
					cloudiness = 0.75;
					diffusivity = 0.001;
					extinction = 7;
					seqFileKeyframe = 4;
				};
				class Weather5: DefaultKeyframe
				{
					overcast = 0.8;
					haze = 50;
					cloudiness = 0.83;
					diffusivity = 0.001;
					extinction = 7.3;
					cloudBaseKm = 0.2;
					cloudHeightKm = 8;
					seqFileKeyframe = 4;
				};
				class Weather6: DefaultKeyframe
				{
					overcast = 1;
					haze = 50;
					cloudiness = 0.90000004;
					diffusivity = 0.001;
					extinction = 8.3;
					cloudBaseKm = 0.2;
					cloudHeightKm = 10;
					seqFileKeyframe = 4;
				};
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise
			{
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		causticsEnabled = 0;
		hazeBaseBeta0 = 6e-005;
		hazeBaseHeight = 150;
		hazeDensityDecay = 0.0006;
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98;
		horizonFogColorationStart = "0.8f";
		horizonParallaxCoef = 0.045;
		horizonSunColorationScale = "10.0f";
		skyFogColorationStart = "0.7f";
		humidityDownCoef = 0.05;
		humidityUpCoef = 0.1;
		waterTexture = "#(argb,8,8,3)color(1,0,1,1)";
		class Sea
		{
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 2.0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater
		{
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 200;
			waterFogDistanceNear = 10;
			waterFogDistance = 40;
			waterColor[] = {0.04,0.16,0.22};
			deepWaterColor[] = {0.0,0.001,0.009};
			surfaceColor[] = {0.04,0.16,0.22};
			deepSurfaceColor[] = {0.0,0.001,0.009};
		};
		class SeaWaterShaderPars
		{
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars: WaterExPars
		{
			fogDensity = 0.1;
			fogColor[] = {0.01,0.03,0.04};
			fogColorExtinctionSpeed[] = {0.12,0.015,0.013};
			ligtExtinctionSpeed[] = {0.1814,0.0159,0.0111};
			diffuseLigtExtinctionSpeed[] = {0.3814,0.2159,0.2111};
			fogGradientCoefs[] = {"0.35f","1.0f","1.7f"};
			fogColorLightInfluence[] = {0.8,0.2,1.0};
			shadowIntensity = "0.0f";
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = "0.15f";
			foamAroundObjectsFadeCoef = "8.0f";
			foamColorCoef = "2.0f";
			foamDeformationCoef = "0.02f";
			foamTextureCoef = "0.2f";
			foamTimeMoveSpeed = "0.2f";
			foamTimeMoveAmount = "0.1f";
			shoreDarkeningMaxCoef = "0.45f";
			shoreDarkeningOffset = "0.36f";
			shoreDarkeningGradient = "0.08f";
			shoreWaveTimeScale = "0.8f";
			shoreWaveShifDerivativeOffset = "-0.8f";
			shoreFoamIntensity = "0.25f";
			shoreMaxWaveHeight = "0.15f";
			shoreWetLayerReflectionIntensity = "0.55f";
			surfaceOpacity = 0.5;
		};
		class HDRNewPars
		{
			minAperture = 1e-005;
			maxAperture = 256;
			apertureRatioMax = 4;
			apertureRatioMin = 10;
			bloomImageScale = 1;
			bloomScale = 0.3;
			bloomExponent = 1;
			bloomLuminanceOffset = 0.8;
			bloomLuminanceScale = 1;
			bloomLuminanceExponent = 1.2;
			tonemapMethod = 2;
			tonemapShoulderStrength = 0.22;
			tonemapLinearStrength = 0.3;
			tonemapLinearAngle = 0.1;
			tonemapToeStrength = 0.2;
			tonemapToeNumerator = 0.01;
			tonemapToeDenominator = 0.3;
			tonemapLinearWhite = 11.2;
			tonemapExposureBias = 2;
			tonemapLinearWhiteReinhard = 2.5;
			nvgApertureMin = 1;
			nvgApertureStandard = 7;
			nvgApertureMax = 15;
			nvgStandardAvgLum = 3;
			nvgLightGain = 100;
			nvgTransition = 1;
			nvgTransitionCoefOn = 40;
			nvgTransitionCoefOff = 0.01;
			nightShiftMinAperture = 0;
			nightShiftMaxAperture = 0.002;
			nightShiftMaxEffect = 0.6;
			nightShiftLuminanceScale = 600;
			eyeAdaptFactorLight = 0.6;
			eyeAdaptFactorDark = 0.2;
		};
		startWeather = 0.4;
		forecastWeather = 0.5;
		startTime = "11:34";
		startDate = "24/10/2011";
		startFog = 0.0;
		startFogDecay = 0.0;
		startFogBase = 0.0;
		forecastFog = 0.0;
		forecastFogBase = 0.0;
		forecastFogDecay = 0.0;
		fogBeta0Min = 0.0;
		fogBeta0Max = 0.05;
		class Lighting: DefaultLighting
		{
			groundReflection[] = {0.132,0.133,0.122};
			moonObjectColorFull[] = {460,440,400,1.0};
			moonHaloObjectColorFull[] = {465,477,475,1.0};
			moonsetObjectColor[] = {375,350,325,1.0};
			moonsetHaloObjectColor[] = {515,517,525,1.0};
			class ThunderBoltLight
			{
				diffuse[] = {2120,3170,5550};
				ambient[] = {0.001,0.001,0.001};
				intensity = 120000;
				class Attenuation
				{
					start = 0.0;
					constant = 0.0;
					linear = 0.0;
					quadratic = 1.0;
				};
			};
			starEmissivity = 25;
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.182,0.213,0.25},{0.05,0.111,0.221},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.082,0.128,0.185},{0.283,0.35,0.431},0};
			sunMoon[] = {-3.75,{0.377,0.441,0.518},{0.103,0.227,0.453},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.174,0.274,0.395},{0.582,0.72,0.887},0.5};
			earlySun[] = {-2.5,{0.675,0.69,0.784},{0.22,0.322,0.471},{0.04,0.034,0.004},{0.039,0.049,0.072},{0.424,0.549,0.745},{0.698,0.753,0.894},1};
			sunrise[] = {0,{0.675,0.69,0.784},{0.478,0.51,0.659},{0.2,0.19,0.07},{0.124,0.161,0.236},{{0.847,0.855,0.965},0.2},{{0.933,0.949,0.996},2},1};
			earlyMorning[] = {3,{{0.844,0.61,0.469},0.8},{0.424,0.557,0.651},{{1,0.45,0.2},1},{0.12,0.26,0.38},{{0.428,0.579,0.743},2},{{0.844,0.61,0.469},2.7},1};
			midMorning[] = {8,{{0.822,0.75,0.646},3.8},{{0.383,0.58,0.858},1.3},{{1.3,0.9,0.61},2.8},{{0.12,0.18,0.28},0.5},{{0.322,0.478,0.675},3.5},{{1.0,0.929,0.815},4.7},1};
			morning[] = {16,{{1,0.95,0.91},12.2},{{0.12,0.18,0.28},9.2},{{1,0.95,0.91},11.2},{{0.12,0.18,0.28},8.5},{{0.14,0.18,0.24},11.0},{{0.5,0.6,0.9},13.2},1};
			noon[] = {45,{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.98,0.94,0.94},13.8},{{0.2,0.27,0.35},10.8},{{0.5,0.64,1.0},12.0},{{0.5,0.5,0.5},14.8},1,0.5,0.4,0.5,0.4};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[] = {-15,{0.005,0.01,0.01},{0.0,0.002,0.003},{0.0,0.0,0.0},{0.0,0.0,0.0},{0.0,0.002,0.003},{0.0,0.002,0.003},0};
			fullNight[] = {-5,{0.023,0.023,0.023},{0.02,0.02,0.02},{0.023,0.023,0.023},{0.02,0.02,0.02},{0.01,0.01,0.02},{0.08,0.06,0.06},0};
			sunMoon[] = {-3.75,{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.04,0.05},{0.04,0.035,0.04},{0.11,0.08,0.09},0.5};
			earlySun[] = {-2.5,{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.0689,0.0689,0.0804},{0.06,0.06,0.07},{0.08,0.07,0.08},{0.14,0.1,0.12},0.5};
			earlyMorning[] = {3,{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+3.95"},{{1,1,1},"(-4)+3.0"},{{1,1,1},"(-4)+4"},{{1,1,1},"(-4)+5.5"},1};
			morning[] = {16,{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+5.7"},{{1,1,1},"(-4)+4.5"},{{1,1,1},"(-4)+7"},{{1,1,1},"(-4)+8"},1};
			lateMorning[] = {25,{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+10.45"},{{1,1,1},"(-4)+9.75"},{{1,1,1},"(-4)+12"},{{1,1,1},"(-4)+12.75"},1};
			noon[] = {45,{{1,1,1},10.0},{{1,1,1},9.0},{{1,1,1},9.0},{{1,1,1},8.0},{{0.5,0.64,1},12.0},{{0.5,0.5,0.5},14.8},1};
		};
		class Rain
		{
			texture = "A3\data_f\rain_ca.paa";
			raindrop = "\A3\data_f\raindrop.p3d";
			speed = 0.1;
			levels[] = {8,2};
		};
		class RainParticles
		{
			rainDropTexture = "nst\namalsk_light_patch\Data\snownormal_ca.paa";
			texDropCount = 4;
			minRainDensity = 0.01;
			effectRadius = 15;
			windCoef = 1;
			dropSpeed = 0.6;
			rndSpeed = 0.2;
			rndDir = 0.2;
			dropWidth = 0.015;
			dropHeight = 0.025;
			dropColor[] = {1,1,1,1};
			lumSunFront = 6.5;
			lumSunBack = 6.5;
			refractCoef = 1;
			refractSaturation = 0.1;
		};
		class Weather: Weather
		{
			class RainConfig : RainConfig
			{
				minCloudiness = 0.5;
				averageCloudLimit = 0.8;
				minProbability = 0.02;
				maxProbability = 0.9;
				minRainDensity = 0.01;
				maxRainDensity = 0.5;
				rainChange = 60;
				rainFading = 30;
				squareLength = 0.5;
			};
			class RainbowConfig : RainbowConfig
			{
				intensityCoef = 0;
				maxCloudiness = 0;
			};
			class LightingNew
			{
				class Lighting0
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},0.2};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},0.05};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.044};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.04224};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0125,0.0125,0.0115};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting1
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting2
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting3
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting4
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},3};
					diffuseCloud[] = {{0.16,0.18,0.28},3};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.0115,0.012,0.0125};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting5
				{
					height = 0;
					overcast = 0.25;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},5};
					diffuseCloud[] = {{0.25,0.21,0.2},5};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting6
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},6};
					diffuseCloud[] = {{0.75,0.38,0.22},6};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting7
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},8.4};
					diffuseCloud[] = {{0.95,0.42,0.22},8.4};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting8
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},10.2};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting9
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},12.3};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting10
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},15.8};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting11
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting12
				{
					height = 0;
					overcast = 0.25;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17.2};
					diffuseCloud[] = {{1,0.87,0.85},17.2};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting13
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.14,0.19,0.3},4};
					diffuseCloud[] = {{0.14,0.19,0.3},3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.1384,0.1912,0.2984},0.88};
					ambientMidCloud[] = {{0.1384,0.1912,0.2984},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0.025,0.025,0.023};
					bidirectCloud[] = {0.0245,0.0245,0.02254};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.09,0.137,0.22},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{0.5,0.65,1},11.016};
					swBrightness = 1;
				};
				class Lighting14
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting15
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting16
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.1,0.18,0.3};
					diffuseCloud[] = {0.1,0.18,0.3};
					ambient[] = {{0.173,0.239,0.373},1};
					ambientCloud[] = {{0.173,0.239,0.373},1};
					ambientMid[] = {{0.173,0.239,0.373},0.88};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.88};
					groundReflection[] = {{0.173,0.239,0.373},0.8448};
					groundReflectionCloud[] = {{0.173,0.239,0.373},0.8448};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {{0.094,0.141,0.231},0.025};
					apertureMin = 4;
					apertureStandard = 5;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting17
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.16,0.18,0.28},2.25};
					diffuseCloud[] = {{0.16,0.18,0.28},1.6875};
					ambient[] = {{0.173,0.239,0.373},4.6};
					ambientCloud[] = {{0.173,0.239,0.373},4.6};
					ambientMid[] = {{0.173,0.239,0.373},4.048};
					ambientMidCloud[] = {{0.173,0.239,0.373},4.048};
					groundReflection[] = {{0.173,0.239,0.373},3.88608};
					groundReflectionCloud[] = {{0.173,0.239,0.373},3.88608};
					bidirect[] = {0.0115,0.012,0.0125};
					bidirectCloud[] = {0.01127,0.01176,0.01225};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting18
				{
					height = 0;
					overcast = 0.6;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.25,0.21,0.2},3.75};
					diffuseCloud[] = {{0.25,0.21,0.2},2.8125};
					ambient[] = {{0.196,0.275,0.42},6.9};
					ambientCloud[] = {{0.196,0.275,0.42},6.9};
					ambientMid[] = {{0.196,0.275,0.42},6.072};
					ambientMidCloud[] = {{0.196,0.275,0.42},6.072};
					groundReflection[] = {{0.196,0.275,0.42},5.82912};
					groundReflectionCloud[] = {{0.196,0.275,0.42},5.82912};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting19
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.75,0.38,0.22},4.5};
					diffuseCloud[] = {{0.75,0.38,0.22},3.375};
					ambient[] = {{0.2497,0.31,0.467},7.8};
					ambientCloud[] = {{0.2497,0.31,0.467},7.8};
					ambientMid[] = {{0.2541,0.314,0.467},6.864};
					ambientMidCloud[] = {{0.2541,0.314,0.467},6.864};
					groundReflection[] = {{0.235,0.318,0.467},6.58944};
					groundReflectionCloud[] = {{0.235,0.318,0.467},6.58944};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting20
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.42,0.22},6.72};
					diffuseCloud[] = {{0.95,0.42,0.22},5.04};
					ambient[] = {{0.306,0.357,0.463},8.4};
					ambientCloud[] = {{0.306,0.357,0.463},8.4};
					ambientMid[] = {{0.365,0.361,0.396},7.392};
					ambientMidCloud[] = {{0.365,0.361,0.396},7.392};
					groundReflection[] = {{0.416,0.38,0.388},7.09632};
					groundReflectionCloud[] = {{0.416,0.38,0.388},7.09632};
					bidirect[] = {0.023,0.024,0.025};
					bidirectCloud[] = {0.023,0.024,0.025};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.125,0.192,0.329},8.61};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting21
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.95,0.55,0.35},10.2};
					diffuseCloud[] = {{0.95,0.55,0.35},7.65};
					ambient[] = {{0.337,0.404,0.525},9.6};
					ambientCloud[] = {{0.337,0.404,0.525},9.6};
					ambientMid[] = {{0.412,0.408,0.443},8.448};
					ambientMidCloud[] = {{0.412,0.408,0.443},8.448};
					groundReflection[] = {{0.475,0.435,0.431},8.11008};
					groundReflectionCloud[] = {{0.475,0.435,0.431},8.11008};
					bidirect[] = {0.01375,0.0132,0.01265};
					bidirectCloud[] = {0.01375,0.0132,0.01265};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.133,0.204,0.357},9.84};
					apertureMin = 8;
					apertureStandard = 16;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting22
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{1,0.65,0.45},12.3};
					diffuseCloud[] = {{1,0.65,0.45},9.225};
					ambient[] = {{0.388,0.471,0.612},10.9};
					ambientCloud[] = {{0.388,0.471,0.612},10.9};
					ambientMid[] = {{0.482,0.475,0.506},9.81};
					ambientMidCloud[] = {{0.482,0.475,0.506},9.81};
					groundReflection[] = {{0.557,0.51,0.494},9.4176};
					groundReflectionCloud[] = {{0.557,0.51,0.494},9.4176};
					bidirect[] = {0.01875,0.018,0.01725};
					bidirectCloud[] = {0.01875,0.018,0.01725};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.145,0.224,0.396},11.1725};
					apertureMin = 20;
					apertureStandard = 25;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting23
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{1,0.75,0.62},15.8};
					diffuseCloud[] = {{1,0.75,0.62},11.85};
					ambient[] = {{0.435,0.533,0.698},13.8};
					ambientCloud[] = {{0.435,0.533,0.698},13.8};
					ambientMid[] = {{0.545,0.541,0.569},12.696};
					ambientMidCloud[] = {{0.545,0.541,0.569},12.696};
					groundReflection[] = {{0.635,0.58,0.557},12.18816};
					groundReflectionCloud[] = {{0.635,0.58,0.557},12.18816};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.15,0.251,0.488},14.145};
					apertureMin = 45;
					apertureStandard = 60;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting24
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},12.75};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},13.616};
					ambientMidCloud[] = {{0.635,0.635,0.663},13.616};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},13.9564};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting25
				{
					height = 0;
					overcast = 0.6;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{1,0.87,0.85},17};
					diffuseCloud[] = {{1,0.87,0.85},13.94};
					ambient[] = {{0.498,0.602,0.77},14.8};
					ambientCloud[] = {{0.498,0.602,0.77},14.8};
					ambientMid[] = {{0.635,0.635,0.663},14.504};
					ambientMidCloud[] = {{0.635,0.635,0.663},14.504};
					groundReflection[] = {{0.745,0.671,0.643},14.21392};
					groundReflectionCloud[] = {{0.745,0.671,0.643},14.21392};
					bidirect[] = {0.025,0.024,0.018};
					bidirectCloud[] = {0.025,0.024,0.018};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.3,0.44,0.74},15};
					apertureMin = 70;
					apertureStandard = 120;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting26
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.09,0.137,0.22},1};
					diffuseCloud[] = {{0,0,0},0.75};
					ambient[] = {{0.09,0.137,0.22},1};
					ambientCloud[] = {{0.09,0.137,0.22},1};
					ambientMid[] = {{0.09,0.137,0.22},0.8624};
					ambientMidCloud[] = {{0.09,0.137,0.22},0.8624};
					groundReflection[] = {{0.09,0.137,0.22},0.758912};
					groundReflectionCloud[] = {{0.09,0.137,0.22},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {0.231,0.314,0.467};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.09,0.137,0.22};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting27
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -12;
					sunOrMoon = 0;
					diffuse[] = {0.16954,0.239,0.37673};
					diffuseCloud[] = {0.042385,0.05975,0.094183};
					ambient[] = {{0.16954,0.239,0.37673},1};
					ambientCloud[] = {{0.16954,0.239,0.37673},1};
					ambientMid[] = {{0.173,0.239,0.373},0.8624};
					ambientMidCloud[] = {{0.173,0.239,0.373},0.8624};
					groundReflection[] = {{0.14705,0.20315,0.31705},0.758912};
					groundReflectionCloud[] = {{0.14705,0.20315,0.31705},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting28
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -11;
					sunOrMoon = 0.5;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {0.2,0.25,0.45};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting29
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -10;
					sunOrMoon = 1;
					diffuse[] = {0.129,0.18,0.271};
					diffuseCloud[] = {0.03225,0.045,0.06775};
					ambient[] = {{0.129,0.18,0.271},1};
					ambientCloud[] = {{0.129,0.18,0.271},1};
					ambientMid[] = {{0.129,0.184,0.267},0.8624};
					ambientMidCloud[] = {{0.129,0.184,0.267},0.8624};
					groundReflection[] = {{0.125,0.176,0.263},0.758912};
					groundReflectionCloud[] = {{0.125,0.176,0.263},0.758912};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.212,0.302,0.51},1};
					skyAroundSun[] = {{0.2,0.25,0.45},4.734908};
					fogColor[] = {0.122,0.169,0.255};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 10;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting30
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.157,0.212,0.306},0.5625};
					diffuseCloud[] = {{0.03925,0.053,0.0765},0.39375};
					ambient[] = {{0.157,0.212,0.306},3.22};
					ambientCloud[] = {{0.157,0.212,0.306},3.22};
					ambientMid[] = {{0.157,0.208,0.298},3.96704};
					ambientMidCloud[] = {{0.157,0.208,0.298},3.96704};
					groundReflection[] = {{0.149,0.204,0.29},3.649677};
					groundReflectionCloud[] = {{0.149,0.204,0.29},3.649677};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.2,0.298,0.541},4.6};
					skyAroundSun[] = {{0.7,0.35,0.28},7.636949};
					fogColor[] = {{0.141,0.192,0.282},3.96704};
					apertureMin = 5;
					apertureStandard = 5;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting31
				{
					height = 0;
					overcast = 0.85;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.184,0.247,0.341},0.9375};
					diffuseCloud[] = {{0.046,0.06175,0.08525},0.65625};
					ambient[] = {{0.184,0.247,0.341},6.9};
					ambientCloud[] = {{0.184,0.247,0.341},6.9};
					ambientMid[] = {{0.184,0.243,0.329},5.95056};
					ambientMidCloud[] = {{0.184,0.243,0.329},5.95056};
					groundReflection[] = {{0.176,0.231,0.322},5.593526};
					groundReflectionCloud[] = {{0.176,0.231,0.322},5.593526};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.188,0.29,0.576},6.9};
					skyAroundSun[] = {{1.8,0.42,0.2},12.31766};
					fogColor[] = {{0.165,0.22,0.31},5.95056};
					apertureMin = 6;
					apertureStandard = 6;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting32
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.216,0.286,0.384},1.125};
					diffuseCloud[] = {{0.054,0.0715,0.096},0.7875};
					ambient[] = {{0.216,0.286,0.384},7.8};
					ambientCloud[] = {{0.216,0.286,0.384},7.8};
					ambientMid[] = {{0.22,0.278,0.365},6.72672};
					ambientMidCloud[] = {{0.22,0.278,0.365},6.72672};
					groundReflection[] = {{0.204,0.267,0.353},6.457651};
					groundReflectionCloud[] = {{0.204,0.267,0.353},6.457651};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.173,0.282,0.612},7.8};
					skyAroundSun[] = {{2,0.42,0.2},13.38876};
					fogColor[] = {{0.188,0.247,0.341},6.72672};
					apertureMin = 7;
					apertureStandard = 7;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting33
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.255,0.325,0.42},1.68};
					diffuseCloud[] = {{0.06375,0.08125,0.105},1.176};
					ambient[] = {{0.255,0.325,0.42},8.4};
					ambientCloud[] = {{0.255,0.325,0.42},8.4};
					ambientMid[] = {{0.259,0.314,0.396},7.24416};
					ambientMidCloud[] = {{0.259,0.314,0.396},7.24416};
					groundReflection[] = {{0.239,0.294,0.376},7.099277};
					groundReflectionCloud[] = {{0.239,0.294,0.376},7.099277};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.157,0.275,0.651},8.4};
					skyAroundSun[] = {{2.2,0.8,0.2},13.38876};
					fogColor[] = {{0.216,0.275,0.373},7.24416};
					apertureMin = 8;
					apertureStandard = 8;
					apertureMax = 24;
					standardAvgLum = 50;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting34
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.298,0.365,0.451},2.55};
					diffuseCloud[] = {{0.0745,0.09125,0.11275},1.785};
					ambient[] = {{0.298,0.365,0.451},9.6};
					ambientCloud[] = {{0.298,0.365,0.451},9.6};
					ambientMid[] = {{0.302,0.349,0.416},8.27904};
					ambientMidCloud[] = {{0.302,0.349,0.416},8.27904};
					groundReflection[] = {{0.275,0.318,0.384},8.11346};
					groundReflectionCloud[] = {{0.275,0.318,0.384},8.11346};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.145,0.263,0.686},9.6};
					skyAroundSun[] = {{0.4,0.32,0.6},13.38876};
					fogColor[] = {{0.243,0.306,0.408},8.27904};
					apertureMin = 8;
					apertureStandard = 14;
					apertureMax = 26;
					standardAvgLum = 100;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.027,0.045};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting35
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 12;
					sunOrMoon = 1;
					diffuse[] = {{0.376,0.431,0.506},3.075};
					diffuseCloud[] = {{0.094,0.10775,0.1265},2.1525};
					ambient[] = {{0.376,0.431,0.506},10.9};
					ambientCloud[] = {{0.376,0.431,0.506},10.9};
					ambientMid[] = {{0.38,0.408,0.447},9.6138};
					ambientMidCloud[] = {{0.38,0.408,0.447},9.6138};
					groundReflection[] = {{0.329,0.361,0.396},9.421524};
					groundReflectionCloud[] = {{0.329,0.361,0.396},9.421524};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.129,0.259,0.722},10.9};
					skyAroundSun[] = {{0.13,0.25,0.8},13.524};
					fogColor[] = {{0.286,0.353,0.463},9.6138};
					apertureMin = 20;
					apertureStandard = 22;
					apertureMax = 35;
					standardAvgLum = 250;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.018,0.04};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},12.24};
					swBrightness = 1;
				};
				class Lighting36
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 24;
					sunOrMoon = 1;
					diffuse[] = {{0.447,0.494,0.557},3.95};
					diffuseCloud[] = {{0,0,0},2.765};
					ambient[] = {{0.447,0.494,0.557},13.8};
					ambientCloud[] = {{0.447,0.494,0.557},13.8};
					ambientMid[] = {{0.455,0.467,0.475},12.44208};
					ambientMidCloud[] = {{0.455,0.467,0.475},12.44208};
					groundReflection[] = {{0.388,0.396,0.408},12.19324};
					groundReflectionCloud[] = {{0.388,0.396,0.408},12.19324};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.118,0.251,0.753},13.8};
					skyAroundSun[] = {{0.115,0.245,0.8},13.662};
					fogColor[] = {{0.333,0.404,0.518},12.44208};
					apertureMin = 45;
					apertureStandard = 50;
					apertureMax = 80;
					standardAvgLum = 800;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.4};
					swBrightness = 1;
				};
				class Lighting37
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.506,0.553,0.608},4.25};
					diffuseCloud[] = {0.1265,0.13825,0.152};
					ambient[] = {{0.506,0.553,0.608},14.8};
					ambientCloud[] = {{0.506,0.553,0.608},14.8};
					ambientMid[] = {{0.514,0.518,0.514},13.34368};
					ambientMidCloud[] = {{0.514,0.518,0.514},13.34368};
					groundReflection[] = {{0.435,0.439,0.439},13.07681};
					groundReflectionCloud[] = {{0.435,0.439,0.439},13.07681};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.369,0.447,0.565},13.34368};
					apertureMin = 70;
					apertureStandard = 100;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting38
				{
					height = 0;
					overcast = 0.85;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.549,0.596,0.651},4.25};
					diffuseCloud[] = {0.13725,0.149,0.16275};
					ambient[] = {{0.549,0.596,0.651},14.8};
					ambientCloud[] = {{0.549,0.596,0.651},14.8};
					ambientMid[] = {{0.557,0.557,0.585},14.21392};
					ambientMidCloud[] = {{0.557,0.557,0.585},14.21392};
					groundReflection[] = {{0.471,0.471,0.463},13.92964};
					groundReflectionCloud[] = {{0.471,0.471,0.463},13.92964};
					bidirect[] = {0.0117,0.0117,0.0117};
					bidirectCloud[] = {0.0117,0.0117,0.0117};
					sky[] = {{0.02,0.12,0.8},13.8};
					skyAroundSun[] = {{0.02,0.12,0.8},13.8};
					fogColor[] = {{0.4,0.48,0.6},15};
					apertureMin = 70;
					apertureStandard = 110;
					apertureMax = 120;
					standardAvgLum = 8000;
					desiredLuminanceCoef = 1;
					desiredLuminanceCoefCloud = 1;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 0.5;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting39
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -24;
					sunOrMoon = 0;
					diffuse[] = {{0.6,0.8,1},2.8};
					diffuseCloud[] = {{0.6,0.8,1},2.8};
					ambient[] = {{0.4,0.9,1},0.84};
					ambientCloud[] = {{0.4,0.9,1},0.84};
					ambientMid[] = {{0.24,0.63,1},0.9072};
					ambientMidCloud[] = {{0.24,0.63,1},0.9072};
					groundReflection[] = {{0.24,0.63,1},0.870912};
					groundReflectionCloud[] = {{0.24,0.63,1},0.870912};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.2355,0.2335};
					skyAroundSun[] = {0,0.2355,0.2335};
					fogColor[] = {{0.09,0.137,0.22},0.0275};
					apertureMin = 4;
					apertureStandard = 4;
					apertureMax = 8;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting40
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -5;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},2.1};
					diffuseCloud[] = {{0.6,0.8,1},2.1};
					ambient[] = {{0.4,0.9,1},3.68};
					ambientCloud[] = {{0.4,0.9,1},3.68};
					ambientMid[] = {{0.24,0.63,1},3.9744};
					ambientMidCloud[] = {{0.24,0.63,1},3.9744};
					groundReflection[] = {{0.24,0.63,1},3.815424};
					groundReflectionCloud[] = {{0.24,0.63,1},3.815424};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2235,0.2705},4.232};
					skyAroundSun[] = {{0,0.2235,0.2705},7.636949};
					fogColor[] = {{0.106,0.161,0.267},4.715};
					apertureMin = 5;
					apertureStandard = 6;
					apertureMax = 18;
					standardAvgLum = 4;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting41
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = -2;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},3.5};
					diffuseCloud[] = {{0.6,0.8,1},3.5};
					ambient[] = {{0.4,0.9,1},5.52};
					ambientCloud[] = {{0.4,0.9,1},5.52};
					ambientMid[] = {{0.24,0.63,1},5.9616};
					ambientMidCloud[] = {{0.24,0.63,1},5.9616};
					groundReflection[] = {{0.24,0.63,1},5.723136};
					groundReflectionCloud[] = {{0.24,0.63,1},5.723136};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2175,0.288},6.348};
					skyAroundSun[] = {{0,0.2175,0.288},12.31766};
					fogColor[] = {{0.11,0.169,0.286},7.0725};
					apertureMin = 6;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting42
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},4.2};
					diffuseCloud[] = {{0.6,0.8,1},4.2};
					ambient[] = {{0.4,0.9,1},6.24};
					ambientCloud[] = {{0.4,0.9,1},6.24};
					ambientMid[] = {{0.24,0.63,1},6.7392};
					ambientMidCloud[] = {{0.24,0.63,1},6.7392};
					groundReflection[] = {{0.24,0.63,1},6.469632};
					groundReflectionCloud[] = {{0.24,0.63,1},6.469632};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.2115,0.306},7.176};
					skyAroundSun[] = {{0,0.2115,0.306},13.38876};
					fogColor[] = {{0.118,0.18,0.31},7.995};
					apertureMin = 7;
					apertureStandard = 9;
					apertureMax = 22;
					standardAvgLum = 45;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.038,0.0675};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},11.016};
					swBrightness = 1;
				};
				class Lighting43
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting44
				{
					height = -0.1;
					overcast = 0.8;
					sunAngle = 90;
					sunOrMoon = 1;
					diffuse[] = {{0.6,0.8,1},12.04};
					diffuseCloud[] = {{0.6,0.8,1},12.04};
					ambient[] = {{0.4,0.9,1},11.84};
					ambientCloud[] = {{0.4,0.9,1},11.84};
					ambientMid[] = {{0.36,0.72,1},11.4848};
					ambientMidCloud[] = {{0.36,0.72,1},11.4848};
					groundReflection[] = {{0.36,0.72,1},11.02541};
					groundReflectionCloud[] = {{0.36,0.72,1},11.02541};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0,0.09,0.4},13.8};
					skyAroundSun[] = {{0,0.09,0.4},13.8};
					fogColor[] = {{0.3,0.44,0.74},16.5};
					apertureMin = 12;
					apertureStandard = 18;
					apertureMax = 25;
					standardAvgLum = 150;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.007,0.01388,0.035};
					mie[] = {0.005,0.005,0.005};
					cloudsColor[] = {{1,1,1},14.8};
					swBrightness = 1;
				};
				class Lighting45
				{
					height = -160;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0.03465,0.148176,0.2134},0.72732};
					diffuseCloud[] = {{0.03465,0.148176,0.2134},0.72732};
					ambient[] = {{0.01,0.300854,0.562491},2.552893};
					ambientCloud[] = {{0.01,0.300854,0.562491},2.552893};
					ambientMid[] = {{0.01,0.300854,0.562491},2.042315};
					ambientMidCloud[] = {{0.01,0.300854,0.562491},2.042315};
					groundReflection[] = {{0.01,0.300854,0.562491},1.633852};
					groundReflectionCloud[] = {{0.01,0.300854,0.562491},1.633852};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0,0.05,0.07};
					sky[] = {{0.52,0.44,0.4239},1.642212};
					skyAroundSun[] = {{0.3,0.09625,0.02997},9.652143};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 1;
				};
				class Lighting46
				{
					height = -160;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.0385,0.5292,0.97},1.914};
					diffuseCloud[] = {{0.0385,0.5292,0.97},1.914};
					ambient[] = {{0.01,0.3872,0.747},5.97168};
					ambientCloud[] = {{0.01,0.3872,0.747},5.97168};
					ambientMid[] = {{0.01,0.3872,0.747},4.777344};
					ambientMidCloud[] = {{0.01,0.3872,0.747},4.777344};
					groundReflection[] = {{0.01,0.3872,0.747},3.821875};
					groundReflectionCloud[] = {{0.01,0.3872,0.747},3.821875};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0,0.05,0.07};
					sky[] = {{0.4,0.55,0.9},7.29872};
					skyAroundSun[] = {{0.4,0.385,0.45},14.84945};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 1;
				};
				class Lighting47
				{
					height = -250;
					overcast = 0.4;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0.0005,0.001,0.001};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.0004,0.0008,0.0008};
					ambientCloud[] = {0,0,0};
					ambientMid[] = {0.000375,0.00075,0.00075};
					ambientMidCloud[] = {0,0,0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0,0.002,0.003};
					skyAroundSun[] = {0,0.002,0.003};
					fogColor[] = {0,0,0};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.3,0.4,1},13.61492};
					swBrightness = 5;
				};
				class Lighting48
				{
					height = -250;
					overcast = 0.4;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {0.4,0.5,0.5};
					diffuseCloud[] = {0.2,0.5,0.5};
					ambient[] = {0.1,0.2,0.2};
					ambientCloud[] = {0,0.5,1};
					ambientMid[] = {0.1,0.2,0.2};
					ambientMidCloud[] = {0,0.5,1};
					groundReflection[] = {0,0.45,0.4};
					groundReflectionCloud[] = {0.3,0.3,0.3};
					bidirect[] = {0,0.05,0.07};
					bidirectCloud[] = {0.03,0.03,0.03};
					sky[] = {{0.1,0.64,1},0.164221};
					skyAroundSun[] = {{0.5,0.64,1},0.965214};
					fogColor[] = {0.05,0.05,0.05};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0.02;
					desiredLuminanceCoefCloud = 0.02;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 1;
				};
				class Lighting49
				{
					height = -250;
					overcast = 0.4;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {0,1,1};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0,0,0};
					ambientCloud[] = {0,0,0};
					ambientMid[] = {0,0,0};
					ambientMidCloud[] = {0,0,0};
					groundReflection[] = {0,0,0};
					groundReflectionCloud[] = {0,0,0};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.4,0.55,0.9},7.29872};
					skyAroundSun[] = {{0.4,0.385,0.45},18.94062};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 1;
				};
				class Lighting50
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.006372,0.056282,0.354294};
					ambientCloud[] = {0.005735,0.050653,0.318865};
					ambientMid[] = {0.005098,0.045025,0.283435};
					ambientMidCloud[] = {0.005098,0.045025,0.283435};
					groundReflection[] = {0.003008,0.041873,0.283435};
					groundReflectionCloud[] = {0.003008,0.041873,0.283435};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.000898};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.3,0.4,1},13.61492};
					swBrightness = 5;
				};
				class Lighting51
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {0.05775,0.18522,0.7275};
					diffuseCloud[] = {0.051975,0.166698,0.65475};
					ambient[] = {0.001888,0.006064,0.017496};
					ambientCloud[] = {0.001699,0.005458,0.015746};
					ambientMid[] = {0.00151,0.004851,0.013997};
					ambientMidCloud[] = {0.00151,0.004851,0.013997};
					groundReflection[] = {0.000891,0.004512,0.013997};
					groundReflectionCloud[] = {0.000891,0.004512,0.013997};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.008983};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 0;
				};
				class Lighting52
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.013688,0.021224,0.130248};
					ambientCloud[] = {0.012319,0.019102,0.117223};
					ambientMid[] = {0.01095,0.016979,0.104198};
					ambientMidCloud[] = {0.01095,0.016979,0.104198};
					groundReflection[] = {0.006461,0.015791,0.104198};
					groundReflectionCloud[] = {0.006461,0.015791,0.104198};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.32,0.2,0.25};
					skyAroundSun[] = {{0.00456,0.005486,0.009619},0.4};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 0;
				};
				class Lighting53
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.022184,0.0306,0.0549};
					ambientCloud[] = {0.019966,0.02754,0.04941};
					ambientMid[] = {0.017747,0.02448,0.04392};
					ambientMidCloud[] = {0.017747,0.02448,0.04392};
					groundReflection[] = {0.010471,0.022766,0.04392};
					groundReflectionCloud[] = {0.010471,0.022766,0.04392};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.011229};
					skyAroundSun[] = {{0.0048,0.005775,0.010125},1.8183};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 0;
				};
				class Lighting54
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.022184,0.0455,0.08},0.368509};
					ambientCloud[] = {{0.019966,0.04095,0.072},0.331658};
					ambientMid[] = {{0.017747,0.0364,0.064},0.331658};
					ambientMidCloud[] = {{0.017747,0.0364,0.064},0.331658};
					groundReflection[] = {{0.010471,0.033852,0.064},0.265326};
					groundReflectionCloud[] = {{0.010471,0.033852,0.064},0.265326};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.757944};
					skyAroundSun[] = {{0.048,0.05775,0.10125},4.8488};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},11};
					swBrightness = 0;
				};
				class Lighting55
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.07,0.0775,0.086},3.938438};
					ambientCloud[] = {{0.063,0.06975,0.0774},3.544594};
					ambientMid[] = {{0.056,0.062,0.0688},3.544594};
					ambientMidCloud[] = {{0.056,0.062,0.0688},3.544594};
					groundReflection[] = {{0.03304,0.05766,0.0688},2.835675};
					groundReflectionCloud[] = {{0.03304,0.05766,0.0688},2.835675};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},2.893521};
					skyAroundSun[] = {{0.12,0.10395,0.09},9.0915};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},11};
					swBrightness = 0;
				};
				class Lighting56
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0,0,0},0.436392};
					diffuseCloud[] = {{0,0,0},0.392753};
					ambient[] = {{0.097704,0.13,0.215},4.145724};
					ambientCloud[] = {{0.087934,0.117,0.1935},3.731152};
					ambientMid[] = {{0.078163,0.104,0.172},3.731152};
					ambientMidCloud[] = {{0.078163,0.104,0.172},3.731152};
					groundReflection[] = {{0.046116,0.09672,0.172},2.984921};
					groundReflectionCloud[] = {{0.046116,0.09672,0.172},2.984921};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},4.10553};
					skyAroundSun[] = {{0.3,0.09625,0.02997},9.849125};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 1;
				};
				class Lighting57
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.7,0.9,1},0.94743};
					diffuseCloud[] = {{0.63,0.81,0.9},0.852687};
					ambient[] = {{0.140184,0.2082,0.3654},4.875317};
					ambientCloud[] = {{0.126166,0.18738,0.32886},4.387785};
					ambientMid[] = {{0.112147,0.16656,0.29232},4.387785};
					ambientMidCloud[] = {{0.112147,0.16656,0.29232},4.387785};
					groundReflection[] = {{0.066167,0.154901,0.29232},3.510228};
					groundReflectionCloud[] = {{0.066167,0.154901,0.29232},3.510228};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},6.240406};
					skyAroundSun[] = {{0.4392,0.128744,0.03609},13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting58
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.7,0.9,1},1.83744};
					diffuseCloud[] = {{0.63,0.81,0.9},1.653696};
					ambient[] = {{0.186912,0.28795,0.4361},6.818625};
					ambientCloud[] = {{0.168221,0.259155,0.39249},6.136763};
					ambientMid[] = {{0.14953,0.23036,0.34888},6.136763};
					ambientMidCloud[] = {{0.14953,0.23036,0.34888},6.136763};
					groundReflection[] = {{0.088222,0.214235,0.34888},4.90941};
					groundReflectionCloud[] = {{0.088222,0.214235,0.34888},4.90941};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},7.958412};
					skyAroundSun[] = {{0.424,0.206745,0.1188},13.3342};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting59
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{0.7,0.9,1},3.10068};
					diffuseCloud[] = {{0.63,0.81,0.9},2.790612};
					ambient[] = {{0.225144,0.364,0.4942},6.818625};
					ambientCloud[] = {{0.20263,0.3276,0.44478},6.136763};
					ambientMid[] = {{0.180115,0.2912,0.39536},6.136763};
					ambientMidCloud[] = {{0.180115,0.2912,0.39536},6.136763};
					groundReflection[] = {{0.106268,0.270816,0.39536},4.90941};
					groundReflectionCloud[] = {{0.106268,0.270816,0.39536},4.90941};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},9.162701};
					skyAroundSun[] = {{0.412,0.437976,0.42435},13.9403};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting60
				{
					height = -0.001;
					overcast = 0.95;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.7,0.9,1},4.5936};
					diffuseCloud[] = {{0.63,0.81,0.9},4.13424};
					ambient[] = {{0.284734,0.4158,0.46144},8.7725};
					ambientCloud[] = {{0.256261,0.37422,0.415296},7.89525};
					ambientMid[] = {{0.227787,0.33264,0.369152},7.89525};
					ambientMidCloud[] = {{0.227787,0.33264,0.369152},7.89525};
					groundReflection[] = {{0.134395,0.309355,0.369152},6.3162};
					groundReflectionCloud[] = {{0.134395,0.309355,0.369152},6.3162};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},8.98304};
					skyAroundSun[] = {{0.4,0.385,0.45},15.1525};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 1;
				};
				class Lighting61
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -14;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.003186,0.028141,0.177147};
					ambientCloud[] = {0.003186,0.028141,0.177147};
					ambientMid[] = {0.002549,0.022513,0.141718};
					ambientMidCloud[] = {0.002549,0.022513,0.141718};
					groundReflection[] = {0.001504,0.020937,0.141718};
					groundReflectionCloud[] = {0.001504,0.020937,0.141718};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.000629};
					skyAroundSun[] = {4e-006,0.000104,0.000366};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 5.916064;
					apertureStandard = 6.859;
					apertureMax = 17.1475;
					standardAvgLum = 1.08;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.3,0.4,1},13.61492};
					swBrightness = 5;
				};
				class Lighting62
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -10;
					sunOrMoon = 0;
					diffuse[] = {0.028875,0.18522,0.7275};
					diffuseCloud[] = {0.028875,0.18522,0.7275};
					ambient[] = {0.000944,0.003032,0.008748};
					ambientCloud[] = {0.000944,0.003032,0.008748};
					ambientMid[] = {0.000755,0.002426,0.006998};
					ambientMidCloud[] = {0.000755,0.002426,0.006998};
					groundReflection[] = {0.000446,0.002256,0.006998};
					groundReflectionCloud[] = {0.000446,0.002256,0.006998};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.006288};
					skyAroundSun[] = {0.004332,0.005212,0.009138};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.39508;
					apertureStandard = 7.22;
					apertureMax = 18.05;
					standardAvgLum = 1.8;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 0;
				};
				class Lighting63
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -9;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.006844,0.010612,0.065124};
					ambientCloud[] = {0.006844,0.010612,0.065124};
					ambientMid[] = {0.005475,0.00849,0.052099};
					ambientMidCloud[] = {0.005475,0.00849,0.052099};
					groundReflection[] = {0.00323,0.007895,0.052099};
					groundReflectionCloud[] = {0.00323,0.007895,0.052099};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {0.32,0.2,0.25};
					skyAroundSun[] = {{0.00456,0.005486,0.009619},0.392};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.546;
					apertureStandard = 7.6;
					apertureMax = 19;
					standardAvgLum = 3;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 0;
				};
				class Lighting64
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -8;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {0.011092,0.0153,0.02745};
					ambientCloud[] = {0.011092,0.0153,0.02745};
					ambientMid[] = {0.008874,0.01224,0.02196};
					ambientMidCloud[] = {0.008874,0.01224,0.02196};
					groundReflection[] = {0.005235,0.011383,0.02196};
					groundReflectionCloud[] = {0.005235,0.011383,0.02196};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.00786};
					skyAroundSun[] = {{0.0048,0.005775,0.010125},1.781934};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.7;
					apertureStandard = 8;
					apertureMax = 20;
					standardAvgLum = 5;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 0;
				};
				class Lighting65
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -6;
					sunOrMoon = 0;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.011092,0.02275,0.04},0.294807};
					ambientCloud[] = {{0.011092,0.02275,0.04},0.294807};
					ambientMid[] = {{0.008874,0.0182,0.032},0.265326};
					ambientMidCloud[] = {{0.008874,0.0182,0.032},0.265326};
					groundReflection[] = {{0.005235,0.016926,0.032},0.159196};
					groundReflectionCloud[] = {{0.005235,0.016926,0.032},0.159196};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},0.530561};
					skyAroundSun[] = {{0.048,0.05775,0.10125},4.751824};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 7.8;
					apertureStandard = 9;
					apertureMax = 20;
					standardAvgLum = 10;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},11};
					swBrightness = 0;
				};
				class Lighting66
				{
					height = -60;
					overcast = 0.95;
					sunAngle = -2;
					sunOrMoon = 0.5;
					diffuse[] = {0,0,0};
					diffuseCloud[] = {0,0,0};
					ambient[] = {{0.035,0.03875,0.043},3.15075};
					ambientCloud[] = {{0.035,0.03875,0.043},3.15075};
					ambientMid[] = {{0.028,0.031,0.0344},2.835675};
					ambientMidCloud[] = {{0.028,0.031,0.0344},2.835675};
					groundReflection[] = {{0.01652,0.02883,0.0344},1.701405};
					groundReflectionCloud[] = {{0.01652,0.02883,0.0344},1.701405};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},2.025465};
					skyAroundSun[] = {{0.12,0.10395,0.09},8.90967};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 8;
					apertureStandard = 10;
					apertureMax = 20;
					standardAvgLum = 20;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},11};
					swBrightness = 0;
				};
				class Lighting67
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 0;
					sunOrMoon = 1;
					diffuse[] = {{0,0,0},0.218196};
					diffuseCloud[] = {{0,0,0},0.218196};
					ambient[] = {{0.048852,0.065,0.1075},3.316579};
					ambientCloud[] = {{0.048852,0.065,0.1075},3.316579};
					ambientMid[] = {{0.039082,0.052,0.086},2.984921};
					ambientMidCloud[] = {{0.039082,0.052,0.086},2.984921};
					groundReflection[] = {{0.023058,0.04836,0.086},1.790953};
					groundReflectionCloud[] = {{0.023058,0.04836,0.086},1.790953};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},2.873871};
					skyAroundSun[] = {{0.3,0.09625,0.02997},9.652143};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 9;
					apertureStandard = 12;
					apertureMax = 20;
					standardAvgLum = 60;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},12};
					swBrightness = 1;
				};
				class Lighting68
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 2;
					sunOrMoon = 1;
					diffuse[] = {{0.35,0.9,1},0.473715};
					diffuseCloud[] = {{0.35,0.9,1},0.473715};
					ambient[] = {{0.070092,0.1041,0.1827},3.900254};
					ambientCloud[] = {{0.070092,0.1041,0.1827},3.900254};
					ambientMid[] = {{0.056074,0.08328,0.14616},3.510228};
					ambientMidCloud[] = {{0.056074,0.08328,0.14616},3.510228};
					groundReflection[] = {{0.033083,0.07745,0.14616},2.106137};
					groundReflectionCloud[] = {{0.033083,0.07745,0.14616},2.106137};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},4.368284};
					skyAroundSun[] = {{0.4392,0.128744,0.03609},11.87956};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 10;
					apertureStandard = 15;
					apertureMax = 20;
					standardAvgLum = 70;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting69
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 6;
					sunOrMoon = 1;
					diffuse[] = {{0.35,0.9,1},0.91872};
					diffuseCloud[] = {{0.35,0.9,1},0.91872};
					ambient[] = {{0.093456,0.143975,0.21805},5.4549};
					ambientCloud[] = {{0.093456,0.143975,0.21805},5.4549};
					ambientMid[] = {{0.074765,0.11518,0.17444},4.90941};
					ambientMidCloud[] = {{0.074765,0.11518,0.17444},4.90941};
					groundReflection[] = {{0.044111,0.107117,0.17444},2.945646};
					groundReflectionCloud[] = {{0.044111,0.107117,0.17444},2.945646};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},5.570889};
					skyAroundSun[] = {{0.424,0.206745,0.1188},13.06752};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 20;
					apertureMax = 40;
					standardAvgLum = 120;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting70
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 16;
					sunOrMoon = 1;
					diffuse[] = {{0.35,0.9,1},1.55034};
					diffuseCloud[] = {{0.35,0.9,1},1.55034};
					ambient[] = {{0.112572,0.182,0.2471},5.4549};
					ambientCloud[] = {{0.112572,0.182,0.2471},5.4549};
					ambientMid[] = {{0.090058,0.1456,0.19768},4.90941};
					ambientMidCloud[] = {{0.090058,0.1456,0.19768},4.90941};
					groundReflection[] = {{0.053134,0.135408,0.19768},2.945646};
					groundReflectionCloud[] = {{0.053134,0.135408,0.19768},2.945646};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},6.41389};
					skyAroundSun[] = {{0.412,0.437976,0.42435},13.66149};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 15;
					apertureStandard = 25;
					apertureMax = 85;
					standardAvgLum = 450;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.0046,0.0046,0.0046};
					cloudsColor[] = {{0.8,0.81,1},13};
					swBrightness = 0;
				};
				class Lighting71
				{
					height = -60;
					overcast = 0.95;
					sunAngle = 45;
					sunOrMoon = 1;
					diffuse[] = {{0.35,0.9,1},2.2968};
					diffuseCloud[] = {{0.35,0.9,1},2.2968};
					ambient[] = {{0.142367,0.2079,0.23072},7.018};
					ambientCloud[] = {{0.142367,0.2079,0.23072},7.018};
					ambientMid[] = {{0.113894,0.16632,0.184576},6.3162};
					ambientMidCloud[] = {{0.113894,0.16632,0.184576},6.3162};
					groundReflection[] = {{0.067197,0.154678,0.184576},3.78972};
					groundReflectionCloud[] = {{0.067197,0.154678,0.184576},3.78972};
					bidirect[] = {0,0,0};
					bidirectCloud[] = {0,0,0};
					sky[] = {{0.32,0.2,0.25},6.288128};
					skyAroundSun[] = {{0.4,0.385,0.45},14.84945};
					fogColor[] = {0.005,0.005,0.005};
					apertureMin = 22.5;
					apertureStandard = 65;
					apertureMax = 85;
					standardAvgLum = 800;
					desiredLuminanceCoef = 0;
					desiredLuminanceCoefCloud = 0;
					luminanceRectCoef = 1;
					luminanceRectCoefCloud = 1;
					rayleigh[] = {0.00749,0.01388,0.02878};
					mie[] = {0.006,0.0046,0.004};
					cloudsColor[] = {{"193/255","194/255","209/255"},13};
					swBrightness = 1;
				};
			};
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast = 0.0;
				};
				class Rainy: DayLightingRainy
				{
					overcast = 1.0;
				};
			};
			class ThunderboltNorm
			{
				model = "\A3\data_f\raindrop.p3d";
				soundNear[] = {"",0,0};
				soundFar[] = {"",0,0};
			};
			class ThunderboltHeavy
			{
				model = "\A3\data_f\raindrop.p3d";
				soundNear[] = {"",0,0};
				soundFar[] = {"",0,0};
			};
			temperatureDayMax[] = {-2,0,1,1,2,3,3,3,2,1,0,-1};
			temperatureDayMin[] = {-10,-6,-5,-1,0,0,0,0,-1,-2,-5,-10};
			temperatureNightMax[] = {-6,-7,-8,-10,-13,-14,-15,-14,-13,-10,-8,-4};
			temperatureNightMin[] = {-25,-21,-18,-16,-13,-10,-13,-16,-19,-21,-24,-27};
			overcastTemperatureFactor = 0.4;
			blackSurfaceTemperatureDelta = 5;
			whiteSurfaceTemperatureDelta = -2;
			class Overcast: Overcast
			{
				class Weather1: Weather1
				{
					sky = "nst\namalsk\data\sky_veryclear_sky.paa";
					skyR = "nst\namalsk\data\sky_veryclear_lco.paa";
					horizon = "nst\namalsk\data\sky_veryclear_horizont_sky.paa";
				};
				class Weather7: Weather1
				{
					sky = "nst\namalsk\data\sky_clear_sky.paa";
					skyR = "nst\namalsk\data\sky_clear_lco.paa";
					horizon = "nst\namalsk\data\sky_clear_horizont_sky.paa";
				};
				class Weather2: Weather2
				{
					sky = "nst\namalsk\data\sky_almostclear_sky.paa";
					skyR = "nst\namalsk\data\sky_almostclear_lco.paa";
					horizon = "nst\namalsk\data\sky_almostclear_horizont_sky.paa";
				};
				class Weather3: Weather3
				{
					sky = "nst\namalsk\data\sky_semicloudy_sky.paa";
					skyR = "nst\namalsk\data\sky_semicloudy_lco.paa";
					horizon = "nst\namalsk\data\sky_semicloudy_horizont_sky.paa";
				};
				class Weather4: Weather4
				{
					sky = "nst\namalsk\data\sky_cloudy_sky.paa";
					skyR = "nst\namalsk\data\sky_cloudy_lco.paa";
					horizon = "nst\namalsk\data\sky_cloudy_horizont_sky.paa";
				};
				class Weather5: Weather5
				{
					sky = "nst\namalsk\data\sky_mostlycloudy_sky.paa";
					skyR = "nst\namalsk\data\sky_mostlycloudy_lco.paa";
					horizon = "nst\namalsk\data\sky_mostlycloudy_horizont_sky.paa";
				};
				class Weather6: Weather6
				{
					sky = "nst\namalsk\data\sky_overcast_sky.paa";
					skyR = "nst\namalsk\data\sky_overcast_lco.paa";
					horizon = "nst\namalsk\data\sky_overcast_horizont_sky.paa";
				};
			};
		};
		centerPosition[] = {4352,7348,100};
		seagullPos[] = {2560,150,2560};
		center[] = {5508,9034};
		SWcorner[] = {0,0};
		NEcorner[] = {12800,12800};
		spawnRadius = 4000;
		ilsPosition[] = {6235,9513,44};
		ilsDirection[] = {0,0.08,1};
		ilsTaxiIn[] = {6252,9231,6244,9323,6241,9410,6238,9484,6236,9565,6230,9630};
		ilsTaxiOff[] = {6230,9630,6236,9565,6238,9484,6241,9410,6244,9323,6252,9231};
		class Ambient{};
		class AmbientA3
		{
			maxCost=500;
			class Radius440_500
			{
				areaSpawnRadius=70;
				areaMaxRadius=200;
				spawnCircleRadius=30;
				spawnInterval=4.6999998;
				class Species
				{
					delete Kestrel_random_F;
					delete Rabbit_F;
					class Eagle_F
					{
						maxCircleCount="((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night) * (1 - rain) * (1 - sea)";
						maxWorldCount=1;
						cost=3;
						spawnCount=1;
						groupSpawnRadius=20;
						maxAlt=30;
						minAlt=-20;
					};
					class Crowe
					{
						maxCircleCount="((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night) * (1 - rain) * (1 - sea)";
						maxWorldCount=2;
						cost=3;
						spawnCount=1;
						groupSpawnRadius=10;
						maxAlt=20;
						minAlt=-15;
					};
					class Seagull
					{
						maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount = 8;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
				};
			};
			class Radius40_60
			{
				areaSpawnRadius = 50;
				areaMaxRadius = 83;
				spawnCircleRadius = 10;
				spawnInterval = 1.5;
				class Species
				{
					delete CatShark_F;
					delete Turtle_F;
					delete Salema_F;
					delete Ornate_random_F;
					delete Tuna_F;
					delete Snake_random_F;
					class Mackerel_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mullet_F
					{
						maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
						maxWorldCount = 14;
						cost = 5;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40
			{
				class Species
				{
					delete DragonFly;
					delete ButterFly_random;
					delete FireFly;
					delete Cicada;
				};
			};
			class Radius15_20
			{
				areaSpawnRadius = 15;
				areaMaxRadius = 20;
				spawnCircleRadius = 2;
				spawnInterval = 2.85;
				class Species
				{
					class FxWindGrass1
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2
					{
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					delete FxWindLeaf1;
					delete FxWindLeaf2;
					delete FxWindLeaf3;
					class FxWindPollen1
					{
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1
					{
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10
			{
				areaSpawnRadius = 6;
				areaMaxRadius = 10;
				spawnCircleRadius = 1;
				spawnInterval = 0.1;
				class Species
				{
					delete HoneyBee;
					class HouseFly
					{
						maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - hills)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito
					{
						maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - hills)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		class SecondaryAirports{};
		class EnvSounds
		{
			class Default
			{
				name = "$STR_CFG_ENVSOUNDS_DEFAULT";
				sound[] = {"$DEFAULT$",0,1};
				soundNight[] = {"$DEFAULT$",0,1};
			};
			class Rain
			{
				name = "$STR_DN_RAIN";
				sound[] = {"",0,0}; // sound[] = {"\nst\ns_sounds\zonesounds\fx_rain1.ogg",0.877828,1};
				soundNight[] = {"",0,0}; // soundNight[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_houses.ogg",0.877828,1};
				volume = 0; // volume = "rain";
			};
			class Sea
			{
				name = "$STR_DN_SEA";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_sea.ogg",0.3,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_sea.ogg",0.307828,1};
			};
			class WindForestHigh
			{
				name = "$STR_DN_WIND";
				volume = "forest*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.3,1};
			};
			class WindNoForestHigh
			{
				name = "$STR_DN_WIND";
				volume = "(1-forest)*(windy factor[0,1])*(0.1+(hills factor[0,1])*0.9)-(night*0.25)";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_3.ogg",0.3,1};
			};
			class Forest
			{
				name = "$STR_DN_WIND";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_2.ogg",0.3,1};
				volume = "forest*(1-night)";
			};
			class ForestNight
			{
				name = "$STR_DN_WIND";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_town_01.ogg",0.3,1};
				volume = "forest*night";
			};
			class Houses
			{
				name = "$STR_DN_WIND";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_houses_true.ogg",0.5,1};
				volume = "(houses-0.75)*4";
			};
			class Meadows
			{
				name = "$STR_DN_MEADOWS";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_3.ogg",0.3,1};
				volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
			};
			class MeadowsNight
			{
				name = "$STR_DN_MEADOWS";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_town_01.ogg",0.3,1};
				volume = "(1-forest)*(1-houses)*night*(1-sea)";
			};
			class Hills
			{
				name = "$STR_DN_HILLS";
				sound[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.4,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\amb_namalsk_hills.ogg",0.4,1};
			};
			class Combat
			{
				name = "$STR_CFG_ENVSOUNDS_COMBAT";
				sound[] = {"\nst\ns_sounds\zonesounds\15_amb_battle.ogg",0.056234,1};
				soundNight[] = {"\nst\ns_sounds\zonesounds\15_amb_battle.ogg",0.056234,1};
			};
		};
		clutterGrid = 1;
		clutterDist = 130;
		clutterRadius = 1;
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = "5.0f";
		clutterColoringFarSpeed = "2.0f";
		clutterColoringFarStart = "20.0f";
		class Clutter
		{
			class Exile_Clutter_Abstract
			{
				affectedByWind = 1;
				model = "";
				relativeColor[] = {1,1,1,1};
				scaleMax = 1.25; // 1
				scaleMin = 1; //0.8
				swLighting = 1;
			};
			class Exile_Clutter_Plant01: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant02: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Grass_BrushHigh_Dry.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant03: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant04: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_GrassTall.p3d";
				affectedByWind = 0.9;
			};
			class Exile_Clutter_Plant05: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Plant_Chicory.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant06: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Plant_Dock.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant07: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Plant_Mullein.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Plant08: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
				affectedByWind = 0.5;
			};
			class Exile_Clutter_Plant09: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
				affectedByWind = 0.8;
			};
			class Exile_Clutter_Plant10: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Thistle_High.p3d";
				affectedByWind = 0.7;
			};
			class Exile_Clutter_Branch01: Exile_Clutter_Abstract
			{
				affectedByWind = 0;
				swLighting = 0;
				model = "a3\plants_f\Clutter\c_bigFallenBranches_pine.p3d";
				scaleMax = 1;
				scaleMin = 0.8;
			};
			class Exile_Clutter_Branch02: Exile_Clutter_Abstract
			{
				affectedByWind = 0;
				swLighting = 0;
				model = "a3\plants_f\Clutter\c_bigFallenBranches_pine02.p3d";
				scaleMax = 1;
				scaleMin = 0.8;
			};
			class Exile_Clutter_Branch03: Exile_Clutter_Abstract
			{
				affectedByWind = 0;
				swLighting = 0;
				model = "a3\plants_f\Clutter\c_bigFallenBranches_pine02.p3d";
				scaleMax = 1;
				scaleMin = 0.8;
			};
			class Exile_Clutter_Branch04: Exile_Clutter_Abstract
			{
				affectedByWind = 0;
				swLighting = 1;
				model = "a3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
				scaleMax = 1;
				scaleMin = 0.8;
			};
			class Exile_Clutter_Grass01: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_Grass_TuftDry.p3d";
				scaleMax = 1.4;
				scaleMin = 1;
			};
			class Exile_Clutter_Grass02: Exile_Clutter_Abstract
			{
				model = "a3\plants_f\Clutter\c_StrGrassDry.p3d";
				scaleMax = 1.4;
				scaleMin = 1;
			};
			class drnecgrass
			{
				model = "nst\ns_plants\clutter\grass_drnec.p3d";
				relativeColor[] = {1,1,1,1};
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.7";
				scaleMax = "1.0";
			};
			class rakos_2
			{
				model = "nst\ns_plants\clutter\grass_rakos2.p3d";
				relativeColor[] = {1,1,1,1};
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.9 * 0.85";
				scaleMax = "1 * 0.85";
			};
			class forestclutter
			{
				model = "nst\ns_plants\clutter\grass_forest.p3d";
				relativeColor[] = {1,1,1,1};
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.7";
				scaleMax = "1.0";
			};
			class shlakClutter
			{
				model = "nst\ns_plants\clutter\clutter_grass_desert.p3d";
				relativeColor[] = {1,1,1,1};
				affectedByWind = 0.3;
				swLighting = 1;
				scaleMin = "0.9 * 0.90";
				scaleMax = "1 * 0.90";
			};
			class kytkyclutter
			{
				model = "nst\ns_plants\clutter\grass_kytky.p3d";
				relativeColor[] = {1,1,1,1};
				affectedByWind = 0.5;
				swLighting = 1;
				scaleMin = "0.9 * 0.90";
				scaleMax = "1 * 0.90";
			};
		};
		class Names
		{
			class OldHospital
			{
				name = "Old Hospital";
				position[] = {7376.9,7925.86};
				type = "NameVillage";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class Tara
			{
				name = "Tara";
				position[] = {7357.73,6986.28};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class OldSawmill
			{
				name = "Old Sawmill";
				position[] = {7052.72,5717.69};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraHarbor
			{
				name = "Tara Harbor";
				position[] = {7962.25,7537.0};
				type = "NameCity";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraPass
			{
			 	name = "Tara Strait";
				position[] = {6309.09,7926.94};
				type = "NameMarine";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class Nemsk
			{
				name = "Nemsk";
				position[] = {9110.72,10160.72};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class NemskFactory
			{
				name = "Nemsk Factory";
				position[] = {7765.43,8698.98};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class Jalovisko
			{
				name = "Jalovisko";
				position[] = {8422.33,10730.88};
				type = "NameCity";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class Vorkuta
			{
				name = "Vorkuta";
				position[] = {7120.02,11253.12};
				type = "NameCityCapital";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class VorkutaOut
			{
				name = "Vorkuta Outskirts";
				position[] = {7112.88,10712.47};
				type = "NameCity";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class OldYard
			{
				name = "Old Yard";
				position[] = {6306.13,10921.47};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Alakit
			{
				name = "Alakit";
				position[] = {5752.66,10837.94};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanDam
			{
				name = "Sebjan Dam";
				position[] = {5822.72,9806.5};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class SebjanAIR
			{
				name = "Sebjan Field Airport";
				position[] = {6298.97,9426.06};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanCHEM
			{
				name = "Sebjan Chemical Factory";
				position[] = {6535.38,9227.56};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Sebjan
			{
				name = "Sebjan";
				position[] = {5677.55,8746.13};
				type = "NameCity";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class SebjanMINE
			{
				name = "Sebjan Mine";
				position[] = {5129.63,8182.28};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class SebjanWAR
			{
				name = "Sebjan Warehouse";
				position[] = {4717.47,8867.66};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class SebjanMarsh
			{
				name = "Sebjan Marsh";
				position[] = {6191.91,9917.04};
				type = "VegetationFir";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class GrayForest
			{
				name = "Gray Forest";
				position[] = {5431.25,10871.31};
				type = "VegetationFir";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class VorMar
			{
				name = "Vorkuta Marsh";
				position[] = {5998.36,11388.73};
				type = "VegetationFir";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class NAB
			{
				name = "Northern Army Base";
				position[] = {4651.3,10754.64};
				type = "NameLocal";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class Lubjansk
			{
				name = "Lubjansk";
				position[] = {4566.48,11149.98};
				type = "NameVillage";
				radiusA = 168.91;
				radiusB = 112.72;
				angle = 0.0;
			};
			class TaraRAIL
			{
				name = "Tara Railway Station";
				position[] = {7680.19,7497.94};
				type = "NameVillage";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class TaraBridge
			{
				name = "Tara Bridge";
				position[] = {6441.34,5811.34};
				type = "ViewPoint";
				radiusA = 211.14;
				radiusB = 140.9;
				angle = 0.0;
			};
			class TaraMarsh
			{
				name = "Tara Marsh";
				position[] = {6213.08,5645.76};
				type = "NameVillage";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class NitijaTower
			{
				name = "Nitija Tower";
				position[] = {5625.78,5983.25};
				type = "RockArea";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class BrenskBridge
			{
				name = "Brensk Bridge";
				position[] = {5033.77,6069.3};
				type = "ViewPoint";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class BrenskRAIL
			{
				name = "Brensk Railway Station";
				position[] = {4933.25,6237.41};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class AII
			{
				name = "Object A2";
				position[] = {5103.51,6656.99};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class AI
			{
				name = "Object A1";
				position[] = {3985.51,8544.12};
				type = "NameVillage";
				radiusA = 108.1;
				radiusB = 72.14;
				angle = 0.0;
			};
			class Brensk
			{
				name = "Brensk";
				position[] = {4396.13,4727.53};
				type = "NameVillage";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class BTE
			{
				name = "Brensk Tunnel Entrance";
				position[] = {3751.71,6276.83};
				type = "NameLocal";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class NTE
			{
				name = "Norinsk Tunnel Entrance";
				position[] = {3626.63,7116.78};
				type = "NameLocal";
				radiusA = 44.28;
				radiusB = 29.55;
				angle = 0.0;
			};
			class SAB
			{
				name = "Southern Army Base";
				position[] = {3614.59,6682.03};
				type = "NameLocal";
				radiusA = 35.42;
				radiusB = 23.64;
				angle = 0.0;
			};
			class SEAB
			{
				name = "Seraja Army Base";
				position[] = {4209.94,6724.4};
				type = "NameLocal";
				radiusA = 44.28;
				radiusB = 29.55;
				angle = 0.0;
			};
			class Ledjanaja
			{
				name = "Ledjanaja";
				position[] = {2939.72,6435.97};
				type = "Hill";
				radiusA = 515.46;
				radiusB = 344.0;
				angle = 0.0;
			};
			class Norinsk
			{
				name = "Norinsk";
				position[] = {4065.09,7540.41};
				type = "NameCity";
				radiusA = 86.47;
				radiusB = 57.71;
				angle = 0.0;
			};
			class WP
			{
				name = "West Point";
				position[] = {2217.78,5745.97};
				type = "NameLocal";
				radiusA = 69.19;
				radiusB = 46.17;
				angle = 0.0;
			};
			class WACH
			{
				name = "Western Army Checkpoint";
				position[] = {4020.28,9181.18};
				type = "NameLocal";
				radiusA = 55.35;
				radiusB = 36.94;
				angle = 0.0;
			};
			class Nitija
			{
				name = "Nitija";
				position[] = {5331.44,7183.34};
				type = "Hill";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class OS
			{
				name = "Old Spruce";
				position[] = {3481.19,7150.28};
				type = "VegetationFir";
				radiusA = 25.6;
				radiusB = 17.09;
				angle = 0.0;
			};
			class BB
			{
				name = "Brensk Bay";
				position[] = {5200.67,5374.27};
				type = "NameMarine";
				radiusA = 465.73;
				radiusB = 310.8;
				angle = 0.0;
			};
			class SB
			{
				name = "Seraja Bay";
				position[] = {3407.38,5570.66};
				type = "NameMarine";
				radiusA = 727.69;
				radiusB = 485.63;
				angle = 0.0;
			};
			class LB
			{
				name = "Lubjansk Bay";
				position[] = {5066.58,10273.06};
				type = "NameMarine";
				radiusA = 298.06;
				radiusB = 198.91;
				angle = 0.0;
			};
			class NB
			{
				name = "Nemsk Bay";
				position[] = {8013.81,9685.13};
				type = "NameMarine";
				radiusA = 1137.01;
				radiusB = 758.79;
				angle = 0.0;
			};
			class NRP
			{
				name = "Norinsk Pass";
				position[] = {4585.78,7240.0};
				type = "NameLocal";
				radiusA = 122.09;
				radiusB = 81.47;
				angle = 0.0;
			};
			class NTPB
			{
				name = "Nitija Army Base";
				position[] = {6065.74,6722.6};
				type = "NameLocal";
				radiusA = 135.13;
				radiusB = 90.18;
				angle = 0.0;
			};
			class c130j
			{
				name = "C-130J Crash Site";
				position[] = {3191.67,7536.39};
				type = "NameLocal";
				radiusA = 55.31;
				radiusB = 36.94;
				angle = 0.0;
			};
		};
		class Armory
		{
			disabled = 1;
			positionAdmin[] = {1956.25,84.1508};
			positionsViewer[] = {{1346.67,1428.27},{1086.33,1548.77}};
			disableShips = 1;
			class Challenges
			{
				class FiringRange
				{
					positionsStart[] = {{976.631,1569.39}};
					directionsStart[] = {245};
				};
			};
		};
	};
};
class CfgWorldList
{
	class namalsk{};
};
class CfgSurfaces
{
	class Default;
	class nam_obyczem: Default
	{
		access = 2;
		character = "Exile_Namalsk_Surface_Dirt";
		dust = 0.4;
		files = "obyczem_*";
		impact = "hitGroundSoft";
		rough = 0.01;
		soundEnviron = "grass";
		soundHit = "soft_ground";
		grassCover = 0.3;
	};
	class nam_snow: Default
	{
		access = 2;
		character = "Empty";
		dust = 0;
		files = "snih_*";
		impact = "hitWater";
		rough = 0.01;
		soundEnviron = "ns_snow";
		soundHit = "soft_ground";
		grassCover = 0.1;
	};
	class nam_shlak: Default
	{
		access = 2;
		character = "Exile_Namalsk_Surface_Mud";
		dust = 0.8;
		files = "shlak_*";
		impact = "hitGroundHard";
		rough = 0.01;
		soundEnviron = "drygrass";
		soundHit = "hard_ground";
		grassCover = 0.1;
	};
	class nam_sutina2: Default
	{
		access = 2;
		character = "Exile_Namalsk_Surface_Shore";
		dust = 0.8;
		files = "sutina2_*";
		impact = "hitGroundSoft";
		rough = 0.2;
		soundEnviron = "dirt";
		soundHit = "hard_ground";
		grassCover = 0.02;
	};
	class nam_sutina3: Default
	{
		access = 2;
		character = "Exile_Namalsk_Surface_Scree";
		dust = 0.8;
		files = "sutina3_*";
		impact = "hitGroundSoft";
		rough = 0.1;
		soundEnviron = "drygrass";
		soundHit = "soft_ground";
		grassCover = 0.2;
	};
	class nam_beton: Default
	{
		access = 2;
		character = "Empty";
		dust = 0.05;
		files = "beton_*";
		impact = "hitConcrete";
		rough = 0.08;
		soundEnviron = "concrete_ext";
		soundHit = "concrete";
		grassCover = 0;
	};
};
class CfgSurfaceCharacters
{
	class Exile_Namalsk_Surface_Shore
	{
		probability[] = {0.002,0.002,0.002,0.008}; // {0.001,0.001,0.001,0.004};
		names[] = {"Exile_Clutter_Branch01","Exile_Clutter_Branch02","Exile_Clutter_Branch03","Exile_Clutter_Branch04"};
	};
	class Exile_Namalsk_Surface_Mud
	{
		// probability[] = {0.3,0.3,0.08,0.09,0.08,0.05,0.03}; // {0.2,0.2,0.05,0.06,0.05,0.03,0.02};
		// names[] = {"Exile_Clutter_Grass01","Exile_Clutter_Grass02","Exile_Clutter_Plant02","Exile_Clutter_Plant04","Exile_Clutter_Plant06","Exile_Clutter_Plant09","Exile_Clutter_Plant10"};
		probability[] = {0.93,0.04,0.03};
		names[] = {"shlakClutter","kytkyclutter","rakos_2"};
	};
	class Exile_Namalsk_Surface_Dirt
	{
		// probability[] = {0.3,0.3,0.05,0.14,0.08,0.03,0.11}; // {0.2,0.2,0.03,0.09,0.05,0.02,0.07};
		// names[] = {"Exile_Clutter_Grass01","Exile_Clutter_Grass02","Exile_Clutter_Plant01","Exile_Clutter_Plant03","Exile_Clutter_Plant05","Exile_Clutter_Plant07","Exile_Clutter_Plant08"};
		probability[] = {0.27,0.25,0.27,0.2,0.01};
		names[] = {"Exile_Clutter_Grass01","Exile_Clutter_Grass02","forestclutter","drnecgrass","rakos_2"};
	};
	class Exile_Namalsk_Surface_Scree
	{
		probability[] = {0.3,0.3,0.08,0.09,0.08,0.05,0.03}; // {0.2,0.2,0.05,0.06,0.05,0.03,0.02};
		names[] = {"Exile_Clutter_Grass01","Exile_Clutter_Grass02","Exile_Clutter_Plant02","Exile_Clutter_Plant04","Exile_Clutter_Plant06","Exile_Clutter_Plant09","Exile_Clutter_Plant10"};
	};
};
class CfgTownGeneratorNamalsk{};
class CfgLensFlare
{
	flarePos[] = {0.0,0.0,0.37,0.47,0.5,0.54,0.62,0.72,0.75,0.91,1.0,1.084,1.13,1.29,1.62,1.68};
	flareSizeCam[] = {0.2,0.4,0.025,0.05,0.042,0.043,0.04,0.75,0.6,0.7,0.15,0.85,0.44,0.45,0.55,0.1};
	flareBright[] = {1.0,0.3,0.3,0.3,0.3,0.4,0.4,0.05,0.03,0.12,0.05,0.08,0.05,0.2,0.2,1.0};
	flareSizeEye[] = {0.04};
	flareSizeEyeSun[] = {0.04};
};
class CfgVehicles
{
	class All{};
	class AllVehicles: All{};
	class Land: AllVehicles{};
	class Man: Land{};
	class CAManBase: Man
	{
		class SoundEnvironExt
		{
			ns_snow[] = {{"run",{"nst\namalsk_light_patch\sounds\snow\run1.wss",1,1,27}},{"run",{"nst\namalsk_light_patch\sounds\snow\run2.wss",1,1,27}},{"run",{"nst\namalsk_light_patch\sounds\snow\run3.wss",1,1,27}},{"run",{"nst\namalsk_light_patch\sounds\snow\run4.wss",1,1,27}},{"run",{"nst\namalsk_light_patch\sounds\snow\run5.wss",1,1,27}},{"walk",{"nst\namalsk_light_patch\sounds\snow\walk1.wss",1,1,27}},{"walk",{"nst\namalsk_light_patch\sounds\snow\walk2.wss",1,1,27}},{"walk",{"nst\namalsk_light_patch\sounds\snow\walk3.wss",1,1,27}},{"walk",{"nst\namalsk_light_patch\sounds\snow\walk4.wss",1,1,27}},{"walk",{"nst\namalsk_light_patch\sounds\snow\walk5.wss",1,1,27}},{"sprint",{"nst\namalsk_light_patch\sounds\snow\sprint1.wss",1,1,27}},{"sprint",{"nst\namalsk_light_patch\sounds\snow\sprint2.wss",1,1,27}},{"sprint",{"nst\namalsk_light_patch\sounds\snow\sprint3.wss",1,1,27}},{"sprint",{"nst\namalsk_light_patch\sounds\snow\sprint4.wss",1,1,27}},{"sprint",{"nst\namalsk_light_patch\sounds\snow\sprint5.wss",1,1,27}},{"tactical",{"nst\namalsk_light_patch\sounds\snow\run1.wss",1,1,27}},{"tactical",{"nst\namalsk_light_patch\sounds\snow\run2.wss",1,1,27}},{"tactical",{"nst\namalsk_light_patch\sounds\snow\run3.wss",1,1,27}},{"tactical",{"nst\namalsk_light_patch\sounds\snow\run4.wss",1,1,27}},{"tactical",{"nst\namalsk_light_patch\sounds\snow\run5.wss",1,1,27}},{"crawl",{"soundset","footsteps_dirt_crawl_SoundSet"}},{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.251189,1,20}},{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.251189,1,20}},{"adjust_stand_side",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.251189,1,20}},{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel1",0.251189,1,20}},{"adjust_stand_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_kneel2",0.251189,1,20}},{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand1",0.251189,1,20}},{"adjust_kneel_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_stand2",0.251189,1,20}},{"adjust_stand_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_prone",0.251189,1,20}},{"adjust_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_stand",0.251189,1,20}},{"adjust_prone_up",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up",0.251189,1,20}},{"adjust_prone_up_back",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_up_back",0.251189,1,20}},{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side1",0.251189,1,20}},{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side2",0.251189,1,20}},{"adjust_prone_down",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_side3",0.251189,1,20}},{"adjust_prone_left",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_left",0.251189,1,20}},{"adjust_prone_right",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_right",0.251189,1,20}},{"adjust_kneel_to_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_kneel_to_prone",0.251189,1,20}},{"adjust_prone_to_kneel",{"\A3\sounds_f\characters\stances\concrete_adjust_prone_to_kneel",0.251189,1,20}},{"adjust_stand_to_left_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_left_prone",0.251189,1,20}},{"adjust_stand_to_right_prone",{"\A3\sounds_f\characters\stances\concrete_adjust_stand_to_right_prone",0.251189,1,20}},{"adjust_left_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_left_prone_to_stand",0.251189,1,20}},{"adjust_right_prone_to_stand",{"\A3\sounds_f\characters\stances\concrete_adjust_right_prone_to_stand",0.251189,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_1",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_2",0.891251,1,20}},{"roll",{"A3\Sounds_F\characters\movements\roll\dirt_roll_3",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,1,20}},{"roll_unarmed",{"A3\Sounds_F\characters\movements\roll\unarmed_dirt_roll_1",0.891251,1,20}},{"laydown",{"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_1",0.501187,1,20}},{"laydown",{"\A3\Sounds_F\characters\movements\laydown\dirt_laydown_2",0.501187,1,20}},{"bodyfall",{"A3\sounds_F\dummysound",0.501187,1,20}},{"bodyfall",{"A3\sounds_F\dummysound",0.501187,1,20}},{"bodyfall",{"A3\sounds_F\dummysound",0.501187,1,20}},{"swim",{"soundset","movement_swim_SoundSet"}},{"Acts_carFixingWheel",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_carFixingWheel",0.562341,1,20}},{"Acts_PercMwlkSlowWrflDf",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf",0.562341,1,20}},{"Acts_PercMwlkSlowWrflDf2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PercMwlkSlowWrflDf2",0.562341,1,20}},{"Acts_SittingJumpingSaluting_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_out",0.562341,1,20}},{"Acts_WalkingChecking",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WalkingChecking",0.562341,1,20}},{"Acts_CrouchingFiringLeftRifle02",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle02",0.562341,1,20}},{"Acts_CrouchingFiringLeftRifle03",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle03",0.562341,1,20}},{"Acts_CrouchingFiringLeftRifle04",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_CrouchingFiringLeftRifle04",0.562341,1,20}},{"Acts_HUBABriefing",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_HUBABriefing",0.562341,1,20}},{"Acts_PointingLeftUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_PointingLeftUnarmed",0.562341,1,20}},{"Acts_SittingJumpingSaluting_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_SittingJumpingSaluting_in",0.562341,1,20}},{"Acts_StandingSpeakingUnarmed",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_StandingSpeakingUnarmed",0.562341,1,20}},{"Acts_TreatingWounded_in",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_in",0.562341,1,20}},{"Acts_TreatingWounded_out",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_TreatingWounded_out",0.562341,1,20}},{"Acts_UnconsciousStandUp_part1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_UnconsciousStandUp_part1",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_1b",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_1b",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_2",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_3",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_4",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_5",0.562341,1,20}},{"Acts_WelcomeOnHUB01_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_AIWalk_6",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_1",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_2",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_3",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_4",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_5",0.562341,1,20}},{"Acts_WelcomeOnHUB01_PlayerWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB01_PlayerWalk_6",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_2",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_3",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk_4",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_4",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk_5",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_5",0.562341,1,20}},{"Acts_WelcomeOnHUB02_AIWalk_6",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_AIWalk_6",0.562341,1,20}},{"Acts_WelcomeOnHUB02_PlayerWalk_1",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_1",0.562341,1,20}},{"Acts_WelcomeOnHUB02_PlayerWalk_2",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_2",0.562341,1,20}},{"Acts_WelcomeOnHUB02_PlayerWalk_3",{"A3\Sounds_F\characters\cutscenes\dirt_Acts_WelcomeOnHUB02_PlayerWalk_3",0.562341,1,20}},{"AmovPercMstpSnonWnonDnon_exercisePushup",{"\A3\Sounds_F\characters\cutscenes\dirt_AmovPercMstpSnonWnonDnon_exercisePushup",0.562341,1,20}}};
		};
	};
	class House_F;
	class land_maly: House_F
	{
		model = "nst\namalsk_light_patch\Data\zebriky\maly.p3d";
	};
	class land_megaa: House_F
	{
		model = "nst\namalsk_light_patch\Data\zebriky\megaa.p3d";
	};
	class ns_kompiky: House_F
	{
		delete eventHandlers;
	};
};
