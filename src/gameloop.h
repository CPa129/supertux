/*
  gameloop.h
  
  Super Tux - Game Loop!
  
  by Bill Kendrick
  bill@newbreedsoftware.com
  http://www.newbreedsoftware.com/supertux/
  
  April 11, 2000 - Junuary 1st, 2004
*/

#ifndef SUPERTUX_GAMELOOP_H
#define SUPERTUX_GAMELOOP_H

#include "sound.h"
#include "type.h"
#include "level.h"

/* GameLoop modes */

#define ST_GL_PLAY 0
#define ST_GL_TEST 1
#define ST_GL_LOAD_GAME 2

extern int game_started;
extern st_level current_level;

/* Function prototypes: */

int gameloop(char * subset, int levelnb, int mode);
void savegame(int slot);
void loadgame(int slot);
void slotinfo(char **pinfo, int slot);
int issolid(float x, float y);
int isbrick(float x, float y);
int isice(float x, float y);
int isfullbox(float x, float y);
int rectcollision(base_type* one, base_type* two);
void drawshape(float x, float y, unsigned char c);
unsigned char shape(float x, float y);
void bumpbrick(float x, float y);
void trygrabdistro(float x, float y, int bounciness);
void trybreakbrick(float x, float y);
void tryemptybox(float x, float y);
void trybumpbadguy(float x, float y);
void add_bouncy_distro(float x, float y);
void add_broken_brick(float x, float y);
void add_broken_brick_piece(float x, float y, float xm, float ym);
void add_bouncy_brick(float x, float y);
void add_bad_guy(float x, float y, int kind);
void add_upgrade(float x, float y, int kind);
void add_bullet(float x, float y, float xm, int dir);

#endif /*SUPERTUX_GAMELOOP_H*/

