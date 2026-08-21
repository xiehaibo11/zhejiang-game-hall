package com.mbridge.msdk.playercommon.exoplayer2.text.tx3g;

public final class Tx3gDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final char BOM_UTF16_BE = 65279;
    private static final char BOM_UTF16_LE = 65534;
    private static final int DEFAULT_COLOR = -1;
    private static final int DEFAULT_FONT_FACE = 0;
    private static final java.lang.String DEFAULT_FONT_FAMILY = "sans-serif";
    private static final float DEFAULT_VERTICAL_PLACEMENT = 0.85f;
    private static final int FONT_FACE_BOLD = 1;
    private static final int FONT_FACE_ITALIC = 2;
    private static final int FONT_FACE_UNDERLINE = 4;
    private static final int SIZE_ATOM_HEADER = 8;
    private static final int SIZE_BOM_UTF16 = 2;
    private static final int SIZE_SHORT = 2;
    private static final int SIZE_STYLE_RECORD = 12;
    private static final int SPAN_PRIORITY_HIGH = 0;
    private static final int SPAN_PRIORITY_LOW = 16711680;
    private static final java.lang.String TX3G_SERIF = "Serif";
    private static final int TYPE_STYL = 0;
    private static final int TYPE_TBOX = 0;
    private int calculatedVideoTrackHeight;
    private boolean customVerticalPlacement;
    private int defaultColorRgba;
    private int defaultFontFace;
    private java.lang.String defaultFontFamily;
    private float defaultVerticalPlacement;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray parsableByteArray;

    static {
            java.lang.String r0 = "styl"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gDecoder.TYPE_STYL = r0
            java.lang.String r0 = "tbox"
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getIntegerCodeForString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gDecoder.TYPE_TBOX = r0
            return
    }

    public Tx3gDecoder(java.util.List<byte[]> r2) {
            r1 = this;
            java.lang.String r0 = "Tx3gDecoder"
            r1.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r1.parsableByteArray = r0
            r1.decodeInitializationData(r2)
            return
    }

    private void applyStyleRecord(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10, android.text.SpannableStringBuilder r11) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r9 = this;
            int r0 = r10.bytesLeft()
            r1 = 1
            r2 = 12
            if (r0 < r2) goto Lb
            r0 = r1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            assertTrue(r0)
            int r0 = r10.readUnsignedShort()
            int r8 = r10.readUnsignedShort()
            r2 = 2
            r10.skipBytes(r2)
            int r3 = r10.readUnsignedByte()
            r10.skipBytes(r1)
            int r10 = r10.readInt()
            int r4 = r9.defaultFontFace
            r7 = 0
            r2 = r11
            r5 = r0
            r6 = r8
            attachFontFace(r2, r3, r4, r5, r6, r7)
            int r4 = r9.defaultColorRgba
            r3 = r10
            attachColor(r2, r3, r4, r5, r6, r7)
            return
    }

    private static void assertTrue(boolean r1) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            if (r1 == 0) goto L3
            return
        L3:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r0 = "Unexpected subtitle format."
            r1.<init>(r0)
            throw r1
    }

    private static void attachColor(android.text.SpannableStringBuilder r0, int r1, int r2, int r3, int r4, int r5) {
            if (r1 == r2) goto L13
            r2 = r1 & 255(0xff, float:3.57E-43)
            int r2 = r2 << 24
            int r1 = r1 >>> 8
            r1 = r1 | r2
            android.text.style.ForegroundColorSpan r2 = new android.text.style.ForegroundColorSpan
            r2.<init>(r1)
            r1 = r5 | 33
            r0.setSpan(r2, r3, r4, r1)
        L13:
            return
    }

    private static void attachFontFace(android.text.SpannableStringBuilder r5, int r6, int r7, int r8, int r9, int r10) {
            if (r6 == r7) goto L54
            r7 = r10 | 33
            r10 = r6 & 1
            r0 = 0
            r1 = 1
            if (r10 == 0) goto Lc
            r10 = r1
            goto Ld
        Lc:
            r10 = r0
        Ld:
            r2 = r6 & 2
            if (r2 == 0) goto L13
            r2 = r1
            goto L14
        L13:
            r2 = r0
        L14:
            if (r10 == 0) goto L2b
            if (r2 == 0) goto L22
            android.text.style.StyleSpan r3 = new android.text.style.StyleSpan
            r4 = 3
            r3.<init>(r4)
            r5.setSpan(r3, r8, r9, r7)
            goto L36
        L22:
            android.text.style.StyleSpan r3 = new android.text.style.StyleSpan
            r3.<init>(r1)
            r5.setSpan(r3, r8, r9, r7)
            goto L36
        L2b:
            if (r2 == 0) goto L36
            android.text.style.StyleSpan r3 = new android.text.style.StyleSpan
            r4 = 2
            r3.<init>(r4)
            r5.setSpan(r3, r8, r9, r7)
        L36:
            r6 = r6 & 4
            if (r6 == 0) goto L3b
            goto L3c
        L3b:
            r1 = r0
        L3c:
            if (r1 == 0) goto L46
            android.text.style.UnderlineSpan r6 = new android.text.style.UnderlineSpan
            r6.<init>()
            r5.setSpan(r6, r8, r9, r7)
        L46:
            if (r1 != 0) goto L54
            if (r10 != 0) goto L54
            if (r2 != 0) goto L54
            android.text.style.StyleSpan r6 = new android.text.style.StyleSpan
            r6.<init>(r0)
            r5.setSpan(r6, r8, r9, r7)
        L54:
            return
    }

    private static void attachFontFamily(android.text.SpannableStringBuilder r0, java.lang.String r1, java.lang.String r2, int r3, int r4, int r5) {
            if (r1 == r2) goto Lc
            android.text.style.TypefaceSpan r2 = new android.text.style.TypefaceSpan
            r2.<init>(r1)
            r1 = r5 | 33
            r0.setSpan(r2, r3, r4, r1)
        Lc:
            return
    }

    private void decodeInitializationData(java.util.List<byte[]> r7) {
            r6 = this;
            r0 = 1062836634(0x3f59999a, float:0.85)
            java.lang.String r1 = "sans-serif"
            r2 = 0
            if (r7 == 0) goto L9f
            int r3 = r7.size()
            r4 = 1
            if (r3 != r4) goto L9f
            java.lang.Object r3 = r7.get(r2)
            byte[] r3 = (byte[]) r3
            int r3 = r3.length
            r5 = 48
            if (r3 == r5) goto L25
            java.lang.Object r3 = r7.get(r2)
            byte[] r3 = (byte[]) r3
            int r3 = r3.length
            r5 = 53
            if (r3 != r5) goto L9f
        L25:
            java.lang.Object r7 = r7.get(r2)
            byte[] r7 = (byte[]) r7
            r3 = 24
            r5 = r7[r3]
            r6.defaultFontFace = r5
            r5 = 26
            r5 = r7[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r3 = r5 << 24
            r5 = 27
            r5 = r7[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << 16
            r3 = r3 | r5
            r5 = 28
            r5 = r7[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << 8
            r3 = r3 | r5
            r5 = 29
            r5 = r7[r5]
            r5 = r5 & 255(0xff, float:3.57E-43)
            r3 = r3 | r5
            r6.defaultColorRgba = r3
            int r3 = r7.length
            r5 = 43
            int r3 = r3 - r5
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.fromUtf8Bytes(r7, r5, r3)
            java.lang.String r5 = "Serif"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L66
            java.lang.String r1 = "serif"
        L66:
            r6.defaultFontFamily = r1
            r1 = 25
            r1 = r7[r1]
            int r1 = r1 * 20
            r6.calculatedVideoTrackHeight = r1
            r1 = r7[r2]
            r1 = r1 & 32
            if (r1 == 0) goto L77
            r2 = r4
        L77:
            r6.customVerticalPlacement = r2
            if (r2 == 0) goto L9c
            r0 = 10
            r0 = r7[r0]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 << 8
            r1 = 11
            r7 = r7[r1]
            r7 = r7 & 255(0xff, float:3.57E-43)
            r7 = r7 | r0
            float r7 = (float) r7
            int r0 = r6.calculatedVideoTrackHeight
            float r0 = (float) r0
            float r7 = r7 / r0
            r6.defaultVerticalPlacement = r7
            r0 = 0
            r1 = 1064514355(0x3f733333, float:0.95)
            float r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r7, r0, r1)
            r6.defaultVerticalPlacement = r7
            goto Laa
        L9c:
            r6.defaultVerticalPlacement = r0
            goto Laa
        L9f:
            r6.defaultFontFace = r2
            r7 = -1
            r6.defaultColorRgba = r7
            r6.defaultFontFamily = r1
            r6.customVerticalPlacement = r2
            r6.defaultVerticalPlacement = r0
        Laa:
            return
    }

    private static java.lang.String readSubtitleText(com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            int r0 = r3.bytesLeft()
            r1 = 2
            if (r0 < r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = 0
        La:
            assertTrue(r0)
            int r0 = r3.readUnsignedShort()
            if (r0 != 0) goto L16
            java.lang.String r3 = ""
            return r3
        L16:
            int r2 = r3.bytesLeft()
            if (r2 < r1) goto L35
            char r1 = r3.peekChar()
            r2 = 65279(0xfeff, float:9.1475E-41)
            if (r1 == r2) goto L2a
            r2 = 65534(0xfffe, float:9.1833E-41)
            if (r1 != r2) goto L35
        L2a:
            java.lang.String r1 = "UTF-16"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            java.lang.String r3 = r3.readString(r0, r1)
            return r3
        L35:
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)
            java.lang.String r3 = r3.readString(r0, r1)
            return r3
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r10, int r11, boolean r12) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12 = r9.parsableByteArray
            r12.reset(r10, r11)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.parsableByteArray
            java.lang.String r10 = readSubtitleText(r10)
            boolean r11 = r10.isEmpty()
            if (r11 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle r10 = com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle.EMPTY
            return r10
        L14:
            android.text.SpannableStringBuilder r11 = new android.text.SpannableStringBuilder
            r11.<init>(r10)
            int r1 = r9.defaultFontFace
            r2 = 0
            r3 = 0
            int r4 = r11.length()
            r5 = 16711680(0xff0000, float:2.3418052E-38)
            r0 = r11
            attachFontFace(r0, r1, r2, r3, r4, r5)
            int r1 = r9.defaultColorRgba
            r2 = -1
            int r4 = r11.length()
            attachColor(r0, r1, r2, r3, r4, r5)
            java.lang.String r1 = r9.defaultFontFamily
            int r4 = r11.length()
            java.lang.String r2 = "sans-serif"
            attachFontFamily(r0, r1, r2, r3, r4, r5)
            float r10 = r9.defaultVerticalPlacement
            r3 = r10
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.parsableByteArray
            int r10 = r10.bytesLeft()
            r12 = 8
            if (r10 < r12) goto Lae
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r10 = r9.parsableByteArray
            int r10 = r10.getPosition()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r12 = r9.parsableByteArray
            int r12 = r12.readInt()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r0 = r0.readInt()
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gDecoder.TYPE_STYL
            r2 = 2
            r4 = 1
            r5 = 0
            if (r0 != r1) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r0 = r0.bytesLeft()
            if (r0 < r2) goto L6b
            goto L6c
        L6b:
            r4 = r5
        L6c:
            assertTrue(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r0 = r0.readUnsignedShort()
        L75:
            if (r5 >= r0) goto La7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r9.parsableByteArray
            r9.applyStyleRecord(r1, r11)
            int r5 = r5 + 1
            goto L75
        L7f:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gDecoder.TYPE_TBOX
            if (r0 != r1) goto La7
            boolean r0 = r9.customVerticalPlacement
            if (r0 == 0) goto La7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r0 = r0.bytesLeft()
            if (r0 < r2) goto L90
            goto L91
        L90:
            r4 = r5
        L91:
            assertTrue(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r0 = r0.readUnsignedShort()
            float r0 = (float) r0
            int r1 = r9.calculatedVideoTrackHeight
            float r1 = (float) r1
            float r0 = r0 / r1
            r1 = 0
            r2 = 1064514355(0x3f733333, float:0.95)
            float r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r0, r1, r2)
        La7:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.parsableByteArray
            int r10 = r10 + r12
            r0.setPosition(r10)
            goto L3f
        Lae:
            com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle r10 = new com.mbridge.msdk.playercommon.exoplayer2.text.tx3g.Tx3gSubtitle
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r12 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
            r2 = 0
            r4 = 0
            r5 = 0
            r6 = 1
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            r8 = 1
            r0 = r12
            r1 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r10.<init>(r12)
            return r10
    }
}
