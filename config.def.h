/* user and group to drop privileges to */
static const char *user  = "xerkse";
static const char *group = "xerkse";

// tokyonight nvim colors
static const char *colorname[NUMCOLS] = {
	[INIT] =   "#9ece6a",     /* after initialization */
	[INPUT] =  "#7aa2f7",   /* during input */
	[FAILED] = "#f7768e",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
