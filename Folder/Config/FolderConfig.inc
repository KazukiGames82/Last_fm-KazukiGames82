;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]

[Variables]
CustomAppPosition=3

FolderNumber=6

@IncludeCommunityAppSubMenuMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppSubMenuMeters.inc

NumberOfDividers=[#AutoDividerCalc[#NumberOfItems]]

NumberOfItems=6

DividerExists1=1
DividerExists2=0
DividerExists3=0
DividerExists4=0
DividerExists5=0
DividerExists6=0
DividerExists7=0
DividerExists8=0
DividerExists9=0

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

Last_fm-KazukiGames82___App_Page_Temp_1=TIME
Last_fm-KazukiGames82___App_Page_Temp_2=PLAYS
Last_fm-KazukiGames82___App_Page_Temp_3=PLAYS
Last_fm-KazukiGames82___App_Page_Temp_4=PLAYS

Last_fm-KazukiGames82___App_Page_Temp_Items_1=7
Last_fm-KazukiGames82___App_Page_Temp_Items_2=7
Last_fm-KazukiGames82___App_Page_Temp_Items_3=6
Last_fm-KazukiGames82___App_Page_Temp_Items_4=6

CheckmarkKeyA=CustomCheckmark1
CheckmarkKeyB=CustomCheckmark2
CheckmarkKeyC=CustomCheckmark3

;----------------------------------------------------

ItemIsToggle1=0
ItemIsCheckmark1=0
ItemCheckmarkGroup1=
ItemCheckmarkValue1=
ItemToggleKey1=
ItemText1=Submenu text 1
ItemIconFileName1=blank
ItemAction1=

ItemIsToggle2=0
ItemIsCheckmark2=0
ItemCheckmarkGroup2=
ItemCheckmarkValue2=
ItemToggleKey2=
ItemText2=Submenu text 2
ItemIconFileName2=blank
ItemAction2=

ItemIsToggle3=0
ItemIsCheckmark3=0
ItemCheckmarkGroup3=
ItemCheckmarkValue3=
ItemToggleKey3=
ItemText3=Submenu text 3
ItemIconFileName3=blank
ItemAction3=

ItemIsToggle4=0
ItemIsCheckmark4=0
ItemCheckmarkGroup4=
ItemCheckmarkValue4=
ItemToggleKey4=
ItemText4=Submenu text 4
ItemIconFileName4=blank
ItemAction4=

ItemIsToggle5=0
ItemIsCheckmark5=0
ItemCheckmarkGroup5=
ItemCheckmarkValue5=
ItemToggleKey5=
ItemText5=Submenu text 5
ItemIconFileName5=blank
ItemAction5=

ItemIsToggle6=0
ItemIsCheckmark6=0
ItemCheckmarkGroup6=
ItemCheckmarkValue6=
ItemToggleKey6=
ItemText6=Submenu text 6
ItemIconFileName6=blank
ItemAction6=

ItemIsToggle7=0
ItemIsCheckmark7=0
ItemCheckmarkGroup7=
ItemCheckmarkValue7=
ItemToggleKey7=
ItemText7=
ItemIconFileName7=blank
ItemAction7=

ItemIsToggle8=0
ItemIsCheckmark8=0
ItemCheckmarkGroup8=
ItemCheckmarkValue8=
ItemToggleKey8=
ItemText8=
ItemIconFileName8=blank
ItemAction8=

ItemIsToggle9=0
ItemIsCheckmark9=0
ItemCheckmarkGroup9=
ItemCheckmarkValue9=
ItemToggleKey9=
ItemText9=
ItemIconFileName9=blank
ItemAction9=

ItemIsToggle10=0
ItemIsCheckmark10=0
ItemCheckmarkGroup10=
ItemCheckmarkValue10=
ItemToggleKey10=
ItemText10=
ItemIconFileName10=blank
ItemAction10=

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]

[ArrowStyleB]
Hidden=1

[Background]
Shape2=

[HighlightBackground]

[HighlightSelected]

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[2Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[3Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[4Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[5Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[6Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[7Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[8Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[9Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

[10Icon]
MeterStyle=IconStyle | ToggleIconStyle[#ItemIsToggle[##CURRENTSECTION#]] | CheckmarkIconStyle[#ItemIsCheckmark[##CURRENTSECTION#]]
Group=CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]] | CheckmarkGroup[#ItemCheckmarkGroup[##CURRENTSECTION#]].[##CURRENTSECTION#]

;-----------------------------------------

[DividerStyle]
Shape=#DividerShapeSub#
Y=(#NumberOfItems#>[##CURRENTSECTION#]?([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#):0)
Hidden=(#NumberOfItems#>[##CURRENTSECTION#]?(([#DividerExists[##CURRENTSECTION#]]-1)*-1):1)
Container=AnimationContainer
DynamicVariables=1

[Divider1]
Meter=Shape
MeterStyle=DividerStyle

[Divider2]
Meter=Shape
MeterStyle=DividerStyle

[Divider3]
Meter=Shape
MeterStyle=DividerStyle

[Divider4]
Meter=Shape
MeterStyle=DividerStyle

[Divider5]
Meter=Shape
MeterStyle=DividerStyle

[Divider6]
Meter=Shape
MeterStyle=DividerStyle

[Divider7]
Meter=Shape
MeterStyle=DividerStyle

[Divider8]
Meter=Shape
MeterStyle=DividerStyle

[Divider9]
Meter=Shape
MeterStyle=DividerStyle
