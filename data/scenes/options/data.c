#include "global.h"
#include "graphics.h"
#include "src/scenes/options.h"
#include "graphics/options/options_graphics.h"


  /* OPTIONS MENU - SCENE DATA */


// [D_089cfac8] Graphics Table
struct GraphicsTable options_gfx_table[] = {
    /* BG Tileset */ {
        /* Src.  */ &options_bg_tiles,
        /* Dest. */ BG_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Map */ {
        /* Src.  */ &options_bg_map,
        /* Dest. */ BG_MAP_BASE(0xE800),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* OBJ Tileset */ {
        /* Src.  */ &options_obj,
        /* Dest. */ OBJ_TILESET_BASE(0),
        /* Size  */ COMPRESSED_GFX_SOURCE
    },
    /* BG Palette */ {
        /* Src.  */ options_pal,
        /* Dest. */ BG_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    /* OBJ Palette */ {
        /* Src.  */ options_pal,
        /* Dest. */ OBJ_PALETTE_BUFFER(0),
        /* Size  */ 0x200
    },
    END_OF_GRAPHICS_TABLE
};


// [D_089cfb10] Buffered Textures List
struct CompressedData *options_buffered_textures[] = {
    END_OF_BUFFERED_TEXTURES_LIST
};


// [D_08054950] Data Clear Confirmation Options
        // Erase ALL data?
        //?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@Erase
        //?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@?ｿｽ@Cancel
const char options_data_clear_confirm_text[] =
        "\0023" "\0013" "\001C" "En serio?\n"
        "\0021" "\0011" "\001C" "Si\n"
        "No";

const char *options_desc_text[] = {
    /* SOUND MODE ------------------------------------- */
        "\0023" "\0013" "\001C" "Modo de sonido\n"
        "\0024" "\0011" "\001L" "Est⑱reo " "\0021" " Para audifonos, Nintendo DS, etc.\n"
        "\0024" "\0011" "\001L" "Mono " "\x87\x53" "\0021" "Para GBAs sin audifonos.",
    /* DATA CLEAR ------------------------------------- */
        "\0023" "\0013" "\001C" "Borrar partida\n"
        "\0021" "\0011" "\001C" "Esto borrar㌘ " "\0022" "TODA " "\0021" "tu partida y tendras\n"
        "que empezar de cero." "\0022" " Ten cuidado!"
    /* ------------------------------------------------ */
};

const char *advance_options_label_text[] = {
    "Ｅｆｅｃｔｏｓ　ｄｅ　ｓｏｎｉｄｏ",
    "Ｍなｓｉｃａ",
#ifdef RUMBLE
    "Ｖｉｂｒａｃｉだｎ",
#endif
    "Ｍｏｓｔｒａｒ　Ｄｉｓｃｌａｉｍｅｒ",
    "Ｍなｓｉｃａ　Ａｌｔ．　ｅｎ　ｅｌ　ｊｕｅｇｏ　ｒざｔｍｉｃｏ",
};

const char *advance_options_desc_text[] = {
    /* NON-JP SFX ------------------------------------- */
        "\0023" "\0013" "\001C" "Efectos de sonido\n"
        "\0024" "\0011" "\001L" "Ingles   " "\0021" "Usar los efectos de sonido localizados.\n"
        "\0024" "\0011" "\001L" "Japones  " "\0021" "Usar los efectos de sonido originales.",
    /* NON-JP MUSIC ----------------------------------- */
        "\0023" "\0013" "\001C" "M姶sica\n"
        "\0024" "\0011" "\001L" "Ingles   " "\0021" "Usar la m姶sica localizada.\n"
        "\0024" "\0011" "\001L" "Japones  " "\0021" "Usar la m姶sica original.",
    /* RUMBLE ----------------------------------------- */
#ifdef RUMBLE
        "\0023" "\0013" "\001C" "Vibraci㌍n\n"
        "\0024" "\0011" "\001L" "Si　　　 " "\0021" "Se sentira vibraci㌍n en los juegos.\n"
        "\0024" "\0011" "\001L" "No　　　 " "\0021" "La vibraci㌍n esta desactivada.",
#endif
    /* SHOW DISCLAIMER -------------------------------- */
        "\0023" "\0013" "\001C" "Mostrar Disclaimer\n"
        "\0024" "\0011" "\001L" "Mostrar　　 " "\0021" "Muestra el disclaimer al inicio.\n"
        "\0024" "\0011" "\001L" "Saltar　　 " "\0021" "Salta el disclaimer al inicio.",
    /* ALT GAME SELECT MUSIC --------------------------- */
        "\0023" "\0013" "\001C" "Musica Alt. en el Juego R㌃tmico\n"
        "\0024" "\0011" "\001L" "Si　　　 " "\0021" "Usa m姶sica alternativa en el juego r㌃tmico.\n"
        "\0024" "\0011" "\001L" "No　　　 " "\0021" "Usa la m姶sica normal en el juego r㌃tmico.",
};


// [D_089cfb1c] Audio Options
struct Animation *options_sound_mode_anim[][2] = {
    /* Stereo */ {
        /* Selected   */ anim_options_select_stereo,
        /* Unselected */ anim_options_off_stereo
    },
    /* Monaural */ {
        /* Selected   */ anim_options_select_mono,
        /* Unselected */ anim_options_off_mono
    }
};
