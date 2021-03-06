#ifndef CONFIG_H
#define CONFIG_H

/* Mod (Mod1 == alt) */
#define MOD Mod1Mask

/* Colors */
#define UNFOCUS "rgb:1c/1c/1c"
static char* focuscolors[10] = {  /* initialize 10 colors */
    "rgb:cc/cc/c6",
    "rgb:9a/cc/79",
    "rgb:79/9a/cc",
    "rgb:9a/79/cc",
    "rgb:cb/8d/c4",
    "rgb:cc/79/9a",
    "rgb:cc/9a/79",
    "rgb:d6/aa/55",
    "rgb:e4/d5/61",
    "rgb:89/9c/a1",
};

/* 
 * Status bar script command name.
 * If there is none, change it to ""
 */
#define STATUS_BAR_SCRIPT "statusbar.sh"

/*
 * If STATUS_BAR_SCRIPT is not in your PATH,
 * change statusbarcmd[] to:
 *   statusbarcmd[] = {"./path/to/script/"STATUS_BAR_SCRIPT, NULL};
 */
const char* statusbarcmd[] = {STATUS_BAR_SCRIPT, NULL};          /* do not remove this line */
const char* killstatusbarcmd[] = {"killall", STATUS_BAR_SCRIPT}; /* do not remove this line */
const char* dmenucmd[] = {"dmenu_run",NULL};       /* replace with another launcher program */
const char* termcmd[]  = {"urxvt",NULL};          /* replace with another terminal emulator */

static struct key keys[] = {
    /*MOD              KEY        FUNCTION           ARGS */
    { MOD,             XK_m,      max_win,           {NULL}},
    { MOD|ShiftMask,   XK_w,      close_win,         {NULL}},
    { MOD,             XK_Tab,    next_win,          {NULL}},
    { MOD|ShiftMask,   XK_Tab,    prev_win,          {NULL}},
    { MOD|ControlMask, XK_t,      quit_wm,           {NULL}},
    /* run commands */
    { MOD,             XK_p,      spawn,             {.com = dmenucmd}},
    { MOD,             XK_Return, spawn,             {.com = termcmd}},
    /* move/resize */
    { MOD,             XK_h,      move_win,          {.dir = LEFT}}, 
    { MOD|ShiftMask,   XK_h,      resize_win,        {.dir = LEFT}},
    { MOD,             XK_j,      move_win,          {.dir = DOWN}}, 
    { MOD|ShiftMask,   XK_j,      resize_win,        {.dir = DOWN}},
    { MOD,             XK_k,      move_win,          {.dir = UP}}, 
    { MOD|ShiftMask,   XK_k,      resize_win,        {.dir = UP}},
    { MOD,             XK_l,      move_win,          {.dir = RIGHT}}, 
    { MOD|ShiftMask,   XK_l,      resize_win,        {.dir = RIGHT}},
    /* virtual desktops */
    { MOD,             XK_0,      change_desktop,    {.i = 0}}, 
    { MOD|ShiftMask,   XK_0,      client_to_desktop, {.i = 0}},
    { MOD,             XK_1,      change_desktop,    {.i = 1}}, 
    { MOD|ShiftMask,   XK_1,      client_to_desktop, {.i = 1}},
    { MOD,             XK_2,      change_desktop,    {.i = 2}}, 
    { MOD|ShiftMask,   XK_2,      client_to_desktop, {.i = 2}},
    { MOD,             XK_3,      change_desktop,    {.i = 3}}, 
    { MOD|ShiftMask,   XK_3,      client_to_desktop, {.i = 3}},
    { MOD,             XK_4,      change_desktop,    {.i = 4}}, 
    { MOD|ShiftMask,   XK_4,      client_to_desktop, {.i = 4}},
    { MOD,             XK_5,      change_desktop,    {.i = 5}}, 
    { MOD|ShiftMask,   XK_5,      client_to_desktop, {.i = 5}},
    { MOD,             XK_6,      change_desktop,    {.i = 6}}, 
    { MOD|ShiftMask,   XK_6,      client_to_desktop, {.i = 6}},
    { MOD,             XK_7,      change_desktop,    {.i = 7}}, 
    { MOD|ShiftMask,   XK_7,      client_to_desktop, {.i = 7}},
    { MOD,             XK_8,      change_desktop,    {.i = 8}}, 
    { MOD|ShiftMask,   XK_8,      client_to_desktop, {.i = 8}},
    { MOD,             XK_9,      change_desktop,    {.i = 9}}, 
    { MOD|ShiftMask,   XK_9,      client_to_desktop, {.i = 9}}
};

#endif

