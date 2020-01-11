CHOICE_SEPERATOR( 0 )

CHOICE_BUTTON( 0, "video", "@MENU_VIDEO", LOCAL_CLOSE_ALL_IW5 open "pc_options_video"; )
CHOICE_BUTTON( 1, "audio", "@MENU_AUDIO", LOCAL_CLOSE_ALL_IW5 open "pc_options_audio"; )
CHOICE_BUTTON( 2, "controls", "@MENU_CONTROLS", LOCAL_CLOSE_ALL_IW5 open "pc_options_controls"; )
CHOICE_BUTTON( 3, "voice", "@MENU_VOICE", LOCAL_CLOSE_ALL_IW5 open "pc_options_voice"; )
CHOICE_BUTTON_EX( 4, "dedicatedservers", "Dedicated Server", LOCAL_CLOSE_ALL_IW5 open "menu_online_barracks";, disabled when ( 1 ) )

CHOICE_SEPERATOR( 5 )

CHOICE_BUTTON_EX( 5, "loginsocialmedia", "Login with Facebook", ;, disabled when( 1 ) )
CHOICE_BUTTON_EX( 6, "resetsettings", "@MENU_RESET_SYSTEM_DEFAULTS", LOCAL_CLOSE_ALL_IW5 open "options_graphics_defaults";, disabled when ( ( ( dvarstring( "gameMode" ) == "so" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) || ( dvarstring( "gameMode" ) == "mp" && ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) || inlobby() ) ) ) ) )

CHOICE_SEPERATOR( 7 )