package com.mbridge.msdk.playercommon.exoplayer2.extractor.wav;

final class WavHeader implements com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap {
    private final int averageBytesPerSecond;
    private final int bitsPerSample;
    private final int blockAlignment;
    private long dataSize;
    private long dataStartPosition;
    private final int encoding;
    private final int numChannels;
    private final int sampleRateHz;

    public WavHeader(int r1, int r2, int r3, int r4, int r5, int r6) {
            r0 = this;
            r0.<init>()
            r0.numChannels = r1
            r0.sampleRateHz = r2
            r0.averageBytesPerSecond = r3
            r0.blockAlignment = r4
            r0.bitsPerSample = r5
            r0.encoding = r6
            return
    }

    public final int getBitrate() {
            r2 = this;
            int r0 = r2.sampleRateHz
            int r1 = r2.bitsPerSample
            int r0 = r0 * r1
            int r1 = r2.numChannels
            int r0 = r0 * r1
            return r0
    }

    public final int getBytesPerFrame() {
            r1 = this;
            int r0 = r1.blockAlignment
            return r0
    }

    @Override
    public final long getDurationUs() {
            r4 = this;
            long r0 = r4.dataSize
            int r2 = r4.blockAlignment
            long r2 = (long) r2
            long r0 = r0 / r2
            r2 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 * r2
            int r2 = r4.sampleRateHz
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
    }

    public final int getEncoding() {
            r1 = this;
            int r0 = r1.encoding
            return r0
    }

    public final int getNumChannels() {
            r1 = this;
            int r0 = r1.numChannels
            return r0
    }

    public final int getSampleRateHz() {
            r1 = this;
            int r0 = r1.sampleRateHz
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap.SeekPoints getSeekPoints(long r12) {
            r11 = this;
            int r0 = r11.averageBytesPerSecond
            long r0 = (long) r0
            long r0 = r0 * r12
            r2 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 / r2
            int r2 = r11.blockAlignment
            long r3 = (long) r2
            long r0 = r0 / r3
            long r3 = (long) r2
            long r5 = r0 * r3
            long r0 = r11.dataSize
            long r2 = (long) r2
            long r9 = r0 - r2
            r7 = 0
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r5, r7, r9)
            long r2 = r11.dataStartPosition
            long r2 = r2 + r0
            long r4 = r11.getTimeUs(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r6 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r6.<init>(r4, r2)
            int r12 = (r4 > r12 ? 1 : (r4 == r12 ? 0 : -1))
            if (r12 >= 0) goto L46
            long r12 = r11.dataSize
            int r4 = r11.blockAlignment
            long r7 = (long) r4
            long r12 = r12 - r7
            int r12 = (r0 > r12 ? 1 : (r0 == r12 ? 0 : -1))
            if (r12 != 0) goto L35
            goto L46
        L35:
            long r12 = (long) r4
            long r2 = r2 + r12
            long r12 = r11.getTimeUs(r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint
            r0.<init>(r12, r2)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r12.<init>(r6, r0)
            return r12
        L46:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r12 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints
            r12.<init>(r6)
            return r12
    }

    public final long getTimeUs(long r3) {
            r2 = this;
            long r0 = r2.dataStartPosition
            long r3 = r3 - r0
            r0 = 0
            long r3 = java.lang.Math.max(r0, r3)
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.averageBytesPerSecond
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    public final boolean hasDataBounds() {
            r4 = this;
            long r0 = r4.dataStartPosition
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L10
            long r0 = r4.dataSize
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public final boolean isSeekable() {
            r1 = this;
            r0 = 1
            return r0
    }

    public final void setDataBounds(long r1, long r3) {
            r0 = this;
            r0.dataStartPosition = r1
            r0.dataSize = r3
            return
    }
}
