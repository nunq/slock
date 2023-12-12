/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "#303030",   /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* number of failed password attempts until failcommand is executed.
   Set to 0 to disable */
static const int failcount = 8;

/* command to be executed after [failcount] failed password attempts */
static const char *failcommand = "sudo shutdown now";
