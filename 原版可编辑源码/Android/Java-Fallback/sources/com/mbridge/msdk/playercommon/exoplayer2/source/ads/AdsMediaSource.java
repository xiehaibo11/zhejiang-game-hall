package com.mbridge.msdk.playercommon.exoplayer2.source.ads;

public final class AdsMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId> {
    private static final java.lang.String TAG = "AdsMediaSource";
    private long[][] adDurationsUs;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] adGroupMediaSources;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.MediaSourceFactory adMediaSourceFactory;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState adPlaybackState;
    private final android.view.ViewGroup adUiViewGroup;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader adsLoader;
    private com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.ComponentListener componentListener;
    private java.lang.Object contentManifest;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource contentMediaSource;
    private com.mbridge.msdk.playercommon.exoplayer2.Timeline contentTimeline;
    private final java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> deferredMediaPeriodByAdMediaSource;
    private final android.os.Handler eventHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.EventListener eventListener;
    private final android.os.Handler mainHandler;
    private final com.mbridge.msdk.playercommon.exoplayer2.Timeline.Period period;



    public static final class AdLoadException extends java.io.IOException {
        public static final int TYPE_AD = 0;
        public static final int TYPE_AD_GROUP = 1;
        public static final int TYPE_ALL_ADS = 2;
        public static final int TYPE_UNEXPECTED = 3;
        public final int type;

        public @interface Type {
        }

        private AdLoadException(int r1, java.lang.Exception r2) {
                r0 = this;
                r0.<init>(r2)
                r0.type = r1
                return
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException createForAd(java.lang.Exception r2) {
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException
                r1 = 0
                r0.<init>(r1, r2)
                return r0
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException createForAdGroup(java.lang.Exception r4, int r5) {
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException
                java.io.IOException r1 = new java.io.IOException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Failed to load ad group "
                r2.append(r3)
                r2.append(r5)
                java.lang.String r5 = r2.toString()
                r1.<init>(r5, r4)
                r4 = 1
                r0.<init>(r4, r1)
                return r0
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException createForAllAds(java.lang.Exception r2) {
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException
                r1 = 2
                r0.<init>(r1, r2)
                return r0
        }

        public static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException createForUnexpected(java.lang.RuntimeException r2) {
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException
                r1 = 3
                r0.<init>(r1, r2)
                return r0
        }

        public final java.lang.RuntimeException getRuntimeExceptionForUnexpected() {
                r2 = this;
                int r0 = r2.type
                r1 = 3
                if (r0 != r1) goto L7
                r0 = 1
                goto L8
            L7:
                r0 = 0
            L8:
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                java.lang.Throwable r0 = r2.getCause()
                java.lang.RuntimeException r0 = (java.lang.RuntimeException) r0
                return r0
        }
    }

    private final class AdPrepareErrorListener implements com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod.PrepareErrorListener {
        private final int adGroupIndex;
        private final int adIndexInAdGroup;
        private final android.net.Uri adUri;
        final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource this$0;


        public AdPrepareErrorListener(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r1, android.net.Uri r2, int r3, int r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.adUri = r2
                r0.adGroupIndex = r3
                r0.adIndexInAdGroup = r4
                return
        }

        static int access$800(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdPrepareErrorListener r0) {
                int r0 = r0.adGroupIndex
                return r0
        }

        static int access$900(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdPrepareErrorListener r0) {
                int r0 = r0.adIndexInAdGroup
                return r0
        }

        @Override
        public final void onPrepareError(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r13, java.io.IOException r14) {
                r12 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r12.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$700(r0, r13)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec
                android.net.Uri r13 = r12.adUri
                r2.<init>(r13)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdLoadException r10 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException.createForAd(r14)
                r3 = 6
                r4 = -1
                r6 = 0
                r8 = 0
                r11 = 1
                r1.loadError(r2, r3, r4, r6, r8, r10, r11)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r13 = r12.this$0
                android.os.Handler r13 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$1000(r13)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdPrepareErrorListener$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdPrepareErrorListener$1
                r0.<init>(r12, r14)
                r13.post(r0)
                return
        }
    }

    private final class ComponentListener implements com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader.EventListener {
        private final android.os.Handler playerHandler;
        private volatile boolean released;
        final com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource this$0;





        public ComponentListener(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                android.os.Handler r1 = new android.os.Handler
                r1.<init>()
                r0.playerHandler = r1
                return
        }

        static boolean access$200(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.ComponentListener r0) {
                boolean r0 = r0.released
                return r0
        }

        @Override
        public final void onAdClicked() {
                r2 = this;
                boolean r0 = r2.released
                if (r0 == 0) goto L5
                return
            L5:
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                android.os.Handler r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r0)
                if (r0 == 0) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$EventListener r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$500(r0)
                if (r0 == 0) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                android.os.Handler r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$2 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$2
                r1.<init>(r2)
                r0.post(r1)
            L23:
                return
        }

        @Override
        public final void onAdLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.AdLoadException r14, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r15) {
                r13 = this;
                boolean r0 = r13.released
                if (r0 == 0) goto L5
                return
            L5:
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r13.this$0
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$600(r0, r1)
                r4 = 6
                r5 = -1
                r7 = 0
                r9 = 0
                r12 = 1
                r3 = r15
                r11 = r14
                r2.loadError(r3, r4, r5, r7, r9, r11, r12)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r15 = r13.this$0
                android.os.Handler r15 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r15)
                if (r15 == 0) goto L37
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r15 = r13.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$EventListener r15 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$500(r15)
                if (r15 == 0) goto L37
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r15 = r13.this$0
                android.os.Handler r15 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r15)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$4 r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$4
                r0.<init>(r13, r14)
                r15.post(r0)
            L37:
                return
        }

        @Override
        public final void onAdPlaybackState(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r3) {
                r2 = this;
                boolean r0 = r2.released
                if (r0 == 0) goto L5
                return
            L5:
                android.os.Handler r0 = r2.playerHandler
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$1
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }

        @Override
        public final void onAdTapped() {
                r2 = this;
                boolean r0 = r2.released
                if (r0 == 0) goto L5
                return
            L5:
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                android.os.Handler r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r0)
                if (r0 == 0) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$EventListener r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$500(r0)
                if (r0 == 0) goto L23
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0 = r2.this$0
                android.os.Handler r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.access$400(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$3 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener$3
                r1.<init>(r2)
                r0.post(r1)
            L23:
                return
        }

        public final void release() {
                r2 = this;
                r0 = 1
                r2.released = r0
                android.os.Handler r0 = r2.playerHandler
                r1 = 0
                r0.removeCallbacksAndMessages(r1)
                return
        }
    }

    public interface EventListener {
        void onAdClicked();

        void onAdLoadError(java.io.IOException r1);

        void onAdTapped();

        void onInternalAdLoadError(java.lang.RuntimeException r1);
    }

    public interface MediaSourceFactory {
        com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource createMediaSource(android.net.Uri r1);

        int[] getSupportedTypes();
    }

    public AdsMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r8, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.MediaSourceFactory r9, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader r10, android.view.ViewGroup r11) {
            r7 = this;
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public AdsMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.MediaSourceFactory r2, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader r3, android.view.ViewGroup r4, android.os.Handler r5, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.EventListener r6) {
            r0 = this;
            r0.<init>()
            r0.contentMediaSource = r1
            r0.adMediaSourceFactory = r2
            r0.adsLoader = r3
            r0.adUiViewGroup = r4
            r0.eventHandler = r5
            r0.eventListener = r6
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r4 = android.os.Looper.getMainLooper()
            r1.<init>(r4)
            r0.mainHandler = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.deferredMediaPeriodByAdMediaSource = r1
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r1 = new com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period
            r1.<init>()
            r0.period = r1
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[r1][]
            r0.adGroupMediaSources = r4
            long[][] r1 = new long[r1][]
            r0.adDurationsUs = r1
            int[] r1 = r2.getSupportedTypes()
            r3.setSupportedContentTypes(r1)
            return
    }

    public AdsMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r9, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader r10, android.view.ViewGroup r11) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory
            r2.<init>(r9)
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public AdsMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r8, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r9, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader r10, android.view.ViewGroup r11, android.os.Handler r12, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.EventListener r13) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaSource$Factory
            r2.<init>(r9)
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    static android.view.ViewGroup access$000(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0) {
            android.view.ViewGroup r0 = r0.adUiViewGroup
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader access$100(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0) {
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsLoader r0 = r0.adsLoader
            return r0
    }

    static android.os.Handler access$1000(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0) {
            android.os.Handler r0 = r0.mainHandler
            return r0
    }

    static void access$300(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0, com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r1) {
            r0.onAdPlaybackState(r1)
            return
    }

    static android.os.Handler access$400(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0) {
            android.os.Handler r0 = r0.eventHandler
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource.EventListener access$500(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0) {
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$EventListener r0 = r0.eventListener
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher access$600(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1) {
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r0.createEventDispatcher(r1)
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher access$700(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource r0, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1) {
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r0.createEventDispatcher(r1)
            return r0
    }

    private void maybeUpdateSourceInfo() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r3.adPlaybackState
            if (r0 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r3.contentTimeline
            if (r1 == 0) goto L25
            long[][] r1 = r3.adDurationsUs
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r0.withAdDurationsUs(r1)
            r3.adPlaybackState = r0
            int r0 = r0.adGroupCount
            if (r0 != 0) goto L17
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r3.contentTimeline
            goto L20
        L17:
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.SinglePeriodAdTimeline r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.SinglePeriodAdTimeline
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r1 = r3.contentTimeline
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r2 = r3.adPlaybackState
            r0.<init>(r1, r2)
        L20:
            java.lang.Object r1 = r3.contentManifest
            r3.refreshSourceInfo(r0, r1)
        L25:
            return
    }

    private void onAdPlaybackState(com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r3.adPlaybackState
            if (r0 != 0) goto L1b
            int r0 = r4.adGroupCount
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[r0][]
            r3.adGroupMediaSources = r0
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[r1]
            java.util.Arrays.fill(r0, r2)
            int r0 = r4.adGroupCount
            long[][] r0 = new long[r0][]
            r3.adDurationsUs = r0
            long[] r1 = new long[r1]
            java.util.Arrays.fill(r0, r1)
        L1b:
            r3.adPlaybackState = r4
            r3.maybeUpdateSourceInfo()
            return
    }

    private void onAdSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r5, int r6, int r7, com.mbridge.msdk.playercommon.exoplayer2.Timeline r8) {
            r4 = this;
            int r0 = r8.getPeriodCount()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L9
            goto La
        L9:
            r2 = r1
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r2)
            long[][] r0 = r4.adDurationsUs
            r6 = r0[r6]
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r0 = r4.period
            com.mbridge.msdk.playercommon.exoplayer2.Timeline$Period r8 = r8.getPeriod(r1, r0)
            long r2 = r8.getDurationUs()
            r6[r7] = r2
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r6 = r4.deferredMediaPeriodByAdMediaSource
            boolean r6 = r6.containsKey(r5)
            if (r6 == 0) goto L44
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r6 = r4.deferredMediaPeriodByAdMediaSource
            java.lang.Object r6 = r6.get(r5)
            java.util.List r6 = (java.util.List) r6
        L2d:
            int r7 = r6.size()
            if (r1 >= r7) goto L3f
            java.lang.Object r7 = r6.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r7 = (com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod) r7
            r7.createPeriod()
            int r1 = r1 + 1
            goto L2d
        L3f:
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r6 = r4.deferredMediaPeriodByAdMediaSource
            r6.remove(r5)
        L44:
            r4.maybeUpdateSourceInfo()
            return
    }

    private void onContentSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.Timeline r1, java.lang.Object r2) {
            r0 = this;
            r0.contentTimeline = r1
            r0.contentManifest = r2
            r0.maybeUpdateSourceInfo()
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r10, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r11) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r0 = r9.adPlaybackState
            int r0 = r0.adGroupCount
            if (r0 <= 0) goto L90
            boolean r0 = r10.isAd()
            if (r0 == 0) goto L90
            int r0 = r10.adGroupIndex
            int r1 = r10.adIndexInAdGroup
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState r2 = r9.adPlaybackState
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdPlaybackState$AdGroup[] r2 = r2.adGroups
            r2 = r2[r0]
            android.net.Uri[] r2 = r2.uris
            r2 = r2[r1]
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r3 = r9.adGroupMediaSources
            r3 = r3[r0]
            int r3 = r3.length
            if (r3 > r1) goto L63
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$MediaSourceFactory r3 = r9.adMediaSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3 = r3.createMediaSource(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r4 = r9.adGroupMediaSources
            r5 = r4[r0]
            int r5 = r5.length
            if (r1 < r5) goto L50
            int r6 = r1 + 1
            r7 = r4[r0]
            java.lang.Object[] r7 = java.util.Arrays.copyOf(r7, r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r7 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[]) r7
            r4[r0] = r7
            long[][] r4 = r9.adDurationsUs
            r7 = r4[r0]
            long[] r7 = java.util.Arrays.copyOf(r7, r6)
            r4[r0] = r7
            long[][] r4 = r9.adDurationsUs
            r4 = r4[r0]
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            java.util.Arrays.fill(r4, r5, r6, r7)
        L50:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r4 = r9.adGroupMediaSources
            r4 = r4[r0]
            r4[r1] = r3
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r4 = r9.deferredMediaPeriodByAdMediaSource
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r4.put(r3, r5)
            r9.prepareChildSource(r10, r3)
        L63:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r3 = r9.adGroupMediaSources
            r3 = r3[r0]
            r3 = r3[r1]
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r6 = 0
            long r7 = r10.windowSequenceNumber
            r5.<init>(r6, r7)
            r4.<init>(r3, r5, r11)
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdPrepareErrorListener r10 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$AdPrepareErrorListener
            r10.<init>(r9, r2, r0, r1)
            r4.setPrepareErrorListener(r10)
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r10 = r9.deferredMediaPeriodByAdMediaSource
            java.lang.Object r10 = r10.get(r3)
            java.util.List r10 = (java.util.List) r10
            if (r10 != 0) goto L8c
            r4.createPeriod()
            goto L8f
        L8c:
            r10.add(r4)
        L8f:
            return r4
        L90:
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r9.contentMediaSource
            r0.<init>(r1, r10, r11)
            r0.createPeriod()
            return r0
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId getMediaPeriodIdForChildMediaPeriodId(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3) {
            r1 = this;
            boolean r0 = r2.isAd()
            if (r0 == 0) goto L7
            goto L8
        L7:
            r2 = r3
        L8:
            return r2
    }

    @Override
    protected final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId getMediaPeriodIdForChildMediaPeriodId(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId) r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = r0.getMediaPeriodIdForChildMediaPeriodId(r1, r2)
            return r1
    }

    protected final void onChildSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, com.mbridge.msdk.playercommon.exoplayer2.Timeline r4, java.lang.Object r5) {
            r1 = this;
            boolean r0 = r2.isAd()
            if (r0 == 0) goto Le
            int r5 = r2.adGroupIndex
            int r2 = r2.adIndexInAdGroup
            r1.onAdSourceInfoRefreshed(r3, r5, r2, r4)
            goto L11
        Le:
            r1.onContentSourceInfoRefreshed(r4, r5)
        L11:
            return
    }

    @Override
    protected final void onChildSourceInfoRefreshed(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId) r1
            r0.onChildSourceInfoRefreshed(r1, r2, r3, r4)
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r3, boolean r4) {
            r2 = this;
            super.prepareSourceInternal(r3, r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener
            r4.<init>(r2)
            r2.componentListener = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId
            r1 = 0
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r2.contentMediaSource
            r2.prepareChildSource(r0, r1)
            android.os.Handler r0 = r2.mainHandler
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$1
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod) r3
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r0 = r2.deferredMediaPeriodByAdMediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r3.mediaSource
            java.lang.Object r0 = r0.get(r1)
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L11
            r0.remove(r3)
        L11:
            r3.releasePeriod()
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r2 = this;
            super.releaseSourceInternal()
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$ComponentListener r0 = r2.componentListener
            r0.release()
            r0 = 0
            r2.componentListener = r0
            java.util.Map<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.DeferredMediaPeriod>> r1 = r2.deferredMediaPeriodByAdMediaSource
            r1.clear()
            r2.contentTimeline = r0
            r2.contentManifest = r0
            r2.adPlaybackState = r0
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[][] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[r0][]
            r2.adGroupMediaSources = r1
            long[][] r0 = new long[r0][]
            r2.adDurationsUs = r0
            android.os.Handler r0 = r2.mainHandler
            com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$2 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ads.AdsMediaSource$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }
}
