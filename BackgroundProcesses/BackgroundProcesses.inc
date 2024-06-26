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
OnChangeAction=[!WriteKeyValue Variables "CustomAppIsLoaded" "0" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Recent Parser" "LastFm_Recent_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Tracks Parser" "LastFm_Tracks_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Artist Parser" "LastFm_Artists_Parser.ini"][!ActivateConfig "Droptop Community Apps\Apps\Last_fm-KazukiGames82\BackgroundProcesses\Tasks\Albums Parser" "LastFm_Albums_Parser.ini"]
DynamicVariables=1
UpdateDivider=-1
Group=WebParserInterval

[Last_fm-KazukiGames82___Connection_Status]
Measure=Calc
Formula=[MeasureConnection]
OnUpdateAction=[#Last_fm-KazukiGames82___Update_[#Last_fm-KazukiGames82___Hide_Text]][!SetOption "Last_fm-KazukiGames82___Connection_Status" "OnUpdateAction" ""]
OnChangeAction=[#Last_fm-KazukiGames82___Update_[#Last_fm-KazukiGames82___Hide_Text]]
DynamicVariables=1
UpdateDivider=1
