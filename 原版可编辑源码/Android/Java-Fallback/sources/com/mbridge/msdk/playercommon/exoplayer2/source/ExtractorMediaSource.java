package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class ExtractorMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.BaseMediaSource implements com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.Listener {
    public static final int DEFAULT_LOADING_CHECK_INTERVAL_BYTES = 1048576;
    public static final int DEFAULT_MIN_LOADABLE_RETRY_COUNT_LIVE = 6;
    public static final int DEFAULT_MIN_LOADABLE_RETRY_COUNT_ON_DEMAND = 3;
    public static final int MIN_RETRY_COUNT_DEFAULT_FOR_MEDIA = -1;
    private final int continueLoadingCheckIntervalBytes;
    private final java.lang.String customCacheKey;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory dataSourceFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory extractorsFactory;
    private final int minLoadableRetryCount;
    private final java.lang.Object tag;
    private long timelineDurationUs;
    private boolean timelineIsSeekable;
    private final android.net.Uri uri;

    static class 1 {
    }

    public interface EventListener {
        void onLoadError(java.io.IOException r1);
    }

    private static final class EventListenerWrapper extends com.mbridge.msdk.playercommon.exoplayer2.source.DefaultMediaSourceEventListener {
        private final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener eventListener;

        public EventListenerWrapper(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener r1) {
                r0 = this;
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$EventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener) r1
                r0.eventListener = r1
                return
        }

        @Override
        public final void onLoadError(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4, java.io.IOException r5, boolean r6) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$EventListener r1 = r0.eventListener
                r1.onLoadError(r5)
                return
        }
    }

    public static final class Factory implements com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.MediaSourceFactory {
        private int continueLoadingCheckIntervalBytes;
        private java.lang.String customCacheKey;
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory dataSourceFactory;
        private com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory extractorsFactory;
        private boolean isCreateCalled;
        private int minLoadableRetryCount;
        private java.lang.Object tag;

        public Factory(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r1) {
                r0 = this;
                r0.<init>()
                r0.dataSourceFactory = r1
                r1 = -1
                r0.minLoadableRetryCount = r1
                r1 = 1048576(0x100000, float:1.469368E-39)
                r0.continueLoadingCheckIntervalBytes = r1
                return
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource createMediaSource(android.net.Uri r11) {
                r10 = this;
                r0 = 1
                r10.isCreateCalled = r0
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r0 = r10.extractorsFactory
                if (r0 != 0) goto Le
                com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorsFactory
                r0.<init>()
                r10.extractorsFactory = r0
            Le:
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r3 = r10.dataSourceFactory
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r4 = r10.extractorsFactory
                int r5 = r10.minLoadableRetryCount
                java.lang.String r6 = r10.customCacheKey
                int r7 = r10.continueLoadingCheckIntervalBytes
                java.lang.Object r8 = r10.tag
                r9 = 0
                r1 = r0
                r2 = r11
                r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource createMediaSource(android.net.Uri r1, android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r3) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r1 = r0.createMediaSource(r1)
                if (r2 == 0) goto Lb
                if (r3 == 0) goto Lb
                r1.addEventListener(r2, r3)
            Lb:
                return r1
        }

        @Override
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource createMediaSource(android.net.Uri r1) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource r1 = r0.createMediaSource(r1)
                return r1
        }

        @Override
        public final int[] getSupportedTypes() {
                r3 = this;
                r0 = 1
                int[] r0 = new int[r0]
                r1 = 0
                r2 = 3
                r0[r1] = r2
                return r0
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.Factory setContinueLoadingCheckIntervalBytes(int r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.continueLoadingCheckIntervalBytes = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.Factory setCustomCacheKey(java.lang.String r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.customCacheKey = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.Factory setExtractorsFactory(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.extractorsFactory = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.Factory setMinLoadableRetryCount(int r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.minLoadableRetryCount = r2
                return r1
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.Factory setTag(java.lang.Object r2) {
                r1 = this;
                boolean r0 = r1.isCreateCalled
                r0 = r0 ^ 1
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                r1.tag = r2
                return r1
        }
    }

    public ExtractorMediaSource(android.net.Uri r11, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r12, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r13, int r14, android.os.Handler r15, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener r16, java.lang.String r17, int r18) {
            r10 = this;
            r0 = r15
            r1 = r16
            r9 = 0
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r7 = r17
            r8 = r18
            r2.<init>(r3, r4, r5, r6, r7, r8, r9)
            if (r1 == 0) goto L1e
            if (r0 == 0) goto L1e
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$EventListenerWrapper r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$EventListenerWrapper
            r2.<init>(r1)
            r1 = r10
            r10.addEventListener(r15, r2)
            goto L1f
        L1e:
            r1 = r10
        L1f:
            return
    }

    private ExtractorMediaSource(android.net.Uri r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r3, int r4, java.lang.String r5, int r6, java.lang.Object r7) {
            r0 = this;
            r0.<init>()
            r0.uri = r1
            r0.dataSourceFactory = r2
            r0.extractorsFactory = r3
            r0.minLoadableRetryCount = r4
            r0.customCacheKey = r5
            r0.continueLoadingCheckIntervalBytes = r6
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.timelineDurationUs = r1
            r0.tag = r7
            return
    }

    ExtractorMediaSource(android.net.Uri r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r3, int r4, java.lang.String r5, int r6, java.lang.Object r7, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.1 r8) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public ExtractorMediaSource(android.net.Uri r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r9, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r10, android.os.Handler r11, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener r12) {
            r7 = this;
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public ExtractorMediaSource(android.net.Uri r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r11, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r12, android.os.Handler r13, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource.EventListener r14, java.lang.String r15) {
            r9 = this;
            r4 = -1
            r8 = 1048576(0x100000, float:1.469368E-39)
            r0 = r9
            r1 = r10
            r2 = r11
            r3 = r12
            r5 = r13
            r6 = r14
            r7 = r15
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    private void notifySourceInfoRefreshed(long r7, boolean r9) {
            r6 = this;
            r6.timelineDurationUs = r7
            r6.timelineIsSeekable = r9
            com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.SinglePeriodTimeline
            long r1 = r6.timelineDurationUs
            boolean r3 = r6.timelineIsSeekable
            java.lang.Object r5 = r6.tag
            r4 = 0
            r0 = r7
            r0.<init>(r1, r3, r4, r5)
            r8 = 0
            r6.refreshSourceInfo(r7, r8)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r12, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r13) {
            r11 = this;
            int r0 = r12.periodIndex
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod
            android.net.Uri r2 = r11.uri
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r1 = r11.dataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3 = r1.createDataSource()
            com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorsFactory r1 = r11.extractorsFactory
            com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r4 = r1.createExtractors()
            int r5 = r11.minLoadableRetryCount
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r6 = r11.createEventDispatcher(r12)
            java.lang.String r9 = r11.customCacheKey
            int r10 = r11.continueLoadingCheckIntervalBytes
            r1 = r0
            r7 = r11
            r8 = r13
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10)
            return r0
    }

    @Override
    public final void maybeThrowSourceInfoRefreshError() throws java.io.IOException {
            r0 = this;
            return
    }

    @Override
    public final void onSourceInfoRefreshed(long r3, boolean r5) {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r0 != 0) goto Lb
            long r3 = r2.timelineDurationUs
        Lb:
            long r0 = r2.timelineDurationUs
            int r0 = (r0 > r3 ? 1 : (r0 == r3 ? 0 : -1))
            if (r0 != 0) goto L16
            boolean r0 = r2.timelineIsSeekable
            if (r0 != r5) goto L16
            return
        L16:
            r2.notifySourceInfoRefreshed(r3, r5)
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r2, boolean r3) {
            r1 = this;
            long r2 = r1.timelineDurationUs
            r0 = 0
            r1.notifySourceInfoRefreshed(r2, r0)
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r1) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod) r1
            r1.release()
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r0 = this;
            return
    }
}
