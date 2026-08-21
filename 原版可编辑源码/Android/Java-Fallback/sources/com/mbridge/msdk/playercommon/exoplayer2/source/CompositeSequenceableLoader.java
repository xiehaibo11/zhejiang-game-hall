package com.mbridge.msdk.playercommon.exoplayer2.source;

public class CompositeSequenceableLoader implements com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader {
    protected final com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] loaders;

    public CompositeSequenceableLoader(com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] r1) {
            r0 = this;
            r0.<init>()
            r0.loaders = r1
            return
    }

    @Override
    public boolean continueLoading(long r18) {
            r17 = this;
            r0 = r18
            r2 = 0
            r3 = r2
        L4:
            long r4 = r17.getNextLoadPositionUs()
            r6 = -9223372036854775808
            int r8 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r8 != 0) goto L11
            r8 = r17
            goto L3e
        L11:
            r8 = r17
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] r9 = r8.loaders
            int r10 = r9.length
            r11 = r2
            r12 = r11
        L18:
            if (r11 >= r10) goto L3b
            r13 = r9[r11]
            long r14 = r13.getNextLoadPositionUs()
            int r16 = (r14 > r6 ? 1 : (r14 == r6 ? 0 : -1))
            if (r16 == 0) goto L2b
            int r16 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r16 > 0) goto L2b
            r16 = 1
            goto L2d
        L2b:
            r16 = r2
        L2d:
            int r14 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r14 == 0) goto L33
            if (r16 == 0) goto L38
        L33:
            boolean r13 = r13.continueLoading(r0)
            r12 = r12 | r13
        L38:
            int r11 = r11 + 1
            goto L18
        L3b:
            r3 = r3 | r12
            if (r12 != 0) goto L4
        L3e:
            return r3
    }

    @Override
    public final long getBufferedPositionUs() {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] r0 = r11.loaders
            int r1 = r0.length
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
            r5 = r2
        La:
            r7 = -9223372036854775808
            if (r4 >= r1) goto L1f
            r9 = r0[r4]
            long r9 = r9.getBufferedPositionUs()
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 == 0) goto L1c
            long r5 = java.lang.Math.min(r5, r9)
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 != 0) goto L24
            r5 = r7
        L24:
            return r5
    }

    @Override
    public final long getNextLoadPositionUs() {
            r11 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] r0 = r11.loaders
            int r1 = r0.length
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r4 = 0
            r5 = r2
        La:
            r7 = -9223372036854775808
            if (r4 >= r1) goto L1f
            r9 = r0[r4]
            long r9 = r9.getNextLoadPositionUs()
            int r7 = (r9 > r7 ? 1 : (r9 == r7 ? 0 : -1))
            if (r7 == 0) goto L1c
            long r5 = java.lang.Math.min(r5, r9)
        L1c:
            int r4 = r4 + 1
            goto La
        L1f:
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 != 0) goto L24
            r5 = r7
        L24:
            return r5
    }

    @Override
    public final void reevaluateBuffer(long r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader[] r0 = r4.loaders
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.reevaluateBuffer(r5)
            int r2 = r2 + 1
            goto L4
        Le:
            return
    }
}
