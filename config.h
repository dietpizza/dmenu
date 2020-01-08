
static int topbar = 1;

static const char *fonts[] = {
	"Terminus:size=9"
};
static const char *prompt      = "";
static const char *colors[SchemeLast][2] = {
/*                  fg         bg       */
	[SchemeNorm] = { "#839496", "#002b36" },
	[SchemeSel]  = { "#fdf6e3", "#268bd2" },
	[SchemeOut]  = { "#000000", "#00ffff" },
};
static unsigned int lines      = 0;
static unsigned int lineheight = 14;
static const char worddelimiters[] = " ";
