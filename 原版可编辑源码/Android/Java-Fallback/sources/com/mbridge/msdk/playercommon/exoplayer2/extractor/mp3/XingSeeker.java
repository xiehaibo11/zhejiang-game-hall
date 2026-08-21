package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3;

final class XingSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker {
    private static final java.lang.String TAG = "XingSeeker";
    private final long dataSize;
    private final long dataStartPosition;
    private final long durationUs;
    private final long[] tableOfContents;
    private final int xingFrameSize;

    private XingSeeker(long r10, int r12, long r13) {
            r9 = this;
            r6 = -1
            r8 = 0
            r0 = r9
            r1 = r10
            r3 = r12
            r4 = r13
            r0.<init>(r1, r3, r4, r6, r8)
            return
    }

    private XingSeeker(long r1, int r3, long r4, long r6, long[] r8) {
            r0 = this;
            r0.<init>()
            r0.dataStartPosition = r1
            r0.xingFrameSize = r3
            r0.durationUs = r4
            r0.dataSize = r6
            r0.tableOfContents = r8
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker create(long r22, long r24, com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r26, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r27) {
            r0 = r22
            r2 = r26
            int r3 = r2.samplesPerFrame
            int r4 = r2.sampleRate
            int r5 = r27.readInt()
            r6 = r5 & 1
            r7 = 1
            if (r6 != r7) goto L87
            int r6 = r27.readUnsignedIntToInt()
            if (r6 != 0) goto L19
            goto L87
        L19:
            long r7 = (long) r6
            long r9 = (long) r3
            r11 = 1000000(0xf4240, double:4.940656E-318)
            long r9 = r9 * r11
            long r11 = (long) r4
            long r17 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r7, r9, r11)
            r3 = 6
            r4 = r5 & 6
            if (r4 == r3) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker
            int r1 = r2.frameSize
            r13 = r0
            r14 = r24
            r16 = r1
            r13.<init>(r14, r16, r17)
            return r0
        L36:
            int r3 = r27.readUnsignedIntToInt()
            long r3 = (long) r3
            r5 = 100
            long[] r6 = new long[r5]
            r7 = 0
        L40:
            if (r7 >= r5) goto L4c
            int r8 = r27.readUnsignedByte()
            long r8 = (long) r8
            r6[r7] = r8
            int r7 = r7 + 1
            goto L40
        L4c:
            r7 = -1
            int r5 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r5 == 0) goto L76
            long r7 = r24 + r3
            int r5 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r5 == 0) goto L76
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r9 = "XING data size mismatch: "
            r5.append(r9)
            r5.append(r0)
            java.lang.String r0 = ", "
            r5.append(r0)
            r5.append(r7)
            java.lang.String r0 = r5.toString()
            java.lang.String r1 = "XingSeeker"
            android.util.Log.w(r1, r0)
        L76:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.XingSeeker
            int r1 = r2.frameSize
            r13 = r0
            r14 = r24
            r16 = r1
            r19 = r3
            r21 = r6
            r13.<init>(r14, r16, r17, r19, r21)
            return r0
        L87:
            r0 = 0
            return r0
    }

    private long getTimeUsForTableIndex(int r5) {
            r4 = this;
            long r0 = r4.durationUs
            long r2 = (long) r5
            long r0 = r0 * r2
            r2 = 100
            long r0 = r0 / r2
            return r0
    }

    @Override
    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r13) {
            r12 = this;
            boolean r0 = r12.isSeekable()
            if (r0 != 0) goto L19
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r13 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r0 = 0
            long r2 = r12.dataStartPosition
            int r4 = r12.xingFrameSize
            long r4 = (long) r4
            long r2 = r2 + r4
            r14.<init>(r0, r2)
            r13.<init>(r14)
            return r13
        L19:
            r6 = 0
            long r8 = r12.durationUs
            r4 = r13
            long r13 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r4, r6, r8)
            double r0 = (double) r13
            r2 = 4636737291354636288(0x4059000000000000, double:100.0)
            double r0 = r0 * r2
            long r4 = r12.durationUs
            double r4 = (double) r4
            double r0 = r0 / r4
            r4 = 0
            int r6 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            r7 = 4643211215818981376(0x4070000000000000, double:256.0)
            if (r6 > 0) goto L33
            goto L4f
        L33:
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 < 0) goto L39
            r4 = r7
            goto L4f
        L39:
            int r2 = (int) r0
            long[] r3 = r12.tableOfContents
            r4 = r3[r2]
            double r4 = (double) r4
            r6 = 99
            if (r2 != r6) goto L45
            r9 = r7
            goto L4a
        L45:
            int r6 = r2 + 1
            r9 = r3[r6]
            double r9 = (double) r9
        L4a:
            double r2 = (double) r2
            double r0 = r0 - r2
            double r9 = r9 - r4
            double r0 = r0 * r9
            double r4 = r4 + r0
        L4f:
            double r4 = r4 / r7
            long r0 = r12.dataSize
            double r0 = (double) r0
            double r4 = r4 * r0
            long r6 = java.lang.Math.round(r4)
            int r0 = r12.xingFrameSize
            long r8 = (long) r0
            long r0 = r12.dataSize
            r2 = 1
            long r10 = r0 - r2
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r6, r8, r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r3 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            long r4 = r12.dataStartPosition
            long r4 = r4 + r0
            r3.<init>(r13, r4)
            r2.<init>(r3)
            return r2
    }

    @Override
    public final long getTimeUs(long r13) {
            r12 = this;
            long r0 = r12.dataStartPosition
            long r13 = r13 - r0
            boolean r0 = r12.isSeekable()
            if (r0 == 0) goto L4f
            int r0 = r12.xingFrameSize
            long r0 = (long) r0
            int r0 = (r13 > r0 ? 1 : (r13 == r0 ? 0 : -1))
            if (r0 > 0) goto L11
            goto L4f
        L11:
            double r13 = (double) r13
            r0 = 4643211215818981376(0x4070000000000000, double:256.0)
            double r13 = r13 * r0
            long r0 = r12.dataSize
            double r0 = (double) r0
            double r13 = r13 / r0
            long[] r0 = r12.tableOfContents
            long r1 = (long) r13
            r3 = 1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r1, r3, r3)
            long r1 = r12.getTimeUsForTableIndex(r0)
            long[] r3 = r12.tableOfContents
            r4 = r3[r0]
            int r3 = r0 + 1
            long r6 = r12.getTimeUsForTableIndex(r3)
            r8 = 99
            if (r0 != r8) goto L36
            r8 = 256(0x100, double:1.265E-321)
            goto L3a
        L36:
            long[] r0 = r12.tableOfContents
            r8 = r0[r3]
        L3a:
            int r0 = (r4 > r8 ? 1 : (r4 == r8 ? 0 : -1))
            if (r0 != 0) goto L41
            r13 = 0
            goto L46
        L41:
            double r10 = (double) r4
            double r13 = r13 - r10
            long r8 = r8 - r4
            double r3 = (double) r8
            double r13 = r13 / r3
        L46:
            long r6 = r6 - r1
            double r3 = (double) r6
            double r13 = r13 * r3
            long r13 = java.lang.Math.round(r13)
            long r1 = r1 + r13
            return r1
        L4f:
            r13 = 0
            return r13
    }

    @Override
    public final boolean isSeekable() {
            r1 = this;
            long[] r0 = r1.tableOfContents
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }
}
