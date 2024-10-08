[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

ItemIconPath=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Icons\

MyAppVersion=24.0830

; -------------------------------------------------------------------------------

Last_fm-KazukiGames82___Update_0=[!UpdateMeterGroup "Last_fm-KazukiGames82" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Last_fm-KazukiGames82___Update_1=[!UpdateMeterGroup "Last_fm-KazukiGames82" "Droptop\DropdownBar"][!UpdateMeterGroup "CustomApp[#Last_fm-KazukiGames82]Sys" "Droptop\DropdownBar"][!UpdateMeterGroup "SysTray" "Droptop\DropdownBar"][!UpdateMeterGroup "HL" "Droptop\DropdownBar"][!UpdateMeterGroup "NotificationBar" "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

; -------------------------------------------------------------------------------

Last_fm-KazukiGames82___Text_-10=
Last_fm-KazukiGames82___Text_-11=
Last_fm-KazukiGames82___Text_10=
Last_fm-KazukiGames82___Text_11=[#*Last_fm-KazukiGames82___App_Scrobbles*]

; -------------------------------------------------------------------------------

Last_fm-KazukiGames82___Parser_Track_1=ALL
Last_fm-KazukiGames82___Parser_Track_2=LAST_7_DAYS
Last_fm-KazukiGames82___Parser_Track_3=LAST_30_DAYS
Last_fm-KazukiGames82___Parser_Track_4=LAST_90_DAYS
Last_fm-KazukiGames82___Parser_Track_5=LAST_180_DAYS
Last_fm-KazukiGames82___Parser_Track_6=LAST_365_DAYS

; ---------------------------------------

Last_fm-KazukiGames82___Parser_Text_0=[MeasureToday]
Last_fm-KazukiGames82___Parser_Text_1=All Time
Last_fm-KazukiGames82___Parser_Text_2=Last 7 Days
Last_fm-KazukiGames82___Parser_Text_3=Last 30 Days
Last_fm-KazukiGames82___Parser_Text_4=Last 90 Days
Last_fm-KazukiGames82___Parser_Text_5=Last 180 Days
Last_fm-KazukiGames82___Parser_Text_6=Last 365 Days

; ---------------------------------------

Last_fm-KazukiGames82___Parser_Error_0=Updated: [&MeasureTime3] ago
Last_fm-KazukiGames82___Parser_Error_1=Internet Error...
Last_fm-KazukiGames82___Parser_Error_2=WebParser Error...
Last_fm-KazukiGames82___Parser_Error_3=Updating...
Last_fm-KazukiGames82___Parser_Error_4=Connected
Last_fm-KazukiGames82___Parser_Error_5=Disconnected
Last_fm-KazukiGames82___Parser_Error_6=Account not found

; -------------------------------------------------------------------------------
; 0
0_Identifier_Variable=Dummy
0_Identifier_Folder=0
0_Identifier_Text=Dummy
0_Identifier_Action_11=

; -------------------------------------------------------------------------------
; 1
1_Identifier_Variable=Recent
1_Identifier_Folder=0
1_Identifier_Text=Today
1_Identifier_Action_3.1=[!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Folder"][!CommandMeasure LastFmTimer "Stop 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser"][!DisableMouseActionGroup "*" Data.Page "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DisableMouseActionGroup "*" Data.Music "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!SetVariable "Last_fm-KazukiGames82___App_Page" "0" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!UpdateMeterGroup "Data.Music" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser" "LastFm_Recent_Parser.ini"][!CommandMeasure LastFmTimer "Execute 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"]
1_Identifier_Action_11=[!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Folder"][!CommandMeasure LastFmTimer "Stop 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser"][!DisableMouseActionGroup "*" Data.Page "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DisableMouseActionGroup "*" Data.Music "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!SetVariable "Last_fm-KazukiGames82___App_Page" "0" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!UpdateMeterGroup "Data.Music" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser" "LastFm_Recent_Parser.ini"][!CommandMeasure LastFmTimer "Execute 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"]

; -------------------------------------------------------------------------------
; 2
2_Identifier_Variable=Track
2_Identifier_Folder=1
2_Identifier_Text=Top Tracks
2_Identifier_Action_11=[!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Folder"][!CommandMeasure LastFmTimer "Stop 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Track Parser"][!DisableMouseActionGroup "*" Data.Page "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DisableMouseActionGroup "*" Data.Music "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!SetVariable "Last_fm-KazukiGames82___App_Page" "0" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!UpdateMeterGroup "Data.Music" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Track Parser" "LastFm_Track_Parser.ini"][!CommandMeasure LastFmTimer "Execute 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"]

; -------------------------------------------------------------------------------
; 3
3_Identifier_Variable=Artist
3_Identifier_Folder=1
3_Identifier_Text=Top Artists
3_Identifier_Action_11=[!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Folder"][!CommandMeasure LastFmTimer "Stop 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser"][!DisableMouseActionGroup "*" Data.Page "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DisableMouseActionGroup "*" Data.Music "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!SetVariable "Last_fm-KazukiGames82___App_Page" "5" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!UpdateMeterGroup "Data.Music" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser" "LastFm_Artist_Parser.ini"][!CommandMeasure LastFmTimer "Execute 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"]

; -------------------------------------------------------------------------------
; 4
4_Identifier_Variable=Album
4_Identifier_Folder=1
4_Identifier_Text=Top Albums
4_Identifier_Action_11=[!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\Folder"][!CommandMeasure LastFmTimer "Stop 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DeactivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Album Parser"][!DisableMouseActionGroup "*" Data.Page "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!DisableMouseActionGroup "*" Data.Music "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!SetVariable "Last_fm-KazukiGames82___App_Page" "5" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!UpdateMeterGroup "Data.Music" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!Redraw "Droptop Community Apps\Apps\Last_fm-KazukiGames82"][!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Album Parser" "LastFm_Album_Parser.ini"][!CommandMeasure LastFmTimer "Execute 1" "Droptop Community Apps\Apps\Last_fm-KazukiGames82"]

; -------------------------------------------------------------------------------
; 5
5_Identifier_Variable=Dummy
5_Identifier_Folder=0
5_Identifier_Text=Dummy
5_Identifier_Action_11=
