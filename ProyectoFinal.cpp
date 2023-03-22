#include <iostream>
#include <json/json.h>
#include <fstream>
#define KEY_ESC 27


int main(){
    int choice;

    auto stream = std::ofstream("Save.json");
    Json::Value save;
    

    bool investigador = false;

    bool posibleEscapista = false;
    bool capturado = false;
    bool perdido = false;
    
    bool aventurero = false;
    bool posibleFugitivo = false;
    bool rescatado = false;
    bool asesino = false;

    bool cauteloso = false;

    bool encuentrosSorpresa = false;
    bool asaltado = false;
    bool regresoMagico = false;

    bool ocultoOtraVez = false;
    bool estafado = false;
    bool regresoAUnPrecio = false;


    printf("En este juego tendras multiples opciones, entre\nlas cuales podras elegir para poder tener una\naventura variada.\n");
    printf("Para hacer una desicion, presiona 1 o 2 cuando\naparezca una oportunidad.\n\n");
    
    printf("Despiertas en tu casa, parece ser otro dia normal, hasta que\nal mirar por la ventana ves algo brillar a la distancia,\npero no estas seguro de que sea. \n");
    // primera desicion
    printf("1 - Ve a investigar \n");
    printf("2 - Ocultate \n");

    printf("Cual es tu eleccion?");
    scanf_s("%d", &choice);
    
    if (choice == 1) {
        printf("\n\nDecides ir a investigar el misterioso brillo\n");
        printf("Mientras mas te acercas a este brillo, mas fuerte se hace\n");
        printf("Eventualmente, no puedes ver nada, eres cegado por el brillo.\n");
        printf("Cuando por fin puedes abrir tus ojos otra vez, te das cuenta de que\n");
        printf("estas en un lugar completamente diferente, parece una cueva.\n");
        save["investigador"] = true;
        stream << save;
        investigador = true;
        printf("1 - Buscar una salida\n");
        printf("2 - Adentrarse mas en la cueva\n");

        printf("\nCual es tu eleccion?");
        scanf_s("%d", &choice);
        if (choice == 1) { //Buscar una salida
            printf("\n\nComienzas a caminar hacia la direccion que crees que es la salida.\n");
            printf("Despues de caminar por un largo tiempo puedes ver la luz del sol a la distancia\n");
            printf("Comienzas a correr hacia ella, pero hay algo muy raro sobre esa luz, se ve un poco verde.\n");
            printf("Dudas sobre si debes seguir corriendo hacia la luz, o detenerte y buscar otra ruta\n");
            save["posibleEscapista"] = true;
            stream << save;
            posibleEscapista = true;
            printf("1 - Continuar hacia la luz\n");
            printf("2 - Buscar otra ruta\n");

            printf("\nCual es tu eleccion?");
            scanf_s("%d", &choice);
                if (choice == 1) { //Continuar hacia la luz
                    printf("\n\nA este punto crees que ya viajaste lo suficiente como para detenerte\n");
                    printf("Decides continuar hacia la luz, pues ahora estas curioso sobre que es.\n");
                    printf("Cuando llegas, encuentras a un grupo de orcos sentados frente una fogata.\n");
                    printf("Esta fogata emana un fuego ligeramente verde, crees que esto es por que los ogros\n");
                    printf("le tiraron una especie de quimico.\n");
                    printf("Una vez uno de los ogros te ve, todos se paran en posicion defensiva.\n");
                    printf("Todos te rodean y te capturan. No puedes hacer nada.\n");
                    save["capturado"] = true;
                    stream << save;
                    capturado = true;
                    stream.close();
                    printf(".......................\n");
                    printf("Final Malo 1: Capturado\n");
                    printf(".......................\n");
                }
                else if (choice == 2) { //Buscar otra ruta
                    printf("\n\nPosiblemente es una trampa, asi que decides dejar de ir hacia la luz.\n");
                    printf("Comienzas a buscar rutas diferentes, pero cada vez que cruzas un tunel, los caminos se hacen menos.\n");
                    printf("Es posible que no haya una salida, es lo que piensas antes de tirarte al suelo.\n");
                    printf("Pero cuando caes, puedes ver una grieta en la pared junto al suelo. Como no tienes nada mejor que hacer,\n");
                    printf("decides golpearla multiples veces con una de las rocas de la cueva. Conforme mas la golpeas, mas luz sale de ella.\n");
                    printf("Eres libre! logras tirar la pared, y estas fuera de la cueva.\n");
                    printf("Eso si, no tienes idea de donde estas\n");
                    save["perdido"] = true;
                    stream << save;
                    perdido = true;
                    stream.close();
                    printf(".......................\n");
                    printf("Final Neutro 1: Perdido\n");
                    printf(".......................\n");
                }
        }
        else if (choice == 2) { //Adentrarse mas en la cueva
            printf("\n\nComienzas a caminar hacia la direccion que parece más profunda.\n");
            printf("Despues de caminar por un largo tiempo, comienzas a escuchar sonidos similares a pisadas mas adelante.\n");
            printf("Alcanzas a escuchar voces de esa direccion, parecen ser dos hombres, y hablan de ti.\n");
            printf("Y parece que te estan buscando, no tienes idea de por que, pero estan armados, asi que no puede ser bueno\n");
            save["posibleFugitivo"] = true;
            stream << save;
            posibleFugitivo = true;
            printf("1 - Esconderte\n");
            printf("2 - Atacar a los hombres\n");

            printf("\nCual es tu eleccion?");
            scanf_s("%d", &choice);
                if (choice == 1) { // Esconderte
                    printf("\n\nRapidamente te escondes. No quieres saber que es lo que pasaria si te encontraran\n");
                    printf("Cuando estos hombres se van, decides salir de tu escondite y adentrarte mas a la cueva.\n");
                    printf("Encuentras una aldea llena de gente y te acercas.\n");
                    printf("Piensas que esos hombres de antes pudieron venir de aqui, pero crees que es seguro hablar con la gente\n");
                    printf("Le preguntas a uno de los aldeanos sobre el lugar.\n");
                    printf("Resulta que esta aldea esta llena de gente que fue teletransfportada de la nada a esta\n");
                    printf("misma cueva por un brillo miesterioso, y la razon por la que eras buscado era para reclutarte\n");
                    printf("temporalmente en la aldea, pues todos trabajan en equipo para eventualmente regresar a sus hogares\n");
                    printf("y creian que tu estabas en la misma situacion que ellos, confundido\n");
                    printf("decides quedarte, pues tambien quieres regresar a casa.\n");
                    save["rescatado"] = true;
                    stream << save;
                    rescatado = true;
                    stream.close();
                    printf("........................\n");
                    printf("Final Bueno 1: Rescatado\n");
                    printf("........................\n");
                }
                else if (choice == 2) { // Atacar
                    printf("\n\nDecides esperar a que estos hombres se acerquen, y te escondes para esperarlos\n");
                    printf("Cuando estan muy cerca de ti, sales de tu escondite y los atacas.\n");
                    printf("lograste desarmar a uno de ellos y utilizaste su arma para matarlo, pero su compañero logra escapar.\n");
                    printf("Comienzas a caminar para ir mas profundo en la cueva, y encuentras una aldea a la distancia.\n");
                    printf("Parece que esta bajo el ataque de criaturas que parecen orcos. Decides ayudar a los aldeanos.\n");
                    printf("Peleas junto a los soldados utilizando tu arma y logran vencer a los ogros.\n");
                    printf("Cuando crees los aldeanos estan apunto de verte como un heroe por ayudarlos, un hombre agitado llega.\n");
                    printf("Es uno de los hombres que atacaste, y le cuenta a todos sobre como lo atacaste y mataste a su compañero\n");
                    printf("Los aldeanos ahora estan en contra tuyo, y no hay ningun lugar al que puedas correr.\n");
                    printf("Eres ejecutado.\n");
                    save["asesino"] = true;
                    stream << save;
                    asesino = true;
                    stream.close();
                    printf(".....................\n");
                    printf("Final Malo 2: Asesino\n");
                    printf(".....................\n");
                }
        }
    }
    else if (choice == 2) { // Ocultarte
        printf("\n\nDecides no investigar el brillo y ocultarte en tu casa\n");
        printf("Para ocultarte mejor, cierras todas tus cortinas, pero el brillo\n");
        printf("se hace cada vez mas fuerte.\n");
        printf("Eventualmente el brillo se detiene, pero cuando miras hacia afuera\n");
        printf("te das cuenta de que todo tu entorno a cambiado, fuiste teletransportado a otro lugar\n");
        save["cauteloso"] = true;
        stream << save;
        bool cauteloso = true;
        printf("1 - Investigar la zona \n");
        printf("2 - Ocultarte otra vez \n");

        printf("Cual es tu eleccion?");
        scanf_s("%d", &choice);
        if (choice == 1) { // Investigar la zona
            printf("\n\nDecides salir esta vez. Todo a tu alrededor a cambiado, es un nuevo mundo lleno de sorpresas\n");
            printf("Parece que estas en una especie de bosque, pero antes de que puedas investigarlo a profundidad,\n");
            printf("llega una mujer, quien te dice que este lugar es peligroso, pues hay bandidos en todas partes\n");
            printf("atacando a quien vean y robando todas sus pertenencias.\n");
            printf("Ella se ofrece a guierte a un lugar seguro\n");
            save["encuentroSorpresa"] = true;
            stream << save;
            encuentrosSorpresa = true;
            printf("1 - Confiar en ella\n");
            printf("2 - 'Como se que tu no eres un bandido?'\n");

            printf("Cual es tu eleccion?");
            scanf_s("%d", &choice);
            if (choice == 1) { // Confiar en ella
                printf("\n\nDecides confiar en ella y la sigues. Eventualmente se cansan de caminar y deciden descansar\n");
                printf("Cuando estas a punto de relajarte, un grupo de bandidos aparece para atacarlos.\n");
                printf("Pero te das cuenta de que solo te estan mirando a ti, y solo planean asaltarte a ti.\n");
                printf("Parece que la mujer estaba con ellos, y tu caiste en su trampa.\n");
                printf("Tal vez no debiste confiar en extraños que deambulan en un bosque.\n");
                save["asaltado"] = true;
                stream << save;
                asaltado = true;
                stream.close();
                printf(".....................\n");
                printf("Final Malo 3: Credulo\n");
                printf(".....................\n");
            }
            else if (choice == 2) { // Desconfiar de ella
                printf("\n\nConfrontas a la mujer, pues no crees que ella te quiera ayudar del todo, crees que ella tambien es un bandido.\n");
                printf("La mujer se molesta, e intenta convencerte otra vez de confiar en ella, pero puedes senir varias miradas en ti\n");
                printf("Intentas correr de regreso a tu casa, pero un gran grupo de bandidos sale a rodearte.\n");
                printf("Crees que decidieron atacarte por que no caiste en sus trucos. Y es posible que este sea tu fin.\n");
                printf("Pero como para llevarte la contraria, escuchas a alguien gritando a la distancia.\n");
                printf("En un parpadeo todos los banidos salen volando, parece que alguien viene a tu rescate.\n");
                printf("Tu salvador parece ser una poderosa bruja del bosque, quien escucho toda la conmocion mientras volaba.\n");
                printf("Despues de auyentar a todos los bandidos, la bruja te propone regresarte a tu casa original.\n");
                printf("Rapidamente accedes, y en un instante, regresas como si nada hubiera pasado.\n");
                save["regresoMagico"] = true;
                stream << save;
                regresoMagico = true;
                stream.close();
                printf(".........................................\n");
                printf("Final Bueno 2: De regreso a la normalidad\n");
                printf(".........................................\n");
            }
        }
        else if (choice == 2) { // Ocultarte otra vez
            printf("\n\nEsto no es para nada normal, asi que decides que no es seguro salir, pues puede que te encuentres algo peligroso\n");
            printf("Decides quedarte en la comodidad de tu cada como si nada hubiera pasado, hasta que escuchas que alguien toca la puerta\n");
            printf("Con miedo te mueves lentamente hacia la puerta, sin hacer ruido. Escuchas la voz de una mujer.\n");
            printf("La mujer quiere saber si estas interesado en comprar un producto que ella misma hace\n");
            save["ocultoOtraVez"] = true;
            stream << save;
            ocultoOtraVez = true;
            printf("1 - Abrir la puerta\n");
            printf("2 - Ocultarte\n");

            printf("Cual es tu eleccion?");
            scanf_s("%d", &choice);
            if (choice == 1) { // Abrir la puerta
                printf("\n\nInteresado, abres la puerta para ver que es lo que te estan intentando vender\n");
                printf("Para tu sorpresa, del otro lado de la puerta la mujer estaba acompañada de 2 hombres, y no parecia que\n");
                printf("quisieran venderte algo. Todos ellos parecian delincuentes\n");
                printf("Rapidamente cierras la puerta, pero ellos son mas fuertes que tu, y la tiran\n");
                printf("Proceden a robar todos los objetos de valor de tu casa, y luego se van tan rapido como llegaron\n");
                printf("Tal vez no debiste confiar en la primera persona a la que viste\n");
                save["estafado"] = true;
                stream << save;
                estafado = true;
                stream.close();
                printf("......................\n");
                printf("Final Malo 4: Estafado\n");
                printf("......................\n");
            }
            else if (choice == 2) { // Ocultarte
                printf("\n\nDecides utilizar tu tecnica especial: Esconderte. Y parece que la mujer se convence de que no hay nadie en casa\n");
                printf("Pero en vez de irse, comenzo a golpear la puerta hasta tirarla. Y junto a ella, 2 hombres entran a tu casa\n");
                printf("Comienzan a tomar todo objeto de valor que ven, pero el lado bueno es que no saben que estas ahi\n");
                printf("Agarras un bate que tenias para defensa propia y esperas a que uno de los hombres se acerque a ti.\n");
                printf("Pero antes de que puedas hacer algo, otra mujer entra a tu casa, pero ella se ve diferente, se ve como una bruja\n");
                printf("Los delincuentes comienzan a discutir con ella, y eventualmente comienzan a pelear\n");
                printf("Despues de una larga pelea, la bruja gana, y tu casa queda en ruinas.\n");
                printf("La bruja se acerca a tu escondite, y te saca de el.\n");
                printf("Se disculpa por que hayas tenido que ver todo eso, y te dice que puede regresarlo todo a la normalidad\n");
                printf("Le preguntas como, pero ella no responde y, en su lugar, te pide uno de tus cabellos.\n");
                printf("Decides no preguntar mas y darle un cabello. Depspues de esto ella se va y, minutos despues te desmayas.\n");
                printf("Cuando despiertas, ves tu casa en buen estado, y cuando miras afuera, todo esta igual que antes, normal.\n");
                printf("No sabes si ahora estas maldito o algo asi, pero hey, la bruja no mentia\n");
                save["regresoAUnPrecio"] = true;
                stream << save;
                regresoAUnPrecio = true;
                stream.close();
                printf(".......................................\n");
                printf("Final Bueno 3: De regreso por un precio\n");
                printf(".......................................\n");
            }
        }
    }
}
