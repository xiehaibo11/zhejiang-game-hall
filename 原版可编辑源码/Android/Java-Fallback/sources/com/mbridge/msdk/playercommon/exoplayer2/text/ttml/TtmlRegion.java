package com.mbridge.msdk.playercommon.exoplayer2.text.ttml;

final class TtmlRegion {
    public final java.lang.String id;
    public final float line;
    public final int lineAnchor;
    public final int lineType;
    public final float position;
    public final float textSize;
    public final int textSizeType;
    public final float width;

    public TtmlRegion(java.lang.String r10) {
            r9 = this;
            r2 = 1
            r3 = 1
            r4 = -2147483648(0xffffffff80000000, float:-0.0)
            r5 = -2147483648(0xffffffff80000000, float:-0.0)
            r6 = 1
            r7 = -2147483648(0xffffffff80000000, float:-0.0)
            r8 = 1
            r0 = r9
            r1 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public TtmlRegion(java.lang.String r1, float r2, float r3, int r4, int r5, float r6, int r7, float r8) {
            r0 = this;
            r0.<init>()
            r0.id = r1
            r0.position = r2
            r0.line = r3
            r0.lineType = r4
            r0.lineAnchor = r5
            r0.width = r6
            r0.textSizeType = r7
            r0.textSize = r8
            return
    }
}
