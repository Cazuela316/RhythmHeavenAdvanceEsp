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
            "Verács, da un poco de vergà™enza, pero luego del\n"
            "trabajo, siempre estoy bailando con estos\n"
            "auriculares para perro! QuáQ puedo decir?\n"
            "Necesito un poco de flow a donde sea que vaya.\n"
            "Es complicado. Jej...\n"
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
            "Plucking Letter",
        /* BODY ----------------------------------------------------------- */
            "I'm an old gentleman who maintains a vegetable\n"
            "farm. So, one day, all my vegetables just started\n"
            "growing hair!\n"
            "It was so creepy! I couldn't sell them like that!\n"
            "I tried plucking the hairs, but I just couldn't get them\n"
            "all nice and smooth like a vegetable ought to be.\n"
            "Well, to lighten up the mood, I put on some music.\n"
            "Before I knew it, I found myself plucking to the beat.\n"
            "And... I plucked them clean! And it's even a little fun!\n"
            "The power of music is really something else!\n"
            "You've got to try plucking hairs off of your\n"
            "vegetables!\n"
            "I can't recommend it enough!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NIGHT_WALK ("Night Walk Riddle") */ {
        /* TITLE ---------------------------------------------------------- */
            "Night Walk Information",
        /* BODY ----------------------------------------------------------- */
            "There's this strange fellow who you might recognize\n"
            "from Night Walk. He seems to really love music.\n"
            "Apparently he's worked with music before,\n"
            "and landed a role in this game through connections.\n"
            "I ran into him in the city one time. All he said was\n"
            "\"I love music!\", and just disappeared up some stairs.\n"
            "I wonder if I'll ever meet that music-loving guy again.\n"
            "Come to think of it, I don't even know his name...\n"
            "\n"
            "Okay, time for a quiz!\n"
            "His name is...\n"
            "\n"
            "\001C" "\0031" "\001m" "á@áAáBáC-áCáBáD\n"
            "\001L" "\0030" "\001s" "\n"
            "Answer which letters go in each of the numbers!\n"
            "If you answer correctly, you'll be able to read the\n"
            "following text!\n"
            "\n"
            "\n"
            "\0031" "\001m" "\001C" "Quiz Show's Secret\n\n"
            "\0030" "\001s" "\001C" "\n"
            "In this g" "\0031" "\001m" "áB" "\0030" "\001s" "me, the" "\0031" "\001m" "á@áAáBáC" "\0030" "\001s" "er has to m" "\0031" "\001m" "áB" "\0030" "\001s" "tch\n"
            "\0030" "\001s" "the host's " "\0031" "\001m" "áD" "\0030" "\001s" "umber of button " "\0031" "\001m" "á@" "\0030" "\001s" "resses. But\n"
            "\0030" "\001s" "if you mash the butto" "\0031" "\001m" "áD" "\0030" "\001s" "s rea" "\0031" "\001m" "áAáA" "\0030" "\001s" "y f" "\0031" "\001m" "áB" "\0030" "\001s" "st instead,\n"
            "\0030" "\001s" "somethi" "\0031" "\001m" "áD" "\0030" "\001s" "g interesting can h" "\0031" "\001m" "áB" "\0030" "\001s" "ppen.\n"
            "\0030" "\001s" "It's nothing crazy or an" "\0031" "\001m" "áC" "\0030" "\001s" "thing, but it's neat!",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* SPACEBALL ("Inside Spaceball") */ {
        /* TITLE ---------------------------------------------------------- */
            "Reporte del Beisball Espacial", // esto es lo maximo que puede ser los titulos
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
            "Horse Machine's Story",
        /* BODY ----------------------------------------------------------- */
            "We were given the chance to interview Mr. F,\n"
            "inventor of the Horse Machine in the Rhythm Toys\n"
            "section, about its development.\n"
            "\n"
            "\n"
            "Mr. F: The idea came about because I just really\n"
            "wanted to share the joys of riding a horse. So\n"
            "development sort of revolved around that idea.\n"
            "\n"
            "Mr. F's comments were as simple as they were\n"
            "passionate.\n"
            "\n"
            "Mr. F: But in trying to make a game out of it, I found\n"
            "myself losing sight of that end goal. I considered\n"
            "giving up many times.\n"
            "\n"
            "It was a struggle for Mr. F, who found it difficult to\n"
            "express his vision within a standard framework.\n"
            "Mr. F: But thinking about the kinds of people who\n"
            "use the Horse Machine and get even a little joy\n"
            "out of it...\n"
            "\n"
            "Well, the hardships sort of just drift away.\n"
            "\n"
            "Mr. F, you are truly devoted to your craft. We look\n"
            "forward to seeing your next creations. Thank you.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_train_gfx_table,
            /* BGM */ &reading_style_train_bgm
        /* ---------------------------------------------------------------- */
    },

    /* MARCHING_ORDERS ("Marcher's Diary") */ {
        /* TITLE ---------------------------------------------------------- */
            "Squadmate Activity Log",
        /* BODY ----------------------------------------------------------- */
            "April 16:\n"
            "I enlisted in the Marcher group!\n"
            "I'm gonna give it my all and help everybody I can!\n"
            "\n"
            "April 20:\n"
            "Today I marched out of line with the others.\n"
            "Sarge gave me an earful for that one...\n"
            "\n"
            "April 28:\n"
            "Today we were assigned to clean the front\n"
            "of the station. This pleasant old lady came by and\n"
            "offered me some candy for my hard work.\n"
            "That made my whole day!\n"
            "\n"
            "May 4:\n"
            "I've been pretty sluggish lately.\n"
            "I'm not sure if that's what they mean by\n"
            "\"spring fever\".\n"
            "If I don't shape up soon, I might get shipped out...\n"
            "\n"
            "May 8:\n"
            "Something's up with Sarge...\n"
            "Yesterday, he told us that he's been dancing with\n"
            "some rabbits up in outer space.\n"
            "Is he... okay?\n"
            "\n"
            "May 16:\n"
            "Recently, I've been coming across other people\n"
            "who look just like Sarge...\n"
            "It's got to be my imagination, right?\n"
            "\n"
            "May 22:\n"
            "You'll never believe it! Sarge is...\n"
            "\n"
            "The log ends here.\n"
            "Just what could've been happening with Sarge?",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RAP_MEN ("Rap Report") */ {
        /* TITLE ---------------------------------------------------------- */
            "Una Cierta Estacion de Radio",
        /* BODY ----------------------------------------------------------- */
            "Hey there! I'm DJ MON-KI!\n"
            "We've got a couple of wonderful guests here today.\n"
            "Allow me to introduce the RAPMEN (RM)! Pleased\n"
            "to meet you today!\n"
            "RM: Hey, viewers at home! We are the RAPMEN!\n"
            "DJ: Your latest song is really good, huh?\n"
            "RM: Thanks! You get it now, huh?\n"
            "DJ: Uh uh! It's AWESOME!\n"
            "RM: All that said, we're kind of in a jam right now.\n"
            "DJ: O-Oh! W-What's wrong?\n"
            "RM: Well first, some knock-off rap duo sprung\n"
            "up outta nowhere! They call themselves the\n"
            "\"RAPWOMEN\", I think.\n"
            "DJ: Maybe so, huh.\n"
            "RM: Yeah. And those wannabes ate our stash of\n"
            "snacks we kept in our dressing room!\n"
            "DJ: Unbelievable!\n"
            "RM: And if that wasn't enough, they left a little\n"
            "note for us.\n"
            "DJ: What did it say?\n"
            "RM: It said \"Sweets are so AWESOME!\"\n"
            "DJ: Oh wow. How loathsome.\n"
            "RM: Right!? It was enough to make me yell...\n"
            "DJ: You were like \"Wait a sec, We LOST SOME!\"\n"
            "RM: Uh... Yeah! How do you know that?\n"
            #ifdef PARADISE
            "DJ: Because I've been playing Rhythm Paradise\n"
            "Advance! Roll the commercial!\n"
            "AD: UP your flow with Rhythm Paradise Advance!\n"
            #else
            "DJ: Because I've been playing Rhythm Heaven\n"
            "Advance! Roll the commercial!\n"
            "AD: UP your flow with Rhythm Heaven Advance!\n"
            #endif
            "Available now! Game and system sold separately.\n"
            "End.",
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
            "Can't Wait For You\n"
            "Song: Sohshi Tanaka\n"
            "Music: TSUNKU\n"
            "Arrangement: Koichi Yuasa\n"
            "Translation: Castle/castierook\n"
            "\n"
            "(This song appears in Remix 5.)\n"
            "\n"
            "I can't keep waiting forever\n"
            "Tonight we'll say our goodbyes\n"
            "I wish I loved you more when you were by my side\n"
            "The lonely nights, they bring back memories that\n"
            "made it all so bright\n"
            "I'm lost in thought at times that leave me longing...\n"
            "\n"
            "When we met under the city lights\n"
            "Just like a flame, we burned hot and bright\n"
            "Without a care, just a warm embrace\n"
            "It was our love without a doubt\n"
            "\n"
            "But this act was just a fleeting play\n"
            "Our hearts started to drift away\n"
            "When did our kisses start to feel so cold?\n"
            "I didn't realize 'till now\n"
            "\n"
            "My dreams are clouding up into a haze\n"
            "And you're clouding up into a haze\n"
            "There's a blaze, in my chest\n"
            "All this pain, I can't rest\n"
            "And I can't take it anymore!\n"
            "\n"
            "I can't keep waiting forever\n"
            "Tonight we'll say our goodbyes\n"
            "I wish I loved you more when you were by my side\n"
            "The lonely nights, they bring back memories\n"
            "that made it all so bright\n"
            "I'm lost in thought at times that leave me longing...\n"
            "\n"
            "Ohhh!\n"
            "\n"
            "I can't keep waiting forever\n"
            "Tonight we'll say our goodbyes\n"
            "To dreams we could have reached\n"
            "if you were by my side\n"
            "Don't you recall that place where we would stay\n"
            "before the light had died?\n"
            "The empty space you left will keep me longing...\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_sea_gfx_table,
            /* BGM */ &reading_style_sea_bgm
        /* ---------------------------------------------------------------- */
    },

    /* REMIX8 ("The Final Letter") */ {
        /* TITLE ---------------------------------------------------------- */
            "Final Letter",
        /* BODY ----------------------------------------------------------- */
            "You received this Final Letter from\n"
            "the Rhythm League.\n"
            "\n"
            "\"Congratulations on getting a Perfect on Remix 8!\n"
            "Such a feat certainly is impressive! ...is how I should\n"
            "be congratulating you, but I won't.\n"
            "You have performed outstandingly here in\n"
            #ifdef PARADISE
            "Rhythm Paradise Advance.\n"
            #else
            "Rhythm Heaven Advance.\n"
            #endif
            "That much is undeniable, and I fully recognize it.\n"
            "You are the best! One of the greatest! ...is how I feel,\n"
            "but that's enough praise.\n"
            "See, any rhythm you experienced in this game is just\n"
            "a tiny fraction of a world of rhythm.\n"
            "If this experience has made you more interested in\n"
            "rhythm at all, we strongly encourage learning more\n"
            "about it. Because developing your flow is the best!\n"
            "It can't be recommended enough! And... well... ahem.\n"
            "I should stop getting excited and start recommending.\n"
            "We're serious.\n"
            "We really want you to develop your flow even further!\n"
            "\n"
            "We believe you have the potential to lead a world\n"
            "of rhythm!\n"
            "In fact, we can ONLY believe in you!\n"
            "You really are the best!\n"
            "Thank you so much for playing!\"\n"
            "\n"
            "\001R" "Rhythm League Representative\n"
            "\001R" "Space Gramps",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* NINJA_BODYGUARD ("The Ninja Scroll") */ {
        /* TITLE ---------------------------------------------------------- */
            "Ninja Scroll",
        /* BODY ----------------------------------------------------------- */
            "Nice to meet you all. I'm Tanaka. The other day I\n"
            "found a bizarre scroll in the back of storage.\n"
            "Written was the following:\n"
            "\n"
            "\"To you who reads this: You did not come across\n"
            "this scroll by chance. I used the powers of ninjutsu\n"
            "to ensure that it would reach you. Do you understand?\n"
            "Indeed, the writer of this scroll is not only a ninja\n"
            "but your ancestor.\n"
            "The other day, I protected my lord from a storm\n"
            "of arrows. I risked my life.\n"
            "The night following this daunting task,\n"
            "a dream came to me. I saw a young man.\n"
            "A discontented man with his back against the world.\n"
            "According to the fortune teller, that young man is you.\n"
            "Much like me, you risk your life to protect someone.\n"
            "A young woman. She too is said to be a descendant\n"
            "of my lord.\n"
            "I know not if you can comprehend this scroll, but\n"
            "if so, I ask that you continue to protect her.\"\n"
            "\n"
            "Now, there actually is a woman in my heart.\n"
            "The other day, I saved her from a slingshot attack.\n"
            "I put my life on the line. Who knows what could\n"
            "happen next? My ancestor's ninjutsu might just\n"
            "help in a pinch one day.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_cherry_gfx_table,
            /* BGM */ &reading_style_cherry_bgm
        /* ---------------------------------------------------------------- */
    },

    /* TOSS_BOYS ("Rhythm Stand-Up") */ {
        /* TITLE ---------------------------------------------------------- */
            "Rhythm Manzai",
        /* BODY ----------------------------------------------------------- */
            "Yellow: Hello, I'm Yellow!\n"
            "Blue: Hello, I'm Blue!\n"
            "Both: Y&B! Nice to meet you!\n"
            "Yellow: Hey Blue! Did you hear?\n"
            "I'm taking a music class!\n"
            "Blue: Wait, really? No way! What instrument are you\n"
            "learning, Yellow? Is it the guitar? Drums maybe?\n"
            "Yellow: Well, my part is...\n"
            "Blue: Yeah? What?\n"
            "Yellow: I'll be playing rhythm!\n"
            "Blue: Wha? You can't \"play\" rhythm, Yellow.\n"
            "It's not an instrument. Where did you hear that?\n"
            "Yellow: Well, I told the teacher I wanted to play\n"
            "drums,\n"
            "and they told me I should practice \"rhythm\" first!\n"
            "Blue: Yellow, I think they meant you need to\n"
            "improve your sense of rhythm.\n"
            "Yellow: Oh yeah, that's much closer! That's\n"
            "incredible! How did you know? Are you psychic?\n"
            "Blue: How did I- Why wouldn't I know!?\n"
            "It's just common sense!\n"
            "Yellow: Hey, man! No need to get so angry.\n"
            "Blue: Ah... You know, you're right, I'm sorry...\n"
            "Yellow: Oop! Blue, your fly is down!\n"
            "Blue: Huh!? Wait, really?\n"
            "Yellow: No, I lied.\n"
            "Blue: Why I oughta...!\n"
            "Yellow: Why I oughta- Man, that's kind of a\n"
            "cheesy line, don't you think?\n"
            "Blue: Shut it... I've had enough.\n"
            "Yellow: GRAAAGH!\n"
            "Blue: Huh!? Why are you mad? What did I do?\n"
            "Yellow: Well, weren't we talking about my music\n"
            "class?\n"
            "Blue: Huh? Oh, yeah, that's right.\n"
            "Yellow: Geez... way to derail the whole thing...\n"
            "Blue: Ah, I'm sorry... wait, I'M sorry?\n"
            "You were the one who-- by lying that my fly was down!\n"
            "Yellow: Hey hey, no need to get so angry.\n"
            "Blue: Oh, that's rich! Anyway, what about your\n"
            "sense of rhythm?\n"
            "Yellow: Right! My classmates said that my\n"
            "\"scents of rhythm\" will improve with practice.\n"
            "Blue: Your SENSE of rhythm! Idiot!\n"
            "Both: Thank you! You've been a wonderful audience!\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_manzai_gfx_table,
            /* BGM */ &reading_style_manzai_bgm
        /* ---------------------------------------------------------------- */
    },

    /* FAN_MAIL ("Fan Mailbag") */ {
        /* TITLE ---------------------------------------------------------- */
            "Voices of Joy",
        /* BODY ----------------------------------------------------------- */
            "We've received many letters from\n"
            #ifdef PARADISE
            "satisfied players of Rhythm Paradise Advance.\n"
            #else
            "satisfied players of Rhythm Heaven Advance.\n"
            #endif
            "So, SO many in fact(!), that we can't\n"
            "show all of them, but here are just a few\n"
            "of our players' thoughts!\n"
            "\n"
            "\n"
            "\n"
            "\n"
            "Just by improving my sense of rhythm...\n"
            "\n"
            "\0031" "\001m" "I've become... popular?\n"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "Before I found \"Rhythm Paradise Advance\",\n"
            #else
            "Before I found \"Rhythm Heaven Advance\",\n"
            #endif
            "I had no luck with women, but now I'm a real hot shot\n"
            "with a new lease on life!\n"
            "\n"
            "\001R" "Mr. T, Age 38, Office Worker\n"
            "\001L" "Just by improving my sense of rhythm...\n"
            "\n"
            "\0031" "\001m" "I've become...\n"
            "\0031" "\001R" "a better singer?"
            "\0030" "\001s" "\n"
            #ifdef PARADISE
            "\001L" "Before I found \"Rhythm Paradise Advance\",\n"
            #else
            "\001L" "Before I found \"Rhythm Heaven Advance\",\n"
            #endif
            "I was the textbook definition of tone-deaf,\n"
            "but lately people have told me my singing is much nicer!\n"
            "I'm still tone deaf, of course, but at least I'm happy!\n"
            "\001R" "Mrs. H, Age 29, Housewife\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_mail_gfx_table,
            /* BGM */ &reading_style_mail_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_FORMULA ("The Rhythm Formula") */ {
        /* TITLE ---------------------------------------------------------- */
            "Understanding Rhythm",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0032" "\001m" "\n"
            "\n"
            "Sense of rhythm ÅΩ Flow\n"
            "\n"
            "Sense of rhythm ÅÇ Flow\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "Explanation: Flow is an element included in anyone's\n"
            "sense of rhythm, but not a sense of rhythm itself.\n"
            "\001C" "\0032" "\001m" "\n"
            "\n"
            "\n"
            "\n"
            "Rhythm ÅÇ Sense of rhythm\n"
            "\n"
            "\001C" "\0030" "\001s" "\n"
            "Explanation: Rhythm is what ticks at a steady pace.\n"
            "A sense of rhythm is how you maintain that pace,\n"
            "expressed naturally by way of flow.\n"
            "\001C" "\0031" "\001m" "\n"
            "\n"
            "\n"
            "Good dancing ÅÇ Good sense of rhythm\n"
            "\n"
            "\001C" "\0030" "\001s" "\n"
            "Explanation: Someone who's a good dancer does not\n"
            "inherently have a good sense of rhythm.",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_classroom_gfx_table,
            /* BGM */ &reading_style_classroom_bgm
        /* ---------------------------------------------------------------- */
    },

    /* RHYTHM_DIAGNOSIS ("Rhythm Diagnosis") */ {
        /* TITLE ---------------------------------------------------------- */
            "Rhythm Type Diagnosis",
        /* BODY ----------------------------------------------------------- */
            "\001C" "\0031" "\001m" "Rhythm Diagnosis\n"
            "\0030" "\001s" "\n"
            "Let's diagnose your sense of rhythm.\n"
            "Choose the ones that apply to you!\n"
            "\n"
            "I think that I have a good sense of rhythm.\n"
            "Yes - Go to Page 2!\n"
            "No - Go to Page 3!\n"
            "-1-\n"
            "\n"
            "Between Rock and Pop music, I like...\n"
            "\n"
            "\n"
            "\n"
            "Rock - Go to Page 4!\n"
            "Pop - Go to Page 5!\n"
            "\n"
            "-2-\n"
            "\n"
            "Between Jazz and Classical music, I like...\n"
            "\n"
            "\n"
            "\n"
            "Jazz - Go to Page 6!\n"
            "Classical - Go to Page 7!\n"
            "\n"
            "-3-\n"
            "\n"
            "I think you need a good sense of rhythm to dance well.\n"
            "\n"
            "\n"
            "\n"
            "Yes - Go to Page 8!\n"
            "No - Go to Page 9!\n"
            "\n"
            "-4-\n"
            "\n"
            "I think that if you can hear good rhythm,\n"
            "then you can express it.\n"
            "\n"
            "\n"
            "Yes - Go to Page 10!\n"
            "No - Go to Page 11!\n"
            "\n"
            "-5-\n"
            "\n"
            "I don't think anyone has a sense of rhythm at all.\n"
            "\n"
            "\n"
            "\n"
            "Yes - Go to Page 9!\n"
            "No - Go to Page 8!\n"
            "\n"
            "-6-\n"
            "\n"
            "I think that a sense of rhythm is inherent,\n"
            "meaning you can't improve it with training.\n"
            "\n"
            "\n"
            "Yes - Go to Page 10!\n"
            "No - Go to Page 11!\n"
            "\n"
            "-7-\n"
            "\n"
            "I think that your sense of rhythm is cooler\n"
            "when you have flow.\n"
            "\n"
            "\n"
            "Yes - Go to Page 12!\n"
            "No - Go to Page 13!\n"
            "\n"
            "-8-\n"
            "\n"
            "I think that a sense of rhythm and\n"
            "flow are just about the same thing.\n"
            "\n"
            "\n"
            "Yes - Go to Page 14!\n"
            "No - Go to Page 15!\n"
            "\n"
            "-9-\n"
            "\n"
            "I don't think you can become popular just by\n"
            "having a good sense of rhythm.\n"
            "\n"
            "\n"
            "Yes - Go to Page 16!\n"
            "No - Go to Page 17!\n"
            "\n"
            "-10-\n"
            "\n"
            "I think that having a good sense of rhythm\n"
            "makes it easy to mask being tone deaf.\n"
            "\n"
            "\n"
            "Yes - Go to Page 18!\n"
            "No - Go to Page 19!\n"
            "\n"
            "-11-\n"
            "\n"
            "I think that a good sense of rhythm is easier\n"
            "to acquire at a young age.\n"
            "\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 21!\n"
            "\n"
            "-12-\n"
            "\n"
            "I don't think you can improve your\n"
            "sense of rhythm after becoming an adult.\n"
            "\n"
            "\n"
            "Yes - Go to Page 21!\n"
            "No - Go to Page 22!\n"
            "\n"
            "-13-\n"
            "\n"
            "I think that rhythm and\n"
            "everyday life are unrelated.\n"
            "\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 22!\n"
            "\n"
            "-14-\n"
            "\n"
            "I think that even a sense of rhythm that you've had\n"
            "for over three years can quickly be lost\n"
            "if you're not mindful of it.\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 20!\n"
            "\n"
            "-15-\n"
            "\n"
            "I think that your sense of rhythm will\n"
            "improve if you train long and hard.\n"
            "\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 22!\n"
            "\n"
            "-16-\n"
            "\n"
            "I think that your sense of rhythm can improve\n"
            "in just 30 seconds if you stay mindful of it.\n"
            "\n"
            "\n"
            "Yes - Go to Page 22!\n"
            "No - Go to Page 23!\n"
            "\n"
            "-17-\n"
            "\n"
            "I don't think it's a good thing to\n"
            "always feel a sense of rhythm.\n"
            "\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 20!\n"
            "\n"
            "-18-\n"
            "\n"
            "I think that a good sense of rhythm is\n"
            "acquired by repetition, not theory.\n"
            "\n"
            "\n"
            "Yes - Go to Page 23!\n"
            "No - Go to Page 21!\n"
            "\n"
            "-19-\n"
            "\001C" "Your Sense of Rhythm\n"
            "\0031" "\001m" "Flow Type" "\0030" "\001s" "\n"
            "\n"
            "\001C" "You have a good attitude about your sense of rhythm.\n"
            "You might not have confidence in your\n"
            "sense of rhythm quite yet, but you could probably\n"
            "use rhythm to lead an enjoyable life.\n"
            "Enjoy getting into the flow!\n"
            "\001C" "-20-\n"
            "\001C" "Your Sense of Rhythm\n"
            "\0031" "\001m" "Shy Type" "\0030" "\001s" "\n"
            "\n"
            "\001C" "You're nervous about your sense of rhythm, huh?\n"
            "Everyone has a sense of rhythm.\n"
            "If you live life being mindful of the rhythms\n"
            "around you, your sense of rhythm can only grow.\n"
            "Make sure to relax.\n"
            "\001C" "-21-\n"
            "\001C" "Your Sense of Rhythm\n"
            "\0031" "\001m" "Carefree Type" "\0030" "\001s" "\n"
            "\n"
            "\001C" "You should learn the difference between a sense\n"
            "of rhythm and flow. A good flow can only go so far\n"
            "if your sense of rhythm is poor.\n"
            "Steady your sense of rhythm and\n"
            "your flow could improve everyone's mood.\n"
            "\001C" "-22-\n"
            "\001C" "Your Sense of Rhythm\n"
            "\0031" "\001m" "Catchy Type" "\0030" "\001s" "\n"
            "\n"
            "\001C" "You may have a hard time grasping rhythm.\n"
            "If you find ways to incorporate your sense of rhythm\n"
            "into your daily routine,\n"
            "perhaps it can grow and improve.\n"
            "It might even make things more fun that way!\n"
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
            "Rhythm Haiku Collection",
        /* BODY ----------------------------------------------------------- */
            "\n"
            "\001L" "\0030" "\001s" "Let us exercise\n"
            "\001C" "\0030" "\001s" "something which everyone has,\n"
            "\001R" "\0030" "\001s" "a sense of rhythm\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"Your sense of rhythm can be developed with\n"
            "practice, especially when it's worked into\n"
            "your daily routine.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "You can make all your\n"
            "\001C" "\0030" "\001s" "everyday activities\n"
            "\001R" "\0030" "\001s" "much more rhythmical\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"It's good to feel and improve your sense of rhythm\n"
            "throughout your day, such as while walking,\n"
            "brushing your teeth, cooking, etc...\n"
            "You should always keep rhythm in mind.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Your sense of rhythm,\n"
            "\001C" "\0030" "\001s" "if your flow can be improved,\n"
            "\001R" "\0030" "\001s" "gets even cooler\n"
            "\n"
            "\001C" "\0030" "\001s" "\"However, a sense of rhythm and good flow are not\n"
            "one and the same. Try to improve your flow while\n"
            "also being mindful of your sense of rhythm.\"\n"
            "\n"
            "\n"
            "\001L" "\0030" "\001s" "In a break or pause\n"
            "\001C" "\0030" "\001s" "children who lack patience are\n"
            "\001R" "\0030" "\001s" "simply too stubborn\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"It can be difficult to count accurately during a rest,\n"
            "and it's easy to resume the beat prematurely, but the\n"
            "ability to stay calm and wait affects your \n"
            "flow the most.\"\n"
            "\n"
            "\001L" "\0030" "\001s" "Even in adults,\n"
            "\001C" "\0030" "\001s" "something still rapidly grows:\n"
            "\001R" "\0030" "\001s" "Their sense of rhythm\n"
            "\001L" "\0030" "\001s" "\n"
            "\001C" "\0030" "\001s" "\"From simply being mindful of it, your sense of rhythm\n"
            "can grow exponentially, no matter your age.\"\n"
            "\n"
            "\n",
        /* STYLE ---------------------------------------------------------- */
            /* GFX */ reading_style_haiku_gfx_table,
            /* BGM */ &reading_style_haiku_bgm
        /* ---------------------------------------------------------------- */
    }
};
