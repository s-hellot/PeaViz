/*  GIMP header image file format (INDEXED): C:\Users\Simon\Documents\GitHub\Blue-square\textures\LUT_CYAN.h  */

static unsigned int g_lut_cyan_texture_width = 256;
static unsigned int g_lut_cyan_texture_height = 1;

/*  Call this macro repeatedly.  After each use, the pixel data can be extracted  */

#define HEADER_PIXEL(data,pixel) {\
pixel[0] = header_data_cmap[(unsigned char)data[0]][0]; \
pixel[1] = header_data_cmap[(unsigned char)data[0]][1]; \
pixel[2] = header_data_cmap[(unsigned char)data[0]][2]; \
data ++; }

static unsigned char g_lut_cyan_texture_data[256][3] = {
	{  0,  0,  0},
	{  0,  1,  1},
	{  0,  2,  2},
	{  0,  3,  3},
	{  0,  4,  4},
	{  0,  5,  5},
	{  0,  6,  6},
	{  0,  7,  7},
	{  0,  8,  8},
	{  0,  9,  9},
	{  0, 10, 10},
	{  0, 11, 11},
	{  0, 12, 12},
	{  0, 13, 13},
	{  0, 14, 14},
	{  0, 15, 15},
	{  0, 16, 16},
	{  0, 17, 17},
	{  0, 18, 18},
	{  0, 19, 19},
	{  0, 20, 20},
	{  0, 21, 21},
	{  0, 22, 22},
	{  0, 23, 23},
	{  0, 24, 24},
	{  0, 25, 25},
	{  0, 26, 26},
	{  0, 27, 27},
	{  0, 28, 28},
	{  0, 29, 29},
	{  0, 30, 30},
	{  0, 31, 31},
	{  0, 32, 32},
	{  0, 33, 33},
	{  0, 34, 34},
	{  0, 35, 35},
	{  0, 36, 36},
	{  0, 37, 37},
	{  0, 38, 38},
	{  0, 39, 39},
	{  0, 40, 40},
	{  0, 41, 41},
	{  0, 42, 42},
	{  0, 43, 43},
	{  0, 44, 44},
	{  0, 45, 45},
	{  0, 46, 46},
	{  0, 47, 47},
	{  0, 48, 48},
	{  0, 49, 49},
	{  0, 50, 50},
	{  0, 51, 51},
	{  0, 52, 52},
	{  0, 53, 53},
	{  0, 54, 54},
	{  0, 55, 55},
	{  0, 56, 56},
	{  0, 57, 57},
	{  0, 58, 58},
	{  0, 59, 59},
	{  0, 60, 60},
	{  0, 61, 61},
	{  0, 62, 62},
	{  0, 63, 63},
	{  0, 64, 64},
	{  0, 65, 65},
	{  0, 66, 66},
	{  0, 67, 67},
	{  0, 68, 68},
	{  0, 69, 69},
	{  0, 70, 70},
	{  0, 71, 71},
	{  0, 72, 72},
	{  0, 73, 73},
	{  0, 74, 74},
	{  0, 75, 75},
	{  0, 76, 76},
	{  0, 77, 77},
	{  0, 78, 78},
	{  0, 79, 79},
	{  0, 80, 80},
	{  0, 81, 81},
	{  0, 82, 82},
	{  0, 83, 83},
	{  0, 84, 84},
	{  0, 85, 85},
	{  0, 86, 86},
	{  0, 87, 87},
	{  0, 88, 88},
	{  0, 89, 89},
	{  0, 90, 90},
	{  0, 91, 91},
	{  0, 92, 92},
	{  0, 93, 93},
	{  0, 94, 94},
	{  0, 95, 95},
	{  0, 96, 96},
	{  0, 97, 97},
	{  0, 98, 98},
	{  0, 99, 99},
	{  0,100,100},
	{  0,101,101},
	{  0,102,102},
	{  0,103,103},
	{  0,104,104},
	{  0,105,105},
	{  0,106,106},
	{  0,107,107},
	{  0,108,108},
	{  0,109,109},
	{  0,110,110},
	{  0,111,111},
	{  0,112,112},
	{  0,113,113},
	{  0,114,114},
	{  0,115,115},
	{  0,116,116},
	{  0,117,117},
	{  0,118,118},
	{  0,119,119},
	{  0,120,120},
	{  0,121,121},
	{  0,122,122},
	{  0,123,123},
	{  0,124,124},
	{  0,125,125},
	{  0,126,126},
	{  0,127,127},
	{  0,128,128},
	{  0,129,129},
	{  0,130,130},
	{  0,131,131},
	{  0,132,132},
	{  0,133,133},
	{  0,134,134},
	{  0,135,135},
	{  0,136,136},
	{  0,137,137},
	{  0,138,138},
	{  0,139,139},
	{  0,140,140},
	{  0,141,141},
	{  0,142,142},
	{  0,143,143},
	{  0,144,144},
	{  0,145,145},
	{  0,146,146},
	{  0,147,147},
	{  0,148,148},
	{  0,149,149},
	{  0,150,150},
	{  0,151,151},
	{  0,152,152},
	{  0,153,153},
	{  0,154,154},
	{  0,155,155},
	{  0,156,156},
	{  0,157,157},
	{  0,158,158},
	{  0,159,159},
	{  0,160,160},
	{  0,161,161},
	{  0,162,162},
	{  0,163,163},
	{  0,164,164},
	{  0,165,165},
	{  0,166,166},
	{  0,167,167},
	{  0,168,168},
	{  0,169,169},
	{  0,170,170},
	{  0,171,171},
	{  0,172,172},
	{  0,173,173},
	{  0,174,174},
	{  0,175,175},
	{  0,176,176},
	{  0,177,177},
	{  0,178,178},
	{  0,179,179},
	{  0,180,180},
	{  0,181,181},
	{  0,182,182},
	{  0,183,183},
	{  0,184,184},
	{  0,185,185},
	{  0,186,186},
	{  0,187,187},
	{  0,188,188},
	{  0,189,189},
	{  0,190,190},
	{  0,191,191},
	{  0,192,192},
	{  0,193,193},
	{  0,194,194},
	{  0,195,195},
	{  0,196,196},
	{  0,197,197},
	{  0,198,198},
	{  0,199,199},
	{  0,200,200},
	{  0,201,201},
	{  0,202,202},
	{  0,203,203},
	{  0,204,204},
	{  0,205,205},
	{  0,206,206},
	{  0,207,207},
	{  0,208,208},
	{  0,209,209},
	{  0,210,210},
	{  0,211,211},
	{  0,212,212},
	{  0,213,213},
	{  0,214,214},
	{  0,215,215},
	{  0,216,216},
	{  0,217,217},
	{  0,218,218},
	{  0,219,219},
	{  0,220,220},
	{  0,221,221},
	{  0,222,222},
	{  0,223,223},
	{  0,224,224},
	{  0,225,225},
	{  0,226,226},
	{  0,227,227},
	{  0,228,228},
	{  0,229,229},
	{  0,230,230},
	{  0,231,231},
	{  0,232,232},
	{  0,233,233},
	{  0,234,234},
	{  0,235,235},
	{  0,236,236},
	{  0,237,237},
	{  0,238,238},
	{  0,239,239},
	{  0,240,240},
	{  0,241,241},
	{  0,242,242},
	{  0,243,243},
	{  0,244,244},
	{  0,245,245},
	{  0,246,246},
	{  0,247,247},
	{  0,248,248},
	{  0,249,249},
	{  0,250,250},
	{  0,251,251},
	{  0,252,252},
	{  0,253,253},
	{  0,254,254},
	{  0,255,255}
	};
static char g_lut_cyan_texture_header_data[] = {
	0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,
	16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,
	32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,
	48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,
	64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,
	80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,
	96,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,
	112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,
	128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,
	144,145,146,147,148,149,150,151,152,153,154,155,156,157,158,159,
	160,161,162,163,164,165,166,167,168,169,170,171,172,173,174,175,
	176,177,178,179,180,181,182,183,184,185,186,187,188,189,190,191,
	192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,
	208,209,210,211,212,213,214,215,216,217,218,219,220,221,222,223,
	224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,
	240,241,242,243,244,245,246,247,248,249,250,251,252,253,254,255
	};
