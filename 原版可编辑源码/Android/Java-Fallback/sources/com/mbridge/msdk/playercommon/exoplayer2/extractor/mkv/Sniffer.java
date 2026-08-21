package com.mbridge.msdk.playercommon.exoplayer2.extractor.mkv;

final class Sniffer {
    private static final int ID_EBML = 440786851;
    private static final int SEARCH_LENGTH = 1024;
    private int peekLength;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray scratch;

    public Sniffer() {
            r2 = this;
            r2.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray
            r1 = 8
            r0.<init>(r1)
            r2.scratch = r0
            return
    }

    private long readUint(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r7) throws java.io.IOException, java.lang.InterruptedException {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.scratch
            byte[] r0 = r0.data
            r1 = 0
            r2 = 1
            r7.peekFully(r0, r1, r2)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.scratch
            byte[] r0 = r0.data
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            if (r0 != 0) goto L16
            r0 = -9223372036854775808
            return r0
        L16:
            r3 = 128(0x80, float:1.8E-43)
            r4 = r1
        L19:
            r5 = r0 & r3
            if (r5 != 0) goto L22
            int r3 = r3 >> 1
            int r4 = r4 + 1
            goto L19
        L22:
            int r3 = ~r3
            r0 = r0 & r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r3 = r6.scratch
            byte[] r3 = r3.data
            r7.peekFully(r3, r2, r4)
        L2b:
            if (r1 >= r4) goto L3b
            int r7 = r0 << 8
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r0 = r6.scratch
            byte[] r0 = r0.data
            int r1 = r1 + 1
            r0 = r0[r1]
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r0 = r0 + r7
            goto L2b
        L3b:
            int r7 = r6.peekLength
            int r4 = r4 + r2
            int r7 = r7 + r4
            r6.peekLength = r7
            long r0 = (long) r0
            return r0
    }

    public final boolean sniff(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r14) throws java.io.IOException, java.lang.InterruptedException {
            r13 = this;
            long r0 = r14.getLength()
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r3 = 1024(0x400, double:5.06E-321)
            if (r2 == 0) goto L12
            int r5 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r5 <= 0) goto L11
            goto L12
        L11:
            r3 = r0
        L12:
            int r3 = (int) r3
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r13.scratch
            byte[] r4 = r4.data
            r5 = 4
            r6 = 0
            r14.peekFully(r4, r6, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r13.scratch
            long r7 = r4.readUnsignedInt()
            r13.peekLength = r5
        L24:
            r4 = 440786851(0x1a45dfa3, double:2.1777764E-315)
            int r4 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            r5 = 1
            if (r4 == 0) goto L4d
            int r4 = r13.peekLength
            int r4 = r4 + r5
            r13.peekLength = r4
            if (r4 != r3) goto L34
            return r6
        L34:
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r4 = r13.scratch
            byte[] r4 = r4.data
            r14.peekFully(r4, r6, r5)
            r4 = 8
            long r4 = r7 << r4
            r7 = -256(0xffffffffffffff00, double:NaN)
            long r4 = r4 & r7
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r7 = r13.scratch
            byte[] r7 = r7.data
            r7 = r7[r6]
            r7 = r7 & 255(0xff, float:3.57E-43)
            long r7 = (long) r7
            long r7 = r7 | r4
            goto L24
        L4d:
            long r3 = r13.readUint(r14)
            int r7 = r13.peekLength
            long r7 = (long) r7
            r9 = -9223372036854775808
            int r11 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r11 == 0) goto L9a
            if (r2 == 0) goto L63
            long r11 = r7 + r3
            int r0 = (r11 > r0 ? 1 : (r11 == r0 ? 0 : -1))
            if (r0 < 0) goto L63
            goto L9a
        L63:
            int r0 = r13.peekLength
            long r1 = (long) r0
            long r11 = r7 + r3
            int r1 = (r1 > r11 ? 1 : (r1 == r11 ? 0 : -1))
            if (r1 >= 0) goto L94
            long r0 = r13.readUint(r14)
            int r0 = (r0 > r9 ? 1 : (r0 == r9 ? 0 : -1))
            if (r0 != 0) goto L75
            return r6
        L75:
            long r0 = r13.readUint(r14)
            r11 = 0
            int r2 = (r0 > r11 ? 1 : (r0 == r11 ? 0 : -1))
            if (r2 < 0) goto L93
            r11 = 2147483647(0x7fffffff, double:1.060997895E-314)
            int r11 = (r0 > r11 ? 1 : (r0 == r11 ? 0 : -1))
            if (r11 <= 0) goto L87
            goto L93
        L87:
            if (r2 == 0) goto L63
            int r0 = (int) r0
            r14.advancePeekPosition(r0)
            int r1 = r13.peekLength
            int r1 = r1 + r0
            r13.peekLength = r1
            goto L63
        L93:
            return r6
        L94:
            long r0 = (long) r0
            int r14 = (r0 > r11 ? 1 : (r0 == r11 ? 0 : -1))
            if (r14 != 0) goto L9a
            r6 = r5
        L9a:
            return r6
    }
}
