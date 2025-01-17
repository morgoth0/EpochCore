/*
	Author: Aaron Clark - EpochMod.com

    Contributors:

	Description:
	Main CfgWeapons config file

    Licence:
    Arma Public License Share Alike (APL-SA) - https://www.bistudio.com/community/licenses/arma-public-license-share-alike

    Github:
    https://github.com/EpochModTeam/Epoch/tree/release/Sources/epoch_config/Configs/CfgWeapons.hpp
*/

/*[[[cog from arma_config_tools import *; json_to_arma()]]]*/
class CfgWeapons
{
    class InventoryItem_Base_F;
    class ItemCore;
    class UniformItem : InventoryItem_Base_F
    {
        scope = 0;
        type = 801;
    };
    class Uniform_Base : ItemCore
    {
        scope = 0;
        allowedSlots[] = {901};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "B_Soldier_F";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class GrenadeLauncher;
    class Throw : GrenadeLauncher
    {
        muzzles[] += {"SmokeShellToxicMuzzle"};
        class ThrowMuzzle;
        class SmokeShellToxicMuzzle : ThrowMuzzle
        {
            displayName = "$STR_EPOCH_SmokeGrenadeToxic";
            magazines[] = {"SmokeShellToxic"};
        };
    };
    class U_EPOCH_RyanZombie_1 : Uniform_Base
    {
        scope = 1;
        displayName = "$STR_EPOCH_Zombie1";
        picture = "\A3\characters_f\data\ui\icon_U_C_Poloshirt_blue_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_poloshirt_1_co.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EPOCH_RyanZombie_1";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_EPOCH_RyanZombie_2 : U_EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie2";
        picture = "\A3\characters_f\data\ui\icon_U_C_Poor_1_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Civil\Data\c_cloth1_co.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EPOCH_RyanZombie_2";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_EPOCH_RyanZombie_3 : U_EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie3";
        picture = "\A3\characters_f\data\ui\icon_U_C_WorkerCoveralls_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_dirty_co.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EPOCH_RyanZombie_3";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_EPOCH_RyanZombie_4 : U_EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie4";
        picture = "\A3\characters_F_EPC\data\ui\icon_U_Journalist_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_original_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f_epc\civil\data\journalist_co.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EPOCH_RyanZombie_3";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_EPOCH_RyanZombie_5 : U_EPOCH_RyanZombie_1
    {
        displayName = "$STR_EPOCH_Zombie5";
        picture = "\A3\characters_F_EPC\data\ui\icon_U_Scientist_ca.paa";
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\coveralls_scientist_co.paa"};
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "EPOCH_RyanZombie_5";
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class U_BasicBodyFemale : ItemCore
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_KeeshaUnderwear";
        picture = "\x\addons\a3_epoch_assets\textures\keesha\icon_femaleW_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "FemaleUnderwear_F";
            containerClass = "Supply0";
            mass = 5;
        };
    };
    class U_Test_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_Keesha";
        picture = "\x\addons\a3_epoch_assets\textures\keesha\icon_femaleW_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_F";
            containerClass = "Supply0";
            mass = 30;
        };
    };
    class U_Wetsuit_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleWetsuit";
        picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuit_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_wetsuit_F";
            containerClass = "Supply80";
            uniformType = "Neopren";
            mass = 60;
        };
    };
    class U_Wetsuit_White : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleWetsuitwhite";
        picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitWhite_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_wetsuitW_F";
            containerClass = "Supply80";
            uniformType = "Neopren";
            mass = 60;
        };
    };
    class U_Wetsuit_Blue : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleWetsuitblue";
        picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitBlue_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_wetsuitB_F";
            containerClass = "Supply80";
            uniformType = "Neopren";
            mass = 60;
        };
    };
    class U_Wetsuit_Purp : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleWetsuitpurple";
        picture = "\x\addons\a3_epoch_assets\textures\wetsuit\icon_wetsuitPurp_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_wetsuitP_F";
            containerClass = "Supply80";
            uniformType = "Neopren";
            mass = 60;
        };
    };
    class U_Wetsuit_Camo : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleWetsuitcamo";
        picture = "\x\addons\a3_epoch_assets\textures\wetsuit\gear_femaleWetsuit_camo_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_wetsuitC_F";
            containerClass = "Supply80";
            uniformType = "Neopren";
            mass = 60;
        };
    };
    class U_Camo_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamo";
        picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoDark_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_Camo_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_ghillie1_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleGhillietan";
        picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_Ghillie1_F";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class U_ghillie2_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleGhillielightgreen";
        picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie2_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_Ghillie2_F";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class U_ghillie3_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_FemaleGhilliegreen";
        picture = "\x\addons\a3_epoch_assets\textures\ghillie\gear_femaleGhillie3_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_Ghillie3_F";
            containerClass = "Supply80";
            mass = 60;
        };
    };
    class U_CamoBlue_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoBlue";
        picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBlue_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoBlue_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoBrn_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoBrown";
        picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoBrown_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoBrn_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoRed_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoRed";
        picture = "\x\addons\a3_epoch_assets\textures\camo\icon_camoRed_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoRed_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoAloha_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoAloha";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_aloha_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoAloha_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoBiker_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoBiker";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_biker_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoBiker_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoBubblegum_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoBubblegum";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_bubblegum_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoBubblegum_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoLumberjack_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoLumberjack";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_lumberjack_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoLumberjack_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoOutback_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoOutback";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_outback_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoOutback_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoPink_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoPink";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_pink_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoPink_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_CamoPinkPolka_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_KeeshaCamoPinkPolka";
        picture = "\x\addons\a3_epoch_community\icons\keesha\camo\camo_pinkpolka_icon.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Female_CamoPinkPolka_F";
            containerClass = "Supply30";
            mass = 30;
        };
    };
    class U_Test1_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_Dan";
        picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Male_F";
            containerClass = "Supply0";
            mass = 30;
        };
    };
    class U_Sapper_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_Sapper";
        picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Sapper_base_F";
            containerClass = "Supply0";
            mass = 5;
        };
    };
    class U_Char_uniform : Itemcore
    {
        author = "Sequisha";
        scope = 2;
        allowedSlots[] = {901};
        displayName = "$STR_EPOCH_Unknown";
        picture = "\A3\characters_f\data\ui\icon_U_BasicBody_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : UniformItem
        {
            uniformModel = "-";
            uniformClass = "Epoch_Char_base_F";
            containerClass = "Supply0";
            mass = 5;
        };
    };
    class VestItem : InventoryItem_Base_F
    {
        scope = 0;
        author = "$STR_A3_Bohemia_Interactive";
        type = 701;
        uniformType = "Default";
        hiddenSelections[] = {};
        class HitpointsProtectionInfo
        {
            class Body
            {
                hitpointName = "HitBody";
                armor = 0;
                passThrough = 1;
            };
        };
        overlaySelectionsInfo[] = {"Ghillie_hide"};
        showHolsteredPistol = 0;
    };
    class Vest_Camo_Base : ItemCore
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        weaponPoolAvailable = 1;
        allowedSlots[] = {901};
        picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"camo"};
        descriptionShort = "$STR_A3_SP_NOARMOR";
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
            hiddenSelections[] = {"camo"};
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class Vest_NoCamo_Base : ItemCore
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 0;
        weaponPoolAvailable = 1;
        allowedSlots[] = {901};
        picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {};
        descriptionShort = "$STR_A3_SP_NOARMOR";
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
            hiddenSelections[] = {};
            containerClass = "Supply0";
            mass = 0;
        };
    };
    class V_F0_EPOCH : Vest_Camo_Base
    {
        maleVest = "V_16_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestBlack";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\tacticalvest_black_co.paa"};
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\female_tactVest.p3d";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_F1_EPOCH : V_F0_EPOCH
    {
        maleVest = "V_13_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestKhaki";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\tacticalvest_khaki_co.paa"};
    };
    class V_F2_EPOCH : V_F0_EPOCH
    {
        maleVest = "V_15_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestOlive";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
    };
    class V_F3_EPOCH : V_F0_EPOCH
    {
        maleVest = "V_14_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestBrown";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_brown_co.paa"};
    };
    class V_F4_EPOCH : Vest_Camo_Base
    {
        maleVest = "V_25_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestCamo";
        picture = "\A3\Characters_F\data\ui\icon_V_TacVest_camo_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_camo_co.paa"};
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_F5_EPOCH : Vest_Camo_Base
    {
        maleVest = "V_26_EPOCH";
        scope = 2;
        displayName = "$STR_EPOCH_FemaleVestPolice";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_police_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_police_co.paa"};
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_II";
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply100";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class V_1_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_V_Rangemaster_belt0";
        picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_belt";
            containerClass = "Supply40";
            mass = 5;
            armor = 0;
            passThrough = 1;
        };
    };
    class V_2_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_A3_V_BandollierB_khk0";
        picture = "\A3\characters_f\Data\UI\icon_V_BandollierB_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier";
            containerClass = "Supply80";
            mass = 10;
            armor = 0;
            passThrough = 1;
        };
    };
    class V_3_EPOCH : V_2_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_BandollierB_cbr0";
        picture = "\A3\Characters_F\data\ui\icon_V_bandollier_cbr_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_cbr_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
    class V_4_EPOCH : V_2_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_BandollierB_rgr0";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_rgr_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
    class V_5_EPOCH : V_2_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_BandollierB_blk0";
        picture = "\A3\characters_f\Data\UI\icon_V_bandollier_blk_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_bandolier.p3d";
        };
    };
    class V_6_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrier1_rgr0";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_III";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02";
            containerClass = "Supply140";
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class V_7_EPOCH : V_6_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrier2_rgr0";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_IV";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01";
            containerClass = "Supply140";
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    class V_8_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 1;
        displayName = "$STR_A3_V_PlateCarrier2_rgr0";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_2_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_IV";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
            containerClass = "Supply140";
            mass = 100;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    class V_9_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrierGL_rgr0";
        picture = "\A3\Characters_F_Mark\Data\UI\icon_carrier_gl_rig_grn.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_grn_co.paa"};
        descriptionShort = "$STR_A3_SP_ER";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_gl_rig.p3d";
            containerClass = "Supply140";
            mass = 100;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 78;
                    passThrough = 0.6;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 78;
                    passThrough = 0.6;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
            };
        };
    };
    class V_10_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_Chestrig_khk0";
        picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_khk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_khk_co.paa","\A3\Characters_F\BLUFOR\Data\vests_khk_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
            containerClass = "Supply140";
            mass = 20;
            hiddenSelections[] = {"camo1","camo2"};
        };
    };
    class V_11_EPOCH : V_10_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_Chestrig_rgr0";
        picture = "\A3\characters_f\Data\UI\icon_V_Chestrig_rgr_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_rgr_co.paa","\A3\Characters_f\BLUFOR\data\armor1_co.paa"};
    };
    class V_12_EPOCH : V_10_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_ChestrigF_blk0";
        picture = "\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa","\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
    };
    class V_13_EPOCH : Vest_Camo_Base
    {
        femaleVest = "V_F1_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_TacVest_khk0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_khk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_khaki_co.paa"};
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_14_EPOCH : V_13_EPOCH
    {
        femaleVest = "V_F3_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_TacVest_brn0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_brn_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_brown_co.paa"};
    };
    class V_15_EPOCH : V_13_EPOCH
    {
        femaleVest = "V_F2_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_V_TacVest_oli0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_olive_co.paa"};
    };
    class V_16_EPOCH : V_13_EPOCH
    {
        femaleVest = "V_F0_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_TacVest_blk0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa"};
    };
    class V_17_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_HarnessO_brn0";
        picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
        };
    };
    class V_18_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_HarnessOGL_brn0";
        picture = "\A3\characters_f\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
            containerClass = "Supply120";
            mass = 15;
        };
    };
    class V_19_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_cfgvests_rebreather_nato0";
        picture = "\A3\characters_f\Data\UI\icon_V_RebreatherB_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenUnderwaterSelections[] = {"hide"};
        shownUnderwaterSelections[] = {"unhide","unhide2"};
        hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
        hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa"};
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_rebreather";
            containerClass = "Supply80";
            mass = 80;
            vestType = "Rebreather";
            hiddenUnderwaterSelections[] = {"hide"};
            shownUnderwaterSelections[] = {"unhide","unhide2"};
            hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\common\data\diver_equip_nato_co.paa","\A3\characters_f\data\visors_ca.paa"};
            class HitpointsProtectionInfo
            {
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_20_EPOCH : V_19_EPOCH
    {
        scope = 2;
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_cfgvests_rebreather_csat0";
        picture = "\A3\characters_f\Data\UI\icon_V_RebreatherIR_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa"};
        hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\common\data\diver_equip_iran_co.paa","\A3\characters_f\data\visors_ca.paa"};
    };
    class V_21_EPOCH : V_2_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\Characters_F_Beta\Data\ui\icon_V_Bandolier_oli_ca.paa";
        displayName = "$STR_A3_V_BANDOLLIERB_OLI0";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\vests_oli_co.paa"};
        class ItemInfo : ItemInfo
        {
            hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\vests_oli_co.paa"};
        };
    };
    class V_22_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        picture = "\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
        displayName = "$STR_A3_V_PlateCarrier1_blk0";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"};
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_III";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            containerClass = "Supply140";
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Diaphragm
                {
                    HitpointName = "HitDiaphragm";
                    armor = 16;
                    PassThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class V_23_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrierSpec_rgr0";
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        DLC = "Mark";
        descriptionShort = "$STR_A3_SP_AL_V";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Mark\BLUFOR\Data\carrier_gl_rig_grn_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_carrier_spec_rig.p3d";
            containerClass = "Supply100";
            mass = 120;
            hiddenSelections[] = {"camo"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 24;
                    passThrough = 0.1;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 24;
                    passThrough = 0.1;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 24;
                    passThrough = 0.1;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.1;
                };
            };
        };
    };
    class V_24_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_ChestrigF_oli";
        picture = "\A3\Characters_F\data\ui\icon_V_FChestrig_oli_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\equip_chestrig_oli_co.paa","\A3\Characters_F_Beta\INDEP\Data\armor1_oli_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\Common\equip_chestrig.p3d";
            containerClass = "Supply140";
            mass = 20;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class V_25_EPOCH : Vest_Camo_Base
    {
        femaleVest = "V_F4_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_TacVest_camo0";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        picture = "\A3\Characters_F\data\ui\icon_V_TacVest_camo_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_26_EPOCH : Vest_Camo_Base
    {
        femaleVest = "V_F5_EPOCH";
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_TacVest_blk_POLICE0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_blk_police_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F\Common\Data\tacticalvest_police_co.paa"};
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_II";
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            containerClass = "Supply100";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 12;
                    passThrough = 0.4;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.4;
                };
            };
        };
    };
    class V_27_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_TacVestIR_blk0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F_Beta\INDEP\equip_ir_vest01";
            containerClass = "Supply140";
            mass = 50;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_28_EPOCH : Vest_Camo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 1;
        scopeCurator = 1;
        displayName = "$STR_A3_V_TacVestCamo_khk0";
        picture = "\A3\characters_f\Data\UI\icon_V_TacVest_Camo_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_I";
        class ItemInfo : VestItem
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
            hiddenSelections[] = {"camo"};
            hiddenSelectionsTextures[] = {"\A3\Characters_F_Bootcamp\Common\Data\tacticalvest_camo_co.paa"};
            containerClass = "Supply100";
            mass = 40;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.5;
                };
            };
        };
    };
    class V_29_EPOCH : V_17_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
        displayName = "$STR_A3_V_HarnessO_gry0";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"Camo1","Camo2"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F\OPFOR\Data\clothing_oucamo_co.paa","\A3\Characters_F\OPFOR\Data\tech_oucamo_co"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class V_30_EPOCH : V_29_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOUGL_gry_CA.paa";
        displayName = "$STR_A3_V_HarnessOGL_gry0";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
            containerClass = "Supply120";
            mass = 15;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class V_31_EPOCH : V_17_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_HarnessOSpec_brn0";
        picture = "\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
        };
    };
    class V_32_EPOCH : V_29_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\characters_f_beta\Data\UI\icon_V_HarnessOU_gry_CA.paa";
        displayName = "$STR_A3_V_HarnessOSpec_gry0";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
            containerClass = "Supply160";
            mass = 30;
            hiddenSelections[] = {"Camo1","Camo2"};
        };
    };
    class V_33_EPOCH : Vest_NoCamo_Base
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrierIA1_dgtl0";
        picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_III";
        class ItemInfo : VestItem
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
            containerClass = "Supply120";
            mass = 60;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class V_34_EPOCH : V_33_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_V_PlateCarrierIA2_dgtl0";
        picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_02_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        descriptionShort = "$STR_A3_SP_AL_III";
        class ItemInfo : VestItem
        {
            uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest02";
            containerClass = "Supply120";
            mass = 80;
            class HitpointsProtectionInfo
            {
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.3;
                };
            };
        };
    };
    class V_35_EPOCH : V_34_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        displayName = "$STR_A3_V_PlateCarrierIAGL_dgtl0";
        picture = "\A3\Characters_F_Mark\Data\UI\icon_ga_carrier_gl_rig_digi.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        DLC = "Mark";
        hiddenSelections[] = {"camo1","camo2"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_Beta\INDEP\Data\equip_ia_vest01_co.paa","\A3\Characters_F_Mark\INDEP\Data\ga_carrier_gl_rig_digi_co.paa"};
        descriptionShort = "$STR_A3_SP_ER";
        class ItemInfo : VestItem
        {
            uniformModel = "\A3\Characters_F_beta\INDEP\equip_ia_ga_carrier_gl_rig.p3d";
            containerClass = "Supply120";
            mass = 80;
            hiddenSelections[] = {"camo1","camo2"};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName = "HitNeck";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 8;
                    passThrough = 0.5;
                };
                class Chest
                {
                    hitpointName = "HitChest";
                    armor = 78;
                    passThrough = 0.6;
                };
                class Diaphragm
                {
                    hitpointName = "HitDiaphragm";
                    armor = 78;
                    passThrough = 0.6;
                };
                class Abdomen
                {
                    hitpointName = "HitAbdomen";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Pelvis
                {
                    hitpointName = "HitPelvis";
                    armor = 16;
                    passThrough = 0.3;
                };
                class Body
                {
                    hitpointName = "HitBody";
                    passThrough = 0.6;
                };
            };
        };
    };
    class V_36_EPOCH : V_19_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        displayName = "$STR_A3_cfgvests_rebreather_aaf0";
        picture = "\A3\characters_f\Data\UI\icon_V_RebreatherRU_CA.paa";
        hiddenSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa"};
        hiddenUnderwaterSelectionsTextures[] = {"\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\common\data\diver_equip_rus_co.paa","\A3\characters_f\data\visors_ca.paa"};
    };
    class V_37_EPOCH : V_6_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        scope = 2;
        picture = "\A3\characters_f\Data\UI\icon_V_plate_carrier_1_CA.paa";
        displayName = "$STR_A3_V_PlateCarrier1_rgr_V_PlateCarrier_Kerry0";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F_EPA\BLUFOR\equip_b_vest_kerry.p3d";
        };
    };
    class V_38_EPOCH : V_6_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        displayName = "$STR_A3_V_PlateCarrierL_CTRG0";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest02.p3d";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_39_EPOCH : V_7_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\Characters_F_EPA\Data\ui\Icon_V_plate_carrier_snake_ca.paa";
        displayName = "$STR_A3_V_PlateCarrierH_CTRG0";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_EPA\BLUFOR\Data\vests_snake_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\A3\Characters_F\BLUFOR\equip_b_vest01.p3d";
            hiddenSelections[] = {"camo"};
        };
    };
    class V_40_EPOCH : V_25_EPOCH
    {
        author = "$STR_A3_Bohemia_Interactive";
        picture = "\A3\Characters_F_EPB\data\ui\icon_V_I_G_resistanceLeader_F_ca.paa";
        displayName = "$STR_A3_V_I_G_resistanceLeader_F0";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\A3\Characters_F_EPB\Common\Data\tacticalvest_camo_dark_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "A3\Characters_F\Common\equip_tacticalvest";
        };
    };
    class V_F41_EPOCH : Vest_Camo_Base
    {
        maleVest = "V_41_EPOCH";
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_SidePackfemale";
        picture = "\x\addons\a3_epoch_assets\textures\side pack\equip_sidepack_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\side pack\sidepack_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\sidepack_female.p3d";
            containerClass = "Supply150";
            mass = 20;
            armor = 0;
            passThrough = 1;
        };
    };
    class V_41_EPOCH : Vest_Camo_Base
    {
        femaleVest = "V_F41_EPOCH";
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_SidePackmale";
        picture = "\x\addons\a3_epoch_assets\textures\side pack\equip_sidepack_ca.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\side pack\sidepack_co.paa"};
        class ItemInfo : ItemInfo
        {
            uniformModel = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\sidepack_male.p3d";
            containerClass = "Supply150";
            mass = 20;
            armor = 0;
            passThrough = 1;
        };
    };
    class HeadgearItem : InventoryItem_Base_F
    {
        scope = 0;
        allowedSlots[] = {901,605};
        type = 605;
        hiddenSelections[] = {};
    };
    class clown_mask_epoch : ItemCore
    {
        author = "AWOL";
        scope = 2;
        weaponPoolAvailable = 1;
        displayName = "$STR_EPOCH_ClownMask";
        picture = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\clown\gear_clownmask_ca.paa";
        model = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\clown.p3d";
        class ItemInfo : HeadgearItem
        {
            mass = 40;
            uniformModel = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\clown.p3d";
            modelSides[] = {3,2,1};
            passThrough = 0.5;
        };
    };
    class wolf_mask_epoch : ItemCore
    {
        scope = 2;
        author = "Kiory";
        weaponPoolAvailable = 1;
        displayName = "$STR_EPOCH_ScaryWolfMask";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_wolfmask_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\wolf_mask.p3d";
        class ItemInfo : HeadgearItem
        {
            mass = 40;
            uniformModel = "\x\addons\a3_epoch_assets_2\wolf_mask.p3d";
            modelSides[] = {3,2,1};
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class pkin_mask_epoch : ItemCore
    {
        scope = 2;
        author = "Kiory";
        weaponPoolAvailable = 1;
        displayName = "$STR_EPOCH_ScaryPumpkinMask";
        picture = "\x\addons\a3_epoch_assets_2\gear\gear_pkinmask_x_ca.paa";
        model = "\x\addons\a3_epoch_assets_2\pkin_mask.p3d";
        class ItemInfo : HeadgearItem
        {
            mass = 40;
            uniformModel = "\x\addons\a3_epoch_assets_2\pkin_mask.p3d";
            modelSides[] = {3,2,1};
            passThrough = 0.5;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_F0_EPOCH : ItemCore
    {
        scope = 2;
        displayName = "$STR_EPOCH_RedBeret";
        author = "Sequisha";
        picture = "\A3\characters_f\Data\UI\icon_H_Cap_blk_CA.paa";
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretRcamo_Co.paa"};
        class ItemInfo : HeadgearItem
        {
            mass = 10;
            uniformModel = "\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\beret.p3d";
            allowedSlots[] = {801,901,701,605};
            modelSides[] = {6};
            armor = 0;
            passThrough = 1;
            hiddenSelections[] = {"camo"};
        };
    };
    class H_F1_EPOCH : H_F0_EPOCH
    {
        scope = 2;
        displayName = "$STR_EPOCH_GreenBeret";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretGcamo_Co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretGcamo.rvmat"};
    };
    class H_F2_EPOCH : H_F0_EPOCH
    {
        scope = 2;
        displayName = "$STR_EPOCH_PinkBeret";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretPcamo_Co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretPcamo.rvmat"};
    };
    class H_F3_EPOCH : H_F0_EPOCH
    {
        scope = 2;
        displayName = "$STR_EPOCH_BlueBeret";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretBcamo_Co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretBcamo.rvmat"};
    };
    class H_F4_EPOCH : H_F0_EPOCH
    {
        scope = 2;
        displayName = "$STR_EPOCH_OrangeBeret";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretOcamo_Co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretOcamo.rvmat"};
    };
    class H_F5_EPOCH : H_F0_EPOCH
    {
        scope = 2;
        displayName = "$STR_EPOCH_YellowBeret";
        hiddenSelectionsTextures[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretYcamo_Co.paa"};
        hiddenSelectionsMaterials[] = {"\x\addons\a3_epoch_assets\textures\Beret\beretYcamo.rvmat"};
    };
    class H_HelmetB;
    class H_1_EPOCH : H_HelmetB
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_camo;
    class H_2_EPOCH : H_HelmetB_camo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_paint;
    class H_3_EPOCH : H_HelmetB_paint
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light;
    class H_4_EPOCH : H_HelmetB_light
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Helmet_Kerry;
    class H_5_EPOCH : H_Helmet_Kerry
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_grass;
    class H_6_EPOCH : H_HelmetB_grass
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_snakeskin;
    class H_7_EPOCH : H_HelmetB_snakeskin
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_desert;
    class H_8_EPOCH : H_HelmetB_desert
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_black;
    class H_9_EPOCH : H_HelmetB_black
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_sand;
    class H_10_EPOCH : H_HelmetB_sand
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_11_EPOCH : H_F0_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_plain_mcamo;
    class H_12_EPOCH : H_HelmetB_plain_mcamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_plain_blk;
    class H_13_EPOCH : H_HelmetB_plain_blk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light_grass;
    class H_14_EPOCH : H_HelmetB_light_grass
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light_snakeskin;
    class H_15_EPOCH : H_HelmetB_light_snakeskin
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light_desert;
    class H_16_EPOCH : H_HelmetB_light_desert
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light_black;
    class H_17_EPOCH : H_HelmetB_light_black
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetB_light_sand;
    class H_18_EPOCH : H_HelmetB_light_sand
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetSpecB;
    class H_19_EPOCH : H_HelmetSpecB
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetSpecB_paint1;
    class H_20_EPOCH : H_HelmetSpecB_paint1
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetSpecB_paint2;
    class H_21_EPOCH : H_HelmetSpecB_paint2
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetSpecB_blk;
    class H_22_EPOCH : H_HelmetSpecB_blk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetIA;
    class H_23_EPOCH : H_HelmetIA
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetIA_net;
    class H_24_EPOCH : H_HelmetIA_net
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetIA_camo;
    class H_25_EPOCH : H_HelmetIA_camo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetCrew_B;
    class H_26_EPOCH : H_HelmetCrew_B
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_HelmetCrew_O;
    class H_27_EPOCH : H_HelmetCrew_O
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_28_EPOCH : H_F1_EPOCH
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetFighter_B;
    class H_29_EPOCH : H_PilotHelmetFighter_B
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetFighter_O;
    class H_30_EPOCH : H_PilotHelmetFighter_O
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetFighter_I;
    class H_31_EPOCH : H_PilotHelmetFighter_I
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetHeli_B;
    class H_32_EPOCH : H_PilotHelmetHeli_B
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetHeli_I;
    class H_33_EPOCH : H_PilotHelmetHeli_I
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Beret_red;
    class H_34_EPOCH : H_Beret_red
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_PilotHelmetHeli_O;
    class H_35_EPOCH : H_PilotHelmetHeli_O
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_CrewHelmetHeli_B;
    class H_36_EPOCH : H_CrewHelmetHeli_B
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_CrewHelmetHeli_O;
    class H_37_EPOCH : H_CrewHelmetHeli_O
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_CrewHelmetHeli_I;
    class H_38_EPOCH : H_CrewHelmetHeli_I
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_khk;
    class H_39_EPOCH : H_Booniehat_khk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_khk_hs;
    class H_40_EPOCH : H_Booniehat_khk_hs
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_indp;
    class H_41_EPOCH : H_Booniehat_indp
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_grn;
    class H_42_EPOCH : H_Booniehat_grn
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_tan;
    class H_43_EPOCH : H_Booniehat_tan
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_dirty;
    class H_44_EPOCH : H_Booniehat_dirty
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_dgtl;
    class H_45_EPOCH : H_Booniehat_dgtl
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Booniehat_mcamo;
    class H_46_EPOCH : H_Booniehat_mcamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_red;
    class H_47_EPOCH : H_Cap_red
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_blu;
    class H_48_EPOCH : H_Cap_blu
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_oli;
    class H_49_EPOCH : H_Cap_oli
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_oli_hs;
    class H_50_EPOCH : H_Cap_oli_hs
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_tan;
    class H_51_EPOCH : H_Cap_tan
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_blk;
    class H_52_EPOCH : H_Cap_blk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_blk_CMMG;
    class H_53_EPOCH : H_Cap_blk_CMMG
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_brn_SPECOPS;
    class H_54_EPOCH : H_Cap_brn_SPECOPS
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_tan_specops_US;
    class H_55_EPOCH : H_Cap_tan_specops_US
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_khaki_specops_UK;
    class H_56_EPOCH : H_Cap_khaki_specops_UK
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_grn;
    class H_57_EPOCH : H_Cap_grn
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_grn_BI;
    class H_58_EPOCH : H_Cap_grn_BI
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_blk_Raven;
    class H_59_EPOCH : H_Cap_blk_Raven
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_blk_ION;
    class H_60_EPOCH : H_Cap_blk_ION
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_headphones;
    class H_61_EPOCH : H_Cap_headphones
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_surfer;
    class H_62_EPOCH : H_Bandanna_surfer
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_khk;
    class H_63_EPOCH : H_Bandanna_khk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_khk_hs;
    class H_64_EPOCH : H_Bandanna_khk_hs
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_cbr;
    class H_65_EPOCH : H_Bandanna_cbr
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_sgg;
    class H_66_EPOCH : H_Bandanna_sgg
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_gry;
    class H_67_EPOCH : H_Bandanna_gry
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_camo;
    class H_68_EPOCH : H_Bandanna_camo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Bandanna_mcamo;
    class H_69_EPOCH : H_Bandanna_mcamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Shemag_olive;
    class H_70_EPOCH : H_Shemag_olive
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Beret_blk;
    class H_71_EPOCH : H_Beret_blk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Beret_ocamo;
    class H_72_EPOCH : H_Beret_ocamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Beret_02;
    class H_73_EPOCH : H_Beret_02
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Watchcap_blk;
    class H_74_EPOCH : H_Watchcap_blk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Watchcap_khk;
    class H_75_EPOCH : H_Watchcap_khk
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Watchcap_camo;
    class H_76_EPOCH : H_Watchcap_camo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Watchcap_sgg;
    class H_77_EPOCH : H_Watchcap_sgg
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_StrawHat;
    class H_78_EPOCH : H_StrawHat
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_StrawHat_dark;
    class H_79_EPOCH : H_StrawHat_dark
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_blue;
    class H_80_EPOCH : H_Hat_blue
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_brown;
    class H_81_EPOCH : H_Hat_brown
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_camo;
    class H_82_EPOCH : H_Hat_camo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_grey;
    class H_83_EPOCH : H_Hat_grey
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_checker;
    class H_84_EPOCH : H_Hat_checker
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Hat_tan;
    class H_85_EPOCH : H_Hat_tan
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_oucamo;
    class H_86_EPOCH : H_MilCap_oucamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_rucamo;
    class H_87_EPOCH : H_MilCap_rucamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_gry;
    class H_88_EPOCH : H_MilCap_gry
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_dgtl;
    class H_89_EPOCH : H_MilCap_dgtl
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_blue;
    class H_90_EPOCH : H_MilCap_blue
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_ocamo;
    class H_91_EPOCH : H_MilCap_ocamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_MilCap_mcamo;
    class H_92_EPOCH : H_MilCap_mcamo
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_F;
    class H_93_EPOCH : H_RacingHelmet_1_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_2_F;
    class H_94_EPOCH : H_RacingHelmet_2_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_3_F;
    class H_95_EPOCH : H_RacingHelmet_3_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_4_F;
    class H_96_EPOCH : H_RacingHelmet_4_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_black_F;
    class H_97_EPOCH : H_RacingHelmet_1_black_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_blue_F;
    class H_98_EPOCH : H_RacingHelmet_1_blue_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_green_F;
    class H_99_EPOCH : H_RacingHelmet_1_green_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_red_F;
    class H_100_EPOCH : H_RacingHelmet_1_red_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_white_F;
    class H_101_EPOCH : H_RacingHelmet_1_white_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_yellow_F;
    class H_102_EPOCH : H_RacingHelmet_1_yellow_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_RacingHelmet_1_orange_F;
    class H_103_EPOCH : H_RacingHelmet_1_orange_F
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Cap_marshal;
    class H_104_EPOCH : H_Cap_marshal
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class H_Watchcap_cbr;
    class H_105_EPOCH : H_Watchcap_cbr
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class Rifle;
    class Rifle_Base_F : Rifle
    {
        scope = 0;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class Rifle_Long_Base_F : Rifle_Base_F
    {
        scope = 0;
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            allowedSlots[] = {901};
        };
    };
    class AKM_EPOCH_Base : Rifle_Base_F
    {
        scope = 0;
        magazines[] = {"30Rnd_762x39_Mag"};
        reloadAction = "GestureReloadEBR";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0325;
        swayDecaySpeed = 1.25;
        inertia = 0.65;
        maxZeroing = 800;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_B"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_AKMAssaultRifle";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\akm\AKM.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2","fullAuto","fullauto_medium"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "akmEpoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_single1","db5",1,1000};
                begin2[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_single2","db5",1,1000};
                begin3[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_single3","db5",1,1000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-22","db-2",1,300};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-25","db-2",1,300};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-26","db-2",1,300};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.089;
            dispersion = 0.00087;
            recoil = "recoil_single_akm_epoch";
            recoilProne = "recoil_single_prone_akm_epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "akmEpoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-1",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-1",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-1",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_loop1","db3",1,1200};
                begin2[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_loop2","db3",1,1200};
                begin3[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_loop3","db3",1,1200};
                begin4[] = {"x\addons\a2_epoch_weapons\akm\sound\ak_loop4","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-22","db-2",1,300};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-25","db-2",1,300};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-26","db-2",1,300};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.089;
            dispersion = 0.00087;
            recoil = "recoil_single_akm_epoch";
            recoilProne = "recoil_single_prone_akm_epoch";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"x\addons\a2_epoch_weapons\akm\sound\reload-ak-1","db-8",1,30};
    };
    class AKM_EPOCH : AKM_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_AKM";
        model = "\x\addons\a2_epoch_weapons\akm\akm_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\akm\data\UI\gear_akm_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
        };
    };
    class m4a3_EPOCH_Base : Rifle_Base_F
    {
        scope = 0;
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag"};
        reloadAction = "GestureReloadMk20";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0225;
        swayDecaySpeed = 1.05;
        inertia = 0.55;
        maxZeroing = 1000;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "nabojnicestart";
                directionName = "nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_m4a3AssaultRifle";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\m4a3\m4a3.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2","fullAuto","fullauto_medium"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m4a3Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"a3\sounds_f\weapons\M4\m4_st_1","db5",1,1000};
                begin2[] = {"a3\sounds_f\weapons\M4\m4_st_2","db5",1,1000};
                begin3[] = {"a3\sounds_f\weapons\M4\m4_st_3","db5",1,1000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.071;
            dispersion = 0.00087;
            recoil = "recoil_single_m4a3_epoch";
            recoilProne = "recoil_single_prone_m4a3_epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m4a3Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"a3\sounds_f\weapons\M4\m4_st_1","db3",1,1200};
                begin2[] = {"a3\sounds_f\weapons\M4\m4_st_2","db3",1,1200};
                begin3[] = {"a3\sounds_f\weapons\M4\m4_st_3","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.071;
            dispersion = 0.00087;
            recoil = "recoil_single_m4a3_epoch";
            recoilProne = "recoil_single_prone_m4a3_epoch";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"a3\sounds_f\weapons\Reloads\new_trg","db-8",1,30};
    };
    class m4a3_EPOCH : m4a3_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M4a3";
        model = "\x\addons\a2_epoch_weapons\m4a3\m4a3_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m4a3\data\UI\gear_m4a3_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 50;
        };
    };
    class M14_EPOCH_Base : Rifle_Base_F
    {
        scope = 0;
        magazines[] = {"20Rnd_762x51_Mag"};
        reloadAction = "GestureReloadEBR";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0225;
        swayDecaySpeed = 1.25;
        inertia = 0.7;
        maxZeroing = 1200;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_B"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_M14Rifle";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\M14\M14.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "M14Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db3",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db3",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db3",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m14\m14_1","db5",1,1000};
                begin2[] = {"x\addons\a2_epoch_weapons\m14\m14_2","db5",1,1000};
                begin3[] = {"x\addons\a2_epoch_weapons\m14\m14_3","db5",1,1000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-12","db-2",1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-13","db-2",1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-14","db-2",1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_single_m14_epoch";
            recoilProne = "recoil_single_prone_m14_epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "M14Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db3",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db3",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db3",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m14\m14_1","db3",1,1200};
                begin2[] = {"x\addons\a2_epoch_weapons\m14\m14_2","db3",1,1200};
                begin3[] = {"x\addons\a2_epoch_weapons\m14\m14_3","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-12","db-2",1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-13","db-2",1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-14","db-2",1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.196;
            dispersion = 0.00087;
            recoil = "recoil_auto_m14_epoch";
            recoilProne = "recoil_auto_prone_m14_epoch";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\ebr_reload","db-8",1,30};
    };
    class M14_EPOCH : M14_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M14";
        model = "\x\addons\a2_epoch_weapons\m14\m14_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m14\Data\UI\gear_m14_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 65;
        };
    };
    class M14Grn_EPOCH : M14_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M14Green";
        model = "\x\addons\a2_epoch_weapons\m14\m14_green_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m14\Data\UI\gear_m14g_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_sniper_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 65;
        };
    };
    class m16_EPOCH_Base : Rifle_Base_F
    {
        scope = 0;
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","20Rnd_556x45_UW_mag"};
        reloadAction = "GestureReloadMk20";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0225;
        swayDecaySpeed = 1.05;
        inertia = 0.55;
        maxZeroing = 1000;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "nabojnicestart";
                directionName = "nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_M16AssaultRifle";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\m16\m16_anim.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2","Burst"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m16Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single1","db5",1,1000};
                begin2[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single2","db5",1,1000};
                begin3[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_single3","db5",1,1000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.075;
            dispersion = 0.00087;
            recoil = "recoil_single_m16_epoch";
            recoilProne = "recoil_single_prone_m16_epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class Burst : Mode_Burst
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m16Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop1","db3",1,1200};
                begin2[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop2","db3",1,1200};
                begin3[] = {"x\addons\a2_epoch_weapons\m16\sound\m16_loop3","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.075;
            dispersion = 0.00087;
            recoil = "recoil_single_m16_epoch";
            recoilProne = "recoil_single_prone_m16_epoch";
            burst = 3;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"a3\sounds_f\weapons\Reloads\new_trg","db-8",1,30};
    };
    class m16_EPOCH : m16_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M16";
        model = "\x\addons\a2_epoch_weapons\m16\m16_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m16\data\UI\gear_m16_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 100;
        };
    };
    class m16Red_EPOCH : m16_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M16Red";
        model = "\x\addons\a2_epoch_weapons\m16\m16Red_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m16\data\UI\gear_m16_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 100;
        };
    };
    class m107_EPOCH_Base : Rifle_Long_Base_F
    {
        scope = 0;
        magazines[] = {"5Rnd_127x108_Mag","5Rnd_127x108_APDS_Mag"};
        reloadAction = "ReloadGM6";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0225;
        swayDecaySpeed = 1.05;
        inertia = 1;
        maxZeroing = 2000;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "nabojnicestart";
                directionName = "nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_M107SniperRifle";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\m107\m107.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m107Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_1","db8",1,1300};
                begin2[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_2","db8",1,1300};
                begin3[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_3","db8",1,1300};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 1.5;
            dispersion = 0.00087;
            recoil = "recoil_single_m107_Epoch";
            recoilProne = "recoil_prone_m107_Epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m107Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_1","db3",1,2000};
                begin2[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_2","db3",1,2000};
                begin3[] = {"x\addons\a2_epoch_weapons\m107\Sound\M107_3","db3",1,2000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-05","db-2",1,200};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-09","db-2",1,200};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-10","db-2",1,200};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 1.5;
            dispersion = 0.00087;
            recoil = "recoil_single_m107_Epoch";
            recoilProne = "recoil_prone_m107_Epoch";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"a3\sounds_f\weapons\Reloads\new_trg","db-8",1,30};
    };
    class m107_EPOCH : m107_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M107";
        model = "\x\addons\a2_epoch_weapons\m107\m107_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m107\data\UI\gear_m107_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 500;
        };
    };
    class m107Tan_EPOCH : m107_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M107Tan";
        model = "\x\addons\a2_epoch_weapons\m107\m107Tan_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m107\data\UI\gear_m107Tan_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 500;
        };
    };
    class m249_EPOCH_Base : Rifle_Long_Base_F
    {
        scope = 0;
        magazines[] = {"200Rnd_556x45_M249","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow","30Rnd_556x45_Stanag"};
        reloadAction = "GestureReloadM200";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0295;
        swayDecaySpeed = 1.15;
        inertia = 0.5;
        maxZeroing = 1000;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "nabojnicestart";
                directionName = "nabojniceend";
                effectName = "RifleAssaultCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 2.3;
        opticsZoomInit = 0.55;
        distanceZoomMin = 300;
        distanceZoomMax = 800;
        descriptionShort = "$STR_EPOCH_m249LMG";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a2_epoch_weapons\m249\m249.rtm"};
        dexterity = 1.8;
        bullet1[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt1",1,1,15};
        bullet2[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt2",1,1,15};
        bullet3[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt3",1,1,15};
        bullet4[] = {"A3\Sounds_F\weapons\bullets\7_62-dirt4",1,1,15};
        bullet5[] = {"A3\Sounds_F\weapons\bullets\7_62-hard1",1,1,15};
        bullet6[] = {"A3\Sounds_F\weapons\bullets\7_62-hard2",1,1,15};
        bullet7[] = {"A3\Sounds_F\weapons\bullets\7_62-hard3",1,1,15};
        bullet8[] = {"A3\Sounds_F\weapons\bullets\7_62-hard4",1,1,15};
        soundBullet[] = {"bullet1",0.083,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.083,"bullet6",0.083,"bullet7",0.083,"bullet8",0.083};
        selectionFireAnim = "zasleh";
        modes[] = {"Single","single_medium_optics1","single_far_optics2","fullAuto","fullauto_medium"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m249Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single1","db5",1,1000};
                begin2[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single2","db5",1,1000};
                begin3[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single3","db5",1,1000};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"a3\sounds_f\weapons\Silenced\silent-20","db-2",1,300};
                begin2[] = {"a3\sounds_f\weapons\Silenced\silent-25","db-2",1,300};
                begin3[] = {"a3\sounds_f\weapons\Silenced\silent-26","db-2",1,300};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.06;
            dispersion = 0.00087;
            recoil = "recoil_single_m249_epoch";
            recoilProne = "recoil_single_prone_m249_epoch";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "m249Epoch";
                closure1[] = {"A3\sounds_f\weapons\closure\ebr-1","db-4",1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\ebr-2","db-4",1,10};
                closure3[] = {"A3\sounds_f\weapons\closure\ebr-3","db-4",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5,"closure3",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single1","db3",1,1450};
                begin2[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single2","db3",1,1450};
                begin3[] = {"x\addons\a2_epoch_weapons\m249\sound\M249_single3","db3",1,1450};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"a3\sounds_f\weapons\Silenced\silent-20","db-2",1,300};
                begin2[] = {"a3\sounds_f\weapons\Silenced\silent-25","db-2",1,300};
                begin3[] = {"a3\sounds_f\weapons\Silenced\silent-26","db-2",1,300};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.06;
            dispersion = 0.00087;
            recoil = "recoil_single_m249_epoch";
            recoilProne = "recoil_single_prone_m249_epoch";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-06;
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"a3\sounds_f\weapons\Reloads\new_m200","db-8",1,30};
    };
    class m249_EPOCH : m249_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M249";
        model = "\x\addons\a2_epoch_weapons\m249\m249_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m249\data\UI\gear_m249_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 140;
        };
    };
    class m249Tan_EPOCH : m249_Epoch_Base
    {
        scope = 2;
        displayName = "$STR_EPOCH_M249Tan";
        model = "\x\addons\a2_epoch_weapons\m249\m249Tan_epoch.p3d";
        picture = "\x\addons\a2_epoch_weapons\m249\data\UI\gear_m249_x_ca.paa";
        UiPicture = "\A3\Weapons_F\Data\UI\icon_mg_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        muzzles[] = {"this"};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 140;
        };
    };
    class UGL_F;
    class Epoch_weapon_01_Base_F : Rifle_Base_F
    {
        scope = 0;
        magazines[] = {"30rnd_556_magazine"};
        reloadAction = "GestureReloadMX";
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_EPOCH_Testingweaponwithgrenadelauncher";
        handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_gl.rtm"};
        dexterity = 1.8;
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        selectionFireAnim = "muzzleFlash";
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            begin1[] = {"A3\sounds_f\weapons\MX\mx-st-full-1","db3",1,1200};
            begin2[] = {"A3\sounds_f\weapons\MX\mx-st-full-2","db3",1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6","db3",1,10};
            closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7","db3",1,10};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_single_Test_rifle_01";
            recoilProne = "recoil_single_prone_Test_rifle_01";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            begin1[] = {"x\addons\a3_epoch_assets\sounds\RollinsA","db3",1,1200};
            begin2[] = {"x\addons\a3_epoch_assets\sounds\RollinsB","db3",1,1200};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
            closure1[] = {"A3\sounds_f\weapons\closure\sfx_gm6a","db3",1,10};
            closure2[] = {"A3\sounds_f\weapons\closure\sfx_gm6b","db3",1,10};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_auto_Test_rifle_01";
            recoilProne = "recoil_auto_prone_Test_rifle_01";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = "1e-06";
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class Test_GL_F : UGL_F
        {
            displayName = "$STR_EPOCH_Testgrenadelauncher";
            descriptionShort = "$STR_EPOCH_TGL";
            useModelOptics = 0;
            useExternalOptic = 0;
            magazines[] = {"1Rnd_HE_Grenade_shell"};
            cameraDir = "OP_look";
            discreteDistance[] = {100,200,300,400};
            discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4"};
            discreteDistanceInitIndex = 1;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX","db-8",1,30};
    };
    class Rollins_F : Epoch_weapon_01_Base_F
    {
        author = "Sequisha";
        scope = 2;
        displayName = "$STR_EPOCH_RollinsRifle";
        descriptionShort = "$STR_EPOCH_194045RollinsRifle";
        magazines[] = {"5Rnd_rollins_mag"};
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\rollins.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\rollins.rtm"};
        picture = "\x\addons\a3_epoch_assets\textures\rollins\gear_rollins_x_ca.paa";
        weaponInfoType = "RscWeaponZeroing";
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"x\addons\a3_epoch_assets\sounds\Rollins_Lever","db3",1,10};
                closure2[] = {"x\addons\a3_epoch_assets\sounds\Rollins_Lever","db3",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_assets\sounds\RollinsA","db3",1,1200};
                begin2[] = {"x\addons\a3_epoch_assets\sounds\RollinsB","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_assets\sounds\RollinsA","db3",1,1200};
                begin2[] = {"x\addons\a3_epoch_assets\sounds\RollinsB","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            weaponSoundEffect = "DefaultRifle";
            reloadTime = 0.72;
            dispersion = 0.00087;
            recoil = "recoil_single_Test_rifle_01";
            recoilProne = "recoil_single_prone_Test_rifle_01";
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 60;
        };
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1","db-5",1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX","db-8",1,30};
    };
    class ChainSaw : Epoch_weapon_01_Base_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_1\models\chainsaw.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_chainsaw_CA.paa";
        displayName = "$STR_EPOCH_Chainsaw";
        descriptionShort = "$STR_EPOCH_HermliteChainsaw";
        magazines[] = {"CSGAS"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\saw_idle.rtm"};
        UiPicture = "\A3\Weapons_F\Data\UI\icon_gl_CA.paa";
        weaponInfoType = "RscWeaponZeroing";
        class GunParticles {};
        class WeaponSlotsInfo
        {
            mass = 80;
        };
        modes[] = {"FullAuto"};
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"","db3",1,10};
                soundClosure[] = {"closure1",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"\x\addons\a3_epoch_assets_1\sounds\chainsaw\running2.ogg",1.77828,1,1000};
                soundBegin[] = {"begin1",1};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"\x\addons\a3_epoch_assets_1\sounds\chainsaw\running2.ogg",1.77828,1,1000};
                soundBegin[] = {"begin1",1};
            };
            reloadTime = 0.15;
            dispersion = 0.2;
            recoil = "recoil_auto_machinegun_10outof10";
            recoilProne = "recoil_auto_machinegun_prone_10outof10";
            minRange = 0.5;
            minRangeProbab = 0.8;
            midRange = 1;
            midRangeProbab = 1.5;
            maxRange = 2;
            maxRangeProbab = 2.5;
            aiRateOfFire = "1e-06";
        };
        drySound[] = {"\x\addons\a3_epoch_assets_1\sounds\chainsaw\start-attempt.ogg",0.01,1,10};
        reloadMagazineSound[] = {"\x\addons\a3_epoch_assets_1\sounds\chainsaw\start-attempt.ogg",0.1,1,20};
    };
    class ChainSawB : ChainSaw
    {
        model = "\x\addons\a3_epoch_assets_1\models\chainsaw_B.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_chainsawB_CA.paa";
        descriptionShort = "$STR_EPOCH_HermliteChainsawBlue";
    };
    class ChainSawG : ChainSaw
    {
        model = "\x\addons\a3_epoch_assets_1\models\chainsaw_G.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_chainsawG_CA.paa";
        descriptionShort = "$STR_EPOCH_HermliteChainsawGreen";
    };
    class ChainSawP : ChainSaw
    {
        model = "\x\addons\a3_epoch_assets_1\models\chainsaw_P.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_chainsawP_CA.paa";
        descriptionShort = "$STR_EPOCH_HermliteChainsawPink";
    };
    class ChainSawR : ChainSaw
    {
        model = "\x\addons\a3_epoch_assets_1\models\chainsaw_R.p3d";
        picture = "\x\addons\a3_epoch_assets_1\pictures\equip_chainsawR_CA.paa";
        descriptionShort = "$STR_EPOCH_HermliteChainsawRed";
    };
    class Pistol;
    class Pistol_Base_F : Pistol
    {
        scope = 0;
        class WeaponSlotsInfo;
        class GunParticles;
    };
    class ruger_pistol_epoch : Pistol_Base_F
    {
        scope = 2;
        author = "Kiory";
        model = "\x\addons\a3_epoch_weapons\ruger.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_ruger_x_ca.paa";
        magazines[] = {"10rnd_22X44_magazine"};
        displayname = "$STR_EPOCH_Ruger";
        descriptionShort = "$STR_EPOCH_22caliberpistol";
        class Library
        {
            libTextDesc = ".22 caliber pistol";
        };
        reloadTime = 0.1;
        dispersion = 0.01;
        reloadAction = "GestureReloadPistol";
        recoil = "recoil_pistol_light";
        recoilProne = "recoil_prone_pistol_light";
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
            closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1,30};
            closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1.1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
            begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
        };
        class SilencedSound : BaseSoundModeType
        {
            begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
            begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
        };
        soundBegin[] = {"begin1",0.5,"begin2",0.5};
        closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
        closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
        soundClosure[] = {"closure1",0.5,"closure2",0.5};
        weaponSoundEffect = "DefaultRifle";
        drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "PistolCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class PistolAmmoCloud
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "epoch_ammocloud";
            };
            class SmokeEffect
            {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "epoch_smoketrail";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 40;
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleItems[] = {"optic_Aco","optic_Aco_smg","optic_ACO_grn_smg","optic_Holosight","optic_Holosight_smg"};
            };
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class PointerSlot : PointerSlot {};
        };
    };
    class ruger_pistol_epoch_snds_F : ruger_pistol_epoch
    {
        class LinkedItems
        {
            class LinkedItemsMuzzle
            {
                slot = "MuzzleSlot";
                item = "muzzle_snds_acp";
            };
        };
    };
    class ruger_pistol_epoch_pointer_F : ruger_pistol_epoch
    {
        class LinkedItems
        {
            class LinkedItemsOptic
            {
                slot = "CowsSlot";
                item = "optic_Arco";
            };
            class LinkedItemsAcc
            {
                slot = "PointerSlot";
                item = "acc_flashligh";
            };
        };
    };
    class 1911_pistol_epoch : Pistol_Base_F
    {
        scope = 2;
        author = "Kiory";
        model = "\x\addons\a3_epoch_weapons\1911.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_1911_x_ca.paa";
        magazines[] = {"9rnd_45X88_magazine"};
        displayname = "$STR_EPOCH_1911";
        descriptionShort = "$STR_A3_CFGWEAPONS_HGUN_ACPC2_F_2";
        class Library
        {
            libTextDesc = "$STR_A3_CfgWeapons_hgun_Pistol_heavy_01_F_Library0";
        };
        reloadTime = 0.1;
        dispersion = 0.01;
        reloadAction = "GestureReloadPistol";
        recoil = "recoil_pistol_light";
        recoilProne = "recoil_prone_pistol_light";
        sounds[] = {"StandardSound","SilencedSound"};
        class BaseSoundModeType
        {
            weaponSoundEffect = "DefaultRifle";
            closure1[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1,30};
            closure2[] = {"A3\Sounds_F\weapons\closure\closure_handgun_3",0.3,1.1,30};
            soundClosure[] = {"closure1",0.5,"closure2",0.5};
        };
        class StandardSound : BaseSoundModeType
        {
            begin1[] = {"x\addons\a3_epoch_weapons\sounds\SoundA",1.3,1,1000};
            begin2[] = {"x\addons\a3_epoch_weapons\sounds\SoundB",1.3,1,1000};
            soundBegin[] = {"begin1",0.4,"begin2",0.3};
        };
        class SilencedSound : BaseSoundModeType
        {
            begin1[] = {"A3\sounds_f\weapons\silenced\silent-23",0.56234133,1,600};
            begin2[] = {"A3\sounds_f\weapons\silenced\silent-24",0.56234133,1,600};
            soundBegin[] = {"begin1",0.5,"begin2",0.5};
        };
        soundBegin[] = {"begin1",0.5,"begin2",0.5};
        closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1,10};
        closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1.4125376,1.1,10};
        soundClosure[] = {"closure1",0.5,"closure2",0.5};
        weaponSoundEffect = "DefaultRifle";
        drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\dry",0.39810717,1,20};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_02\reload",0.56234133,1,30};
        class GunParticles
        {
            class FirstEffect
            {
                effectName = "PistolCloud";
                positionName = "Usti hlavne";
                directionName = "Konec hlavne";
            };
            class PistolAmmoCloud
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "epoch_ammocloud";
            };
            class SmokeEffect
            {
                positionName = "usti hlavne";
                directionName = "usti hlavne";
                effectName = "epoch_smoketrail";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 20;
            class CowsSlot {};
            class MuzzleSlot {};
        };
    };
    class Hatchet : Pistol_Base_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\hatchet.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\hatchet\equip_hatchet_ca.paa";
        magazines[] = {"hatchet_swing"};
        displayName = "$STR_EPOCH_Hatchet";
        descriptionShort = "$STR_EPOCH_Hatchet";
        cursor = "EmptyCursor";
        cursorAim = "throw";
        cursorSize = 1;
        weaponInfoType = "RscWeaponEmpty";
        class WeaponSlotsInfo
        {
            mass = 20;
        };
        reloadAction = "GestureReloadPistol";
        recoil = "recoil_pistol_zubr";
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                closure1[] = {"",0.2238721,1,10};
                soundClosure[] = {"closure1",1};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"",3.981072,1,1200};
                soundBegin[] = {"begin1",1};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"",0.56234133,1,400};
                soundBegin[] = {"begin1",1};
            };
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.13;
            dispersion = 0.0029;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };
    class CrudeHatchet : Pistol_Base_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\crude_hatchet.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_crudeHatchet_ca.paa";
        magazines[] = {"hatchet_swing"};
        displayName = "$STR_EPOCH_CrudeHatchet";
        descriptionShort = "$STR_EPOCH_CrudeHatchet";
        cursor = "EmptyCursor";
        cursorAim = "throw";
        cursorSize = 1;
        weaponInfoType = "RscWeaponEmpty";
        class WeaponSlotsInfo
        {
            mass = 20;
        };
        reloadAction = "GestureReloadPistol";
        recoil = "recoil_pistol_zubr";
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                closure1[] = {"",0.2238721,1,10};
                soundClosure[] = {"closure1",1};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"",3.981072,1,1200};
                soundBegin[] = {"begin1",1};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"",0.56234133,1,400};
                soundBegin[] = {"begin1",1};
            };
            recoil = "recoil_pistol_light";
            recoilProne = "recoil_prone_pistol_light";
            reloadTime = 0.13;
            dispersion = 0.0029;
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
        };
    };
    class MultiGun : Pistol_Base_F
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairGun.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\repairGun\gear_multigun_x_ca.paa";
        magazines[] = {"EnergyPack","EnergyPackLg"};
        displayName = "$STR_EPOCH_MultiGun";
        descriptionShort = "$STR_EPOCH_MultiGun";
        class Library
        {
            libTextDesc = "Multi Gun";
        };
        reloadAction = "GestureReloadPistolHeavy02";
        reloadTime = 0.5;
        dispersion = 0.004;
        recoil = "recoil_pistol_heavy";
        recoilProne = "recoil_prone_pistol_heavy";
        closure1[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1,1,10};
        closure2[] = {"A3\sounds_f\weapons\closure\closure_handgun_3",1,1.1,10};
        soundClosure[] = {"closure1",0.5,"closure2",0.5};
        weaponSoundEffect = "DefaultRifle";
        drySound[] = {"A3\Sounds_F\weapons\pistol_heavy_01\dry",0.39810717,1,20};
        reloadMagazineSound[] = {"A3\Sounds_F\weapons\pistol_heavy_01\reload",0.56234133,1,30};
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 40;
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleItems[] = {};
            };
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"Defib_EPOCH","Heal_EPOCH","Repair_EPOCH"};
            };
        };
    };
    class MeleeWeapon : Rifle
    {
        scope = 0;
        distanceZoomMin = 50;
        distanceZoomMax = 50;
        canDrop = 0;
        optics = 1;
        modelOptics = "-";
        fireLightDuration = 0;
        fireLightIntensity = 0;
        reloadMagazineSound[] = {"",1};
        muzzles[] = {"this"};
        modes[] = {"Single"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"","db3",1,10};
                closure2[] = {"","db3",1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"","db3",1,1200};
                begin2[] = {"","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"","db3",1,1200};
                begin2[] = {"","db3",1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            reloadTime = 1.5;
            dispersion = 0.00087;
            recoil = "recoil_single_Test_rifle_01";
            recoilProne = "recoil_single_prone_Test_rifle_01";
            minRange = 1;
            minRangeProbab = 0.5;
            midRange = 2;
            midRangeProbab = 0.7;
            maxRange = 3;
            maxRangeProbab = 0.3;
        };
        cursor = "EmptyCursor";
        cursorAim = "throw";
        cursorSize = 1;
        weaponInfoType = "RscWeaponEmpty";
        cameraDir = "look";
        class WeaponSlotsInfo
        {
            mass = 50;
        };
    };
    class MeleeSledge : MeleeWeapon
    {
        author = "Sequisha";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\sledge_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\Sledge\equip_sledge_CA.paa";
        displayName = "$STR_EPOCH_Sledge";
        magazines[] = {"sledge_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_SledgeHammer";
    };
    class MeleeSword : MeleeWeapon
    {
        author = "Axle";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\sword_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\sword\equip_sword_ca.paa";
        displayName = "$STR_EPOCH_Kruhm";
        magazines[] = {"sledge_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_PowerfulAtlanteanSword";
    };
    class MeleeMaul : MeleeWeapon
    {
        author = "Sequisha";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\maul_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_maul_ca.paa";
        displayName = "$STR_EPOCH_Maul";
        magazines[] = {"sledge_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_MaulHammer";
    };
    class WoodClub : MeleeWeapon
    {
        author = "Sequisha";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\stick_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_stick_ca.paa";
        displayName = "$STR_EPOCH_WoodClub";
        magazines[] = {"stick_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_WoodClub";
    };
    class MeleeRod : MeleeWeapon
    {
        author = "Axle";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\fishingpole_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\fishing\equip_fishingRod_ca.paa";
        displayName = "$STR_EPOCH_FishingRod";
        magazines[] = {"stick_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_FishingRod";
    };
    class Plunger : MeleeWeapon
    {
        author = "Sequisha";
        scope = 2;
        type = 4;
        primary = 0;
        reloadAction = "ReloadRPG";
        autoreload = 1;
        magazineReloadTime = 0;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\plunger_weaponized.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\improv_weapon\gear_plunger_ca.paa";
        displayName = "$STR_EPOCH_Plunger";
        magazines[] = {"stick_swing"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_assets_3\CfgVehicles\Characters\Sledge_hold.rtm"};
        descriptionShort = "$STR_EPOCH_Plunger";
    };
    class InventoryMuzzleItem_Base_F;
    class test_suppressor : ItemCore
    {
        scope = 0;
        displayName = "$STR_A3_cfgWeapons_muzzle_snds_H0";
        picture = "\A3\weapons_F\Data\UI\gear_acca_snds_h_CA.paa";
        model = "\A3\weapons_f\acc\acca_snds_h_F";
        class ItemInfo : InventoryMuzzleItem_Base_F
        {
            mass = 5;
            class MagazineCoef
            {
                initSpeed = 0.6;
            };
            class AmmoCoef
            {
                hit = 0.7;
                visibleFire = 0.5;
                audibleFire = 0.3;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1;
                typicalSpeed = 0.6;
                airFriction = 1;
            };
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
            class Single : Mode_SemiAuto
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18","db-2",1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19","db-2",1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11","db-2",1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_7","db-4",1,50};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6","db-4",1,50};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                reloadTime = 0.096;
                recoil = "recoil_single_mx";
                recoilProne = "recoil_single_prone_mx";
                dispersion = 0.00087;
                minRange = 2;
                minRangeProbab = 0.5;
                midRange = 200;
                midRangeProbab = 0.7;
                maxRange = 400;
                maxRangeProbab = 0.3;
            };
            class FullAuto : Mode_FullAuto
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18","db-2",1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19","db-2",1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11","db-2",1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_7","db-4",1,50};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_6","db-4",1,50};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
                reloadTime = 0.096;
                dispersion = 0.00087;
                recoil = "recoil_auto_mx";
                recoilProne = "recoil_auto_prone_mx";
                minRange = 0;
                minRangeProbab = 0.9;
                midRange = 15;
                midRangeProbab = 0.7;
                maxRange = 30;
                maxRangeProbab = 0.1;
                aiRateOfFire = "1e-06";
            };
            class fullauto_medium : FullAuto
            {
                showToPlayer = 0;
                burst = 3;
                minRange = 2;
                minRangeProbab = 0.5;
                midRange = 75;
                midRangeProbab = 0.7;
                maxRange = 150;
                maxRangeProbab = 0.05;
                aiRateOfFire = 2;
                aiRateOfFireDistance = 200;
            };
            class single_medium_optics1 : Single
            {
                requiredOpticType = 1;
                showToPlayer = 0;
                minRange = 2;
                minRangeProbab = 0.2;
                midRange = 450;
                midRangeProbab = 0.7;
                maxRange = 600;
                maxRangeProbab = 0.2;
                aiRateOfFire = 6;
                aiRateOfFireDistance = 600;
            };
            class single_far_optics2 : single_medium_optics1
            {
                requiredOpticType = 2;
                showToPlayer = 0;
                minRange = 100;
                minRangeProbab = 0.1;
                midRange = 500;
                midRangeProbab = 0.6;
                maxRange = 700;
                maxRangeProbab = 0.05;
                aiRateOfFire = 8;
                aiRateOfFireDistance = 700;
            };
        };
    };
    class Defib_EPOCH : test_suppressor
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairDefib.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\repairGun\gear_defib_ca.paa";
        displayName = "$STR_EPOCH_RevivePlayer";
    };
    class Heal_EPOCH : test_suppressor
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairHeal.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\repairGun\gear_heal_ca.paa";
        displayName = "$STR_EPOCH_HealPlayer";
    };
    class Repair_EPOCH : test_suppressor
    {
        author = "Sequisha";
        scope = 2;
        model = "\x\addons\a3_epoch_assets_3\CfgWeapons\repairVehicle.p3d";
        picture = "\x\addons\a3_epoch_assets\textures\repairGun\gear_repair_ca.paa";
        displayName = "$STR_EPOCH_VehicleRepair";
    };
    class NVGoggles;
    class NVG_EPOCH : NVGoggles
    {
        model = "\x\addons\a3_epoch_assets\models\parcel.p3d";
    };
    class InventoryOpticsItem_Base_F;
    class NCTALKEP;
    class optic_Nightstalker : ItemCore
    {
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class NCTALKEP
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = 0.03;
                    opticsZoomMax = 0.15;
                    opticsZoomInit = 0.15;
                    discreteDistance[] = {100,300,400,500,600,700,800,900,1000};
                    discreteDistanceInitIndex = 1;
                    distanceZoomMin = 100;
                    distanceZoomMax = 1000;
                    memoryPointCamera = "opticView";
                    visionMode[] = {"Normal","NVG"};
                    thermalMode[] = {5,6};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
                class Iron : NCTALKEP
                {
                    opticsID = 2;
                    useModelOptics = 0;
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                };
            };
        };
    };
    class optic_tws : ItemCore
    {
        displayName = "$STR_EPOCH_TWSdefect";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class TWS
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = 0.032;
                    opticsZoomMax = 0.0755;
                    opticsZoomInit = 0.0755;
                    discreteDistance[] = {100,300,400,500,600,700,800,900,1000,1200,1400,1600};
                    discreteDistanceInitIndex = 2;
                    distanceZoomMin = 100;
                    distanceZoomMax = 1200;
                    discretefov[] = {0.0755,0.032};
                    discreteInitIndex = 0;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    thermalMode[] = {0,1};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
    class optic_tws_mg : ItemCore
    {
        displayName = "$STR_EPOCH_TWSMGdefect";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            class OpticsModes
            {
                class TWS
                {
                    opticsID = 1;
                    useModelOptics = 1;
                    opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
                    opticsZoomMin = 0.032;
                    opticsZoomMax = 0.0755;
                    opticsZoomInit = 0.0755;
                    discreteDistance[] = {400};
                    discreteDistanceInitIndex = 0;
                    distanceZoomMin = 400;
                    distanceZoomMax = 400;
                    discretefov[] = {0.0755,0.032};
                    discreteInitIndex = 0;
                    modelOptics[] = {"\A3\Weapons_f\acc\reticle_tws_mg","\A3\Weapons_f\acc\reticle_tws_mg_NFOW"};
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    thermalMode[] = {0,1};
                    opticsFlare = 1;
                    opticsDisablePeripherialVision = 1;
                    cameraDir = "";
                };
            };
        };
    };
    class ItemRadio;
    class EpochRadio0 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioQuartz";
        channelID = 0;
        channelColor[] = {0.588,0.647,0.729,0.8};
    };
    class EpochRadio1 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioGarnet";
        channelID = 1;
        channelColor[] = {0.314,0.086,0.055,0.8};
    };
    class EpochRadio2 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioCitrine";
        channelID = 2;
        channelColor[] = {0.714,0.306,0.102,0.8};
    };
    class EpochRadio3 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioAmethyst";
        channelID = 3;
        channelColor[] = {0.604,0.396,0.804,0.8};
    };
    class EpochRadio4 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioTopaz";
        channelID = 4;
        channelColor[] = {0.718,0.494,0.184,0.8};
    };
    class EpochRadio5 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioSapphire";
        channelID = 5;
        channelColor[] = {0.161,0.329,0.792,0.8};
    };
    class EpochRadio6 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioOnyx";
        channelID = 6;
        channelColor[] = {0.4,0.4,0.4,0.8};
    };
    class EpochRadio7 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioEmerald";
        channelID = 7;
        channelColor[] = {0.008,0.596,0.459,0.8};
    };
    class EpochRadio8 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioRuby";
        channelID = 8;
        channelColor[] = {0.835,0.247,0.243,0.8};
    };
    class EpochRadio9 : ItemRadio
    {
        displayName = "$STR_EPOCH_RadioJade";
        channelID = 9;
        channelColor[] = {0,0.659,0.42,0.8};
    };
    class speargun_epoch : Rifle_Base_F
    {
        author = "Kiory";
        displayName = "$STR_EPOCH_Speargun";
        scope = 2;
        picture = "\x\addons\a3_epoch_weapons\gear\gear_speargun_x_ca.paa";
        model = "\x\addons\a3_epoch_weapons\speargun.p3d";
        magazines[] = {"spear_magazine"};
        class Library
        {
            libTextDesc = "$STR_A3_CfgWeapons_arifle_XMX_Library0";
        };
        reloadAction = "GestureReloadMX";
        maxZeroing = 30;
        discreteDistanceInitIndex = 0;
        discreteDistance[] = {30};
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        canShootInWater = 1;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo
        {
            mass = 80;
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_A3_CfgWeapons_XM_base_F0";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\spear_handanim.rtm"};
        dexterity = 1.8;
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
        modes[] = {"Single"};
        UiPicture = "";
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.70794576,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.70794576,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"",1,1,1200};
                begin2[] = {"",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",1,1,10};
    };
    class sr25_epoch : Rifle_Base_F
    {
        author = "Kiory";
        displayName = "$STR_EPOCH_SR25";
        scope = 2;
        magazines[] = {"20Rnd_762x51_Mag"};
        class Library
        {
            libTextDesc = "An SR 25 rifle manufactured by Knights Armament company";
        };
        model = "\x\addons\a3_epoch_weapons\SR25.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25_x_ca.paa";
        reloadAction = "GestureReloadSR25";
        maxZeroing = 1200;
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 100;
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_sr25S_epoch"};
            };
            class CowsSlot : CowsSlot {};
            class PointerSlot : PointerSlot {};
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_EPOCH_SniperriflebrCaliber762x51mmNATO";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\sr25_handanim2.rtm"};
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.40794576,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.40794576,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\SR25_Fire1",1,1,1800};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\SR25_Fire2",1,1,1800};
                soundBegin[] = {"begin1",0.5,"begin2",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\SR25_Suppressed",1.6,1,400};
                soundBegin[] = {"begin1",0.333};
            };
            reloadTime = 0.096;
            recoil = "recoil_auto_ebr";
            recoilProne = "recoil_auto_prone_ebr";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.3;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        reloadMagazineSound[] = {"x\addons\a3_epoch_weapons\sounds\SR25_Reload",1.5,1,10};
    };
    class sr25_ec_epoch : sr25_epoch
    {
        author = "Kiory";
        model = "\x\addons\a3_epoch_weapons\SR25_EC.p3d";
        displayName = "$STR_EPOCH_SR25EC";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\sr25_handanim.rtm"};
        picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25ec_x_ca.paa";
        class Library
        {
            libTextDesc = "An SR 25 EC rifle manufactured by Knights Armament company";
        };
    };
    class muzzle_sr25S_epoch : ItemCore
    {
        author = "Kiory";
        htMin = 1;
        htMax = 600;
        afMax = 0;
        mfMax = 0;
        mFact = 1;
        tBody = 100;
        scope = 2;
        displayName = "$STR_EPOCH_SR25RifleSuppressor";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_sr25_suppressor_x_ca.paa";
        model = "\x\addons\a3_epoch_weapons\sr25_suppressor";
        class ItemInfo : InventoryMuzzleItem_Base_F
        {
            mass = 10;
            class MagazineCoef
            {
                initSpeed = 1.1;
            };
            class AmmoCoef
            {
                hit = 1;
                typicalSpeed = 1;
                airFriction = 1;
                visibleFire = 5;
                audibleFire = 8;
                visibleFireTime = 0.5;
                audibleFireTime = 0.5;
                cost = 1.2;
            };
            soundTypeIndex = 1;
            muzzleEnd = "zaslehPoint";
            alternativeFire = "Zasleh2";
            class MuzzleCoef
            {
                dispersionCoef = "1f";
                artilleryDispersionCoef = "1.0f";
                fireLightCoef = "0.5f";
                recoilCoef = "1.0f";
                recoilProneCoef = "1.0f";
                minRangeCoef = "1.0f";
                minRangeProbabCoef = "1.0f";
                midRangeCoef = "1.0f";
                midRangeProbabCoef = "1.0f";
                maxRangeCoef = "1.0f";
                maxRangeProbabCoef = "1.0f";
            };
        };
        inertia = 0.2;
    };
    class l85a2_base_epoch : Rifle_Base_F
    {
        author = "Kiory";
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
        class Library
        {
            libTextDesc = "$STR_A3_CfgWeapons_arifle_XMX_Library0";
        };
        scope = 0;
        picture = "\x\addons\a3_epoch_weapons\gear\gear_x_l85a2_ca.paa";
        reloadAction = "GestureReloadL85A2";
        model = "\x\addons\a3_epoch_weapons\L85A2.p3d";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\L85A2_HandAnim.rtm"};
        maxZeroing = 300;
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 120;
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
            };
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleItems[] = {"Elcan_epoch","Elcan_reflex_epoch","optic_hamr","optic_Holosight","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn"};
            };
            class PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
                compatibleItems[] = {};
            };
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_A3_CfgWeapons_XM_base_F0";
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = "1e-06";
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",1,1,10};
    };
    class l85a2_epoch : l85a2_base_epoch
    {
        scope = 2;
        displayName = "$STR_EPOCH_L85A2";
        model = "\x\addons\a3_epoch_weapons\L85A2.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_x_ca.paa";
        class PointerSlot
        {
            compatibleItems[] = {};
        };
    };
    class l85a2_ris_epoch : Rifle_Base_F
    {
        reloadAction = "GestureReloadL85A2RIS";
        displayName = "$STR_EPOCH_L85A2Ris";
        scope = 2;
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
        model = "\x\addons\a3_epoch_weapons\L85A2_Ris.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_Ris_x_ca.paa";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\L85A2_RIS_HandAnim.rtm"};
        inertia = 0.5;
        dexterity = 1.5;
        maxZeroing = 300;
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {"muzzle_snds_M"};
            };
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleItems[] = {"Elcan_epoch","Elcan_reflex_epoch","optic_hamr","optic_Holosight","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn"};
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            };
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_A3_CfgWeapons_XM_base_F0";
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = "1e-06";
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",1,1,10};
    };
    class l85a2_ris_ng_epoch : l85a2_ris_epoch
    {
        scope = 2;
        displayName = "$STR_EPOCH_L85A2Ris";
        model = "\x\addons\a3_epoch_weapons\L85A2_Ris_ng.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2_ris_ng_x_ca.paa";
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\L85A2_HandAnim.rtm"};
        class PointerSlot : PointerSlot
        {
            linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            compatibleItems[] = {""};
        };
    };
    class l85a2_pink_epoch : l85a2_epoch
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_L85A2PinkEdition";
        model = "\x\addons\a3_epoch_weapons\L85A2_pink.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2P_x_ca.paa";
        class PointerSlot
        {
            compatibleItems[] = {};
        };
    };
    class l85a2_ugl_epoch : Rifle_Base_F
    {
        reloadAction = "GestureReloadL85A2UGL";
        displayName = "$STR_EPOCH_L85A2UGL";
        scope = 2;
        magazines[] = {"30Rnd_556x45_Stanag","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Green","30Rnd_556x45_Stanag_Tracer_Yellow"};
        model = "\x\addons\a3_epoch_weapons\L85A2_ugl.p3d";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_l85a2UGL_x_ca.paa";
        muzzles[] = {"this","L85_UGL"};
        handAnim[] = {"OFP2_ManSkeleton","\x\addons\a3_epoch_weapons\data\handanims\L85A2_UGL_HandAnim.rtm"};
        inertia = 0.5;
        dexterity = 1.5;
        maxZeroing = 300;
        discreteDistanceInitIndex = 0;
        maxRecoilSway = 0.0125;
        swayDecaySpeed = 1.25;
        class GunParticles : GunParticles
        {
            class SecondEffect
            {
                positionName = "Nabojnicestart";
                directionName = "Nabojniceend";
                effectName = "CaselessAmmoCloud";
            };
        };
        class WeaponSlotsInfo : WeaponSlotsInfo
        {
            mass = 140;
            class MuzzleSlot : SlotInfo
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";
                compatibleItems[] = {};
            };
            class CowsSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\TOP";
                displayName = "$STR_A3_CowsSlot0";
                compatibleItems[] = {"Elcan_epoch","Elcan_reflex_epoch","optic_hamr","optic_Holosight","optic_MRCO","optic_Arco","optic_aco","optic_ACO_grn"};
            };
            class PointerSlot : PointerSlot
            {
                linkProxy = "\A3\data_f\proxies\weapon_slots\SIDE";
            };
        };
        opticsZoomMin = 0.375;
        opticsZoomMax = 1.1;
        opticsZoomInit = 0.75;
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "$STR_A3_CfgWeapons_XM_base_F0";
        caseless[] = {"",1,1,1};
        soundBullet[] = {"caseless",1};
        changeFiremodeSound[] = {"A3\sounds_f\weapons\closure\firemode_changer_2",0.17782794,1,5};
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single : Mode_SemiAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            recoil = "recoil_single_mx";
            recoilProne = "recoil_single_prone_mx";
            dispersion = 0.00087;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
        };
        class FullAuto : Mode_FullAuto
        {
            sounds[] = {"StandardSound","SilencedSound"};
            class BaseSoundModeType
            {
                weaponSoundEffect = "DefaultRifle";
                closure1[] = {"A3\sounds_f\weapons\closure\closure_rifle_6",0.3,1,10};
                closure2[] = {"A3\sounds_f\weapons\closure\closure_rifle_7",0.3,1,10};
                soundClosure[] = {"closure1",0.5,"closure2",0.5};
            };
            class StandardSound : BaseSoundModeType
            {
                begin1[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire1",1,1,1200};
                begin2[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire2",1,1,1200};
                begin3[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire3",1,1,1200};
                begin4[] = {"x\addons\a3_epoch_weapons\sounds\L85_Fire4",1,1,1200};
                soundBegin[] = {"begin1",0.5,"begin2",0.5,"begin3",0.5,"begin4",0.5};
            };
            class SilencedSound : BaseSoundModeType
            {
                begin1[] = {"A3\sounds_f\weapons\silenced\silent-18",0.7943282,1,100};
                begin2[] = {"A3\sounds_f\weapons\silenced\silent-19",0.7943282,1,100};
                begin3[] = {"A3\sounds_f\weapons\silenced\silent-11",0.7943282,1,100};
                soundBegin[] = {"begin1",0.333,"begin2",0.333,"begin3",0.333};
            };
            reloadTime = 0.096;
            dispersion = 0.00087;
            recoil = "recoil_auto_mx";
            recoilProne = "recoil_auto_prone_mx";
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = "1e-06";
        };
        class fullauto_medium : FullAuto
        {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1 : Single
        {
            requiredOpticType = 1;
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.2;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
        };
        class single_far_optics2 : single_medium_optics1
        {
            requiredOpticType = 2;
            showToPlayer = 0;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.6;
            maxRange = 700;
            maxRangeProbab = 0.05;
            aiRateOfFire = 8;
            aiRateOfFireDistance = 700;
        };
        class L85_UGL : UGL_F
        {
            useModelOptics = 0;
            useExternalOptic = 0;
            cameraDir = "OP_look";
            discreteDistance[] = {50,100,150,200,250,300,350};
            discreteDistanceCameraPoint[] = {"OP_eye","OP_eye2","OP_eye3","OP_eye4","OP_eye5","OP_eye6","OP_eye7"};
            discreteDistanceInitIndex = 1;
        };
        aiDispersionCoefY = 6;
        aiDispersionCoefX = 4;
        drySound[] = {"A3\sounds_f\weapons\Other\dry_1",0.56234133,1,10};
        reloadMagazineSound[] = {"A3\sounds_f\weapons\reloads\new_MX",1,1,10};
    };
    class Elcan_epoch : ItemCore
    {
        author = "Kiory";
        scope = 2;
        displayName = "$STR_EPOCH_ElcanOptic";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_elcan_x_ca.paa";
        model = "\x\addons\a3_epoch_weapons\Elcan.p3d";
        descriptionShort = "$STR_EPOCH_Elcanoptic4xmagnification";
        weaponInfoType = "RscWeaponZeroing";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F_Beta\acc\acco_arco_F.p3d";
            class OpticsModes
            {
                class Zoom1
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomInit = 0.09;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
    class Elcan_reflex_epoch : Elcan_epoch
    {
        displayName = "$STR_EPOCH_ElcanOpticReflex";
        picture = "\x\addons\a3_epoch_weapons\gear\gear_elcan_reflex_x_ca.paa";
        model = "\x\addons\a3_epoch_weapons\Elcan_reflex.p3d";
        class ItemInfo : InventoryOpticsItem_Base_F
        {
            mass = 8;
            opticType = 1;
            optics = 1;
            modelOptics = "\A3\Weapons_F_Beta\acc\acco_arco_F.p3d";
            class OpticsModes
            {
                class Zoom1
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.09;
                    opticsZoomMax = 0.09;
                    opticsZoomInit = 0.09;
                    memoryPointCamera = "opticView";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
                class Zoom2
                {
                    opticsID = 1;
                    useModelOptics = 0;
                    opticsPPEffects[] = {""};
                    opticsFlare = 0;
                    opticsDisablePeripherialVision = 0;
                    opticsZoomMin = 0.375;
                    opticsZoomMax = 1.1;
                    opticsZoomInit = 0.75;
                    memoryPointCamera = "eye";
                    visionMode[] = {};
                    distanceZoomMin = 300;
                    distanceZoomMax = 300;
                };
            };
        };
        inertia = 0.1;
    };
};

/*[[[end]]]*/
