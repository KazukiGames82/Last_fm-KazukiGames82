;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=1

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; Default Variables

WebViewHeight=0

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

;----------------------------------------------------
; Custom Variables

IconW=((24*#DroptopSize#)-((24*#DroptopSize#)%1))
IconH=((24*#DroptopSize#)-((24*#DroptopSize#)%1))

NewDropdownItemHeight=((40*#DroptopSize#)-((40*#DroptopSize#)%1))
NewDropdownIconPadding=((#NewDropdownItemHeight#-#IconH#)/2)

;----------------------------------------------------
; 1Region Variables

1Region_Menu_Title_1=1
1Region_Menu_Title_2=2
1Region_Menu_Title_3=3
1Region_Menu_Title_4=4

1Region_Menu_Icon_1=1
1Region_Menu_Icon_2=2
1Region_Menu_Icon_3=3
1Region_Menu_Icon_4=4

1Region_CurrentHighlight=1Region_Menu_Title_0

HLSelectedMenuB1=([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:X]),[1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:Y],([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:W]),[1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:H],(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],([#*HighlightShapeOpacity*]/[#*HighlightShapeOpacityDivisor2B*]) | StrokeWidth 0
HLSelectedMenuB2=([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:X]+(0.5*#DroptopSize#)),([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:Y]+(0.5*#DroptopSize#)),([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:W]-(0.5*#DroptopSize#)*2),([1Region_Menu_Title_[#*Last_fm-KazukiGames82___App_Page*]:H]-(0.5*#DroptopSize#)*2),(#DropdownBGCorner#/2) | Fill Color [#*DropdownItemHL*],25 | StrokeWidth (2*#DroptopSize#) | Stroke Color [#*DropdownItemHL*],255

;----------------------------------------------------
; 2Region Variables

2Region_Container_1=1
2Region_Container_2=2
2Region_Container_3=3
2Region_Container_4=4
2Region_Container_5=5
2Region_Container_6=6
2Region_Container_7=7
2Region_Container_8=8
2Region_Container_9=9
2Region_Container_10=10

2Region_Icon_1=1
2Region_Icon_2=2
2Region_Icon_3=3
2Region_Icon_4=4
2Region_Icon_5=5
2Region_Icon_6=6
2Region_Icon_7=7
2Region_Icon_8=8
2Region_Icon_9=9
2Region_Icon_10=10

2Region_Outline_1=1
2Region_Outline_2=2
2Region_Outline_3=3
2Region_Outline_4=4
2Region_Outline_5=5
2Region_Outline_6=6
2Region_Outline_7=7
2Region_Outline_8=8
2Region_Outline_9=9
2Region_Outline_10=10

;----------------------------------------------------
; 3Region Variables

3Region_Container_1=1
3Region_Container_2=2
3Region_Container_3=3
3Region_Container_4=4
3Region_Container_5=5

3Region_Icon_1=1
3Region_Icon_2=2
3Region_Icon_3=3
3Region_Icon_4=4
3Region_Icon_5=5

3Region_Container_Blur_1=1
3Region_Container_Blur_2=2
3Region_Container_Blur_3=3
3Region_Container_Blur_4=4
3Region_Container_Blur_5=5

3Region_Icon_Blur_1=1
3Region_Icon_Blur_2=2
3Region_Icon_Blur_3=3
3Region_Icon_Blur_4=4
3Region_Icon_Blur_5=5

3Region_SubTitle_1=1
3Region_SubTitle_2=2
3Region_SubTitle_3=3
3Region_SubTitle_4=4
3Region_SubTitle_5=5
3Region_SubTitle_6=6
3Region_SubTitle_7=7
3Region_SubTitle_8=8
3Region_SubTitle_9=9
3Region_SubTitle_10=10

3Region_SubTitle_Mini_6=1
3Region_SubTitle_Mini_7=2
3Region_SubTitle_Mini_8=3
3Region_SubTitle_Mini_9=4
3Region_SubTitle_Mini_10=5

3Region_Outline_1=1
3Region_Outline_2=2
3Region_Outline_3=3
3Region_Outline_4=4
3Region_Outline_5=5

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
Hidden=1

[IconStyle]
Hidden=1

[ArrowStyleB]
Hidden=1

[BoxStyle]
Hidden=1

[TextStyle]
Hidden=1

[HighlightStyle]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
Group=Highlight | HL
DynamicVariables=1

[2Region_IconStyle_3]

[2Region_IconStyle_4]

[2Region_IconStyle_5]

[3Region_IconStyle_1]

[3Region_IconStyle_2]

[3Region_IconStyle_3]

;--------------------------------------------------------------------------------------------------------
; REGION1 STYLES
;--------------------------------------------------------------------------------------------------------

[1Region_InfoStyle]
FontSize=(8.5*#DroptopSize#)
InlinePattern3=#CRLF#.*
InlineSetting3=Size | ((8.5*#DroptopSize#)*0.8)
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
Text=[#[#CURRENTSECTION]_Text]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
Hidden=0
Group=1Region

[1Region_MenuInfoStyle]
InlineSetting3=
Padding=0,0,0,((2*#DroptopSize#)-((2*#DroptopSize#)%1))
StringAlign=CenterBottom
FontSize=((7*#DroptopSize#)-((7*#DroptopSize#)%1))
X=(((10*#DroptopSize#)-((10*#DroptopSize#)%1)))R
Y=r
W=((((#DropdownMenuWidth#+2)-(((10*#DroptopSize#)-((10*#DroptopSize#)%1)))*5)/4))
H=(#NewDropdownItemHeight#-((2*#DroptopSize#)-((2*#DroptopSize#)%1))-#DropdownMenuCutout#*2)
Text=[#[#CURRENTSECTION]_Text]
LeftMouseDownAction=[!#Hide# "#CURRENTCONFIG#\Folder"][!SetVariable "Last_fm-KazukiGames82___App_Page" "[##CURRENTSECTION#]"][!SetVariable 2Region_Title_Text "[#Last_fm-KazukiGames82___Info_0_Page_[#Last_fm-KazukiGames82___App_Page]]"][!UpdateMeter *][!Redraw]
LeftMouseDoubleClickAction=[!#Hide# "#CURRENTCONFIG#\Folder"][!SetVariable "Last_fm-KazukiGames82___App_Page" "[##CURRENTSECTION#]"][!SetVariable 2Region_Title_Text "[#Last_fm-KazukiGames82___Info_0_Page_[#Last_fm-KazukiGames82___App_Page]]"][!SetVariable 1Region_CurrentHighlight "1Region_Menu_Title_0"][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 1Region_Menu_Icon_[##CURRENTSECTION#] ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeter 1Region_HighlightBackground][!UpdateMeter *][!Redraw][#Last_fm-KazukiGames82___Link_11_Page_[#Last_fm-KazukiGames82___App_Page]]
MouseOverAction=[!ShowMeter 1Region_HighlightBackground][!SetVariable 1Region_CurrentHighlight "[#CURRENTSECTION]"][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption 1Region_Menu_Icon_[##CURRENTSECTION#] ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!UpdateMeterGroup 1Region][!UpdateMeterGroup Highlight][!Redraw]
MouseLeaveAction=[!HideMeter 1Region_HighlightBackground][!SetVariable 1Region_CurrentHighlight "1Region_Menu_Title_0"][!SetOption [#CURRENTSECTION] FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption 1Region_Menu_Icon_[##CURRENTSECTION#] ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeterGroup 1Region][!UpdateMeterGroup Highlight][!Redraw]
ClipString=0
Group=1Region
Hidden=0

[1Region_MenuIconStyle]
Padding=#DropdownIconPadding#,#NewDropdownIconPadding#,#DropdownIconPadding#,(#NewDropdownIconPadding#+(#NewDropdownIconPadding#%1))
ImageName=#MyIconsLoc#\[##CURRENTSECTION#]Icon.png
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
ImageAlpha=#DropdownItemOpacity#
X=([1Region_Menu_Title_[##CURRENTSECTION#]:X]+[1Region_Menu_Title_[##CURRENTSECTION#]:W]/2-[#CURRENTSECTION#:W]/2)
Y=r
W=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
H=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
Group=1Region
MouseOverAction=
MouseLeaveAction=
Hidden=0

;--------------------------------------------------------------------------------------------------------
; REGION1 METERS
;--------------------------------------------------------------------------------------------------------

[1Region_HighlightBackground]
Meter=Shape
MeterStyle=HighlightStyle

[1Region_HighlightSelected]
Meter=Shape
MeterStyle=HighlightStyle

;---

[1Region_Title]
Meter=String
MeterStyle=InfoStyle | 1Region_InfoStyle

[1Region_Divider]
Meter=Shape
Shape=#DividerShape#

[1Region_SubTitle]
Meter=String
MeterStyle=InfoStyle | 1Region_InfoStyle

;---

[1Region_Menu_Title_1]
Meter=String
MeterStyle=InfoStyle | 1Region_MenuInfoStyle

[1Region_Menu_Title_2]
Meter=String
MeterStyle=InfoStyle | 1Region_MenuInfoStyle

[1Region_Menu_Title_3]
Meter=String
MeterStyle=InfoStyle | 1Region_MenuInfoStyle

[1Region_Menu_Title_4]
Meter=String
MeterStyle=InfoStyle | 1Region_MenuInfoStyle

;---

[1Region_Menu_Icon_1]
Meter=Image
MeterStyle=IconStyle | 1Region_MenuIconStyle

[1Region_Menu_Icon_2]
Meter=Image
MeterStyle=IconStyle | 1Region_MenuIconStyle

[1Region_Menu_Icon_3]
Meter=Image
MeterStyle=IconStyle | 1Region_MenuIconStyle

[1Region_Menu_Icon_4]
Meter=Image
MeterStyle=IconStyle | 1Region_MenuIconStyle

;--------------------------------------------------------------------------------------------------------
; REGION2 STYLES
;--------------------------------------------------------------------------------------------------------

[2Region_InfoStyle]
InlinePattern3=#CRLF#.*
InlineSetting3=Size | ((8.5*#DroptopSize#)*0.8)
InlinePattern4=#CRLF#.*
InlineSetting4=Color | #DropdownFontColor1#,(#Last_fm-KazukiGames82___App_Page#>=3?0:((#DropdownItemOpacity#/2)*#Last_Fm_Fade#))
Padding=(#RTLText#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,(#RTLText#=1?#DropdownItemPadding1#:#DropdownNoIconPadding#),(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#Last_fm-KazukiGames82___App_Page#>=3?0:(#DropdownItemOpacity#*#Last_Fm_Fade#))
FontSize=(8.5*#DroptopSize#)
W=((#DropdownMenuWidth#+2)-#DropdownItemPadding1#-#DropdownNoIconPadding#)
H=#NewDropdownItemHeight#
Text=[#[#CURRENTSECTION]_Text]
LeftMouseDownAction=[#[#CURRENTSECTION]_Action]
MouseOverAction=[!SetOption #CURRENTSECTION# InlineSetting5 "Underline"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# InlineSetting5 ""][!UpdateMeter #CURRENTSECTION#][!Redraw]
Group=2Region | Animation
Hidden=0

[2Region_ContainerStyle]
Shape=Rectangle 0.5,0.5,(#IconW#-(0.5*2)),(#IconH#-(0.5*2)),(3*#DroptopSize#) | Extend Color
Color=Fill Color 255,255,255,(#Last_fm-KazukiGames82___App_Page#>=3?0:255) | StrokeWidth 0.2 | Stroke Color 255,255,255,0
Padding=#DropdownIconPadding#,#NewDropdownIconPadding#,#DropdownIconPadding#,(#NewDropdownIconPadding#+(#NewDropdownIconPadding#%1))
X=(#DropdownIconXoffset#+(((#DropdownMenuWidth#+2)-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#)+#SysAppMenuXOffset#)
Y=[2Region_SubTitle_[##CURRENTSECTION#]:Y]
AntiAlias=1
DynamicVariables=1
Group=2Region | Animation
Hidden=0

[2Region_IconStyle]
ImageName=[#Last_fm-KazukiGames82___Image_[##CURRENTSECTION#]_Page_[#Last_fm-KazukiGames82___App_Page]]
Padding=#DropdownIconPadding#,#NewDropdownIconPadding#,#DropdownIconPadding#,(#NewDropdownIconPadding#+(#NewDropdownIconPadding#%1))
Container=2Region_Container_[##CURRENTSECTION#]
X=0
Y=0
Group=2Region | Animation
Hidden=0

[2Region_IconStyle_0]
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#*#Last_Fm_Fade#)
ImageAlpha=(#DropdownItemOpacity#*#Last_Fm_Fade#)

[2Region_IconStyle_1]
ImageTint=255,255,255,255
ImageAlpha=255

[2Region_IconStyle_2]
ImageTint=255,255,255,255
ImageAlpha=255

[2Region_OutlineStyle]
Color=Fill Color 255,255,255,0 | StrokeWidth 0.2 | Stroke Color 255,255,255,(#Last_fm-KazukiGames82___App_Page#>=3?0:255)

;--------------------------------------------------------------------------------------------------------
; REGION2 METERS
;--------------------------------------------------------------------------------------------------------

[2Region_Title]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_Divisor]
Meter=Shape
Shape=#DividerShape#

;---

[2Region_SubTitle_1]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_2]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_3]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_4]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_5]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_6]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_7]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_8]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_9]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

[2Region_SubTitle_10]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

;---

[2Region_Date]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle

;---

[2Region_Container_1]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_2]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_3]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_4]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_5]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_6]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_7]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_8]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_9]
Meter=Shape
MeterStyle=2Region_ContainerStyle

[2Region_Container_10]
Meter=Shape
MeterStyle=2Region_ContainerStyle

;---

[2Region_Icon_1]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_2]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_3]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_4]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_5]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_6]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_7]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_8]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_9]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[2Region_Icon_10]
Meter=Image
MeterStyle=IconStyle | 2Region_IconStyle | 2Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

;---

[2Region_Outline_1]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_2]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_3]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_4]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_5]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_6]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_7]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_8]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_9]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

[2Region_Outline_10]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 2Region_OutlineStyle

;--------------------------------------------------------------------------------------------------------
; REGION3 STYLES
;--------------------------------------------------------------------------------------------------------

[3Region_ContainerStyle]
Padding=0,0,0,0
Shape=Rectangle 0.5,0.5,((((#DropdownMenuWidth#+2)-(((10*#DroptopSize#)-((10*#DroptopSize#)%1)))*3)/2)-(0.5*2)),(#NewDropdownItemHeight#*2.6-(0.5*2)),(#DropdownBGCorner#/2) | Extend Color
Color=Fill Color 255,255,255,(#Last_fm-KazukiGames82___App_Page#<=2?0:255) | StrokeWidth 0.2 | Stroke Color 255,255,255,0
Padding=#DropdownIconPadding#,#NewDropdownIconPadding#,#DropdownIconPadding#,(#NewDropdownIconPadding#+(#NewDropdownIconPadding#%1))
X=((10*#DroptopSize#)-((10*#DroptopSize#)%1))R
Y=((10*#DroptopSize#)-((10*#DroptopSize#)%1))R

[3Region_IconStyle]
Padding=0,0,0,0
W=[3Region_Container_[##CURRENTSECTION#]:W]
H=[3Region_Container_[##CURRENTSECTION#]:H]
PreserveAspectRatio=2
Container=3Region_Container_[##CURRENTSECTION#]

[3Region_IconStyle_3]
ImageTint=255,255,255,255
ImageAlpha=255

[3Region_IconStyle_4]
ImageTint=255,255,255,255
ImageAlpha=255

[3Region_IconStyle_5]
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#*#Last_Fm_Fade#)
ImageAlpha=(#DropdownItemOpacity#*#Last_Fm_Fade#)

[3Region_ContainerBlurStyle]
Shape2=Rectangle 0.5,0.5,((((#DropdownMenuWidth#+2)-(((10*#DroptopSize#)-((10*#DroptopSize#)%1)))*3)/2)-(0.5*2)),(#NewDropdownItemHeight#*2.6-((33*#DroptopSize#)-((33*#DroptopSize#)%1))-(0.5*2)),0 | Extend Color
Shape3=Combine Shape | Exclude Shape2
X=[3Region_Container_[##CURRENTSECTION#]:X]
Y=[3Region_Container_[##CURRENTSECTION#]:Y]

[3Region_IconBlurStyle]
ImageName=[#Last_fm-KazukiGames82___Image_[##CURRENTSECTION#]_Page_[#Last_fm-KazukiGames82___App_Page]_Blur]
Container=3Region_Container_Blur_[##CURRENTSECTION#]

[3Region_InfoStyle]
SolidColor=#DropdownBGColor1#,((255/2)*#Last_Fm_Fade#)
FontColor=#DropdownFontColor1#,(#Last_fm-KazukiGames82___App_Page#<=2?0:(#DropdownItemOpacity#*#Last_Fm_Fade#))
FontSize=(6.5*#DroptopSize#)
StringAlign=CenterCenter
LeftMouseDownAction=
MouseLeaveAction=
MouseOverAction=
Padding=((5*#DroptopSize#)-((5*#DroptopSize#)%1)),((5*#DroptopSize#)-((5*#DroptopSize#)%1)),((5*#DroptopSize#)-((5*#DroptopSize#)%1)),((5*#DroptopSize#)-((5*#DroptopSize#)%1))
X=([3Region_Container_[##CURRENTSECTION#]:W]/2)
Y=([3Region_Container_[##CURRENTSECTION#]:H]-((13*#DroptopSize#)-((13*#DroptopSize#)%1))-((20*#DroptopSize#)-((20*#DroptopSize#)%1))/2)
W=([3Region_Container_[##CURRENTSECTION#]:W]-((5*#DroptopSize#)-((5*#DroptopSize#)%1))*2)
H=((10*#DroptopSize#)-((10*#DroptopSize#)%1))
Container=3Region_Container_Blur_[##CURRENTSECTION#]

[3Region_InfoMiniStyle]
Padding=((5*#DroptopSize#)-((5*#DroptopSize#)%1)),0,((5*#DroptopSize#)-((5*#DroptopSize#)%1)),((5*#DroptopSize#)-((5*#DroptopSize#)%1))
X=([3Region_Container_[#3Region_SubTitle_Mini_[##CURRENTSECTION#]]:W]/2)
Y=([3Region_Container_[#3Region_SubTitle_Mini_[##CURRENTSECTION#]]:H]-((13*#DroptopSize#)-((13*#DroptopSize#)%1))/2)
W=([3Region_Container_[#3Region_SubTitle_Mini_[##CURRENTSECTION#]]:W]-((5*#DroptopSize#)-((5*#DroptopSize#)%1))*2)
FontSize=(5.5*#DroptopSize#)
H=((8*#DroptopSize#)-((8*#DroptopSize#)%1))
Container=3Region_Container_Blur_[#3Region_SubTitle_Mini_[##CURRENTSECTION#]]

[3Region_OutlineStyle]
Color=Fill Color 255,255,255,0 | StrokeWidth 0.2 | Stroke Color 255,255,255,(#Last_fm-KazukiGames82___App_Page#<=2?0:255)

;--------------------------------------------------------------------------------------------------------
; REGION3 METERS
;--------------------------------------------------------------------------------------------------------

[3Region_Container_1]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle

[3Region_Container_2]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle

[3Region_Container_3]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle

[3Region_Container_4]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle

[3Region_Container_5]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle

;---

[3Region_Icon_1]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[3Region_Icon_2]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[3Region_Icon_3]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[3Region_Icon_4]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

[3Region_Icon_5]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconStyle_#Last_fm-KazukiGames82___App_Page#

;---

[3Region_Container_Blur_1]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_ContainerBlurStyle

[3Region_Container_Blur_2]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_ContainerBlurStyle

[3Region_Container_Blur_3]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_ContainerBlurStyle

[3Region_Container_Blur_4]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_ContainerBlurStyle

[3Region_Container_Blur_5]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_ContainerBlurStyle

;---

[3Region_Icon_Blur_1]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconBlurStyle

[3Region_Icon_Blur_2]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconBlurStyle

[3Region_Icon_Blur_3]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconBlurStyle

[3Region_Icon_Blur_4]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconBlurStyle

[3Region_Icon_Blur_5]
Meter=Image
MeterStyle=2Region_ContainerStyle | 2Region_IconStyle | 3Region_IconStyle | 3Region_IconBlurStyle

;---

[3Region_SubTitle_1]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle

[3Region_SubTitle_2]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle

[3Region_SubTitle_3]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle

[3Region_SubTitle_4]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle

[3Region_SubTitle_5]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle

[3Region_SubTitle_6]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle | 3Region_InfoMiniStyle

[3Region_SubTitle_7]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle | 3Region_InfoMiniStyle

[3Region_SubTitle_8]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle | 3Region_InfoMiniStyle

[3Region_SubTitle_9]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle | 3Region_InfoMiniStyle

[3Region_SubTitle_10]
Meter=String
MeterStyle=InfoStyle | 2Region_InfoStyle | 3Region_InfoStyle | 3Region_InfoMiniStyle

;---

[3Region_Outline_1]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_OutlineStyle | 3Region_Container_1

[3Region_Outline_2]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_OutlineStyle | 3Region_Container_2

[3Region_Outline_3]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_OutlineStyle | 3Region_Container_3

[3Region_Outline_4]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_OutlineStyle | 3Region_Container_4

[3Region_Outline_5]
Meter=Shape
MeterStyle=2Region_ContainerStyle | 3Region_ContainerStyle | 3Region_OutlineStyle | 3Region_Container_5

;--------------------------------------------------------------------------------------------------------
; DEFAULT METERS
;--------------------------------------------------------------------------------------------------------

[1]
Meter=String
MeterStyle=

[2]
Meter=String
MeterStyle=

[3]
Meter=String
MeterStyle=

[4]
Meter=String
MeterStyle=

[5]
Meter=String
MeterStyle=

[6]
Meter=String
MeterStyle=

[7]
Meter=String
MeterStyle=

[8]
Meter=String
MeterStyle=

[9]
Meter=String
MeterStyle=

[10]
Meter=String
MeterStyle=

;---

[1Icon]
Meter=String
MeterStyle=

[2Icon]
Meter=String
MeterStyle=

[3Icon]
Meter=String
MeterStyle=

[4Icon]
Meter=String
MeterStyle=

[5Icon]
Meter=String
MeterStyle=

[6Icon]
Meter=String
MeterStyle=

[7Icon]
Meter=String
MeterStyle=

[8Icon]
Meter=String
MeterStyle=

[9Icon]
Meter=String
MeterStyle=

[10Icon]
Meter=String
MeterStyle=

;---

[1Arrow]
Meter=String
MeterStyle=

[2Arrow]
Meter=String
MeterStyle=

[3Arrow]
Meter=String
MeterStyle=

[4Arrow]
Meter=String
MeterStyle=

[5Arrow]
Meter=String
MeterStyle=

[6Arrow]
Meter=String
MeterStyle=

[7Arrow]
Meter=String
MeterStyle=

[8Arrow]
Meter=String
MeterStyle=

[9Arrow]
Meter=String
MeterStyle=

[10Arrow]
Meter=String
MeterStyle=
