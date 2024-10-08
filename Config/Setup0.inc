[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition][#MyAppIsWebView]] | Last_Fm-KazukiGames82
DefaultUpdateDivider=-1
OnRefreshAction=[!WriteKeyValue Variables "CustomAppIsLoaded" "1" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"]
OnCloseAction=[!WriteKeyValue Variables "CustomAppIsLoaded" "0" "#SKINSPATH#Droptop Community Apps\Apps\Last_fm-KazukiGames82\Config\Common.inc"]

[Variables]
Last_Fm_Fade=1
U=[!UpdateMeterGroup Animation][!Redraw]
W=35

NumberOfItems=2

NumberOfBoxes=1
BoxHeight1=(#DropdownItemHeight#*12+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*2))+0

DividerExists1=1
DividerExists3=1
DividerExists13=1

ItemText1=#Last_fm-KazukiGames82___App_Username##CRLF##Last_fm-KazukiGames82___App_Scrobbles#
ItemAction1=#HideItems#

ItemIconFileName2=recent
ItemIconFileName2.1=track
ItemIconFileName2.2=artist
ItemIconFileName2.3=Album

ItemIsFolder3=[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Folder]
ItemText3=[#Last_fm-KazukiGames82___Parser_Text_[#Last_fm-KazukiGames82___Parser_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]]]
ItemText3.1=[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Text]
ItemIconFileName3=Edit

ItemIsFolder4=1
ItemText4=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_1]
ItemIconFileName4=1

ItemIsFolder5=1
ItemText5=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_2]
ItemIconFileName5=2

ItemIsFolder6=1
ItemText6=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_3]
ItemIconFileName6=3

ItemIsFolder7=1
ItemText7=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_4]
ItemIconFileName7=4

ItemIsFolder8=1
ItemText8=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_5]
ItemIconFileName8=5

ItemIsFolder9=1
ItemText9=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_6]
ItemIconFileName9=6

ItemIsFolder10=1
ItemText10=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_7]
ItemIconFileName10=7

ItemIsFolder11=1
ItemText11=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_8]
ItemIconFileName11=8

ItemIsFolder12=1
ItemText12=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_9]
ItemIconFileName12=9

ItemIsFolder13=1
ItemText13=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_10]
ItemIconFileName13=10

ItemText14=[#Last_fm-KazukiGames82___Parser_Error_[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_Error]]
ItemIconFileName14=blank
ItemAction14=#HideItems#[!CommandMeasure MeasureActionTimer "Stop 2"][!HideMeter HighlightBackground][!SetOption [#*CURRENTSECTION*] FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption [#*CURRENTSECTION*] InlineSetting3 ""][!UpdateMeter [#*CURRENTSECTION*]][!Redraw][#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Action_11]

ItemIsFolder15=1
ItemText15=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_PLAYS_1]#CRLF#[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_1]
ItemIconFileName15=1

ItemIsFolder16=1
ItemText16=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_PLAYS_2]#CRLF#[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_2]
ItemIconFileName16=2

ItemIsFolder17=1
ItemText17=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_PLAYS_3]#CRLF#[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_3]
ItemIconFileName17=3

ItemIsFolder18=1
ItemText18=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_PLAYS_4]#CRLF#[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_4]
ItemIconFileName18=4

ItemIsFolder19=1
ItemText19=[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_PLAYS_5]#CRLF#[#Last_fm-KazukiGames82___Data_[#[#*Last_fm-KazukiGames82___App_Page*]_Identifier_Variable]_TITLE_5]
ItemIconFileName19=5

CurrentSubfolder=1

;----------------------------------------------------
; Measures
;----------------------------------------------------

[LastFmTimer]
Measure=Plugin
Plugin=ActionTimer
ActionList1=Reset1 | Wait 10 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10 | Wait 100 | Repeat Step2,#W#,10 | Repeat Step1,#W#,10
Reset1=[!SetVariable Last_Fm_Fade "1"]#U#
Step1=[!SetVariable Last_Fm_Fade "(Clamp([#Last_Fm_Fade]+0.1,0.3,1))"]#U#
Step2=[!SetVariable Last_Fm_Fade "(Clamp([#Last_Fm_Fade]-0.1,0.3,1))"]#U#
DynamicVariables=1
IgnoreWarnings=1
UpdateDivider=-1
Group=Animation
Disabled=1

[MeasureTime1]
Measure=Time
UpdateDivider=1
Group=Time

[MeasureTime2]
Measure=Uptime
Format=%4!i!,%3!i!,%2!i!,%1!i!
SecondsValue=([MeasureTime1:]-[#Last_fm-KazukiGames82___Data_[#[#Last_fm-KazukiGames82___App_Page]_Identifier_Variable]_Updated])
IfMatch=.*,.*,.*,0
IfMatchAction=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Sec" "0"]
IfNotMatchAction=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Sec" "1"]
IfMatch2=.*,.*,0,
IfMatchAction2=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Min" "0"]
IfNotMatchAction2=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Min" "1"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Sec" "0"]
IfMatch3=.*,0,
IfMatchAction3=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Hr" "0"]
IfNotMatchAction3=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Hr" "1"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Min" "0"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Sec" "0"]
IfMatch4=^0,
IfMatchAction4=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Day" "0"]
IfNotMatchAction4=[!SetVariable "Last_fm-KazukiGames82___Measure_Show_Day" "1"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Hr" "0"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Min" "0"][!SetVariable "Last_fm-KazukiGames82___Measure_Show_Sec" "0"]
IfMatchMode=1
DynamicVariables=1
UpdateDivider=1
Group=Time

[MeasureTime3]
Measure=Uptime
Format=[#Last_fm-KazukiGames82___Measure_TopBar_[#Last_fm-KazukiGames82___Measure_Show_Day]_[#Last_fm-KazukiGames82___Measure_Show_Hr]_[#Last_fm-KazukiGames82___Measure_Show_Min]_[#Last_fm-KazukiGames82___Measure_Show_Sec]]
SecondsValue=([MeasureTime1:]-[#Last_fm-KazukiGames82___Data_[#[#Last_fm-KazukiGames82___App_Page]_Identifier_Variable]_Updated])
DynamicVariables=1
UpdateDivider=1
Group=Time

;----------------------------------------------------
; Boxs
;----------------------------------------------------

[Box1]
MouseOverAction=
MouseLeaveAction=

;----------------------------------------------------
; Containers
;----------------------------------------------------

[15Container]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=((#DropdownIconYoffset#+#DropdownItemHeight#)-((#DropdownIconYoffset#+#DropdownItemHeight#)%1)+#DropdownItemYOffset#+[Box1:Y]+(3*#DroptopSize#)+(#DividerHeight#+(#DividerSpace#*2)))

[16Container]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R

[18Container]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R

;----------------------------------------------------

[15Outline]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=((#DropdownIconYoffset#+#DropdownItemHeight#)-((#DropdownIconYoffset#+#DropdownItemHeight#)%1)+#DropdownItemYOffset#+[Box1:Y]+(3*#DroptopSize#)+(#DividerHeight#+(#DividerSpace#*2)))

[16Outline]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R

[18Outline]
X=(#DropdownIconXoffset#+#SysAppMenuXOffset#)
Y=R

;----------------------------------------------------
; Strings
;----------------------------------------------------

[HomePageHighlightBackground]
Meter=Shape
Shape=Rectangle 0,0,[#Last_fm___Home_Page_Meter_Hover#:W],[#Last_fm___Home_Page_Meter_Hover#:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
Shape2=Rectangle 0,0,[#Last_fm___Home_Page_Meter_Hover#:W],[#Last_fm___Home_Page_Meter_Hover#:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill Color #DropdownFontColor1#,((25*#ReverseDarkLight#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0
Shape3=Rectangle 0,0,[#Last_fm___Home_Page_Meter_Hover#:W],[#Last_fm___Home_Page_Meter_Hover#:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle 0,0,[#Last_fm___Home_Page_Meter_Hover#:W],[#Last_fm___Home_Page_Meter_Hover#:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill Color 255,255,255,((55*#DropdownHLSolidColor#)*#ActionTimer.HLFadeIn#) | StrokeWidth 0 | Stroke Color 0,0,0,(#DropdownHLStrokeOpacity#*#ActionTimer.HLFadeIn#)
HLColorGradient=0 | #DropdownItemHL#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 1.0 | #DropdownItemHL2#,((#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#)*#ActionTimer.HLFadeIn#) ; 0.0
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
X=[#Last_fm___Home_Page_Meter_Hover#:X]
Y=[#Last_fm___Home_Page_Meter_Hover#:Y]
Group=Animation.HL
DynamicVariables=1
Hidden=1

[HomePageHighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShapeCustom[#HLSelectedShapeNum]]
Shape2=Rectangle 0,0,[2Icon:W],[2Icon:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill LinearGradient HLColorGradient | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle 0,0,[2Icon:W],[2Icon:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle 0,0,[2Icon:W],[2Icon:H],((8*#DroptopSize#)-(8*#DroptopSize#)%1) | Fill Color 255,255,255,(55*#DropdownHLSolidColor#) | StrokeWidth 0 | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
ShapeOption=[#HLSelectedOption[#HLSelectedShapeNum]]
HLColorGradient=0 | #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 1.0 | #DropdownItemHL2#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor2B#) ; 0.0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=([2Icon:X]+[2Icon:W]*(#Last_fm-KazukiGames82___App_Page#-1))
Y=[2Icon:Y]
DynamicVariables=1

;----------------------------------------------------
; Strings
;----------------------------------------------------

[MeasureToday]
Measure=Time
Format=%B / %d
FormatLocale=[#Language[#LanguageNum]]
DynamicVariables=1

[1]
InlinePattern3=#CRLF#.*
InlineSetting3=Size | (#DropdownItemFontSize#*0.8)
InlinePattern4=#CRLF#.*
InlineSetting4=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

[2]
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

[3]
StringAlign=RightCenter
X=(#DropdownMenuWidth#+2)
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,(#Last_fm-KazukiGames82___App_Page#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+[Box1:Y]+(3*#DroptopSize#))
W=
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!EnableMeasure MeasureActionTimer.Actions][!UpdateMeasure MeasureActionTimer.Actions]
MouseOverAction=[!WriteKeyValue Variables Last_fm-KazukiGames82___App_Page_Temp "[#Last_fm-KazukiGames82___App_Page]" "#CURRENTPATH#Folder\Folder3.ini"][!WriteKeyValue Variables CheckmarkKeyA "Last_fm-KazukiGames82___Parser_[#[#Last_fm-KazukiGames82___App_Page]_Identifier_Variable]" "#CURRENTPATH#Folder\Folder3.ini"][!SetVariable ActionTimer.HLFadeIn 0.2][!SetVariable ActionTimer.ActionNum #SubmenuDirection#][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#.1 FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontEffectColor "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION#.1 FontEffectColor "#*DropdownFontColor2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#.1][!UpdateMeter #CURRENTSECTION#Icon][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!CommandMeasure MeasureActionTimer "Stop 2"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#.1 FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#.1][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
Hidden=0

    [3.1]
    Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
    Y=r    
    W=([3:X]-#DropdownNoIconPadding#*2)
    MouseOverAction=[!SetVariable ActionTimer.HLFadeIn 0.2][!SetOption 15 SolidColor "#DropdownBGColor1#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 15 FontColor "#*DropdownFontColor1*#,(255*#*ActionTimer.HLFadeIn*#)"][!SetOption 15 InlineSetting4 "Color | #*DropdownFontColor1*#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 15Blur ImageAlpha "(255*#*ActionTimer.HLFadeIn*#)"] [!SetOption 16 SolidColor "#DropdownBGColor1#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 16 FontColor "#*DropdownFontColor1*#,(255*#*ActionTimer.HLFadeIn*#)"][!SetOption 16 InlineSetting4 "Color | #*DropdownFontColor1*#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 16Blur ImageAlpha "(255*#*ActionTimer.HLFadeIn*#)"] [!SetOption 17 SolidColor "#DropdownBGColor1#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 17 FontColor "#*DropdownFontColor1*#,(255*#*ActionTimer.HLFadeIn*#)"][!SetOption 17 InlineSetting4 "Color | #*DropdownFontColor1*#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 17Blur ImageAlpha "(255*#*ActionTimer.HLFadeIn*#)"] [!SetOption 18 SolidColor "#DropdownBGColor1#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 18 FontColor "#*DropdownFontColor1*#,(255*#*ActionTimer.HLFadeIn*#)"][!SetOption 18 InlineSetting4 "Color | #*DropdownFontColor1*#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 18Blur ImageAlpha "(255*#*ActionTimer.HLFadeIn*#)"] [!SetOption 19 SolidColor "#DropdownBGColor1#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 19 FontColor "#*DropdownFontColor1*#,(255*#*ActionTimer.HLFadeIn*#)"][!SetOption 19 InlineSetting4 "Color | #*DropdownFontColor1*#,((255/1.5)*#*ActionTimer.HLFadeIn*#)"][!SetOption 19Blur ImageAlpha "(255*#*ActionTimer.HLFadeIn*#)"] [!UpdateMeter 15][!UpdateMeter 15Blur] [!UpdateMeter 16][!UpdateMeter 16Blur] [!UpdateMeter 17][!UpdateMeter 17Blur] [!UpdateMeter 18][!UpdateMeter 18Blur] [!UpdateMeter 19][!UpdateMeter 19Blur][!Redraw][!CommandMeasure MeasureActionTimer "Execute 2"]
    MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 2"][!SetOption 15 SolidColor ""][!SetOption 15 FontColor ""][!SetOption 15 InlineSetting4 ""][!SetOption 15Blur ImageAlpha ""] [!SetOption 16 SolidColor ""][!SetOption 16 FontColor ""][!SetOption 16 InlineSetting4 ""][!SetOption 16Blur ImageAlpha ""] [!SetOption 17 SolidColor ""][!SetOption 17 FontColor ""][!SetOption 17 InlineSetting4 ""][!SetOption 17Blur ImageAlpha ""] [!SetOption 18 SolidColor ""][!SetOption 18 FontColor ""][!SetOption 18 InlineSetting4 ""][!SetOption 18Blur ImageAlpha ""] [!SetOption 19 SolidColor ""][!SetOption 19 FontColor ""][!SetOption 19 InlineSetting4 ""][!SetOption 19Blur ImageAlpha ""] [!UpdateMeter 15][!UpdateMeter 15Blur] [!UpdateMeter 16][!UpdateMeter 16Blur] [!UpdateMeter 17][!UpdateMeter 17Blur] [!UpdateMeter 18][!UpdateMeter 18Blur] [!UpdateMeter 19][!UpdateMeter 19Blur][!Redraw]
    LeftMouseDownAction=
    RightMouseDownAction=
    Hidden=0

[4]
Y=((#DividerHeight#+(#DividerSpace#*2))*[#DividerExists[#DividerY[##CURRENTSECTION#]]])R

[14]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+[Box1:Y]+(3*#DroptopSize#)+[3:H]*11+((#DividerHeight#+(#DividerSpace#*2))*2))
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
Hidden=0

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
W=(((#DropdownMenuWidth#+2)-((#DropdownIconPadding#+[1Icon:X])*2))-(((#DropdownMenuWidth#+2)-((#DropdownIconPadding#+[1Icon:X])*2))%1))

[2Icon]
X=((#DropdownMenuWidth#+2)/2-[2Icon:W]/2-[2.1Icon:W]/2-[2.2Icon:W])
Y=[#IconY[#MyAppIsWebView]]

    [2.1Icon]

    [2.2Icon]

    [2.3Icon]

[3Icon]
X=(((#DropdownMenuWidth#+2)-#DropdownIconXoffset#-#IconW#-(#DropdownIconPadding#*2))+#SysAppMenuXOffset#)
Y=[3:Y]
ImageAlpha=(#DropdownItemOpacity#*(#Last_fm-KazukiGames82___App_Page#=1?0:1))
Hidden=0

;----------------------------------------------------
; Arrows
;----------------------------------------------------

[3Arrow]
Hidden=1

[Divider3]
Y=([[##CURRENTSECTION#]:Y]+#DropdownItemHeight#+#DividerSpace#)
Hidden=(([#DividerExists[##CURRENTSECTION#]]-1)*-1)

[Divider13]
Y=([14:Y]-#DividerSpace#)
Hidden=(([#DividerExists[##CURRENTSECTION#]]-1)*-1)
