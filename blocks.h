//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Vol ", "amixer get Master | awk -F'[][]' 'END{ print $2 \"[\"$4\"]\" }'", 0, 10},
	
	{"", "date +'%H:%M %a %D'", 60, 0},

};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
