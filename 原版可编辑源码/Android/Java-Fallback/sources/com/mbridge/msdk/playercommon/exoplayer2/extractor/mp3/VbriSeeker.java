package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3;

final class VbriSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker {
    private static final java.lang.String TAG = "VbriSeeker";
    private final long durationUs;
    private final long[] positions;
    private final long[] timesUs;

    private VbriSeeker(long[] r1, long[] r2, long r3) {
            r0 = this;
            r0.<init>()
            r0.timesUs = r1
            r0.positions = r2
            r0.durationUs = r3
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.VbriSeeker create(long r20, long r22, com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r24, com.mbridge.msdk.playercommon.exoplayer2.util.ParsableByteArray r25) {
            r0 = r20
            r2 = r24
            r3 = r25
            r4 = 10
            r3.skipBytes(r4)
            int r4 = r25.readInt()
            r5 = 0
            if (r4 > 0) goto L13
            return r5
        L13:
            int r6 = r2.sampleRate
            long r7 = (long) r4
            r9 = 1000000(0xf4240, double:4.940656E-318)
            r4 = 32000(0x7d00, float:4.4842E-41)
            if (r6 < r4) goto L20
            r4 = 1152(0x480, float:1.614E-42)
            goto L22
        L20:
            r4 = 576(0x240, float:8.07E-43)
        L22:
            long r11 = (long) r4
            long r9 = r9 * r11
            long r11 = (long) r6
            long r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.scaleLargeTimestamp(r7, r9, r11)
            int r4 = r25.readUnsignedShort()
            int r8 = r25.readUnsignedShort()
            int r9 = r25.readUnsignedShort()
            r10 = 2
            r3.skipBytes(r10)
            int r2 = r2.frameSize
            long r11 = (long) r2
            long r11 = r22 + r11
            long[] r2 = new long[r4]
            long[] r13 = new long[r4]
            r14 = 0
            r5 = r14
            r14 = r22
        L46:
            if (r5 >= r4) goto L8a
            r16 = r11
            long r10 = (long) r5
            long r10 = r10 * r6
            r18 = r6
            long r6 = (long) r4
            long r10 = r10 / r6
            r2[r5] = r10
            r6 = r16
            long r10 = java.lang.Math.max(r14, r6)
            r13[r5] = r10
            r10 = 1
            if (r9 == r10) goto L7a
            r10 = 2
            if (r9 == r10) goto L74
            r11 = 3
            if (r9 == r11) goto L6e
            r11 = 4
            if (r9 == r11) goto L68
            r11 = 0
            return r11
        L68:
            r11 = 0
            int r12 = r25.readUnsignedIntToInt()
            goto L80
        L6e:
            r11 = 0
            int r12 = r25.readUnsignedInt24()
            goto L80
        L74:
            r11 = 0
            int r12 = r25.readUnsignedShort()
            goto L80
        L7a:
            r10 = 2
            r11 = 0
            int r12 = r25.readUnsignedByte()
        L80:
            int r12 = r12 * r8
            long r10 = (long) r12
            long r14 = r14 + r10
            int r5 = r5 + 1
            r11 = r6
            r6 = r18
            r10 = 2
            goto L46
        L8a:
            r18 = r6
            r3 = -1
            int r3 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r3 == 0) goto Lb4
            int r3 = (r0 > r14 ? 1 : (r0 == r14 ? 0 : -1))
            if (r3 == 0) goto Lb4
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "VBRI data size mismatch: "
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = ", "
            r3.append(r0)
            r3.append(r14)
            java.lang.String r0 = r3.toString()
            java.lang.String r1 = "VbriSeeker"
            android.util.Log.w(r1, r0)
        Lb4:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.VbriSeeker r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.VbriSeeker
            r3 = r18
            r0.<init>(r2, r13, r3)
            return r0
    }

    @Override
    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r9) {
            r8 = this;
            long[] r0 = r8.timesUs
            r1 = 1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r0, r9, r1, r1)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r2 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            long[] r3 = r8.timesUs
            r4 = r3[r0]
            long[] r3 = r8.positions
            r6 = r3[r0]
            r2.<init>(r4, r6)
            long r3 = r2.timeUs
            int r9 = (r3 > r9 ? 1 : (r3 == r9 ? 0 : -1))
            if (r9 >= 0) goto L35
            long[] r9 = r8.timesUs
            int r9 = r9.length
            int r9 = r9 - r1
            if (r0 != r9) goto L21
            goto L35
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            long[] r10 = r8.timesUs
            int r0 = r0 + r1
            r3 = r10[r0]
            long[] r10 = r8.positions
            r0 = r10[r0]
            r9.<init>(r3, r0)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r10 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r10.<init>(r2, r9)
            return r10
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r9 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r9.<init>(r2)
            return r9
    }

    @Override
    public final long getTimeUs(long r4) {
            r3 = this;
            long[] r0 = r3.timesUs
            long[] r1 = r3.positions
            r2 = 1
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.binarySearchFloor(r1, r4, r2, r2)
            r4 = r0[r4]
            return r4
    }

    @Override
    public final boolean isSeekable() {
            r1 = this;
            r0 = 1
            return r0
    }
}
