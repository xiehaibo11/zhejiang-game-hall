package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class WebvttCssStyle {
    public static final int FONT_SIZE_UNIT_EM = 2;
    public static final int FONT_SIZE_UNIT_PERCENT = 3;
    public static final int FONT_SIZE_UNIT_PIXEL = 1;
    private static final int OFF = 0;
    private static final int ON = 1;
    public static final int STYLE_BOLD = 1;
    public static final int STYLE_BOLD_ITALIC = 3;
    public static final int STYLE_ITALIC = 2;
    public static final int STYLE_NORMAL = 0;
    public static final int UNSPECIFIED = -1;
    private int backgroundColor;
    private int bold;
    private int fontColor;
    private java.lang.String fontFamily;
    private float fontSize;
    private int fontSizeUnit;
    private boolean hasBackgroundColor;
    private boolean hasFontColor;
    private int italic;
    private int linethrough;
    private java.util.List<java.lang.String> targetClasses;
    private java.lang.String targetId;
    private java.lang.String targetTag;
    private java.lang.String targetVoice;
    private android.text.Layout.Alignment textAlign;
    private int underline;

    public @interface FontSizeUnit {
    }

    private @interface OptionalBoolean {
    }

    public @interface StyleFlags {
    }

    public WebvttCssStyle() {
            r0 = this;
            r0.<init>()
            r0.reset()
            return
    }

    private static int updateScoreForMatch(int r1, java.lang.String r2, java.lang.String r3, int r4) {
            boolean r0 = r2.isEmpty()
            if (r0 != 0) goto L13
            r0 = -1
            if (r1 != r0) goto La
            goto L13
        La:
            boolean r2 = r2.equals(r3)
            if (r2 == 0) goto L12
            int r0 = r1 + r4
        L12:
            return r0
        L13:
            return r1
    }

    public final void cascadeFrom(com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle r3) {
            r2 = this;
            boolean r0 = r3.hasFontColor
            if (r0 == 0) goto L9
            int r0 = r3.fontColor
            r2.setFontColor(r0)
        L9:
            int r0 = r3.bold
            r1 = -1
            if (r0 == r1) goto L10
            r2.bold = r0
        L10:
            int r0 = r3.italic
            if (r0 == r1) goto L16
            r2.italic = r0
        L16:
            java.lang.String r0 = r3.fontFamily
            if (r0 == 0) goto L1c
            r2.fontFamily = r0
        L1c:
            int r0 = r2.linethrough
            if (r0 != r1) goto L24
            int r0 = r3.linethrough
            r2.linethrough = r0
        L24:
            int r0 = r2.underline
            if (r0 != r1) goto L2c
            int r0 = r3.underline
            r2.underline = r0
        L2c:
            android.text.Layout$Alignment r0 = r2.textAlign
            if (r0 != 0) goto L34
            android.text.Layout$Alignment r0 = r3.textAlign
            r2.textAlign = r0
        L34:
            int r0 = r2.fontSizeUnit
            if (r0 != r1) goto L40
            int r0 = r3.fontSizeUnit
            r2.fontSizeUnit = r0
            float r0 = r3.fontSize
            r2.fontSize = r0
        L40:
            boolean r0 = r3.hasBackgroundColor
            if (r0 == 0) goto L49
            int r3 = r3.backgroundColor
            r2.setBackgroundColor(r3)
        L49:
            return
    }

    public final int getBackgroundColor() {
            r2 = this;
            boolean r0 = r2.hasBackgroundColor
            if (r0 == 0) goto L7
            int r0 = r2.backgroundColor
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Background color not defined."
            r0.<init>(r1)
            throw r0
    }

    public final int getFontColor() {
            r2 = this;
            boolean r0 = r2.hasFontColor
            if (r0 == 0) goto L7
            int r0 = r2.fontColor
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Font color not defined"
            r0.<init>(r1)
            throw r0
    }

    public final java.lang.String getFontFamily() {
            r1 = this;
            java.lang.String r0 = r1.fontFamily
            return r0
    }

    public final float getFontSize() {
            r1 = this;
            float r0 = r1.fontSize
            return r0
    }

    public final int getFontSizeUnit() {
            r1 = this;
            int r0 = r1.fontSizeUnit
            return r0
    }

    public final int getSpecificityScore(java.lang.String r4, java.lang.String r5, java.lang.String[] r6, java.lang.String r7) {
            r3 = this;
            java.lang.String r0 = r3.targetId
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L25
            java.lang.String r0 = r3.targetTag
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L25
            java.util.List<java.lang.String> r0 = r3.targetClasses
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L25
            java.lang.String r0 = r3.targetVoice
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L25
            boolean r4 = r5.isEmpty()
            return r4
        L25:
            java.lang.String r0 = r3.targetId
            r1 = 1073741824(0x40000000, float:2.0)
            r2 = 0
            int r4 = updateScoreForMatch(r2, r0, r4, r1)
            java.lang.String r0 = r3.targetTag
            r1 = 2
            int r4 = updateScoreForMatch(r4, r0, r5, r1)
            java.lang.String r5 = r3.targetVoice
            r0 = 4
            int r4 = updateScoreForMatch(r4, r5, r7, r0)
            r5 = -1
            if (r4 == r5) goto L55
            java.util.List r5 = java.util.Arrays.asList(r6)
            java.util.List<java.lang.String> r6 = r3.targetClasses
            boolean r5 = r5.containsAll(r6)
            if (r5 != 0) goto L4c
            goto L55
        L4c:
            java.util.List<java.lang.String> r5 = r3.targetClasses
            int r5 = r5.size()
            int r5 = r5 * r0
            int r4 = r4 + r5
            return r4
        L55:
            return r2
    }

    public final int getStyle() {
            r4 = this;
            int r0 = r4.bold
            r1 = -1
            if (r0 != r1) goto La
            int r0 = r4.italic
            if (r0 != r1) goto La
            return r1
        La:
            int r0 = r4.bold
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L12
            r0 = r2
            goto L13
        L12:
            r0 = r1
        L13:
            int r3 = r4.italic
            if (r3 != r2) goto L18
            r1 = 2
        L18:
            r0 = r0 | r1
            return r0
    }

    public final android.text.Layout.Alignment getTextAlign() {
            r1 = this;
            android.text.Layout$Alignment r0 = r1.textAlign
            return r0
    }

    public final boolean hasBackgroundColor() {
            r1 = this;
            boolean r0 = r1.hasBackgroundColor
            return r0
    }

    public final boolean hasFontColor() {
            r1 = this;
            boolean r0 = r1.hasFontColor
            return r0
    }

    public final boolean isLinethrough() {
            r2 = this;
            int r0 = r2.linethrough
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public final boolean isUnderline() {
            r2 = this;
            int r0 = r2.underline
            r1 = 1
            if (r0 != r1) goto L6
            goto L7
        L6:
            r1 = 0
        L7:
            return r1
    }

    public final void reset() {
            r2 = this;
            java.lang.String r0 = ""
            r2.targetId = r0
            r2.targetTag = r0
            java.util.List r1 = java.util.Collections.emptyList()
            r2.targetClasses = r1
            r2.targetVoice = r0
            r0 = 0
            r2.fontFamily = r0
            r1 = 0
            r2.hasFontColor = r1
            r2.hasBackgroundColor = r1
            r1 = -1
            r2.linethrough = r1
            r2.underline = r1
            r2.bold = r1
            r2.italic = r1
            r2.fontSizeUnit = r1
            r2.textAlign = r0
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setBackgroundColor(int r1) {
            r0 = this;
            r0.backgroundColor = r1
            r1 = 1
            r0.hasBackgroundColor = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setBold(boolean r1) {
            r0 = this;
            r0.bold = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setFontColor(int r1) {
            r0 = this;
            r0.fontColor = r1
            r1 = 1
            r0.hasFontColor = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setFontFamily(java.lang.String r1) {
            r0 = this;
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r1)
            r0.fontFamily = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setFontSize(float r1) {
            r0 = this;
            r0.fontSize = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setFontSizeUnit(short r1) {
            r0 = this;
            r0.fontSizeUnit = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setItalic(boolean r1) {
            r0 = this;
            r0.italic = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setLinethrough(boolean r1) {
            r0 = this;
            r0.linethrough = r1
            return r0
    }

    public final void setTargetClasses(java.lang.String[] r1) {
            r0 = this;
            java.util.List r1 = java.util.Arrays.asList(r1)
            r0.targetClasses = r1
            return
    }

    public final void setTargetId(java.lang.String r1) {
            r0 = this;
            r0.targetId = r1
            return
    }

    public final void setTargetTagName(java.lang.String r1) {
            r0 = this;
            r0.targetTag = r1
            return
    }

    public final void setTargetVoice(java.lang.String r1) {
            r0 = this;
            r0.targetVoice = r1
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setTextAlign(android.text.Layout.Alignment r1) {
            r0 = this;
            r0.textAlign = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCssStyle setUnderline(boolean r1) {
            r0 = this;
            r0.underline = r1
            return r0
    }
}
