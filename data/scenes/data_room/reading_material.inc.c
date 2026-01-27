// [D_089d7e74] Reading Material Table
struct ReadingMaterial reading_material_table[] = {
    /* WELCOME ("Rhythm Tengoku Welcome") */ {
        /* TITLE ---------------------------------------------------------- */
            "Bienvenida",
        /* BODY ----------------------------------------------------------- */
            "Bienvenido!\n"
            "\n"
            "Muchas gracias por comprar\n"
            #ifdef PARADISE
            "Rhythm Paradise Advance.\n"
            #else
            "Rhythm Heaven Advance.\n"
            #endif
            "Oh... Se lo compraste a un amigo?\n"
            "E-eh y esta... u-usado!?\n"
            "Bueno, como sea. Lo que si, es que estamos muy\n"
            "honorados de que te hayas interesado en este juego.\n"
            "Es un gusto conocerte, y esperamos que este juego\n"
            "te llene de alegria y diversion para todo el resto\n"
            "de la vida!\n"
            "Muchas muchas gracias!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MANUAL ("Handling Instructions") */ {
        /* TITLE ---------------------------------------------------------- */
            "Como jugar el juego",
        /* BODY ----------------------------------------------------------- */
            "Como jugar el juego:\n"
            "\n"
            "Bueno, este juego es bastante simple.\n"
            "Realmente QuáQ puedo decir...?\n"
            "Ah, si, la ideas es que juegues al son de la mà∑sica,\n"
            "asi que intenta sentir el flow. Ese es mi consejo!\n"
            "Y eso es todo. Y por cierto, un placer conocerte!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* CAFE ("More Than a Barista") */ {
        /* TITLE ---------------------------------------------------------- */
            "Del Barista",
        /* BODY ----------------------------------------------------------- */
            "Tengo y opero un CafáQ.\n"
            "Supongo que me puedes llamar el barista.\n"
            "Me esta yendo bien gracias a los clientes.\n"
            "Ah, y para tu informaciáin, soy un perro.\n"
            "Muchos de mis clientes aman la mà¶sica.\n"
            "Algunos de ellos tienen buen ritmo,\n"
            "y un par ha sacado puntajes perfectos!\n"
            "Siempre me asombran!\n"
            "PodráQ verme profesional manejando mi CafáQ,\n"
            "Pero siendo honesto, en realidad estoy fingiendo.\n"
            "Verács, da un poco de vergà®enza, pero luego del\n"
            "trabajo, siempre estoy bailando con estos\n"
            "auriculares para perro! QuáQ puedo decir?\n"
            "Necesito un poco de flow a donde sea que vaya.\n"
            "Es complicado. Jeje...\n"
            "Salgo de ves en cuando, asi que si me ves...\n"
            "por favor acaráeciame!\n"
            "Te veo luego.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_TWEEZERS ("Letter to the Editor") */ {
        /* TITLE ---------------------------------------------------------- */
            "Una carta del granjero",
        /* BODY ----------------------------------------------------------- */
            "Soy un hombre antiguo que tiene una granja, llena\n"
            "de vegetales. Pero veras, de un dia a otro a mis\n"
            "vegetales les empezo a crecer pelo!\n"
            "Fue muy raro! No podria simplemente venderlas asi!\n"
            "Intente arrancar los pelos, pero no podia dejarlas\n"
            "totalmente depiladas, era un problema terrible!\n"
            "Pero bueno, para mejorar mi animo, Puse un poco\n"
            "de musica.\n"
            "Y sin darme cuenta, Estaba arrancando los pelos al\n"
            "ritmo de la musica!\n"
            "Y asi... Quedaron totalmente depiladas! Incluso hasta\n"
            "fue un poco divertido!\n"
            "El poder de la musica si que hace maravillas!\n"
            "Si por alguna razon tienes mi mismo problema, con\n"
            "los pelos de tus vegetales...\n"
            "Te recomiendo poner buena musica y arrancar\n"
            "los pelos con ritmo!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NIGHT_WALK ("Night Walk Riddle") */ {
        /* TITLE ---------------------------------------------------------- */
            "Sobre Caminata Nocturna",
        /* BODY ----------------------------------------------------------- */
            "Hay un curioso alguien, que puede que reconozcas\n"
            "de Caminata Nocturna. Si que le gusta la musica.\n"
            "Y aparentemente ha trabajado haciendo musica,\n"
            "y logro tener un puesto en el juego con sus contactos.\n"
            "Un vez me lo curse por la calle y todo lo que me dijo\n"
            "fue \"Amo la musica!\", y simplemente se fue.\n"
            "Me pregunto si volvere a ver a ese chico de nuevo.\n"
            "Ahora que lo pienso, ni se como se llama...\n"
            "\n"
            "Okay, hora de una trivia!\n"
            "Su nombre es...\n"
            "\n"
            "\001C" "\0031" "\001m" "á@áAáBáC-áCáBáD\n" // Su nombre es play-yan lol
            "\001L" "\0030" "\001s" "\n"
            "Adivina que letras van en cada numero!\n"
            "Si adivinas correctamente, podras leer\n"
            "el siguiente texto!\n"
            "\n"
            "\n"
            "\0031" "\001m" "\001C" "El secreto de\n"
            "Trivia ritmica\n"
            "\0030" "\001s" "\001C" "\n"
            "E" "\0031" "\001m" "áD" "\0030" "\001s" " este juego, el jug" "\0031" "\001m" "áB" "\0030" "\001s" "dor debe de " "\0031" "\001m" "á@" "\0030" "\001s" "resio" "\0031" "\001m" "áD" "\0030" "\001s" "ar los\n"
            "\0030" "\001s" "boto" "\0031" "\001m" "áD" "\0030" "\001s" "es " "\0031" "\001m" "áAáB" "\0030" "\001s" "s veces que e" "\0031" "\001m" "áA" "\0030" "\001s" " " "\0031" "\001m" "áB" "\0030" "\001s" "nfrition h" "\0031" "\001m" "áB" "\0030" "\001s" "g" "\0031" "\001m" "áB." "\0030" "\001s" "\n"
            "\0030" "\001s" "Pero si presio" "\0031" "\001m" "áDáB" "\0030" "\001s" "s  los botones mu" "\0031" "\001m" "áC" "\0030" "\001s" " r" "\0031" "\001m" "áB" "\0030" "\001s" "pido, algo\n" "mu" "\0031" "\001m" "áC" "\0030" "\001s" " interes" "\0031" "\001m" "áBáD" "\0030" "\001s" "te puede  p" "\0031" "\001m" "áB" "\0030" "\001s" "s" "\0031" "\001m" "áB" "\0030" "\001s" "r.\n"
            "\0030" "\001s" "No es n" "\0031" "\001m" "áB" "\0030" "\001s" "d" "\0031" "\001m" "áB" "\0030" "\001s" " mu" "\0031" "\001m" "áC" "\0030" "\001s" " loco, pero es curioso!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* SPACEBALL ("Inside Spaceball") */ {
        /* TITLE ---------------------------------------------------------- */
            "Entrevista Espacial", // esto es lo maximo que puede ser los titulos
        /* BODY ----------------------------------------------------------- */
            "Estamos aqui, en el espacio exterior para una\n"
            "exclusiva entrevista con el jugador de beisbol,\n"
            "El Bateador Espacial!\n"
            "\n"
            "P. Como va la temporada hasta ahora?\n"
            "R. He estado comiendo bolas de arroz, asi que muy\n"
            "bien!\n"
            "\n"
            "\n"
            "P. Cual dirias que es tu meta?\n"
            "R. No dejar de comer bolas de arroz!\n"
            "\n"
            "P. Tienes una novia, verdad?\n"
            "R. Si, tengo una novia.\n"
            "\n"
            "P. Cual dirias que es su mejor cualidad?\n"
            "R. Hace muy buenas bolas de arroz!\n"
            "\n"
            "P. Por que te pones mascaras en medio del juego?\n"
            "R. Hm? De que hablas?\n"
            "\n"
            "P. Pues, Como ese uniforme de conejo que te pusiste.\n"
            "R. No tengo idea de lo que estas hablando.\n"
            "\n"
            "P. Por favor, responde mi pregunta!\n"
            "R. Ya me tengo que ir. Disculpenme.\n"
            "\n"
            "Se paro y se fue!\n"
            "Parece que hay mas detras de esto de lo que el deja\n"
            "entrever.\n"
            "Ya con esto, concluimos esta entrevista interestelar.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MECHANICAL_HORSE ("Mechanical Horse's Story") */ {
        /* TITLE ---------------------------------------------------------- */
            "Sobre el caballo mecanico",
        /* BODY ----------------------------------------------------------- */
            "Tuvimos la oportunidad de entrevistar a Sr. F,\n"
            "inventor del caballo mecanico que esta en los\n"
            "juguetes ritmicos, preguntaremos sobre su desarollo.\n"
            "\n"
            "\n"
            "Sr. F: La idea salio porque queria comprartir\n"
            "la alegria de montar en un caballo. Asi que el\n"
            "desarrollo se desenvolvio con esa idea.\n"
            "\n"
            "Los comentarios del Sr. F eran simples, pero\n"
            "muy apasionados.\n"
            "\n"
            "Sr. F: Pero al intentar hacer un juego de ello, me\n"
            "encontre perdiendo de vista ese objetivo final.\n"
            "Hasta plantee rendirme varias veces.\n"
            "\n"
            "Fue un verdadero desafio para el Sr. F, le costo\n"
            "expresar su vision con un esqueleto tan simple.\n"
            "Sr. F: Pero al pensar en la gente que usara el\n"
            "Caballo mecanico, disfrutandolo al menos un poco...\n"
            "\n"
            "Como que, lo mas complicado simplemente se esfumo.\n"
            "\n"
            "Sr. F, usted si que es leal a sus creciones. Estamos\n"
            "esperando con ansias su proxima creacion.\n"
            "Muchas gracias.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MARCHING_ORDERS ("Marcher's Diary") */ {
        /* TITLE ---------------------------------------------------------- */
            "Registro del escuadron",
        /* BODY ----------------------------------------------------------- */
            "Abril 16:\n"
            "Me uni al grupo de marchantes!\n"
            "Voy a darlo todo para ayudar a todo el mundo!\n"
            "\n"
            "Abril 20:\n"
            "Hoy, mientras marchaba con todos me sali del ritmo.\n"
            "El sargento me reto de lo lindo...\n"
            "\n"
            "\n"
            "Abril 28:\n"
            "Hoy nos asignaron limpiar el frente\n"
            "de la estacion. Una agradable dama me\n"
            "ofrecio unos dulces por mi gran trabajo.\n"
            "Eso me hizo el dia!\n"
            "\n"
            "\n"
            "Mayo 4:\n"
            "He estado un poco flojo ultimamente.\n"
            "No se si esto es a lo que se refieren con\n"
            "la \"fiebre primaveral\".\n"
            "Si es que no me pongo las pilas, Puede que me hechen...\n"
            "\n"
            "Mayo 8:\n"
            "Algo que pasa al sargento...\n"
            "Ayer, nos conto que habia estado bailando con\n"
            "unos conejos en el espacio exterior.\n"
            "Estara... bien?\n"
            "Mayo 16:\n"
            "Me estado encontrando a mucha gente que se parece\n"
            "a el sargento...\n"
            "Debe ser mi imaginacion, verdad    ?\n"
            "\n"
            "Mayo 22:\n"
            "No lo puedo creer! El sargento es...\n"
            "\n"
            "\n"
            "El registro termina aqui.\n"
            "Que le podria estar pasando al sargento?",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RAP_MEN ("Rap Report") */ {
        /* TITLE ---------------------------------------------------------- */
            "Entrevista Rapera",
        /* BODY ----------------------------------------------------------- */
            "Que onda todos! Soy el DJ MON-KI!\n"
            "Hoy dia tenemos unos increibles invitados.\n"
            "Un fuerte aplauso para los Rapnificos! (RN)!\n"
            "Un agrado estar con ustedes hoy!\n"
            "RN: Hey oyentes desde sus casas! Somos los\n"
            "Rapnificos!\n"
            "DJ: Su ultima cancion es super buena, no?\n"
            "RN: Claro! Lo captas, huh?\n"
            "DJ: Duh! Es increible!\n"
            "RN: Aunque si, estamos en un parieto, sabes?\n"
            "DJ: Oh? Que paso?\n"
            "RN: Bueno, para empezar, acaban de aparecer otro\n"
            "duo.\n"
            "de raperas de la nada! Se hacen llamar las\n"
            "\"Rapnificas\", Creo.\n"
            "DJ: Puede ser, huh.\n"
            "RN: Seh. Y esas impostoras se comieron todos\n"
            "los snacks que teniamos en nuesto estudio!\n"
            "DJ: No lo puede creer!\n"
            "RN: Y si no fuera suficiente, dejaron una nota\n"
            "despues de comerse todo.\n"
            "DJ: Y que decia?\n"
            "RN: Decia \"Los dulces son Increibles!\"\n"
            "DJ: Oh wow. Que incorregibles.\n"
            "RN: Verdad!? Fue lo suficiente para hacerme gritar...\n"
            "DJ: A que dijiste \"Que ya no hay Disponibles?!\"\n"
            "RN: Uh... Seh! Como sabias eso?\n"
            #ifdef PARADISE
            "DJ: Porque he estado jugando Rhythm Paradise\n"
            "Advance! Pausa publicitaria!\n"
            "AN: Mejora tu ritmo con Rhythm Paradise Advance!\n"
            #else
            "DJ: Porque he estado jugando Rhythm Heaven\n"
            "Advance! Pausa publicitaria!\n"
            "AN: Mejora tu ritmo con Rhythm Heaven Advance!\n"
            #endif
            "Disponible ahora! El juego y la consola se venden\n"
            "por separado.\n"
            "Fin.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* BON_ODORI ("Lyrics - The Bon Odori") */ {
        /* TITLE ---------------------------------------------------------- */
            "Lyrics á@",
        /* BODY ----------------------------------------------------------- */
            "Bon Åô Odori\n"
            "Cantante: Ami Tokito\n"
            "Musica: TSUNKU\n"
            "\n"
            "(Esta cancion aparece en Bon Åô Odori.)\n"
            "\n"
            "Haa~\n"
            "            Hanabi Agare ba~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Kansei Agaru~\n"
            "\n"
            "Haa~\n"
            "            Ninki Agare ba~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Kyuuryou Agaru~\n"
            "\n"
            "Matsuri da Wasshoi!\n"
            "Nippon chuu ga Wasshoi!\n"
            "\n"
            "Sore Hikkuri Kaette\n"
            "Ha~ Bon Odori~\n"
            "\n"
            "Haa~\n"
            "            Ame ga Agare ba~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Yagura ni Agaru~\n"
            "\n"
            "Hora! Matsuri da Wasshoi!\n"
            "Korezo Made in Japan\n"
            "\n"
            "Sore Hikkuri Kaette\n"
            "Ha~ Bon Odori~\n"
            "\n"
            "Traduccion: Camus\n"
            "\n"
            "Haa~\n"
            "            Al la pirotecnia iniciar~\n"
            "\n"
            "Haa~ Ah~\n"
            "            La alegráea se esparcirác~\n"
            "\n"
            "Haa~\n"
            "            Si nos hacemos notar~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Mucho vamos a ganar~\n"
            "\n"
            "ábnimo este dáea!\n"
            "En Japáin algarabáea!\n"
            "\n"
            "Ahora da una vuelta y Dondo pan pan\n"
            "Ha~ Bon Odori~\n"
            "\n"
            "Haa~\n"
            "            Al la lluvia parar~\n"
            "\n"
            "Haa~ Ah~\n"
            "            Muy fuerte se cantarác~\n"
            "\n"
            "Vamos! ábnimo este dáea!\n"
            "La penas asáe disiPAN\n"
            "\n"
            "Ahora da una vuelta y Dondo pan pan\n"
            "Ha~ Bon Odori~\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX3 ("Lyrics - Honey Sweet Angel of Love") */ {
        /* TITLE ---------------------------------------------------------- */
            "Lyrics áA",
        /* BODY ----------------------------------------------------------- */
            "Mi dulce angel\n"
            "Cantante: Ami Tokito\n"
            "Musica: TSUNKU\n"
            "Arreglos: Hideyuki \"Daichi\" Suzuki\n"
            "Traduccion: Camus & Cazu Åô\n"
            "\n"
            "(Esta cancion aparece en el Remix 3.)\n"
            "\n"
            "El amor es primordial\n"
            "Lleno de fe-licidad\n"
            "El amor es tan mácgico\n"
            "Ablanda el corazon!\n"
            "\n"
            "Mi dulce angel!\n"
            "\n"
            "Cáimo podráea explicar,\n"
            "Lo que es un \"Te amo\",\n"
            "yo, no lo sáQ no oh oh!\n"
            "Podráea quizas expresarlo,\n"
            "Como una brecha entre tu y yo,\n"
            "Que crece sin ningun, control!\n"
            "\n"
            "Es algo agridulce\n"
            "Casi como mucha miel!\n"
            "\n"
            "Es lo que no puedo evitar sentir por ti.\n"
            "\n"
            "Te amo!\n"
            "\n"
            "El amor es primordial\n"
            "Lleno de fe-licidad\n"
            "El amor es tan mácgico\n"
            "Ablanda el corazon!\n"
            "\n"
            "Mi dulce angel!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX5 ("Lyrics - WISH Can't Wait For You") */ {
        /* TITLE ---------------------------------------------------------- */
            "Lyrics áB",
        /* BODY ----------------------------------------------------------- */
            "No Puedo Esperarte\n"
            "Cantante: Sohshi Tanaka\n"
            "Musica: TSUNKU\n"
            "Arreglos: Koichi Yuasa\n"
            "Traduccion: Camus\n"
            "\n"
            "(Esta cancion aparece en el Remix 5.)\n"
            "\n"
            "\n"
            "No puedo esperarte por mucho\n"
            "Estoy a punto de partir\n"
            "Quisiera recibir un ultimo beso de ti\n"
            "Aquellas preciadas noches que pasamos tu y yo\n"
            "Serácn como agujas en mi corazáin...\n"
            "\n"
            "Nos conocimos en este lugar\n"
            "Cual llama que se avivái\n"
            "Sin titubeos ni preocupaciáin\n"
            "Asáe naciái nuestro amor\n"
            "\n"
            "Mas solo fue algo fugaz\n"
            "Nos comenzamos a distanciar\n"
            "Cuando es que se apagái?\n"
            "Hasta ahora lo notáQ yo\n"
            "\n"
            "Mis deseos se empiezan a esfumar\n"
            "Te comienzas a esfumar\n"
            "El dolor el dolor\n"
            "En mi corazáin\n"
            "No lo aguanto mas, No!\n"
            "\n"
            "No puedo esperarte por mucho\n"
            "Estoy a punto de partir\n"
            "Desearáea haberte amado mas cuando estabas junto\n"
            "a máe\n"
            "Aquellas preciadas noches que aquella estaciáin viái\n"
            "Ahora estarácn en mi corazáin...\n"
            "Ohhh!\n"
            "\n"
            "No puedo esperarte por mucho\n"
            "Estoy a punto de partir\n"
            "Desearáea haberte amado mas cuando estabas junto\n"
            "a máe\n"
            "Recordarács aquellos lugares donde fui feliz junto\n"
            "a ti?\n"
            "Ahora tan solo estaran en mi corazáin...\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX8 ("The Final Letter") */ {
        /* TITLE ---------------------------------------------------------- */
            "Carta final",
        /* BODY ----------------------------------------------------------- */
            "Haz recibido esta carta de parte\n"
            "de la Liga del Ritmo.\n"
            "\n"
            "\"Felicidades en conseguir un perfecto en el remix 8!\n"
            "Conseguir algo asi si que es impresionante! ...es como\n"
            "deberia estar felicitandote, pero no lo hare asi.\n"
            "Si que te haz lucido aqui, en\n"
            #ifdef PARADISE
            "Rhythm Paradise Advance.\n"
            #else
            "Rhythm Heaven Advance.\n"
            #endif
            "Eso es inegable, y todo el mundo lo reconoce.\n"
            "Eres lo mejor! Uno de los mas increibles! ...es como\n"
            "me siento, pero ya basta de elogios.\n"
            "Veras, cualquier ritmo que hayas experimentado en\n"
            "este juego, es solo una parte del mundo ritmico.\n"
            "Si es que esta experencia te hizo interesarte en el\n"
            "ritmo, te recomendamos que sigas aprendiendo de ello.\n"
            "Por que desarrollar tu flow es la bomba!\n"
            "No lo puedo recomendar mas! Y... bueno... Ejem.\n"
            "Deberia dejar de emocionarme y empezar a\n"
            "recomendar.\n"
            "Te lo decimos en serio.\n"
            "En serio queremos que entrenes tu flow lo mas que\n"
            "puedas!\n"
            "Creemos que tienes el potencial de liderar un mundo\n"
            "lleno de ritmo!\n"
            "Es mas, solo podemos creer en TI!\n"
            "Tu en serio eres increible!\n"
            "Muchas gracias por jugar!\"\n"
            "\001R" "Representativo de la Liga del Ritmo\n"
            "\001R" "Abuelo Espacial",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NINJA_BODYGUARD ("The Ninja Scroll") */ {
        /* TITLE ---------------------------------------------------------- */
            "Manuscrito Ninja",
        /* BODY ----------------------------------------------------------- */
            "Un gusto en conocerlos. Soy Tanaka. El otro dáea\n"
            "encontráQ un manuscrito curioso en el fondo del\n"
            "almacáQn. En áQl estaba escrito lo siguiente:\n"
            "\n"
            "\"Para quienes lean esto: no han encontrado\n"
            "este manuscrito por casualidad. UsáQ los poderes del\n"
            "ninjutsu para que los buscara. Logran entenderlo?\n"
            "En efecto, quien escribe esto no es solo un ninja\n"
            "sino tambiáQn tu ancestro.\n"
            "Hace tiempo, protegáe a mi noble de una tormenta\n"
            "de flechas arriesgando mi vida.\n"
            "La noche siguiente a esa ardua tarea,\n"
            "tuve una revelaciáin: vi a un hombre joven,\n"
            "uno descontento con el mundo que le rodeaba.\n"
            "Segà¶n el destino, ese hombre eres tà¶.\n"
            "Al igual que yo, tu te arriesgas para salvar a alguien.\n"
            "Una mujer joven. Se dice que ella tambien es\n"
            "descendiente de mi noble.\n"
            "No estoy seguro si logres comprender este texto, pero\n"
            "si es asi, te pido que sigas protegiendola.\"\n"
            "\n"
            "Ahora, si hay una mujer en mi corazon.\n"
            "El otro dia, la salve de un ataque con resorteras.\n"
            "Arriesgue mi vida, quien sabe lo hubiera pasado?\n"
            "Puede que mi ancestro ninjutsu me haya dado un\n"
            "empujon alguna vez.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* TOSS_BOYS ("Rhythm Stand-Up") */ {
        /* TITLE ---------------------------------------------------------- */
            "Manzai Ritmico",
        /* BODY ----------------------------------------------------------- */
            "Yema: Hola, Soy Yema!\n"
            "Zefir: Hola, Soy Zefir!\n"
            "Ambos: Es un placer conocerte!\n"
            "Y: Oye Zefir! Oáeste?\n"
            "Estoy tomando una clase de mà¶sica!\n"
            "Z: Eh, en serio? Genial! Que instrumento tocas?\n"
            "Es la guitarra? O la bateráea?\n"
            "Y: Bueno, mi parte es...\n"
            "Z: Cual? Cual?\n"
            "Y: TocaráQ el ritmo!\n"
            "Z: QuáQ? No puedes \"tocar\" el ritmo, Yema.\n"
            "No es un instrumento. Donde lo oáeste?\n"
            "Y: Bueno, le dije al maestro que queráea tocar bateráea,\n"
            "y me respondiái que deberáea practicar con el\n"
            "\"ritmo\" para empezar!\n"
            "Z: Yema, creo que se refiriái a que necesitabas\n"
            "mejorar tu sentido del ritmo.\n"
            "Y: Claro, tiene todo el sentido del mundo! Eso es\n"
            "increáeble! Cáimo lo sabáeas? Eres un psáequico?\n"
            "Z: Como y- Por quáQ no lo sabráea!?\n"
            "Es sentido comà¶n!\n"
            "Y: Oye viejo, no necesitas enfadarte tanto.\n"
            "Z: Ah, Tienes razáin, lo siento mucho...\n"
            "Y: Uups! Zefir, tu cierre se bajái!\n"
            "Z: Ah, Espera, en serio?\n"
            "Y: Jáb, BROMA!\n"
            "Z: Por quáQ tendráea que!\n"
            "Y: \"Por quáQ tendráea que\" Viejo,\n"
            "eso es muy cursi.\n"
            "Z: Callate, ya tuve suficiente!\n"
            "Y: AARGH!\n"
            "Z: Eh?! Por quáQ te enojas? Que te hice?\n"
            "Y: No hablabamos de mi clase de mà¶sica?\n"
            "Z: Ah? Si, es cierto.\n"
            "Y: Tsss... Que manera de desviarse del asunto.\n"
            "Z: Ah, Lo siento... Espera, LO siento?!\n"
            "Fuiste tu el que mintiái con que mi cierre estaba abajo!\n"
            "Y: Oye oye! No necesitas molestarte tanto.\n"
            "Z: Oh, que amable! En fin, que hay de tu\n"
            "sentido del ritmo?\n"
            "Y: Cierto! Mis colegas dijeron que mi\n"
            "\"Centipedo del ritmo\" mejorarác practicando.\n"
            "Z: Tu SENTIDO del ritmo, menso!\n"
            "Ambos: Gracias! Han sido una maravillosa audiencia!\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_manzai_gfx_table,
            /* BGM */ &reading_style_manzai_bgm
        /* ---------------------------------------------------------------- */
    },

    /* FAN_MAIL ("Fan Mailbag") */ {
        /* TITLE ---------------------------------------------------------- */
            "Voces de felicidad",
        /* BODY ----------------------------------------------------------- */
            "Hemos recibido tantas cartas de\n"
            #ifdef PARADISE
            "jugadores satisfechos con Rhythm Paradise Advance.\n"
            #else
            "jugadores satisfechos con Rhythm Heaven Advance.\n"
            #endif
            "Y son TANTAS que este email tendira 1000 paginas\n"
            "si las mostraramos todas!\n"
            "Pero aqui les dejamos unos cuantos\n"
            "pensamientos de los jugadores!\n"
            "\n"
            "\n"
            "\n"
            "Solo por mejorar mi sentido de ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi... popular?\n"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "Antes de encontrar \"Rhythm Paradise Advance\",\n"
            #else
            "Antes de encontrar \"Rhythm Heaven Advance\",\n"
            #endif
            "No me iba muy bien en el amor, pero ahora\n"
            "estoy en racha y con energáeas nuevas!\n"
            "\n"
            "\001R" "Sr. T, Edad 38, Trabajador de Oficina\n"
            "\001L" "Solo por mejorar mi sentido de ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi...\n"
            "\0031" "\001R" "mejor cantando?"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Antes de encontrar \"Rhythm Paradise Advance\",\n"
            #else
            "\001L" "Antes de encontrar \"Rhythm Heaven Advance\",\n"
            #endif
            "Era la definicion del diccionario de ser sorda al tono,\n"
            "pero ahora, la gente me dice que mi canto es mejor!\n"
            "Sigo siendo sorda al tono, claro, pero ahora soy feliz!\n"
            "\001R" "Sra. H, Edad 29, Ama de casa\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_FORMULA ("The Rhythm Formula") */ {
        /* TITLE ---------------------------------------------------------- */
            "Entendiendo el ritmo",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0032" "\001m" "\n"
            "Sentido de ritmo ÅΩ Flow\n"
            "\n"
            "Sentido de ritmo ÅÇ Flow\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "Explicacion: El flow es un elemento que viene con\n"
            "el sentido de ritmo, pero no el sentido de ritmo en si.\n"
            "\001C" "\0032" "\001m" "\n"
            "\n"
            "\n"
            "\n"
            "Ritmo ÅÇ Sentido de ritmo\n"
            "\n"
            "\001C" "\0030" "\001s" "\n"
            "Explicacion: El ritmo es algo que pasa de manera\n"
            "constante.  El sentido de ritmo es como sientes esa\n"
            "manera que pase, expresada por la manera del flow.\n"
            "\001C" "\0031" "\001m" "\n"
            "\n"
            "Ser bueno bailando\n"
            "ÅÇ\n"
            "Buen sentido de ritmo\n"
            "\001C" "\0030" "\001s" "\n"
            "Explicacion: Alguien que sea muy bueno bailando no\n"
            "siempre significa que tenga un buen sentido de ritmo.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_DIAGNOSIS ("Rhythm Diagnosis") */ {
        /* TITLE ---------------------------------------------------------- */
            "Diagnostico Ritmico",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0031" "\001m" "Diagnostico Ritmico\n"
            "\0030" "\001s" "\n"
            "Diagnostiquemos tu sentido de ritmo.\n"
            "Escoje las respuestas con las que concuerdas!\n"
            "\n"
            "Creo que tengo un buen sentido de ritmo.\n"
            "Si - Ve a la pagina 2!\n"
            "No - Ve a la pagina 3!\n"
            "-1-\n"
            "\n"
            "Entre el pop y el rock, Prefiero...\n"
            "\n"
            "\n"
            "\n"
            "Rock - Ve a la pagina 4!\n"
            "Pop - Ve a la pagina 5!\n"
            "\n"
            "-2-\n"
            "\n"
            "Entre el Jazz y la musica clasica, Prefiero...\n"
            "\n"
            "\n"
            "\n"
            "Jazz - Ve a la pagina 6!\n"
            "Clasica - Ve a la pagina 7!\n"
            "\n"
            "-3-\n"
            "\n"
            "Siento que para bailar bien, necesitas un buen\n"
            "sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 8!\n"
            "No - Ve a la pagina 9!\n"
            "\n"
            "-4-\n"
            "\n"
            "Siento que si puedes escuchar un buen ritmo,\n"
            "entonces lo puedes expresar.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 10!\n"
            "No - Ve a la pagina 11!\n"
            "\n"
            "-5-\n"
            "\n"
            "Siento que nadie tiene un sentido de ritmo realmente.\n"
            "\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 9!\n"
            "No - Ve a la pagina 8!\n"
            "\n"
            "-6-\n"
            "\n"
            "Siento que el sentido de ritmo es inherente,\n"
            "o sea que no se puede mejorar entrenandolo.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 10!\n"
            "No - Ve a la pagina 11!\n"
            "\n"
            "-7-\n"
            "\n"
            "Siento que tu sentido de ritmo es mucho mejor\n"
            "cuando tienes flow.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 12!\n"
            "No - Ve a la pagina 13!\n"
            "\n"
            "-8-\n"
            "\n"
            "Siento que el sentido de ritmo y el flow\n"
            "son lo mismo.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 14!\n"
            "No - Ve a la pagina 15!\n"
            "\n"
            "-9-\n"
            "\n"
            "No siento que te puedas volver popular, solo\n"
            "por tener un buen sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 16!\n"
            "No - Ve a la pagina 17!\n"
            "\n"
            "-10-\n"
            "\n"
            "Siento que tener buen sentido del ritmo\n"
            "facilita enmascarar ser sordo al tono.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 18!\n"
            "No - Ve a la pagina 19!\n"
            "\n"
            "-11-\n"
            "\n"
            "Siento que conseguir un buen sentido de ritmo\n"
            "es mas facil a temprana edad.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 21!\n"
            "\n"
            "-12-\n"
            "\n"
            "Siento que no puedes mejorar tu sentido\n"
            "de ritmo, siendo un adulto.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 21!\n"
            "No - Ve a la pagina 22!\n"
            "\n"
            "-13-\n"
            "\n"
            "Siento que el ritmo no tiene ninguna\n"
            "relacion con la vida diaria.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 22!\n"
            "\n"
            "-14-\n"
            "\n"
            "Siento que, hasta el sentido de ritmo que\n"
            "has tenido por mucho tiempo lo puedes perder\n"
            "si es que no le das importancia.\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 20!\n"
            "\n"
            "-15-\n"
            "\n"
            "Siento que el sentido de ritmo se puede\n"
            "mejorar si entrenas mucho y duro.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 22!\n"
            "\n"
            "-16-\n"
            "\n"
            "Siento que el sentido de rimto se puede mejorar\n"
            "en solo 30 segundos si es que le hechas ganas.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 22!\n"
            "No - Ve a la pagina 23!\n"
            "\n"
            "-17-\n"
            "\n"
            "No siento que sea bueno siempre\n"
            "sentir un sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 20!\n"
            "\n"
            "-18-\n"
            "\n"
            "Siento que el sentido de ritmo se\n"
            "consigue en la practica, no la teoria.\n"
            "\n"
            "\n"
            "Si - Ve a la pagina 23!\n"
            "No - Ve a la pagina 21!\n"
            "\n"
            "-19-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo de Flow" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Tienes una buena actitud con tu sentido de ritmo.\n"
            "Puede que aun no tengas total confianza\n"
            "en tu sentido de ritmo aun, pero probablemente\n"
            "puedas usar el ritmo para vivir una vida divertida.\n"
            "Disfruta sintiendo el flow!\n"
            "\001C" "-20-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Timido" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Asi que da nervios tu sentido de ritmo, huh?\n"
            "Todo el mundo tiene un sentido de ritmo.\n"
            "Si vives tu vida notado los ritmos que hay\n"
            "alrededor tuyo, tu sentido de ritmo mejorara.\n"
            "Asegurate de relajarte, vale?\n"
            "\001C" "-21-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Despreocupado" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Deberias aprender la diferencia entre el sentido\n"
            "de ritmo y el flow. Un buen flow no llegara muy lejos\n"
            "si tu sentido de ritmo es malo.\n"
            "Prestale atencion a tu sentido de ritmo, y\n"
            "tu ritmo podria hasta mejorar la vibra de todos!\n"
            "\001C" "-22-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Pegadizo" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Puede que te cueste un poco captar el ritmo.\n"
            "Si encuentras maneras de integrar el sentido de ritmo\n"
            "en tu vida diaria, tal vez pueda crecer y mejorar.\n"
            "Incluso y hasta podrias hacer las cosas mas\n"
            "divertidas!\n"
            "\001C" "-23-\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_POEM ("Rhythm Poem Digest") */ {
        /* TITLE ---------------------------------------------------------- */
            "Coleccion de Poemas Ritmicos",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0031" "\001m" "\"Al nutrirlo\"\n"
            "\n"
            "\001C" "\0030" "\001s" "Lo he cultivado,\n"
            "Para el dáea en que aprenda a usar sus alas.\n"
            "En medio de una vida cotidiana y sencilla,\n"
            "de forma natural,\n"
            "con disfrute,\n"
            "Eso que ahora es apenas, apenas algo muy chico...\n"
            "mi sentido del ritmo...\n"
            "\001C" "\0031" "\001m" "\"Ritmo Karateca\"\n"
            "\001C" "\0030" "\001s" "\n"
            "Hey Nene! Que tal todo?\n"
            "Este ritmo no tie-ne fin.\n"
            "Hey Nene! Escucha atentamente!\n"
            "Yo puedo darte...\n"
            "Ese gran ritmo.\n"
            "Oh, si.\n"
            "Atento nene! Confáea en mi!\n"
            "Este ritmo, no tie-ne fin.\n"
            "Un nuevo brillo, en tu alma!\n"
            "Oh si!\n"
            "Este ritmo.\n"
            "Lo has entendidái muy bien!\n"
            "Hey nene...\n"
            "Haz lo que te apaciona.\n"
            "Hey! Oh si!\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_HAIKU ("Rhythm Haiku Folio") */ {
        /* TITLE ---------------------------------------------------------- */
            "Coleccion de Haikus Ritmicos",
        /* BODY ----------------------------------------------------------- */
            "\n"
            "\001L" "\0030" "\001s" "Dejanos entrenar\n"
            "\001C" "\0030" "\001s" "algo que todo el mundo tiene,\n"
            "\001R" "\0030" "\001s" "un sentido de ritmo\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Tu sentido de ritmo puede mejorar\n"
            "con practica, en especial si lo usas en\n"
            "tu rutina diaria.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "Puedes hacer tus\n"
            "\001C" "\0030" "\001s" "actividades del dia a dia\n"
            "\001R" "\0030" "\001s" "mucho mas ráetmicas\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Es bueno sentir y mejorar tu sentido de ritmo\n"
            "en tu dia a dia, como caminando,\n"
            "cepillando tus dientes, cocinando, etc...\n"
            "Siempre debes de estar atento a tu ritmo.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Tu sentido del ritmo,\n"
            "\001C" "\0030" "\001s" "si mejoras tu flow,\n"
            "\001R" "\0030" "\001s" "se vuelve aà¶n mács genial.\n"
            "\n"
            "\001C" "\0030" "\001s" "\"Aunque, un sentido de ritmo y el flow\n"
            "no son lo mismo. Intenta mejorar tu flow,\n"
            "pero sin descuidar tu sentido de ritmo.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "En una pausa o descanzo,\n"
            "\001C" "\0030" "\001s" "los crios que no tienen paciencia\n"
            "\001R" "\0030" "\001s" "son demasiado testarudos.\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Puede ser complicado seguir el ritmo en una pausa,\n"
            "y es mas facil seguir el ritmo de manera anticipada,\n"
            "pero la habilidad de pausar y descanzar, mejorar\n"
            "mucho tu flow.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Incluso los adultos,\n"
            "\001C" "\0030" "\001s" "tienen algo que crece sin control:\n"
            "\001R" "\0030" "\001s" "Su sentido de ritmo\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Si es que le hechas ganas, tu sentido de ritmo puede\n"
            "mejorar expotencialmente, sin importar tu edad.\"\n"
            "\n"
            "\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_haiku_gfx_table,
            /* BGM */ &reading_style_haiku_bgm
        /* ---------------------------------------------------------------- */
    }
};
