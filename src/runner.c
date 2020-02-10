/*
 * EPITECH PROJECT
 * my_runner
 * File description
 * runner.c
 */

#include<SFML/Graphics.h>
#include<SFML/Window.h>
#include<SFML/System.h>
#include<SFML/Config.h>

int runner(void)
{
	int i = 0;
	sfVideoMode videomode = {1920, 1080, 32};
	sfRenderWindow *window;
	sfEvent event;
	sfTexture *texture1;
	sfTexture *texture2;
	sfTexture *texture3;
	sfTexture *texture4;
	sfTexture *textureplayer1;
	sfTexture *textureplayer2;
	sfTexture *textureplayer3;
	sfTexture *textureplayer4;
	sfTexture *textureplayer5;
	sfTexture *textureplayer6;
	sfSprite *sprite1;
	sfSprite *sprite2;
	sfSprite *sprite3;
	sfSprite *sprite4;
	sfSprite *playersprite1;
	sfSprite *playersprite2;
	sfSprite *playersprite3;
	sfSprite *playersprite4;
	sfSprite *playersprite5;
	sfSprite *playersprite6;
    sfClock *clock;
    sfVector2f parallax1 = {0,0};
    sfVector2f parallax2 = {0,0};
    sfVector2f parallax3 = {0,0};
    sfVector2f player = {100,900};

	window = sfRenderWindow_create(videomode, "my_runner", sfFullscreen | sfClose, NULL);

	texture1 = sfTexture_createFromFile("Img/parallax-demon-woods-bg.png", NULL);
	texture2 = sfTexture_createFromFile("Img/parallax-demon-woods-close-trees.png", NULL);
	texture3 = sfTexture_createFromFile("Img/parallax-demon-woods-mid-trees.png", NULL);
	texture4 = sfTexture_createFromFile("Img/parallax-demon-woods-far-trees.png", NULL);
	textureplayer1 = sfTexture_createFromFile("Img/run1.png", NULL);
	textureplayer2 = sfTexture_createFromFile("Img/run2.png", NULL);
	textureplayer3 = sfTexture_createFromFile("Img/run3.png", NULL);
	textureplayer4 = sfTexture_createFromFile("Img/run4.png", NULL);
	textureplayer5 = sfTexture_createFromFile("Img/run5.png", NULL);
	textureplayer6 = sfTexture_createFromFile("Img/run6.png", NULL);

	sprite1 = sfSprite_create();
	sfSprite_setTexture(sprite1, texture1, sfTrue);
	sprite2 = sfSprite_create();
	sfSprite_setTexture(sprite2, texture2, sfTrue);
    sfSprite_setPosition(sprite2, parallax1);
	sprite3 = sfSprite_create();
	sfSprite_setTexture(sprite3, texture3, sfTrue);
    sfSprite_setPosition(sprite3, parallax2);
	sprite4 = sfSprite_create();
	sfSprite_setTexture(sprite4, texture4, sfTrue);
    sfSprite_setPosition(sprite4, parallax3);
    	playersprite1 = sfSprite_create();
	sfSprite_setTexture(playersprite1, textureplayer1, sfTrue);
    sfSprite_setPosition(playersprite1, player);
    	playersprite2 = sfSprite_create();
	sfSprite_setTexture(playersprite2, textureplayer2, sfTrue);
    sfSprite_setPosition(playersprite2, player);
    	playersprite3 = sfSprite_create();
	sfSprite_setTexture(playersprite3, textureplayer3, sfTrue);
    sfSprite_setPosition(playersprite3, player);
    	playersprite4 = sfSprite_create();
	sfSprite_setTexture(playersprite4, textureplayer4, sfTrue);
    sfSprite_setPosition(playersprite4, player);
    	playersprite5 = sfSprite_create();
	sfSprite_setTexture(playersprite5, textureplayer5, sfTrue);
    sfSprite_setPosition(playersprite5, player);
    	playersprite6 = sfSprite_create();
	sfSprite_setTexture(playersprite6, textureplayer6, sfTrue);
    sfSprite_setPosition(playersprite6, player);

	while(sfRenderWindow_isOpen(window)){
		while(sfWindow_pollEvent(window, &event)){
			if (event.type == sfEvtClosed)
				sfRenderWindow_close(window);
		}
        parallax1.x = parallax1.x - 3;
        parallax2.x = parallax2.x - 2;
        parallax3.x = parallax3.x - 1;
        sfSprite_setPosition(sprite2, parallax1);
        sfSprite_setPosition(sprite3, parallax2);
        sfSprite_setPosition(sprite4, parallax3);
	sfSprite_setPosition(playersprite1, player);
	sfSprite_setPosition(playersprite2, player);
	sfSprite_setPosition(playersprite3, player);
	sfSprite_setPosition(playersprite4, player);
	sfSprite_setPosition(playersprite5, player);
	sfSprite_setPosition(playersprite6, player);
        if (parallax1.x == -1920)
                parallax1.x = 0;
        if (parallax2.x == -1920)
                parallax2.x = 0;
        if (parallax3.x == -1920)
                parallax3.x = 0;
        sfRenderWindow_clear(window, sfBlack);
		sfRenderWindow_drawSprite(window, sprite1, NULL);
		sfRenderWindow_drawSprite(window, sprite4, NULL);
		sfRenderWindow_drawSprite(window, sprite3, NULL);
		sfRenderWindow_drawSprite(window, sprite2, NULL);
		if (i <= 20) {
			sfRenderWindow_drawSprite(window, playersprite1, NULL);
		}
		if (i <= 40 && i > 20) {
			sfRenderWindow_drawSprite(window, playersprite2, NULL);
		}
		if (i <= 60 && i > 40) {
			sfRenderWindow_drawSprite(window, playersprite3, NULL);
		}
		if (i <= 80 && i > 60) {
			sfRenderWindow_drawSprite(window, playersprite4, NULL);
		}
		if (i <= 100 && i > 80) {
			sfRenderWindow_drawSprite(window, playersprite5, NULL);
		}
		if (i <= 120 && i > 100) {
			sfRenderWindow_drawSprite(window, playersprite6, NULL);
		}
		if (i == 120)
			i = 0;
		sfRenderWindow_display(window);
		i++;
	}
	sfTexture_destroy(texture1);
	sfTexture_destroy(texture2);
	sfTexture_destroy(texture3);
	sfTexture_destroy(texture4);
	sfTexture_destroy(textureplayer1);
	sfTexture_destroy(textureplayer2);
	sfTexture_destroy(textureplayer3);
	sfTexture_destroy(textureplayer4);
	sfTexture_destroy(textureplayer5);
	sfTexture_destroy(textureplayer6);
	sfSprite_destroy(sprite1);
	sfSprite_destroy(sprite2);
	sfSprite_destroy(sprite3);
	sfSprite_destroy(sprite4);
	sfSprite_destroy(playersprite1);
	sfSprite_destroy(playersprite2);
	sfSprite_destroy(playersprite3);
	sfSprite_destroy(playersprite4);
	sfSprite_destroy(playersprite5);
	sfSprite_destroy(playersprite6);
	sfRenderWindow_destroy(window);
    return (0);
}
