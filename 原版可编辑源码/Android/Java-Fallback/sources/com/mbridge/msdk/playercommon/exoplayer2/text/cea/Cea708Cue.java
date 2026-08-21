package com.mbridge.msdk.playercommon.exoplayer2.text.cea;

final class Cea708Cue extends com.mbridge.msdk.playercommon.exoplayer2.text.Cue implements java.lang.Comparable<com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue> {
    public static final int PRIORITY_UNSET = -1;
    public final int priority;

    public Cea708Cue(java.lang.CharSequence r1, android.text.Layout.Alignment r2, float r3, int r4, int r5, float r6, int r7, float r8, boolean r9, int r10, int r11) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10)
            r0.priority = r11
            return
    }

    public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue r2) {
            r1 = this;
            int r2 = r2.priority
            int r0 = r1.priority
            if (r2 >= r0) goto L8
            r2 = -1
            return r2
        L8:
            if (r2 <= r0) goto Lc
            r2 = 1
            return r2
        Lc:
            r2 = 0
            return r2
    }

    @Override
    public final int compareTo(com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.cea.Cea708Cue) r1
            int r1 = r0.compareTo(r1)
            return r1
    }
}
