// Scintilla source code edit control
/** @file ScintillaMessages.h
 ** Enumerate the messages that can be sent to Scintilla.
 **/
// Copyright 1998-2019 by Neil Hodgson <neilh@scintilla.org>
// The License.txt file describes the conditions under which this software may be distributed.

/* Most of this file is automatically generated from the Scintilla.iface interface definition
 * file which contains any comments about the definitions. ScintillaAPIFacer.py does the generation. */

#ifndef SCINTILLAMESSAGES_H
#define SCINTILLAMESSAGES_H

namespace Scintilla {

// Enumerations
//++Autogenerated -- start of section automatically generated from Scintilla.iface
enum class Message {
	AddText = 2001,
	AddStyledText = 2002,
	InsertText = 2003,
	ChangeInsertion = 2672,
	ClearAll = 2004,
	DeleteRange = 2645,
	ClearDocumentStyle = 2005,
	GetLength = 2006,
	GetCharAt = 2007,
	GetCurrentPos = 2008,
	GetAnchor = 2009,
	GetStyleAt = 2010,
	GetStyleIndexAt = 2038,
	Redo = 2011,
	SetUndoCollection = 2012,
	SelectAll = 2013,
	SetSavePoint = 2014,
	GetStyledText = 2015,
	GetStyledTextFull = 2778,
	CanRedo = 2016,
	MarkerLineFromHandle = 2017,
	MarkerDeleteHandle = 2018,
	MarkerHandleFromLine = 2732,
	MarkerNumberFromLine = 2733,
	GetUndoCollection = 2019,
	GetViewWS = 2020,
	SetViewWS = 2021,
	GetTabDrawMode = 2698,
	SetTabDrawMode = 2699,
	PositionFromPoint = 2022,
	PositionFromPointClose = 2023,
	GotoLine = 2024,
	GotoPos = 2025,
	SetAnchor = 2026,
	GetCurLine = 2027,
	GetEndStyled = 2028,
	ConvertEOLs = 2029,
	GetEOLMode = 2030,
	SetEOLMode = 2031,
	StartStyling = 2032,
	SetStyling = 2033,
	GetBufferedDraw = 2034,
	SetBufferedDraw = 2035,
	SetTabWidth = 2036,
	GetTabWidth = 2121,
	SetTabMinimumWidth = 2724,
	GetTabMinimumWidth = 2725,
	ClearTabStops = 2675,
	AddTabStop = 2676,
	GetNextTabStop = 2677,
	SetCodePage = 2037,
	SetFontLocale = 2760,
	GetFontLocale = 2761,
	GetIMEInteraction = 2678,
	SetIMEInteraction = 2679,
	MarkerDefine = 2040,
	MarkerSetFore = 2041,
	MarkerSetBack = 2042,
	MarkerSetBackSelected = 2292,
	MarkerSetForeTranslucent = 2294,
	MarkerSetBackTranslucent = 2295,
	MarkerSetBackSelectedTranslucent = 2296,
	MarkerSetStrokeWidth = 2297,
	MarkerEnableHighlight = 2293,
	MarkerAdd = 2043,
	MarkerDelete = 2044,
	MarkerDeleteAll = 2045,
	MarkerGet = 2046,
	MarkerNext = 2047,
	MarkerPrevious = 2048,
	MarkerDefinePixmap = 2049,
	MarkerAddSet = 2466,
	MarkerSetAlpha = 2476,
	MarkerGetLayer = 2734,
	MarkerSetLayer = 2735,
	SetMarginTypeN = 2240,
	GetMarginTypeN = 2241,
	SetMarginWidthN = 2242,
	GetMarginWidthN = 2243,
	SetMarginMaskN = 2244,
	GetMarginMaskN = 2245,
	SetMarginSensitiveN = 2246,
	GetMarginSensitiveN = 2247,
	SetMarginCursorN = 2248,
	GetMarginCursorN = 2249,
	SetMarginBackN = 2250,
	GetMarginBackN = 2251,
	SetMargins = 2252,
	GetMargins = 2253,
	StyleClearAll = 2050,
	StyleSetFore = 2051,
	StyleSetBack = 2052,
	StyleSetBold = 2053,
	StyleSetItalic = 2054,
	StyleSetSize = 2055,
	StyleSetFont = 2056,
	StyleSetEOLFilled = 2057,
	StyleResetDefault = 2058,
	StyleSetUnderline = 2059,
	StyleGetFore = 2481,
	StyleGetBack = 2482,
	StyleGetBold = 2483,
	StyleGetItalic = 2484,
	StyleGetSize = 2485,
	StyleGetFont = 2486,
	StyleGetEOLFilled = 2487,
	StyleGetUnderline = 2488,
	StyleGetCase = 2489,
	StyleGetCharacterSet = 2490,
	StyleGetVisible = 2491,
	StyleGetChangeable = 2492,
	StyleGetHotSpot = 2493,
	StyleSetCase = 2060,
	StyleSetSizeFractional = 2061,
	StyleGetSizeFractional = 2062,
	StyleSetWeight = 2063,
	StyleGetWeight = 2064,
	StyleSetCharacterSet = 2066,
	StyleSetHotSpot = 2409,
	StyleSetCheckMonospaced = 2254,
	StyleGetCheckMonospaced = 2255,
	StyleSetInvisibleRepresentation = 2256,
	StyleGetInvisibleRepresentation = 2257,
	SetElementColour = 2753,
	GetElementColour = 2754,
	ResetElementColour = 2755,
	GetElementIsSet = 2756,
	GetElementAllowsTranslucent = 2757,
	GetElementBaseColour = 2758,
	SetSelFore = 2067,
	SetSelBack = 2068,
	GetSelAlpha = 2477,
	SetSelAlpha = 2478,
	GetSelEOLFilled = 2479,
	SetSelEOLFilled = 2480,
	GetSelectionLayer = 2762,
	SetSelectionLayer = 2763,
	GetCaretLineLayer = 2764,
	SetCaretLineLayer = 2765,
	GetCaretLineHighlightSubLine = 2773,
	SetCaretLineHighlightSubLine = 2774,
	SetCaretFore = 2069,
	AssignCmdKey = 2070,
	ClearCmdKey = 2071,
	ClearAllCmdKeys = 2072,
	ResetAllCmdKeys = 2812,
	SetStylingEx = 2073,
	StyleSetVisible = 2074,
	GetCaretPeriod = 2075,
	SetCaretPeriod = 2076,
	SetWordChars = 2077,
	GetWordChars = 2646,
	SetCharacterCategoryOptimization = 2720,
	GetCharacterCategoryOptimization = 2721,
	BeginUndoAction = 2078,
	EndUndoAction = 2079,
	GetUndoActions = 2790,
	SetUndoSavePoint = 2791,
	GetUndoSavePoint = 2792,
	SetUndoDetach = 2793,
	GetUndoDetach = 2794,
	SetUndoTentative = 2795,
	GetUndoTentative = 2796,
	SetUndoCurrent = 2797,
	GetUndoCurrent = 2798,
	PushUndoActionType = 2800,
	ChangeLastUndoActionText = 2801,
	GetUndoActionType = 2802,
	GetUndoActionPosition = 2803,
	GetUndoActionText = 2804,
	IndicSetStyle = 2080,
	IndicGetStyle = 2081,
	IndicSetFore = 2082,
	IndicGetFore = 2083,
	IndicSetUnder = 2510,
	IndicGetUnder = 2511,
	IndicSetHoverStyle = 2680,
	IndicGetHoverStyle = 2681,
	IndicSetHoverFore = 2682,
	IndicGetHoverFore = 2683,
	IndicSetFlags = 2684,
	IndicGetFlags = 2685,
	IndicSetStrokeWidth = 2751,
	IndicGetStrokeWidth = 2752,
	SetWhitespaceFore = 2084,
	SetWhitespaceBack = 2085,
	SetWhitespaceSize = 2086,
	GetWhitespaceSize = 2087,
	SetLineState = 2092,
	GetLineState = 2093,
	GetMaxLineState = 2094,
	GetCaretLineVisible = 2095,
	SetCaretLineVisible = 2096,
	GetCaretLineBack = 2097,
	SetCaretLineBack = 2098,
	GetCaretLineFrame = 2704,
	SetCaretLineFrame = 2705,
	StyleSetChangeable = 2099,
	AutoCShow = 2100,
	AutoCCancel = 2101,
	AutoCActive = 2102,
	AutoCPosStart = 2103,
	AutoCComplete = 2104,
	AutoCStops = 2105,
	AutoCSetSeparator = 2106,
	AutoCGetSeparator = 2107,
	AutoCSelect = 2108,
	AutoCSetCancelAtStart = 2110,
	AutoCGetCancelAtStart = 2111,
	AutoCSetFillUps = 2112,
	AutoCSetChooseSingle = 2113,
	AutoCGetChooseSingle = 2114,
	AutoCSetIgnoreCase = 2115,
	AutoCGetIgnoreCase = 2116,
	UserListShow = 2117,
	AutoCSetAutoHide = 2118,
	AutoCGetAutoHide = 2119,
	AutoCSetOptions = 2638,
	AutoCGetOptions = 2639,
	AutoCSetDropRestOfWord = 2270,
	AutoCGetDropRestOfWord = 2271,
	RegisterImage = 2405,
	ClearRegisteredImages = 2408,
	AutoCGetTypeSeparator = 2285,
	AutoCSetTypeSeparator = 2286,
	AutoCSetMaxWidth = 2208,
	AutoCGetMaxWidth = 2209,
	AutoCSetMaxHeight = 2210,
	AutoCGetMaxHeight = 2211,
	AutoCSetStyle = 2806,
	AutoCGetStyle = 2807,
	SetIndent = 2122,
	GetIndent = 2123,
	SetUseTabs = 2124,
	GetUseTabs = 2125,
	SetLineIndentation = 2126,
	GetLineIndentation = 2127,
	GetLineIndentPosition = 2128,
	GetColumn = 2129,
	CountCharacters = 2633,
	CountCodeUnits = 2715,
	SetHScrollBar = 2130,
	GetHScrollBar = 2131,
	SetIndentationGuides = 2132,
	GetIndentationGuides = 2133,
	SetHighlightGuide = 2134,
	GetHighlightGuide = 2135,
	GetLineEndPosition = 2136,
	GetCodePage = 2137,
	GetCaretFore = 2138,
	GetReadOnly = 2140,
	SetCurrentPos = 2141,
	SetSelectionStart = 2142,
	GetSelectionStart = 2143,
	SetSelectionEnd = 2144,
	GetSelectionEnd = 2145,
	SetEmptySelection = 2556,
	SetPrintMagnification = 2146,
	GetPrintMagnification = 2147,
	SetPrintColourMode = 2148,
	GetPrintColourMode = 2149,
	FindText = 2150,
	FindTextFull = 2196,
	FormatRange = 2151,
	FormatRangeFull = 2777,
	SetChangeHistory = 2780,
	GetChangeHistory = 2781,
	GetFirstVisibleLine = 2152,
	GetLine = 2153,
	GetLineCount = 2154,
	AllocateLines = 2089,
	SetMarginLeft = 2155,
	GetMarginLeft = 2156,
	SetMarginRight = 2157,
	GetMarginRight = 2158,
	GetModify = 2159,
	SetSel = 2160,
	GetSelText = 2161,
	GetTextRange = 2162,
	GetTextRangeFull = 2039,
	HideSelection = 2163,
	GetSelectionHidden = 2088,
	PointXFromPosition = 2164,
	PointYFromPosition = 2165,
	LineFromPosition = 2166,
	PositionFromLine = 2167,
	LineScroll = 2168,
	ScrollCaret = 2169,
	ScrollRange = 2569,
	ReplaceSel = 2170,
	SetReadOnly = 2171,
	Null = 2172,
	CanPaste = 2173,
	CanUndo = 2174,
	EmptyUndoBuffer = 2175,
	Undo = 2176,
	Cut = 2177,
	Copy = 2178,
	Paste = 2179,
	Clear = 2180,
	SetText = 2181,
	GetText = 2182,
	GetTextLength = 2183,
	GetDirectFunction = 2184,
	GetDirectStatusFunction = 2772,
	GetDirectPointer = 2185,
	SetOvertype = 2186,
	GetOvertype = 2187,
	SetCaretWidth = 2188,
	GetCaretWidth = 2189,
	SetTargetStart = 2190,
	GetTargetStart = 2191,
	SetTargetStartVirtualSpace = 2728,
	GetTargetStartVirtualSpace = 2729,
	SetTargetEnd = 2192,
	GetTargetEnd = 2193,
	SetTargetEndVirtualSpace = 2730,
	GetTargetEndVirtualSpace = 2731,
	SetTargetRange = 2686,
	GetTargetText = 2687,
	TargetFromSelection = 2287,
	TargetWholeDocument = 2690,
	ReplaceTarget = 2194,
	ReplaceTargetRE = 2195,
	ReplaceTargetMinimal = 2779,
	SearchInTarget = 2197,
	SetSearchFlags = 2198,
	GetSearchFlags = 2199,
	CallTipShow = 2200,
	CallTipCancel = 2201,
	CallTipActive = 2202,
	CallTipPosStart = 2203,
	CallTipSetPosStart = 2214,
	CallTipSetHlt = 2204,
	CallTipSetBack = 2205,
	CallTipSetFore = 2206,
	CallTipSetForeHlt = 2207,
	CallTipUseStyle = 2212,
	CallTipSetPosition = 2213,
	VisibleFromDocLine = 2220,
	DocLineFromVisible = 2221,
	WrapCount = 2235,
	SetFoldLevel = 2222,
	GetFoldLevel = 2223,
	GetLastChild = 2224,
	GetFoldParent = 2225,
	ShowLines = 2226,
	HideLines = 2227,
	GetLineVisible = 2228,
	GetAllLinesVisible = 2236,
	SetFoldExpanded = 2229,
	GetFoldExpanded = 2230,
	ToggleFold = 2231,
	ToggleFoldShowText = 2700,
	FoldDisplayTextSetStyle = 2701,
	FoldDisplayTextGetStyle = 2707,
	SetDefaultFoldDisplayText = 2722,
	GetDefaultFoldDisplayText = 2723,
	FoldLine = 2237,
	FoldChildren = 2238,
	ExpandChildren = 2239,
	FoldAll = 2662,
	EnsureVisible = 2232,
	SetAutomaticFold = 2663,
	GetAutomaticFold = 2664,
	SetFoldFlags = 2233,
	EnsureVisibleEnforcePolicy = 2234,
	SetTabIndents = 2260,
	GetTabIndents = 2261,
	SetBackSpaceUnIndents = 2262,
	GetBackSpaceUnIndents = 2263,
	SetMouseDwellTime = 2264,
	GetMouseDwellTime = 2265,
	WordStartPosition = 2266,
	WordEndPosition = 2267,
	IsRangeWord = 2691,
	SetIdleStyling = 2692,
	GetIdleStyling = 2693,
	SetWrapMode = 2268,
	GetWrapMode = 2269,
	SetWrapVisualFlags = 2460,
	GetWrapVisualFlags = 2461,
	SetWrapVisualFlagsLocation = 2462,
	GetWrapVisualFlagsLocation = 2463,
	SetWrapStartIndent = 2464,
	GetWrapStartIndent = 2465,
	SetWrapIndentMode = 2472,
	GetWrapIndentMode = 2473,
	SetLayoutCache = 2272,
	GetLayoutCache = 2273,
	SetScrollWidth = 2274,
	GetScrollWidth = 2275,
	SetScrollWidthTracking = 2516,
	GetScrollWidthTracking = 2517,
	TextWidth = 2276,
	SetEndAtLastLine = 2277,
	GetEndAtLastLine = 2278,
	TextHeight = 2279,
	SetVScrollBar = 2280,
	GetVScrollBar = 2281,
	AppendText = 2282,
	GetPhasesDraw = 2673,
	SetPhasesDraw = 2674,
	SetFontQuality = 2611,
	GetFontQuality = 2612,
	SetFirstVisibleLine = 2613,
	SetMultiPaste = 2614,
	GetMultiPaste = 2615,
	GetTag = 2616,
	LinesJoin = 2288,
	LinesSplit = 2289,
	SetFoldMarginColour = 2290,
	SetFoldMarginHiColour = 2291,
	SetAccessibility = 2702,
	GetAccessibility = 2703,
	LineDown = 2300,
	LineDownExtend = 2301,
	LineUp = 2302,
	LineUpExtend = 2303,
	CharLeft = 2304,
	CharLeftExtend = 2305,
	CharRight = 2306,
	CharRightExtend = 2307,
	WordLeft = 2308,
	WordLeftExtend = 2309,
	WordRight = 2310,
	WordRightExtend = 2311,
	Home = 2312,
	HomeExtend = 2313,
	LineEnd = 2314,
	LineEndExtend = 2315,
	DocumentStart = 2316,
	DocumentStartExtend = 2317,
	DocumentEnd = 2318,
	DocumentEndExtend = 2319,
	PageUp = 2320,
	PageUpExtend = 2321,
	PageDown = 2322,
	PageDownExtend = 2323,
	EditToggleOvertype = 2324,
	Cancel = 2325,
	DeleteBack = 2326,
	Tab = 2327,
	LineTab = 2808,
	BackTab = 2328,
	LineBackTab = 2809,
	NewLine = 2329,
	FormFeed = 2330,
	VCHome = 2331,
	VCHomeExtend = 2332,
	ZoomIn = 2333,
	ZoomOut = 2334,
	DelWordLeft = 2335,
	DelWordRight = 2336,
	DelWordRightEnd = 2518,
	LineCut = 2337,
	LineDelete = 2338,
	LineTranspose = 2339,
	LineReverse = 2354,
	LineDuplicate = 2404,
	LowerCase = 2340,
	UpperCase = 2341,
	LineScrollDown = 2342,
	LineScrollUp = 2343,
	DeleteBackNotLine = 2344,
	HomeDisplay = 2345,
	HomeDisplayExtend = 2346,
	LineEndDisplay = 2347,
	LineEndDisplayExtend = 2348,
	HomeWrap = 2349,
	HomeWrapExtend = 2450,
	LineEndWrap = 2451,
	LineEndWrapExtend = 2452,
	VCHomeWrap = 2453,
	VCHomeWrapExtend = 2454,
	LineCopy = 2455,
	MoveCaretInsideView = 2401,
	LineLength = 2350,
	BraceHighlight = 2351,
	BraceHighlightIndicator = 2498,
	BraceBadLight = 2352,
	BraceBadLightIndicator = 2499,
	BraceMatch = 2353,
	BraceMatchNext = 2369,
	GetViewEOL = 2355,
	SetViewEOL = 2356,
	GetDocPointer = 2357,
	SetDocPointer = 2358,
	SetModEventMask = 2359,
	GetEdgeColumn = 2360,
	SetEdgeColumn = 2361,
	GetEdgeMode = 2362,
	SetEdgeMode = 2363,
	GetEdgeColour = 2364,
	SetEdgeColour = 2365,
	MultiEdgeAddLine = 2694,
	MultiEdgeClearAll = 2695,
	GetMultiEdgeColumn = 2749,
	SearchAnchor = 2366,
	SearchNext = 2367,
	SearchPrev = 2368,
	LinesOnScreen = 2370,
	UsePopUp = 2371,
	SelectionIsRectangle = 2372,
	SetZoom = 2373,
	GetZoom = 2374,
	CreateDocument = 2375,
	AddRefDocument = 2376,
	ReleaseDocument = 2377,
	GetDocumentOptions = 2379,
	GetModEventMask = 2378,
	SetCommandEvents = 2717,
	GetCommandEvents = 2718,
	SetFocus = 2380,
	GetFocus = 2381,
	SetStatus = 2382,
	GetStatus = 2383,
	SetMouseDownCaptures = 2384,
	GetMouseDownCaptures = 2385,
	SetMouseWheelCaptures = 2696,
	GetMouseWheelCaptures = 2697,
	SetCursor = 2386,
	GetCursor = 2387,
	SetControlCharSymbol = 2388,
	GetControlCharSymbol = 2389,
	WordPartLeft = 2390,
	WordPartLeftExtend = 2391,
	WordPartRight = 2392,
	WordPartRightExtend = 2393,
	SetVisiblePolicy = 2394,
	DelLineLeft = 2395,
	DelLineRight = 2396,
	SetXOffset = 2397,
	GetXOffset = 2398,
	ChooseCaretX = 2399,
	GrabFocus = 2400,
	SetXCaretPolicy = 2402,
	SetYCaretPolicy = 2403,
	SetPrintWrapMode = 2406,
	GetPrintWrapMode = 2407,
	SetHotspotActiveFore = 2410,
	GetHotspotActiveFore = 2494,
	SetHotspotActiveBack = 2411,
	GetHotspotActiveBack = 2495,
	SetHotspotActiveUnderline = 2412,
	GetHotspotActiveUnderline = 2496,
	SetHotspotSingleLine = 2421,
	GetHotspotSingleLine = 2497,
	ParaDown = 2413,
	ParaDownExtend = 2414,
	ParaUp = 2415,
	ParaUpExtend = 2416,
	PositionBefore = 2417,
	PositionAfter = 2418,
	PositionRelative = 2670,
	PositionRelativeCodeUnits = 2716,
	CopyRange = 2419,
	CopyText = 2420,
	SetSelectionMode = 2422,
	ChangeSelectionMode = 2659,
	GetSelectionMode = 2423,
	SetMoveExtendsSelection = 2719,
	GetMoveExtendsSelection = 2706,
	GetLineSelStartPosition = 2424,
	GetLineSelEndPosition = 2425,
	LineDownRectExtend = 2426,
	LineUpRectExtend = 2427,
	CharLeftRectExtend = 2428,
	CharRightRectExtend = 2429,
	HomeRectExtend = 2430,
	VCHomeRectExtend = 2431,
	LineEndRectExtend = 2432,
	PageUpRectExtend = 2433,
	PageDownRectExtend = 2434,
	StutteredPageUp = 2435,
	StutteredPageUpExtend = 2436,
	StutteredPageDown = 2437,
	StutteredPageDownExtend = 2438,
	WordLeftEnd = 2439,
	WordLeftEndExtend = 2440,
	WordRightEnd = 2441,
	WordRightEndExtend = 2442,
	SetWhitespaceChars = 2443,
	GetWhitespaceChars = 2647,
	SetPunctuationChars = 2648,
	GetPunctuationChars = 2649,
	SetCharsDefault = 2444,
	AutoCGetCurrent = 2445,
	AutoCGetCurrentText = 2610,
	AutoCSetCaseInsensitiveBehaviour = 2634,
	AutoCGetCaseInsensitiveBehaviour = 2635,
	AutoCSetMulti = 2636,
	AutoCGetMulti = 2637,
	AutoCSetOrder = 2660,
	AutoCGetOrder = 2661,
	Allocate = 2446,
	TargetAsUTF8 = 2447,
	SetLengthForEncode = 2448,
	EncodedFromUTF8 = 2449,
	FindColumn = 2456,
	GetCaretSticky = 2457,
	SetCaretSticky = 2458,
	ToggleCaretSticky = 2459,
	SetPasteConvertEndings = 2467,
	GetPasteConvertEndings = 2468,
	ReplaceRectangular = 2771,
	SelectionDuplicate = 2469,
	SetCaretLineBackAlpha = 2470,
	GetCaretLineBackAlpha = 2471,
	SetCaretStyle = 2512,
	GetCaretStyle = 2513,
	SetIndicatorCurrent = 2500,
	GetIndicatorCurrent = 2501,
	SetIndicatorValue = 2502,
	GetIndicatorValue = 2503,
	IndicatorFillRange = 2504,
	IndicatorClearRange = 2505,
	IndicatorAllOnFor = 2506,
	IndicatorValueAt = 2507,
	IndicatorStart = 2508,
	IndicatorEnd = 2509,
	SetPositionCache = 2514,
	GetPositionCache = 2515,
	SetLayoutThreads = 2775,
	GetLayoutThreads = 2776,
	CopyAllowLine = 2519,
	CutAllowLine = 2805,
	GetCharacterPointer = 2520,
	GetRangePointer = 2643,
	GetGapPosition = 2644,
	IndicSetAlpha = 2523,
	IndicGetAlpha = 2524,
	IndicSetOutlineAlpha = 2558,
	IndicGetOutlineAlpha = 2559,
	SetExtraAscent = 2525,
	GetExtraAscent = 2526,
	SetExtraDescent = 2527,
	GetExtraDescent = 2528,
	MarkerSymbolDefined = 2529,
	MarginSetText = 2530,
	MarginGetText = 2531,
	MarginSetStyle = 2532,
	MarginGetStyle = 2533,
	MarginSetStyles = 2534,
	MarginGetStyles = 2535,
	MarginTextClearAll = 2536,
	MarginSetStyleOffset = 2537,
	MarginGetStyleOffset = 2538,
	SetMarginOptions = 2539,
	GetMarginOptions = 2557,
	AnnotationSetText = 2540,
	AnnotationGetText = 2541,
	AnnotationSetStyle = 2542,
	AnnotationGetStyle = 2543,
	AnnotationSetStyles = 2544,
	AnnotationGetStyles = 2545,
	AnnotationGetLines = 2546,
	AnnotationClearAll = 2547,
	AnnotationSetVisible = 2548,
	AnnotationGetVisible = 2549,
	AnnotationSetStyleOffset = 2550,
	AnnotationGetStyleOffset = 2551,
	ReleaseAllExtendedStyles = 2552,
	AllocateExtendedStyles = 2553,
	AddUndoAction = 2560,
	CharPositionFromPoint = 2561,
	CharPositionFromPointClose = 2562,
	SetMouseSelectionRectangularSwitch = 2668,
	GetMouseSelectionRectangularSwitch = 2669,
	SetMouseMapping = 2810,
	GetMouseMapping = 2811,
	SetMultipleSelection = 2563,
	GetMultipleSelection = 2564,
	SetAdditionalSelectionTyping = 2565,
	GetAdditionalSelectionTyping = 2566,
	SetAdditionalCaretsBlink = 2567,
	GetAdditionalCaretsBlink = 2568,
	SetAdditionalCaretsVisible = 2608,
	GetAdditionalCaretsVisible = 2609,
	GetSelections = 2570,
	GetSelectionEmpty = 2650,
	ClearSelections = 2571,
	SetSelection = 2572,
	AddSelection = 2573,
	SelectionFromPoint = 2474,
	DropSelectionN = 2671,
	SetMainSelection = 2574,
	GetMainSelection = 2575,
	SetSelectionNCaret = 2576,
	GetSelectionNCaret = 2577,
	SetSelectionNAnchor = 2578,
	GetSelectionNAnchor = 2579,
	SetSelectionNCaretVirtualSpace = 2580,
	GetSelectionNCaretVirtualSpace = 2581,
	SetSelectionNAnchorVirtualSpace = 2582,
	GetSelectionNAnchorVirtualSpace = 2583,
	SetSelectionNStart = 2584,
	GetSelectionNStart = 2585,
	GetSelectionNStartVirtualSpace = 2726,
	SetSelectionNEnd = 2586,
	GetSelectionNEndVirtualSpace = 2727,
	GetSelectionNEnd = 2587,
	SetRectangularSelectionCaret = 2588,
	GetRectangularSelectionCaret = 2589,
	SetRectangularSelectionAnchor = 2590,
	GetRectangularSelectionAnchor = 2591,
	SetRectangularSelectionCaretVirtualSpace = 2592,
	GetRectangularSelectionCaretVirtualSpace = 2593,
	SetRectangularSelectionAnchorVirtualSpace = 2594,
	GetRectangularSelectionAnchorVirtualSpace = 2595,
	SetVirtualSpaceOptions = 2596,
	GetVirtualSpaceOptions = 2597,
	SetRectangularSelectionModifier = 2598,
	GetRectangularSelectionModifier = 2599,
	SetAdditionalSelFore = 2600,
	SetAdditionalSelBack = 2601,
	SetAdditionalSelAlpha = 2602,
	GetAdditionalSelAlpha = 2603,
	SetAdditionalCaretFore = 2604,
	GetAdditionalCaretFore = 2605,
	RotateSelection = 2606,
	SwapMainAnchorCaret = 2607,
	MultipleSelectAddNext = 2688,
	MultipleSelectAddEach = 2689,
	ChangeLexerState = 2617,
	ContractedFoldNext = 2618,
	VerticalCentreCaret = 2619,
	MoveSelectedLinesUp = 2620,
	MoveSelectedLinesDown = 2621,
	SetIdentifier = 2622,
	GetIdentifier = 2623,
	RGBAImageSetWidth = 2624,
	RGBAImageSetHeight = 2625,
	RGBAImageSetScale = 2651,
	MarkerDefineRGBAImage = 2626,
	RegisterRGBAImage = 2627,
	ScrollToStart = 2628,
	ScrollToEnd = 2629,
	SetTechnology = 2630,
	GetTechnology = 2631,
	CreateLoader = 2632,
	FindIndicatorShow = 2640,
	FindIndicatorFlash = 2641,
	FindIndicatorHide = 2642,
	VCHomeDisplay = 2652,
	VCHomeDisplayExtend = 2653,
	GetCaretLineVisibleAlways = 2654,
	SetCaretLineVisibleAlways = 2655,
	SetLineEndTypesAllowed = 2656,
	GetLineEndTypesAllowed = 2657,
	GetLineEndTypesActive = 2658,
	SetRepresentation = 2665,
	GetRepresentation = 2666,
	ClearRepresentation = 2667,
	ClearAllRepresentations = 2770,
	SetRepresentationAppearance = 2766,
	GetRepresentationAppearance = 2767,
	SetRepresentationColour = 2768,
	GetRepresentationColour = 2769,
	EOLAnnotationSetText = 2740,
	EOLAnnotationGetText = 2741,
	EOLAnnotationSetStyle = 2742,
	EOLAnnotationGetStyle = 2743,
	EOLAnnotationClearAll = 2744,
	EOLAnnotationSetVisible = 2745,
	EOLAnnotationGetVisible = 2746,
	EOLAnnotationSetStyleOffset = 2747,
	EOLAnnotationGetStyleOffset = 2748,
	SupportsFeature = 2750,
	GetLineCharacterIndex = 2710,
	AllocateLineCharacterIndex = 2711,
	ReleaseLineCharacterIndex = 2712,
	LineFromIndexPosition = 2713,
	IndexPositionFromLine = 2714,
	StartRecord = 3001,
	StopRecord = 3002,
	GetLexer = 4002,
	Colourise = 4003,
	SetProperty = 4004,
	SetKeyWords = 4005,
	GetProperty = 4008,
	GetPropertyExpanded = 4009,
	GetPropertyInt = 4010,
	GetLexerLanguage = 4012,
	PrivateLexerCall = 4013,
	PropertyNames = 4014,
	PropertyType = 4015,
	DescribeProperty = 4016,
	DescribeKeyWordSets = 4017,
	GetLineEndTypesSupported = 4018,
	AllocateSubStyles = 4020,
	GetSubStylesStart = 4021,
	GetSubStylesLength = 4022,
	GetStyleFromSubStyle = 4027,
	GetPrimaryStyleFromStyle = 4028,
	FreeSubStyles = 4023,
	SetIdentifiers = 4024,
	DistanceToSecondaryStyles = 4025,
	GetSubStyleBases = 4026,
	GetNamedStyles = 4029,
	NameOfStyle = 4030,
	TagsOfStyle = 4031,
	DescriptionOfStyle = 4032,
	SetILexer = 4033,
	GetBidirectional = 2708,
	SetBidirectional = 2709,
};
//--Autogenerated -- end of section automatically generated from Scintilla.iface

}

#endif
