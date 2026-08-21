package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

final class CssParser {
    private static final java.lang.String BLOCK_END = "}";
    private static final java.lang.String BLOCK_START = "{";
    private static final java.lang.String PROPERTY_BGCOLOR = "background-color";
    private static final java.lang.String PROPERTY_FONT_FAMILY = "font-family";
    private static final java.lang.String PROPERTY_FONT_STYLE = "font-style";
    private static final java.lang.String PROPERTY_FONT_WEIGHT = "font-weight";
    private static final java.lang.String PROPERTY_TEXT_DECORATION = "text-decoration";
    private static final java.lang.String VALUE_BOLD = "bold";
    private static final java.lang.String VALUE_ITALIC = "italic";
    private static final java.lang.String VALUE_UNDERLINE = "underline";
    private static final java.util.regex.Pattern VOICE_NAME_PATTERN = null;
    private final java.lang.StringBuilder stringBuilder;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray styleInput;

    static {
            java.lang.String r0 = "\\[voice=\"([^\"]*)\"\\]"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser.VOICE_NAME_PATTERN = r0
            return
    }

    public CssParser() {
            r1 = this;
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.styleInput = r0
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1.stringBuilder = r0
            return
    }

    private void applySelectorToStyle(com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r7, java.lang.String r8) {
            r6 = this;
            java.lang.String r0 = ""
            boolean r0 = r0.equals(r8)
            if (r0 == 0) goto L9
            return
        L9:
            r0 = 91
            int r0 = r8.indexOf(r0)
            r1 = -1
            r2 = 0
            r3 = 1
            if (r0 == r1) goto L2f
            java.util.regex.Pattern r4 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.CssParser.VOICE_NAME_PATTERN
            java.lang.String r5 = r8.substring(r0)
            java.util.regex.Matcher r4 = r4.matcher(r5)
            boolean r5 = r4.matches()
            if (r5 == 0) goto L2b
            java.lang.String r4 = r4.group(r3)
            r7.setTargetVoice(r4)
        L2b:
            java.lang.String r8 = r8.substring(r2, r0)
        L2f:
            java.lang.String r0 = "\\."
            java.lang.String[] r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r8, r0)
            r0 = r8[r2]
            r4 = 35
            int r4 = r0.indexOf(r4)
            if (r4 == r1) goto L4f
            java.lang.String r1 = r0.substring(r2, r4)
            r7.setTargetTagName(r1)
            int r4 = r4 + r3
            java.lang.String r0 = r0.substring(r4)
            r7.setTargetId(r0)
            goto L52
        L4f:
            r7.setTargetTagName(r0)
        L52:
            int r0 = r8.length
            if (r0 <= r3) goto L5f
            int r0 = r8.length
            java.lang.Object[] r8 = java.util.Arrays.copyOfRange(r8, r3, r0)
            java.lang.String[] r8 = (java.lang.String[]) r8
            r7.setTargetClasses(r8)
        L5f:
            return
    }

    private static boolean maybeSkipComment(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6) {
            int r0 = r6.getPosition()
            int r1 = r6.limit()
            byte[] r2 = r6.data
            int r3 = r0 + 2
            if (r3 > r1) goto L3d
            int r3 = r0 + 1
            r0 = r2[r0]
            r4 = 47
            if (r0 != r4) goto L3d
            int r0 = r3 + 1
            r3 = r2[r3]
            r5 = 42
            if (r3 != r5) goto L3d
        L1e:
            int r3 = r0 + 1
            if (r3 >= r1) goto L33
            r0 = r2[r0]
            char r0 = (char) r0
            if (r0 != r5) goto L31
            r0 = r2[r3]
            char r0 = (char) r0
            if (r0 != r4) goto L31
            int r3 = r3 + 1
            r0 = r3
            r1 = r0
            goto L1e
        L31:
            r0 = r3
            goto L1e
        L33:
            int r0 = r6.getPosition()
            int r1 = r1 - r0
            r6.skipBytes(r1)
            r6 = 1
            return r6
        L3d:
            r6 = 0
            return r6
    }

    private static boolean maybeSkipWhitespace(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2) {
            int r0 = r2.getPosition()
            char r0 = peekCharAtPosition(r2, r0)
            r1 = 9
            if (r0 == r1) goto L1e
            r1 = 10
            if (r0 == r1) goto L1e
            r1 = 12
            if (r0 == r1) goto L1e
            r1 = 13
            if (r0 == r1) goto L1e
            r1 = 32
            if (r0 == r1) goto L1e
            r2 = 0
            return r2
        L1e:
            r0 = 1
            r2.skipBytes(r0)
            return r0
    }

    private static java.lang.String parseIdentifier(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, java.lang.StringBuilder r6) {
            r0 = 0
            r6.setLength(r0)
            int r1 = r5.getPosition()
            int r2 = r5.limit()
        Lc:
            if (r1 >= r2) goto L46
            if (r0 != 0) goto L46
            byte[] r3 = r5.data
            r3 = r3[r1]
            char r3 = (char) r3
            r4 = 65
            if (r3 < r4) goto L1d
            r4 = 90
            if (r3 <= r4) goto L40
        L1d:
            r4 = 97
            if (r3 < r4) goto L25
            r4 = 122(0x7a, float:1.71E-43)
            if (r3 <= r4) goto L40
        L25:
            r4 = 48
            if (r3 < r4) goto L2d
            r4 = 57
            if (r3 <= r4) goto L40
        L2d:
            r4 = 35
            if (r3 == r4) goto L40
            r4 = 45
            if (r3 == r4) goto L40
            r4 = 46
            if (r3 == r4) goto L40
            r4 = 95
            if (r3 != r4) goto L3e
            goto L40
        L3e:
            r0 = 1
            goto Lc
        L40:
            int r1 = r1 + 1
            r6.append(r3)
            goto Lc
        L46:
            int r0 = r5.getPosition()
            int r1 = r1 - r0
            r5.skipBytes(r1)
            java.lang.String r5 = r6.toString()
            return r5
    }

    static java.lang.String parseNextToken(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2, java.lang.StringBuilder r3) {
            skipWhitespaceAndComments(r2)
            int r0 = r2.bytesLeft()
            if (r0 != 0) goto Lb
            r2 = 0
            return r2
        Lb:
            java.lang.String r3 = parseIdentifier(r2, r3)
            java.lang.String r0 = ""
            boolean r1 = r0.equals(r3)
            if (r1 != 0) goto L18
            return r3
        L18:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            int r2 = r2.readUnsignedByte()
            char r2 = (char) r2
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            return r2
    }

    private static java.lang.String parsePropertyValue(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5, java.lang.StringBuilder r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r1 = 0
        L6:
            if (r1 != 0) goto L2e
            int r2 = r5.getPosition()
            java.lang.String r3 = parseNextToken(r5, r6)
            if (r3 != 0) goto L14
            r5 = 0
            return r5
        L14:
            java.lang.String r4 = "}"
            boolean r4 = r4.equals(r3)
            if (r4 != 0) goto L29
            java.lang.String r4 = ";"
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L25
            goto L29
        L25:
            r0.append(r3)
            goto L6
        L29:
            r5.setPosition(r2)
            r1 = 1
            goto L6
        L2e:
            java.lang.String r5 = r0.toString()
            return r5
    }

    private static java.lang.String parseSelector(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, java.lang.StringBuilder r5) {
            skipWhitespaceAndComments(r4)
            int r0 = r4.bytesLeft()
            r1 = 5
            r2 = 0
            if (r0 >= r1) goto Lc
            return r2
        Lc:
            java.lang.String r0 = r4.readString(r1)
            java.lang.String r1 = "::cue"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L19
            return r2
        L19:
            int r0 = r4.getPosition()
            java.lang.String r1 = parseNextToken(r4, r5)
            if (r1 != 0) goto L24
            return r2
        L24:
            java.lang.String r3 = "{"
            boolean r3 = r3.equals(r1)
            if (r3 == 0) goto L32
            r4.setPosition(r0)
            java.lang.String r4 = ""
            return r4
        L32:
            java.lang.String r0 = "("
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L3f
            java.lang.String r0 = readCueTarget(r4)
            goto L40
        L3f:
            r0 = r2
        L40:
            java.lang.String r4 = parseNextToken(r4, r5)
            java.lang.String r5 = ")"
            boolean r5 = r5.equals(r4)
            if (r5 == 0) goto L50
            if (r4 != 0) goto L4f
            goto L50
        L4f:
            return r0
        L50:
            return r2
    }

    private static void parseStyleDeclaration(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4, com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r5, java.lang.StringBuilder r6) {
            skipWhitespaceAndComments(r4)
            java.lang.String r0 = parseIdentifier(r4, r6)
            java.lang.String r1 = ""
            boolean r2 = r1.equals(r0)
            if (r2 == 0) goto L10
            return
        L10:
            java.lang.String r2 = parseNextToken(r4, r6)
            java.lang.String r3 = ":"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L1d
            return
        L1d:
            skipWhitespaceAndComments(r4)
            java.lang.String r2 = parsePropertyValue(r4, r6)
            if (r2 == 0) goto Lb2
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L2e
            goto Lb2
        L2e:
            int r1 = r4.getPosition()
            java.lang.String r6 = parseNextToken(r4, r6)
            java.lang.String r3 = ";"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L3f
            goto L4a
        L3f:
            java.lang.String r3 = "}"
            boolean r6 = r3.equals(r6)
            if (r6 == 0) goto Lb2
            r4.setPosition(r1)
        L4a:
            java.lang.String r4 = "color"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L5a
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser.parseCssColor(r2)
            r5.setFontColor(r4)
            goto Lb2
        L5a:
            java.lang.String r4 = "background-color"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L6a
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser.parseCssColor(r2)
            r5.setBackgroundColor(r4)
            goto Lb2
        L6a:
            java.lang.String r4 = "text-decoration"
            boolean r4 = r4.equals(r0)
            r6 = 1
            if (r4 == 0) goto L7f
            java.lang.String r4 = "underline"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto Lb2
            r5.setUnderline(r6)
            goto Lb2
        L7f:
            java.lang.String r4 = "font-family"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L8b
            r5.setFontFamily(r2)
            goto Lb2
        L8b:
            java.lang.String r4 = "font-weight"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L9f
            java.lang.String r4 = "bold"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto Lb2
            r5.setBold(r6)
            goto Lb2
        L9f:
            java.lang.String r4 = "font-style"
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto Lb2
            java.lang.String r4 = "italic"
            boolean r4 = r4.equals(r2)
            if (r4 == 0) goto Lb2
            r5.setItalic(r6)
        Lb2:
            return
    }

    private static char peekCharAtPosition(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0, int r1) {
            byte[] r0 = r0.data
            r0 = r0[r1]
            char r0 = (char) r0
            return r0
    }

    private static java.lang.String readCueTarget(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5) {
            int r0 = r5.getPosition()
            int r1 = r5.limit()
            r2 = 0
            r3 = r2
        La:
            if (r0 >= r1) goto L1f
            if (r3 != 0) goto L1f
            byte[] r3 = r5.data
            int r4 = r0 + 1
            r0 = r3[r0]
            char r0 = (char) r0
            r3 = 41
            if (r0 != r3) goto L1c
            r0 = 1
            r3 = r0
            goto L1d
        L1c:
            r3 = r2
        L1d:
            r0 = r4
            goto La
        L1f:
            int r0 = r0 + (-1)
            int r1 = r5.getPosition()
            int r0 = r0 - r1
            java.lang.String r5 = r5.readString(r0)
            java.lang.String r5 = r5.trim()
            return r5
    }

    static void skipStyleBlock(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1) {
        L0:
            java.lang.String r0 = r1.readLine()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L0
            return
    }

    static void skipWhitespaceAndComments(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) {
            r0 = 1
        L1:
            r1 = r0
        L2:
            int r2 = r3.bytesLeft()
            if (r2 <= 0) goto L19
            if (r1 == 0) goto L19
            boolean r1 = maybeSkipWhitespace(r3)
            if (r1 != 0) goto L1
            boolean r1 = maybeSkipComment(r3)
            if (r1 == 0) goto L17
            goto L1
        L17:
            r1 = 0
            goto L2
        L19:
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle parseBlock(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7) {
            r6 = this;
            java.lang.StringBuilder r0 = r6.stringBuilder
            r1 = 0
            r0.setLength(r1)
            int r0 = r7.getPosition()
            skipStyleBlock(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.styleInput
            byte[] r3 = r7.data
            int r7 = r7.getPosition()
            r2.reset(r3, r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.styleInput
            r7.setPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.styleInput
            java.lang.StringBuilder r0 = r6.stringBuilder
            java.lang.String r7 = parseSelector(r7, r0)
            r0 = 0
            if (r7 == 0) goto L78
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r6.styleInput
            java.lang.StringBuilder r3 = r6.stringBuilder
            java.lang.String r2 = parseNextToken(r2, r3)
            java.lang.String r3 = "{"
            boolean r2 = r3.equals(r2)
            if (r2 != 0) goto L39
            goto L78
        L39:
            com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r2 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle
            r2.<init>()
            r6.applySelectorToStyle(r2, r7)
            r3 = r0
            r7 = r1
        L43:
            java.lang.String r4 = "}"
            if (r7 != 0) goto L71
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.styleInput
            int r7 = r7.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r6.styleInput
            java.lang.StringBuilder r5 = r6.stringBuilder
            java.lang.String r3 = parseNextToken(r3, r5)
            if (r3 == 0) goto L60
            boolean r4 = r4.equals(r3)
            if (r4 == 0) goto L5e
            goto L60
        L5e:
            r4 = r1
            goto L61
        L60:
            r4 = 1
        L61:
            if (r4 != 0) goto L6f
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r6.styleInput
            r5.setPosition(r7)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r6.styleInput
            java.lang.StringBuilder r5 = r6.stringBuilder
            parseStyleDeclaration(r7, r2, r5)
        L6f:
            r7 = r4
            goto L43
        L71:
            boolean r7 = r4.equals(r3)
            if (r7 == 0) goto L78
            r0 = r2
        L78:
            return r0
    }
}
