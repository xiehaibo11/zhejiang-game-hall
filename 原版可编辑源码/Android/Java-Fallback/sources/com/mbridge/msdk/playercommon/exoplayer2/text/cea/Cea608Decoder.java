package com.mbridge.msdk.playercommon.exoplayer2.text.cea;

public final class Cea608Decoder extends com.mbridge.msdk.playercommon.exoplayer2.text.cea.CeaDecoder {
    private static final int[] BASIC_CHARACTER_SET = null;
    private static final int CC_FIELD_FLAG = 1;
    private static final byte CC_IMPLICIT_DATA_HEADER = -4;
    private static final int CC_MODE_PAINT_ON = 3;
    private static final int CC_MODE_POP_ON = 2;
    private static final int CC_MODE_ROLL_UP = 1;
    private static final int CC_MODE_UNKNOWN = 0;
    private static final int CC_TYPE_FLAG = 2;
    private static final int CC_VALID_608_ID = 4;
    private static final int CC_VALID_FLAG = 4;
    private static final int[] COLUMN_INDICES = null;
    private static final byte CTRL_BACKSPACE = 33;
    private static final byte CTRL_CARRIAGE_RETURN = 45;
    private static final byte CTRL_DELETE_TO_END_OF_ROW = 36;
    private static final byte CTRL_END_OF_CAPTION = 47;
    private static final byte CTRL_ERASE_DISPLAYED_MEMORY = 44;
    private static final byte CTRL_ERASE_NON_DISPLAYED_MEMORY = 46;
    private static final byte CTRL_RESUME_CAPTION_LOADING = 32;
    private static final byte CTRL_RESUME_DIRECT_CAPTIONING = 41;
    private static final byte CTRL_ROLL_UP_CAPTIONS_2_ROWS = 37;
    private static final byte CTRL_ROLL_UP_CAPTIONS_3_ROWS = 38;
    private static final byte CTRL_ROLL_UP_CAPTIONS_4_ROWS = 39;
    private static final int DEFAULT_CAPTIONS_ROW_COUNT = 4;
    private static final int NTSC_CC_FIELD_1 = 0;
    private static final int NTSC_CC_FIELD_2 = 1;
    private static final int[] ROW_INDICES = null;
    private static final int[] SPECIAL_CHARACTER_SET = null;
    private static final int[] SPECIAL_ES_FR_CHARACTER_SET = null;
    private static final int[] SPECIAL_PT_DE_CHARACTER_SET = null;
    private static final int[] STYLE_COLORS = null;
    private static final int STYLE_ITALICS = 7;
    private static final int STYLE_UNCHANGED = 8;
    private int captionMode;
    private int captionRowCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray ccData;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder> cueBuilders;
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> cues;
    private com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder currentCueBuilder;
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> lastCues;
    private final int packetLength;
    private byte repeatableControlCc1;
    private byte repeatableControlCc2;
    private boolean repeatableControlSet;
    private final int selectedField;

    private static class CueBuilder {
        private static final int BASE_ROW = 15;
        private static final int SCREEN_CHARWIDTH = 32;
        private int captionMode;
        private int captionRowCount;
        private final java.lang.StringBuilder captionStringBuilder;
        private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder.CueStyle> cueStyles;
        private int indent;
        private final java.util.List<android.text.SpannableString> rolledUpCaptions;
        private int row;
        private int tabOffset;

        private static class CueStyle {
            public int start;
            public final int style;
            public final boolean underline;

            public CueStyle(int r1, boolean r2, int r3) {
                    r0 = this;
                    r0.<init>()
                    r0.style = r1
                    r0.underline = r2
                    r0.start = r3
                    return
            }
        }

        public CueBuilder(int r2, int r3) {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.cueStyles = r0
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.rolledUpCaptions = r0
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                r1.captionStringBuilder = r0
                r1.reset(r2)
                r1.setCaptionRowCount(r3)
                return
        }

        private static void setColorSpan(android.text.SpannableStringBuilder r1, int r2, int r3, int r4) {
                r0 = -1
                if (r4 != r0) goto L4
                return
            L4:
                android.text.style.ForegroundColorSpan r0 = new android.text.style.ForegroundColorSpan
                r0.<init>(r4)
                r4 = 33
                r1.setSpan(r0, r2, r3, r4)
                return
        }

        private static void setItalicSpan(android.text.SpannableStringBuilder r2, int r3, int r4) {
                android.text.style.StyleSpan r0 = new android.text.style.StyleSpan
                r1 = 2
                r0.<init>(r1)
                r1 = 33
                r2.setSpan(r0, r3, r4, r1)
                return
        }

        private static void setUnderlineSpan(android.text.SpannableStringBuilder r2, int r3, int r4) {
                android.text.style.UnderlineSpan r0 = new android.text.style.UnderlineSpan
                r0.<init>()
                r1 = 33
                r2.setSpan(r0, r3, r4, r1)
                return
        }

        public void append(char r2) {
                r1 = this;
                java.lang.StringBuilder r0 = r1.captionStringBuilder
                r0.append(r2)
                return
        }

        public void backspace() {
                r4 = this;
                java.lang.StringBuilder r0 = r4.captionStringBuilder
                int r0 = r0.length()
                if (r0 <= 0) goto L2e
                java.lang.StringBuilder r1 = r4.captionStringBuilder
                int r2 = r0 + (-1)
                r1.delete(r2, r0)
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r1 = r4.cueStyles
                int r1 = r1.size()
                int r1 = r1 + (-1)
            L17:
                if (r1 < 0) goto L2e
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r2 = r4.cueStyles
                java.lang.Object r2 = r2.get(r1)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder.CueStyle) r2
                int r3 = r2.start
                if (r3 != r0) goto L2e
                int r3 = r2.start
                int r3 = r3 + (-1)
                r2.start = r3
                int r1 = r1 + (-1)
                goto L17
            L2e:
                return
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.Cue build() {
                r12 = this;
                android.text.SpannableStringBuilder r1 = new android.text.SpannableStringBuilder
                r1.<init>()
                r0 = 0
                r2 = r0
            L7:
                java.util.List<android.text.SpannableString> r3 = r12.rolledUpCaptions
                int r3 = r3.size()
                if (r2 >= r3) goto L22
                java.util.List<android.text.SpannableString> r3 = r12.rolledUpCaptions
                java.lang.Object r3 = r3.get(r2)
                java.lang.CharSequence r3 = (java.lang.CharSequence) r3
                r1.append(r3)
                r3 = 10
                r1.append(r3)
                int r2 = r2 + 1
                goto L7
            L22:
                android.text.SpannableString r2 = r12.buildSpannableString()
                r1.append(r2)
                int r2 = r1.length()
                if (r2 != 0) goto L31
                r0 = 0
                return r0
            L31:
                int r2 = r12.indent
                int r3 = r12.tabOffset
                int r2 = r2 + r3
                int r3 = 32 - r2
                int r4 = r1.length()
                int r3 = r3 - r4
                int r4 = r2 - r3
                int r5 = r12.captionMode
                r6 = 1
                r7 = 2
                if (r5 != r7) goto L53
                int r5 = java.lang.Math.abs(r4)
                r8 = 3
                if (r5 < r8) goto L4e
                if (r3 >= 0) goto L53
            L4e:
                r2 = 1056964608(0x3f000000, float:0.5)
                r8 = r2
                r9 = r6
                goto L70
            L53:
                int r5 = r12.captionMode
                r8 = 1036831949(0x3dcccccd, float:0.1)
                r9 = 1061997773(0x3f4ccccd, float:0.8)
                r10 = 1107296256(0x42000000, float:32.0)
                if (r5 != r7) goto L6a
                if (r4 <= 0) goto L6a
                int r2 = 32 - r3
                float r2 = (float) r2
                float r2 = r2 / r10
                float r2 = r2 * r9
                float r2 = r2 + r8
                r8 = r2
                r9 = r7
                goto L70
            L6a:
                float r2 = (float) r2
                float r2 = r2 / r10
                float r2 = r2 * r9
                float r2 = r2 + r8
                r9 = r0
                r8 = r2
            L70:
                int r2 = r12.captionMode
                if (r2 == r6) goto L7c
                int r2 = r12.row
                r3 = 7
                if (r2 <= r3) goto L7a
                goto L7c
            L7a:
                r5 = r0
                goto L83
            L7c:
                int r0 = r12.row
                int r0 = r0 + (-15)
                int r2 = r0 + (-2)
                r5 = r7
            L83:
                com.mbridge.msdk.playercommon.exoplayer2.text.Cue r10 = new com.mbridge.msdk.playercommon.exoplayer2.text.Cue
                android.text.Layout$Alignment r3 = android.text.Layout.Alignment.ALIGN_NORMAL
                float r4 = (float) r2
                r6 = 1
                r11 = 1
                r0 = r10
                r2 = r3
                r3 = r4
                r4 = r6
                r6 = r8
                r7 = r9
                r8 = r11
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return r10
        }

        public android.text.SpannableString buildSpannableString() {
                r15 = this;
                android.text.SpannableStringBuilder r0 = new android.text.SpannableStringBuilder
                java.lang.StringBuilder r1 = r15.captionStringBuilder
                r0.<init>(r1)
                int r1 = r0.length()
                r2 = 0
                r3 = -1
                r4 = r2
                r7 = r4
                r10 = r7
                r5 = r3
                r6 = r5
                r8 = r6
                r9 = r8
            L14:
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r11 = r15.cueStyles
                int r11 = r11.size()
                if (r4 >= r11) goto L7b
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r11 = r15.cueStyles
                java.lang.Object r11 = r11.get(r4)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle r11 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder.CueStyle) r11
                boolean r12 = r11.underline
                int r13 = r11.style
                r14 = 8
                if (r13 == r14) goto L3c
                r10 = 7
                if (r13 != r10) goto L31
                r14 = 1
                goto L32
            L31:
                r14 = r2
            L32:
                if (r13 != r10) goto L35
                goto L3b
            L35:
                int[] r9 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.access$000()
                r9 = r9[r13]
            L3b:
                r10 = r14
            L3c:
                int r11 = r11.start
                int r4 = r4 + 1
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r13 = r15.cueStyles
                int r13 = r13.size()
                if (r4 >= r13) goto L53
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r13 = r15.cueStyles
                java.lang.Object r13 = r13.get(r4)
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle r13 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder.CueStyle) r13
                int r13 = r13.start
                goto L54
            L53:
                r13 = r1
            L54:
                if (r11 != r13) goto L57
                goto L14
            L57:
                if (r5 == r3) goto L60
                if (r12 != 0) goto L60
                setUnderlineSpan(r0, r5, r11)
                r5 = r3
                goto L65
            L60:
                if (r5 != r3) goto L65
                if (r12 == 0) goto L65
                r5 = r11
            L65:
                if (r6 == r3) goto L6e
                if (r10 != 0) goto L6e
                setItalicSpan(r0, r6, r11)
                r6 = r3
                goto L73
            L6e:
                if (r6 != r3) goto L73
                if (r10 == 0) goto L73
                r6 = r11
            L73:
                if (r9 == r8) goto L14
                setColorSpan(r0, r7, r11, r8)
                r8 = r9
                r7 = r11
                goto L14
            L7b:
                if (r5 == r3) goto L82
                if (r5 == r1) goto L82
                setUnderlineSpan(r0, r5, r1)
            L82:
                if (r6 == r3) goto L89
                if (r6 == r1) goto L89
                setItalicSpan(r0, r6, r1)
            L89:
                if (r7 == r1) goto L8e
                setColorSpan(r0, r7, r1, r8)
            L8e:
                android.text.SpannableString r1 = new android.text.SpannableString
                r1.<init>(r0)
                return r1
        }

        public int getRow() {
                r1 = this;
                int r0 = r1.row
                return r0
        }

        public boolean isEmpty() {
                r1 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r0 = r1.cueStyles
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L1a
                java.util.List<android.text.SpannableString> r0 = r1.rolledUpCaptions
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto L1a
                java.lang.StringBuilder r0 = r1.captionStringBuilder
                int r0 = r0.length()
                if (r0 != 0) goto L1a
                r0 = 1
                goto L1b
            L1a:
                r0 = 0
            L1b:
                return r0
        }

        public void reset(int r2) {
                r1 = this;
                r1.captionMode = r2
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r2 = r1.cueStyles
                r2.clear()
                java.util.List<android.text.SpannableString> r2 = r1.rolledUpCaptions
                r2.clear()
                java.lang.StringBuilder r2 = r1.captionStringBuilder
                r0 = 0
                r2.setLength(r0)
                r2 = 15
                r1.row = r2
                r1.indent = r0
                r1.tabOffset = r0
                return
        }

        public void rollUp() {
                r3 = this;
                java.util.List<android.text.SpannableString> r0 = r3.rolledUpCaptions
                android.text.SpannableString r1 = r3.buildSpannableString()
                r0.add(r1)
                java.lang.StringBuilder r0 = r3.captionStringBuilder
                r1 = 0
                r0.setLength(r1)
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r0 = r3.cueStyles
                r0.clear()
                int r0 = r3.captionRowCount
                int r2 = r3.row
                int r0 = java.lang.Math.min(r0, r2)
            L1c:
                java.util.List<android.text.SpannableString> r2 = r3.rolledUpCaptions
                int r2 = r2.size()
                if (r2 < r0) goto L2a
                java.util.List<android.text.SpannableString> r2 = r3.rolledUpCaptions
                r2.remove(r1)
                goto L1c
            L2a:
                return
        }

        public void setCaptionRowCount(int r1) {
                r0 = this;
                r0.captionRowCount = r1
                return
        }

        public void setIndent(int r1) {
                r0 = this;
                r0.indent = r1
                return
        }

        public void setRow(int r1) {
                r0 = this;
                r0.row = r1
                return
        }

        public void setStyle(int r4, boolean r5) {
                r3 = this;
                java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle> r0 = r3.cueStyles
                com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder$CueStyle
                java.lang.StringBuilder r2 = r3.captionStringBuilder
                int r2 = r2.length()
                r1.<init>(r4, r5, r2)
                r0.add(r1)
                return
        }

        public void setTab(int r1) {
                r0 = this;
                r0.tabOffset = r1
                return
        }

        public java.lang.String toString() {
                r1 = this;
                java.lang.StringBuilder r0 = r1.captionStringBuilder
                java.lang.String r0 = r0.toString()
                return r0
        }
    }

    static {
            r0 = 8
            int[] r1 = new int[r0]
            r1 = {x003c: FILL_ARRAY_DATA , data: [11, 1, 3, 12, 14, 5, 7, 9} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.ROW_INDICES = r1
            int[] r0 = new int[r0]
            r0 = {x0050: FILL_ARRAY_DATA , data: [0, 4, 8, 12, 16, 20, 24, 28} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.COLUMN_INDICES = r0
            r0 = 7
            int[] r0 = new int[r0]
            r0 = {x0064: FILL_ARRAY_DATA , data: [-1, -16711936, -16776961, -16711681, -65536, -256, -65281} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.STYLE_COLORS = r0
            r0 = 96
            int[] r0 = new int[r0]
            r0 = {x0076: FILL_ARRAY_DATA , data: [32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 225, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 233, 93, 237, 243, 250, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122, 231, 247, 209, 241, 9632} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.BASIC_CHARACTER_SET = r0
            r0 = 16
            int[] r0 = new int[r0]
            r0 = {x013a: FILL_ARRAY_DATA , data: [174, 176, 189, 191, 8482, 162, 163, 9834, 224, 32, 232, 226, 234, 238, 244, 251} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_CHARACTER_SET = r0
            r0 = 32
            int[] r1 = new int[r0]
            r1 = {x015e: FILL_ARRAY_DATA , data: [193, 201, 211, 218, 220, 252, 8216, 161, 42, 39, 8212, 169, 8480, 8226, 8220, 8221, 192, 194, 199, 200, 202, 203, 235, 206, 207, 239, 212, 217, 249, 219, 171, 187} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_ES_FR_CHARACTER_SET = r1
            int[] r0 = new int[r0]
            r0 = {x01a2: FILL_ARRAY_DATA , data: [195, 227, 205, 204, 236, 210, 242, 213, 245, 123, 125, 92, 94, 95, 124, 126, 196, 228, 214, 246, 223, 165, 164, 9474, 197, 229, 216, 248, 9484, 9488, 9492, 9496} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_PT_DE_CHARACTER_SET = r0
            return
    }

    public Cea608Decoder(java.lang.String r5, int r6) {
            r4 = this;
            r4.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r0.<init>()
            r4.ccData = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r4.cueBuilders = r0
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder
            r1 = 4
            r2 = 0
            r0.<init>(r2, r1)
            r4.currentCueBuilder = r0
            java.lang.String r0 = "application/x-mp4-cea-608"
            boolean r5 = r0.equals(r5)
            r0 = 2
            r3 = 3
            if (r5 == 0) goto L26
            r5 = r0
            goto L27
        L26:
            r5 = r3
        L27:
            r4.packetLength = r5
            if (r6 == r3) goto L31
            if (r6 == r1) goto L31
            r5 = 1
            r4.selectedField = r5
            goto L33
        L31:
            r4.selectedField = r0
        L33:
            r4.setCaptionMode(r2)
            r4.resetCueBuilders()
            return
    }

    static int[] access$000() {
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.STYLE_COLORS
            return r0
    }

    private static char getChar(byte r1) {
            r1 = r1 & 127(0x7f, float:1.78E-43)
            int r1 = r1 + (-32)
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.BASIC_CHARACTER_SET
            r1 = r0[r1]
            char r1 = (char) r1
            return r1
    }

    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> getDisplayCues() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        L6:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder> r2 = r3.cueBuilders
            int r2 = r2.size()
            if (r1 >= r2) goto L22
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder> r2 = r3.cueBuilders
            java.lang.Object r2 = r2.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r2 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.CueBuilder) r2
            com.mbridge.msdk.playercommon.exoplayer2.text.Cue r2 = r2.build()
            if (r2 == 0) goto L1f
            r0.add(r2)
        L1f:
            int r1 = r1 + 1
            goto L6
        L22:
            return r0
    }

    private static char getExtendedEsFrChar(byte r1) {
            r1 = r1 & 31
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_ES_FR_CHARACTER_SET
            r1 = r0[r1]
            char r1 = (char) r1
            return r1
    }

    private static char getExtendedPtDeChar(byte r1) {
            r1 = r1 & 31
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_PT_DE_CHARACTER_SET
            r1 = r0[r1]
            char r1 = (char) r1
            return r1
    }

    private static char getSpecialChar(byte r1) {
            r1 = r1 & 15
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.SPECIAL_CHARACTER_SET
            r1 = r0[r1]
            char r1 = (char) r1
            return r1
    }

    private boolean handleCtrl(byte r4, byte r5) {
            r3 = this;
            boolean r0 = isRepeatable(r4)
            if (r0 == 0) goto L1d
            boolean r1 = r3.repeatableControlSet
            r2 = 1
            if (r1 == 0) goto L17
            byte r1 = r3.repeatableControlCc1
            if (r1 != r4) goto L17
            byte r1 = r3.repeatableControlCc2
            if (r1 != r5) goto L17
            r4 = 0
            r3.repeatableControlSet = r4
            return r2
        L17:
            r3.repeatableControlSet = r2
            r3.repeatableControlCc1 = r4
            r3.repeatableControlCc2 = r5
        L1d:
            boolean r1 = isMidrowCtrlCode(r4, r5)
            if (r1 == 0) goto L27
            r3.handleMidrowCtrl(r5)
            goto L48
        L27:
            boolean r1 = isPreambleAddressCode(r4, r5)
            if (r1 == 0) goto L31
            r3.handlePreambleAddressCode(r4, r5)
            goto L48
        L31:
            boolean r1 = isTabCtrlCode(r4, r5)
            if (r1 == 0) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r4 = r3.currentCueBuilder
            int r5 = r5 + (-32)
            r4.setTab(r5)
            goto L48
        L3f:
            boolean r4 = isMiscCode(r4, r5)
            if (r4 == 0) goto L48
            r3.handleMiscCode(r5)
        L48:
            return r0
    }

    private void handleMidrowCtrl(byte r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r2.currentCueBuilder
            r1 = 32
            r0.append(r1)
            r0 = r3 & 1
            r1 = 1
            if (r0 != r1) goto Le
            r0 = r1
            goto Lf
        Le:
            r0 = 0
        Lf:
            int r3 = r3 >> r1
            r3 = r3 & 7
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r2.currentCueBuilder
            r1.setStyle(r3, r0)
            return
    }

    private void handleMiscCode(byte r5) {
            r4 = this;
            r0 = 32
            r1 = 2
            if (r5 == r0) goto L64
            r0 = 41
            r2 = 3
            if (r5 == r0) goto L60
            r0 = 1
            switch(r5) {
                case 37: goto L59;
                case 38: goto L52;
                case 39: goto L4a;
                default: goto Le;
            }
        Le:
            int r1 = r4.captionMode
            if (r1 != 0) goto L13
            return
        L13:
            r3 = 33
            if (r5 == r3) goto L44
            switch(r5) {
                case 44: goto L39;
                case 45: goto L29;
                case 46: goto L25;
                case 47: goto L1b;
                default: goto L1a;
            }
        L1a:
            goto L49
        L1b:
            java.util.List r5 = r4.getDisplayCues()
            r4.cues = r5
            r4.resetCueBuilders()
            goto L49
        L25:
            r4.resetCueBuilders()
            goto L49
        L29:
            if (r1 != r0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r5 = r4.currentCueBuilder
            boolean r5 = r5.isEmpty()
            if (r5 != 0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r5 = r4.currentCueBuilder
            r5.rollUp()
            goto L49
        L39:
            r5 = 0
            r4.cues = r5
            if (r1 == r0) goto L40
            if (r1 != r2) goto L49
        L40:
            r4.resetCueBuilders()
            goto L49
        L44:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r5 = r4.currentCueBuilder
            r5.backspace()
        L49:
            return
        L4a:
            r4.setCaptionMode(r0)
            r5 = 4
            r4.setCaptionRowCount(r5)
            return
        L52:
            r4.setCaptionMode(r0)
            r4.setCaptionRowCount(r2)
            return
        L59:
            r4.setCaptionMode(r0)
            r4.setCaptionRowCount(r1)
            return
        L60:
            r4.setCaptionMode(r2)
            return
        L64:
            r4.setCaptionMode(r1)
            return
    }

    private void handlePreambleAddressCode(byte r6, byte r7) {
            r5 = this;
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.ROW_INDICES
            r6 = r6 & 7
            r6 = r0[r6]
            r0 = r7 & 32
            r1 = 0
            r2 = 1
            if (r0 == 0) goto Le
            r0 = r2
            goto Lf
        Le:
            r0 = r1
        Lf:
            if (r0 == 0) goto L13
            int r6 = r6 + 1
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r5.currentCueBuilder
            int r0 = r0.getRow()
            if (r6 == r0) goto L3c
            int r0 = r5.captionMode
            if (r0 == r2) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r5.currentCueBuilder
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder
            int r3 = r5.captionMode
            int r4 = r5.captionRowCount
            r0.<init>(r3, r4)
            r5.currentCueBuilder = r0
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder> r3 = r5.cueBuilders
            r3.add(r0)
        L37:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r5.currentCueBuilder
            r0.setRow(r6)
        L3c:
            r6 = r7 & 16
            r0 = 16
            if (r6 != r0) goto L44
            r6 = r2
            goto L45
        L44:
            r6 = r1
        L45:
            r0 = r7 & 1
            if (r0 != r2) goto L4a
            r1 = r2
        L4a:
            int r7 = r7 >> r2
            r7 = r7 & 7
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r5.currentCueBuilder
            if (r6 == 0) goto L54
            r2 = 8
            goto L55
        L54:
            r2 = r7
        L55:
            r0.setStyle(r2, r1)
            if (r6 == 0) goto L63
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r6 = r5.currentCueBuilder
            int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder.COLUMN_INDICES
            r7 = r0[r7]
            r6.setIndent(r7)
        L63:
            return
    }

    private static boolean isMidrowCtrlCode(byte r1, byte r2) {
            r1 = r1 & 247(0xf7, float:3.46E-43)
            r0 = 17
            if (r1 != r0) goto Le
            r1 = r2 & 240(0xf0, float:3.36E-43)
            r2 = 32
            if (r1 != r2) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private static boolean isMiscCode(byte r1, byte r2) {
            r1 = r1 & 247(0xf7, float:3.46E-43)
            r0 = 20
            if (r1 != r0) goto Le
            r1 = r2 & 240(0xf0, float:3.36E-43)
            r2 = 32
            if (r1 != r2) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private static boolean isPreambleAddressCode(byte r1, byte r2) {
            r1 = r1 & 240(0xf0, float:3.36E-43)
            r0 = 16
            if (r1 != r0) goto Le
            r1 = r2 & 192(0xc0, float:2.69E-43)
            r2 = 64
            if (r1 != r2) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private static boolean isRepeatable(byte r1) {
            r1 = r1 & 240(0xf0, float:3.36E-43)
            r0 = 16
            if (r1 != r0) goto L8
            r1 = 1
            goto L9
        L8:
            r1 = 0
        L9:
            return r1
    }

    private static boolean isTabCtrlCode(byte r1, byte r2) {
            r1 = r1 & 247(0xf7, float:3.46E-43)
            r0 = 23
            if (r1 != r0) goto L10
            r1 = 33
            if (r2 < r1) goto L10
            r1 = 35
            if (r2 > r1) goto L10
            r1 = 1
            goto L11
        L10:
            r1 = 0
        L11:
            return r1
    }

    private void resetCueBuilders() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r2.currentCueBuilder
            int r1 = r2.captionMode
            r0.reset(r1)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder> r0 = r2.cueBuilders
            r0.clear()
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder> r0 = r2.cueBuilders
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r2.currentCueBuilder
            r0.add(r1)
            return
    }

    private void setCaptionMode(int r3) {
            r2 = this;
            int r0 = r2.captionMode
            if (r0 != r3) goto L5
            return
        L5:
            r2.captionMode = r3
            r2.resetCueBuilders()
            r1 = 3
            if (r0 == r1) goto L12
            r0 = 1
            if (r3 == r0) goto L12
            if (r3 != 0) goto L15
        L12:
            r3 = 0
            r2.cues = r3
        L15:
            return
    }

    private void setCaptionRowCount(int r2) {
            r1 = this;
            r1.captionRowCount = r2
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r0 = r1.currentCueBuilder
            r0.setCaptionRowCount(r2)
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
    protected final void decode(com.mbridge.msdk.playercommon.exoplayer2.text.SubtitleInputBuffer r10) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r9.ccData
            java.nio.ByteBuffer r1 = r10.data
            byte[] r1 = r1.array()
            java.nio.ByteBuffer r10 = r10.data
            int r10 = r10.limit()
            r0.reset(r1, r10)
            r10 = 0
            r0 = 1
            r1 = r10
            r2 = r1
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r9.ccData
            int r3 = r3.bytesLeft()
            int r4 = r9.packetLength
            if (r3 < r4) goto Lba
            r3 = 2
            if (r4 != r3) goto L24
            r4 = -4
            goto L2b
        L24:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r9.ccData
            int r4 = r4.readUnsignedByte()
            byte r4 = (byte) r4
        L2b:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r5 = r9.ccData
            int r5 = r5.readUnsignedByte()
            r5 = r5 & 127(0x7f, float:1.78E-43)
            byte r5 = (byte) r5
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r6 = r9.ccData
            int r6 = r6.readUnsignedByte()
            r6 = r6 & 127(0x7f, float:1.78E-43)
            byte r6 = (byte) r6
            r7 = r4 & 6
            r8 = 4
            if (r7 == r8) goto L43
            goto L15
        L43:
            int r7 = r9.selectedField
            if (r7 != r0) goto L4b
            r7 = r4 & 1
            if (r7 != 0) goto L15
        L4b:
            int r7 = r9.selectedField
            if (r7 != r3) goto L54
            r3 = r4 & 1
            if (r3 == r0) goto L54
            goto L15
        L54:
            if (r5 != 0) goto L59
            if (r6 != 0) goto L59
            goto L15
        L59:
            r1 = r5 & 247(0xf7, float:3.46E-43)
            r3 = 17
            if (r1 != r3) goto L6f
            r1 = r6 & 240(0xf0, float:3.36E-43)
            r3 = 48
            if (r1 != r3) goto L6f
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            char r3 = getSpecialChar(r6)
            r1.append(r3)
            goto Lb7
        L6f:
            r1 = r5 & 246(0xf6, float:3.45E-43)
            r3 = 18
            if (r1 != r3) goto L98
            r1 = r6 & 224(0xe0, float:3.14E-43)
            r3 = 32
            if (r1 != r3) goto L98
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            r1.backspace()
            r1 = r5 & 1
            if (r1 != 0) goto L8e
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            char r3 = getExtendedEsFrChar(r6)
            r1.append(r3)
            goto Lb7
        L8e:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            char r3 = getExtendedPtDeChar(r6)
            r1.append(r3)
            goto Lb7
        L98:
            r1 = r5 & 224(0xe0, float:3.14E-43)
            if (r1 != 0) goto La1
            boolean r2 = r9.handleCtrl(r5, r6)
            goto Lb7
        La1:
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            char r3 = getChar(r5)
            r1.append(r3)
            r1 = r6 & 224(0xe0, float:3.14E-43)
            if (r1 == 0) goto Lb7
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea608Decoder$CueBuilder r1 = r9.currentCueBuilder
            char r3 = getChar(r6)
            r1.append(r3)
        Lb7:
            r1 = r0
            goto L15
        Lba:
            if (r1 == 0) goto Lcd
            if (r2 != 0) goto Lc0
            r9.repeatableControlSet = r10
        Lc0:
            int r10 = r9.captionMode
            if (r10 == r0) goto Lc7
            r0 = 3
            if (r10 != r0) goto Lcd
        Lc7:
            java.util.List r10 = r9.getDisplayCues()
            r9.cues = r10
        Lcd:
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
            r2 = this;
            super.flush()
            r0 = 0
            r2.cues = r0
            r2.lastCues = r0
            r0 = 0
            r2.setCaptionMode(r0)
            r1 = 4
            r2.setCaptionRowCount(r1)
            r2.resetCueBuilders()
            r2.repeatableControlSet = r0
            r2.repeatableControlCc1 = r0
            r2.repeatableControlCc2 = r0
            return
    }

    @Override
    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = "Cea608Decoder"
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
            return
    }

    @Override
    public final void setPositionUs(long r1) {
            r0 = this;
            super.setPositionUs(r1)
            return
    }
}
