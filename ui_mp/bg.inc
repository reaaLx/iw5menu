		itemDef // no blur 
		{
			rect -426.667 -240 853.333 480 2 2
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "mw2_main_sp_image"
			textscale 0.55
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
#ifdef BACKGROUND_BLUR
		itemDef // blur bg
		{
			rect -426.667 -240 853.333 480 2 2
			decoration
			visible 1
			style 3
			forecolor 1 1 1 1
			background "mw2_main_co_image"
			textscale 0.55
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}	
#endif		
		itemDef
		{
			rect -426.667 -36 853.333 480 2 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 0.4
			background "white"
			textscale 0.55
			visible when ( ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
		itemDef
		{
			rect -574.85 0 1708 480 0 0
			decoration
			visible 1
			style 3
			forecolor 0.35 0.35 0.35 1
			background "mw2_main_cloud_overlay"
			textscale 0.55
			exp rect x ( ( 0 - 107 ) - ( ( float( milliseconds( ) % 60000 ) / 60000 ) * ( 854 ) ) )
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
		itemDef
		{
			rect -228.78 0 -1708 -480 0 0
			decoration
			visible 1
			style 3
			forecolor 0.35 0.35 0.35 1
			background "mw2_main_cloud_overlay"
			textscale 0.55
			exp rect x ( ( - 107 + 854 ) + ( ( float( milliseconds( ) % 50000 ) / 50000 ) * ( 854 ) ) )
			visible when ( ! ( dvarbool( "cl_ingame" ) || dvarbool( "sv_running" ) ) )
		}
		itemDef
		{
			rect 237.5 -236 13 680 1 1
			decoration
			visible 1
			style 3
			forecolor 0.596078 0.654902 0.603922 0.75
			background "gradient"
			textscale 0.55
			exp forecolor r ( 0.596078 )
			exp forecolor g ( 0.654902 )
			exp forecolor b ( 0.603922 )
			visible when ( 1 )
		}
		itemDef
		{
			rect 237.5 -236 13 680 1 1
			decoration
			visible 1
			style 3
			forecolor 1 1 1 0.75
			background "gradient"
			textscale 0.55
			exp forecolor r ( 0.596078 )
			exp forecolor g ( 0.654902 )
			exp forecolor b ( 0.603922 )
			visible when ( localvarbool( "ui_shelfEnabled" ) )
		}
		itemDef
		{
			rect -64 -36 301.5 480 1 1
			decoration
			visible 1
			style 3
			forecolor 0 0 0 0.4
			background "white"
			textscale 0.55
			visible when ( 1 )
		}