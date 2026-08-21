package com.mbridge.msdk.playercommon.exoplayer2.text.cea;

public final class Cea708Decoder extends com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder {
    private static final int CC_VALID_FLAG = 4;
    private static final int CHARACTER_BIG_CARONS = 42;
    private static final int CHARACTER_BIG_OE = 44;
    private static final int CHARACTER_BOLD_BULLET = 53;
    private static final int CHARACTER_CLOSE_DOUBLE_QUOTE = 52;
    private static final int CHARACTER_CLOSE_SINGLE_QUOTE = 50;
    private static final int CHARACTER_DIAERESIS_Y = 63;
    private static final int CHARACTER_ELLIPSIS = 37;
    private static final int CHARACTER_FIVE_EIGHTHS = 120;
    private static final int CHARACTER_HORIZONTAL_BORDER = 125;
    private static final int CHARACTER_LOWER_LEFT_BORDER = 124;
    private static final int CHARACTER_LOWER_RIGHT_BORDER = 126;
    private static final int CHARACTER_MN = 127;
    private static final int CHARACTER_NBTSP = 33;
    private static final int CHARACTER_ONE_EIGHTH = 118;
    private static final int CHARACTER_OPEN_DOUBLE_QUOTE = 51;
    private static final int CHARACTER_OPEN_SINGLE_QUOTE = 49;
    private static final int CHARACTER_SEVEN_EIGHTHS = 121;
    private static final int CHARACTER_SM = 61;
    private static final int CHARACTER_SMALL_CARONS = 58;
    private static final int CHARACTER_SMALL_OE = 60;
    private static final int CHARACTER_SOLID_BLOCK = 48;
    private static final int CHARACTER_THREE_EIGHTHS = 119;
    private static final int CHARACTER_TM = 57;
    private static final int CHARACTER_TSP = 32;
    private static final int CHARACTER_UPPER_LEFT_BORDER = 127;
    private static final int CHARACTER_UPPER_RIGHT_BORDER = 123;
    private static final int CHARACTER_VERTICAL_BORDER = 122;
    private static final int COMMAND_BS = 8;
    private static final int COMMAND_CLW = 136;
    private static final int COMMAND_CR = 13;
    private static final int COMMAND_CW0 = 128;
    private static final int COMMAND_CW1 = 129;
    private static final int COMMAND_CW2 = 130;
    private static final int COMMAND_CW3 = 131;
    private static final int COMMAND_CW4 = 132;
    private static final int COMMAND_CW5 = 133;
    private static final int COMMAND_CW6 = 134;
    private static final int COMMAND_CW7 = 135;
    private static final int COMMAND_DF0 = 152;
    private static final int COMMAND_DF1 = 153;
    private static final int COMMAND_DF2 = 154;
    private static final int COMMAND_DF3 = 155;
    private static final int COMMAND_DF4 = 156;
    private static final int COMMAND_DF5 = 157;
    private static final int COMMAND_DF6 = 158;
    private static final int COMMAND_DF7 = 159;
    private static final int COMMAND_DLC = 142;
    private static final int COMMAND_DLW = 140;
    private static final int COMMAND_DLY = 141;
    private static final int COMMAND_DSW = 137;
    private static final int COMMAND_ETX = 3;
    private static final int COMMAND_EXT1 = 16;
    private static final int COMMAND_EXT1_END = 23;
    private static final int COMMAND_EXT1_START = 17;
    private static final int COMMAND_FF = 12;
    private static final int COMMAND_HCR = 14;
    private static final int COMMAND_HDW = 138;
    private static final int COMMAND_NUL = 0;
    private static final int COMMAND_P16_END = 31;
    private static final int COMMAND_P16_START = 24;
    private static final int COMMAND_RST = 143;
    private static final int COMMAND_SPA = 144;
    private static final int COMMAND_SPC = 145;
    private static final int COMMAND_SPL = 146;
    private static final int COMMAND_SWA = 151;
    private static final int COMMAND_TGW = 139;
    private static final int DTVCC_PACKET_DATA = 2;
    private static final int DTVCC_PACKET_START = 3;
    private static final int GROUP_C0_END = 31;
    private static final int GROUP_C1_END = 159;
    private static final int GROUP_C2_END = 31;
    private static final int GROUP_C3_END = 159;
    private static final int GROUP_G0_END = 127;
    private static final int GROUP_G1_END = 255;
    private static final int GROUP_G2_END = 127;
    private static final int GROUP_G3_END = 255;
    private static final int NUM_WINDOWS = 8;
    private static final java.lang.String TAG = "Cea708Decoder";
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray ccData;
    private final com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder[] cueBuilders;
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> cues;
    private com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder currentCueBuilder;
    private com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.DtvCcPacket currentDtvCcPacket;
    private int currentWindow;
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> lastCues;
    private final int selectedServiceNumber;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray serviceBlockPacket;

    private static final class CueBuilder {
        private static final int BORDER_AND_EDGE_TYPE_NONE = 0;
        private static final int BORDER_AND_EDGE_TYPE_UNIFORM = 3;
        public static final int COLOR_SOLID_BLACK = 0;
        public static final int COLOR_SOLID_WHITE = 0;
        public static final int COLOR_TRANSPARENT = 0;
        private static final int DEFAULT_PRIORITY = 4;
        private static final int DIRECTION_BOTTOM_TO_TOP = 3;
        private static final int DIRECTION_LEFT_TO_RIGHT = 0;
        private static final int DIRECTION_RIGHT_TO_LEFT = 1;
        private static final int DIRECTION_TOP_TO_BOTTOM = 2;
        private static final int HORIZONTAL_SIZE = 209;
        private static final int JUSTIFICATION_CENTER = 2;
        private static final int JUSTIFICATION_FULL = 3;
        private static final int JUSTIFICATION_LEFT = 0;
        private static final int JUSTIFICATION_RIGHT = 1;
        private static final int MAXIMUM_ROW_COUNT = 15;
        private static final int PEN_FONT_STYLE_DEFAULT = 0;
        private static final int PEN_FONT_STYLE_MONOSPACED_WITHOUT_SERIFS = 3;
        private static final int PEN_FONT_STYLE_MONOSPACED_WITH_SERIFS = 1;
        private static final int PEN_FONT_STYLE_PROPORTIONALLY_SPACED_WITHOUT_SERIFS = 4;
        private static final int PEN_FONT_STYLE_PROPORTIONALLY_SPACED_WITH_SERIFS = 2;
        private static final int PEN_OFFSET_NORMAL = 1;
        private static final int PEN_SIZE_STANDARD = 1;
        private static final int[] PEN_STYLE_BACKGROUND = null;
        private static final int[] PEN_STYLE_EDGE_TYPE = null;
        private static final int[] PEN_STYLE_FONT_STYLE = null;
        private static final int RELATIVE_CUE_SIZE = 99;
        private static final int VERTICAL_SIZE = 74;
        private static final int[] WINDOW_STYLE_FILL = null;
        private static final int[] WINDOW_STYLE_JUSTIFICATION = null;
        private static final int[] WINDOW_STYLE_PRINT_DIRECTION = null;
        private static final int[] WINDOW_STYLE_SCROLL_DIRECTION = null;
        private static final boolean[] WINDOW_STYLE_WORD_WRAP = null;
        private int anchorId;
        private int backgroundColor;
        private int backgroundColorStartPosition;
        private final android.text.SpannableStringBuilder captionStringBuilder;
        private boolean defined;
        private int foregroundColor;
        private int foregroundColorStartPosition;
        private int horizontalAnchor;
        private int italicsStartPosition;
        private int justification;
        private int penStyleId;
        private int priority;
        private boolean relativePositioning;
        private final java.util.List<android.text.SpannableString> rolledUpCaptions;
        private int row;
        private int rowCount;
        private boolean rowLock;
        private int underlineStartPosition;
        private int verticalAnchor;
        private boolean visible;
        private int windowFillColor;
        private int windowStyleId;

        static {
                r0 = 2
                r1 = 0
                int r2 = getArgbColorFromCeaColor(r0, r0, r0, r1)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_WHITE = r2
                int r2 = getArgbColorFromCeaColor(r1, r1, r1, r1)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK = r2
                r2 = 3
                int r3 = getArgbColorFromCeaColor(r1, r1, r1, r2)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_TRANSPARENT = r3
                r4 = 7
                int[] r5 = new int[r4]
                r5 = {x006c: FILL_ARRAY_DATA , data: [0, 0, 0, 0, 0, 2, 0} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_JUSTIFICATION = r5
                int[] r5 = new int[r4]
                r5 = {x007e: FILL_ARRAY_DATA , data: [0, 0, 0, 0, 0, 0, 2} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_PRINT_DIRECTION = r5
                int[] r5 = new int[r4]
                r5 = {x0090: FILL_ARRAY_DATA , data: [3, 3, 3, 3, 3, 3, 1} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_SCROLL_DIRECTION = r5
                boolean[] r5 = new boolean[r4]
                r5 = {x00a2: FILL_ARRAY_DATA , data: [0, 0, 0, 1, 1, 1, 0} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_WORD_WRAP = r5
                int[] r5 = new int[r4]
                int r6 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK
                r5[r1] = r6
                r7 = 1
                r5[r7] = r3
                r5[r0] = r6
                r5[r2] = r6
                r8 = 4
                r5[r8] = r3
                r9 = 5
                r5[r9] = r6
                r10 = 6
                r5[r10] = r6
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_FILL = r5
                int[] r5 = new int[r4]
                r5 = {x00aa: FILL_ARRAY_DATA , data: [0, 1, 2, 3, 4, 3, 4} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_FONT_STYLE = r5
                int[] r5 = new int[r4]
                r5 = {x00bc: FILL_ARRAY_DATA , data: [0, 0, 0, 0, 0, 3, 3} // fill-array
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_EDGE_TYPE = r5
                int[] r4 = new int[r4]
                r4[r1] = r6
                r4[r7] = r6
                r4[r0] = r6
                r4[r2] = r6
                r4[r8] = r6
                r4[r9] = r3
                r4[r10] = r3
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_BACKGROUND = r4
                return
        }

        public CueBuilder() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.rolledUpCaptions = r0
                android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
                r0.<init>()
                r1.captionStringBuilder = r0
                r1.reset()
                return
        }

        public static int getArgbColorFromCeaColor(int r1, int r2, int r3) {
                r0 = 0
                int r1 = getArgbColorFromCeaColor(r1, r2, r3, r0)
                return r1
        }

        public static int getArgbColorFromCeaColor(int r4, int r5, int r6, int r7) {
                r0 = 4
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r4, r1, r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r5, r1, r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r6, r1, r0)
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkIndex(r7, r1, r0)
                r0 = 1
                r2 = 255(0xff, float:3.57E-43)
                if (r7 == 0) goto L21
                if (r7 == r0) goto L21
                r3 = 2
                if (r7 == r3) goto L1e
                r3 = 3
                if (r7 == r3) goto L1c
                goto L21
            L1c:
                r7 = r1
                goto L22
            L1e:
                r7 = 127(0x7f, float:1.78E-43)
                goto L22
            L21:
                r7 = r2
            L22:
                if (r4 <= r0) goto L26
                r4 = r2
                goto L27
            L26:
                r4 = r1
            L27:
                if (r5 <= r0) goto L2b
                r5 = r2
                goto L2c
            L2b:
                r5 = r1
            L2c:
                if (r6 <= r0) goto L2f
                r1 = r2
            L2f:
                int r4 = android.graphics.Color.argb(r7, r4, r5, r1)
                return r4
        }

        public final void append(char r3) {
                r2 = this;
                r0 = 10
                if (r3 != r0) goto L4a
                java.util.List<android.text.SpannableString> r3 = r2.rolledUpCaptions
                android.text.SpannableString r0 = r2.buildSpannableString()
                r3.add(r0)
                android.text.SpannableStringBuilder r3 = r2.captionStringBuilder
                r3.clear()
                int r3 = r2.italicsStartPosition
                r0 = -1
                r1 = 0
                if (r3 == r0) goto L1a
                r2.italicsStartPosition = r1
            L1a:
                int r3 = r2.underlineStartPosition
                if (r3 == r0) goto L20
                r2.underlineStartPosition = r1
            L20:
                int r3 = r2.foregroundColorStartPosition
                if (r3 == r0) goto L26
                r2.foregroundColorStartPosition = r1
            L26:
                int r3 = r2.backgroundColorStartPosition
                if (r3 == r0) goto L2c
                r2.backgroundColorStartPosition = r1
            L2c:
                boolean r3 = r2.rowLock
                if (r3 == 0) goto L3a
                java.util.List<android.text.SpannableString> r3 = r2.rolledUpCaptions
                int r3 = r3.size()
                int r0 = r2.rowCount
                if (r3 >= r0) goto L44
            L3a:
                java.util.List<android.text.SpannableString> r3 = r2.rolledUpCaptions
                int r3 = r3.size()
                r0 = 15
                if (r3 < r0) goto L4f
            L44:
                java.util.List<android.text.SpannableString> r3 = r2.rolledUpCaptions
                r3.remove(r1)
                goto L2c
            L4a:
                android.text.SpannableStringBuilder r0 = r2.captionStringBuilder
                r0.append(r3)
            L4f:
                return
        }

        public final void backspace() {
                r3 = this;
                android.text.SpannableStringBuilder r0 = r3.captionStringBuilder
                int r0 = r0.length()
                if (r0 <= 0) goto Lf
                android.text.SpannableStringBuilder r1 = r3.captionStringBuilder
                int r2 = r0 + (-1)
                r1.delete(r2, r0)
            Lf:
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue build() {
                r15 = this;
                boolean r0 = r15.isEmpty()
                if (r0 == 0) goto L8
                r0 = 0
                return r0
            L8:
                android.text.SpannableStringBuilder r2 = new android.text.SpannableStringBuilder
                r2.<init>()
                r0 = 0
                r1 = r0
            Lf:
                java.util.List<android.text.SpannableString> r3 = r15.rolledUpCaptions
                int r3 = r3.size()
                if (r1 >= r3) goto L2a
                java.util.List<android.text.SpannableString> r3 = r15.rolledUpCaptions
                java.lang.Object r3 = r3.get(r1)
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                r2.append(r3)
                r3 = 10
                r2.append(r3)
                int r1 = r1 + 1
                goto Lf
            L2a:
                android.text.SpannableString r1 = r15.buildSpannableString()
                r2.append(r1)
                int r1 = r15.justification
                r3 = 2
                r4 = 3
                r5 = 1
                if (r1 == 0) goto L5e
                if (r1 == r5) goto L5b
                if (r1 == r3) goto L58
                if (r1 != r4) goto L3f
                goto L5e
            L3f:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "Unexpected justification value: "
                r1.append(r2)
                int r2 = r15.justification
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                r0.<init>(r1)
                throw r0
            L58:
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_CENTER
                goto L60
            L5b:
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_OPPOSITE
                goto L60
            L5e:
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_NORMAL
            L60:
                r6 = r1
                boolean r1 = r15.relativePositioning
                if (r1 == 0) goto L70
                int r1 = r15.horizontalAnchor
                float r1 = (float) r1
                r7 = 1120272384(0x42c60000, float:99.0)
                float r1 = r1 / r7
                int r8 = r15.verticalAnchor
                float r8 = (float) r8
                float r8 = r8 / r7
                goto L7d
            L70:
                int r1 = r15.horizontalAnchor
                float r1 = (float) r1
                r7 = 1129381888(0x43510000, float:209.0)
                float r1 = r1 / r7
                int r7 = r15.verticalAnchor
                float r7 = (float) r7
                r8 = 1116995584(0x42940000, float:74.0)
                float r8 = r7 / r8
            L7d:
                r7 = 1063675494(0x3f666666, float:0.9)
                float r1 = r1 * r7
                r9 = 1028443341(0x3d4ccccd, float:0.05)
                float r10 = r1 + r9
                float r8 = r8 * r7
                float r7 = r8 + r9
                int r1 = r15.anchorId
                int r8 = r1 % 3
                if (r8 != 0) goto L91
                r8 = r0
                goto L97
            L91:
                int r1 = r1 % r4
                if (r1 != r5) goto L96
                r8 = r5
                goto L97
            L96:
                r8 = r3
            L97:
                int r1 = r15.anchorId
                int r9 = r1 / 3
                if (r9 != 0) goto L9f
                r9 = r0
                goto La5
            L9f:
                int r1 = r1 / r4
                if (r1 != r5) goto La4
                r9 = r5
                goto La5
            La4:
                r9 = r3
            La5:
                int r1 = r15.windowFillColor
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK
                if (r1 == r3) goto Lac
                r0 = r5
            Lac:
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue r13 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue
                r5 = 0
                r11 = 1
                int r12 = r15.windowFillColor
                int r14 = r15.priority
                r1 = r13
                r3 = r6
                r4 = r7
                r6 = r8
                r7 = r10
                r8 = r9
                r9 = r11
                r10 = r0
                r11 = r12
                r12 = r14
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
                return r13
        }

        public final android.text.SpannableString buildSpannableString() {
                r6 = this;
                android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
                android.text.SpannableStringBuilder r1 = r6.captionStringBuilder
                r0.<init>(r1)
                int r1 = r0.length()
                if (r1 <= 0) goto L4d
                int r2 = r6.italicsStartPosition
                r3 = 33
                r4 = -1
                if (r2 == r4) goto L1f
                android.text.style.StyleSpan r2 = new android.text.style.StyleSpan
                r5 = 2
                r2.<init>(r5)
                int r5 = r6.italicsStartPosition
                r0.setSpan(r2, r5, r1, r3)
            L1f:
                int r2 = r6.underlineStartPosition
                if (r2 == r4) goto L2d
                android.text.style.UnderlineSpan r2 = new android.text.style.UnderlineSpan
                r2.<init>()
                int r5 = r6.underlineStartPosition
                r0.setSpan(r2, r5, r1, r3)
            L2d:
                int r2 = r6.foregroundColorStartPosition
                if (r2 == r4) goto L3d
                android.text.style.ForegroundColorSpan r2 = new android.text.style.ForegroundColorSpan
                int r5 = r6.foregroundColor
                r2.<init>(r5)
                int r5 = r6.foregroundColorStartPosition
                r0.setSpan(r2, r5, r1, r3)
            L3d:
                int r2 = r6.backgroundColorStartPosition
                if (r2 == r4) goto L4d
                android.text.style.BackgroundColorSpan r2 = new android.text.style.BackgroundColorSpan
                int r4 = r6.backgroundColor
                r2.<init>(r4)
                int r4 = r6.backgroundColorStartPosition
                r0.setSpan(r2, r4, r1, r3)
            L4d:
                android.text.SpannableString r1 = new android.text.SpannableString
                r1.<init>(r0)
                return r1
        }

        public final void clear() {
                r1 = this;
                java.util.List<android.text.SpannableString> r0 = r1.rolledUpCaptions
                r0.clear()
                android.text.SpannableStringBuilder r0 = r1.captionStringBuilder
                r0.clear()
                r0 = -1
                r1.italicsStartPosition = r0
                r1.underlineStartPosition = r0
                r1.foregroundColorStartPosition = r0
                r1.backgroundColorStartPosition = r0
                r0 = 0
                r1.row = r0
                return
        }

        public final void defineWindow(boolean r12, boolean r13, boolean r14, int r15, boolean r16, int r17, int r18, int r19, int r20, int r21, int r22, int r23) {
                r11 = this;
                r0 = r11
                r1 = r13
                r2 = r22
                r3 = r23
                r4 = 1
                r0.defined = r4
                r5 = r12
                r0.visible = r5
                r0.rowLock = r1
                r5 = r15
                r0.priority = r5
                r5 = r16
                r0.relativePositioning = r5
                r5 = r17
                r0.verticalAnchor = r5
                r5 = r18
                r0.horizontalAnchor = r5
                r5 = r21
                r0.anchorId = r5
                int r5 = r0.rowCount
                int r6 = r19 + 1
                if (r5 == r6) goto L46
                r0.rowCount = r6
            L29:
                if (r1 == 0) goto L35
                java.util.List<android.text.SpannableString> r5 = r0.rolledUpCaptions
                int r5 = r5.size()
                int r6 = r0.rowCount
                if (r5 >= r6) goto L3f
            L35:
                java.util.List<android.text.SpannableString> r5 = r0.rolledUpCaptions
                int r5 = r5.size()
                r6 = 15
                if (r5 < r6) goto L46
            L3f:
                java.util.List<android.text.SpannableString> r5 = r0.rolledUpCaptions
                r6 = 0
                r5.remove(r6)
                goto L29
            L46:
                if (r2 == 0) goto L76
                int r1 = r0.windowStyleId
                if (r1 == r2) goto L76
                r0.windowStyleId = r2
                int r1 = r2 + (-1)
                int[] r2 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_FILL
                r2 = r2[r1]
                int r5 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_TRANSPARENT
                boolean[] r6 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_WORD_WRAP
                boolean r6 = r6[r1]
                r7 = 0
                int[] r8 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_PRINT_DIRECTION
                r8 = r8[r1]
                int[] r9 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_SCROLL_DIRECTION
                r9 = r9[r1]
                int[] r10 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.WINDOW_STYLE_JUSTIFICATION
                r1 = r10[r1]
                r12 = r11
                r13 = r2
                r14 = r5
                r15 = r6
                r16 = r7
                r17 = r8
                r18 = r9
                r19 = r1
                r12.setWindowAttributes(r13, r14, r15, r16, r17, r18, r19)
            L76:
                if (r3 == 0) goto La7
                int r1 = r0.penStyleId
                if (r1 == r3) goto La7
                r0.penStyleId = r3
                int r1 = r3 + (-1)
                r2 = 0
                r3 = 1
                r4 = 1
                r5 = 0
                r6 = 0
                int[] r7 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_EDGE_TYPE
                r7 = r7[r1]
                int[] r8 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_FONT_STYLE
                r8 = r8[r1]
                r12 = r11
                r13 = r2
                r14 = r3
                r15 = r4
                r16 = r5
                r17 = r6
                r18 = r7
                r19 = r8
                r12.setPenAttributes(r13, r14, r15, r16, r17, r18, r19)
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_WHITE
                int[] r3 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.PEN_STYLE_BACKGROUND
                r1 = r3[r1]
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK
                r11.setPenColor(r2, r1, r3)
            La7:
                return
        }

        public final boolean isDefined() {
                r1 = this;
                boolean r0 = r1.defined
                return r0
        }

        public final boolean isEmpty() {
                r1 = this;
                boolean r0 = r1.isDefined()
                if (r0 == 0) goto L19
                java.util.List<android.text.SpannableString> r0 = r1.rolledUpCaptions
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L17
                android.text.SpannableStringBuilder r0 = r1.captionStringBuilder
                int r0 = r0.length()
                if (r0 != 0) goto L17
                goto L19
            L17:
                r0 = 0
                goto L1a
            L19:
                r0 = 1
            L1a:
                return r0
        }

        public final boolean isVisible() {
                r1 = this;
                boolean r0 = r1.visible
                return r0
        }

        public final void reset() {
                r2 = this;
                r2.clear()
                r0 = 0
                r2.defined = r0
                r2.visible = r0
                r1 = 4
                r2.priority = r1
                r2.relativePositioning = r0
                r2.verticalAnchor = r0
                r2.horizontalAnchor = r0
                r2.anchorId = r0
                r1 = 15
                r2.rowCount = r1
                r1 = 1
                r2.rowLock = r1
                r2.justification = r0
                r2.windowStyleId = r0
                r2.penStyleId = r0
                int r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK
                r2.windowFillColor = r0
                int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_WHITE
                r2.foregroundColor = r1
                r2.backgroundColor = r0
                return
        }

        public final void setPenAttributes(int r1, int r2, int r3, boolean r4, boolean r5, int r6, int r7) {
                r0 = this;
                int r1 = r0.italicsStartPosition
                r2 = 33
                r3 = -1
                if (r1 == r3) goto L1f
                if (r4 != 0) goto L29
                android.text.SpannableStringBuilder r1 = r0.captionStringBuilder
                android.text.style.StyleSpan r4 = new android.text.style.StyleSpan
                r6 = 2
                r4.<init>(r6)
                int r6 = r0.italicsStartPosition
                android.text.SpannableStringBuilder r7 = r0.captionStringBuilder
                int r7 = r7.length()
                r1.setSpan(r4, r6, r7, r2)
                r0.italicsStartPosition = r3
                goto L29
            L1f:
                if (r4 == 0) goto L29
                android.text.SpannableStringBuilder r1 = r0.captionStringBuilder
                int r1 = r1.length()
                r0.italicsStartPosition = r1
            L29:
                int r1 = r0.underlineStartPosition
                if (r1 == r3) goto L44
                if (r5 != 0) goto L4e
                android.text.SpannableStringBuilder r1 = r0.captionStringBuilder
                android.text.style.UnderlineSpan r4 = new android.text.style.UnderlineSpan
                r4.<init>()
                int r5 = r0.underlineStartPosition
                android.text.SpannableStringBuilder r6 = r0.captionStringBuilder
                int r6 = r6.length()
                r1.setSpan(r4, r5, r6, r2)
                r0.underlineStartPosition = r3
                goto L4e
            L44:
                if (r5 == 0) goto L4e
                android.text.SpannableStringBuilder r1 = r0.captionStringBuilder
                int r1 = r1.length()
                r0.underlineStartPosition = r1
            L4e:
                return
        }

        public final void setPenColor(int r6, int r7, int r8) {
                r5 = this;
                int r8 = r5.foregroundColorStartPosition
                r0 = 33
                r1 = -1
                if (r8 == r1) goto L1f
                int r8 = r5.foregroundColor
                if (r8 == r6) goto L1f
                android.text.SpannableStringBuilder r8 = r5.captionStringBuilder
                android.text.style.ForegroundColorSpan r2 = new android.text.style.ForegroundColorSpan
                int r3 = r5.foregroundColor
                r2.<init>(r3)
                int r3 = r5.foregroundColorStartPosition
                android.text.SpannableStringBuilder r4 = r5.captionStringBuilder
                int r4 = r4.length()
                r8.setSpan(r2, r3, r4, r0)
            L1f:
                int r8 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_WHITE
                if (r6 == r8) goto L2d
                android.text.SpannableStringBuilder r8 = r5.captionStringBuilder
                int r8 = r8.length()
                r5.foregroundColorStartPosition = r8
                r5.foregroundColor = r6
            L2d:
                int r6 = r5.backgroundColorStartPosition
                if (r6 == r1) goto L49
                int r6 = r5.backgroundColor
                if (r6 == r7) goto L49
                android.text.SpannableStringBuilder r6 = r5.captionStringBuilder
                android.text.style.BackgroundColorSpan r8 = new android.text.style.BackgroundColorSpan
                int r1 = r5.backgroundColor
                r8.<init>(r1)
                int r1 = r5.backgroundColorStartPosition
                android.text.SpannableStringBuilder r2 = r5.captionStringBuilder
                int r2 = r2.length()
                r6.setSpan(r8, r1, r2, r0)
            L49:
                int r6 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.COLOR_SOLID_BLACK
                if (r7 == r6) goto L57
                android.text.SpannableStringBuilder r6 = r5.captionStringBuilder
                int r6 = r6.length()
                r5.backgroundColorStartPosition = r6
                r5.backgroundColor = r7
            L57:
                return
        }

        public final void setPenLocation(int r1, int r2) {
                r0 = this;
                int r2 = r0.row
                if (r2 == r1) goto L9
                r2 = 10
                r0.append(r2)
            L9:
                r0.row = r1
                return
        }

        public final void setVisibility(boolean r1) {
                r0 = this;
                r0.visible = r1
                return
        }

        public final void setWindowAttributes(int r1, int r2, boolean r3, int r4, int r5, int r6, int r7) {
                r0 = this;
                r0.windowFillColor = r1
                r0.justification = r7
                return
        }
    }

    private static final class DtvCcPacket {
        int currentIndex;
        public final byte[] packetData;
        public final int packetSize;
        public final int sequenceNumber;

        public DtvCcPacket(int r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.sequenceNumber = r1
                r0.packetSize = r2
                int r2 = r2 * 2
                int r2 = r2 + (-1)
                byte[] r1 = new byte[r2]
                r0.packetData = r1
                r1 = 0
                r0.currentIndex = r1
                return
        }
    }

    public Cea708Decoder(int r5) {
            r4 = this;
            r4.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r4.ccData = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r0.<init>()
            r4.serviceBlockPacket = r0
            r0 = -1
            if (r5 != r0) goto L15
            r5 = 1
        L15:
            r4.selectedServiceNumber = r5
            r5 = 8
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder[r5]
            r4.cueBuilders = r0
            r0 = 0
            r1 = r0
        L1f:
            if (r1 >= r5) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r2 = r4.cueBuilders
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder
            r3.<init>()
            r2[r1] = r3
            int r1 = r1 + 1
            goto L1f
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r5 = r4.cueBuilders
            r5 = r5[r0]
            r4.currentCueBuilder = r5
            r4.resetCueBuilders()
            return
    }

    private void finalizeCurrentPacket() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r1.currentDtvCcPacket
            if (r0 != 0) goto L5
            return
        L5:
            r1.processCurrentPacket()
            r0 = 0
            r1.currentDtvCcPacket = r0
            return
    }

    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getDisplayCues() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            r2 = 8
            if (r1 >= r2) goto L2c
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r2 = r3.cueBuilders
            r2 = r2[r1]
            boolean r2 = r2.isEmpty()
            if (r2 != 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r2 = r3.cueBuilders
            r2 = r2[r1]
            boolean r2 = r2.isVisible()
            if (r2 == 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r2 = r3.cueBuilders
            r2 = r2[r1]
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue r2 = r2.build()
            r0.add(r2)
        L29:
            int r1 = r1 + 1
            goto L6
        L2c:
            java.util.Collections.sort(r0)
            java.util.List r0 = java.util.Collections.unmodifiableList(r0)
            return r0
    }

    private void handleC0Command(int r5) {
            r4 = this;
            if (r5 == 0) goto L81
            r0 = 3
            if (r5 == r0) goto L7b
            r0 = 8
            if (r5 == r0) goto L75
            switch(r5) {
                case 12: goto L71;
                case 13: goto L69;
                case 14: goto L81;
                default: goto Lc;
            }
        Lc:
            r1 = 17
            java.lang.String r2 = "Cea708Decoder"
            if (r5 < r1) goto L30
            r1 = 23
            if (r5 > r1) goto L30
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r3 = "Currently unsupported COMMAND_EXT1 Command: "
            r1.append(r3)
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            android.util.Log.w(r2, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r5.skipBits(r0)
            goto L81
        L30:
            r0 = 24
            if (r5 < r0) goto L54
            r0 = 31
            if (r5 > r0) goto L54
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Currently unsupported COMMAND_P16 Command: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.w(r2, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r0 = 16
            r5.skipBits(r0)
            goto L81
        L54:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid C0 command: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            android.util.Log.w(r2, r5)
            goto L81
        L69:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            r0 = 10
            r5.append(r0)
            goto L81
        L71:
            r4.resetCueBuilders()
            goto L81
        L75:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            r5.backspace()
            goto L81
        L7b:
            java.util.List r5 = r4.getDisplayCues()
            r4.cues = r5
        L81:
            return
    }

    private void handleC1Command(int r5) {
            r4 = this;
            r0 = 16
            r1 = 8
            r2 = 1
            switch(r5) {
                case 128: goto L109;
                case 129: goto L109;
                case 130: goto L109;
                case 131: goto L109;
                case 132: goto L109;
                case 133: goto L109;
                case 134: goto L109;
                case 135: goto L109;
                case 136: goto Lf3;
                case 137: goto Ldc;
                case 138: goto Lc5;
                case 139: goto La9;
                case 140: goto L93;
                case 141: goto L8c;
                case 142: goto L117;
                case 143: goto L87;
                case 144: goto L73;
                case 145: goto L5d;
                case 146: goto L49;
                case 147: goto L8;
                case 148: goto L8;
                case 149: goto L8;
                case 150: goto L8;
                case 151: goto L33;
                case 152: goto L20;
                case 153: goto L20;
                case 154: goto L20;
                case 155: goto L20;
                case 156: goto L20;
                case 157: goto L20;
                case 158: goto L20;
                case 159: goto L20;
                default: goto L8;
            }
        L8:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid C1 command: "
            r0.append(r1)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            java.lang.String r0 = "Cea708Decoder"
            android.util.Log.w(r0, r5)
            goto L117
        L20:
            int r5 = r5 + (-152)
            r4.handleDefineWindow(r5)
            int r0 = r4.currentWindow
            if (r0 == r5) goto L117
            r4.currentWindow = r5
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = r4.cueBuilders
            r5 = r0[r5]
            r4.currentCueBuilder = r5
            goto L117
        L33:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            boolean r5 = r5.isDefined()
            if (r5 != 0) goto L44
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r0 = 32
            r5.skipBits(r0)
            goto L117
        L44:
            r4.handleSetWindowAttributes()
            goto L117
        L49:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            boolean r5 = r5.isDefined()
            if (r5 != 0) goto L58
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r5.skipBits(r0)
            goto L117
        L58:
            r4.handleSetPenLocation()
            goto L117
        L5d:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            boolean r5 = r5.isDefined()
            if (r5 != 0) goto L6e
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r0 = 24
            r5.skipBits(r0)
            goto L117
        L6e:
            r4.handleSetPenColor()
            goto L117
        L73:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r4.currentCueBuilder
            boolean r5 = r5.isDefined()
            if (r5 != 0) goto L82
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r5.skipBits(r0)
            goto L117
        L82:
            r4.handleSetPenAttributes()
            goto L117
        L87:
            r4.resetCueBuilders()
            goto L117
        L8c:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            r5.skipBits(r1)
            goto L117
        L93:
            if (r2 > r1) goto L117
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            boolean r5 = r5.readBit()
            if (r5 == 0) goto La6
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r5 = r4.cueBuilders
            int r0 = 8 - r2
            r5 = r5[r0]
            r5.reset()
        La6:
            int r2 = r2 + 1
            goto L93
        La9:
            r5 = r2
        Laa:
            if (r5 > r1) goto L117
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.serviceBlockPacket
            boolean r0 = r0.readBit()
            if (r0 == 0) goto Lc2
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = r4.cueBuilders
            int r3 = 8 - r5
            r0 = r0[r3]
            boolean r3 = r0.isVisible()
            r3 = r3 ^ r2
            r0.setVisibility(r3)
        Lc2:
            int r5 = r5 + 1
            goto Laa
        Lc5:
            if (r2 > r1) goto L117
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            boolean r5 = r5.readBit()
            if (r5 == 0) goto Ld9
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r5 = r4.cueBuilders
            int r0 = 8 - r2
            r5 = r5[r0]
            r0 = 0
            r5.setVisibility(r0)
        Ld9:
            int r2 = r2 + 1
            goto Lc5
        Ldc:
            r5 = r2
        Ldd:
            if (r5 > r1) goto L117
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r4.serviceBlockPacket
            boolean r0 = r0.readBit()
            if (r0 == 0) goto Lf0
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = r4.cueBuilders
            int r3 = 8 - r5
            r0 = r0[r3]
            r0.setVisibility(r2)
        Lf0:
            int r5 = r5 + 1
            goto Ldd
        Lf3:
            if (r2 > r1) goto L117
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r4.serviceBlockPacket
            boolean r5 = r5.readBit()
            if (r5 == 0) goto L106
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r5 = r4.cueBuilders
            int r0 = 8 - r2
            r5 = r5[r0]
            r5.clear()
        L106:
            int r2 = r2 + 1
            goto Lf3
        L109:
            int r5 = r5 + (-128)
            int r0 = r4.currentWindow
            if (r0 == r5) goto L117
            r4.currentWindow = r5
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = r4.cueBuilders
            r5 = r0[r5]
            r4.currentCueBuilder = r5
        L117:
            return
    }

    private void handleC2Command(int r2) {
            r1 = this;
            r0 = 7
            if (r2 > r0) goto L4
            goto L27
        L4:
            r0 = 15
            if (r2 > r0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 8
            r2.skipBits(r0)
            goto L27
        L10:
            r0 = 23
            if (r2 > r0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 16
            r2.skipBits(r0)
            goto L27
        L1c:
            r0 = 31
            if (r2 > r0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 24
            r2.skipBits(r0)
        L27:
            return
    }

    private void handleC3Command(int r2) {
            r1 = this;
            r0 = 135(0x87, float:1.89E-43)
            if (r2 > r0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 32
            r2.skipBits(r0)
            goto L30
        Lc:
            r0 = 143(0x8f, float:2.0E-43)
            if (r2 > r0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 40
            r2.skipBits(r0)
            goto L30
        L18:
            r0 = 159(0x9f, float:2.23E-43)
            if (r2 > r0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 2
            r2.skipBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r1.serviceBlockPacket
            r0 = 6
            int r2 = r2.readBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r1.serviceBlockPacket
            int r2 = r2 * 8
            r0.skipBits(r2)
        L30:
            return
    }

    private void handleDefineWindow(int r15) {
            r14 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r0 = r14.cueBuilders
            r1 = r0[r15]
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r14.serviceBlockPacket
            r0 = 2
            r15.skipBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r14.serviceBlockPacket
            boolean r2 = r15.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r14.serviceBlockPacket
            boolean r3 = r15.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r14.serviceBlockPacket
            boolean r4 = r15.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r15 = r14.serviceBlockPacket
            r5 = 3
            int r15 = r15.readBits(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r6 = r14.serviceBlockPacket
            boolean r6 = r6.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r7 = r14.serviceBlockPacket
            r8 = 7
            int r7 = r7.readBits(r8)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r8 = r14.serviceBlockPacket
            r9 = 8
            int r8 = r8.readBits(r9)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9 = r14.serviceBlockPacket
            r10 = 4
            int r11 = r9.readBits(r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r9 = r14.serviceBlockPacket
            int r9 = r9.readBits(r10)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r10 = r14.serviceBlockPacket
            r10.skipBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r10 = r14.serviceBlockPacket
            r12 = 6
            int r10 = r10.readBits(r12)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r12 = r14.serviceBlockPacket
            r12.skipBits(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r14.serviceBlockPacket
            int r12 = r0.readBits(r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r14.serviceBlockPacket
            int r13 = r0.readBits(r5)
            r5 = r15
            r1.defineWindow(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13)
            return
    }

    private void handleG0Character(int r2) {
            r1 = this;
            r0 = 127(0x7f, float:1.78E-43)
            if (r2 != r0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r2 = r1.currentCueBuilder
            r0 = 9835(0x266b, float:1.3782E-41)
            r2.append(r0)
            goto L14
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r0 = r1.currentCueBuilder
            r2 = r2 & 255(0xff, float:3.57E-43)
            char r2 = (char) r2
            r0.append(r2)
        L14:
            return
    }

    private void handleG1Character(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r0 = r1.currentCueBuilder
            r2 = r2 & 255(0xff, float:3.57E-43)
            char r2 = (char) r2
            r0.append(r2)
            return
    }

    private void handleG2Character(int r3) {
            r2 = this;
            r0 = 32
            if (r3 == r0) goto L11b
            r0 = 33
            if (r3 == r0) goto L113
            r0 = 37
            if (r3 == r0) goto L10b
            r0 = 42
            if (r3 == r0) goto L103
            r0 = 44
            if (r3 == r0) goto Lfb
            r0 = 63
            if (r3 == r0) goto Lf3
            r0 = 57
            if (r3 == r0) goto Leb
            r0 = 58
            if (r3 == r0) goto Le3
            r0 = 60
            if (r3 == r0) goto Ldb
            r0 = 61
            if (r3 == r0) goto Ld3
            switch(r3) {
                case 48: goto Lcb;
                case 49: goto Lc3;
                case 50: goto Lbb;
                case 51: goto Lb2;
                case 52: goto La9;
                case 53: goto La0;
                default: goto L2b;
            }
        L2b:
            switch(r3) {
                case 118: goto L97;
                case 119: goto L8e;
                case 120: goto L85;
                case 121: goto L7c;
                case 122: goto L73;
                case 123: goto L6a;
                case 124: goto L61;
                case 125: goto L58;
                case 126: goto L4f;
                case 127: goto L46;
                default: goto L2e;
            }
        L2e:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid G2 character: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "Cea708Decoder"
            android.util.Log.w(r0, r3)
            goto L120
        L46:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9484(0x250c, float:1.329E-41)
            r3.append(r0)
            goto L120
        L4f:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9496(0x2518, float:1.3307E-41)
            r3.append(r0)
            goto L120
        L58:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9472(0x2500, float:1.3273E-41)
            r3.append(r0)
            goto L120
        L61:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9492(0x2514, float:1.3301E-41)
            r3.append(r0)
            goto L120
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9488(0x2510, float:1.3296E-41)
            r3.append(r0)
            goto L120
        L73:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9474(0x2502, float:1.3276E-41)
            r3.append(r0)
            goto L120
        L7c:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8542(0x215e, float:1.197E-41)
            r3.append(r0)
            goto L120
        L85:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8541(0x215d, float:1.1968E-41)
            r3.append(r0)
            goto L120
        L8e:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8540(0x215c, float:1.1967E-41)
            r3.append(r0)
            goto L120
        L97:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8539(0x215b, float:1.1966E-41)
            r3.append(r0)
            goto L120
        La0:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8226(0x2022, float:1.1527E-41)
            r3.append(r0)
            goto L120
        La9:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8221(0x201d, float:1.152E-41)
            r3.append(r0)
            goto L120
        Lb2:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8220(0x201c, float:1.1519E-41)
            r3.append(r0)
            goto L120
        Lbb:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8217(0x2019, float:1.1514E-41)
            r3.append(r0)
            goto L120
        Lc3:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8216(0x2018, float:1.1513E-41)
            r3.append(r0)
            goto L120
        Lcb:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 9608(0x2588, float:1.3464E-41)
            r3.append(r0)
            goto L120
        Ld3:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8480(0x2120, float:1.1883E-41)
            r3.append(r0)
            goto L120
        Ldb:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 339(0x153, float:4.75E-43)
            r3.append(r0)
            goto L120
        Le3:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 353(0x161, float:4.95E-43)
            r3.append(r0)
            goto L120
        Leb:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8482(0x2122, float:1.1886E-41)
            r3.append(r0)
            goto L120
        Lf3:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 376(0x178, float:5.27E-43)
            r3.append(r0)
            goto L120
        Lfb:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 338(0x152, float:4.74E-43)
            r3.append(r0)
            goto L120
        L103:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 352(0x160, float:4.93E-43)
            r3.append(r0)
            goto L120
        L10b:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 8230(0x2026, float:1.1533E-41)
            r3.append(r0)
            goto L120
        L113:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 160(0xa0, float:2.24E-43)
            r3.append(r0)
            goto L120
        L11b:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r3.append(r0)
        L120:
            return
    }

    private void handleG3Character(int r3) {
            r2 = this;
            r0 = 160(0xa0, float:2.24E-43)
            if (r3 != r0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 13252(0x33c4, float:1.857E-41)
            r3.append(r0)
            goto L29
        Lc:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Invalid G3 character: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "Cea708Decoder"
            android.util.Log.w(r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r2.currentCueBuilder
            r0 = 95
            r3.append(r0)
        L29:
            return
    }

    private void handleSetPenAttributes() {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            r1 = 4
            int r3 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            r1 = 2
            int r4 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            int r5 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            boolean r6 = r0.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            boolean r7 = r0.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            r1 = 3
            int r8 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            int r9 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r2 = r10.currentCueBuilder
            r2.setPenAttributes(r3, r4, r5, r6, r7, r8, r9)
            return
    }

    private void handleSetPenColor() {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r6.serviceBlockPacket
            r1 = 2
            int r0 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r6.serviceBlockPacket
            int r2 = r2.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r6.serviceBlockPacket
            int r3 = r3.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.serviceBlockPacket
            int r4 = r4.readBits(r1)
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.getArgbColorFromCeaColor(r2, r3, r4, r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r6.serviceBlockPacket
            int r2 = r2.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r6.serviceBlockPacket
            int r3 = r3.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.serviceBlockPacket
            int r4 = r4.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r6.serviceBlockPacket
            int r5 = r5.readBits(r1)
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.getArgbColorFromCeaColor(r3, r4, r5, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r6.serviceBlockPacket
            r3.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r6.serviceBlockPacket
            int r3 = r3.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r6.serviceBlockPacket
            int r4 = r4.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r6.serviceBlockPacket
            int r1 = r5.readBits(r1)
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.getArgbColorFromCeaColor(r3, r4, r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r3 = r6.currentCueBuilder
            r3.setPenColor(r0, r2, r1)
            return
    }

    private void handleSetPenLocation() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.serviceBlockPacket
            r1 = 4
            r0.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r3.serviceBlockPacket
            int r0 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r3.serviceBlockPacket
            r2 = 2
            r1.skipBits(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r3.serviceBlockPacket
            r2 = 6
            int r1 = r1.readBits(r2)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r2 = r3.currentCueBuilder
            r2.setPenLocation(r0, r1)
            return
    }

    private void handleSetWindowAttributes() {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            r1 = 2
            int r0 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r13.serviceBlockPacket
            int r2 = r2.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r13.serviceBlockPacket
            int r3 = r3.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r13.serviceBlockPacket
            int r4 = r4.readBits(r1)
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.getArgbColorFromCeaColor(r2, r3, r4, r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            int r0 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r13.serviceBlockPacket
            int r2 = r2.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r3 = r13.serviceBlockPacket
            int r3 = r3.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r4 = r13.serviceBlockPacket
            int r4 = r4.readBits(r1)
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder.CueBuilder.getArgbColorFromCeaColor(r2, r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r13.serviceBlockPacket
            boolean r2 = r2.readBit()
            if (r2 == 0) goto L43
            r0 = r0 | 4
        L43:
            r9 = r0
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            boolean r8 = r0.readBit()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            int r10 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            int r11 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            int r12 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r13.serviceBlockPacket
            r1 = 8
            r0.skipBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder r5 = r13.currentCueBuilder
            r5.setWindowAttributes(r6, r7, r8, r9, r10, r11, r12)
            return
    }

    private void processCurrentPacket() {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r10.currentDtvCcPacket
            int r0 = r0.currentIndex
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = r10.currentDtvCcPacket
            int r1 = r1.packetSize
            r2 = 2
            int r1 = r1 * r2
            r3 = 1
            int r1 = r1 - r3
            java.lang.String r4 = "Cea708Decoder"
            if (r0 == r1) goto L48
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "DtvCcPacket ended prematurely; size is "
            r0.append(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = r10.currentDtvCcPacket
            int r1 = r1.packetSize
            int r1 = r1 * r2
            int r1 = r1 - r3
            r0.append(r1)
            java.lang.String r1 = ", but current index is "
            r0.append(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = r10.currentDtvCcPacket
            int r1 = r1.currentIndex
            r0.append(r1)
            java.lang.String r1 = " (sequence number "
            r0.append(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = r10.currentDtvCcPacket
            int r1 = r1.sequenceNumber
            r0.append(r1)
            java.lang.String r1 = "); ignoring packet"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            android.util.Log.w(r4, r0)
            return
        L48:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = r10.currentDtvCcPacket
            byte[] r1 = r1.packetData
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r5 = r10.currentDtvCcPacket
            int r5 = r5.currentIndex
            r0.reset(r1, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = r10.serviceBlockPacket
            r1 = 3
            int r0 = r0.readBits(r1)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.serviceBlockPacket
            r5 = 5
            int r1 = r1.readBits(r5)
            r5 = 7
            if (r0 != r5) goto L73
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r5 = r10.serviceBlockPacket
            r5.skipBits(r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r2 = r10.serviceBlockPacket
            r5 = 6
            int r2 = r2.readBits(r5)
            int r0 = r0 + r2
        L73:
            if (r1 != 0) goto L91
            if (r0 == 0) goto L90
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "serviceNumber is non-zero ("
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = ") when blockSize is 0"
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            android.util.Log.w(r4, r0)
        L90:
            return
        L91:
            int r1 = r10.selectedServiceNumber
            if (r0 == r1) goto L96
            return
        L96:
            r0 = 0
        L97:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.serviceBlockPacket
            int r1 = r1.bitsLeft()
            if (r1 <= 0) goto L114
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.serviceBlockPacket
            r2 = 8
            int r1 = r1.readBits(r2)
            r5 = 16
            r6 = 255(0xff, float:3.57E-43)
            r7 = 159(0x9f, float:2.23E-43)
            r8 = 127(0x7f, float:1.78E-43)
            r9 = 31
            if (r1 == r5) goto Le0
            if (r1 > r9) goto Lb9
            r10.handleC0Command(r1)
            goto L97
        Lb9:
            if (r1 > r8) goto Lbf
            r10.handleG0Character(r1)
            goto Lf1
        Lbf:
            if (r1 > r7) goto Lc5
            r10.handleC1Command(r1)
            goto Lf1
        Lc5:
            if (r1 > r6) goto Lcb
            r10.handleG1Character(r1)
            goto Lf1
        Lcb:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "Invalid base command: "
            r2.append(r5)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.util.Log.w(r4, r1)
            goto L97
        Le0:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r1 = r10.serviceBlockPacket
            int r1 = r1.readBits(r2)
            if (r1 > r9) goto Lec
            r10.handleC2Command(r1)
            goto L97
        Lec:
            if (r1 > r8) goto Lf3
            r10.handleG2Character(r1)
        Lf1:
            r0 = r3
            goto L97
        Lf3:
            if (r1 > r7) goto Lf9
            r10.handleC3Command(r1)
            goto L97
        Lf9:
            if (r1 > r6) goto Lff
            r10.handleG3Character(r1)
            goto Lf1
        Lff:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r5 = "Invalid extended command: "
            r2.append(r5)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            android.util.Log.w(r4, r1)
            goto L97
        L114:
            if (r0 == 0) goto L11c
            java.util.List r0 = r10.getDisplayCues()
            r10.cues = r0
        L11c:
            return
    }

    private void resetCueBuilders() {
            r2 = this;
            r0 = 0
        L1:
            r1 = 8
            if (r0 >= r1) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r1 = r2.cueBuilders
            r1 = r1[r0]
            r1.reset()
            int r0 = r0 + 1
            goto L1
        Lf:
            return
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.text.Subtitle createSubtitle() {
            r2 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r0 = r2.cues
            r2.lastCues = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaSubtitle r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaSubtitle
            r1.<init>(r0)
            return r1
    }

    @Override
    protected final void decode(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r8) {
            r7 = this;
            java.nio.ByteBuffer r0 = r8.data
            byte[] r0 = r0.array()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r1 = r7.ccData
            java.nio.ByteBuffer r8 = r8.data
            int r8 = r8.limit()
            r1.reset(r0, r8)
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.ccData
            int r8 = r8.bytesLeft()
            r0 = 3
            if (r8 < r0) goto La4
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r8 = r7.ccData
            int r8 = r8.readUnsignedByte()
            r8 = r8 & 7
            r1 = r8 & 3
            r2 = 4
            r8 = r8 & r2
            r3 = 0
            r4 = 1
            if (r8 != r2) goto L2c
            r8 = r4
            goto L2d
        L2c:
            r8 = r3
        L2d:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r2 = r7.ccData
            int r2 = r2.readUnsignedByte()
            byte r2 = (byte) r2
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r7.ccData
            int r5 = r5.readUnsignedByte()
            byte r5 = (byte) r5
            r6 = 2
            if (r1 == r6) goto L41
            if (r1 == r0) goto L41
            goto L11
        L41:
            if (r8 != 0) goto L44
            goto L11
        L44:
            if (r1 != r0) goto L67
            r7.finalizeCurrentPacket()
            r8 = r2 & 192(0xc0, float:2.69E-43)
            int r8 = r8 >> 6
            r0 = r2 & 63
            if (r0 != 0) goto L53
            r0 = 64
        L53:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket
            r1.<init>(r8, r0)
            r7.currentDtvCcPacket = r1
            byte[] r8 = r1.packetData
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r7.currentDtvCcPacket
            int r1 = r0.currentIndex
            int r2 = r1 + 1
            r0.currentIndex = r2
            r8[r1] = r5
            goto L93
        L67:
            if (r1 != r6) goto L6a
            r3 = r4
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r3)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r8 = r7.currentDtvCcPacket
            if (r8 != 0) goto L79
            java.lang.String r8 = "Cea708Decoder"
            java.lang.String r0 = "Encountered DTVCC_PACKET_DATA before DTVCC_PACKET_START"
            android.util.Log.e(r8, r0)
            goto L11
        L79:
            byte[] r8 = r8.packetData
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r7.currentDtvCcPacket
            int r1 = r0.currentIndex
            int r3 = r1 + 1
            r0.currentIndex = r3
            r8[r1] = r2
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r8 = r7.currentDtvCcPacket
            byte[] r8 = r8.packetData
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r7.currentDtvCcPacket
            int r1 = r0.currentIndex
            int r2 = r1 + 1
            r0.currentIndex = r2
            r8[r1] = r5
        L93:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r8 = r7.currentDtvCcPacket
            int r8 = r8.currentIndex
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$DtvCcPacket r0 = r7.currentDtvCcPacket
            int r0 = r0.packetSize
            int r0 = r0 * r6
            int r0 = r0 - r4
            if (r8 != r0) goto L11
            r7.finalizeCurrentPacket()
            goto L11
        La4:
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer dequeueInputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r0 = super.dequeueInputBuffer()
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer dequeueOutputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleOutputBuffer r0 = super.dequeueOutputBuffer()
            return r0
    }

    @Override
    public final void flush() {
            r3 = this;
            super.flush()
            r0 = 0
            r3.cues = r0
            r3.lastCues = r0
            r1 = 0
            r3.currentWindow = r1
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Decoder$CueBuilder[] r2 = r3.cueBuilders
            r1 = r2[r1]
            r3.currentCueBuilder = r1
            r3.resetCueBuilders()
            r3.currentDtvCcPacket = r0
            return
    }

    @Override
    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = "Cea708Decoder"
            return r0
    }

    @Override
    protected final boolean isNewSubtitleDataAvailable() {
            r2 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r0 = r2.cues
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r1 = r2.lastCues
            if (r0 == r1) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public final void queueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r1) throws com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleDecoderException {
            r0 = this;
            super.queueInputBuffer(r1)
            return
    }

    @Override
    public final void release() {
            r0 = this;
            super.release()
            return
    }

    @Override
    public final void setPositionUs(long r1) {
            r0 = this;
            super.setPositionUs(r1)
            return
    }
}
