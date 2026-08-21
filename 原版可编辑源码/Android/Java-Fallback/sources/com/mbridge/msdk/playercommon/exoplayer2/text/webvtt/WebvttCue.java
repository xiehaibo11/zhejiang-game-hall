package com.mbridge.msdk.playercommon.exoplayer2.text.webvtt;

public final class WebvttCue extends com.mbridge.msdk.playercommon.exoplayer2.text.Cue {
    public final long endTime;
    public final long startTime;

    static class 1 {
        static final int[] $SwitchMap$android$text$Layout$Alignment = null;

        static {
                android.text.Layout$Alignment[] r0 = android.text.Layout.Alignment.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.1.$SwitchMap$android$text$Layout$Alignment = r0
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_NORMAL     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.1.$SwitchMap$android$text$Layout$Alignment     // Catch: java.lang.NoSuchFieldError -> L1d
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_CENTER     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.1.$SwitchMap$android$text$Layout$Alignment     // Catch: java.lang.NoSuchFieldError -> L28
                android.text.Layout$Alignment r1 = android.text.Layout.Alignment.ALIGN_OPPOSITE     // Catch: java.lang.NoSuchFieldError -> L28
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L28
                r2 = 3
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L28
            L28:
                return
        }
    }

    public static class Builder {
        private static final java.lang.String TAG = "WebvttCueBuilder";
        private long endTime;
        private float line;
        private int lineAnchor;
        private int lineType;
        private float position;
        private int positionAnchor;
        private long startTime;
        private android.text.SpannableStringBuilder text;
        private android.text.Layout.Alignment textAlignment;
        private float width;

        public Builder() {
                r0 = this;
                r0.<init>()
                r0.reset()
                return
        }

        private com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder derivePositionAnchorFromAlignment() {
                r4 = this;
                android.text.Layout$Alignment r0 = r4.textAlignment
                if (r0 != 0) goto L9
                r0 = -2147483648(0xffffffff80000000, float:-0.0)
                r4.positionAnchor = r0
                goto L40
            L9:
                int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.1.$SwitchMap$android$text$Layout$Alignment
                android.text.Layout$Alignment r1 = r4.textAlignment
                int r1 = r1.ordinal()
                r0 = r0[r1]
                r1 = 0
                r2 = 1
                if (r0 == r2) goto L3e
                r3 = 2
                if (r0 == r3) goto L3b
                r2 = 3
                if (r0 == r2) goto L38
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r2 = "Unrecognized alignment: "
                r0.append(r2)
                android.text.Layout$Alignment r2 = r4.textAlignment
                r0.append(r2)
                java.lang.String r0 = r0.toString()
                java.lang.String r2 = "WebvttCueBuilder"
                android.util.Log.w(r2, r0)
                r4.positionAnchor = r1
                goto L40
            L38:
                r4.positionAnchor = r3
                goto L40
            L3b:
                r4.positionAnchor = r2
                goto L40
            L3e:
                r4.positionAnchor = r1
            L40:
                return r4
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue build() {
                r15 = this;
                float r0 = r15.position
                r1 = 1
                int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
                if (r0 == 0) goto L10
                int r0 = r15.positionAnchor
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                if (r0 != r1) goto L10
                r15.derivePositionAnchorFromAlignment()
            L10:
                com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue r0 = new com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue
                long r3 = r15.startTime
                long r5 = r15.endTime
                android.text.SpannableStringBuilder r7 = r15.text
                android.text.Layout$Alignment r8 = r15.textAlignment
                float r9 = r15.line
                int r10 = r15.lineType
                int r11 = r15.lineAnchor
                float r12 = r15.position
                int r13 = r15.positionAnchor
                float r14 = r15.width
                r2 = r0
                r2.<init>(r3, r5, r7, r8, r9, r10, r11, r12, r13, r14)
                return r0
        }

        public void reset() {
                r2 = this;
                r0 = 0
                r2.startTime = r0
                r2.endTime = r0
                r0 = 0
                r2.text = r0
                r2.textAlignment = r0
                r0 = 1
                r2.line = r0
                r1 = -2147483648(0xffffffff80000000, float:-0.0)
                r2.lineType = r1
                r2.lineAnchor = r1
                r2.position = r0
                r2.positionAnchor = r1
                r2.width = r0
                return
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setEndTime(long r1) {
                r0 = this;
                r0.endTime = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setLine(float r1) {
                r0 = this;
                r0.line = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setLineAnchor(int r1) {
                r0 = this;
                r0.lineAnchor = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setLineType(int r1) {
                r0 = this;
                r0.lineType = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setPosition(float r1) {
                r0 = this;
                r0.position = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setPositionAnchor(int r1) {
                r0 = this;
                r0.positionAnchor = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setStartTime(long r1) {
                r0 = this;
                r0.startTime = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setText(android.text.SpannableStringBuilder r1) {
                r0 = this;
                r0.text = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setTextAlignment(android.text.Layout.Alignment r1) {
                r0 = this;
                r0.textAlignment = r1
                return r0
        }

        public com.mbridge.msdk.playercommon.exoplayer2.text.webvtt.WebvttCue.Builder setWidth(float r1) {
                r0 = this;
                r0.width = r1
                return r0
        }
    }

    public WebvttCue(long r14, long r16, java.lang.CharSequence r18) {
            r13 = this;
            r6 = 0
            r7 = 1
            r8 = -2147483648(0xffffffff80000000, float:-0.0)
            r9 = -2147483648(0xffffffff80000000, float:-0.0)
            r10 = 1
            r11 = -2147483648(0xffffffff80000000, float:-0.0)
            r12 = 1
            r0 = r13
            r1 = r14
            r3 = r16
            r5 = r18
            r0.<init>(r1, r3, r5, r6, r7, r8, r9, r10, r11, r12)
            return
    }

    public WebvttCue(long r11, long r13, java.lang.CharSequence r15, android.text.Layout.Alignment r16, float r17, int r18, int r19, float r20, int r21, float r22) {
            r10 = this;
            r9 = r10
            r0 = r10
            r1 = r15
            r2 = r16
            r3 = r17
            r4 = r18
            r5 = r19
            r6 = r20
            r7 = r21
            r8 = r22
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            r0 = r11
            r9.startTime = r0
            r0 = r13
            r9.endTime = r0
            return
    }

    public WebvttCue(java.lang.CharSequence r7) {
            r6 = this;
            r1 = 0
            r3 = 0
            r0 = r6
            r5 = r7
            r0.<init>(r1, r3, r5)
            return
    }

    public final boolean isNormalCue() {
            r2 = this;
            float r0 = r2.line
            r1 = 1
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto Lf
            float r0 = r2.position
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }
}
