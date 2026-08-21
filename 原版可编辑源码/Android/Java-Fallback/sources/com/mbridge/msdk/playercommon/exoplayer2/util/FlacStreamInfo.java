package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class FlacStreamInfo {
    public final int bitsPerSample;
    public final int channels;
    public final int maxBlockSize;
    public final int maxFrameSize;
    public final int minBlockSize;
    public final int minFrameSize;
    public final int sampleRate;
    public final long totalSamples;

    public FlacStreamInfo(int r1, int r2, int r3, int r4, int r5, int r6, int r7, long r8) {
            r0 = this;
            r0.<init>()
            r0.minBlockSize = r1
            r0.maxBlockSize = r2
            r0.minFrameSize = r3
            r0.maxFrameSize = r4
            r0.sampleRate = r5
            r0.channels = r6
            r0.bitsPerSample = r7
            r0.totalSamples = r8
            return
    }

    public FlacStreamInfo(byte[] r5, int r6) {
            r4 = this;
            r4.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.util.ParsableBitArray
            r0.<init>(r5)
            int r6 = r6 * 8
            r0.setPosition(r6)
            r5 = 16
            int r6 = r0.readBits(r5)
            r4.minBlockSize = r6
            int r5 = r0.readBits(r5)
            r4.maxBlockSize = r5
            r5 = 24
            int r6 = r0.readBits(r5)
            r4.minFrameSize = r6
            int r5 = r0.readBits(r5)
            r4.maxFrameSize = r5
            r5 = 20
            int r5 = r0.readBits(r5)
            r4.sampleRate = r5
            r5 = 3
            int r5 = r0.readBits(r5)
            int r5 = r5 + 1
            r4.channels = r5
            r5 = 5
            int r5 = r0.readBits(r5)
            int r5 = r5 + 1
            r4.bitsPerSample = r5
            r5 = 4
            int r5 = r0.readBits(r5)
            long r5 = (long) r5
            r1 = 15
            long r5 = r5 & r1
            r1 = 32
            long r5 = r5 << r1
            int r0 = r0.readBits(r1)
            long r0 = (long) r0
            r2 = 4294967295(0xffffffff, double:2.1219957905E-314)
            long r0 = r0 & r2
            long r5 = r5 | r0
            r4.totalSamples = r5
            return
    }

    public final int bitRate() {
            r2 = this;
            int r0 = r2.bitsPerSample
            int r1 = r2.sampleRate
            int r0 = r0 * r1
            return r0
    }

    public final long durationUs() {
            r4 = this;
            long r0 = r4.totalSamples
            r2 = 1000000(0xf4240, double:4.940656E-318)
            long r0 = r0 * r2
            int r2 = r4.sampleRate
            long r2 = (long) r2
            long r0 = r0 / r2
            return r0
    }

    public final long getApproxBytesPerFrame() {
            r4 = this;
            int r0 = r4.maxFrameSize
            if (r0 <= 0) goto L10
            long r0 = (long) r0
            int r2 = r4.minFrameSize
            long r2 = (long) r2
            long r0 = r0 + r2
            r2 = 2
            long r0 = r0 / r2
            r2 = 1
        Le:
            long r0 = r0 + r2
            goto L2a
        L10:
            int r0 = r4.minBlockSize
            int r1 = r4.maxBlockSize
            if (r0 != r1) goto L1a
            if (r0 <= 0) goto L1a
            long r0 = (long) r0
            goto L1c
        L1a:
            r0 = 4096(0x1000, double:2.0237E-320)
        L1c:
            int r2 = r4.channels
            long r2 = (long) r2
            long r0 = r0 * r2
            int r2 = r4.bitsPerSample
            long r2 = (long) r2
            long r0 = r0 * r2
            r2 = 8
            long r0 = r0 / r2
            r2 = 64
            goto Le
        L2a:
            return r0
    }

    public final long getSampleIndex(long r9) {
            r8 = this;
            int r0 = r8.sampleRate
            long r0 = (long) r0
            long r9 = r9 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r9 / r0
            long r9 = r8.totalSamples
            r0 = 1
            long r6 = r9 - r0
            r4 = 0
            long r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r2, r4, r6)
            return r9
    }

    public final int maxDecodedFrameSize() {
            r2 = this;
            int r0 = r2.maxBlockSize
            int r1 = r2.channels
            int r0 = r0 * r1
            int r1 = r2.bitsPerSample
            int r1 = r1 / 8
            int r0 = r0 * r1
            return r0
    }
}
