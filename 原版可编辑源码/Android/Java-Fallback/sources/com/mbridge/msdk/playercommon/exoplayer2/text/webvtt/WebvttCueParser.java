package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class WebvttCueParser {
    private static final char CHAR_AMPERSAND = '&';
    private static final char CHAR_GREATER_THAN = '>';
    private static final char CHAR_LESS_THAN = '<';
    private static final char CHAR_SEMI_COLON = ';';
    private static final char CHAR_SLASH = '/';
    private static final char CHAR_SPACE = ' ';
    public static final java.util.regex.Pattern CUE_HEADER_PATTERN = null;
    private static final java.util.regex.Pattern CUE_SETTING_PATTERN = null;
    private static final java.lang.String ENTITY_AMPERSAND = "amp";
    private static final java.lang.String ENTITY_GREATER_THAN = "gt";
    private static final java.lang.String ENTITY_LESS_THAN = "lt";
    private static final java.lang.String ENTITY_NON_BREAK_SPACE = "nbsp";
    private static final int STYLE_BOLD = 1;
    private static final int STYLE_ITALIC = 2;
    private static final java.lang.String TAG = "WebvttCueParser";
    private static final java.lang.String TAG_BOLD = "b";
    private static final java.lang.String TAG_CLASS = "c";
    private static final java.lang.String TAG_ITALIC = "i";
    private static final java.lang.String TAG_LANG = "lang";
    private static final java.lang.String TAG_UNDERLINE = "u";
    private static final java.lang.String TAG_VOICE = "v";
    private final java.lang.StringBuilder textBuilder;

    private static final class StartTag {
        private static final java.lang.String[] NO_CLASSES = null;
        public final java.lang.String[] classes;
        public final java.lang.String name;
        public final int position;
        public final java.lang.String voice;

        static {
                r0 = 0
                java.lang.String[] r0 = new java.lang.String[r0]
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag.NO_CLASSES = r0
                return
        }

        private StartTag(java.lang.String r1, int r2, java.lang.String r3, java.lang.String[] r4) {
                r0 = this;
                r0.<init>()
                r0.position = r2
                r0.name = r1
                r0.voice = r3
                r0.classes = r4
                return
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag buildStartTag(java.lang.String r4, int r5) {
                java.lang.String r4 = r4.trim()
                boolean r0 = r4.isEmpty()
                if (r0 == 0) goto Lc
                r4 = 0
                return r4
            Lc:
                java.lang.String r0 = " "
                int r0 = r4.indexOf(r0)
                r1 = -1
                r2 = 0
                if (r0 != r1) goto L19
                java.lang.String r0 = ""
                goto L26
            L19:
                java.lang.String r1 = r4.substring(r0)
                java.lang.String r1 = r1.trim()
                java.lang.String r4 = r4.substring(r2, r0)
                r0 = r1
            L26:
                java.lang.String r1 = "\\."
                java.lang.String[] r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r4, r1)
                r1 = r4[r2]
                int r2 = r4.length
                r3 = 1
                if (r2 <= r3) goto L3a
                int r2 = r4.length
                java.lang.Object[] r4 = java.util.Arrays.copyOfRange(r4, r3, r2)
                java.lang.String[] r4 = (java.lang.String[]) r4
                goto L3c
            L3a:
                java.lang.String[] r4 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag.NO_CLASSES
            L3c:
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r2 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag
                r2.<init>(r1, r5, r0, r4)
                return r2
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag buildWholeCueVirtualTag() {
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag
                r1 = 0
                java.lang.String[] r2 = new java.lang.String[r1]
                java.lang.String r3 = ""
                r0.<init>(r3, r1, r3, r2)
                return r0
        }
    }

    private static final class StyleMatch implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch> {
        public final int score;
        public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle style;

        public StyleMatch(int r1, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r2) {
                r0 = this;
                r0.<init>()
                r0.score = r1
                r0.style = r2
                return
        }

        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch r2) {
                r1 = this;
                int r0 = r1.score
                int r2 = r2.score
                int r0 = r0 - r2
                return r0
        }

        @Override
        public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StyleMatch r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch) r1
                int r1 = r0.compareTo(r1)
                return r1
        }
    }

    static {
            java.lang.String r0 = "^(\\S+)\\s+-->\\s+(\\S+)(.*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_HEADER_PATTERN = r0
            java.lang.String r0 = "(\\S+?):(\\S+)"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_SETTING_PATTERN = r0
            return
    }

    public WebvttCueParser() {
            r1 = this;
            r1.<init>()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.textBuilder = r0
            return
    }

    private static void applyEntity(java.lang.String r5, android.text.SpannableStringBuilder r6) {
            int r0 = r5.hashCode()
            r1 = 3309(0xced, float:4.637E-42)
            r2 = 3
            r3 = 2
            r4 = 1
            if (r0 == r1) goto L38
            r1 = 3464(0xd88, float:4.854E-42)
            if (r0 == r1) goto L2e
            r1 = 96708(0x179c4, float:1.35517E-40)
            if (r0 == r1) goto L24
            r1 = 3374865(0x337f11, float:4.729193E-39)
            if (r0 == r1) goto L1a
            goto L42
        L1a:
            java.lang.String r0 = "nbsp"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L42
            r0 = r3
            goto L43
        L24:
            java.lang.String r0 = "amp"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L42
            r0 = r2
            goto L43
        L2e:
            java.lang.String r0 = "lt"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L42
            r0 = 0
            goto L43
        L38:
            java.lang.String r0 = "gt"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L42
            r0 = r4
            goto L43
        L42:
            r0 = -1
        L43:
            if (r0 == 0) goto L79
            if (r0 == r4) goto L73
            if (r0 == r3) goto L6d
            if (r0 == r2) goto L67
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "ignoring unsupported entity: '&"
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = ";'"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.String r6 = "WebvttCueParser"
            android.util.Log.w(r6, r5)
            goto L7e
        L67:
            r5 = 38
            r6.append(r5)
            goto L7e
        L6d:
            r5 = 32
            r6.append(r5)
            goto L7e
        L73:
            r5 = 62
            r6.append(r5)
            goto L7e
        L79:
            r5 = 60
            r6.append(r5)
        L7e:
            return
    }

    private static void applySpansForTag(java.lang.String r8, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag r9, android.text.SpannableStringBuilder r10, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r11, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch> r12) {
            int r0 = r9.position
            int r1 = r10.length()
            java.lang.String r2 = r9.name
            int r3 = r2.hashCode()
            r4 = 0
            r5 = 2
            r6 = 1
            if (r3 == 0) goto L67
            r7 = 105(0x69, float:1.47E-43)
            if (r3 == r7) goto L5d
            r7 = 3314158(0x3291ee, float:4.644125E-39)
            if (r3 == r7) goto L53
            r7 = 98
            if (r3 == r7) goto L49
            r7 = 99
            if (r3 == r7) goto L3f
            r7 = 117(0x75, float:1.64E-43)
            if (r3 == r7) goto L35
            r7 = 118(0x76, float:1.65E-43)
            if (r3 == r7) goto L2b
            goto L71
        L2b:
            java.lang.String r3 = "v"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = 5
            goto L72
        L35:
            java.lang.String r3 = "u"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = r5
            goto L72
        L3f:
            java.lang.String r3 = "c"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = 3
            goto L72
        L49:
            java.lang.String r3 = "b"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = r4
            goto L72
        L53:
            java.lang.String r3 = "lang"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = 4
            goto L72
        L5d:
            java.lang.String r3 = "i"
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = r6
            goto L72
        L67:
            java.lang.String r3 = ""
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L71
            r2 = 6
            goto L72
        L71:
            r2 = -1
        L72:
            r3 = 33
            switch(r2) {
                case 0: goto L8a;
                case 1: goto L81;
                case 2: goto L78;
                case 3: goto L92;
                case 4: goto L92;
                case 5: goto L92;
                case 6: goto L92;
                default: goto L77;
            }
        L77:
            return
        L78:
            android.text.style.UnderlineSpan r2 = new android.text.style.UnderlineSpan
            r2.<init>()
            r10.setSpan(r2, r0, r1, r3)
            goto L92
        L81:
            android.text.style.StyleSpan r2 = new android.text.style.StyleSpan
            r2.<init>(r5)
            r10.setSpan(r2, r0, r1, r3)
            goto L92
        L8a:
            android.text.style.StyleSpan r2 = new android.text.style.StyleSpan
            r2.<init>(r6)
            r10.setSpan(r2, r0, r1, r3)
        L92:
            r12.clear()
            getApplicableStyles(r11, r8, r9, r12)
            int r8 = r12.size()
        L9c:
            if (r4 >= r8) goto Lac
            java.lang.Object r9 = r12.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StyleMatch r9 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch) r9
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r9 = r9.style
            applyStyleToText(r10, r9, r0, r1)
            int r4 = r4 + 1
            goto L9c
        Lac:
            return
    }

    private static void applyStyleToText(android.text.SpannableStringBuilder r3, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r4, int r5, int r6) {
            if (r4 != 0) goto L3
            return
        L3:
            int r0 = r4.getStyle()
            r1 = -1
            r2 = 33
            if (r0 == r1) goto L18
            android.text.style.StyleSpan r0 = new android.text.style.StyleSpan
            int r1 = r4.getStyle()
            r0.<init>(r1)
            r3.setSpan(r0, r5, r6, r2)
        L18:
            boolean r0 = r4.isLinethrough()
            if (r0 == 0) goto L26
            android.text.style.StrikethroughSpan r0 = new android.text.style.StrikethroughSpan
            r0.<init>()
            r3.setSpan(r0, r5, r6, r2)
        L26:
            boolean r0 = r4.isUnderline()
            if (r0 == 0) goto L34
            android.text.style.UnderlineSpan r0 = new android.text.style.UnderlineSpan
            r0.<init>()
            r3.setSpan(r0, r5, r6, r2)
        L34:
            boolean r0 = r4.hasFontColor()
            if (r0 == 0) goto L46
            android.text.style.ForegroundColorSpan r0 = new android.text.style.ForegroundColorSpan
            int r1 = r4.getFontColor()
            r0.<init>(r1)
            r3.setSpan(r0, r5, r6, r2)
        L46:
            boolean r0 = r4.hasBackgroundColor()
            if (r0 == 0) goto L58
            android.text.style.BackgroundColorSpan r0 = new android.text.style.BackgroundColorSpan
            int r1 = r4.getBackgroundColor()
            r0.<init>(r1)
            r3.setSpan(r0, r5, r6, r2)
        L58:
            java.lang.String r0 = r4.getFontFamily()
            if (r0 == 0) goto L6a
            android.text.style.TypefaceSpan r0 = new android.text.style.TypefaceSpan
            java.lang.String r1 = r4.getFontFamily()
            r0.<init>(r1)
            r3.setSpan(r0, r5, r6, r2)
        L6a:
            android.text.Layout$Alignment r0 = r4.getTextAlign()
            if (r0 == 0) goto L7c
            android.text.style.AlignmentSpan$Standard r0 = new android.text.style.AlignmentSpan$Standard
            android.text.Layout$Alignment r1 = r4.getTextAlign()
            r0.<init>(r1)
            r3.setSpan(r0, r5, r6, r2)
        L7c:
            int r0 = r4.getFontSizeUnit()
            r1 = 1
            if (r0 == r1) goto La7
            r1 = 2
            if (r0 == r1) goto L9a
            r1 = 3
            if (r0 == r1) goto L8a
            goto Lb4
        L8a:
            android.text.style.RelativeSizeSpan r0 = new android.text.style.RelativeSizeSpan
            float r4 = r4.getFontSize()
            r1 = 1120403456(0x42c80000, float:100.0)
            float r4 = r4 / r1
            r0.<init>(r4)
            r3.setSpan(r0, r5, r6, r2)
            goto Lb4
        L9a:
            android.text.style.RelativeSizeSpan r0 = new android.text.style.RelativeSizeSpan
            float r4 = r4.getFontSize()
            r0.<init>(r4)
            r3.setSpan(r0, r5, r6, r2)
            goto Lb4
        La7:
            android.text.style.AbsoluteSizeSpan r0 = new android.text.style.AbsoluteSizeSpan
            float r4 = r4.getFontSize()
            int r4 = (int) r4
            r0.<init>(r4, r1)
            r3.setSpan(r0, r5, r6, r2)
        Lb4:
            return
    }

    private static int findEndOfTag(java.lang.String r1, int r2) {
            r0 = 62
            int r2 = r1.indexOf(r0, r2)
            r0 = -1
            if (r2 != r0) goto Le
            int r1 = r1.length()
            goto L10
        Le:
            int r1 = r2 + 1
        L10:
            return r1
    }

    private static void getApplicableStyles(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r6, java.lang.String r7, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag r8, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StyleMatch> r9) {
            int r0 = r6.size()
            r1 = 0
        L5:
            if (r1 >= r0) goto L24
            java.lang.Object r2 = r6.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle) r2
            java.lang.String r3 = r8.name
            java.lang.String[] r4 = r8.classes
            java.lang.String r5 = r8.voice
            int r3 = r2.getSpecificityScore(r7, r3, r4, r5)
            if (r3 <= 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StyleMatch r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StyleMatch
            r4.<init>(r3, r2)
            r9.add(r4)
        L21:
            int r1 = r1 + 1
            goto L5
        L24:
            java.util.Collections.sort(r9)
            return
    }

    private static java.lang.String getTagName(java.lang.String r1) {
            java.lang.String r1 = r1.trim()
            boolean r0 = r1.isEmpty()
            if (r0 == 0) goto Lc
            r1 = 0
            return r1
        Lc:
            java.lang.String r0 = "[ \\.]"
            java.lang.String[] r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.splitAtFirst(r1, r0)
            r0 = 0
            r1 = r1[r0]
            return r1
    }

    private static boolean isSupportedTag(java.lang.String r8) {
            int r0 = r8.hashCode()
            r1 = 98
            r2 = 0
            r3 = 5
            r4 = 4
            r5 = 3
            r6 = 2
            r7 = 1
            if (r0 == r1) goto L56
            r1 = 99
            if (r0 == r1) goto L4c
            r1 = 105(0x69, float:1.47E-43)
            if (r0 == r1) goto L42
            r1 = 3314158(0x3291ee, float:4.644125E-39)
            if (r0 == r1) goto L38
            r1 = 117(0x75, float:1.64E-43)
            if (r0 == r1) goto L2e
            r1 = 118(0x76, float:1.65E-43)
            if (r0 == r1) goto L24
            goto L60
        L24:
            java.lang.String r0 = "v"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r3
            goto L61
        L2e:
            java.lang.String r0 = "u"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r4
            goto L61
        L38:
            java.lang.String r0 = "lang"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r5
            goto L61
        L42:
            java.lang.String r0 = "i"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r6
            goto L61
        L4c:
            java.lang.String r0 = "c"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r7
            goto L61
        L56:
            java.lang.String r0 = "b"
            boolean r8 = r8.equals(r0)
            if (r8 == 0) goto L60
            r8 = r2
            goto L61
        L60:
            r8 = -1
        L61:
            if (r8 == 0) goto L6e
            if (r8 == r7) goto L6e
            if (r8 == r6) goto L6e
            if (r8 == r5) goto L6e
            if (r8 == r4) goto L6e
            if (r8 == r3) goto L6e
            return r2
        L6e:
            return r7
    }

    private static boolean parseCue(java.lang.String r5, java.util.regex.Matcher r6, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r8, java.lang.StringBuilder r9, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r10) {
            r0 = 0
            r1 = 1
            java.lang.String r2 = r6.group(r1)     // Catch: java.lang.NumberFormatException -> L4a
            long r2 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.parseTimestampUs(r2)     // Catch: java.lang.NumberFormatException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r2 = r8.setStartTime(r2)     // Catch: java.lang.NumberFormatException -> L4a
            r3 = 2
            java.lang.String r3 = r6.group(r3)     // Catch: java.lang.NumberFormatException -> L4a
            long r3 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.parseTimestampUs(r3)     // Catch: java.lang.NumberFormatException -> L4a
            r2.setEndTime(r3)     // Catch: java.lang.NumberFormatException -> L4a
            r2 = 3
            java.lang.String r6 = r6.group(r2)
            parseCueSettingsList(r6, r8)
            r9.setLength(r0)
        L25:
            java.lang.String r6 = r7.readLine()
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L42
            int r0 = r9.length()
            if (r0 <= 0) goto L3a
            java.lang.String r0 = "\n"
            r9.append(r0)
        L3a:
            java.lang.String r6 = r6.trim()
            r9.append(r6)
            goto L25
        L42:
            java.lang.String r6 = r9.toString()
            parseCueText(r5, r6, r8, r10)
            return r1
        L4a:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r7 = "Skipping cue with bad header: "
            r5.append(r7)
            java.lang.String r6 = r6.group()
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.String r6 = "WebvttCueParser"
            android.util.Log.w(r6, r5)
            return r0
    }

    static void parseCueSettingsList(java.lang.String r5, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r6) {
            java.lang.String r0 = "WebvttCueParser"
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_SETTING_PATTERN
            java.util.regex.Matcher r5 = r1.matcher(r5)
        L8:
            boolean r1 = r5.find()
            if (r1 == 0) goto L86
            r1 = 1
            java.lang.String r1 = r5.group(r1)
            r2 = 2
            java.lang.String r2 = r5.group(r2)
            java.lang.String r3 = "line"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.NumberFormatException -> L6d
            if (r3 == 0) goto L24
            parseLineAttribute(r2, r6)     // Catch: java.lang.NumberFormatException -> L6d
            goto L8
        L24:
            java.lang.String r3 = "align"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.NumberFormatException -> L6d
            if (r3 == 0) goto L34
            android.text.Layout$Alignment r1 = parseTextAlignment(r2)     // Catch: java.lang.NumberFormatException -> L6d
            r6.setTextAlignment(r1)     // Catch: java.lang.NumberFormatException -> L6d
            goto L8
        L34:
            java.lang.String r3 = "position"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.NumberFormatException -> L6d
            if (r3 == 0) goto L40
            parsePositionAttribute(r2, r6)     // Catch: java.lang.NumberFormatException -> L6d
            goto L8
        L40:
            java.lang.String r3 = "size"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.NumberFormatException -> L6d
            if (r3 == 0) goto L50
            float r1 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.parsePercentage(r2)     // Catch: java.lang.NumberFormatException -> L6d
            r6.setWidth(r1)     // Catch: java.lang.NumberFormatException -> L6d
            goto L8
        L50:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L6d
            r3.<init>()     // Catch: java.lang.NumberFormatException -> L6d
            java.lang.String r4 = "Unknown cue setting "
            r3.append(r4)     // Catch: java.lang.NumberFormatException -> L6d
            r3.append(r1)     // Catch: java.lang.NumberFormatException -> L6d
            java.lang.String r1 = ":"
            r3.append(r1)     // Catch: java.lang.NumberFormatException -> L6d
            r3.append(r2)     // Catch: java.lang.NumberFormatException -> L6d
            java.lang.String r1 = r3.toString()     // Catch: java.lang.NumberFormatException -> L6d
            android.util.Log.w(r0, r1)     // Catch: java.lang.NumberFormatException -> L6d
            goto L8
        L6d:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Skipping bad cue setting: "
            r1.append(r2)
            java.lang.String r2 = r5.group()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            android.util.Log.w(r0, r1)
            goto L8
        L86:
            return
    }

    static void parseCueText(java.lang.String r11, java.lang.String r12, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r13, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r14) {
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            java.util.ArrayDeque r1 = new java.util.ArrayDeque
            r1.<init>()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 0
            r4 = r3
        L11:
            int r5 = r12.length()
            if (r4 >= r5) goto Lc5
            char r5 = r12.charAt(r4)
            r6 = 38
            if (r5 == r6) goto L91
            r6 = 60
            if (r5 == r6) goto L29
            r0.append(r5)
            int r4 = r4 + 1
            goto L11
        L29:
            int r5 = r4 + 1
            int r6 = r12.length()
            if (r5 < r6) goto L32
            goto L8f
        L32:
            char r6 = r12.charAt(r5)
            r7 = 47
            r8 = 1
            if (r6 != r7) goto L3d
            r6 = r8
            goto L3e
        L3d:
            r6 = r3
        L3e:
            int r5 = findEndOfTag(r12, r5)
            int r9 = r5 + (-2)
            char r10 = r12.charAt(r9)
            if (r10 != r7) goto L4c
            r7 = r8
            goto L4d
        L4c:
            r7 = r3
        L4d:
            if (r6 == 0) goto L50
            r8 = 2
        L50:
            int r4 = r4 + r8
            if (r7 == 0) goto L54
            goto L56
        L54:
            int r9 = r5 + (-1)
        L56:
            java.lang.String r4 = r12.substring(r4, r9)
            java.lang.String r8 = getTagName(r4)
            if (r8 == 0) goto L8f
            boolean r9 = isSupportedTag(r8)
            if (r9 != 0) goto L67
            goto L8f
        L67:
            if (r6 == 0) goto L82
        L69:
            boolean r4 = r1.isEmpty()
            if (r4 == 0) goto L70
            goto L8f
        L70:
            java.lang.Object r4 = r1.pop()
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r4 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag) r4
            applySpansForTag(r11, r4, r0, r14, r2)
            java.lang.String r4 = r4.name
            boolean r4 = r4.equals(r8)
            if (r4 == 0) goto L69
            goto L8f
        L82:
            if (r7 != 0) goto L8f
            int r6 = r0.length()
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r4 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag.buildStartTag(r4, r6)
            r1.push(r4)
        L8f:
            r4 = r5
            goto L11
        L91:
            r6 = 59
            int r4 = r4 + 1
            int r6 = r12.indexOf(r6, r4)
            r7 = 32
            int r7 = r12.indexOf(r7, r4)
            r8 = -1
            if (r6 != r8) goto La4
            r6 = r7
            goto Lab
        La4:
            if (r7 != r8) goto La7
            goto Lab
        La7:
            int r6 = java.lang.Math.min(r6, r7)
        Lab:
            if (r6 == r8) goto Lc0
            java.lang.String r4 = r12.substring(r4, r6)
            applyEntity(r4, r0)
            if (r6 != r7) goto Lbb
            java.lang.String r4 = " "
            r0.append(r4)
        Lbb:
            int r6 = r6 + 1
            r4 = r6
            goto L11
        Lc0:
            r0.append(r5)
            goto L11
        Lc5:
            boolean r12 = r1.isEmpty()
            if (r12 != 0) goto Ld5
            java.lang.Object r12 = r1.pop()
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r12 = (com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag) r12
            applySpansForTag(r11, r12, r0, r14, r2)
            goto Lc5
        Ld5:
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser$StartTag r12 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.StartTag.buildWholeCueVirtualTag()
            applySpansForTag(r11, r12, r0, r14, r2)
            r13.setText(r0)
            return
    }

    private static void parseLineAttribute(java.lang.String r3, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r4) throws java.lang.NumberFormatException {
            r0 = 44
            int r0 = r3.indexOf(r0)
            r1 = 0
            r2 = -1
            if (r0 == r2) goto L1c
            int r2 = r0 + 1
            java.lang.String r2 = r3.substring(r2)
            int r2 = parsePositionAnchor(r2)
            r4.setLineAnchor(r2)
            java.lang.String r3 = r3.substring(r1, r0)
            goto L21
        L1c:
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r4.setLineAnchor(r0)
        L21:
            java.lang.String r0 = "%"
            boolean r0 = r3.endsWith(r0)
            if (r0 == 0) goto L35
            float r3 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.parsePercentage(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r3 = r4.setLine(r3)
            r3.setLineType(r1)
            goto L46
        L35:
            int r3 = java.lang.Integer.parseInt(r3)
            if (r3 >= 0) goto L3d
            int r3 = r3 + (-1)
        L3d:
            float r3 = (float) r3
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue$Builder r3 = r4.setLine(r3)
            r4 = 1
            r3.setLineType(r4)
        L46:
            return
    }

    private static int parsePositionAnchor(java.lang.String r5) {
            int r0 = r5.hashCode()
            r1 = 0
            r2 = 3
            r3 = 2
            r4 = 1
            switch(r0) {
                case -1364013995: goto L2a;
                case -1074341483: goto L20;
                case 100571: goto L16;
                case 109757538: goto Lc;
                default: goto Lb;
            }
        Lb:
            goto L34
        Lc:
            java.lang.String r0 = "start"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L34
            r0 = r1
            goto L35
        L16:
            java.lang.String r0 = "end"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L34
            r0 = r2
            goto L35
        L20:
            java.lang.String r0 = "middle"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L34
            r0 = r3
            goto L35
        L2a:
            java.lang.String r0 = "center"
            boolean r0 = r5.equals(r0)
            if (r0 == 0) goto L34
            r0 = r4
            goto L35
        L34:
            r0 = -1
        L35:
            if (r0 == 0) goto L58
            if (r0 == r4) goto L57
            if (r0 == r3) goto L57
            if (r0 == r2) goto L56
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid anchor value: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "WebvttCueParser"
            android.util.Log.w(r0, r5)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            return r5
        L56:
            return r3
        L57:
            return r4
        L58:
            return r1
    }

    private static void parsePositionAttribute(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r3) throws java.lang.NumberFormatException {
            r0 = 44
            int r0 = r2.indexOf(r0)
            r1 = -1
            if (r0 == r1) goto L1c
            int r1 = r0 + 1
            java.lang.String r1 = r2.substring(r1)
            int r1 = parsePositionAnchor(r1)
            r3.setPositionAnchor(r1)
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
            goto L21
        L1c:
            r0 = -2147483648(0xffffffff80000000, float:-0.0)
            r3.setPositionAnchor(r0)
        L21:
            float r2 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttParserUtil.parsePercentage(r2)
            r3.setPosition(r2)
            return
    }

    private static android.text.Layout.Alignment parseTextAlignment(java.lang.String r6) {
            int r0 = r6.hashCode()
            r1 = 5
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            switch(r0) {
                case -1364013995: goto L3f;
                case -1074341483: goto L35;
                case 100571: goto L2b;
                case 3317767: goto L21;
                case 108511772: goto L17;
                case 109757538: goto Ld;
                default: goto Lc;
            }
        Lc:
            goto L49
        Ld:
            java.lang.String r0 = "start"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = 0
            goto L4a
        L17:
            java.lang.String r0 = "right"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = r1
            goto L4a
        L21:
            java.lang.String r0 = "left"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = r5
            goto L4a
        L2b:
            java.lang.String r0 = "end"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = r2
            goto L4a
        L35:
            java.lang.String r0 = "middle"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = r3
            goto L4a
        L3f:
            java.lang.String r0 = "center"
            boolean r0 = r6.equals(r0)
            if (r0 == 0) goto L49
            r0 = r4
            goto L4a
        L49:
            r0 = -1
        L4a:
            if (r0 == 0) goto L74
            if (r0 == r5) goto L74
            if (r0 == r4) goto L71
            if (r0 == r3) goto L71
            if (r0 == r2) goto L6e
            if (r0 == r1) goto L6e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid alignment value: "
            r0.append(r1)
            r0.append(r6)
            java.lang.String r6 = r0.toString()
            java.lang.String r0 = "WebvttCueParser"
            android.util.Log.w(r0, r6)
            r6 = 0
            return r6
        L6e:
            android.text.Layout$Alignment r6 = android.text.Layout.Alignment.ALIGN_OPPOSITE
            return r6
        L71:
            android.text.Layout$Alignment r6 = android.text.Layout.Alignment.ALIGN_CENTER
            return r6
        L74:
            android.text.Layout$Alignment r6 = android.text.Layout.Alignment.ALIGN_NORMAL
            return r6
    }

    public final boolean parseCue(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r11, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder r12, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle> r13) {
            r10 = this;
            java.lang.String r0 = r11.readLine()
            r1 = 0
            if (r0 != 0) goto L8
            return r1
        L8:
            java.util.regex.Pattern r2 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_HEADER_PATTERN
            java.util.regex.Matcher r4 = r2.matcher(r0)
            boolean r2 = r4.matches()
            if (r2 == 0) goto L1f
            r3 = 0
            java.lang.StringBuilder r7 = r10.textBuilder
            r5 = r11
            r6 = r12
            r8 = r13
            boolean r11 = parseCue(r3, r4, r5, r6, r7, r8)
            return r11
        L1f:
            java.lang.String r2 = r11.readLine()
            if (r2 != 0) goto L26
            return r1
        L26:
            java.util.regex.Pattern r3 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCueParser.CUE_HEADER_PATTERN
            java.util.regex.Matcher r5 = r3.matcher(r2)
            boolean r2 = r5.matches()
            if (r2 == 0) goto L40
            java.lang.String r4 = r0.trim()
            java.lang.StringBuilder r8 = r10.textBuilder
            r6 = r11
            r7 = r12
            r9 = r13
            boolean r11 = parseCue(r4, r5, r6, r7, r8, r9)
            return r11
        L40:
            return r1
    }
}
