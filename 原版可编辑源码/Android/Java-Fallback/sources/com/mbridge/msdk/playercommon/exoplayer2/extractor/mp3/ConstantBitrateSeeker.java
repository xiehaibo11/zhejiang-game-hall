package com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3;

final class ConstantBitrateSeeker implements com.mbridge.msdk.playercommon.exoplayer2.extractor.mp3.Mp3Extractor.Seeker {
    private static final int BITS_PER_BYTE = 8;
    private final int bitrate;
    private final long dataSize;
    private final long durationUs;
    private final long firstFramePosition;
    private final int frameSize;

    public ConstantBitrateSeeker(long r3, long r5, com.mbridge.msdk.playercommon.exoplayer2.extractor.MpegAudioHeader r7) {
            r2 = this;
            r2.<init>()
            r2.firstFramePosition = r5
            int r0 = r7.frameSize
            r2.frameSize = r0
            int r7 = r7.bitrate
            r2.bitrate = r7
            r0 = -1
            int r7 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r7 != 0) goto L1d
            r2.dataSize = r0
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.durationUs = r3
            goto L27
        L1d:
            long r5 = r3 - r5
            r2.dataSize = r5
            long r3 = r2.getTimeUs(r3)
            r2.durationUs = r3
        L27:
            return
    }

    @Override
    public final long getDurationUs() {
            r2 = this;
            long r0 = r2.durationUs
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r14) {
            r13 = this;
            long r0 = r13.dataSize
            r2 = -1
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 != 0) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r15 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r0 = 0
            long r2 = r13.firstFramePosition
            r15.<init>(r0, r2)
            r14.<init>(r15)
            return r14
        L17:
            int r2 = r13.bitrate
            long r2 = (long) r2
            long r2 = r2 * r14
            r4 = 8000000(0x7a1200, double:3.952525E-317)
            long r2 = r2 / r4
            int r4 = r13.frameSize
            long r5 = (long) r4
            long r2 = r2 / r5
            long r5 = (long) r4
            long r7 = r2 * r5
            r9 = 0
            long r2 = (long) r4
            long r11 = r0 - r2
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r7, r9, r11)
            long r2 = r13.firstFramePosition
            long r2 = r2 + r0
            long r4 = r13.getTimeUs(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r6.<init>(r4, r2)
            int r14 = (r4 > r14 ? 1 : (r4 == r14 ? 0 : -1))
            if (r14 >= 0) goto L5b
            long r14 = r13.dataSize
            int r4 = r13.frameSize
            long r7 = (long) r4
            long r14 = r14 - r7
            int r14 = (r0 > r14 ? 1 : (r0 == r14 ? 0 : -1))
            if (r14 != 0) goto L4a
            goto L5b
        L4a:
            long r14 = (long) r4
            long r2 = r2 + r14
            long r14 = r13.getTimeUs(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r0.<init>(r14, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r14.<init>(r6, r0)
            return r14
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r14 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r14.<init>(r6)
            return r14
    }

    @Override
    public final long getTimeUs(long r3) {
            r2 = this;
            long r0 = r2.firstFramePosition
            long r3 = r3 - r0
            r0 = 0
            long r3 = java.lang.Math.max(r0, r3)
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            r0 = 8
            long r3 = r3 * r0
            int r0 = r2.bitrate
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    @Override
    public final boolean isSeekable() {
            r4 = this;
            long r0 = r4.dataSize
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
