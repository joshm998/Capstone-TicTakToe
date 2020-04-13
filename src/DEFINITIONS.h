#ifndef DEFINITIONS_H
#define DEFINITIONS_H
//Display Variables
#define SCREEN_WIDTH 768
#define SCREEN_HEIGHT 1136
#define SPLASH_SHOW_TIME 0.5

//Splash Screen Assets
#define SPLASH_SCENE_BACKGROUND_IMAGEPATH "res/splash.png"

//Main Menu Assets
#define MAIN_MENU_BACKGROUND_IMAGEPATH "res/menubackground.png"
#define MAIN_MENU_TITLE_IMAGEPATH "res/title.png"
#define MAIN_MENU_PLAY_BUTTON_IMAGEPATH "res/playbutton.png"
#define MAIN_MENU_PLAY_BUTTON_OUTER_IAMGEPATH "res/playbuttonouter.png"

//Game Assets
#define GAME_BACKGROUND_IMAGEPATH "res/menubackground.png"
#define PAUSE_BUTTON_IMAGEPATH "res/pausebutton.png"
#define X_PIECE_IMAGEPATH "res/x.png"
#define O_PIECE_IMAGEPATH "res/o.png"
#define X_WINNING_PIECE_IMAGEPATH "res/xwin.png"
#define O_WINNING_PIECE_IMAGEPATH "res/owin.png"
#define GRID_SPRITE_IMAGEPATH "res/grid.png"

//Pause Assets
#define PAUSE_BACKGROUND_IMAGEPATH "res/pausebackground.png"
#define RESUME_BUTTON_IMAGEPATH "res/resumebutton.png"
#define HOME_BUTTON_IMAGEPATH "res/homebutton.png"

//Game Over Screen Assets
#define RETRY_BUTTON_IMAGEPATH "res/retrybutton.png"

//Game Variables
#define X_PIECE 1
#define O_PIECE 0
#define EMPTY_PIECE -1
#define PLAYER_PIECE X_PIECE
#define COMPUTER_PIECE O_PIECE

#define STATE_PLAYING 0
#define STATE_PAUSED 1
#define STATE_WON 2
#define STATE_LOST 3
#define STATE_PLAYER_TURN 4
#define STATE_COMPUTER_TURN 5
#define STATE_DRAW 6


#endif // DEFINITIONS_H
