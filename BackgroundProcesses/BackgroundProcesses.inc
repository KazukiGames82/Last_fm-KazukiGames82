[Rainmeter]

[Variables]

HideAppWifi=0

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[Last_fm-KazukiGames82___MeasureTime1H]
Measure=Time
Format=%H
OnChangeAction=[!WriteKeyValue Variables "CustomAppIsLoaded" "0" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser" "LastFm_Recent_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Track Parser" "LastFm_Track_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser" "LastFm_Artist_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Album Parser" "LastFm_Album_Parser.ini"]
DynamicVariables=1
UpdateDivider=-1
Group=WebParserInterval
Disabled=#Last_fm-KazukiGames82___Startup_First_Time#

[Last_fm-KazukiGames82___Connection_Status]
Measure=Calc
Formula=[MeasureConnection]
OnUpdateAction=[#Last_fm-KazukiGames82___Update_[#Last_fm-KazukiGames82___Show_Text]][!SetOption "Last_fm-KazukiGames82___Connection_Status" "OnUpdateAction" ""]
OnChangeAction=[#Last_fm-KazukiGames82___Update_[#Last_fm-KazukiGames82___Show_Text]]
DynamicVariables=1
UpdateDivider=1
