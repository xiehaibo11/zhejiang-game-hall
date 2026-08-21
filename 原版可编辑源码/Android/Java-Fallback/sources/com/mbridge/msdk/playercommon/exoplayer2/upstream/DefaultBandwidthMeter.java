package com.mbridge.msdk.playercommon.exoplayer2.upstream;

public final class DefaultBandwidthMeter implements com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter, com.mbridge.msdk.playercommon.exoplayer2.upstream.TransferListener<java.lang.Object> {
    private static final int BYTES_TRANSFERRED_FOR_ESTIMATE = 524288;
    public static final long DEFAULT_INITIAL_BITRATE_ESTIMATE = 1000000;
    public static final int DEFAULT_SLIDING_WINDOW_MAX_WEIGHT = 2000;
    private static final int ELAPSED_MILLIS_FOR_ESTIMATE = 2000;
    private long bitrateEstimate;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
    private final android.os.Handler eventHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener eventListener;
    private long sampleBytesTransferred;
    private long sampleStartTimeMs;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile slidingPercentile;
    private int streamCount;
    private long totalBytesTransferred;
    private long totalElapsedTimeMs;


    public static final class Builder {
        private com.mbridge.msdk.playercommon.exoplayer2.util.Clock clock;
        private android.os.Handler eventHandler;
        private com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener eventListener;
        private long initialBitrateEstimate;
        private int slidingWindowMaxWeight;

        public Builder() {
                r2 = this;
                r2.<init>()
                r0 = 1000000(0xf4240, double:4.940656E-318)
                r2.initialBitrateEstimate = r0
                r0 = 2000(0x7d0, float:2.803E-42)
                r2.slidingWindowMaxWeight = r0
                com.mbridge.msdk.playercommon.exoplayer2.util.Clock r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
                r2.clock = r0
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter build() {
                r9 = this;
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter
                android.os.Handler r1 = r9.eventHandler
                com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter$EventListener r2 = r9.eventListener
                long r3 = r9.initialBitrateEstimate
                int r5 = r9.slidingWindowMaxWeight
                com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6 = r9.clock
                r7 = 0
                r0 = r8
                r0.<init>(r1, r2, r3, r5, r6, r7)
                return r8
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter.Builder setClock(com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1) {
                r0 = this;
                r0.clock = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter.Builder setEventListener(android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener r3) {
                r1 = this;
                if (r2 == 0) goto L6
                if (r3 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
                r1.eventHandler = r2
                r1.eventListener = r3
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter.Builder setInitialBitrateEstimate(long r1) {
                r0 = this;
                r0.initialBitrateEstimate = r1
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter.Builder setSlidingWindowMaxWeight(int r1) {
                r0 = this;
                r0.slidingWindowMaxWeight = r1
                return r0
        }
    }

    public DefaultBandwidthMeter() {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r1 = 0
            r2 = 0
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r5 = 2000(0x7d0, float:2.803E-42)
            r0 = r7
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    public DefaultBandwidthMeter(android.os.Handler r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener r9) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r5 = 2000(0x7d0, float:2.803E-42)
            r0 = r7
            r1 = r8
            r2 = r9
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    public DefaultBandwidthMeter(android.os.Handler r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener r9, int r10) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r3 = 1000000(0xf4240, double:4.940656E-318)
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    private DefaultBandwidthMeter(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener r2, long r3, int r5, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6) {
            r0 = this;
            r0.<init>()
            r0.eventHandler = r1
            r0.eventListener = r2
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile
            r1.<init>(r5)
            r0.slidingPercentile = r1
            r0.clock = r6
            r0.bitrateEstimate = r3
            return
    }

    DefaultBandwidthMeter(android.os.Handler r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener r2, long r3, int r5, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6, com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter.1 r7) {
            r0 = this;
            r0.<init>(r1, r2, r3, r5, r6)
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter.EventListener access$100(com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter r0) {
            com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter$EventListener r0 = r0.eventListener
            return r0
    }

    private void notifyBandwidthSample(int r10, long r11, long r13) {
            r9 = this;
            android.os.Handler r0 = r9.eventHandler
            if (r0 == 0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.upstream.BandwidthMeter$EventListener r1 = r9.eventListener
            if (r1 == 0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DefaultBandwidthMeter$1
            r2 = r1
            r3 = r9
            r4 = r10
            r5 = r11
            r7 = r13
            r2.<init>(r3, r4, r5, r7)
            r0.post(r1)
        L15:
            return
    }

    @Override
    public final synchronized long getBitrateEstimate() {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.bitrateEstimate     // Catch: java.lang.Throwable -> L5
            monitor-exit(r2)
            return r0
        L5:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    @Override
    public final synchronized void onBytesTransferred(java.lang.Object r3, int r4) {
            r2 = this;
            monitor-enter(r2)
            long r0 = r2.sampleBytesTransferred     // Catch: java.lang.Throwable -> L9
            long r3 = (long) r4     // Catch: java.lang.Throwable -> L9
            long r0 = r0 + r3
            r2.sampleBytesTransferred = r0     // Catch: java.lang.Throwable -> L9
            monitor-exit(r2)
            return
        L9:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    @Override
    public final synchronized void onTransferEnd(java.lang.Object r12) {
            r11 = this;
            monitor-enter(r11)
            int r12 = r11.streamCount     // Catch: java.lang.Throwable -> L6d
            r0 = 1
            if (r12 <= 0) goto L8
            r12 = r0
            goto L9
        L8:
            r12 = 0
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r12)     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r12 = r11.clock     // Catch: java.lang.Throwable -> L6d
            long r1 = r12.elapsedRealtime()     // Catch: java.lang.Throwable -> L6d
            long r3 = r11.sampleStartTimeMs     // Catch: java.lang.Throwable -> L6d
            long r3 = r1 - r3
            int r6 = (int) r3     // Catch: java.lang.Throwable -> L6d
            long r3 = r11.totalElapsedTimeMs     // Catch: java.lang.Throwable -> L6d
            long r7 = (long) r6     // Catch: java.lang.Throwable -> L6d
            long r3 = r3 + r7
            r11.totalElapsedTimeMs = r3     // Catch: java.lang.Throwable -> L6d
            long r3 = r11.totalBytesTransferred     // Catch: java.lang.Throwable -> L6d
            long r9 = r11.sampleBytesTransferred     // Catch: java.lang.Throwable -> L6d
            long r3 = r3 + r9
            r11.totalBytesTransferred = r3     // Catch: java.lang.Throwable -> L6d
            if (r6 <= 0) goto L56
            long r3 = r11.sampleBytesTransferred     // Catch: java.lang.Throwable -> L6d
            r9 = 8000(0x1f40, double:3.9525E-320)
            long r3 = r3 * r9
            long r3 = r3 / r7
            float r12 = (float) r3     // Catch: java.lang.Throwable -> L6d
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile r3 = r11.slidingPercentile     // Catch: java.lang.Throwable -> L6d
            long r4 = r11.sampleBytesTransferred     // Catch: java.lang.Throwable -> L6d
            double r4 = (double) r4     // Catch: java.lang.Throwable -> L6d
            double r4 = java.lang.Math.sqrt(r4)     // Catch: java.lang.Throwable -> L6d
            int r4 = (int) r4     // Catch: java.lang.Throwable -> L6d
            r3.addSample(r4, r12)     // Catch: java.lang.Throwable -> L6d
            long r3 = r11.totalElapsedTimeMs     // Catch: java.lang.Throwable -> L6d
            r7 = 2000(0x7d0, double:9.88E-321)
            int r12 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r12 >= 0) goto L4b
            long r3 = r11.totalBytesTransferred     // Catch: java.lang.Throwable -> L6d
            r7 = 524288(0x80000, double:2.590327E-318)
            int r12 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r12 < 0) goto L56
        L4b:
            com.mbridge.msdk.playercommon.exoplayer2.util.SlidingPercentile r12 = r11.slidingPercentile     // Catch: java.lang.Throwable -> L6d
            r3 = 1056964608(0x3f000000, float:0.5)
            float r12 = r12.getPercentile(r3)     // Catch: java.lang.Throwable -> L6d
            long r3 = (long) r12     // Catch: java.lang.Throwable -> L6d
            r11.bitrateEstimate = r3     // Catch: java.lang.Throwable -> L6d
        L56:
            long r7 = r11.sampleBytesTransferred     // Catch: java.lang.Throwable -> L6d
            long r9 = r11.bitrateEstimate     // Catch: java.lang.Throwable -> L6d
            r5 = r11
            r5.notifyBandwidthSample(r6, r7, r9)     // Catch: java.lang.Throwable -> L6d
            int r12 = r11.streamCount     // Catch: java.lang.Throwable -> L6d
            int r12 = r12 - r0
            r11.streamCount = r12     // Catch: java.lang.Throwable -> L6d
            if (r12 <= 0) goto L67
            r11.sampleStartTimeMs = r1     // Catch: java.lang.Throwable -> L6d
        L67:
            r0 = 0
            r11.sampleBytesTransferred = r0     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r11)
            return
        L6d:
            r12 = move-exception
            monitor-exit(r11)
            throw r12
    }

    @Override
    public final synchronized void onTransferStart(java.lang.Object r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2) {
            r0 = this;
            monitor-enter(r0)
            int r1 = r0.streamCount     // Catch: java.lang.Throwable -> L15
            if (r1 != 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1 = r0.clock     // Catch: java.lang.Throwable -> L15
            long r1 = r1.elapsedRealtime()     // Catch: java.lang.Throwable -> L15
            r0.sampleStartTimeMs = r1     // Catch: java.lang.Throwable -> L15
        Ld:
            int r1 = r0.streamCount     // Catch: java.lang.Throwable -> L15
            int r1 = r1 + 1
            r0.streamCount = r1     // Catch: java.lang.Throwable -> L15
            monitor-exit(r0)
            return
        L15:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }
}
