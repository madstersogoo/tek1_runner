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
	sfVideoMode videomode = {1920, 1080, 32};
	sfRenderWindow *window;
	sfEvent event;
	sfTexture *texture1;
	sfTexture *texture2;
	sfTexture *texture3;
	sfTexture *texture4;
	sfSprite *sprite1;
	sfSprite *sprite2;
	sfSprite *sprite3;
	sfSprite *sprite4;
    sfClock *clock;
    sfVector2f parallax1 = {0,0};
    sfVector2f parallax2 = {0,0};
    sfVector2f parallax3 = {0,0};

	window = sfRenderWindow_create(videomode, "my_runner", sfFullscreen | sfClose, NULL);

	texture1 = sfTexture_createFromFile("Img/parallax-demon-woods-bg.png", NULL);
	texture2 = sfTexture_createFromFile("Img/parallax-demon-woods-close-trees.png", NULL);
	texture3 = sfTexture_createFromFile("Img/parallax-demon-woods-mid-trees.png", NULL);
	texture4 = sfTexture_createFromFile("Img/parallax-demon-woods-far-trees.png", NULL);

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
		sfRenderWindow_display(window);
	}
	sfTexture_destroy(texture1);
	sfTexture_destroy(texture2);
	sfTexture_destroy(texture3);
	sfTexture_destroy(texture4);
	sfSprite_destroy(sprite1);
	sfSprite_destroy(sprite2);
	sfSprite_destroy(sprite3);
	sfSprite_destroy(sprite4);
	sfRenderWindow_destroy(window);
    return (0);
}
