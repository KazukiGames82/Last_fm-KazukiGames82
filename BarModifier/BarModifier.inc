[Variables]
Last_fm-KazukiGames82___Text_-10=
Last_fm-KazukiGames82___Text_-11=
Last_fm-KazukiGames82___Text_10=[#*Last_fm-KazukiGames82___App_Scrobbles*]
Last_fm-KazukiGames82___Text_11=

;----------------------------------------------------
; Styles
;----------------------------------------------------

[Last_fm-KazukiGames82.Style]
ImageAlpha=0
W=([Last_fm-KazukiGames82_String:W]-(([Last_fm-KazukiGames82_String:W])%1))

[Last_fm-KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Last_fm-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#Last_fm-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Last_fm-KazukiGames82]] | CustomAppButton | Last_fm-KazukiGames82
DynamicVariables=1

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Last_fm-KazukiGames82_String]
Meter=String
MeterStyle=InfoStyle | Last_fm-KazukiGames82_Style
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(#NetworkStatusVar#=1?(#Last_fm-KazukiGames82___Hide_Icon#=1?((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1):(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)):(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)),#TopBarSysTextYPadding#,(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*((#Last_fm-KazukiGames82___Hide_Text#-1)*-1)*(#NetworkStatusVar#=1?1:0)),0
Text=[#Last_fm-KazukiGames82___Text_[#NetworkStatusVar][#Last_fm-KazukiGames82___Hide_Text]]
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))

[Last_fm-KazukiGames82_Icon]
Meter=Image
MeterStyle=InfoStyle | Last_fm-KazukiGames82_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Button\Medium\ButtonColor[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*(#NetworkStatusVar#=1?(1*((#Last_fm-KazukiGames82___Hide_Icon#-1)*-1)):0.5))
Padding=#SysIconPadding#
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)
