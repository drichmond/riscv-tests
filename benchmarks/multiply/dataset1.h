
#define DATA_SIZE 500 

int input_data1[DATA_SIZE] = 
{
   41, 454, 833, 335, 564,   1, 187, 989, 749, 365, 350, 572, 132,  64, 949, 153, 584, 216, 805, 140, 
  621, 210,   6, 572, 931, 339, 890, 593, 392, 898, 694, 228, 961,  12, 110, 883, 116, 750, 296, 646, 
  426, 500, 314, 436, 659, 701, 774, 812, 319, 981, 678, 150, 875, 696, 376, 564, 474, 272, 938, 258, 
  539, 647, 569, 509, 203,  88, 280, 703, 759, 669, 606, 375, 511, 551, 657, 936, 195, 592,  81, 569, 
  267, 952, 229, 800, 337, 584, 944, 643, 902, 368, 241, 489, 913, 328, 826, 313, 933, 592, 985, 388, 
  195, 543, 960, 649, 566, 979, 350, 997, 649, 814, 657,  79, 181, 208, 111, 998, 859, 629,  65, 847, 
  288, 704, 349, 997, 141, 253, 905, 715, 886, 430, 264, 415, 576, 538, 979, 700, 761,   4, 241, 494, 
  478, 100, 499, 864, 403, 693, 222, 416, 444, 296, 721, 285, 676, 620, 317,  78, 224, 351, 937, 540, 
  288, 646, 119, 169, 615, 527, 606, 289, 389, 796, 351, 801, 455, 720, 278, 758, 367, 745, 358,  92, 
  584, 989,  62, 271, 985, 853, 403, 788, 346, 531, 517, 222, 559, 461, 908, 241, 775, 358, 255, 332, 
  778, 684, 598, 740, 143, 446,  33, 311, 125, 743, 941, 557, 933, 479, 799, 557, 553, 925, 431, 796, 
  648, 357, 952, 891, 287, 666,  19, 514,  49, 557,  86, 870,  95, 853, 441, 440, 587,  61, 614, 678, 
  382, 396, 280,   9, 808,  17, 971, 170, 819, 291, 344, 380, 450, 536, 512, 185, 965, 917, 347, 539, 
  808, 983, 882, 887, 537,  54, 946, 612, 701, 951, 356, 479, 567, 151, 891,   7,  22, 641, 568, 335, 
  665, 730, 423,  95, 434, 728, 158, 280,   2, 395,  84, 688, 247, 911,  49, 476, 435, 815, 792, 729, 
  869, 265, 486, 127, 414, 236, 369, 214, 548, 180, 518,   6, 888, 503, 682, 596, 284, 173, 264, 643, 
  499, 346, 290, 599, 897,  68, 215, 849, 731, 658, 688, 619, 251, 121, 786, 131, 555, 828, 302, 667, 
  528, 433, 544, 487, 322, 753, 947, 125, 287, 626, 824,  14, 304,  10, 788, 403, 733, 106, 959, 703, 
  366, 818, 722, 964, 294, 406, 975, 874, 653, 856, 748,  86,  91,  60, 378, 660, 105, 667, 102, 153, 
  381, 121, 651,  98, 825, 412, 840, 236, 356,  12, 148, 423,  54, 965, 140, 216, 955, 621, 343, 361, 
  533, 921, 757, 715, 521, 647, 837, 299, 592, 886,  13, 682, 173,  36,  63, 493, 121, 551, 133, 537, 
  758, 969, 372, 643, 951, 434,  39, 415, 129, 303, 110, 438, 847, 860, 437, 203, 255, 478, 269, 988, 
  409, 675, 628, 719, 399, 990, 549, 338, 753, 450, 564, 633, 171, 155,  19, 646, 727, 452, 501, 427, 
  777, 509,  43, 988, 753, 426,  81,  12, 202, 483, 853, 142, 153, 339, 760, 390, 357,  50, 943, 171, 
  922, 601, 328, 105, 496, 968, 442, 121, 516, 879, 641,  81, 276, 870, 786, 600, 113, 603, 842, 871
};

int input_data2[DATA_SIZE] = 
{
  907, 887, 275, 610, 237, 404,  32, 234, 784, 745, 565, 526, 357, 275, 803, 441, 819, 226, 751, 752, 
  280, 943,  85, 726, 458, 709, 454, 201, 710,  54, 459, 758,  41,  53, 253, 397, 377,  41, 508, 141, 
  700, 416, 860, 747, 480, 219, 741, 478, 499, 770, 709, 180,  49, 482, 371, 691, 873, 725, 945, 173, 
  992, 186, 526, 914, 721,   1, 435, 963, 232, 247, 497, 464, 697, 362,  30, 521, 348, 233, 250, 120, 
  350,  40, 250, 779, 573, 195, 784, 161, 749, 743, 502, 439, 823, 355, 826, 403, 170, 141, 160, 633, 
  674, 289,  32, 782, 202, 320, 143, 636, 853, 118,  90, 852, 394,  70, 107, 816, 855, 388, 106, 954, 
  157,  36,   6,  16, 765, 698, 204, 695, 194, 677, 574, 598, 218, 883, 526, 824, 177, 746, 239, 462, 
  698, 511, 757, 534, 706, 440,  49, 428,  84, 732, 799, 726, 893, 702, 512, 547, 373,  86, 492, 798, 
   14, 215, 621,  21,  83, 651, 103,  59, 794, 429, 921, 657, 643,  96, 880, 973, 834, 659, 239, 966, 
  462, 524, 114,  62, 561, 625, 529, 303,  10, 714, 997, 409, 904,  55, 387, 728, 407, 305, 105, 436, 
  559, 901, 936, 592, 512, 691, 409, 796, 302, 497, 202, 177, 427, 940, 613, 995, 359, 480, 521, 158, 
  684, 822,  22, 611, 185, 680, 312,  14, 107, 111, 274, 797, 387, 185, 242,   0, 486, 718, 105,  96, 
  698, 749, 899, 739, 770, 814, 644, 435,  80, 326, 161,  37, 407,  33, 946, 605,  30, 935, 768,  27, 
  870,  88, 113, 441, 148, 339,  62, 344, 147, 554, 838, 365, 845, 954, 432, 639, 141, 396, 211, 991, 
  817, 249, 821, 338, 562, 832, 364, 974, 615, 393, 495, 266, 812, 470, 916, 348, 159, 336, 430, 419, 
  803, 249, 180, 215, 544, 542, 840, 903, 458, 636, 786, 729, 872, 581, 795, 820, 806, 671, 758, 979, 
  104, 418, 401, 670, 254, 920, 984, 568, 136, 745, 729, 662, 584, 139, 794, 385, 414, 927, 528, 173, 
  707, 457, 554, 316, 378, 183, 766, 477, 977, 196, 236, 399, 947, 416, 229, 805, 165, 996, 505, 270, 
  105, 735, 704, 696, 796, 825, 140, 528, 303,  50, 795, 623, 635, 537, 560,  87, 119, 294,   8, 867, 
  532, 110, 814, 398,  37, 781, 584, 646, 739, 375, 619, 943, 767, 897, 478, 589,  57,  44, 958, 288, 
  784, 845, 985, 742, 837,  99, 307, 522,  67, 443, 824, 432, 996, 165, 749, 930, 171,  28, 826, 461, 
  621, 323, 155, 272, 826, 376,  43, 340, 694, 898,  80, 158, 236, 168, 747, 443, 744, 193, 265, 631, 
  124, 935, 731, 274, 941, 781, 425, 185, 370, 619, 320, 292, 269, 933, 542, 156, 763, 827, 752,  88, 
  915, 987,  14, 629,   1, 649, 906,  32, 995,   1, 809, 744, 560, 399, 873, 915, 972, 791, 289, 554, 
  509, 984, 558, 530, 970, 600, 405, 401, 579, 683, 293, 540, 251, 903, 849, 120, 129, 995, 452, 521
};

int verify_data[DATA_SIZE] = 
{
  37187, 402698, 229075, 204350, 133668, 404, 5984, 231426, 587216, 271925, 197750, 300872, 47124, 17600, 762047, 67473, 478296, 48816, 604555, 105280, 
  173880, 198030, 510, 415272, 426398, 240351, 404060, 119193, 278320, 48492, 318546, 172824, 39401, 636, 27830, 350551, 43732, 30750, 150368, 91086, 
  298200, 208000, 270040, 325692, 316320, 153519, 573534, 388136, 159181, 755370, 480702, 27000, 42875, 335472, 139496, 389724, 413802, 197200, 886410, 44634, 
  534688, 120342, 299294, 465226, 146363,  88, 121800, 676989, 176088, 165243, 301182, 174000, 356167, 199462, 19710, 487656, 67860, 137936, 20250, 68280, 
  93450, 38080, 57250, 623200, 193101, 113880, 740096, 103523, 675598, 273424, 120982, 214671, 751399, 116440, 682276, 126139, 158610, 83472, 157600, 245604, 
  131430, 156927, 30720, 507518, 114332, 313280, 50050, 634092, 553597, 96052, 59130, 67308, 71314, 14560, 11877, 814368, 734445, 244052, 6890, 808038, 
  45216, 25344, 2094, 15952, 107865, 176594, 184620, 496925, 171884, 291110, 151536, 248170, 125568, 475054, 514954, 576800, 134697, 2984, 57599, 228228, 
  333644, 51100, 377743, 461376, 284518, 304920, 10878, 178048, 37296, 216672, 576079, 206910, 603668, 435240, 162304, 42666, 83552, 30186, 461004, 430920, 
  4032, 138890, 73899, 3549, 51045, 343077, 62418, 17051, 308866, 341484, 323271, 526257, 292565, 69120, 244640, 737534, 306078, 490955, 85562, 88872, 
  269808, 518236, 7068, 16802, 552585, 533125, 213187, 238764, 3460, 379134, 515449, 90798, 505336, 25355, 351396, 175448, 315425, 109190, 26775, 144752, 
  434902, 616284, 559728, 438080, 73216, 308186, 13497, 247556, 37750, 369271, 190082, 98589, 398391, 450260, 489787, 554215, 198527, 444000, 224551, 125768, 
  443232, 293454, 20944, 544401, 53095, 452880, 5928, 7196, 5243, 61827, 23564, 693390, 36765, 157805, 106722,   0, 285282, 43798, 64470, 65088, 
  266636, 296604, 251720, 6651, 622160, 13838, 625324, 73950, 65520, 94866, 55384, 14060, 183150, 17688, 484352, 111925, 28950, 857395, 266496, 14553, 
  702960, 86504, 99666, 391167, 79476, 18306, 58652, 210528, 103047, 526854, 298328, 174835, 479115, 144054, 384912, 4473, 3102, 253836, 119848, 331985, 
  543305, 181770, 347283, 32110, 243908, 605696, 57512, 272720, 1230, 155235, 41580, 183008, 200564, 428170, 44884, 165648, 69165, 273840, 340560, 305451, 
  697807, 65985, 87480, 27305, 225216, 127912, 309960, 193242, 250984, 114480, 407148, 4374, 774336, 292243, 542190, 488720, 228904, 116083, 200112, 629497, 
  51896, 144628, 116290, 401330, 227838, 62560, 211560, 482232, 99416, 490210, 501552, 409778, 146584, 16819, 624084, 50435, 229770, 767556, 159456, 115391, 
  373296, 197881, 301376, 153892, 121716, 137799, 725402, 59625, 280399, 122696, 194464, 5586, 287888, 4160, 180452, 324415, 120945, 105576, 484295, 189810, 
  38430, 601230, 508288, 670944, 234024, 334950, 136500, 461472, 197859, 42800, 594660, 53578, 57785, 32220, 211680, 57420, 12495, 196098, 816, 132651, 
  202692, 13310, 529914, 39004, 30525, 321772, 490560, 152456, 263084, 4500, 91612, 398889, 41418, 865605, 66920, 127224, 54435, 27324, 328594, 103968, 
  417872, 778245, 745645, 530530, 436077, 64053, 256959, 156078, 39664, 392498, 10712, 294624, 172308, 5940, 47187, 458490, 20691, 15428, 109858, 247557, 
  470718, 312987, 57660, 174896, 785526, 163184, 1677, 141100, 89526, 272094, 8800, 69204, 199892, 144480, 326439, 89929, 189720, 92254, 71285, 623428, 
  50716, 631125, 459068, 197006, 375459, 773190, 233325, 62530, 278610, 278550, 180480, 184836, 45999, 144615, 10298, 100776, 554701, 373804, 376752, 37576, 
  710955, 502383, 602, 621452, 753, 276474, 73386, 384, 200990, 483, 690077, 105648, 85680, 135261, 663480, 356850, 347004, 39550, 272527, 94734, 
  469298, 591384, 183024, 55650, 481120, 580800, 179010, 48521, 298764, 600357, 187813, 43740, 69276, 785610, 667314, 72000, 14577, 599985, 380584, 453791
};

