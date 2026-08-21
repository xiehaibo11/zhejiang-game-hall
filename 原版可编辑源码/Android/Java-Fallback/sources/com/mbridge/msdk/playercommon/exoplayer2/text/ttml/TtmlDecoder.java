package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

public final class TtmlDecoder extends com.mbridge.msdk.playercommon.exoplayer2.text.SimpleSubtitleDecoder {
    private static final java.lang.String ATTR_BEGIN = "begin";
    private static final java.lang.String ATTR_DURATION = "dur";
    private static final java.lang.String ATTR_END = "end";
    private static final java.lang.String ATTR_REGION = "region";
    private static final java.lang.String ATTR_STYLE = "style";
    private static final java.util.regex.Pattern CELL_RESOLUTION = null;
    private static final java.util.regex.Pattern CLOCK_TIME = null;
    private static final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution DEFAULT_CELL_RESOLUTION = null;
    private static final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate DEFAULT_FRAME_AND_TICK_RATE = null;
    private static final int DEFAULT_FRAME_RATE = 30;
    private static final java.util.regex.Pattern FONT_SIZE = null;
    private static final java.util.regex.Pattern OFFSET_TIME = null;
    private static final java.util.regex.Pattern PERCENTAGE_COORDINATES = null;
    private static final java.lang.String TAG = "TtmlDecoder";
    private static final java.lang.String TTP = "http://www.w3.org/ns/ttml#parameter";
    private final org.xmlpull.v1.XmlPullParserFactory xmlParserFactory;

    private static final class CellResolution {
        final int columns;
        final int rows;

        CellResolution(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.columns = r1
                r0.rows = r2
                return
        }
    }

    private static final class FrameAndTickRate {
        final float effectiveFrameRate;
        final int subFrameRate;
        final int tickRate;

        FrameAndTickRate(float r1, int r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.effectiveFrameRate = r1
                r0.subFrameRate = r2
                r0.tickRate = r3
                return
        }
    }

    static {
            java.lang.String r0 = "^([0-9][0-9]+):([0-9][0-9]):([0-9][0-9])(?:(\\.[0-9]+)|:([0-9][0-9])(?:\\.([0-9]+))?)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CLOCK_TIME = r0
            java.lang.String r0 = "^([0-9]+(?:\\.[0-9]+)?)(h|m|s|ms|f|t)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.OFFSET_TIME = r0
            java.lang.String r0 = "^(([0-9]*.)?[0-9]+)(px|em|%)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FONT_SIZE = r0
            java.lang.String r0 = "^(\\d+\\.?\\d*?)% (\\d+\\.?\\d*?)%$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.PERCENTAGE_COORDINATES = r0
            java.lang.String r0 = "^(\\d+) (\\d+)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CELL_RESOLUTION = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate
            r1 = 1
            r2 = 1106247680(0x41f00000, float:30.0)
            r0.<init>(r2, r1, r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_FRAME_AND_TICK_RATE = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution
            r1 = 32
            r2 = 15
            r0.<init>(r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_CELL_RESOLUTION = r0
            return
    }

    public TtmlDecoder() {
            r3 = this;
            java.lang.String r0 = "TtmlDecoder"
            r3.<init>(r0)
            org.xmlpull.v1.XmlPullParserFactory r0 = org.xmlpull.v1.XmlPullParserFactory.newInstance()     // Catch: org.xmlpull.v1.XmlPullParserException -> L10
            r3.xmlParserFactory = r0     // Catch: org.xmlpull.v1.XmlPullParserException -> L10
            r1 = 1
            r0.setNamespaceAware(r1)     // Catch: org.xmlpull.v1.XmlPullParserException -> L10
            return
        L10:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Couldn't create XmlPullParserFactory instance"
            r1.<init>(r2, r0)
            throw r1
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle createIfNull(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r1) {
            r0 = this;
            if (r1 != 0) goto L7
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle
            r1.<init>()
        L7:
            return r1
    }

    private static boolean isSupportedTag(java.lang.String r1) {
            java.lang.String r0 = "tt"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "head"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "body"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "div"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "p"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "span"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "br"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "style"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "styling"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "layout"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "region"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "metadata"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "smpte:image"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "smpte:data"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L7b
            java.lang.String r0 = "smpte:information"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L79
            goto L7b
        L79:
            r1 = 0
            goto L7c
        L7b:
            r1 = 1
        L7c:
            return r1
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution parseCellResolution(org.xmlpull.v1.XmlPullParser r8, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution r9) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r7 = this;
            java.lang.String r0 = "http://www.w3.org/ns/ttml#parameter"
            java.lang.String r1 = "cellResolution"
            java.lang.String r8 = r8.getAttributeValue(r0, r1)
            if (r8 != 0) goto Lb
            return r9
        Lb:
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CELL_RESOLUTION
            java.util.regex.Matcher r0 = r0.matcher(r8)
            boolean r1 = r0.matches()
            java.lang.String r2 = "Ignoring malformed cell resolution: "
            java.lang.String r3 = "TtmlDecoder"
            if (r1 != 0) goto L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            android.util.Log.w(r3, r8)
            return r9
        L2e:
            r1 = 1
            java.lang.String r1 = r0.group(r1)     // Catch: java.lang.NumberFormatException -> L69
            int r1 = java.lang.Integer.parseInt(r1)     // Catch: java.lang.NumberFormatException -> L69
            r4 = 2
            java.lang.String r0 = r0.group(r4)     // Catch: java.lang.NumberFormatException -> L69
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> L69
            if (r1 == 0) goto L4a
            if (r0 == 0) goto L4a
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution     // Catch: java.lang.NumberFormatException -> L69
            r4.<init>(r1, r0)     // Catch: java.lang.NumberFormatException -> L69
            return r4
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException     // Catch: java.lang.NumberFormatException -> L69
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> L69
            r5.<init>()     // Catch: java.lang.NumberFormatException -> L69
            java.lang.String r6 = "Invalid cell resolution "
            r5.append(r6)     // Catch: java.lang.NumberFormatException -> L69
            r5.append(r1)     // Catch: java.lang.NumberFormatException -> L69
            java.lang.String r1 = " "
            r5.append(r1)     // Catch: java.lang.NumberFormatException -> L69
            r5.append(r0)     // Catch: java.lang.NumberFormatException -> L69
            java.lang.String r0 = r5.toString()     // Catch: java.lang.NumberFormatException -> L69
            r4.<init>(r0)     // Catch: java.lang.NumberFormatException -> L69
            throw r4     // Catch: java.lang.NumberFormatException -> L69
        L69:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r2)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            android.util.Log.w(r3, r8)
            return r9
    }

    private static void parseFontSize(java.lang.String r8, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r9) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            java.lang.String r0 = "\\s+"
            java.lang.String[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r8, r0)
            int r1 = r0.length
            r2 = 2
            r3 = 1
            if (r1 != r3) goto L12
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FONT_SIZE
            java.util.regex.Matcher r0 = r0.matcher(r8)
            goto L24
        L12:
            int r1 = r0.length
            if (r1 != r2) goto Lb5
            java.util.regex.Pattern r1 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FONT_SIZE
            r0 = r0[r3]
            java.util.regex.Matcher r0 = r1.matcher(r0)
            java.lang.String r1 = "TtmlDecoder"
            java.lang.String r4 = "Multiple values in fontSize attribute. Picking the second value for vertical font size and ignoring the first."
            android.util.Log.w(r1, r4)
        L24:
            boolean r1 = r0.matches()
            java.lang.String r4 = "'."
            if (r1 == 0) goto L9b
            r8 = 3
            java.lang.String r1 = r0.group(r8)
            r5 = -1
            int r6 = r1.hashCode()
            r7 = 37
            if (r6 == r7) goto L57
            r7 = 3240(0xca8, float:4.54E-42)
            if (r6 == r7) goto L4d
            r7 = 3592(0xe08, float:5.033E-42)
            if (r6 == r7) goto L43
            goto L60
        L43:
            java.lang.String r6 = "px"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L60
            r5 = 0
            goto L60
        L4d:
            java.lang.String r6 = "em"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L60
            r5 = r3
            goto L60
        L57:
            java.lang.String r6 = "%"
            boolean r6 = r1.equals(r6)
            if (r6 == 0) goto L60
            r5 = r2
        L60:
            if (r5 == 0) goto L88
            if (r5 == r3) goto L84
            if (r5 != r2) goto L6a
            r9.setFontSizeUnit(r8)
            goto L8b
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r8 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "Invalid unit for fontSize: '"
            r9.append(r0)
            r9.append(r1)
            r9.append(r4)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
        L84:
            r9.setFontSizeUnit(r2)
            goto L8b
        L88:
            r9.setFontSizeUnit(r3)
        L8b:
            java.lang.String r8 = r0.group(r3)
            java.lang.Float r8 = java.lang.Float.valueOf(r8)
            float r8 = r8.floatValue()
            r9.setFontSize(r8)
            return
        L9b:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r9 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid expression for fontSize: '"
            r0.append(r1)
            r0.append(r8)
            r0.append(r4)
            java.lang.String r8 = r0.toString()
            r9.<init>(r8)
            throw r9
        Lb5:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r8 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r1 = "Invalid number of entries for fontSize: "
            r9.append(r1)
            int r0 = r0.length
            r9.append(r0)
            java.lang.String r0 = "."
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            r8.<init>(r9)
            throw r8
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate parseFrameAndTickRates(org.xmlpull.v1.XmlPullParser r7) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r6 = this;
            java.lang.String r0 = "http://www.w3.org/ns/ttml#parameter"
            java.lang.String r1 = "frameRate"
            java.lang.String r1 = r7.getAttributeValue(r0, r1)
            if (r1 == 0) goto Lf
            int r1 = java.lang.Integer.parseInt(r1)
            goto L11
        Lf:
            r1 = 30
        L11:
            r2 = 1065353216(0x3f800000, float:1.0)
            java.lang.String r3 = "frameRateMultiplier"
            java.lang.String r3 = r7.getAttributeValue(r0, r3)
            if (r3 == 0) goto L40
            java.lang.String r2 = " "
            java.lang.String[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r3, r2)
            int r3 = r2.length
            r4 = 2
            if (r3 != r4) goto L38
            r3 = 0
            r3 = r2[r3]
            int r3 = java.lang.Integer.parseInt(r3)
            float r3 = (float) r3
            r4 = 1
            r2 = r2[r4]
            int r2 = java.lang.Integer.parseInt(r2)
            float r2 = (float) r2
            float r2 = r3 / r2
            goto L40
        L38:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r7 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r0 = "frameRateMultiplier doesn't have 2 parts"
            r7.<init>(r0)
            throw r7
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r3 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_FRAME_AND_TICK_RATE
            int r3 = r3.subFrameRate
            java.lang.String r4 = "subFrameRate"
            java.lang.String r4 = r7.getAttributeValue(r0, r4)
            if (r4 == 0) goto L50
            int r3 = java.lang.Integer.parseInt(r4)
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r4 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_FRAME_AND_TICK_RATE
            int r4 = r4.tickRate
            java.lang.String r5 = "tickRate"
            java.lang.String r7 = r7.getAttributeValue(r0, r5)
            if (r7 == 0) goto L60
            int r4 = java.lang.Integer.parseInt(r7)
        L60:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r7 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate
            float r0 = (float) r1
            float r0 = r0 * r2
            r7.<init>(r0, r3, r4)
            return r7
    }

    private java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> parseHeader(org.xmlpull.v1.XmlPullParser r6, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r7, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r8, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution r9) throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
            r5 = this;
        L0:
            r6.next()
            java.lang.String r0 = "style"
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.isStartTag(r6, r0)
            if (r1 == 0) goto L3e
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.getAttributeValue(r6, r0)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r1 = r5.parseStyleAttributes(r6, r1)
            if (r0 == 0) goto L30
            java.lang.String[] r0 = r5.parseStyleIds(r0)
            int r2 = r0.length
            r3 = 0
        L20:
            if (r3 >= r2) goto L30
            r4 = r0[r3]
            java.lang.Object r4 = r7.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r4 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle) r4
            r1.chain(r4)
            int r3 = r3 + 1
            goto L20
        L30:
            java.lang.String r0 = r1.getId()
            if (r0 == 0) goto L51
            java.lang.String r0 = r1.getId()
            r7.put(r0, r1)
            goto L51
        L3e:
            java.lang.String r0 = "region"
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.isStartTag(r6, r0)
            if (r0 == 0) goto L51
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion r0 = r5.parseRegionAttributes(r6, r9)
            if (r0 == 0) goto L51
            java.lang.String r1 = r0.id
            r8.put(r1, r0)
        L51:
            java.lang.String r0 = "head"
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.isEndTag(r6, r0)
            if (r0 == 0) goto L0
            return r7
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode parseNode(org.xmlpull.v1.XmlPullParser r20, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r21, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r22, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate r23) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = r21
            r3 = r23
            int r4 = r20.getAttributeCount()
            r5 = 0
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r11 = r0.parseStyleAttributes(r1, r5)
            java.lang.String r9 = ""
            r12 = r5
            r13 = r9
            r5 = 0
            r9 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r14 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r16 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L25:
            if (r5 >= r4) goto La8
            java.lang.String r6 = r1.getAttributeName(r5)
            java.lang.String r7 = r1.getAttributeValue(r5)
            int r18 = r6.hashCode()
            switch(r18) {
                case -934795532: goto L5f;
                case 99841: goto L55;
                case 100571: goto L4b;
                case 93616297: goto L41;
                case 109780401: goto L37;
                default: goto L36;
            }
        L36:
            goto L69
        L37:
            java.lang.String r8 = "style"
            boolean r6 = r6.equals(r8)
            if (r6 == 0) goto L69
            r8 = 3
            goto L6a
        L41:
            java.lang.String r8 = "begin"
            boolean r6 = r6.equals(r8)
            if (r6 == 0) goto L69
            r8 = 0
            goto L6a
        L4b:
            java.lang.String r8 = "end"
            boolean r6 = r6.equals(r8)
            if (r6 == 0) goto L69
            r8 = 1
            goto L6a
        L55:
            java.lang.String r8 = "dur"
            boolean r6 = r6.equals(r8)
            if (r6 == 0) goto L69
            r8 = 2
            goto L6a
        L5f:
            java.lang.String r8 = "region"
            boolean r6 = r6.equals(r8)
            if (r6 == 0) goto L69
            r8 = 4
            goto L6a
        L69:
            r8 = -1
        L6a:
            if (r8 == 0) goto L9e
            r6 = 1
            if (r8 == r6) goto L97
            r6 = 2
            if (r8 == r6) goto L90
            r6 = 3
            if (r8 == r6) goto L85
            r6 = 4
            if (r8 == r6) goto L7b
            r6 = r22
            goto La4
        L7b:
            r6 = r22
            boolean r8 = r6.containsKey(r7)
            if (r8 == 0) goto La4
            r13 = r7
            goto La4
        L85:
            r6 = r22
            java.lang.String[] r7 = r0.parseStyleIds(r7)
            int r8 = r7.length
            if (r8 <= 0) goto La4
            r12 = r7
            goto La4
        L90:
            r6 = r22
            long r16 = parseTimeExpression(r7, r3)
            goto La4
        L97:
            r6 = r22
            long r14 = parseTimeExpression(r7, r3)
            goto La4
        L9e:
            r6 = r22
            long r9 = parseTimeExpression(r7, r3)
        La4:
            int r5 = r5 + 1
            goto L25
        La8:
            if (r2 == 0) goto Lc4
            long r3 = r2.startTimeUs
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 == 0) goto Lc9
            int r3 = (r9 > r5 ? 1 : (r9 == r5 ? 0 : -1))
            if (r3 == 0) goto Lbc
            long r3 = r2.startTimeUs
            long r9 = r9 + r3
        Lbc:
            int r3 = (r14 > r5 ? 1 : (r14 == r5 ? 0 : -1))
            if (r3 == 0) goto Lc9
            long r3 = r2.startTimeUs
            long r14 = r14 + r3
            goto Lc9
        Lc4:
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        Lc9:
            r7 = r9
            int r3 = (r14 > r5 ? 1 : (r14 == r5 ? 0 : -1))
            if (r3 != 0) goto Le3
            int r3 = (r16 > r5 ? 1 : (r16 == r5 ? 0 : -1))
            if (r3 == 0) goto Ld7
            long r16 = r7 + r16
            r9 = r16
            goto Le4
        Ld7:
            if (r2 == 0) goto Le3
            long r3 = r2.endTimeUs
            int r3 = (r3 > r5 ? 1 : (r3 == r5 ? 0 : -1))
            if (r3 == 0) goto Le3
            long r2 = r2.endTimeUs
            r9 = r2
            goto Le4
        Le3:
            r9 = r14
        Le4:
            java.lang.String r6 = r20.getName()
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r1 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode.buildNode(r6, r7, r9, r11, r12, r13)
            return r1
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion parseRegionAttributes(org.xmlpull.v1.XmlPullParser r12, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CellResolution r13) {
            r11 = this;
            java.lang.String r0 = "id"
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.getAttributeValue(r12, r0)
            r0 = 0
            if (r2 != 0) goto La
            return r0
        La:
            java.lang.String r1 = "origin"
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.getAttributeValue(r12, r1)
            java.lang.String r3 = "TtmlDecoder"
            if (r1 == 0) goto L108
            java.util.regex.Pattern r4 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.PERCENTAGE_COORDINATES
            java.util.regex.Matcher r4 = r4.matcher(r1)
            boolean r5 = r4.matches()
            if (r5 == 0) goto Lf3
            r5 = 1
            java.lang.String r6 = r4.group(r5)     // Catch: java.lang.NumberFormatException -> Lde
            float r6 = java.lang.Float.parseFloat(r6)     // Catch: java.lang.NumberFormatException -> Lde
            r7 = 1120403456(0x42c80000, float:100.0)
            float r6 = r6 / r7
            r8 = 2
            java.lang.String r4 = r4.group(r8)     // Catch: java.lang.NumberFormatException -> Lde
            float r4 = java.lang.Float.parseFloat(r4)     // Catch: java.lang.NumberFormatException -> Lde
            float r4 = r4 / r7
            java.lang.String r9 = "extent"
            java.lang.String r9 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.getAttributeValue(r12, r9)
            if (r9 == 0) goto Ld8
            java.util.regex.Pattern r10 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.PERCENTAGE_COORDINATES
            java.util.regex.Matcher r9 = r10.matcher(r9)
            boolean r10 = r9.matches()
            if (r10 == 0) goto Lc3
            java.lang.String r10 = r9.group(r5)     // Catch: java.lang.NumberFormatException -> Lae
            float r10 = java.lang.Float.parseFloat(r10)     // Catch: java.lang.NumberFormatException -> Lae
            float r10 = r10 / r7
            java.lang.String r9 = r9.group(r8)     // Catch: java.lang.NumberFormatException -> Lae
            float r0 = java.lang.Float.parseFloat(r9)     // Catch: java.lang.NumberFormatException -> Lae
            float r0 = r0 / r7
            java.lang.String r1 = "displayAlign"
            java.lang.String r12 = com.mbridge.msdk.playercommon.exoplayer2.util.XmlPullParserUtil.getAttributeValue(r12, r1)
            r1 = 0
            if (r12 == 0) goto L99
            java.lang.String r12 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r12)
            r3 = -1
            int r7 = r12.hashCode()
            r9 = -1364013995(0xffffffffaeb2cc55, float:-8.1307995E-11)
            if (r7 == r9) goto L83
            r9 = 92734940(0x58705dc, float:1.2697491E-35)
            if (r7 == r9) goto L79
            goto L8c
        L79:
            java.lang.String r7 = "after"
            boolean r12 = r12.equals(r7)
            if (r12 == 0) goto L8c
            r3 = r5
            goto L8c
        L83:
            java.lang.String r7 = "center"
            boolean r12 = r12.equals(r7)
            if (r12 == 0) goto L8c
            r3 = r1
        L8c:
            if (r3 == 0) goto L93
            if (r3 == r5) goto L91
            goto L99
        L91:
            float r4 = r4 + r0
            goto L9a
        L93:
            r12 = 1073741824(0x40000000, float:2.0)
            float r0 = r0 / r12
            float r4 = r4 + r0
            r8 = r5
            goto L9a
        L99:
            r8 = r1
        L9a:
            r12 = 1065353216(0x3f800000, float:1.0)
            int r13 = r13.rows
            float r13 = (float) r13
            float r9 = r12 / r13
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion r12 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion
            r5 = 0
            r13 = 1
            r1 = r12
            r3 = r6
            r6 = r8
            r7 = r10
            r8 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            return r12
        Lae:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Ignoring region with malformed extent: "
            r12.append(r13)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            android.util.Log.w(r3, r12)
            return r0
        Lc3:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Ignoring region with unsupported extent: "
            r12.append(r13)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            android.util.Log.w(r3, r12)
            return r0
        Ld8:
            java.lang.String r12 = "Ignoring region without an extent"
            android.util.Log.w(r3, r12)
            return r0
        Lde:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Ignoring region with malformed origin: "
            r12.append(r13)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            android.util.Log.w(r3, r12)
            return r0
        Lf3:
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Ignoring region with unsupported origin: "
            r12.append(r13)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            android.util.Log.w(r3, r12)
            return r0
        L108:
            java.lang.String r12 = "Ignoring region without an origin"
            android.util.Log.w(r3, r12)
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle parseStyleAttributes(org.xmlpull.v1.XmlPullParser r12, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13) {
            r11 = this;
            int r0 = r12.getAttributeCount()
            r1 = 0
            r2 = r1
        L6:
            if (r2 >= r0) goto L20c
            java.lang.String r3 = r12.getAttributeValue(r2)
            java.lang.String r4 = r12.getAttributeName(r2)
            int r5 = r4.hashCode()
            r6 = 4
            r7 = -1
            r8 = 2
            r9 = 3
            r10 = 1
            switch(r5) {
                case -1550943582: goto L6f;
                case -1224696685: goto L65;
                case -1065511464: goto L5b;
                case -879295043: goto L50;
                case -734428249: goto L46;
                case 3355: goto L3c;
                case 94842723: goto L32;
                case 365601008: goto L28;
                case 1287124693: goto L1e;
                default: goto L1c;
            }
        L1c:
            goto L79
        L1e:
            java.lang.String r5 = "backgroundColor"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = r10
            goto L7a
        L28:
            java.lang.String r5 = "fontSize"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = r6
            goto L7a
        L32:
            java.lang.String r5 = "color"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = r8
            goto L7a
        L3c:
            java.lang.String r5 = "id"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = r1
            goto L7a
        L46:
            java.lang.String r5 = "fontWeight"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = 5
            goto L7a
        L50:
            java.lang.String r5 = "textDecoration"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = 8
            goto L7a
        L5b:
            java.lang.String r5 = "textAlign"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = 7
            goto L7a
        L65:
            java.lang.String r5 = "fontFamily"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = r9
            goto L7a
        L6f:
            java.lang.String r5 = "fontStyle"
            boolean r4 = r4.equals(r5)
            if (r4 == 0) goto L79
            r4 = 6
            goto L7a
        L79:
            r4 = r7
        L7a:
            java.lang.String r5 = "TtmlDecoder"
            switch(r4) {
                case 0: goto L1f4;
                case 1: goto L1d3;
                case 2: goto L1b2;
                case 3: goto L1a9;
                case 4: goto L18b;
                case 5: goto L17b;
                case 6: goto L16b;
                case 7: goto Le6;
                case 8: goto L81;
                default: goto L7f;
            }
        L7f:
            goto L208
        L81:
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r3)
            int r4 = r3.hashCode()
            switch(r4) {
                case -1461280213: goto Lab;
                case -1026963764: goto La1;
                case 913457136: goto L97;
                case 1679736913: goto L8d;
                default: goto L8c;
            }
        L8c:
            goto Lb4
        L8d:
            java.lang.String r4 = "linethrough"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto Lb4
            r7 = r1
            goto Lb4
        L97:
            java.lang.String r4 = "nolinethrough"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto Lb4
            r7 = r10
            goto Lb4
        La1:
            java.lang.String r4 = "underline"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto Lb4
            r7 = r8
            goto Lb4
        Lab:
            java.lang.String r4 = "nounderline"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto Lb4
            r7 = r9
        Lb4:
            if (r7 == 0) goto Ldc
            if (r7 == r10) goto Ld2
            if (r7 == r8) goto Lc8
            if (r7 == r9) goto Lbe
            goto L208
        Lbe:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setUnderline(r1)
            goto L208
        Lc8:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setUnderline(r10)
            goto L208
        Ld2:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setLinethrough(r1)
            goto L208
        Ldc:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setLinethrough(r10)
            goto L208
        Le6:
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.toLowerInvariant(r3)
            int r4 = r3.hashCode()
            switch(r4) {
                case -1364013995: goto L11a;
                case 100571: goto L110;
                case 3317767: goto L106;
                case 108511772: goto Lfc;
                case 109757538: goto Lf2;
                default: goto Lf1;
            }
        Lf1:
            goto L123
        Lf2:
            java.lang.String r4 = "start"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L123
            r7 = r10
            goto L123
        Lfc:
            java.lang.String r4 = "right"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L123
            r7 = r8
            goto L123
        L106:
            java.lang.String r4 = "left"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L123
            r7 = r1
            goto L123
        L110:
            java.lang.String r4 = "end"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L123
            r7 = r9
            goto L123
        L11a:
            java.lang.String r4 = "center"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L123
            r7 = r6
        L123:
            if (r7 == 0) goto L15f
            if (r7 == r10) goto L153
            if (r7 == r8) goto L147
            if (r7 == r9) goto L13b
            if (r7 == r6) goto L12f
            goto L208
        L12f:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_CENTER
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setTextAlign(r3)
            goto L208
        L13b:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_OPPOSITE
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setTextAlign(r3)
            goto L208
        L147:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_OPPOSITE
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setTextAlign(r3)
            goto L208
        L153:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_NORMAL
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setTextAlign(r3)
            goto L208
        L15f:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_NORMAL
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setTextAlign(r3)
            goto L208
        L16b:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            java.lang.String r4 = "italic"
            boolean r3 = r4.equalsIgnoreCase(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setItalic(r3)
            goto L208
        L17b:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            java.lang.String r4 = "bold"
            boolean r3 = r4.equalsIgnoreCase(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setBold(r3)
            goto L208
        L18b:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L194
            parseFontSize(r3, r13)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L194
            goto L208
        L194:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "Failed parsing fontSize value: "
            r4.append(r6)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.w(r5, r3)
            goto L208
        L1a9:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setFontFamily(r3)
            goto L208
        L1b2:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser.parseTtmlColor(r3)     // Catch: java.lang.IllegalArgumentException -> L1be
            r13.setFontColor(r4)     // Catch: java.lang.IllegalArgumentException -> L1be
            goto L208
        L1be:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "Failed parsing color value: "
            r4.append(r6)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.w(r5, r3)
            goto L208
        L1d3:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.ColorParser.parseTtmlColor(r3)     // Catch: java.lang.IllegalArgumentException -> L1df
            r13.setBackgroundColor(r4)     // Catch: java.lang.IllegalArgumentException -> L1df
            goto L208
        L1df:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r6 = "Failed parsing background value: "
            r4.append(r6)
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            android.util.Log.w(r5, r3)
            goto L208
        L1f4:
            java.lang.String r4 = r12.getName()
            java.lang.String r5 = "style"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto L208
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r11.createIfNull(r13)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r13 = r13.setId(r3)
        L208:
            int r2 = r2 + 1
            goto L6
        L20c:
            return r13
    }

    private java.lang.String[] parseStyleIds(java.lang.String r2) {
            r1 = this;
            java.lang.String r2 = r2.trim()
            boolean r0 = r2.isEmpty()
            if (r0 == 0) goto Le
            r2 = 0
            java.lang.String[] r2 = new java.lang.String[r2]
            goto L14
        Le:
            java.lang.String r0 = "\\s+"
            java.lang.String[] r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.split(r2, r0)
        L14:
            return r2
    }

    private static long parseTimeExpression(java.lang.String r14, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.FrameAndTickRate r15) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.CLOCK_TIME
            java.util.regex.Matcher r0 = r0.matcher(r14)
            boolean r1 = r0.matches()
            r2 = 4696837146684686336(0x412e848000000000, double:1000000.0)
            r4 = 5
            r5 = 4
            r6 = 3
            r7 = 2
            r8 = 1
            if (r1 == 0) goto L73
            java.lang.String r14 = r0.group(r8)
            long r8 = java.lang.Long.parseLong(r14)
            r10 = 3600(0xe10, double:1.7786E-320)
            long r8 = r8 * r10
            double r8 = (double) r8
            java.lang.String r14 = r0.group(r7)
            long r10 = java.lang.Long.parseLong(r14)
            r12 = 60
            long r10 = r10 * r12
            double r10 = (double) r10
            double r8 = r8 + r10
            java.lang.String r14 = r0.group(r6)
            long r6 = java.lang.Long.parseLong(r14)
            double r6 = (double) r6
            double r8 = r8 + r6
            java.lang.String r14 = r0.group(r5)
            r5 = 0
            if (r14 == 0) goto L46
            double r10 = java.lang.Double.parseDouble(r14)
            goto L47
        L46:
            r10 = r5
        L47:
            double r8 = r8 + r10
            java.lang.String r14 = r0.group(r4)
            if (r14 == 0) goto L58
            long r10 = java.lang.Long.parseLong(r14)
            float r14 = (float) r10
            float r1 = r15.effectiveFrameRate
            float r14 = r14 / r1
            double r10 = (double) r14
            goto L59
        L58:
            r10 = r5
        L59:
            double r8 = r8 + r10
            r14 = 6
            java.lang.String r14 = r0.group(r14)
            if (r14 == 0) goto L6f
            long r0 = java.lang.Long.parseLong(r14)
            double r0 = (double) r0
            int r14 = r15.subFrameRate
            double r4 = (double) r14
            double r0 = r0 / r4
            float r14 = r15.effectiveFrameRate
            double r14 = (double) r14
            double r5 = r0 / r14
        L6f:
            double r8 = r8 + r5
            double r8 = r8 * r2
            long r14 = (long) r8
            return r14
        L73:
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.OFFSET_TIME
            java.util.regex.Matcher r0 = r0.matcher(r14)
            boolean r1 = r0.matches()
            if (r1 == 0) goto L10b
            java.lang.String r14 = r0.group(r8)
            double r9 = java.lang.Double.parseDouble(r14)
            java.lang.String r14 = r0.group(r7)
            r0 = -1
            int r1 = r14.hashCode()
            r11 = 102(0x66, float:1.43E-43)
            if (r1 == r11) goto Lda
            r11 = 104(0x68, float:1.46E-43)
            if (r1 == r11) goto Ld0
            r11 = 109(0x6d, float:1.53E-43)
            if (r1 == r11) goto Lc6
            r11 = 3494(0xda6, float:4.896E-42)
            if (r1 == r11) goto Lbc
            r11 = 115(0x73, float:1.61E-43)
            if (r1 == r11) goto Lb3
            r7 = 116(0x74, float:1.63E-43)
            if (r1 == r7) goto La9
            goto Le4
        La9:
            java.lang.String r1 = "t"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            r7 = r4
            goto Le5
        Lb3:
            java.lang.String r1 = "s"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            goto Le5
        Lbc:
            java.lang.String r1 = "ms"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            r7 = r6
            goto Le5
        Lc6:
            java.lang.String r1 = "m"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            r7 = r8
            goto Le5
        Ld0:
            java.lang.String r1 = "h"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            r7 = 0
            goto Le5
        Lda:
            java.lang.String r1 = "f"
            boolean r14 = r14.equals(r1)
            if (r14 == 0) goto Le4
            r7 = r5
            goto Le5
        Le4:
            r7 = r0
        Le5:
            if (r7 == 0) goto L102
            if (r7 == r8) goto Lff
            if (r7 == r6) goto Lf8
            if (r7 == r5) goto Lf4
            if (r7 == r4) goto Lf0
            goto L108
        Lf0:
            int r14 = r15.tickRate
            double r14 = (double) r14
            goto Lfd
        Lf4:
            float r14 = r15.effectiveFrameRate
            double r14 = (double) r14
            goto Lfd
        Lf8:
            r14 = 4652007308841189376(0x408f400000000000, double:1000.0)
        Lfd:
            double r9 = r9 / r14
            goto L108
        Lff:
            r14 = 4633641066610819072(0x404e000000000000, double:60.0)
            goto L107
        L102:
            r14 = 4660134898793709568(0x40ac200000000000, double:3600.0)
        L107:
            double r9 = r9 * r14
        L108:
            double r9 = r9 * r2
            long r14 = (long) r9
            return r14
        L10b:
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r15 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Malformed time expression: "
            r0.append(r1)
            r0.append(r14)
            java.lang.String r14 = r0.toString()
            r15.<init>(r14)
            throw r15
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle decode(byte[] r1, int r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlSubtitle r1 = r0.decode(r1, r2, r3)
            return r1
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlSubtitle decode(byte[] r12, int r13, boolean r14) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r11 = this;
            org.xmlpull.v1.XmlPullParserFactory r14 = r11.xmlParserFactory     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            org.xmlpull.v1.XmlPullParser r14 = r14.newPullParser()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r0.<init>()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r1.<init>()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r2 = ""
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r4 = 0
            r3.<init>(r4)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r1.put(r2, r3)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.io.ByteArrayInputStream r2 = new java.io.ByteArrayInputStream     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r3 = 0
            r2.<init>(r12, r3, r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r14.setInput(r2, r4)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.util.ArrayDeque r12 = new java.util.ArrayDeque     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r12.<init>()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            int r13 = r14.getEventType()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r2 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_FRAME_AND_TICK_RATE     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution r5 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_CELL_RESOLUTION     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
        L31:
            r6 = 1
            if (r13 == r6) goto Ld3
            java.lang.Object r6 = r12.peek()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r6 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode) r6     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r7 = 3
            r8 = 2
            if (r3 != 0) goto Lc1
            java.lang.String r9 = r14.getName()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r10 = "tt"
            if (r13 != r8) goto L97
            boolean r13 = r10.equals(r9)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            if (r13 == 0) goto L56
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$FrameAndTickRate r2 = r11.parseFrameAndTickRates(r14)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution r13 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder.DEFAULT_CELL_RESOLUTION     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlDecoder$CellResolution r5 = r11.parseCellResolution(r14, r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
        L56:
            boolean r13 = isSupportedTag(r9)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r7 = "TtmlDecoder"
            if (r13 != 0) goto L77
            java.lang.StringBuilder r13 = new java.lang.StringBuilder     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r13.<init>()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r6 = "Ignoring unsupported tag: "
            r13.append(r6)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r6 = r14.getName()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r13.append(r6)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.String r13 = r13.toString()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            android.util.Log.i(r7, r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lc3
        L77:
            java.lang.String r13 = "head"
            boolean r13 = r13.equals(r9)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            if (r13 == 0) goto L83
            r11.parseHeader(r14, r0, r1, r5)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lca
        L83:
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r13 = r11.parseNode(r14, r6, r1, r2)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L90 java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r12.push(r13)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L90 java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            if (r6 == 0) goto Lca
            r6.addChild(r13)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException -> L90 java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lca
        L90:
            r13 = move-exception
            java.lang.String r6 = "Suppressing parser error"
            android.util.Log.w(r7, r6, r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lc3
        L97:
            r8 = 4
            if (r13 != r8) goto La6
            java.lang.String r13 = r14.getText()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r13 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode.buildTextNode(r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r6.addChild(r13)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lca
        La6:
            if (r13 != r7) goto Lca
            java.lang.String r13 = r14.getName()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            boolean r13 = r13.equals(r10)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            if (r13 == 0) goto Lbd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlSubtitle r4 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlSubtitle     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            java.lang.Object r13 = r12.peek()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r13 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode) r13     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            r4.<init>(r13, r0, r1)     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
        Lbd:
            r12.pop()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto Lca
        Lc1:
            if (r13 != r8) goto Lc6
        Lc3:
            int r3 = r3 + 1
            goto Lca
        Lc6:
            if (r13 != r7) goto Lca
            int r3 = r3 + (-1)
        Lca:
            r14.next()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            int r13 = r14.getEventType()     // Catch: java.io.IOException -> Ld4 org.xmlpull.v1.XmlPullParserException -> Ldd
            goto L31
        Ld3:
            return r4
        Ld4:
            r12 = move-exception
            java.lang.IllegalStateException r13 = new java.lang.IllegalStateException
            java.lang.String r14 = "Unexpected error when reading input."
            r13.<init>(r14, r12)
            throw r13
        Ldd:
            r12 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException r13 = new com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException
            java.lang.String r14 = "Unable to decode source"
            r13.<init>(r14, r12)
            throw r13
    }
}
