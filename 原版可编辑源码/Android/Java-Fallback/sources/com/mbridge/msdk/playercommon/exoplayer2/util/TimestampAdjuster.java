package com.mbridge.msdk.playercommon.exoplayer2.util;

public final class TimestampAdjuster {
    public static final long DO_NOT_OFFSET = Long.MAX_VALUE;
    private static final long MAX_PTS_PLUS_ONE = 8589934592L;
    private long firstSampleTimestampUs;
    private volatile long lastSampleTimestampUs;
    private long timestampOffsetUs;

    public TimestampAdjuster(long r3) {
            r2 = this;
            r2.<init>()
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.lastSampleTimestampUs = r0
            r2.setFirstSampleTimestampUs(r3)
            return
    }

    public static long ptsToUs(long r2) {
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 * r0
            r0 = 90000(0x15f90, double:4.4466E-319)
            long r2 = r2 / r0
            return r2
    }

    public static long usToPts(long r2) {
            r0 = 90000(0x15f90, double:4.4466E-319)
            long r2 = r2 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r2 = r2 / r0
            return r2
    }

    public final long adjustSampleTimestamp(long r5) {
            r4 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r2 = r4.lastSampleTimestampUs
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L13
            r4.lastSampleTimestampUs = r5
            goto L28
        L13:
            long r0 = r4.firstSampleTimestampUs
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L21
            long r0 = r0 - r5
            r4.timestampOffsetUs = r0
        L21:
            monitor-enter(r4)
            r4.lastSampleTimestampUs = r5     // Catch: java.lang.Throwable -> L2c
            r4.notifyAll()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L2c
        L28:
            long r0 = r4.timestampOffsetUs
            long r5 = r5 + r0
            return r5
        L2c:
            r5 = move-exception
            monitor-exit(r4)     // Catch: java.lang.Throwable -> L2c
            throw r5
    }

    public final long adjustTsTimestamp(long r9) {
            r8 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r9 > r0 ? 1 : (r9 == r0 ? 0 : -1))
            if (r2 != 0) goto La
            return r0
        La:
            long r2 = r8.lastSampleTimestampUs
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 == 0) goto L3b
            long r0 = r8.lastSampleTimestampUs
            long r0 = usToPts(r0)
            r2 = 4294967296(0x100000000, double:2.121995791E-314)
            long r2 = r2 + r0
            r4 = 8589934592(0x200000000, double:4.243991582E-314)
            long r2 = r2 / r4
            r6 = 1
            long r6 = r2 - r6
            long r6 = r6 * r4
            long r6 = r6 + r9
            long r2 = r2 * r4
            long r9 = r9 + r2
            long r2 = r6 - r0
            long r2 = java.lang.Math.abs(r2)
            long r0 = r9 - r0
            long r0 = java.lang.Math.abs(r0)
            int r0 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r0 >= 0) goto L3b
            r9 = r6
        L3b:
            long r9 = ptsToUs(r9)
            long r9 = r8.adjustSampleTimestamp(r9)
            return r9
    }

    public final long getFirstSampleTimestampUs() {
            r2 = this;
            long r0 = r2.firstSampleTimestampUs
            return r0
    }

    public final long getLastAdjustedTimestampUs() {
            r6 = this;
            long r0 = r6.lastSampleTimestampUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L11
            long r0 = r6.lastSampleTimestampUs
            long r2 = r6.timestampOffsetUs
            long r2 = r2 + r0
            goto L1d
        L11:
            long r0 = r6.firstSampleTimestampUs
            r4 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r4 = (r0 > r4 ? 1 : (r0 == r4 ? 0 : -1))
            if (r4 == 0) goto L1d
            r2 = r0
        L1d:
            return r2
    }

    public final long getTimestampOffsetUs() {
            r5 = this;
            long r0 = r5.firstSampleTimestampUs
            r2 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 != 0) goto L13
            r1 = 0
            goto L1c
        L13:
            long r3 = r5.lastSampleTimestampUs
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L1a
            goto L1c
        L1a:
            long r1 = r5.timestampOffsetUs
        L1c:
            return r1
    }

    public final void reset() {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.lastSampleTimestampUs = r0
            return
    }

    public final synchronized void setFirstSampleTimestampUs(long r5) {
            r4 = this;
            monitor-enter(r4)
            long r0 = r4.lastSampleTimestampUs     // Catch: java.lang.Throwable -> L16
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)     // Catch: java.lang.Throwable -> L16
            r4.firstSampleTimestampUs = r5     // Catch: java.lang.Throwable -> L16
            monitor-exit(r4)
            return
        L16:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    public final synchronized void waitUntilInitialized() throws java.lang.InterruptedException {
            r4 = this;
            monitor-enter(r4)
        L1:
            long r0 = r4.lastSampleTimestampUs     // Catch: java.lang.Throwable -> L12
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L10
            r4.wait()     // Catch: java.lang.Throwable -> L12
            goto L1
        L10:
            monitor-exit(r4)
            return
        L12:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }
}
