#include "global.h"
#include "text.h"


/* Game Text - The Bon Odori */


const char D_080676b4[] = "La primera parte estuvo rara...";

const char D_080676d4[] = "ˆ¿La primera parte estuvo muy buena!";

const char D_080676ec[] = "La segunda parte estuvo fuera de ritmo.";

const char D_08067710[] = "ˆ¿La segunda parte estuvo incre‡eble!";

const char D_0806772c[] = "";

const char D_08067730[] = "ˆ¿El final s‡e que se intensific‡i!";

const char D_08067754[] = "ˆ¿El final estuvo de pel‡ecula!";

const char D_08067778[] = "La gente dice...";

const char text_bon_odori_ha[] = ".0:0" "‚g‚‚`";

const char text_bon_odori_hanabi_agare_ba[] = ".0:0" "‚g‚‚‚‚‚‚‰@‚‚‡‚‚’‚…@‚‚‚`";

const char text_bon_odori_don_don_pan_pan[] = ".1:0" "‚c‚|‚@‚„‚|‚@" ".2:0" "‚‚|‚@‚‚|‚";

const char text_bon_odori_dondo_pan_pan[] = ".1:0" "‚c‚‚‚„‚@" ".2:0" "‚‚|‚@‚‚‚";

const char text_bon_odori_haa[] = ".0:0" "‚g‚‚`@‚`‚ˆ`";

const char text_bon_odori_kansei_agaru[] = ".0:0" "‚j‚‚‚“‚…‚‰@‚‚‡‚‚’‚•`";

const char text_bon_odori_ninki_agare_ba[] = ".0:0" "‚m‚‰‚‚‹‚‰@‚‚‡‚‚’‚…@‚‚‚`";

const char text_bon_odori_kyuryo_agaru[] = ".0:0" "‚j‚™‚•‚•‚’‚™‚‚•@‚‚‡‚‚’‚•`";

const char text_bon_odori_matsuri_da_wasshoi[] = ".0:0" "‚l‚‚”‚“‚•‚’‚‰@‚„‚@‚—‚‚“‚“‚ˆ‚‚‰I";

const char text_bon_odori_dondo_panpa_dondo_panpa[] = ".1:0" "‚c‚‚‚„‚@" ".2:0" "‚‚‚‚‚@" ".1:0" "‚„‚‚‚„‚@" ".2:0" "‚‚‚‚‚";

const char text_bon_odori_nippon_chu_ga_wasshoi[] = ".0:0" "‚m‚‰‚‚‚‚@‚ƒ‚ˆ‚•‚•@‚‡‚@‚—‚‚“‚“‚ˆ‚‚‰I";

const char text_bon_odori_don_don_pan[] = ".1:0" "‚c‚|‚@‚„‚|‚@" ".2:0" "‚‚‚";

const char text_bon_odori_sore_hikkuri_kaette[] = ".0:0" "‚r‚‚’‚…@‚ˆ‚‰‚‹‚‹‚•‚’‚‰@‚‹‚‚…‚”‚”‚…";

const char text_bon_odori_ha_bon_odori[] = ".0:0" "‚g‚‚`@‚a‚‚@‚n‚„‚‚’‚‰`";

const char text_bon_odori_dondo_panpa[] = ".1:0" "‚c‚‚‚„‚@" ".2:0" "‚‚‚‚‚";

const char text_bon_odori_don_pan_pan[] = ".1:0" "‚c‚|‚@" ".2:0" "‚‚|‚@‚‚‚";

const char text_bon_odori_ame_ga_agare_ba[] = ".0:0" "‚`‚‚…@‚‡‚@‚‚‡‚‚’‚…@‚‚‚`";

const char text_bon_odori_yagura_ni_agaru[] = ".0:0" "‚x‚‚‡‚•‚’‚@‚‚‰@‚‚‡‚‚’‚•`";

const char text_bon_odori_hora_matsuri_da_wasshoi[] = ".0:0" "‚g‚‚’‚I@‚l‚‚”‚“‚•‚’‚‰@‚„‚@‚—‚‚“‚“‚ˆ‚‚‰I";

const char text_bon_odori_korezo[] = ".0:0" "‚j‚‚’‚…‚š‚";

const char text_bon_odori_meido_in_japan[] = ".0:0" "‚‚‚„‚…@‚‰‚@‚i‚" ".2" "‚o‚`‚m";

const char text_bon_odori_pan_pan[] = ".2:0" "‚o‚‚@‚‚‚";

const char text_bon_odori_don_don_pan_pan_2[] = ".1:0" "‚c‚|‚@‚„‚|‚@" ".2:0" "‚‚|‚@‚‚‚";

const char D_08067a84[] = ".6:1" "z‚a‚‰‚…‚‚–‚…‚‚‰‚„‚@‚‚Œ@‚e‚…‚“‚”‚‰‚–‚‚Œ@‚a‚‚I";

const char D_08067aa4[] = ".6:1" "z‚b‚•‚‚‚„‚@‚„‚‰‚‡‚‚‚‚“@h‚o‚‚Ch@‚‚‚Œ‚‚•‚„‚…I";

const char D_08067ad0[] = ".6:0" "z‚a‚•‚…‚@‚‚‚Œ‚‚•‚“‚I";

const char D_08067adc[] = ".6:1" "z‚x@‚ƒ‚‚@h‚o‚‚‚‚Ch@‚‚‚Œ‚‚•‚„‚…@‚Q@‚–‚…‚ƒ‚…‚“I";

const char D_08067b00[] = ".6:1" "z‚x‚@‚Œ‚@‚”‚‰‚…‚‚…‚“I";

