Cool Player Bang Commands (CoolBang) version 1.01
This file was created on 1999-12-12 by Asperon
******************************************************************************
1. Introduction

   This is a set of litestep !bang command to control CoolPlayer. The idea is
   based on GeekMasters GeekAmp.

******************************************************************************
2. Installation

   Unzip the coolbang.dll into your litestep dir. Add the line:

   loadmodule c:\litestep\coolbang.dll   

   to your step.rc (change c:\litestep to point at your litestep dir)
 
   you can add the CoolPlayerPath setting to step.rc to load coolplayer if
   it isn't loaded. (thnx to geekmaster for this ide)

******************************************************************************
3. !Bang Commands

	!COOL_DELETE
	- Delete a file from the playlist		

	!COOL_REPEAT
	- Toggle the repeat function

	!COOL_SHUFFLE
	- Toggle the shuffle function

	!COOL_PLAY
	- Start playing (and also load coolplayer if it isn't loaded)

	!COOL_PAUSE
	- Pause the player

	!COOL_STOP
	- Stop the player

	!COOL_LOAD
	- Load a file to play (playlist or mp3 file)

	!COOL_NEXT
	- Skip to the next file

	!COOL_PREV
	- Skip to the previous file

	!COOL_VOLUMEUP
	- Turn up the volume a tad
	

	!COOL_VOLUMEDOWN
	- Turn down the volume a tad

	!COOL_FORWARD
	- Skip forward in the song

	!COOL_BACKWARD
	- Skip backward in the song

	!COOL_ABOUT
	- Bring up the cool player about box

	!COOL_PLAYLIST
	- Bring up the cool player playlist editor

	!COOL_DRAWSKINLINES
	- Draws the skinlines, good for skiners

	!COOL_LOADSKIN
	- Reloads the current skin

******************************************************************************
4. To Do

	I had the intention to create a module like lsxcommand/amptitle to 
	show the current song, and i might. After having writen this module
	and after having viewed the source for geekamp i came about the ide
	to create a general remote control module, where you will be able to
	control any application that uses window messages, so i guess thats
	whats up next. 

******************************************************************************
5. Updates

   1.01 Recompiled the dll to 20% of the original size.

******************************************************************************
6. Thanks to

   Geekmaster for the original idea about loading the player
   the author of Coolplayer, nice mp3 player
   VNV Nation for great music.

******************************************************************************
