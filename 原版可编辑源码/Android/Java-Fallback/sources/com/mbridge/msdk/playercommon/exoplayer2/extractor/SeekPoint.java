package com.mbridge.msdk.playercommon.exoplayer2.extractor;

public final class SeekPoint {
    public static final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint START = null;
    public final long position;
    public final long timeUs;

    static {
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r1 = 0
            r0.<init>(r1, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint.START = r0
            return
    }

    public SeekPoint(long r1, long r3) {
            r0 = this;
            r0.<init>()
            r0.timeUs = r1
            r0.position = r3
            return
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto L27
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L12
            goto L27
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r7 = (com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint) r7
            long r2 = r6.timeUs
            long r4 = r7.timeUs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto L25
            long r2 = r6.position
            long r4 = r7.position
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 != 0) goto L25
            goto L26
        L25:
            r0 = r1
        L26:
            return r0
        L27:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            long r0 = r3.timeUs
            int r0 = (int) r0
            int r0 = r0 * 31
            long r1 = r3.position
            int r1 = (int) r1
            int r0 = r0 + r1
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "[timeUs="
            r0.append(r1)
            long r1 = r3.timeUs
            r0.append(r1)
            java.lang.String r1 = ", position="
            r0.append(r1)
            long r1 = r3.position
            r0.append(r1)
            java.lang.String r1 = "]"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
