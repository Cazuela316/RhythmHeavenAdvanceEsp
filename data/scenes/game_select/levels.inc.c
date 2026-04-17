// Level Entries Table
struct LevelData level_data_table[] = {
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man,
        /* Level Name    */ "Karate Killo",
        /* Level Desc.   */ "La clave del karate,\n"
                            "como en la vida, es ritmo.\n"
                            "Como sea, àøgolpea las\n"
                            "cosas que te lanzemos!",
        /* Level Icon    */ 8,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Hay un futuro por delante...",
            /* OK        */ "Mejor descansemos para almorzar~",
            /* SUPERB    */ "àøAprecien todo lo que golpeáQ!"
        }
    },
    /* KARATE_MAN_2 */ {
        /* Entry Scene   */ &scene_karate_man_2,
        /* Level Name    */ "Karate Killo 2",
        /* Level Desc.   */ "àøAlgo le pasa a la\n"
                            "velocidad! Mantente\n"
                            "alerta, àømientras te\n"
                            "lanzamos mács cosas!",
        /* Level Icon    */ 0,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àæàøCual es el punto de esos horribles cambios de ritmo!?",
            /* OK        */ "Bah, como sea. àøA comer!",
            /* SUPERB    */ "àøYa soy todo un experto rompe macetas!"
        }
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio,
        /* Level Name    */ "Tráeo saleroso",
        /* Level Desc.   */ "àøAplaudan en orden!\n"
                            "Eres el tercero.\n"
                            "àøAsáe que estate atento\n"
							"a los otros dos!",
        /* Level Icon    */ 4,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøEl trio ahora es un solo!",
            /* OK        */ "Necesitas llegar mas a nuestros ensayos...",
            /* SUPERB    */ "àøTráas bien!"
        }
    },
    /* SNAPPY_TRIO */ {
        /* Entry Scene   */ &scene_snappy_trio,
        /* Level Name    */ "Tráeo garboso",
        /* Level Desc.   */ "Mira al trio en sus\n"
                            "trajes del Oeste.\n"
                            "àøVan tan divinos! Lucen\n"
                            "muy... àægarbosos?",
        /* Level Icon    */ 10,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_snappy_trio_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøGaste todo lo que tenia en este conjunto!",
            /* OK        */ "Estabamos tan cerca...",
            /* SUPERB    */ "àøQuáQ ráetmo! àæDebe de ser el conjunto, verdad?"
        }
    },
    /* POLYRHYTHM */ {
        /* Entry Scene   */ &scene_polyrhythm,
        /* Level Name    */ "Polirritmo",
        /* Level Desc.   */ "àøManeja los caminos\n"
							"áO y áM para que las\n"
							"cosas rojas rueden!\n"
							"Sencillo, àæno?",
        /* Level Icon    */ 3,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Producir estas cosas en masa es bastante dificil...",
            /* OK        */ "àøYa le estoy agarrando la mano a estas cosas rojas!",
            /* SUPERB    */ "àøHemos producido mács de lo que podemos reponer!"
        }
    },
    /* POLYRHYTHM_2 */ {
        /* Entry Scene   */ &scene_polyrhythm_2,
        /* Level Name    */ "Polirritmo 2",
        /* Level Desc.   */ "àøLos caminos áO y áM\n"
                            "tienen patrones raros!\n"
                            "àøConcáQntrate y juega\n"
                            "al polirritmo!",
        /* Level Icon    */ 51,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_polyrhythm_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Necesitamos producir muchas mas cosas rojas...",
            /* OK        */ "àøProducir mas cosas rojas no hara mal!",
            /* SUPERB    */ "àøLa producciáin de cosas rojas estác que arde!"
        }
    },
    /* NIGHT_WALK */ {
        /* Entry Scene   */ &scene_night_walk,
        /* Level Name    */ "Paseo Nocturno",
        /* Level Desc.   */ "àæQuáQ mejor que pasear\n"
                            "bajo las estrellas?\n"
                            "àøPues obvio! àøSaltar\n"
                            "bajo las estrellas!",
        /* Level Icon    */ 7,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøNo vi ese hoyo en la oscuridad!",
            /* OK        */ "Nada como un paseo bajo las estrellas.",
            /* SUPERB    */ "àøNos seguiste hasta aquáe!"
        }
    },
    /* NIGHT_WALK_2 */ {
        /* Entry Scene   */ &scene_night_walk_2,
        /* Level Name    */ "Paseo Nocturno 2",
        /* Level Desc.   */ "àøHora de saltar\n"
                            "bajo las estrellas!\n"
                            "àøPero cuidado con\n"
                            "los peces eláQctricos!",
        /* Level Icon    */ 41,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_night_walk_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøNo! àøMe caáe!",
            /* OK        */ "La brisa nocturna es tan refrescante...",
            /* SUPERB    */ "àøTe hiciste amigo de las estrellas!"
        }
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers,
        /* Level Name    */ "Pinzas Ráetmicas",
        /* Level Desc.   */ "\n"
                            "àøSe me ven mis raices!\n"
                            "àæPodrias arrancarlas?\n",
        /* Level Icon    */ 14,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøNo puedo vender esto!",
            /* OK        */ "àæàøP-por quáQ a mis vegetales les salen pelos!?",
            /* SUPERB    */ "àøQue fresco y limpio! àøHasta el aire es delicioso!"
        }
    },
    /* RHYTHM_TWEEZERS_2 */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_2,
        /* Level Name    */ "Pinzas Ráetmicas 2",
        /* Level Desc.   */ "àøMis raáeces volvieron\n"
                            "a crecer!\n"
                            "àøPor favor, arrácncalas\n"
                            "de nuevo!",
        /* Level Icon    */ 25,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àæàøPor quáQ tienes que ser tan peludo!?",
            /* OK        */ "àæPor quáQ solo nuestros vegetales tienen pelo...?",
            /* SUPERB    */ "àøQue refrescante! àøHasta el aire esta fresco!"
        }
    },
    /* SICK_BEATS */ {
        /* Entry Scene   */ &scene_sick_beats,
        /* Level Name    */ "Ritmo Contagioso",
        /* Level Desc.   */ "\0023" "Nota del asistente:\n"
                            "\"àøHa surgido un brote de\n"
                            "un virus desconocido!\n"
                            "àøSOS, Dr. Tenedorcio!\"",
        /* Level Icon    */ 13,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sick_beats_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Toda nuestra busqueda... para nada...",
            /* OK        */ "El fracaso puede ser el camino al exito!",
            /* SUPERB    */ "àøFinalmente encontramos la cura!"
        }
    },
    /* BOUNCY_ROAD */ {
        /* Entry Scene   */ &scene_bouncy_road,
        /* Level Name    */ "Bolas Saltarinas",
        /* Level Desc.   */ "àæVes esa bolita\n"
                            "saltando por el camino?\n"
                            "No dejarács que se\n"
							"caiga... àæverdad?",
        /* Level Icon    */ 12,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøOw! Que complicado...",
            /* OK        */ "àøBuen combo!",
            /* SUPERB    */ "àæY donde esta el reto?~"
        }
    },
    /* BOUNCY_ROAD_2 */ {
        /* Entry Scene   */ &scene_bouncy_road_2,
        /* Level Name    */ "Bolas Saltarinas 2",
        /* Level Desc.   */ "àæVes esa bolita\n"
                            "saltando por el camino?\n"
                            "Es muy linda, àøasi\n"
                            "que no la dejes caer!",
        /* Level Icon    */ 50,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bouncy_road_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøOw! àøHemos fallado!",
            /* OK        */ "àøEstamos dácndolo todo!",
            /* SUPERB    */ "Facil viene, facil se va~"
        }
    },
    /* NINJA_BODYGUARD */ {
        /* Entry Scene   */ &scene_ninja_bodyguard,
        /* Level Name    */ "Guardia Ninja",
        /* Level Desc.   */ "àøLos enemigos estácn\n"
                            "atacando a tu noble!\n"
                            "àøUsa la áO y la áM\n"
							"para bloquear!",
        /* Level Icon    */ 5,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_bodyguard_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøMi noble se desmayo! àøNooooo!",
            /* OK        */ "No puedo parar de disculparme, àømi noble!",
            /* SUPERB    */ "àøNi una herida!"
        }
    },
    /* NINJA_REINCARNATE */ {
        /* Entry Scene   */ &scene_ninja_reincarnate,
        /* Level Name    */ "Descendiente Ninja",
        /* Level Desc.   */ "Sabes, mis ancestros\n"
                            "vienen de un gran\n"
                            "linaje de ninjas.\n"
                            "àæA que es genial?",
        /* Level Icon    */ 38,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_ninja_reincarnate_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøNo te rindas! àøContamos contigo!",
            /* OK        */ "Eres... muy fuerte. àøNo te rindas aun!",
            /* SUPERB    */ "àøDemostraste tu valia! Tienes nuestra bendicion..."
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
            /* OK        */ "àøEste no se ira a ninguna parte!",
            /* SUPERB    */ "àøNingun fantasma se me escapa!"
        }
    },
    /* SNEAKY_SPIRITS_2 */ {
        /* Entry Scene   */ &scene_sneaky_spirits_2,
        /* Level Name    */ "Fantasmas Burlones 2",
        /* Level Desc.   */ "àøLos fantasmas vinieron\n"
                            "a molestar de nuevo!\n"
                            "àøAlista el arco!",
        /* Level Icon    */ 53,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_sneaky_spirits_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøAgh! àøPasaron justo delante tuyo!",
            /* OK        */ "\"àøD-dejame ir, por favor!\"",
            /* SUPERB    */ "àøEstarácn aqui hasta que piensen en lo que hicieron!"
        }
    },
    /* SAMURAI_SLICE */ {
        /* Entry Scene   */ &scene_samurai_slice,
        /* Level Name    */ "Samuráci Rebanador",
        /* Level Desc.   */ "àøLos demonios dejaron\n"
                            "el pueblo en panico!\n"
                            "Vamos samuráci,\n"
                            "àørebácnalos a todos!",
        /* Level Icon    */ 18,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_samurai_slice_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøSe rompio mi katana!",
            /* OK        */ "àøTengo que dar aun mas de mi!",
            /* SUPERB    */ "àæHabias visto una espada asi de afilada?"
        }
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball,
        /* Level Name    */ "Spacebáil",
        /* Level Desc.   */ "àøIgnora los zooms de\n"
                            "la cácmara! àøHaz la\n"
                            "pelota volar! àøSin llorar!\n"
                            "àøNi parpadear!",
        /* Level Icon    */ 9,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àæMe devuelves la pelota? Te doy mi bola de arroz...",
            /* OK        */ "Debo... entrenar... mas...",
            /* SUPERB    */ "àøNo hay \"espacio\" para el fracaso!"
        }
    },
    /* SPACEBALL_2 */ {
        /* Entry Scene   */ &scene_spaceball_2,
        /* Level Name    */ "Spacebáil 2",
        /* Level Desc.   */ "àøIgnora los zooms de\n"
                            "la camara! àøCree en ti\n"
                            "y manda la pelota a\n"
                            "volar por el espacio!",
        /* Level Icon    */ 52,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Para la proxima, àøtira la pelota a otro lado!",
            /* OK        */ "àøNo me puedo rendir ahora!",
            /* SUPERB    */ "àøChicos, chicos! àøMiren lo que gane!"
        }
    },
    /* TAP_TRIAL */ {
        /* Entry Scene   */ &scene_tap_trial,
        /* Level Name    */ "Prueba de ClaquáQ",
        /* Level Desc.   */ "Tà¶ eres la chica.\n"
                            "Ellos son los monos.\n"
                            "àøSigue el ritmo para\n"
                            "llegar al estrellato!",
        /* Level Icon    */ 6,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøQue ridiculo!",
            /* OK        */ "CASI al nivel de los monos...",
            /* SUPERB    */ "El claquáQ tambiáQn te ama, Jirafa~"
        }
    },
    /* TAP_TRIAL_2 */ {
        /* Entry Scene   */ &scene_tap_trial_2,
        /* Level Name    */ "Prueba de ClaquáQ 2",
        /* Level Desc.   */ "àøLos monos vienen con\n"
                            "todo! àæPodrács seguir\n"
                            "su ritmo? àøNo dejes que\n"
                            "te superen en claquáQ!",
        /* Level Icon    */ 11,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tap_trial_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøParece que clanqueamos MUY fuerte!",
            /* OK        */ "Oye... àæY nuestro ritmo donde se fue?",
            /* SUPERB    */ "àøLos monos son clave para el claquáQ!"
        }
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders,
        /* Level Name    */ "Marcha Animosa",
        /* Level Desc.   */ "àøListos, marchen! àøSigue\n"
                            "las ordenes en equipo\n"
                            "y fortalece la union!\n"
							"Y claro, el ritmo.",
        /* Level Icon    */ 21,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøEspere! àøSe fue sin nosotros!",
            /* OK        */ "Mision de hoy: Limpiar. ",
            /* SUPERB    */ "àøMision lograda! àøHemos rescatado al alien!"
        }
    },
    /* MARCHING_ORDERS_2 */ {
        /* Entry Scene   */ &scene_marching_orders_2,
        /* Level Name    */ "Marcha Animosa 2",
        /* Level Desc.   */ "àøListos, marchen!\n"
                            "àøEsta misiáin requiere\n"
                            "mucha táQcnica,\n"
                            "asáe que marchen bien!",
        /* Level Icon    */ 20,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Esto es inaceptable...",
            /* OK        */ "àøSáQ que podemos hacerlo mejor!",
            /* SUPERB    */ "àøAhora ESTO es una recompensa!"
        }
    },
    /* WIZARDS_WALTZ */ {
        /* Entry Scene   */ &scene_wizards_waltz,
        /* Level Name    */ "Vals Mácgico",
        /* Level Desc.   */ "Tenemos aqui una chica\n"
                            "solitaria. àøUsa tu magia\n"
                            "para el bien, y haz que\n"
                            "mejore su animái!",
        /* Level Icon    */ 23,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_wizards_waltz_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "... àøTengo miedo!",
            /* OK        */ "àøSe veran tan lindas cuando florescan!",
            /* SUPERB    */ "àæQuiáQn se sentiria sola con todas estas flores?"
        }
    },
    /* BUNNY_HOP */ {
        /* Entry Scene   */ &scene_bunny_hop,
        /* Level Name    */ "Conejo Saltaráen",
        /* Level Desc.   */ "Este conejo tiene un\n"
                            "deseo imposible: àøsaltar\n"
                            "hasta la luna! àæPodrács\n"
                            "cumplir su deseo?",
        /* Level Icon    */ 24,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bunny_hop_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Creo que no pense esto criticamente...",
            /* OK        */ "Debo de practicar el aterrizaje...",
            /* SUPERB    */ "àøAterrizaje perfecto! àøàæQuiáQn necesita cohetes?!"
        }
    },
    /* FIREWORKS */ {
        /* Entry Scene   */ &scene_fireworks,
        /* Level Name    */ "Pirotecnia",
        /* Level Desc.   */ "àøNo es verano sin\n"
                            "fuegos artificiales!\n"
                            "àøEnciáQndelos para llenar\n"
                            "el cielo de colores!",
        /* Level Icon    */ 26,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_fireworks_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Cof, cof... Creo que me apresure...",
            /* OK        */ "Eso no estuvo tan mal!",
            /* SUPERB    */ "àøSoy el rey de los fuegos artificiales!"
        }
    },
    /* POWER_CALLIGRAPHY */ {
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "Poder Caligrácfico",
        /* Level Desc.   */ "La caláegrafia japonesa\n"
                            "requiere gracia, finura,\n"
                            "y sorpendentemente,\n"
                            "unos buenos báeceps.",
        /* Level Icon    */ 28,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_power_power_calligraphy_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Mejor me quedo con los lapices...",
            /* OK        */ "àøPrecision! àøGracia! àæQue mas me falta?",
            /* SUPERB    */ "àøYay! àøFiesta de caligrafia!"
        }
    },
    /* POWER_CALLIGRAPHY_2 */ { // this still kills me lmao
        /* Entry Scene   */ &scene_power_calligraphy,
        /* Level Name    */ "Power Calligraphy 2",
        /* Level Desc.   */ "haha no usado, mako eres una perra\n"
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
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* TOSS_BOYS */ {
        /* Entry Scene   */ &scene_toss_boys,
        /* Level Name    */ "Ases del Váiley",
        /* Level Desc.   */ "Este tráeo de amigos ama\n"
                            "practicar sus tajadas.\n"
                            "àøEscucha sus nombres\n"
                            "mientras tajan!",
        /* Level Icon    */ 30,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøHemos sido tajados!",
            /* OK        */ "A la proxima, àøtajaremos como nadie!",
            /* SUPERB    */ "Campeonato Mundial de Tajadas, àøAllác vamos!"
        }
    },
    /* TOSS_BOYS_2 */ {
        /* Entry Scene   */ &scene_toss_boys_2,
        /* Level Name    */ "Ases del Váiley 2",
        /* Level Desc.   */ "Este trio de amigos ama\n"
                            "practicar sus tajadas.\n"
                            "àøY justo hoy estan\n"
                            "dandolo todo!",
        /* Level Icon    */ 29,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_toss_boys_2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Nuestros espiritus han sido derrotados...",
            /* OK        */ "àøAun nos queda un largo camino!",
            /* SUPERB    */ "àøTres hurras para nuestros tajadores estrella!"
        }
    },
    /* RAT_RACE */ {
        /* Entry Scene   */ &scene_rat_race,
        /* Level Name    */ "Ratones Escurridizos",
        /* Level Desc.   */ "Eres un raton. Ella una\n"
                            "gata. Amas el queso.\n"
                            "La receta perfecta\n"
                            "para una persecucion.",
        /* Level Icon    */ 31,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rat_race_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "O sea, supongo que podemos comer el plato...",
            /* OK        */ "àæSabes? Me encanta el queso. Pero MUCHO.",
            /* SUPERB    */ "àøCon todos juntos es aun mejor!"
        }
    },
    /* TRAM_PAULINE */ {
        /* Entry Scene   */ &scene_tram_pauline,
        /* Level Name    */ "Tram & Pauláen",
        /* Level Desc.   */ "àøAcerquense todos!\n"
                            "àøEl show acrobatico\n"
                            "de Tram y Pauláen\n"
							"esta por comenzar!",
        /* Level Icon    */ 32,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_tram_pauline_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøHemos transformado el show en un fracaso...!",
            /* OK        */ "Al menos arruinamos la mitad del show...",
            /* SUPERB    */ "àøSomos el duo perfecto!"
        }
    },
    /* SHOWTIME */ {
        /* Entry Scene   */ &scene_showtime,
        /* Level Name    */ "Hora del Show",
        /* Level Desc.   */ "àøNuestros valientes\n"
                            "pingà®inos estan listos!\n"
                            "àøSalgan e impresionen\n"
                            "a la audiencia!",
        /* Level Icon    */ 36,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_showtime_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Decepcionamos a la audiencia...",
            /* OK        */ "àøNosotros podemos dar mas que esto...!",
            /* SUPERB    */ "àøLa audiencia nos amo!"
        }
    },
    /* SPACE_DANCE */ {
        /* Entry Scene   */ &scene_space_dance,
        /* Level Name    */ "Baile Astral",
        /* Level Desc.   */ "àæAsi que quieres un\n"
                            "reto? àøIntenta bailar\n"
                            "en gravedad cero!\n"
							"àøEN EL ESPACIOOOOO!",
        /* Level Icon    */ 40,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_space_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøTu desesperacion nos llevo a un agujero negro!",
            /* OK        */ "àøTenemos que llegar hasta las estrellas!",
            /* SUPERB    */ "àøSomos las estrellas super espaciales!"
        }
    },
    /* COSMIC_DANCE */ {
        /* Entry Scene   */ &scene_cosmic_dance,
        /* Level Name    */ "Baile Cáismico",
        /* Level Desc.   */ "Estos dechados del\n"
                            "baile han perfeccionado\n"
                            "sus movimientos,\n"
                            "àøy se quieren lucir!",
        /* Level Icon    */ 16,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_cosmic_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "àøNo podemos presentarnos ASI!",
            /* OK        */ "àæEs lo mejor que pueden hacer?",
            /* SUPERB    */ "àøSomos las estrellas sà¶per cáismicas!"
        }
    },
    /* RAP_MEN */ {
        /* Entry Scene   */ &scene_rap_men,
        /* Level Name    */ "Rapdicales",
        /* Level Desc.   */ "àøEl dà¶o mas radical\n"
                            "ha llegado! àøSus\n"
                            "hablidades raperas\n"
                            "darácn que hablar!",
        /* Level Icon    */ 42,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_men_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Necesitamos mas practica...",
            /* OK        */ "Como que su tono estaba raro.",
            /* SUPERB    */ "àøEsperamos oir mas de ustedes otra vez!"
        }
    },
    /* RAP_WOMEN */ {
        /* Entry Scene   */ &scene_rap_women,
        /* Level Name    */ "Rapnificas",
        /* Level Desc.   */ "àøLos Rapdicales\n"
                            "tienen rivales!\n"
                            "àøNo caigas ante\n"
                            "sus lindas voces!",
        /* Level Icon    */ 15,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rap_women_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "No... Esto no puede estar bien.",
            /* OK        */ "àøSáQ que podemos rapear mejor que esto!",
            /* SUPERB    */ "àøSi, si, SI! àøLo tenemos!"
        }
    },
    /* QUIZ_SHOW */ {
        /* Entry Scene   */ &scene_quiz_show,
        /* Level Name    */ "Trivia Show",
        /* Level Desc.   */ "Juega una trivia donde\n"
                            "hay que copiar un\n"
                            "patron. Simple, àæno?\n"
                            "Simple, pero no facil.",
        /* Level Icon    */ 43,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_quiz_show_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Puedo hacerlo mejor... àøpuedo hacerlo mejor!",
            /* OK        */ "Tengo que estudiar... para la proxima... Zzz...",
            /* SUPERB    */ "àøGane el premio! àøUn viaje por el mundo!"
        }
    },
    /* BON_ODORI */ {
        /* Entry Scene   */ &scene_bon_odori,
        /* Level Name    */ "Bon Åô Odori",
        /* Level Desc.   */ "àøA celebrar el\n"
                            "Festival Bon!\n"
                            "àøAplaude mientras\n"
                            "cantan su cancion!",
        /* Level Icon    */ 35,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_odori_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tengo tanto frio...",
            /* OK        */ "Oh... El leve siseo de una bengala...",
            /* SUPERB    */ "àøFue muy divertido! àøNo puedo esperar para la proxima!"
        }
    },
    /* BON_DANCE */ {
        /* Entry Scene   */ &scene_bon_dance,
        /* Level Name    */ "Bon Åô Dance",
        /* Level Desc.   */ "àøEl Festival Bon tiene\n"
                            "un nuevo estilo moderno!\n"
                            "àøAplaude junto con esta\n"
                            "nueva canciáin!",
        /* Level Icon    */ 17,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_bon_dance_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Eso estuvo horrible...",
            /* OK        */ "àæCuando se puso a llover?",
            /* SUPERB    */ "àøNuestro nuevo bon dance es tan divertido!"
        }
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1,
        /* Level Name    */ "Remix 1",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "àøHemos mezclado todos\n"
                            "los juegos del primer\n"
                            "nivel! àæPodras pasarlo?",
        /* Level Icon    */ 22,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu destreza fue como... un premio para gato.",
            /* OK        */ "Tu destreza fue como... un desayuno promedio.",
            /* SUPERB    */ "Tu destreza fue como... àøuna deliciosa cena!"
        }
    },
    /* REMIX_2 */ {
        /* Entry Scene   */ &scene_remix_2,
        /* Level Name    */ "Remix 2",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "Este tiene una animada\n"
                            "atmosfera, àøperfecta\n"
                            "para lecciones de baile!",
        /* Level Icon    */ 27,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix2_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Eso estuvo animado como... jugar a la pelota solo.",
            /* OK        */ "Eso estuvo animado como... un buen juego de atrapar.",
            /* SUPERB    */ "Eso estuvo animado como... àøun toreno de beisball!"
        }
    },
    /* REMIX_3 */ {
        /* Entry Scene   */ &scene_remix_3,
        /* Level Name    */ "Remix 3",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "Este tiene una adorable\n"
                            "cancion de amor, àøcon\n"
                            "una adorable letra!",
        /* Level Icon    */ 33,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix3_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Su amor terminái... en la friendzone...",
            /* OK        */ "Su amor terminái... siendo buenos amigos.",
            /* SUPERB    */ "Su amor terminái... àøen un lindo matrimonio!"
        }
    },
    /* REMIX_4 */ {
        /* Entry Scene   */ &scene_remix_4,
        /* Level Name    */ "Remix 4",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "Este tiene una calmada,\n"
                            "y relajada vibra, como\n"
                            "un relajante paseo...",
        /* Level Icon    */ 34,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix4_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "El clima de hoy... lloviendo a cantaros.",
            /* OK        */ "El clima de hoy... bastante nublando.",
            /* SUPERB    */ "El clima de hoy... àøtotalmente despejado!"
        }
    },
    /* REMIX_5 */ {
        /* Entry Scene   */ &scene_remix_5,
        /* Level Name    */ "Remix 5",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "àøEste remix tiene una\n"
                            "canciáin melancáilica.\n"
                            "Mantente fresco!",
        /* Level Icon    */ 39,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix5_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Esta pareja... àøestác en problemas!",
            /* OK        */ "Esta pareja... estác un poco nerviosa...",
            /* SUPERB    */ "Esta pareja... àøvivira felices por siempre!"
        }
    },
    /* REMIX_6 */ {
        /* Entry Scene   */ &scene_remix_6,
        /* Level Name    */ "Remix 6",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "àøTodos los juegos que\n"
                            "has jugado estan aquáe,\n"
                            "demuestra tu ritmo!",
        /* Level Icon    */ 2,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix6_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu pecera... esta bastante escasa.",
            /* OK        */ "Tu pecera... àøes bastante unica!",
            /* SUPERB    */ "Tu pecera... àøes increáeble!"
        }
    },
    /* REMIX_7 */ {
        /* Entry Scene   */ &scene_remix_7,
        /* Level Name    */ "Remix 7",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "àøVarios remixes han\n"
                            "vuelto aquáe!\n"
                            "àøEs un remix de remixes!",
        /* Level Icon    */ 19,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix7_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "La visita jurácsica... àøfue tenebrosa!",
            /* OK        */ "La visita jurácsica... fue muy aburrida.",
            /* SUPERB    */ "La visita jurácsica... àøfue muy divertida!"
        }
    },
    /* REMIX_8 */ {
        /* Entry Scene   */ &scene_remix_8,
        /* Level Name    */ "Remix 8",
        /* Level Desc.   */ "àøVeamos tu habilidad!\n"
                            "àøEste remix sáe que es\n"
                            "un desafio de verdad!\n"
                            "àøDemuestra tu flow!",
        /* Level Icon    */ 37,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix8_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Tu paseo estuvo... oh dios...",
            /* OK        */ "Tu paseo estuvo... un poco cansador.",
            /* SUPERB    */ "Tu paseo estuvo... àøabsolutamente espectacular!"
        }
    },
    /* CAFE */ {
        /* Entry Scene   */ &scene_cafe,
        /* Level Name    */ "Cafeteráea",
        /* Level Desc.   */ "àæComo has estado?\n"
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
        /* Level Name    */ "Rit-Juguetes",
        /* Level Desc.   */ "àøColecta medallas\n"
                            "para jugar con\n"
                            "juguetes ritmicos!\n"
                            "àøChecalos!",
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
        /* Level Desc.   */ "àøColecta medallas\n"
                            "y desbloquea\n"
                            "juegos infinitos!\n"
                            "àøChecalos!",
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
        /* Level Name    */ "Toca la Bateráea",
        /* Level Desc.   */ "Colecta medallas y\n"
                            "toma lecciones de\n"
                            "bateráea. àøY asi te\n"
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
        /* Level Desc.   */ "Aquáe estác el staff\n"
                            "que ayudái a desarollar\n"
                            "este juego. àøSiáQntete\n"
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
        /* Level Desc.   */ "àøAuspiciamos un\n"
                            "concierto! àæTienes\n"
                            "buen ritmo, no?\n"
                            "Anda, àøintáQntalo!",
        /* Level Icon    */ 44,
        /* Level Type    */ LEVEL_TYPE_BONUS,
        /* Epilogue GFX  */ epilogue_drum_live_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "El de la limpieza dice... \"àøSe que puedes hacerlo mejor!\"",
            /* OK        */ "El gerente dice... \"Tienes un buena hablidad, àølo sabes!\"",
            /* SUPERB    */ "El productor dice... \"àøDeberias tocar en nuestro local!\""
        }
    },
    /* KARATE_MAN */ {
        /* Entry Scene   */ &scene_karate_man_extra,
        /* Level Name    */ "Karate Killo EX",
        /* Level Desc.   */ "àøSubimos la\n"
                            "velocidad! àøGolpea\n"
                            "sin flaquear de lo\n"
                            "que arrojemos!",
        /* Level Icon    */ 54,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_karate_man_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "The tournament didn't go so well...",
            /* OK        */ "I may not have won, but I did really well!",
            /* SUPERB    */ "I won the tournament and took home the gold"
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* RHYTHM_TWEEZERS */ {
        /* Entry Scene   */ &scene_rhythm_tweezers_extra,
        /* Level Name    */ "Pinzas Ráetmicas EX",
        /* Level Desc.   */ "àøMis raáeces volvieron\n"
                            "a crecer!\n"
                            "àøIgnora la velocidad,\n"
                            "arrácncalas de nuevo!",
        /* Level Icon    */ 55,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_rhythm_tweezers_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "I can't pluck anything at this speed!",
            /* OK        */ "These hairs are pretty tough to pluck.",
            /* SUPERB    */ "Look at those flowers! They're so relaxing..."
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* MARCHING_ORDERS */ {
        /* Entry Scene   */ &scene_marching_orders_extra,
        /* Level Name    */ "Marcha Animosa EX",
        /* Level Desc.   */ "àøListas, marchen!\n"
                            "àøYa no tendráQ piedad!\n"
                            "àøConcáQntrense o\n"
							"quedan fuera!",
        /* Level Icon    */ 56,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_marching_orders_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "MONSTER! Retreat! Retreat!",
            /* OK        */ "Ah, there's the lost puppy!",
            /* SUPERB    */ "We rescued the lost puppy! Hooray!"
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* SPACEBALL */ {
        /* Entry Scene   */ &scene_spaceball_extra,
        /* Level Name    */ "Spacebáil EX",
        /* Level Desc.   */ "àøIgnora los zooms!\n"
                            "àøBatea con fuerza!\n"
                            "àøQue la velocidad\n"
                            "no te supere!",
        /* Level Icon    */ 57,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_spaceball_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Ahhh! Nooooooo!",
            /* OK        */ "Graaaah!",
            /* SUPERB    */ "A home run! I did it!"
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* CLAPPY_TRIO */ {
        /* Entry Scene   */ &scene_clappy_trio_extra,
        /* Level Name    */ "Tráeo saleroso EX",
        /* Level Desc.   */ "àøAplaudan en orden!\n"
                            "Eres el tercero.\n"
                            "àøAtento a tus dos\n"
							"veloces amigos!",
        /* Level Icon    */ 58,
        /* Level Type    */ LEVEL_TYPE_GAME,
        /* Epilogue GFX  */ epilogue_clappy_trio_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "Wait! Don't leave without us!",
            /* OK        */ "This is one nice space cruise!",
            /* SUPERB    */ "I've discovered a new planet! Stellar!"
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    },
    /* REMIX_1 */ {
        /* Entry Scene   */ &scene_remix_1_extra,
        /* Level Name    */ "Remix Extra",
        /* Level Desc.   */ "àøSorpresa!\n"
                            "àøEste remix es tan\n"
                            "rapido que marea!\n"
                            "àæPáidras con áQl?",
        /* Level Icon    */ 59,
        /* Level Type    */ LEVEL_TYPE_REMIX,
        /* Epilogue GFX  */ epilogue_remix1_extra_gfx_tables,
        /* Epilogue Text */ {
            /* TRY_AGAIN */ "This is going to take a while...",
            /* OK        */ "Just a normal chick. Cheep-Cheep!",
            /* SUPERB    */ "You've grown splendidly! You look downright dignified!"
        },
        /* Level Flags   */ LEVEL_DATA_FLAG_IS_EXTRA | LEVEL_DATA_FLAG_NO_PRACTICE
    }
};
