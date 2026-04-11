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
        //?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@Erase
        //?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@?øΩ@Cancel
const char options_data_clear_confirm_text[] =
        "\0023" "\0013" "\001C" "En serio?\n"
        "\0021" "\0011" "\001C" "Si\n"
        "No";

const char *options_desc_text[] = {
    /* SOUND MODE ------------------------------------- */
        "\0023" "\0013" "\001C" "Modo de sonido\n"
        "\0024" "\0011" "\001L" "EstáQreo " "\0021" " Para audifonos, Nintendo DS, etc.\n"
        "\0024" "\0011" "\001L" "Mono " "\x87\x53" "\0021" "Para GBAs sin audifonos.",
    /* DATA CLEAR ------------------------------------- */
        "\0023" "\0013" "\001C" "Borrar partida\n"
        "\0021" "\0011" "\001C" "Esto borrarác " "\0022" "TODA " "\0021" "tu partida y tendras\n"
        "que empezar de cero." "\0022" " Ten cuidado!"
    /* ------------------------------------------------ */
};

const char *advance_options_label_text[] = {
    "ÇrÇèÇïÇéÇÑÅ@ÇdÇÜÇÜÇÖÇÉÇîÇì",
    "ÇlÇïÇìÇâÇÉ",
#ifdef RUMBLE
    "ÇuÇâÇÇÇíÇÅÇÉÇâÇæÇé",
#endif
    "ÇlÇèÇìÇîÇíÇÅÇíÅ@ÇcÇâÇìÇÉÇåÇÅÇâÇçÇÖÇí",
    "ÇlÇ»ÇìÇâÇÉÇÅÅ@Ç`ÇåÇîÅDÅ@ÇÖÇéÅ@ÇÖÇåÅ@ÇäÇïÇÖÇáÇèÅ@ÇíÇ¥ÇîÇçÇâÇÉÇè",
};

const char *advance_options_desc_text[] = {
    /* NON-JP SFX ------------------------------------- */
        "\0023" "\0013" "\001C" "Sound Effects\n"
        "\0024" "\0011" "\001L" "English   " "\0021" "Use the localized sound effects.\n"
        "\0024" "\0011" "\001L" "Japanese  " "\0021" "Use the original sound effects.",
    /* NON-JP MUSIC ----------------------------------- */
        "\0023" "\0013" "\001C" "Music\n"
        "\0024" "\0011" "\001L" "English   " "\0021" "Use the localized music.\n"
        "\0024" "\0011" "\001L" "Japanese  " "\0021" "Use the original music.",
    /* RUMBLE ----------------------------------------- */
#ifdef RUMBLE
        "\0023" "\0013" "\001C" "Vibraciáin\n"
        "\0024" "\0011" "\001L" "SiÅ@Å@Å@ " "\0021" "Se sentira vibraciáin en los juegos.\n"
        "\0024" "\0011" "\001L" "NoÅ@Å@Å@ " "\0021" "La vibraciáin esta desactivada.",
#endif
    /* SHOW DISCLAIMER -------------------------------- */
        "\0023" "\0013" "\001C" "Mostrar Disclaimer\n"
        "\0024" "\0011" "\001L" "MostrarÅ@Å@ " "\0021" "Muestra el disclaimer al inicio.\n"
        "\0024" "\0011" "\001L" "SaltarÅ@Å@ " "\0021" "Salta el disclaimer al inicio.",
    /* ALT GAME SELECT MUSIC --------------------------- */
        "\0023" "\0013" "\001C" "Musica Alt. en el Juego Ráetmico\n"
        "\0024" "\0011" "\001L" "SiÅ@Å@Å@ " "\0021" "Usa mà¶sica alternativa en el juego ráetmico.\n"
        "\0024" "\0011" "\001L" "NoÅ@Å@Å@ " "\0021" "Usa la mà¶sica normal en el juego ráetmico.",
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
