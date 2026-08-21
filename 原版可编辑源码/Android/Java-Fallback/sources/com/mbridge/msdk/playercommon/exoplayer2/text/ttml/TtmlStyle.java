package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

final class TtmlStyle {
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
    private java.lang.String id;
    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle inheritableStyle;
    private int italic;
    private int linethrough;
    private android.text.Layout.Alignment textAlign;
    private int underline;

    public @interface FontSizeUnit {
    }

    private @interface OptionalBoolean {
    }

    public @interface StyleFlags {
    }

    public TtmlStyle() {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.linethrough = r0
            r1.underline = r0
            r1.bold = r0
            r1.italic = r0
            r1.fontSizeUnit = r0
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle inherit(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3, boolean r4) {
            r2 = this;
            if (r3 == 0) goto L5b
            boolean r0 = r2.hasFontColor
            if (r0 != 0) goto Lf
            boolean r0 = r3.hasFontColor
            if (r0 == 0) goto Lf
            int r0 = r3.fontColor
            r2.setFontColor(r0)
        Lf:
            int r0 = r2.bold
            r1 = -1
            if (r0 != r1) goto L18
            int r0 = r3.bold
            r2.bold = r0
        L18:
            int r0 = r2.italic
            if (r0 != r1) goto L20
            int r0 = r3.italic
            r2.italic = r0
        L20:
            java.lang.String r0 = r2.fontFamily
            if (r0 != 0) goto L28
            java.lang.String r0 = r3.fontFamily
            r2.fontFamily = r0
        L28:
            int r0 = r2.linethrough
            if (r0 != r1) goto L30
            int r0 = r3.linethrough
            r2.linethrough = r0
        L30:
            int r0 = r2.underline
            if (r0 != r1) goto L38
            int r0 = r3.underline
            r2.underline = r0
        L38:
            android.text.Layout$Alignment r0 = r2.textAlign
            if (r0 != 0) goto L40
            android.text.Layout$Alignment r0 = r3.textAlign
            r2.textAlign = r0
        L40:
            int r0 = r2.fontSizeUnit
            if (r0 != r1) goto L4c
            int r0 = r3.fontSizeUnit
            r2.fontSizeUnit = r0
            float r0 = r3.fontSize
            r2.fontSize = r0
        L4c:
            if (r4 == 0) goto L5b
            boolean r4 = r2.hasBackgroundColor
            if (r4 != 0) goto L5b
            boolean r4 = r3.hasBackgroundColor
            if (r4 == 0) goto L5b
            int r3 = r3.backgroundColor
            r2.setBackgroundColor(r3)
        L5b:
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle chain(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2) {
            r1 = this;
            r0 = 1
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2 = r1.inherit(r2, r0)
            return r2
    }

    public final int getBackgroundColor() {
            r2 = this;
            boolean r0 = r2.hasBackgroundColor
            if (r0 == 0) goto L7
            int r0 = r2.backgroundColor
            return r0
        L7:
            java.lang.IllegalStateException r0 = new java.lang.IllegalStateException
            java.lang.String r1 = "Background color has not been defined."
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
            java.lang.String r1 = "Font color has not been defined."
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

    public final java.lang.String getId() {
            r1 = this;
            java.lang.String r0 = r1.id
            return r0
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

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle inherit(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2) {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r2 = r1.inherit(r2, r0)
            return r2
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

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setBackgroundColor(int r1) {
            r0 = this;
            r0.backgroundColor = r1
            r1 = 1
            r0.hasBackgroundColor = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setBold(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r1.inheritableStyle
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.bold = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setFontColor(int r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r2.inheritableStyle
            r1 = 1
            if (r0 != 0) goto L7
            r0 = r1
            goto L8
        L7:
            r0 = 0
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r2.fontColor = r3
            r2.hasFontColor = r1
            return r2
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setFontFamily(java.lang.String r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r1.inheritableStyle
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.fontFamily = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setFontSize(float r1) {
            r0 = this;
            r0.fontSize = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setFontSizeUnit(int r1) {
            r0 = this;
            r0.fontSizeUnit = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setId(java.lang.String r1) {
            r0 = this;
            r0.id = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setItalic(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r1.inheritableStyle
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.italic = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setLinethrough(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r1.inheritableStyle
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.linethrough = r2
            return r1
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setTextAlign(android.text.Layout.Alignment r1) {
            r0 = this;
            r0.textAlign = r1
            return r0
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle setUnderline(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r1.inheritableStyle
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            r1.underline = r2
            return r1
    }
}
