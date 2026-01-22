// Level Entries Table
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man,
        /* Level Name    */ "Karate Killo",
        /* Level Desc.   */ "La clave del karate,\n"
                            "como en la vida, es ritmo.\n"
                            "Como sea, golpea las\n"
                            "cosas que te lanzemos!",
        /* Level Icon    */ 8,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Hay un futuro por delante...",
            /* OK        */ "Mejor descansemos para almorzar~",
            /* SUPERB    */ "Aprecien todo lo que golpee!"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &scene_karate_man_2,
        /* Level Name    */ "Karate Killo 2",
        /* Level Desc.   */ "Algo le pasa a la\n"
                            "velocidad! Mantente\n"
                            "alerta, mientras te\n"
                            "lanzamos mas cosas!",
        /* Level Icon    */ 0,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Cual es el punto de esos horribles cambios de ritmo!?",
            /* OK        */ "Bah, como sea. A comer!",
            /* SUPERB    */ "Ya soy todo un experto rompe macetas!"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio,
        /* Level Name    */ "Trio Saleroso",
        /* Level Desc.   */ "Aplaudan en orden!\n"
                            "Eres el tercero.\n"
                            "Asi que estate atento\n"
							"con los otros dos!",
        /* Level Icon    */ 4,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "El trio ahora es un solo!",
            /* OK        */ "Necesitas llegar mas a nuestros ensayos...",
            /* SUPERB    */ "Tráas bien!"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &scene_snappy_trio,
        /* Level Name    */ "Trio Garboso",
        /* Level Desc.   */ "Mira al trio en sus\n"
                            "trajes del Oeste.\n"
                            "Tan divinos! Lucen\n"
                            "muy... Garbosos?",
        /* Level Icon    */ 10,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Gaste todo lo que tenia en este conjunto!",
            /* OK        */ "Estabamos tan cerca...",
            /* SUPERB    */ "Que ritmo! Debe ser el conjunto, verdad?"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &scene_polyrhythm,
        /* Level Name    */ "Poliritmo",
        /* Level Desc.   */ "Maneja los caminos\n"
							"áO y áM para que las\n"
							"cosas rojas rueden!\n"
							"Sencillo, no?",
        /* Level Icon    */ 3,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Producir estas cosas en masa es bastante dificil...",
            /* OK        */ "Ya le estoy agarrando la mano a estas cosas rojas!",
            /* SUPERB    */ "Hemos producido mas de lo que podemos reponer!"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &scene_polyrhythm_2,
        /* Level Name    */ "Poliritmo 2",
        /* Level Desc.   */ "Los caminos áO y áM\n"
                            "tienen patrones raros!\n"
                            "Concentrate y juega\n"
                            "al poliritmo!",
        /* Level Icon    */ 51,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Necesitamos producir muchas mas cosas rojas...",
            /* OK        */ "Producir mas cosas rojas no hara mal!",
            /* SUPERB    */ "La produccion de cosas rojas esta que arde!"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &scene_night_walk,
        /* Level Name    */ "Paseo Nocturno",
        /* Level Desc.   */ "Que mejor que pasear\n"
                            "bajo las estrellas?\n"
                            "Pues obvio! Saltar\n"
                            "bajo las estrellas!",
        /* Level Icon    */ 7,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No vi ese hoyo en la oscuridad!",
            /* OK        */ "Nada como un paseo bajo las estrellas.",
            /* SUPERB    */ "Nos seguiste hasta aqui!"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &scene_night_walk_2,
        /* Level Name    */ "Paseo Nocturno 2",
        /* Level Desc.   */ "Hora de saltar de nuevo\n"
                            "bajo las estrellas!\n"
                            "Pero ten cuidado con\n"
                            "los peces electricos!",
        /* Level Icon    */ 41,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No! Me cai!",
            /* OK        */ "La brisa nocturna es tan refrescante...",
            /* SUPERB    */ "Te hiciste amigo de las estrellas!"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers,
        /* Level Name    */ "Pinzas Ritmicas",
        /* Level Desc.   */ "\n"
                            "Se me ven mis raices!\n"
                            "Podrias arrancarlas?\n",
        /* Level Icon    */ 14,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No puedo vender esto!",
            /* OK        */ "P-porque a mis vegetales les salen pelos!?",
            /* SUPERB    */ "Que fresco y limpio! Hasta el aire es delicioso!"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_2,
        /* Level Name    */ "Pinzas Ritmicas 2",
        /* Level Desc.   */ "Mis raices volvieron\n"
                            "a crecer!\n"
                            "Porfavor, arrancalas\n"
                            "de nuevo!",
        /* Level Icon    */ 25,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Porque tienes que ser tan peludo!?",
            /* OK        */ "Porque solo nuestros vegetales tienen pelo...?",
            /* SUPERB    */ "Que refrescante! Hasta el aire esta fresco!"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &scene_sick_beats,
        /* Level Name    */ "Ritmo Contagioso",
        /* Level Desc.   */ "\0023" "Nota del asistente:\n"
                            "\"Ha surgido un brote\n"
                            "de un virus desconocido!\n"
                            "Ayuda, Dr. Tenedorcio!\"",
        /* Level Icon    */ 13,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Toda nuestra busqueda... para nada...",
            /* OK        */ "El fracaso puede ser el camino al exito!",
            /* SUPERB    */ "Finalmente encontramos la cura!"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &scene_bouncy_road,
        /* Level Name    */ "Bolas Saltarinas",
        /* Level Desc.   */ "Ves esa bolita saltando\n"
                            "por el camino?\n"
                            "No dejaras que se\n"
							"caiga... Verdad?",
        /* Level Icon    */ 12,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ow! Que complicado...",
            /* OK        */ "Buen combo!",
            /* SUPERB    */ "Y donde esta el reto?~"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &scene_bouncy_road_2,
        /* Level Name    */ "Bolas Saltarinas 2",
        /* Level Desc.   */ "Ves esa bolita saltando\n"
                            "por el camino?\n"
                            "Es una bola tan linda,\n"
                            "asi que no la dejes caer!",
        /* Level Icon    */ 50,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ow! Hemos fallado!",
            /* OK        */ "Estamos dandolo todo!",
            /* SUPERB    */ "Facil viene, facil se va~"
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &scene_ninja_bodyguard,
        /* Level Name    */ "Guardia Ninja",
        /* Level Desc.   */ "Los enemigos estan\n"
                            "atacando a tu noble!\n"
                            "Usa la áO y la áM\n"
							"para bloquear!",
        /* Level Icon    */ 5,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Mi noble se desmayo! Nooooo!",
            /* OK        */ "No puedo parar de disculparme, mi noble!",
            /* SUPERB    */ "Ni una herida!"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &scene_ninja_reincarnate,
        /* Level Name    */ "Descendiente Ninja",
        /* Level Desc.   */ "Sabes, mis ancestros\n"
                            "vienen de un gran\n"
                            "linaje de ninjas.\n"
                            "A que no es genial?",
        /* Level Icon    */ 38,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No te rindas! Contamos contigo!",
            /* OK        */ "Eres... muy fuerte. No te rindas aun!",
            /* SUPERB    */ "Demostraste tu valia! Tienes nuestra bendicion..."
        }
    },
    /* SNEAKY_SPIRITS */ {
        /* Entry Scene   */ &scene_sneaky_spirits,
        /* Level Name    */ "Fantasmas Burlones",
        /* Level Desc.   */ "Estos fantasmas no son\n"
                            "malvados, pero si son\n"
                            "MUY molestos; se reiran\n"
                            "de ti si no les das.",
        /* Level Icon    */ 1,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Estos fantasmas no dan mas que problemas.",
            /* OK        */ "Este no se ira a ninguna parte!",
            /* SUPERB    */ "Ningun fantasma se me escapa!"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &scene_sneaky_spirits_2,
        /* Level Name    */ "Fantasmas Burlones 2",
        /* Level Desc.   */ "Los fantasmas de nuevo\n"
                            "vinieron a molestar!\n"
                            "Aggh!\n"
                            "Alista el arco!",
        /* Level Icon    */ 53,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Agh! Pasaron justo delante tuyo!",
            /* OK        */ "\"D-dejame ir, por favor!\"",
            /* SUPERB    */ "Estaran aqui esta que piensen en lo que hicieron!"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &scene_samurai_slice,
        /* Level Name    */ "Samurai Rebanador",
        /* Level Desc.   */ "Demonios han puesto\n"
                            "el pueblo en panico!\n"
                            "Vamos samurai,\n"
                            "rebanalos a todos!",
        /* Level Icon    */ 18,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Se rompio mi katana!",
            /* OK        */ "Tengo que dar aun mas de mi!",
            /* SUPERB    */ "Habias visto una espada asi de afilada?"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball,
        /* Level Name    */ "Beisbol Espacial",
        /* Level Desc.   */ "Ignora los zooms de\n"
                            "la camara! Haz la\n"
                            "pelota volar! Sin llorar!\n"
                            "Ni parpadear!",
        /* Level Icon    */ 9,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Me devuelves la pelota? Te doy mi bola de arroz...",
            /* OK        */ "Debo... entrenar... mas...",
            /* SUPERB    */ "No hay \"espacio\" para el fracaso!"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &scene_spaceball_2,
        /* Level Name    */ "Beisbol Espacial 2",
        /* Level Desc.   */ "Ignora los zooms de\n"
                            "la camara! Cree en ti\n"
                            "y manda la pelota a\n"
                            "volar por el espacio!",
        /* Level Icon    */ 52,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Para la proxima, tira la pelota a otro lado!",
            /* OK        */ "No me puedo rendir ahora!",
            /* SUPERB    */ "Chicos, chicos! Miren lo que gane!"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &scene_tap_trial,
        /* Level Name    */ "Prueba de ClaquáQ",
        /* Level Desc.   */ "Tu eres la chica.\n"
                            "Ellos son los monos.\n"
                            "Sigue el ritmo para\n"
                            "llegar al estrellato!",
        /* Level Icon    */ 6,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Que ridiculo!",
            /* OK        */ "CASI al nivel de los monos...",
            /* SUPERB    */ "El claque tambien te ama, Jirafa~"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &scene_tap_trial_2,
        /* Level Name    */ "Prueba de ClaquáQ 2",
        /* Level Desc.   */ "Los monos vienen\n"
                            "con todo! Podras seguir\n"
                            "su ritmo? No dejes que\n"
                            "te superen el claque!",
        /* Level Icon    */ 11,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Parece que clanqueamos MUY fuerte!",
            /* OK        */ "Oye... Y nuestro ritmo donde se fue?",
            /* SUPERB    */ "Los monos son clave para claquear como un dios!"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders,
        /* Level Name    */ "Marcha Animosa",
        /* Level Desc.   */ "Listos, marchen! Sigue\n"
                            "las ordenes en equipo\n"
                            "y fortalece la union!\n"
							"Y claro, el ritmo.",
        /* Level Icon    */ 21,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Espere! Se fue sin nosotros!",
            /* OK        */ "Mision de hoy: Limpiar. ",
            /* SUPERB    */ "Mision lograda! Hemos rescatado al alien!"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &scene_marching_orders_2,
        /* Level Name    */ "Marcha Animosa 2",
        /* Level Desc.   */ "Listos, marchen!\n"
                            "Esta mision requiere\n"
                            "finura y tecnica,\n"
                            "asi que marcha bien!",
        /* Level Icon    */ 20,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Esto es inaceptable...",
            /* OK        */ "Se que podemos hacerlo mejor!",
            /* SUPERB    */ "Ahora ESTO es una recompensa!"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &scene_wizards_waltz,
        /* Level Name    */ "Vals Magico",
        /* Level Desc.   */ "Hay una chica solitaria\n"
                            "por ahi. Usa tu magia\n"
                            "para el bien, y haz que\n"
                            "mejore su animo!",
        /* Level Icon    */ 23,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "... Tengo miedo!",
            /* OK        */ "Se veran tan lindas cuando florescan!",
            /* SUPERB    */ "Quien se sentiria solo con todas estas flores?"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &scene_bunny_hop,
        /* Level Name    */ "Conejito Saltarin",
        /* Level Desc.   */ "Este conejo tiene un\n"
                            "deseo imposible: Saltar\n"
                            "hasta la luna! Lograras\n"
                            "cumplir su deseo?",
        /* Level Icon    */ 24,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Creo que no pense esto criticamente...",
            /* OK        */ "Debo de practicar el aterrizaje...",
            /* SUPERB    */ "Aterrizaje perfecto! Quien necesita cohetes?!"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &scene_fireworks,
        /* Level Name    */ "Pirotecnia",
        /* Level Desc.   */ "No es verano sin\n"
                            "fuegos artificiales!\n"
                            "Enciendelos para llenar\n"
                            "el cielo de colores!",
        /* Level Icon    */ 26,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Cof, cof... Creo que me apresure...",
            /* OK        */ "Eso no estuvo tan mal!",
            /* SUPERB    */ "Soy el rey de los fuegos artificiales!"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "Poder Caligrafico",
        /* Level Desc.   */ "La caligrafia japonesa\n"
                            "requiere gracia, finura,\n"
                            "y raramente, buena\n"
                            "fuerza de brazos.",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Mejor me quedo con los lapices...",
            /* OK        */ "Precision! Gracia! Que mas me falta?",
            /* SUPERB    */ "Yay! Fiesta de caligrafia!"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "",
        /* Level Desc.   */ "\n"
                            "\n"
                            "\n"
                            "",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_calligraphy_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "",
            /* OK        */ "",
            /* SUPERB    */ ""
        }
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &scene_toss_boys,
        /* Level Name    */ "Ases del Volley",
        /* Level Desc.   */ "Este trio de amigos ama\n"
                            "practicar sus tajadas.\n"
                            "Escucha sus nombres,\n"
                            "mientras tajan!",
        /* Level Icon    */ 30,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Hemos sido tajados!",
            /* OK        */ "A la proxima, tajaremos como nadie!",
            /* SUPERB    */ "Campeonato Mundial de Tajadas, Allác vamos!"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &scene_toss_boys_2,
        /* Level Name    */ "Ases del Volley 2",
        /* Level Desc.   */ "Este trio de amigos ama\n"
                            "practicar sus tajadas.\n"
                            "Y justo hoy estan\n"
                            "dandolo todo!",
        /* Level Icon    */ 29,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nuestros espiritus han sido derrotados...",
            /* OK        */ "Aun nos queda un largo camino!",
            /* SUPERB    */ "Tres hurras para nuestros tajadores estrella!"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &scene_rat_race,
        /* Level Name    */ "Ratones Escurridizos",
        /* Level Desc.   */ "Eres un raton. Ella es\n"
                            "un gato. Amas el queso.\n"
                            "Todos los ingredientes\n"
                            "para una presecucion.",
        /* Level Icon    */ 31,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Osea, supongo que podemos comer el plato...",
            /* OK        */ "Sabes, Me gusta el queso. Pero asi, BASTANTE.",
            /* SUPERB    */ "Con todos juntos es aun mejor!"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &scene_tram_pauline,
        /* Level Name    */ "Tram & Paulin",
        /* Level Desc.   */ "Acerquense todos!\n"
                            "El show acrobatico\n"
                            "de Tram y Paulin\n"
							"esta por comenzar!",
        /* Level Icon    */ 32,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Hemos transformado el show en un fracaso...!",
            /* OK        */ "Al menos arrinamos la mitad del show...",
            /* SUPERB    */ "Somos el duo perfecto!"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &scene_showtime,
        /* Level Name    */ "Pingà®inos Saltarines",
        /* Level Desc.   */ "Nuestros valientes\n"
                            "pingà®inos estan listos!\n"
                            "Salgan e impresionen\n"
                            "a la audiencia!",
        /* Level Icon    */ 36,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Decepcionamos a la audiencia...",
            /* OK        */ "Nosotros podemos dar mas que esto...!",
            /* SUPERB    */ "La audiencia nos amo!"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &scene_space_dance,
        /* Level Name    */ "Baile Espacial",
        /* Level Desc.   */ "Asi que quieres un\n"
                            "reto? Intenta bailar\n"
                            "en gravedad cero!\n"
							"EN EL ESPACIOOOOO!",
        /* Level Icon    */ 40,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu desesperacion nos llevo a un agujero negro!",
            /* OK        */ "Tenemos que llegar hasta las estrellas!",
            /* SUPERB    */ "Somos las estrellas super espaciales!"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &scene_cosmic_dance,
        /* Level Name    */ "Baile Cosmico",
        /* Level Desc.   */ "Estos dechados del\n"
                            "baile han perfeccionado\n"
                            "sus movimientos,\n"
                            "y se quieren lucir!",
        /* Level Icon    */ 16,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No podemos presentarnos ASI!",
            /* OK        */ "Es lo mejor que pueden hacer?",
            /* SUPERB    */ "Somos las estrellas super cosmicas!"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &scene_rap_men,
        /* Level Name    */ "Rapdicales",
        /* Level Desc.   */ "El duo mas radical\n"
                            "a llegado! Sus\n"
                            "hablidades raperas\n"
                            "son para hablar!",
        /* Level Icon    */ 42,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Necesitamos mas practica...",
            /* OK        */ "Como que su tono estaba raro.",
            /* SUPERB    */ "Esperamos oir mas de ustedes otra vez!"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &scene_rap_women,
        /* Level Name    */ "Rapnificas",
        /* Level Desc.   */ "Los Rapdicales\n"
                            "tienen rivales!\n"
                            "No caigas ante\n"
                            "sus lindas voces!",
        /* Level Icon    */ 15,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No... Esto no puede estar bien.",
            /* OK        */ "Se que podemos rapear mejor que esto!",
            /* SUPERB    */ "Si, si, SI! Lo tenemos!"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &scene_quiz_show,
        /* Level Name    */ "Trivia Ritmica",
        /* Level Desc.   */ "Juega una trivia donde\n"
                            "hay que copiar un\n"
                            "patron. Simple, no?\n"
                            "Simple, pero no facil.",
        /* Level Icon    */ 43,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Puedo hacerlo mejor... Puedo hacerlo mejor...",
            /* OK        */ "Tengo que estudiar... para la proxima... Zzz...",
            /* SUPERB    */ "Gane el premio! Un viaje por el mundo!"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &scene_bon_odori,
        /* Level Name    */ "Bon Åô Odori",
        /* Level Desc.   */ "Celebremos el Festival\n"
                            "Japones Bon!\n"
                            "Aplaude mientras\n"
                            "cantan su cancion!",
        /* Level Icon    */ 35,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tengo tanto frio...",
            /* OK        */ "Oh... El leve siseo de una bengala...",
            /* SUPERB    */ "Fue muy divertido! No puedo esperar para la proxima!"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &scene_bon_dance,
        /* Level Name    */ "Bon Åô Dance",
        /* Level Desc.   */ "El festival bon tiene\n"
                            "un nuevo estilo moderno!\n"
                            "Aplaude junto con esta\n"
                            "nueva cancion!",
        /* Level Icon    */ 17,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Eso estuvo horrible...",
            /* OK        */ "Cuando se puso a llover?",
            /* SUPERB    */ "Nuestro nuevo bon dance es tan divertido!"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1,
        /* Level Name    */ "Remix 1",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Hemos mezclado todos\n"
                            "los juegos del primer\n"
                            "nivel! Podras pasarlo?",
        /* Level Icon    */ 22,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu destreza fue como... Un premio para gato.",
            /* OK        */ "Tu destreza fue como... Un desayuno promedio.",
            /* SUPERB    */ "Tu destreza fue como... Una deliciosa cena!"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &scene_remix_2,
        /* Level Name    */ "Remix 2",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Este tiene una animada\n"
                            "atmosfera, perfecta\n"
                            "para lecciones de baile!",
        /* Level Icon    */ 27,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Eso estuvo animado como... Jugar a la pelota solo.",
            /* OK        */ "Eso estuvo animado como... Un buen juego de atrapar.",
            /* SUPERB    */ "Eso estuvo animado como... Un toreno de beisball!"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &scene_remix_3,
        /* Level Name    */ "Remix 3",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Este tiene una adorable\n"
                            "cancion de amor, con\n"
                            "una adorable letra!",
        /* Level Icon    */ 33,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Su amor termino... En la friendzone...",
            /* OK        */ "Su amor termino... Siendo buenos amigos.",
            /* SUPERB    */ "Su amor termino... En un lindo matrimonio!"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &scene_remix_4,
        /* Level Name    */ "Remix 4",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Este tiene una calmada,\n"
                            "y relajada vibra, como\n"
                            "un relajante paseo...",
        /* Level Icon    */ 34,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "El clima de hoy... Lloviendo a cantaros.",
            /* OK        */ "El clima de hoy... Bastante nublando.",
            /* SUPERB    */ "El clima de hoy... Totalmente despejado!"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &scene_remix_5,
        /* Level Name    */ "Remix 5",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Este tiene una\n"
                            "cancion melancolica.\n"
                            "Mantente fresco!",
        /* Level Icon    */ 39,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Esta pareja... Esta en problemas!",
            /* OK        */ "Esta pareja... Esta un poco nerviosa...",
            /* SUPERB    */ "Esta pareja... Vivira felices por siempre!"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &scene_remix_6,
        /* Level Name    */ "Remix 6",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Todos los juegos que\n"
                            "has jugado estan aqui\n"
                            "demuestra tu ritmo!",
        /* Level Icon    */ 2,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu pecera... Esta bastante escasa.",
            /* OK        */ "Tu pecera... Es bastante unica!",
            /* SUPERB    */ "Tu pecera... Es increible!"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &scene_remix_7,
        /* Level Name    */ "Remix 7",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Varios remixes han\n"
                            "vuelto aqui!\n"
                            "Es un remix de remixes!",
        /* Level Icon    */ 19,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "La visita jurasica... Fue tenebrosa!",
            /* OK        */ "La visita jurasica... Fue muy aburrida.",
            /* SUPERB    */ "La visita jurasica... Fue muy divertida!"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &scene_remix_8,
        /* Level Name    */ "Remix 8",
        /* Level Desc.   */ "Veamos tu habilidad!\n"
                            "Este remix si que es\n"
                            "desafio de verdad!\n"
                            "Muestra lo aprendido!",
        /* Level Icon    */ 37,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu paseo estuvo... Oh dios...",
            /* OK        */ "Tu paseo estuvo... Un poco cansador.",
            /* SUPERB    */ "Tu paseo estuvo... Absolutamente espectacular!"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &scene_cafe,
        /* Level Name    */ "Cafeteráea",
        /* Level Desc.   */ "Como has estado?\n"
                            "Si algo te molesta\n"
                            "sientete libre de\n"
                            "venir a hablar.",
        /* Level Icon    */ 45,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_cafe_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* RHYTHM_TOYS */ {
        /* Entry Scene   */ &scene_toys_menu,
        /* Level Name    */ "Juguetes Ritmicos",
        /* Level Desc.   */ "Colecta medallas\n"
                            "para jugar con\n"
                            "juguetes ritmicos!\n"
                            "Checalos!",
        /* Level Icon    */ 46,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_toys_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* ENDLESS_GAMES */ {
        /* Entry Scene   */ &scene_endless_menu,
        /* Level Name    */ "Juegos Infinitos",
        /* Level Desc.   */ "Colecta medallas\n"
                            "y desbloquea\n"
                            "juegos infinitos!\n"
                            "Checalos!",
        /* Level Icon    */ 47,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_endless_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* DRUM_LESSONS */ {
        /* Entry Scene   */ &scene_lessons_menu,
        /* Level Name    */ "Lecciones de tambor",
        /* Level Desc.   */ "Colecta medallas y\n"
                            "toma lecciones de\n"
                            "tambor. Y asi te\n"
                            "volveras un maestro!",
        /* Level Icon    */ 48,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_lessons_menu_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* STAFF_CREDIT */ {
        /* Entry Scene   */ &scene_staff_credit,
        /* Level Name    */ "Creditos del Staff",
        /* Level Desc.   */ "Aqui esta el staff\n"
                            "que ayudo a desarollar\n"
                            "este juego. Sientete\n"
                            "libre de verlos!",
        /* Level Icon    */ 49,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_staff_credit_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ NULL,
            /* OK        */ NULL,
            /* SUPERB    */ NULL
        }
    },
    /* LIVE_MENU */ {
        /* Entry Scene   */ &scene_drum_live,
        /* Level Name    */ "Concierto",
        /* Level Desc.   */ "Auspiciamos un\n"
                            "concierto! Tienes\n"
                            "buen ritmo, no?\n"
                            "Anda, intentalo!",
        /* Level Icon    */ 44,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_drum_live_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "El de la limpieza dice... \"Se que puedes hacerlo mejor!\"",
            /* OK        */ "El gerente dice... \"Tienes un buena hablidad, lo sabes!\"",
            /* SUPERB    */ "El productor dice... \"Deberias tocar en nuestro local!\""
        }
    }
};
