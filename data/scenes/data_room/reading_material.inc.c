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
            "Rhythm Paradise Advance ESP.\n"
            #else
            "Rhythm Heaven Advance ESP.\n"
            #endif
            "Oh... Se lo compraste a un amigo?\n"
            "E-eh y esta... u-usado!?\n"
            "Bueno, como sea. Lo que si, es que estamos muy\n"
            "honorados de que te hayas interesado en este juego.\n"
            "Es un gusto conocerte, y esperamos que este juego\n"
            "te llene de alegráea y diversiáin para todo el resto\n"
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
            "Ah, sáe, la ideas es que juegues al son de la mà¶sica,\n"
            "asáe que intenta sentir el flow. Ese es mi consejo!\n"
            "Y eso es todo. Y, por cierto, un placer conocerte!",
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
            "Salgo de vez en cuando, asáe que si me ves...\n"
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
            "de vegetales. Pero verács, de un dáea a otro a mis\n"
            "vegetales les empezo a crecer pelo!\n"
            "Fue muy raro! No podráea simplemente venderlas asáe!\n"
            "IntentáQ arrancar los pelos, pero no podáea dejarlas\n"
            "totalmente depiladas, era un problema terrible!\n"
            "Pero bueno, para mejorar mi ácnimo, Puse un poco\n"
            "de mà¶sica.\n"
            "Y sin darme cuenta, Estaba arrancando los pelos al\n"
            "ritmo de la mà¶sica!\n"
            "Y asáe... Quedaron totalmente depiladas! Incluso\n"
            "hasta fue un poco divertido!\n"
            "El poder de la mà¶sica si que hace maravillas!\n"
            "Si por alguna razon tienes mi mismo problema, con\n"
            "los pelos de tus vegetales...\n"
            "Te recomiendo poner buena mà¶sica y arrancar\n"
            "los pelos con ritmo!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NIGHT_WALK ("Night Walk Riddle") */ {
        /* TITLE ---------------------------------------------------------- */
            "Sobre Paseo Nocturno",
        /* BODY ----------------------------------------------------------- */
            "Hay un curioso alguien, que puede que reconozcas\n"
            "de Paseo Nocturno. Si que le gusta la mà¶sica.\n"
            "Y aparentemente ha trabajado haciendo mà¶sica,\n"
            "y lográi tener un puesto en el juego con sus contactos.\n"
            "Un vez me lo crucáQ por la calle y todo lo que me dijo\n"
            "fue \"Amo la mà¶sica!\", y simplemente se fue.\n"
            "Me pregunto si volveráQ a ver a ese chico de nuevo.\n"
            "Ahora que lo pienso, ni sáQ como se llama...\n"
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
            "Trivia Show\n"
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
            "Estamos aquáe, en el espacio exterior para una\n"
            "exclusiva entrevista con el jugador de beisbol,\n"
            "El Bateador Espacial!\n"
            "\n"
            "P. Cáimo va la temporada hasta ahora?\n"
            "R. He estado comiendo bolas de arroz, asáe que muy\n"
            "bien!\n"
            "\n"
            "\n"
            "P. Cuácl diráeas que es tu meta?\n"
            "R. No dejar de comer bolas de arroz!\n"
            "\n"
            "P. Tienes una novia, verdad?\n"
            "R. Si, tengo una novia.\n"
            "\n"
            "P. Cuácl diráeas que es su mejor cualidad?\n"
            "R. Hace muy buenas bolas de arroz!\n"
            "\n"
            "P. Por que te pones mácscaras en medio del juego?\n"
            "R. Hm? De que hablas?\n"
            "\n"
            "P. Pues, Como ese unáeforme de conejo que te pusiste.\n"
            "R. No tengo idea de lo que estas hablando.\n"
            "\n"
            "P. Por favor, responde mi pregunta!\n"
            "R. Ya me tengo que ir. Disculpenme.\n"
            "\n"
            "Se parái y se fuáQ!\n"
            "Parece que hay mács detrács de esto de lo que áQl deja\n"
            "entrever.\n"
            "Ya con esto, concluimos esta entrevista interestelar.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MECHANICAL_HORSE ("Mechanical Horse's Story") */ {
        /* TITLE ---------------------------------------------------------- */
            "Sobre el caballo mecácnico",
        /* BODY ----------------------------------------------------------- */
            "Tuvimos la oportunáedad de entrevistar a Sr. F,\n"
            "inventor del caballo mecácnico que esta en los\n"
            "juguetes ráetmicos, preguntaremos sobre su desarollo.\n"
            "\n"
            "\n"
            "Sr. F: La idea saliái porque queráea compartir\n"
            "la alegráea de montar en un caballo. Asáe que el\n"
            "desarrollo se desenvolváeo con esa idea.\n"
            "\n"
            "Los comentarios del Sr. F eran simples, pero\n"
            "muy apasionados.\n"
            "\n"
            "Sr. F: Pero al intentar hacer un juego de ello, me\n"
            "encontráQ perdiendo de vista ese objetivo final.\n"
            "Hasta plantee rendirme varias veces.\n"
            "\n"
            "Fue un verdadero desafáeo para el Sr. F, le costo\n"
            "expresar su visiáin con un esqueleto tan simple.\n"
            "Sr. F: Pero al pensar en la gente que usara el\n"
            "Caballo mecácnico, disfrutácndolo al menos un poco...\n"
            "\n"
            "Como que, lo mács complicado simplemente se esfumái.\n"
            "\n"
            "Sr. F, usted si que es leal a sus creaciones. Estamos\n"
            "esperando con ansias su práixima creaciáin.\n"
            "Muchas gracias.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MARCHING_ORDERS ("Marcher's Dáeary") */ {
        /* TITLE ---------------------------------------------------------- */
            "Registro del escuadron",
        /* BODY ----------------------------------------------------------- */
            "Abril 16:\n"
            "Me unáe al grupo de marchantes!\n"
            "Voy a darlo todo para ayudar a todo el mundo!\n"
            "\n"
            "Abril 20:\n"
            "Hoy, mientras marchaba con todos me saláe del ritmo.\n"
            "El sargento me retái de lo lindo...\n"
            "\n"
            "\n"
            "Abril 28:\n"
            "Hoy nos asignaron limpiar el frente\n"
            "de la estaciáin. Una agradable dama me\n"
            "ofreciái unos dulces por mi gran trabajo.\n"
            "Eso me hizo el dáea!\n"
            "\n"
            "\n"
            "Mayo 4:\n"
            "He estado un poco flojo à¶ltimamente.\n"
            "No sáQ si esto es a lo que se refieren con\n"
            "la \"fiebre primaveral\".\n"
            "Si es que no me pongo las pilas, Puede que me echen...\n"
            "\n"
            "Mayo 8:\n"
            "Algo le pasa al sargento...\n"
            "Ayer, nos contái que habáea estado bailando con\n"
            "unos conejos en el espacio exterior.\n"
            "Estarác... bien?\n"
            "Mayo 16:\n"
            "Me estado encontrando a mucha gente que se parece\n"
            "a el sargento...\n"
            "Debe ser mi imaginaciáin, verdad?\n"
            "\n"
            "Mayo 22:\n"
            "No me lo puedo creer! El sargento es...\n"
            "\n"
            "\n"
            "El registro termina aquáe.\n"
            "QuáQ le podráea estar pasando al sargento?",
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
            "Hoy dáea tenemos unos increáebles invitados.\n"
            "Un fuerte aplauso para los Rapnificos! (RN)!\n"
            "Un agrado estar con ustedes hoy!\n"
            "RN: Hey oyentes desde sus casas! Somos los\n"
            "Rapnificos!\n"
            "DJ: Su à¶ltima canciáin es super buena, no?\n"
            "RN: Claro! Lo captas, huh?\n"
            "DJ: Duh! Es asombrosa!\n"
            "RN: Aà¶nque si, estamos en un aprieto, sabes?\n"
            "DJ: Oh? Que pasái?\n"
            "RN: Bueno, para empezar, acaban de aparecer otro\n"
            "dà¶o de raperas de la nada! Se hacen llamar las\n"
            "\"Rapnificas\", Creo.\n"
            "DJ: Puede ser, huh.\n"
            "RN: Seh. Y esas impostoras se comieron todos\n"
            "los snacks que tenáeamos en nuesto estudio!\n"
            "DJ: No lo puede creer!\n"
            "RN: Y si no fuera suficiente, dejaron una nota\n"
            "despues de comerse todo.\n"
            "DJ: Y que decáea?\n"
            "RN: Decáea \"Que plan tan sencillo!\"\n"
            "DJ: Oh wow. Que incorregibles.\n"
            "RN: Verdad!? Fue lo suficiente para hacerme gritar...\n"
            "DJ: A que dijiste \"Espera, perdimos algo!\"\n"
            "RN: Uh... Seh! Como sabáeas eso?\n"
            #ifdef PARADISE
            "DJ: Porque he estado jugando Rhythm Paradise\n"
            "Advance ESP! Pausa publicitácria!\n"
            "AN: Mejora tu ritmo con Rhythm Paradise Advance\n"
            "ESP!\n"
            #else
            "DJ: Porque he estado jugando Rhythm Heaven\n"
            "Advance ESP! Pausa publicitácria!\n"
            "AN: Mejora tu ritmo con Rhythm Heaven Advance ESP!\n"
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
            "Mà¶sica: TSUNKU\n"
            "\n"
            "(Esta canciáin aparece en Bon Åô Odori.)\n"
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
            "Traducciáin: Camus\n"
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
            "Mi dulce ácngel\n"
            "Cantante: Ami Tokito\n"
            "Mà¶sica: TSUNKU\n"
            "Arreglos: Hideyuki \"Daichi\" Suzuki\n"
            "Traducciáin: Camus, Apolo & Cazu Åô\n"
            "\n"
            "(Esta canciáin aparece en el Remix 3.)\n"
            "\n"
            "\n"
            "El amor es primordial\n"
            "Lleno de fe-licidad\n"
            "El amor es tan mácgico\n"
            "Ablanda el corazáin!\n"
            "\n"
            "Mi dulce ácngel!\n"
            "\n"
            "Cáimo podráea explicar,\n"
            "Lo que es un \"Te amo\",\n"
            "Yo la verdad, no sáQ!\n"
            "Podráea quizács decir,\n"
            "Como una brecha entre ambos,\n"
            "Que crece sin ningà¶n, control!\n"
            "\n"
            "Es algo agridulce\n"
            "Que no puedo soltar\n"
            "\n"
            "Es lo que no puedo evitar sentir por ti.\n"
            "Te amo!\n"
            "\n"
            "El amor es primordial\n"
            "Lleno de fe-licidad\n"
            "El amor es tan mácgico\n"
            "Ablanda el corazáin!\n"
            "\n"
            "Mi dulce ácngel!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX5 ("Lyrics - WISH Can't Wait For You") */ {
        /* TITLE ---------------------------------------------------------- */
            "Lyrics áB",
        /* BODY ----------------------------------------------------------- */
            "DESEO ~ Me duele seguir esperando\n"
            "Cantante: Sohshi Tanaka\n"
            "Mà¶sica: TSUNKU\n"
            "Arreglos: Koichi Yuasa\n"
            "Traducciáin: Camus & Apolo\n"
            "\n"
            "(Esta canciáin aparece en el Remix 5.)\n"
            "\n"
            "\n"
            "Me duele seguir esperando\n"
            "esta noche serác el adiáis,\n"
            "lo daráQ todo por cumplir a nuestro amor\n"
            "Aquellas noches que pasamos solos juntos tà¶ y yo\n"
            "Serácn como agujas en mi pecho...\n"
            "\n"
            "Nos cruzamos en aquel lugar\n"
            "Cual llama que nunca cesái\n"
            "Sin dudas nos abrazamos\n"
            "Ya no habáea vuelta atrács\n"
            "\n"
            "Mas solo lo nuestro fue fugaz\n"
            "Los caprichos nos alejan\n"
            "Cuando fue que esto se apago?\n"
            "En tus besos ya no hay calor\n"
            "\n"
            "Mis deseos se empiezan a esfumar\n"
            "Tà¶ te comienzas alejar,\n"
            "El ardor, el ardor, que calor\n"
            "En mi pecho ya no aguanto mas!\n"
            "\n"
            "No puedo esperarte por mucho\n"
            "Esta noche es nuestro adiáis\n"
            "Debái haberte dado todo mi amor\n"
            "Aquellas solas y preciadas noches bajo la estaciáin\n"
            "Ahora estácn clavadas en mi pecho...\n"
            "\n"
            "Woooh!~\n"
            "\n"
            "No puedo esperarte por mucho\n"
            "Esta noche es nuestro adiáis\n"
            "Debáe haberte dado todo mi amor\n"
            "Recordarács cuando la lluvia perfumaba nuestro\n"
            "amor?\n"
            "Ahora no es mas que mi DESEO...\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX8 ("The Final Letter") */ {
        /* TITLE ---------------------------------------------------------- */
            "Carta final",
        /* BODY ----------------------------------------------------------- */
            "Has recibido esta carta de parte\n"
            "de la Liga del Ritmo.\n"
            "\n"
            "\"Felicidades en conseguir un perfecto en el remix 8!\n"
            "Conseguir algo asáe si que es impresionante! ...es como\n"
            "deberáea estar felicitandote, pero no lo haráQ asáe.\n"
            "Si que te haz lucido aquáe, en\n"
            #ifdef PARADISE
            "Rhythm Paradise Advance ESP.\n"
            #else
            "Rhythm Heaven Advance ESP.\n"
            #endif
            "Eso es innegable, y todo el mundo lo reconoce.\n"
            "Eres lo mejor! Uno de los mács increáebles! ...es como\n"
            "me siento, pero ya basta de elogios.\n"
            "Verács, cualquier ritmo que hayas experimentado en\n"
            "este juego, es solo una parte del mundo ráetmico.\n"
            "Si es que esta experencia te hizo interesarte en el\n"
            "ritmo, te recomendamos que sigas aprendiendo de ello.\n"
            "Por que desarrollar tu flow es la bomba!\n"
            "No lo puedo recomendar mács! Y... bueno... Ejem.\n"
            "Deberáea dejar de emocionarme y empezar a\n"
            "recomendar.\n"
            "Te lo decimos en serio.\n"
            "En serio queremos que entrenes tu flow lo mács que\n"
            "puedas!\n"
            "Creemos que tienes el potencial de liderar un mundo\n"
            "lleno de ritmo!\n"
            "Es mács, solo podemos creer en TI!\n"
            "Tu en serio eres increáeble!\n"
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
            "Al igual que yo, tà¶ te arriesgas para salvar a alguien.\n"
            "Una mujer joven. Se dice que ella tambien es\n"
            "descendiente de mi noble.\n"
            "No estoy seguro si logres comprender este texto, pero\n"
            "si es asáe, te pido que sigas protegiáQndola.\"\n"
            "\n"
            "Ahora, si hay una mujer en mi corazáin.\n"
            "El otro dáea, la salváQ de un ataque con resorteras.\n"
            "ArriesguáQ mi vida, quien sabe lo hubiera pasado?\n"
            "Puede que mi ancestro ninjutsu me haya dado un\n"
            "empujáin alguna vez.",
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
            "Z: Cuácl? Cuácl?\n"
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
            "Z: Cácllate, ya tuve suficiente!\n"
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
            "\"Centáepedo del ritmo\" mejorarác practicando.\n"
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
            "jugadores satisfechos con Rhythm Paradise Advance ESP.\n"
            #else
            "jugadores satisfechos con Rhythm Heaven Advance ESP.\n"
            #endif
            "Y son TANTAS que este email tendria 1000 pácginas\n"
            "si las mostrácramos todas!\n"
            "Pero aquáe les dejamos unos cuantos\n"
            "pensamientos de los jugadores!\n"
            "\n"
            "\n"
            "Solo por mejorar mi sentido del ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi... popular?\n"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "Antes de encontrar \"Rhythm Paradise Advance ESP\",\n"
            #else
            "Antes de encontrar \"Rhythm Heaven Advance ESP\",\n"
            #endif
            "No me iba muy bien en el amor, pero ahora\n"
            "estoy en racha y con energáeas nuevas!\n"
            "\n"
            "\001R" "Sr. T, Edad 38, Trabajador de Oficina\n"
            "\001L" "Solo por mejorar mi sentido del ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi...\n"
            "\0031" "\001R" "mejor cantando?"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Antes de encontrar \"Rhythm Paradise Advance ESP\",\n"
            #else
            "\001L" "Antes de encontrar \"Rhythm Heaven Advance ESP\",\n"
            #endif
            "Era la definicion del diccionario de ser sorda al tono,\n"
            "pero ahora, la gente me dice que mi canto es mejor!\n"
            "Sigo siendo sorda al tono, claro, pero ahora soy feliz!\n"
            "\001R" "Sra. H, Edad 29, Ama de casa\n"
            "\001L" "Solo por mejorar mi sentido del ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi... un musico?\n"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Antes de encontrar \"Rhythm Paradise Advance ESP\",\n"
            #else
            "\001L" "Antes de encontrar \"Rhythm Heaven Advance ESP\",\n"
            #endif
            "Apenas tocaba el triangulo en la orquestra escolar,\n"
            "pero ahora, he llegado tan lejos, que hasta la gente\n"
            "me pide clases de mà¶sica y, consejos para mejorar!\n"
            "\001R" "Sr. A, Estudiante de arte, 18\n"
            "\001L" "Solo por mejorar mi sentido del ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi...\n"
            "\0031" "\001R" "mejor traduciendo?"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Antes de encontrar \"Rhythm Paradise Advance ESP\",\n"
            #else
            "\001L" "Antes de encontrar \"Rhythm Heaven Advance ESP\",\n"
            #endif
            "Me distraáea demasiado mientras traducáea, pero\n"
            "gracias a mi nuevo sentido de ritmo, hasta puedo\n"
            "traducir todo un juego mientras mantengo mi flow!\n"
            "\001R" "Sr. C, Estudiante de Informáctica, 19\n"
            "\001L" "Solo por mejorar mi sentido del ritmo...\n"
            "\n"
            "\0031" "\001m" "Me volvi... mejor artista?\n"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Antes de encontrar \"Rhythm Paradise Advance ESP\",\n"
            #else
            "\001L" "Antes de encontrar \"Rhythm Heaven Advance ESP\",\n"
            #endif
            "Apenas y podáea hacer un circulo, pero gracias\n"
            "a mi nuevo sentido de ritmo, ahora soy un gran\n"
            "artista! Y ahora mis amigos me adoran!\n"
            "\001R" "Sr. M, Estudiante de Artes, 16\n",
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
            "\001C" "Explicaciáin: El flow es un elemento que viene con\n"
            "el sentido de ritmo, pero no el sentido de ritmo en si.\n"
            "\001C" "\0032" "\001m" "\n"
            "\n"
            "\n"
            "\n"
            "Ritmo ÅÇ Sentido de ritmo\n"
            "\n"
            "\001C" "\0030" "\001s" "\n"
            "Explicaciáin: El ritmo es algo que pasa de manera\n"
            "constante.  El sentido de ritmo es como sientes esa\n"
            "manera que pase, expresada por la manera del flow.\n"
            "\001C" "\0031" "\001m" "\n"
            "\n"
            "Ser bueno bailando\n"
            "ÅÇ\n"
            "Buen sentido de ritmo\n"
            "\001C" "\0030" "\001s" "\n"
            "Explicaciáin: Alguien que sea muy bueno bailando no\n"
            "siempre significa que tenga un buen sentido de ritmo.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_DIAGNOSIS ("Rhythm Dáeagnosis") */ {
        /* TITLE ---------------------------------------------------------- */
            "Diagnáistico Ráetmico",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0031" "\001m" "Diagnostico Ritmico\n"
            "\0030" "\001s" "\n"
            "Dáeagnostiquemos tu sentido de ritmo.\n"
            "Escoje las respuestas con las que concuerdas!\n"
            "\n"
            "Creo que tengo un buen sentido de ritmo.\n"
            "Si - Ve a la pácgina 2!\n"
            "No - Ve a la pácgina 3!\n"
            "-1-\n"
            "\n"
            "Entre el pop y el rock, Prefiero...\n"
            "\n"
            "\n"
            "\n"
            "Rock - Ve a la pácgina 4!\n"
            "Pop - Ve a la pácgina 5!\n"
            "\n"
            "-2-\n"
            "\n"
            "Entre el Jazz y la mà¶sica clasáeca, Prefiero...\n"
            "\n"
            "\n"
            "\n"
            "Jazz - Ve a la pácgina 6!\n"
            "Clasáeca - Ve a la pácgina 7!\n"
            "\n"
            "-3-\n"
            "\n"
            "Siento que para bailar bien, necesitas un buen\n"
            "sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 8!\n"
            "No - Ve a la pácgina 9!\n"
            "\n"
            "-4-\n"
            "\n"
            "Siento que si puedes escuchar un buen ritmo,\n"
            "entonces lo puedes expresar.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 10!\n"
            "No - Ve a la pácgina 11!\n"
            "\n"
            "-5-\n"
            "\n"
            "Siento que nadie tiene un sentido de ritmo realmente.\n"
            "\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 9!\n"
            "No - Ve a la pácgina 8!\n"
            "\n"
            "-6-\n"
            "\n"
            "Siento que el sentido de ritmo es inherente,\n"
            "o sea que no se puede mejorar entrenácndolo.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 10!\n"
            "No - Ve a la pácgina 11!\n"
            "\n"
            "-7-\n"
            "\n"
            "Siento que tu sentido de ritmo es mucho mejor\n"
            "cuando tienes flow.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 12!\n"
            "No - Ve a la pácgina 13!\n"
            "\n"
            "-8-\n"
            "\n"
            "Siento que el sentido de ritmo y el flow\n"
            "son lo mismo.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 14!\n"
            "No - Ve a la pácgina 15!\n"
            "\n"
            "-9-\n"
            "\n"
            "Siento que te puedas volver popular, solo\n"
            "por tener un buen sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 16!\n"
            "No - Ve a la pácgina 17!\n"
            "\n"
            "-10-\n"
            "\n"
            "Siento que tener buen sentido del ritmo\n"
            "fáccilita enmácscarar ser sordo al tono.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 18!\n"
            "No - Ve a la pácgina 19!\n"
            "\n"
            "-11-\n"
            "\n"
            "Siento que conseguir un buen sentido de ritmo\n"
            "es mács fáccil a temprana edad.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 21!\n"
            "\n"
            "-12-\n"
            "\n"
            "Siento que puedes mejorar tu sentido\n"
            "de ritmo, siendo un adulto.\n"
            "\n"
            "\n"
            "No - Ve a la pácgina 21!\n"
            "Si - Ve a la pácgina 22!\n"
            "\n"
            "-13-\n"
            "\n"
            "Siento que el ritmo no tiene ningà¶na\n"
            "relaciáin con la vida dáearia.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 22!\n"
            "\n"
            "-14-\n"
            "\n"
            "Siento que, hasta el sentido de ritmo que\n"
            "has tenido por mucho tiempo lo puedes perder\n"
            "si es que no le das importancia.\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 20!\n"
            "\n"
            "-15-\n"
            "\n"
            "Siento que el sentido de ritmo se puede\n"
            "mejorar si entrenas mucho y duro.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 22!\n"
            "\n"
            "-16-\n"
            "\n"
            "Siento que el sentido de ritmo se puede mejorar\n"
            "en solo 30 segundos si es que le hechas ganas.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 22!\n"
            "No - Ve a la pácgina 23!\n"
            "\n"
            "-17-\n"
            "\n"
            "Siento que no siempre es bueno\n"
            "sentir un sentido de ritmo.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 20!\n"
            "\n"
            "-18-\n"
            "\n"
            "Siento que el sentido de ritmo se\n"
            "consigue en la prácctica, no la teoráea.\n"
            "\n"
            "\n"
            "Si - Ve a la pácgina 23!\n"
            "No - Ve a la pácgina 21!\n"
            "\n"
            "-19-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo de Flow" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Tienes una buena actitud con tu sentido de ritmo.\n"
            "Puede que aà¶n no tengas total confianza\n"
            "en tu sentido de ritmo aà¶n, pero probablemente\n"
            "puedas usar el ritmo para vivir una vida divertida.\n"
            "Disfruta sintiendo el flow!\n"
            "\001C" "-20-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Timido" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Asáe que te da nervios tu sentido de ritmo, huh?\n"
            "Todo el mundo tiene un sentido de ritmo.\n"
            "Si vives tu vida notado los ritmos que hay\n"
            "alrededor tuyo, tu sentido de ritmo mejorarác.\n"
            "Asegà¶rate de relajarte, vale?\n"
            "\001C" "-21-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Despreocupado" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Deberáeas aprender la diferencia entre el sentido\n"
            "de ritmo y el flow. Un buen flow no llegarác muy lejos\n"
            "si tu sentido de ritmo es malo.\n"
            "PráQstale atenciáin a tu sentido de ritmo, y\n"
            "tu ritmo podráea hasta mejorar la vibra de todos!\n"
            "\001C" "-22-\n"
            "\001C" "- Tu sentido de ritmo es -\n"
            "\0031" "\001m" "Tipo Pegadizo" "\0030" "\001s" "\n"
            "\n"
            "\001C" "Puede que te cueste un poco captar el ritmo.\n"
            "Si encuentras maneras de integrar el sentido de ritmo\n"
            "en tu vida dáearia, tal vez pueda crecer y mejorar.\n"
            "Incluso y hasta podráeas hacer las cosas mács\n"
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
            "En medio de una vida cotidáeana y sencilla,\n"
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
            "\001L" "\0030" "\001s" "DáQjanos entrenar\n"
            "\001C" "\0030" "\001s" "algo que todo el mundo tiene,\n"
            "\001R" "\0030" "\001s" "un sentido de ritmo\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Tu sentido de ritmo puede mejorar\n"
            "con practica, en especial si lo usas en\n"
            "tu rutina dáearia.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "Puedes hacer tus\n"
            "\001C" "\0030" "\001s" "actividades del dáea a dáea\n"
            "\001R" "\0030" "\001s" "mucho mács ráetmicas\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Es bueno sentir y mejorar tu sentido de ritmo\n"
            "en tu dáea a dáea, como caminando,\n"
            "cepillando tus dientes, cocinando, etc...\n"
            "Siempre debes de estar atento a tu ritmo.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Tu sentido del ritmo,\n"
            "\001C" "\0030" "\001s" "si mejoras tu flow,\n"
            "\001R" "\0030" "\001s" "se vuelve aà¶n mács genial.\n"
            "\n"
            "\001C" "\0030" "\001s" "\"Aà¶nque, un sentido de ritmo y el flow\n"
            "no son lo mismo. Intenta mejorar tu flow,\n"
            "pero sin descuidar tu sentido de ritmo.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "En una pausa o descanso,\n"
            "\001C" "\0030" "\001s" "los cráeos que no tienen paciencia\n"
            "\001R" "\0030" "\001s" "son demasiado testarudos.\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Puede ser complicado seguir el ritmo en una pausa,\n"
            "y es mács fáccil seguir el ritmo de manera anticipada,\n"
            "pero la habilidad de pausar y descansar, mejorar\n"
            "mucho tu flow.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Incluso los adultos,\n"
            "\001C" "\0030" "\001s" "tienen algo que crece sin control:\n"
            "\001R" "\0030" "\001s" "Su sentido de ritmo\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Si es que le echas ganas, tu sentido de ritmo puede\n"
            "mejorar expotencialmente, sin importar tu edad.\"\n"
            "\n"
            "\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_haiku_gfx_table,
            /* BGM */ &reading_style_haiku_bgm
        /* ---------------------------------------------------------------- */
    }
};
