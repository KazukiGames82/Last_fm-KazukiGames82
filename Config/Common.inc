[Rainmeter]
OnRefreshAction=[!Delay 15000][#FinishAction2[#CustomAppIsLoaded]][#DeactivateConfig#]
Group=Last_Fm_KazukiGames82_Parser
Update=-1
DynamicWindowSize=1
DefaultUpdateDivider=-1
DefaultSavePosition=1
DefaultAlwaysOnTop=0
DefaultDraggable=0
DefaultSnapEdges=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=0
DefaultAutoSelectScreen=1
DefaultStartHidden=0

[Variables]

ITEM=.*<td.*"chartlist-play".*>(.*)</td>.*<td.*"chartlist-image".*>(.*)</td>.*<td.*"chartlist-name".*>(.*)</td>.*<td.*"chartlist-artist".*>(.*)</td>.*<td.*chartlist-timestamp--lang-en.*>(.*)</td>

SEARCH=(?(?=.*<td.*"chartlist-play".*>)[#ITEM])

SUBITEM1=.*href="(.*)"
SUBITEM2=.*src="(.*)"
SUBITEM3=.*title="(.*)"
SUBITEM4=.*title="(.*)"
SUBITEM5=.*<span title=".*">(.*)</span>

Substitute="":"NO DATA FOUND","\x{00a0}|\(.*\)":" ","^\s|\s+$|\n":"","Theme Song":""
Substitute2="":"NO DATA FOUND","^\s|\s+$|\n":""
Substitute3="":"NO DATA FOUND","\x{00a0}|\(.*\)":" ","^\s|\s+$|\n":"","Theme Song":""
Substitute4="":"NO DATA FOUND","\x{00a0}|\(.*\)":" ","^\s|\s+$|\n":"","Theme Song":""
Substitute5="":"NO DATA FOUND","\x{00a0}|\(.*\)":" ","^\s|\s+$|\n":"","Theme Song":"","(.*)":"\1 plays"

FinishAction0=
FinishAction1=

FinishAction20=
FinishAction21=

FinishAction30=
FinishAction31=

FinishAction40=
FinishAction41=

FinishAction50=
FinishAction51=

FinishAction60=
FinishAction61=

FinishAction70=
FinishAction71=

FinishAction80=
FinishAction81=

DownloadAction0=
DownloadAction1=[!SetVariable NumberOfImages "([#*NumberOfImages*]+1)"][!UpdateMeasureGroup MEASURES:LASTFM]

NoDataAction=[!Delay 1000][!SetVariable NumberOfImages "([#*NumberOfImages*]+1)"][!UpdateMeasureGroup MEASURES:LASTFM]

DeactivateConfig=!DeactivateConfig

NumberOfImages=0

CustomAppIsLoaded=0
SettingsIsLoaded=0

; -------------------------------------------------------------------------------
; ----- OTHER -----
; -------------------------------------------------------------------------------

[Meter]
Meter=String

[mSetTime]
Measure=Time
; Format="#SettingsTimeFormat7B# #SettingsTimeFormat1B#"

; ================================================

[Measure_Parent]
Measure=WebParser
DynamicVariables=1
Disabled=#Last_fm-KazukiGames82___Startup_First_Time#

; --------------------------------

[1_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[1_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[1_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[1_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[1_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[2_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[2_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[2_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[2_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[2_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[3_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[3_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[3_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[3_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[3_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[4_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[4_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[4_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[4_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[4_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[5_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[5_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[5_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[5_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[5_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[6_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[6_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[6_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[6_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[6_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[7_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[7_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[7_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[7_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[7_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[8_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[8_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[8_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[8_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[8_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[9_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[9_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[9_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[9_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[9_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[10_YT]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM1#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute#
Group=Group_YT
DynamicVariables=1
Disabled=1

[10_ART]
Measure=WebParser
URL=[Measure_Parent]
RegExp=(?siU)#SUBITEM2#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute2#
Download=1
FinishAction=[#DownloadAction[#CustomAppIsLoaded]]
Group=Group_ART
DynamicVariables=1
Disabled=1

[10_TITLE]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM3#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute3#
Group=Group_TITLE
DynamicVariables=1
Disabled=1

[10_ARTIST]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM4#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute4#
Group=Group_ARTIST
DynamicVariables=1
Disabled=1

[10_EXTRA]
Measure=WebParser
URL=[Measure_Parent]
DecodeCharacterReference=1
RegExp=(?siU)#SUBITEM5#
StringIndex2=1
RegExpSubstitute=1
Substitute=#Substitute5#
Group=Group_EXTRA
DynamicVariables=1
Disabled=1

; --------------------------------

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.1]
Measure=String
String=[&1_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.2]
Measure=String
String=[&2_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.3]
Measure=String
String=[&3_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.4]
Measure=String
String=[&4_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.5]
Measure=String
String=[&5_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.6]
Measure=String
String=[&6_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.7]
Measure=String
String=[&7_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.8]
Measure=String
String=[&8_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.9]
Measure=String
String=[&9_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

[MEASURE::PARENT:LASTFM.CONNECTED::DATA.10]
Measure=String
String=[&10_TITLE]
IfMatch=NO DATA FOUND
IfMatchAction=#NoDataAction#
Group=MEASURES:LASTFM:CONNECTED
DynamicVariables=1
Disabled=1

; --------------------------------

[MEASURE::PARENT:LASTFM.CONNECTED::CALC]
Measure=Calc
Formula=#NumberOfImages#
IfTrueAction=[!Delay 500][#FinishAction2[#CustomAppIsLoaded]][#DeactivateConfig#]
DynamicVariables=1
Group=MEASURES:LASTFM | MEASURES:LASTFM:CONNECTED

; --------------------------------
