
static int topbar = 1;

static const char *fonts[] = {"Terminus:size=9"};
static const char *prompt = "Choose:";
static const char *colors[SchemeLast][2] = {
    /*                  fg         bg       */
    [SchemeNorm] = {"#839496", "#1b2b34"},
    [SchemeSel] = {"#1b2b34", "#5fb3b3"},
    [SchemeOut] = {"#000000", "#00ffff"},
};
static unsigned int lines = 0;
static unsigned int lineheight = 24;
static const char worddelimiters[] = " ";
