package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

final class TtmlNode {
    public static final java.lang.String ANONYMOUS_REGION_ID = "";
    public static final java.lang.String ATTR_ID = "id";
    public static final java.lang.String ATTR_TTS_BACKGROUND_COLOR = "backgroundColor";
    public static final java.lang.String ATTR_TTS_COLOR = "color";
    public static final java.lang.String ATTR_TTS_DISPLAY_ALIGN = "displayAlign";
    public static final java.lang.String ATTR_TTS_EXTENT = "extent";
    public static final java.lang.String ATTR_TTS_FONT_FAMILY = "fontFamily";
    public static final java.lang.String ATTR_TTS_FONT_SIZE = "fontSize";
    public static final java.lang.String ATTR_TTS_FONT_STYLE = "fontStyle";
    public static final java.lang.String ATTR_TTS_FONT_WEIGHT = "fontWeight";
    public static final java.lang.String ATTR_TTS_ORIGIN = "origin";
    public static final java.lang.String ATTR_TTS_TEXT_ALIGN = "textAlign";
    public static final java.lang.String ATTR_TTS_TEXT_DECORATION = "textDecoration";
    public static final java.lang.String BOLD = "bold";
    public static final java.lang.String CENTER = "center";
    public static final java.lang.String END = "end";
    public static final java.lang.String ITALIC = "italic";
    public static final java.lang.String LEFT = "left";
    public static final java.lang.String LINETHROUGH = "linethrough";
    public static final java.lang.String NO_LINETHROUGH = "nolinethrough";
    public static final java.lang.String NO_UNDERLINE = "nounderline";
    public static final java.lang.String RIGHT = "right";
    public static final java.lang.String START = "start";
    public static final java.lang.String TAG_BODY = "body";
    public static final java.lang.String TAG_BR = "br";
    public static final java.lang.String TAG_DIV = "div";
    public static final java.lang.String TAG_HEAD = "head";
    public static final java.lang.String TAG_LAYOUT = "layout";
    public static final java.lang.String TAG_METADATA = "metadata";
    public static final java.lang.String TAG_P = "p";
    public static final java.lang.String TAG_REGION = "region";
    public static final java.lang.String TAG_SMPTE_DATA = "smpte:data";
    public static final java.lang.String TAG_SMPTE_IMAGE = "smpte:image";
    public static final java.lang.String TAG_SMPTE_INFORMATION = "smpte:information";
    public static final java.lang.String TAG_SPAN = "span";
    public static final java.lang.String TAG_STYLE = "style";
    public static final java.lang.String TAG_STYLING = "styling";
    public static final java.lang.String TAG_TT = "tt";
    public static final java.lang.String UNDERLINE = "underline";
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> children;
    public final long endTimeUs;
    public final boolean isTextNode;
    private final java.util.HashMap<java.lang.String, java.lang.Integer> nodeEndsByRegion;
    private final java.util.HashMap<java.lang.String, java.lang.Integer> nodeStartsByRegion;
    public final java.lang.String regionId;
    public final long startTimeUs;
    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle style;
    private final java.lang.String[] styleIds;
    public final java.lang.String tag;
    public final java.lang.String text;

    private TtmlNode(java.lang.String r1, java.lang.String r2, long r3, long r5, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r7, java.lang.String[] r8, java.lang.String r9) {
            r0 = this;
            r0.<init>()
            r0.tag = r1
            r0.text = r2
            r0.style = r7
            r0.styleIds = r8
            if (r2 == 0) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = 0
        L10:
            r0.isTextNode = r1
            r0.startTimeUs = r3
            r0.endTimeUs = r5
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r9)
            java.lang.String r1 = (java.lang.String) r1
            r0.regionId = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.nodeStartsByRegion = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.nodeEndsByRegion = r1
            return
    }

    private void applyStyleToOutput(java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r3, android.text.SpannableStringBuilder r4, int r5, int r6) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r0 = r2.style
            java.lang.String[] r1 = r2.styleIds
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r3 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRenderUtil.resolveStyle(r0, r1, r3)
            if (r3 == 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRenderUtil.applyStylesToSpan(r4, r5, r6, r3)
        Ld:
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode buildNode(java.lang.String r11, long r12, long r14, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle r16, java.lang.String[] r17, java.lang.String r18) {
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r10 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode
            r2 = 0
            r0 = r10
            r1 = r11
            r3 = r12
            r5 = r14
            r7 = r16
            r8 = r17
            r9 = r18
            r0.<init>(r1, r2, r3, r5, r7, r8, r9)
            return r10
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode buildTextNode(java.lang.String r11) {
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r10 = new com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRenderUtil.applyTextElementSpacePolicy(r11)
            r1 = 0
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 0
            r8 = 0
            java.lang.String r9 = ""
            r0 = r10
            r0.<init>(r1, r2, r3, r5, r7, r8, r9)
            return r10
    }

    private android.text.SpannableStringBuilder cleanUpText(android.text.SpannableStringBuilder r8) {
            r7 = this;
            int r0 = r8.length()
            r1 = 0
            r2 = r1
        L6:
            r3 = 32
            if (r2 >= r0) goto L2e
            char r4 = r8.charAt(r2)
            if (r4 != r3) goto L2b
            int r4 = r2 + 1
            r5 = r4
        L13:
            int r6 = r8.length()
            if (r5 >= r6) goto L22
            char r6 = r8.charAt(r5)
            if (r6 != r3) goto L22
            int r5 = r5 + 1
            goto L13
        L22:
            int r5 = r5 - r4
            if (r5 <= 0) goto L2b
            int r3 = r2 + r5
            r8.delete(r2, r3)
            int r0 = r0 - r5
        L2b:
            int r2 = r2 + 1
            goto L6
        L2e:
            if (r0 <= 0) goto L3c
            char r2 = r8.charAt(r1)
            if (r2 != r3) goto L3c
            r2 = 1
            r8.delete(r1, r2)
            int r0 = r0 + (-1)
        L3c:
            r2 = r1
        L3d:
            int r4 = r0 + (-1)
            r5 = 10
            if (r2 >= r4) goto L5b
            char r4 = r8.charAt(r2)
            if (r4 != r5) goto L58
            int r4 = r2 + 1
            char r5 = r8.charAt(r4)
            if (r5 != r3) goto L58
            int r5 = r2 + 2
            r8.delete(r4, r5)
            int r0 = r0 + (-1)
        L58:
            int r2 = r2 + 1
            goto L3d
        L5b:
            if (r0 <= 0) goto L68
            char r2 = r8.charAt(r4)
            if (r2 != r3) goto L68
            r8.delete(r4, r0)
            int r0 = r0 + (-1)
        L68:
            int r2 = r0 + (-1)
            if (r1 >= r2) goto L82
            char r2 = r8.charAt(r1)
            if (r2 != r3) goto L7f
            int r2 = r1 + 1
            char r4 = r8.charAt(r2)
            if (r4 != r5) goto L7f
            r8.delete(r1, r2)
            int r0 = r0 + (-1)
        L7f:
            int r1 = r1 + 1
            goto L68
        L82:
            if (r0 <= 0) goto L8d
            char r1 = r8.charAt(r2)
            if (r1 != r5) goto L8d
            r8.delete(r2, r0)
        L8d:
            return r8
    }

    private void getEventTimes(java.util.TreeSet<java.lang.Long> r7, boolean r8) {
            r6 = this;
            java.lang.String r0 = r6.tag
            java.lang.String r1 = "p"
            boolean r0 = r1.equals(r0)
            if (r8 != 0) goto Lc
            if (r0 == 0) goto L2b
        Lc:
            long r1 = r6.startTimeUs
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r5 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r5 == 0) goto L1e
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r7.add(r1)
        L1e:
            long r1 = r6.endTimeUs
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 == 0) goto L2b
            java.lang.Long r1 = java.lang.Long.valueOf(r1)
            r7.add(r1)
        L2b:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r1 = r6.children
            if (r1 != 0) goto L30
            return
        L30:
            r1 = 0
            r2 = r1
        L32:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r3 = r6.children
            int r3 = r3.size()
            if (r2 >= r3) goto L50
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r3 = r6.children
            java.lang.Object r3 = r3.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r3 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode) r3
            if (r8 != 0) goto L49
            if (r0 == 0) goto L47
            goto L49
        L47:
            r4 = r1
            goto L4a
        L49:
            r4 = 1
        L4a:
            r3.getEventTimes(r7, r4)
            int r2 = r2 + 1
            goto L32
        L50:
            return
    }

    private static android.text.SpannableStringBuilder getRegionOutput(java.lang.String r1, java.util.Map<java.lang.String, android.text.SpannableStringBuilder> r2) {
            boolean r0 = r2.containsKey(r1)
            if (r0 != 0) goto Le
            android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
            r0.<init>()
            r2.put(r1, r0)
        Le:
            java.lang.Object r1 = r2.get(r1)
            android.text.SpannableStringBuilder r1 = (android.text.SpannableStringBuilder) r1
            return r1
    }

    private void traverseForStyle(long r6, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r8, java.util.Map<java.lang.String, android.text.SpannableStringBuilder> r9) {
            r5 = this;
            boolean r0 = r5.isActive(r6)
            if (r0 != 0) goto L7
            return
        L7:
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r5.nodeEndsByRegion
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L11:
            boolean r1 = r0.hasNext()
            r2 = 0
            if (r1 == 0) goto L4e
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.lang.Object r3 = r1.getKey()
            java.lang.String r3 = (java.lang.String) r3
            java.util.HashMap<java.lang.String, java.lang.Integer> r4 = r5.nodeStartsByRegion
            boolean r4 = r4.containsKey(r3)
            if (r4 == 0) goto L38
            java.util.HashMap<java.lang.String, java.lang.Integer> r2 = r5.nodeStartsByRegion
            java.lang.Object r2 = r2.get(r3)
            java.lang.Integer r2 = (java.lang.Integer) r2
            int r2 = r2.intValue()
        L38:
            java.lang.Object r1 = r1.getValue()
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            if (r2 == r1) goto L11
            java.lang.Object r3 = r9.get(r3)
            android.text.SpannableStringBuilder r3 = (android.text.SpannableStringBuilder) r3
            r5.applyStyleToOutput(r8, r3, r2, r1)
            goto L11
        L4e:
            int r0 = r5.getChildCount()
            if (r2 >= r0) goto L5e
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r0 = r5.getChild(r2)
            r0.traverseForStyle(r6, r8, r9)
            int r2 = r2 + 1
            goto L4e
        L5e:
            return
    }

    private void traverseForText(long r10, boolean r12, java.lang.String r13, java.util.Map<java.lang.String, android.text.SpannableStringBuilder> r14) {
            r9 = this;
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r9.nodeStartsByRegion
            r0.clear()
            java.util.HashMap<java.lang.String, java.lang.Integer> r0 = r9.nodeEndsByRegion
            r0.clear()
            java.lang.String r0 = r9.tag
            java.lang.String r1 = "metadata"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L15
            return
        L15:
            java.lang.String r0 = r9.regionId
            java.lang.String r1 = ""
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            goto L22
        L20:
            java.lang.String r13 = r9.regionId
        L22:
            boolean r0 = r9.isTextNode
            if (r0 == 0) goto L33
            if (r12 == 0) goto L33
            android.text.SpannableStringBuilder r10 = getRegionOutput(r13, r14)
            java.lang.String r11 = r9.text
            r10.append(r11)
            goto Ld7
        L33:
            java.lang.String r0 = r9.tag
            java.lang.String r1 = "br"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L4a
            if (r12 == 0) goto L4a
            android.text.SpannableStringBuilder r10 = getRegionOutput(r13, r14)
            r11 = 10
            r10.append(r11)
            goto Ld7
        L4a:
            boolean r0 = r9.isActive(r10)
            if (r0 == 0) goto Ld7
            java.util.Set r0 = r14.entrySet()
            java.util.Iterator r0 = r0.iterator()
        L58:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L7c
            java.lang.Object r1 = r0.next()
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1
            java.util.HashMap<java.lang.String, java.lang.Integer> r2 = r9.nodeStartsByRegion
            java.lang.Object r3 = r1.getKey()
            java.lang.Object r1 = r1.getValue()
            android.text.SpannableStringBuilder r1 = (android.text.SpannableStringBuilder) r1
            int r1 = r1.length()
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r2.put(r3, r1)
            goto L58
        L7c:
            java.lang.String r0 = r9.tag
            java.lang.String r1 = "p"
            boolean r6 = r1.equals(r0)
            r7 = 0
            r8 = r7
        L86:
            int r0 = r9.getChildCount()
            if (r8 >= r0) goto La2
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r0 = r9.getChild(r8)
            if (r12 != 0) goto L97
            if (r6 == 0) goto L95
            goto L97
        L95:
            r3 = r7
            goto L99
        L97:
            r1 = 1
            r3 = r1
        L99:
            r1 = r10
            r4 = r13
            r5 = r14
            r0.traverseForText(r1, r3, r4, r5)
            int r8 = r8 + 1
            goto L86
        La2:
            if (r6 == 0) goto Lab
            android.text.SpannableStringBuilder r10 = getRegionOutput(r13, r14)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRenderUtil.endParagraph(r10)
        Lab:
            java.util.Set r10 = r14.entrySet()
            java.util.Iterator r10 = r10.iterator()
        Lb3:
            boolean r11 = r10.hasNext()
            if (r11 == 0) goto Ld7
            java.lang.Object r11 = r10.next()
            java.util.Map$Entry r11 = (java.util.Map.Entry) r11
            java.util.HashMap<java.lang.String, java.lang.Integer> r12 = r9.nodeEndsByRegion
            java.lang.Object r13 = r11.getKey()
            java.lang.Object r11 = r11.getValue()
            android.text.SpannableStringBuilder r11 = (android.text.SpannableStringBuilder) r11
            int r11 = r11.length()
            java.lang.Integer r11 = java.lang.Integer.valueOf(r11)
            r12.put(r13, r11)
            goto Lb3
        Ld7:
            return
    }

    public final void addChild(com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r0 = r1.children
            if (r0 != 0) goto Lb
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1.children = r0
        Lb:
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r0 = r1.children
            r0.add(r2)
            return
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode getChild(int r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r0 = r1.children
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode) r2
            return r2
        Lb:
            java.lang.IndexOutOfBoundsException r2 = new java.lang.IndexOutOfBoundsException
            r2.<init>()
            throw r2
    }

    public final int getChildCount() {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlNode> r0 = r1.children
            if (r0 != 0) goto L6
            r0 = 0
            goto La
        L6:
            int r0 = r0.size()
        La:
            return r0
    }

    public final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getCues(long r19, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlStyle> r21, java.util.Map<java.lang.String, com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion> r22) {
            r18 = this;
            r6 = r18
            java.util.TreeMap r7 = new java.util.TreeMap
            r7.<init>()
            java.lang.String r4 = r6.regionId
            r3 = 0
            r0 = r18
            r1 = r19
            r5 = r7
            r0.traverseForText(r1, r3, r4, r5)
            r0 = r19
            r2 = r21
            r6.traverseForStyle(r0, r2, r7)
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Set r1 = r7.entrySet()
            java.util.Iterator r1 = r1.iterator()
        L26:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L67
            java.lang.Object r2 = r1.next()
            java.util.Map$Entry r2 = (java.util.Map.Entry) r2
            java.lang.Object r3 = r2.getKey()
            r4 = r22
            java.lang.Object r3 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion r3 = (com.mbridge.msdk.playercommon.exoplayer2.text.ttml.TtmlRegion) r3
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r5 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
            java.lang.Object r2 = r2.getValue()
            android.text.SpannableStringBuilder r2 = (android.text.SpannableStringBuilder) r2
            android.text.SpannableStringBuilder r8 = r6.cleanUpText(r2)
            r9 = 0
            float r10 = r3.line
            int r11 = r3.lineType
            int r12 = r3.lineAnchor
            float r13 = r3.position
            r14 = -2147483648(0xffffffff80000000, float:-0.0)
            float r15 = r3.width
            int r2 = r3.textSizeType
            float r3 = r3.textSize
            r7 = r5
            r16 = r2
            r17 = r3
            r7.<init>(r8, r9, r10, r11, r12, r13, r14, r15, r16, r17)
            r0.add(r5)
            goto L26
        L67:
            return r0
    }

    public final long[] getEventTimesUs() {
            r6 = this;
            java.util.TreeSet r0 = new java.util.TreeSet
            r0.<init>()
            r1 = 0
            r6.getEventTimes(r0, r1)
            int r2 = r0.size()
            long[] r2 = new long[r2]
            java.util.Iterator r0 = r0.iterator()
        L13:
            boolean r3 = r0.hasNext()
            if (r3 == 0) goto L29
            java.lang.Object r3 = r0.next()
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            int r5 = r1 + 1
            r2[r1] = r3
            r1 = r5
            goto L13
        L29:
            return r2
    }

    public final java.lang.String[] getStyleIds() {
            r1 = this;
            java.lang.String[] r0 = r1.styleIds
            return r0
    }

    public final boolean isActive(long r5) {
            r4 = this;
            long r0 = r4.startTimeUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L11
            long r0 = r4.endTimeUs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L35
        L11:
            long r0 = r4.startTimeUs
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 > 0) goto L1d
            long r0 = r4.endTimeUs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L35
        L1d:
            long r0 = r4.startTimeUs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L29
            long r0 = r4.endTimeUs
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 < 0) goto L35
        L29:
            long r0 = r4.startTimeUs
            int r0 = (r0 > r5 ? 1 : (r0 == r5 ? 0 : -1))
            if (r0 > 0) goto L37
            long r0 = r4.endTimeUs
            int r5 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r5 >= 0) goto L37
        L35:
            r5 = 1
            goto L38
        L37:
            r5 = 0
        L38:
            return r5
    }
}
