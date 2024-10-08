[Variables]

NumberOfItems=10

NumberOfDividers=2

DividerExists1=1
DividerExists9=1

ItemText1=Welcome To Last.fm app
ItemIconFileName1=gear

ItemText2=To start, press the ⚙️ button
ItemText3=at the right top of menu.

ItemText5=Once you type your username
ItemText6=all should work well.

ItemText8=Have you used this app before?
ItemText9=>> Press here <<
ItemAction9=#CloseMenu#[!Hide "Droptop\DropdownBar\Other\ContextBox"][!ActivateConfig "Droptop Community Apps\Apps\#MyAppID#\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\#MyAppID#\Settings"][!Move [#CURRENTCONFIGX] [#CURRENTCONFIGY] "Droptop Community Apps\Apps\#MyAppID#\Settings"][!ShowFade "Droptop Community Apps\Apps\#MyAppID#\Settings"][!Delay 750][!SetVariable "Last_fm-KazukiGames82___App_Status" "3" "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Settings"][!UpdateMeter 5 "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Settings"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Settings"][!Delay 250][!SetVariable "Last_fm-KazukiGames82___Startup_First_Time" "0" "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables "Last_fm-KazukiGames82___Startup_First_Time" "0" "#MyVariablesLoc#"][!UpdateMeasure Last_fm-KazukiGames82___MeasureTime1H "Droptop\Other\BackgroundProcesses"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Track Parser"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Album Parser"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser" "LastFm_Recent_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Track Parser" "LastFm_Track_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser" "LastFm_Artist_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Album Parser" "LastFm_Album_Parser.ini"][!DeactivateConfig "Droptop Community Apps\Apps\#MyAppID#"]

ItemText10=#MyAppName# - v#MyAppVersion#

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]

[CenterStyle]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)

[IconStyle]
Y=0

    [ContainerSmallStyle]
    Hidden=1

    [ContainerLargeStyle]
    Hidden=1


;----------------------------------------------------
; Strings
;----------------------------------------------------

[1]
MeterStyle=InfoStyle
InlinePattern3=(Last.fm)
InlineSetting3=Underline
InlinePattern4=(Last.fm)
InlineSetting4=Weight | 800
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownItemPadding1#,(#DropdownItemPaddingY#*-1)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#-#DropdownItemPadding1#)
MouseOverAction=
MouseLeaveAction=

[2]
MeterStyle=InfoStyle | CenterStyle
MouseOverAction=
MouseLeaveAction=

[3]
MeterStyle=InfoStyle | CenterStyle
MouseOverAction=
MouseLeaveAction=

    [3.1]
        Meter=String
        MeterStyle=
        Y=R

[4]
MeterStyle=InfoStyle
MouseOverAction=
MouseLeaveAction=

[5]
MeterStyle=InfoStyle | CenterStyle
MouseOverAction=
MouseLeaveAction=

[6]
MeterStyle=InfoStyle | CenterStyle
MouseOverAction=
MouseLeaveAction=

[7]
MeterStyle=InfoStyle
MouseOverAction=
MouseLeaveAction=

[8]
MeterStyle=InfoStyle | CenterStyle
InlineSetting3=Underline
InlineSetting4=Weight | 800
MouseOverAction=
MouseLeaveAction=

[9]
MeterStyle=InfoStyle | CenterStyle

[10]
MeterStyle=InfoStyle
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
X=((#DropdownMenuWidth#+2)/2)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

[11]
MeterStyle=InfoStyle

[12]
MeterStyle=InfoStyle

[13]
MeterStyle=InfoStyle

[14]
MeterStyle=InfoStyle

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
MeterStyle=IconStyle
X=((#DropdownMenuWidth#+2)-#DropdownIconXoffset#-[#CURRENTSECTION#:W]+#SysAppMenuXOffset#)
ImageAlpha=(#DropdownItemOpacity#/2)
LeftMouseDownAction=#CloseMenu#[!DeactivateConfigGroup Tray][!DeactivateConfig "Droptop Community Apps\Apps\#MyAppID#"][!Hide "Droptop\DropdownBar\Other\ContextBox"][!ActivateConfig "Droptop Community Apps\Apps\#MyAppID#\Settings" "Settings.ini"][!Refresh "Droptop Community Apps\Apps\#MyAppID#\Settings"][!Move [#CURRENTCONFIGX] [#CURRENTCONFIGY] "Droptop Community Apps\Apps\#MyAppID#\Settings"][!ShowFade "Droptop Community Apps\Apps\#MyAppID#\Settings"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageAlpha "#DropdownItemOpacity#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageAlpha "(#DropdownItemOpacity#/2)"][!UpdateMeter #CURRENTSECTION#][!Redraw]

[2Icon]
MeterStyle=IconStyle

[2.1Icon]
Meter=String
MeterStyle=

[2.2Icon]
Meter=String
MeterStyle=

[2.3Icon]
Meter=String
MeterStyle=

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle

[11Icon]
MeterStyle=IconStyle

[12Icon]
MeterStyle=IconStyle

[13Icon]
MeterStyle=IconStyle

[14Icon]
MeterStyle=IconStyle
