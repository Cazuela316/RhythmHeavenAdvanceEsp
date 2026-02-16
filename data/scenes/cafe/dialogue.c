#include "global.h"
#include "graphics.h"
#include "text.h"
#include "src/scenes/cafe.h"
#include "graphics/cafe/cafe_graphics.h"


  /* CAFE - DIALOGUE */


// [D_089cd2e8] Dialogue - First Visit
    /* -------------------------------- */
        //
        // Welcome. This is your
        // first time here, isn't it?
        //
    /* -------------------------------- */
        // This is the Cafe.
        // <When you can't finish a game>,
        // or when you just want a break,
        // please come here and relax.
    /* -------------------------------- */
        //
        // I'm pretty good at Rhythm Games.
        // If you need help, <come to the Cafe>.
        //
    /* -------------------------------- */
        //
        // I'm still unpacking boxes, so
        // please come back in a bit.
        //
    /* -------------------------------- */
        //
        //
        // See you later.
        //
    /* -------------------------------- */

const char *cafe_dialogue_first_visit[] = {
    /* ------------------------------------------------ */
        "\n"
        "Bienvenido a la caf‡Qteria.\n"
        "Es tu primera vez aqui, no?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Sientete libre de venir cuando sientas\n"
        "que algun juego " "\0051" "\0015" "es muy dificil " "\0054" "\0018" "o\n"
        "si solo quieres conversar un rato.",
    /* ------------------------------------------------ */
        "\n"
        "Si hay algun en donde\n"
        "pueda ayudarte," "\0051" "\0015" "\n"
        "para eso estoy." "\0054" "\0018" "",
    /* ------------------------------------------------ */
        "Estoy un poco ocupado ahora,\n"
        "reci‡Qn acabamos de abrir,\n"
        "pero despu‡Qs tendremos\n"
        "mas tiempo para hablar.",
    /* ------------------------------------------------ */
        "\n"
        "Nos vemos!\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd300] Dialogue - Come Back Later
    /* -------------------------------- */
        //
        //
        // Come back in a while!
        //
    /* -------------------------------- */

const char *cafe_dialogue_come_back_later[] = {
    /* ------------------------------------------------ */
        "\n"
        "Estoy atendiendo unos clientes\n"
        "Te hablo mas tarde.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd308] Dialogue - Keep Trying
    /* -------------------------------- */
        //
        // You know, after a few tries
        // I think you'll manage that superb.
        //
    /* -------------------------------- */
        //
        // Just keep moving to the music,
        // and you'll have fun doing it, too.
        //
    /* -------------------------------- */
        //
        // Don't let it frustrate you.
        // You're supposed to enjoy yourself.
        //
    /* -------------------------------- */

const char *cafe_dialogue_keep_trying[] = {
    /* ------------------------------------------------ */
        "\n"
        "Sigue practicando y lo h‡cras\n"
        "bien. Te lo aseguro!\n" 
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Estoy bastante seguro que\n"
        "solo jugar siguiendo la mˆ¦sica\n"
        "es divertido de por s‡e.",
    /* ------------------------------------------------ */
        "\n"
        "Intenta no estresarte por ah‡e\n"
        "afuera. Asegurate de pasarla bien.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd318] Dialogue - Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Sorry for yelling. I just got
        // a little too excited there.
        //
    /* -------------------------------- */
        //
        // Please try your best
        // for those Perfects.
        // See you soon!
    /* -------------------------------- */

const char *cafe_dialogue_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "...Perdon por gritar. Me emocione\n"
        "un poco.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Buena suerte con esos perfectos!\n"
        "Nos vemos despues.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd324] Dialogue - Not Practicing for the Perfect Campaign
    /* -------------------------------- */
        //
        // Is that right? Loose lips can sink
        // friendships... please forgive me.
        //
    /* -------------------------------- */
        //
        // Please enjoy the
        // game. See you!
        //
    /* -------------------------------- */

const char *cafe_dialogue_not_practicing_perfect[] = {
    /* ------------------------------------------------ */
        "\n"
        "Ah en serio? Mis disculpas entonces.\n"
        "Supongo que no deberia apegarme\n"
        "tanto a los rumores.",
    /* ------------------------------------------------ */
        "\n"
        "Disfruta los juegos a tu ritmo,\n"
        "vale? Nos vemos despues.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd330] Dialogue - All Perfects Cleared
    /* -------------------------------- */
        //
        // You must have excellent rhythm
        // sense to have gotten this far!
        //
    /* -------------------------------- */
        //
        // Oh, I'm so happy I think
        // I might just start to cry.
        //
    /* -------------------------------- */
        //
        // Well, in celebration I've added
        // more songs to the studio.
        //
    /* -------------------------------- */
        //
        // Wow. It looks like you've
        // mastered the game. Not bad.
        //
    /* -------------------------------- */
        //
        // Had enough, I suppose? Go
        // get some rest. I'll be waiting.
        //
    /* -------------------------------- */

const char *cafe_dialogue_all_perfects_clear[] = {
    /* ------------------------------------------------ */
        "\n"
        "Si has llegado hasta aqui, tienes"
        "un sentido del ritmo fuera\n"
        "de este mundo!",
    /* ------------------------------------------------ */
        "\n"
        "Estoy muy orgulloso de ti,\n"
        "Hasta solte lagrimas!\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Se que no es mucho,\n"
        "pero he abierto mas canciones en\n"
        "la rocola, solo para ti.\n",
    /* ------------------------------------------------ */
        "\n"
        "asi que eso significa que has coleccionado\n"
        "todo?\n"
        "Impresionante!",
    /* ------------------------------------------------ */
        "\n"
        "Gran trabajo, amigo.\n"
        "Te mereces un descanso.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd348] Praise
    /* -------------------------------- */
        //
        //
        // Not too bad!!
    /* -------------------------------- */
        //
        //
        // You're good!!
    /* -------------------------------- */
        //
        //
        // Congratulations!!
    /* -------------------------------- */
        //
        //
        // Good job!!
    /* -------------------------------- */
        //
        //
        // Unbelievable!!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_praise[] = {
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Increible!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Asombroso!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Felicidades!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "Enhorabuena!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
    "\0032" "\001l" "\0051" "\0015" "\n"
    "\n"
    "No puedo creerlo!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd35c] Encouragement
    /* -------------------------------- */
        //
        //
        // <Go for it!>
    /* -------------------------------- */
        //
        //
        // <Fight!>
    /* -------------------------------- */
        //
        //
        // <Go! Go!>
    /* -------------------------------- */
        //
        //
        // Good luck!
    /* -------------------------------- */
        //
        //
        // I was moved!
    /* -------------------------------- */

const char *cafe_dialogue_shouts_cheer[] = {
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Tu puedes!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Dalo todo!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Sigue asi!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Buena suerte!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
        "\0032" "\001l" "\0051" "\0015" "\n"
        "\n"
        "Estoy impresionado!" "\0030" "\001s" "\0054" "\0018",
    /* ------------------------------------------------ */
};


// [D_089cd370] Dialogue - Rhythm Sense
    /* -------------------------------- */
        //
        // By the way, I wonder how
        // Rhythm Sense is for humans?
        //
    /* -------------------------------- */
        //
        // Well, not that I'm very
        // aware of it myself.
        //
    /* -------------------------------- */
        //
        // But you'll be a bit happier once you
        // find your Rhythm Sense, I'm sure.
        //
    /* -------------------------------- */
        //
        // Maybe I should try a little harder
        // to get good at Rhythm Heaven...
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_sense[] = {
    /* ------------------------------------------------ */
        "\n"
        "Por cierto, el sentido del ritmo\n"
        "es diferente en humanos?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bueno, no es como si mi sentido del\n"
        "ritmo el mejor, pero...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Cuando tu sentido del ritmo\n"
        "mejora... seguro es\n"
        "euforico, no?",
    /* ------------------------------------------------ */
        "\n"
        "Tal vez deber‡ea probar esos\n"
        "juegos de ritmo...\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd384] Dialogue - Offbeats
    /* -------------------------------- */
        //
        // I hear the word "offbeat" often.
        // Do you know what an "offbeat" is?
        //
    /* -------------------------------- */
        // Honestly, I wasn't sure
        // what it meant either.
        // So, the other day I looked
        // up the definition.
    /* -------------------------------- */
        //
        // How do I explain it...
        // Well, you naturally clap
        // your hands to music, right?
    /* -------------------------------- */
        // Halfway between one clap
        // and the next (the "onbeats")
        // is called the "offbeat".
        // At least, so I understand.
    /* -------------------------------- */
        // Did you know that already?
        // Sorry if it seems like I'm
        // talking down to you.
        // Anyways, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_offbeats[] = {
    /* ------------------------------------------------ */
        "\n"
        "Seguramente hayas escuchado de algo\n"
        "llamado contratiempo.\n"
        "Sabes lo que es?",
    /* ------------------------------------------------ */
        "\n"
        "No soy ningˆ¦n experto pero creo\n"
        "que le he agarrado el truco.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Asi que, supongo que aplaudes junto\n"
        "con los pulsos de la musica, no?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Bueno, el contratiempo se supone que\n"
        "el punto exacto en medio de cada una\n"
        "de tus palmadas.",
    /* ------------------------------------------------ */
        "O al menos eso creo, No soy muy bueno\n"
        "explicando estas cosas, pero espero te\n"
        "ayude un poco.\n"
        "Nos vemos luego.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd39c] Dialogue - Rhythm Test
    /* -------------------------------- */
        //
        // Say, when was the last time you
        // checked your "Rhythm Test" score?
        //
    /* -------------------------------- */
        //
        // I just tried it again yesterday, but
        // 65 points seems to be my limit...
        //
    /* -------------------------------- */
        //
        // I always have trouble with
        // the rests in the second test.
        //
    /* -------------------------------- */
        //
        // Counting to yourself is hard, isn't it?
        // I always go too fast or lose my place.
        //
    /* -------------------------------- */
        //
        // Well, nothing we can do but practice.
        // Take care for now.
        //
    /* -------------------------------- */

const char *cafe_dialogue_rhythm_test[] = {
    /* ------------------------------------------------ */
        "\n"
        "Cuentame, has probado\n"
        "el Ritmometro de nuevo?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Yo si que le probado.\n"
        "Pero mi maximo son 65 puntos.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "El segundo Test si que\n"
        "es complicado, no crees?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Contar por tu cuenta...\n"
        "Ahora que lo digo, suena un poco\n"
        "tonto, no crees?\n",
    /* ------------------------------------------------ */
        "\n"
        "Pero bueno, la practica hace al maestro.\n"
        "Nos vemos despues.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3b4] Dialogue - Drum Lessons
    /* -------------------------------- */
        //
        // Let me ask... have you tried the
        // Drum Lessons in the Prize Corner?
        //
    /* -------------------------------- */
        //
        // I take lessons once a week, but
        // I don't really seem to improve.
        //
    /* -------------------------------- */
        // The teacher is really strict.
        // I asked him for an easier
        // lesson, but he told me to
        // just keep on trying my best.
    /* -------------------------------- */
        //
        // You'll find it's hard to quit
        // once you start a lesson.
        //
    /* -------------------------------- */
        // Maybe it's for the best.
        // For musical instruments, you
        // just have to keep at it.
        // You should try your best, too.
    /* -------------------------------- */

const char *cafe_dialogue_drum_lessons[] = {
    /* ------------------------------------------------ */
        "\n"
        "Has checado las lecciones que\n"
        "estan dentro del toca bateria?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "He estado tomando lecciones cada semana,\n"
        "pero siento que no mejoro.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Mi profe me dijo que tengo un\n"
        "problemita para medir mi ritmo,\n"
        "que no deberia exigirme tanto.",
    /* ------------------------------------------------ */
        "\n"
        "Pero una vez entras,\n"
        "es dificil parar.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Aunque si, es obvio que no me puedo\n"
        "volver un maestro en un solo dia.\n"
        "Hay que tomarse las cosas con calma.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3cc] Dialogue - Staying Up All Night
    /* -------------------------------- */
        //
        // By the way, right now
        // I'm terribly tired...
        //
    /* -------------------------------- */
        //
        // I was up all last night playing.
        // I just couldn't stop myself...
        //
    /* -------------------------------- */
        //
        // What? Oh, I was talking to myself.
        // It was a monologue... sorry.
        //
    /* -------------------------------- */
        //
        // Learn from me, and don't forget
        // to take a break every so often.
        // Anyway, see you again.
    /* -------------------------------- */

const char *cafe_dialogue_adhd[] = {
    /* ------------------------------------------------ */
        "\n"
        "Dios, pero vaya que estoy cansado...\n"
        "\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Anoche me quede jugando hasta no se\n"
        "que hora...\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Oops! Disculpa. Hablaba a mi mismo.\n"
        "No te preocupes.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Te gustaria salir a dar una vuelta conmigo?\n"
        "O sea, si quieres, claro.\n"
        "Nos vemos despues.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3e0] Dialogue - Coffee
    /* -------------------------------- */
        //
        // By the way, here's the
        // coffee you ordered.
        //
    /* -------------------------------- */
        //
        // Hm? You didn't order it?
        // Ah, I see. This is actually
        // for the guy next to you...
    /* -------------------------------- */
        //
        // Well... he isn't a talkative person,
        // but you seem to be getting along.
        //
    /* -------------------------------- */
        //
        // All I can do is pour
        // the coffee, but... heh.
        //
    /* -------------------------------- */

const char *cafe_dialogue_coffee[] = {
    /* ------------------------------------------------ */
        "\n"
        "Bien, aqui esta tu cafe.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Espera, no pediste un cafe?\n"
        "Oh, es de la persona que esta\n"
        "al lado tuyo. Oops.",
    /* ------------------------------------------------ */
        "\n"
        "El no es muy comunicativo, pero\n"
        "es muy amigable, y supongo que\n"
        "generoso igual.",
    /* ------------------------------------------------ */
        "\n"
        "Ah? Claro que puedo hacer cafe, pero\n"
        "tengo que mejorar en lo demas. Jeje...\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd3f4] Dialogue - Dog
    /* -------------------------------- */
        //
        // By the way, if you hadn't
        // noticed, I'm actually a dog.
        //
    /* -------------------------------- */
        //
        // I'm not one of those young pups,
        // either. I'm nine years old.
        //
    /* -------------------------------- */
        //
        // When you get to be my age,
        // time really does seem to fly.
        //
    /* -------------------------------- */
        //
        // Hey, you're a human, right?
        // Well, despite our species I still
        // hope that we can get along
    /* -------------------------------- */

const char *cafe_dialogue_dog_barista[] = {
    /* ------------------------------------------------ */
        "\n"
        "Por cierto, Soy un perro.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Acabo de cumplir 9. Bastante agil\n"
        "para mi edad, si me preguntas.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "El tiempo pasa super rapido, cuando\n"
        "eres igual de viejo que yo.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Eres un humano, verdad? Se supone\n"
        "que debo ser tu mejor amigo.\n"
        "Asi que espero nos llevemos bien!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd408] Dialogue - Music
    /* -------------------------------- */
        //
        // By the way, what do
        // you do when you're sad?
        // I always listen to music.
    /* -------------------------------- */
        //
        // Taking out a good old record and
        // reminiscing about the past
        // always makes me feel better.
    /* -------------------------------- */
        //
        // Music is strange, isn't it?
        // It has this mysterious
        // power to heal the heart.
    /* -------------------------------- */
        //
        // Just don't think that good
        // rhythm makes you qualified
        // to be a doctor, ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_healing_with_music[] = {
    /* ------------------------------------------------ */
        "\n"
        "Cuentame, que haces cuando estas\n"
        "triste para alegrarte?\n"
        "Por mi parte, escucho musica.",
    /* ------------------------------------------------ */
        "\n"
        "Re escuchar mis discos favoritos\n"
        "y dar un paseo por la nostalgia...\n"
        "Eso siempre logra relajarme.",
    /* ------------------------------------------------ */
        "\n"
        "La musica si que es rara. Por que\n"
        "tendra ese tipo de poder en nosotros?\n"
        "Te lo has preguntado?",
    /* ------------------------------------------------ */
        "\n"
        "Tal vez si lo estudiara lo sabria,\n"
        "pero no es el caso! Disculpa! Jeje.\n"
        "\n",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd41c] Dialogue - Speaking Through Rhythm
    /* -------------------------------- */
        //
        // Say... did you know that you can
        // have a conversation with rhythm?
        //
    /* -------------------------------- */
        //
        // By attaching words and meanings
        // to certain beats, you can have a
        // conversation without speaking.
    /* -------------------------------- */
        // For example... you could play
        // a drum beat to ask "How are
        // you?" or say "Please come
        // visit!" even from far away.
    /* -------------------------------- */
        //
        // I learned it from another
        // customer, and now I want
        // to try it for myself.
    /* -------------------------------- */
        // Then again, if we gave speeches
        // with bongos or the neighbors
        // argued with trumpets, it'd get
        // noisy, don't you think? Ha ha ha.
    /* -------------------------------- */

const char *cafe_dialogue_speaking_with_music[] = {
    /* ------------------------------------------------ */
        "\n"
        "He escuchado que puedes tener una\n"
        "conversacion usando solo ritmo.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Puedes poner palabras y significados\n"
        "detras de diferentes ritmos, como el\n"
        "codigo morse y hablar sin decir nada.",
    /* ------------------------------------------------ */
        "\n"
        "Como, golpear uno de esos tambores\n"
        "de taiko, y asi comunicarte a\n"
        "metros de alguien.",
    /* ------------------------------------------------ */
        "\n"
        "O al menos eso es lo que me dijo un\n"
        "cliente. A que no suena super\n"
        "divertido?",
    /* ------------------------------------------------ */
        "\n"
        "Pero imagina discursos electoriales\n"
        "o discuciones con bongos...\n"
        "Sera puro ruido. Jajaja!",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd434] Dialogue - Ranks and Medals
    /* -------------------------------- */
        //
        // By the way, have you ever
        // gotten a "Superb" rating on a game?
        //
    /* -------------------------------- */
        //
        // There are three grades, you know:
        // "Try Again", "OK" and "Superb".
        //
    /* -------------------------------- */
        //
        // If you get a "Superb",
        // you'll even get a medal.
        //
    /* -------------------------------- */
        // Collecting lots of medals will
        // unlock all sorts of prizes that
        // you can play with. Please do your
        // best to collect them all!
    /* -------------------------------- */
        //
        // Oh... but if you already knew that,
        // I'm sorry if I bored you.
        // See you later.
    /* -------------------------------- */

const char *cafe_dialogue_ranks_and_medals[] = {
    /* ------------------------------------------------ */
        "\n"
        "Por cierto, has conseguido el\n"
        "rango Genial en algun juego?\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Hay 3 rangos que puedes conseguir:\n"
        "Otra vez, OK, y Genial.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Y si consigues un Genial,\n"
        "igual ganas una medalla.\n"
        "\n",
    /* ------------------------------------------------ */
        "\n"
        "Las medallas desbloquean\n"
        "cosas muy geniales. Asi que\n"
        "intenta conseguirlas.",
    /* ------------------------------------------------ */
        "\n"
        "Aunque probablemente ya sabias eso,\n"
        "no? Perdon si te aburri.\n"
        "Nos vemos despues.",
    /* ------------------------------------------------ */
    END_OF_DIALOGUE
};


// [D_089cd44c] Random Dialogue Pool
const char **cafe_random_conversation_pool[] = {
    cafe_dialogue_rhythm_sense,
    cafe_dialogue_offbeats,
    cafe_dialogue_rhythm_test,
    cafe_dialogue_drum_lessons,
    cafe_dialogue_adhd,
    cafe_dialogue_coffee,
    cafe_dialogue_dog_barista,
    cafe_dialogue_healing_with_music,
    cafe_dialogue_speaking_with_music,
    cafe_dialogue_ranks_and_medals
};
