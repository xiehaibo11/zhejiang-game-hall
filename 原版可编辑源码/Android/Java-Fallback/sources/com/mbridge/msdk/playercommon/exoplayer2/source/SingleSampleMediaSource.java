package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class SingleSampleMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.BaseMediaSource {
    public static final int DEFAULT_MIN_LOADABLE_RETRY_COUNT = 3;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory dataSourceFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private final long durationUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private final int minLoadableRetryCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;
    private final boolean treatLoadErrorsAsEndOfStream;

    static class 1 {
    }

    public interface EventListener {
        void onLoadError(int r1, java.io.IOException r2);
    }

    private static final class EventListenerWrapper extends com.mbridge.msdk.playercommon.exoplayer2.source.DefaultMediaSourceEventListener {
        private final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.EventListener eventListener;
        private final int eventSourceId;

        public EventListenerWrapper(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.EventListener r1, int r2) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.EventListener) r1
                r0.eventListener = r1
                r0.eventSourceId = r2
                return
        }

        @Override
        public final void onLoadError(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4, java.io.IOException r5, boolean r6) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource$EventListener r1 = r0.eventListener
                int r2 = r0.eventSourceId
                r1.onLoadError(r2, r5)
                return
        }
    }

    public static final class Factory {
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory dataSourceFactory;
        private boolean isCreateCalled;
        private int minLoadableRetryCount;
        private java.lang.Object tag;
        private boolean treatLoadErrorsAsEndOfStream;

        public Factory(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r1) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory) r1
                r0.dataSourceFactory = r1
                r1 = 3
                r0.minLoadableRetryCount = r1
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource createMediaSource(android.net.Uri r12, com.mbridge.msdk.playercommon.exoplayer2.Format r13, long r14) {
                r11 = this;
                r0 = 1
                r11.isCreateCalled = r0
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r3 = r11.dataSourceFactory
                int r7 = r11.minLoadableRetryCount
                boolean r8 = r11.treatLoadErrorsAsEndOfStream
                java.lang.Object r9 = r11.tag
                r10 = 0
                r1 = r0
                r2 = r12
                r4 = r13
                r5 = r14
                r1.<init>(r2, r3, r4, r5, r7, r8, r9, r10)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource createMediaSource(android.net.Uri r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2, long r3, android.os.Handler r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r6) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource r1 = r0.createMediaSource(r1, r2, r3)
                if (r5 == 0) goto Lb
                if (r6 == 0) goto Lb
                r1.addEventListener(r5, r6)
            Lb:
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.Factory setMinLoadableRetryCount(int r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.minLoadableRetryCount = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.Factory setTag(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.tag = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.Factory setTreatLoadErrorsAsEndOfStream(boolean r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.treatLoadErrorsAsEndOfStream = r2
                return r1
        }
    }

    public SingleSampleMediaSource(android.net.Uri r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r9, com.mbridge.msdk.playercommon.exoplayer2.Format r10, long r11) {
            r7 = this;
            r6 = 3
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r6)
            return
    }

    public SingleSampleMediaSource(android.net.Uri r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r11, com.mbridge.msdk.playercommon.exoplayer2.Format r12, long r13, int r15) {
            r9 = this;
            r7 = 0
            r8 = 0
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r6 = r15
            r0.<init>(r1, r2, r3, r4, r6, r7, r8)
            return
    }

    public SingleSampleMediaSource(android.net.Uri r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14, long r15, int r17, android.os.Handler r18, com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.EventListener r19, int r20, boolean r21) {
            r11 = this;
            r0 = r18
            r1 = r19
            r10 = 0
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r8 = r17
            r9 = r21
            r2.<init>(r3, r4, r5, r6, r8, r9, r10)
            if (r0 == 0) goto L21
            if (r1 == 0) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource$EventListenerWrapper r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource$EventListenerWrapper
            r3 = r20
            r2.<init>(r1, r3)
            r1 = r11
            r11.addEventListener(r0, r2)
            goto L22
        L21:
            r1 = r11
        L22:
            return
    }

    private SingleSampleMediaSource(android.net.Uri r7, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r8, com.mbridge.msdk.playercommon.exoplayer2.Format r9, long r10, int r12, boolean r13, java.lang.Object r14) {
            r6 = this;
            r6.<init>()
            r6.dataSourceFactory = r8
            r6.format = r9
            r6.durationUs = r10
            r6.minLoadableRetryCount = r12
            r6.treatLoadErrorsAsEndOfStream = r13
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r8 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
            r8.<init>(r7)
            r6.dataSpec = r8
            com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline
            r3 = 1
            r4 = 0
            r0 = r7
            r1 = r10
            r5 = r14
            r0.<init>(r1, r3, r4, r5)
            r6.timeline = r7
            return
    }

    SingleSampleMediaSource(android.net.Uri r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, long r4, int r6, boolean r7, java.lang.Object r8, com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaSource.1 r9) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r6, r7, r8)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r11) {
            r9 = this;
            int r11 = r10.periodIndex
            if (r11 != 0) goto L6
            r11 = 1
            goto L7
        L6:
            r11 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r11)
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r11 = new com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1 = r9.dataSpec
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r2 = r9.dataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r9.format
            long r4 = r9.durationUs
            int r6 = r9.minLoadableRetryCount
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r7 = r9.createEventDispatcher(r10)
            boolean r8 = r9.treatLoadErrorsAsEndOfStream
            r0 = r11
            r0.<init>(r1, r2, r3, r4, r6, r7, r8)
            return r11
    }

    @Override
    public final void maybeThrowSourceInfoRefreshError() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r0.timeline
            r2 = 0
            r0.refreshSourceInfo(r1, r2)
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod) r1
            r1.release()
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r0 = this;
            return
    }
}
