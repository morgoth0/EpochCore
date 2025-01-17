class RscCustomProgress : RscProgress
{
	texture = "";
	textureExt = "";
	colorBar[] = { 0.9, 0.9, 0.9, 0.9 };
	colorExtBar[] = { 1, 1, 1, 1 };
	colorFrame[] = { 1, 1, 1, 1 };
	x = "0 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	y = "16 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	w = "26 * 			(			((safezoneW / safezoneH) min 1.2) / 40)";
	h = "1 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
	colorBackground[] = { 1, 1, 1, 0.75 };
};
class RscTotalArmorProgress : RscProgress
{
    texture = "";
    textureExt = "";
    colorBar[] = { 0.9, 0.9, 0.9, 0.9 };
    colorExtBar[] = { 1, 1, 1, 1 };
    colorFrame[] = { 1, 1, 1, 1 };
    x = "1.5 * 					(			((safezoneW / safezoneH) min 1.2) / 40) + 		(safezoneX + (safezoneW - 					((safezoneW / safezoneH) min 1.2))/2)";
    y = "22.5 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + 		(safezoneY + (safezoneH - 					(			((safezoneW / safezoneH) min 1.2) / 1.2))/2)";
    w = "11 * 					(			((safezoneW / safezoneH) min 1.2) / 40)";
    h = "1 * 					(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25)";
};
