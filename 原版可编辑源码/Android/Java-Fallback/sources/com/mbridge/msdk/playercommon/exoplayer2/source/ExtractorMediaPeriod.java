package com.mbridge.msdk.playercommon.exoplayer2.source;

final class ExtractorMediaPeriod implements com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput, com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue.UpstreamFormatChangedListener, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable>, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.ReleaseCallback {
    private static final long DEFAULT_LAST_SAMPLE_DURATION_US = 10000;
    private int actualMinLoadableRetryCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator allocator;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback callback;
    private final long continueLoadingCheckIntervalBytes;
    private final java.lang.String customCacheKey;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
    private long durationUs;
    private int enabledTrackCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher eventDispatcher;
    private int extractedSamplesCountAtStartOfLoad;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractorHolder extractorHolder;
    private final android.os.Handler handler;
    private boolean haveAudioVideoTracks;
    private long lastSeekPositionUs;
    private long length;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.Listener listener;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable loadCondition;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader loader;
    private boolean loadingFinished;
    private final java.lang.Runnable maybeFinishPrepareRunnable;
    private final int minLoadableRetryCount;
    private boolean notifiedReadingStarted;
    private boolean notifyDiscontinuity;
    private final java.lang.Runnable onContinueLoadingRequestedRunnable;
    private boolean pendingDeferredRetry;
    private long pendingResetPositionUs;
    private boolean prepared;
    private boolean released;
    private int[] sampleQueueTrackIds;
    private com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] sampleQueues;
    private boolean sampleQueuesBuilt;
    private com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap seekMap;
    private boolean seenFirstTrackSelection;
    private boolean[] trackEnabledStates;
    private boolean[] trackFormatNotificationSent;
    private boolean[] trackIsAudioVideoFlags;
    private com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray tracks;
    private final android.net.Uri uri;



    final class ExtractingLoadable implements com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable {
        private long bytesLoaded;
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
        private com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
        private final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractorHolder extractorHolder;
        private long length;
        private volatile boolean loadCanceled;
        private final com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable loadCondition;
        private boolean pendingExtractorSeek;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder positionHolder;
        private long seekTimeUs;
        final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod this$0;
        private final android.net.Uri uri;

        public ExtractingLoadable(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r1, android.net.Uri r2, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractorHolder r4, com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r5) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r2)
                android.net.Uri r1 = (android.net.Uri) r1
                r0.uri = r1
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r3)
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = (com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource) r1
                r0.dataSource = r1
                java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractorHolder) r1
                r0.extractorHolder = r1
                r0.loadCondition = r5
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r1 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder
                r1.<init>()
                r0.positionHolder = r1
                r1 = 1
                r0.pendingExtractorSeek = r1
                r1 = -1
                r0.length = r1
                return
        }

        static com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec access$400(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r0) {
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r0 = r0.dataSpec
                return r0
        }

        static long access$500(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r2) {
                long r0 = r2.seekTimeUs
                return r0
        }

        static long access$600(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r2) {
                long r0 = r2.bytesLoaded
                return r0
        }

        static long access$700(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r2) {
                long r0 = r2.length
                return r0
        }

        @Override
        public final void cancelLoad() {
                r1 = this;
                r0 = 1
                r1.loadCanceled = r0
                return
        }

        @Override
        public final void load() throws java.io.IOException, java.lang.InterruptedException {
                r14 = this;
                r0 = 0
                r1 = r0
            L2:
                if (r1 != 0) goto Lcc
                boolean r2 = r14.loadCanceled
                if (r2 != 0) goto Lcc
                r2 = 0
                r3 = 1
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r4 = r14.positionHolder     // Catch: java.lang.Throwable -> Lae
                long r12 = r4.position     // Catch: java.lang.Throwable -> Lae
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec     // Catch: java.lang.Throwable -> Lae
                android.net.Uri r6 = r14.uri     // Catch: java.lang.Throwable -> Lae
                r9 = -1
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r5 = r14.this$0     // Catch: java.lang.Throwable -> Lae
                java.lang.String r11 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.access$800(r5)     // Catch: java.lang.Throwable -> Lae
                r5 = r4
                r7 = r12
                r5.<init>(r6, r7, r9, r11)     // Catch: java.lang.Throwable -> Lae
                r14.dataSpec = r4     // Catch: java.lang.Throwable -> Lae
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r5 = r14.dataSource     // Catch: java.lang.Throwable -> Lae
                long r4 = r5.open(r4)     // Catch: java.lang.Throwable -> Lae
                r14.length = r4     // Catch: java.lang.Throwable -> Lae
                r6 = -1
                int r6 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
                if (r6 == 0) goto L32
                long r4 = r4 + r12
                r14.length = r4     // Catch: java.lang.Throwable -> Lae
            L32:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput r4 = new com.mbridge.msdk.playercommon.exoplayer2.extractor.DefaultExtractorInput     // Catch: java.lang.Throwable -> Lae
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r6 = r14.dataSource     // Catch: java.lang.Throwable -> Lae
                long r9 = r14.length     // Catch: java.lang.Throwable -> Lae
                r5 = r4
                r7 = r12
                r5.<init>(r6, r7, r9)     // Catch: java.lang.Throwable -> Lae
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder r2 = r14.extractorHolder     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r5 = r14.dataSource     // Catch: java.lang.Throwable -> Lab
                android.net.Uri r5 = r5.getUri()     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r2 = r2.selectExtractor(r4, r5)     // Catch: java.lang.Throwable -> Lab
                boolean r5 = r14.pendingExtractorSeek     // Catch: java.lang.Throwable -> Lab
                if (r5 == 0) goto L54
                long r5 = r14.seekTimeUs     // Catch: java.lang.Throwable -> Lab
                r2.seek(r12, r5)     // Catch: java.lang.Throwable -> Lab
                r14.pendingExtractorSeek = r0     // Catch: java.lang.Throwable -> Lab
            L54:
                if (r1 != 0) goto L8d
                boolean r5 = r14.loadCanceled     // Catch: java.lang.Throwable -> Lab
                if (r5 != 0) goto L8d
                com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r5 = r14.loadCondition     // Catch: java.lang.Throwable -> Lab
                r5.block()     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r5 = r14.positionHolder     // Catch: java.lang.Throwable -> Lab
                int r1 = r2.read(r4, r5)     // Catch: java.lang.Throwable -> Lab
                long r5 = r4.getPosition()     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r7 = r14.this$0     // Catch: java.lang.Throwable -> Lab
                long r7 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.access$900(r7)     // Catch: java.lang.Throwable -> Lab
                long r7 = r7 + r12
                int r5 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
                if (r5 <= 0) goto L54
                long r12 = r4.getPosition()     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r5 = r14.loadCondition     // Catch: java.lang.Throwable -> Lab
                r5.close()     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r5 = r14.this$0     // Catch: java.lang.Throwable -> Lab
                android.os.Handler r5 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.access$1100(r5)     // Catch: java.lang.Throwable -> Lab
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r6 = r14.this$0     // Catch: java.lang.Throwable -> Lab
                java.lang.Runnable r6 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.access$1000(r6)     // Catch: java.lang.Throwable -> Lab
                r5.post(r6)     // Catch: java.lang.Throwable -> Lab
                goto L54
            L8d:
                if (r1 != r3) goto L91
                r1 = r0
                goto La4
            L91:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r2 = r14.positionHolder
                long r3 = r4.getPosition()
                r2.position = r3
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r2 = r14.positionHolder
                long r2 = r2.position
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r4 = r14.dataSpec
                long r4 = r4.absoluteStreamPosition
                long r2 = r2 - r4
                r14.bytesLoaded = r2
            La4:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2 = r14.dataSource
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r2)
                goto L2
            Lab:
                r0 = move-exception
                r2 = r4
                goto Laf
            Lae:
                r0 = move-exception
            Laf:
                if (r1 == r3) goto Lc6
                if (r2 == 0) goto Lc6
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r1 = r14.positionHolder
                long r2 = r2.getPosition()
                r1.position = r2
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r1 = r14.positionHolder
                long r1 = r1.position
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r14.dataSpec
                long r3 = r3.absoluteStreamPosition
                long r1 = r1 - r3
                r14.bytesLoaded = r1
            Lc6:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r14.dataSource
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
                throw r0
            Lcc:
                return
        }

        public final void setLoadPosition(long r2, long r4) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.PositionHolder r0 = r1.positionHolder
                r0.position = r2
                r1.seekTimeUs = r4
                r2 = 1
                r1.pendingExtractorSeek = r2
                return
        }
    }

    private static final class ExtractorHolder {
        private com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor extractor;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput extractorOutput;
        private final com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] extractors;

        public ExtractorHolder(com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r1, com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r2) {
                r0 = this;
                r0.<init>()
                r0.extractors = r1
                r0.extractorOutput = r2
                return
        }

        public final void release() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r0 = r1.extractor
                if (r0 == 0) goto La
                r0.release()
                r0 = 0
                r1.extractor = r0
            La:
                return
        }

        public final com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor selectExtractor(com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorInput r6, android.net.Uri r7) throws java.io.IOException, java.lang.InterruptedException {
                r5 = this;
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r0 = r5.extractor
                if (r0 == 0) goto L5
                return r0
            L5:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r0 = r5.extractors
                int r1 = r0.length
                r2 = 0
            L9:
                if (r2 >= r1) goto L24
                r3 = r0[r2]
                boolean r4 = r3.sniff(r6)     // Catch: java.lang.Throwable -> L19 java.io.EOFException -> L1e
                if (r4 == 0) goto L1e
                r5.extractor = r3     // Catch: java.lang.Throwable -> L19 java.io.EOFException -> L1e
                r6.resetPeekPosition()
                goto L24
            L19:
                r7 = move-exception
                r6.resetPeekPosition()
                throw r7
            L1e:
                r6.resetPeekPosition()
                int r2 = r2 + 1
                goto L9
            L24:
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r6 = r5.extractor
                if (r6 == 0) goto L30
                com.mbridge.msdk.playercommon.exoplayer2.extractor.ExtractorOutput r7 = r5.extractorOutput
                r6.init(r7)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor r6 = r5.extractor
                return r6
            L30:
                com.mbridge.msdk.playercommon.exoplayer2.source.UnrecognizedInputFormatException r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.UnrecognizedInputFormatException
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "None of the available extractors ("
                r0.append(r1)
                com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r1 = r5.extractors
                java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getCommaDelimitedSimpleClassNames(r1)
                r0.append(r1)
                java.lang.String r1 = ") could read the stream."
                r0.append(r1)
                java.lang.String r0 = r0.toString()
                r6.<init>(r0, r7)
                throw r6
        }
    }

    interface Listener {
        void onSourceInfoRefreshed(long r1, boolean r3);
    }

    private final class SampleStreamImpl implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream {
        final com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod this$0;
        private final int track;

        public SampleStreamImpl(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r1, int r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.track = r2
                return
        }

        static int access$300(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.SampleStreamImpl r0) {
                int r0 = r0.track
                return r0
        }

        @Override
        public final boolean isReady() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0 = r2.this$0
                int r1 = r2.track
                boolean r0 = r0.isReady(r1)
                return r0
        }

        @Override
        public final void maybeThrowError() throws java.io.IOException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0 = r1.this$0
                r0.maybeThrowError()
                return
        }

        @Override
        public final int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r3, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r4, boolean r5) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0 = r2.this$0
                int r1 = r2.track
                int r3 = r0.readData(r1, r3, r4, r5)
                return r3
        }

        @Override
        public final int skipData(long r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0 = r2.this$0
                int r1 = r2.track
                int r3 = r0.skipData(r1, r3)
                return r3
        }
    }

    public ExtractorMediaPeriod(android.net.Uri r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2, com.mbridge.msdk.playercommon.exoplayer2.extractor.Extractor[] r3, int r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher r5, com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.Listener r6, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r7, java.lang.String r8, int r9) {
            r0 = this;
            r0.<init>()
            r0.uri = r1
            r0.dataSource = r2
            r0.minLoadableRetryCount = r4
            r0.eventDispatcher = r5
            r0.listener = r6
            r0.allocator = r7
            r0.customCacheKey = r8
            long r1 = (long) r9
            r0.continueLoadingCheckIntervalBytes = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader
            java.lang.String r2 = "Loader:ExtractorMediaPeriod"
            r1.<init>(r2)
            r0.loader = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder
            r1.<init>(r3, r0)
            r0.extractorHolder = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable
            r1.<init>()
            r0.loadCondition = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$1
            r1.<init>(r0)
            r0.maybeFinishPrepareRunnable = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$2 r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$2
            r1.<init>(r0)
            r0.onContinueLoadingRequestedRunnable = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.handler = r1
            r1 = 0
            int[] r2 = new int[r1]
            r0.sampleQueueTrackIds = r2
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[r1]
            r0.sampleQueues = r1
            r1 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r0.pendingResetPositionUs = r1
            r6 = -1
            r0.length = r6
            r0.durationUs = r1
            r1 = -1
            if (r4 != r1) goto L5a
            r4 = 3
        L5a:
            r0.actualMinLoadableRetryCount = r4
            r5.mediaPeriodCreated()
            return
    }

    static void access$000(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            r0.maybeFinishPrepare()
            return
    }

    static boolean access$100(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            boolean r0 = r0.released
            return r0
    }

    static java.lang.Runnable access$1000(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            java.lang.Runnable r0 = r0.onContinueLoadingRequestedRunnable
            return r0
    }

    static android.os.Handler access$1100(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            android.os.Handler r0 = r0.handler
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback access$200(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r0 = r0.callback
            return r0
    }

    static java.lang.String access$800(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r0) {
            java.lang.String r0 = r0.customCacheKey
            return r0
    }

    static long access$900(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod r2) {
            long r0 = r2.continueLoadingCheckIntervalBytes
            return r0
    }

    private boolean configureRetry(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r7, int r8) {
            r6 = this;
            long r0 = r6.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            r1 = 1
            if (r0 != 0) goto L44
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r6.seekMap
            if (r0 == 0) goto L1b
            long r2 = r0.getDurationUs()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r0 == 0) goto L1b
            goto L44
        L1b:
            boolean r8 = r6.prepared
            r0 = 0
            if (r8 == 0) goto L29
            boolean r8 = r6.suppressRead()
            if (r8 != 0) goto L29
            r6.pendingDeferredRetry = r1
            return r0
        L29:
            boolean r8 = r6.prepared
            r6.notifyDiscontinuity = r8
            r2 = 0
            r6.lastSeekPositionUs = r2
            r6.extractedSamplesCountAtStartOfLoad = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r8 = r6.sampleQueues
            int r4 = r8.length
        L36:
            if (r0 >= r4) goto L40
            r5 = r8[r0]
            r5.reset()
            int r0 = r0 + 1
            goto L36
        L40:
            r7.setLoadPosition(r2, r2)
            return r1
        L44:
            r6.extractedSamplesCountAtStartOfLoad = r8
            return r1
    }

    private void copyLengthFromLoader(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r5) {
            r4 = this;
            long r0 = r4.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$700(r5)
            r4.length = r0
        Le:
            return
    }

    private int getExtractedSamplesCount() {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r5.sampleQueues
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L5:
            if (r2 >= r1) goto L11
            r4 = r0[r2]
            int r4 = r4.getWriteIndex()
            int r3 = r3 + r4
            int r2 = r2 + 1
            goto L5
        L11:
            return r3
    }

    private long getLargestQueuedTimestampUs() {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r7.sampleQueues
            int r1 = r0.length
            r2 = -9223372036854775808
            r4 = 0
        L6:
            if (r4 >= r1) goto L15
            r5 = r0[r4]
            long r5 = r5.getLargestQueuedTimestampUs()
            long r2 = java.lang.Math.max(r2, r5)
            int r4 = r4 + 1
            goto L6
        L15:
            return r2
    }

    private static boolean isLoadableExceptionFatal(java.io.IOException r0) {
            boolean r0 = r0 instanceof com.mbridge.msdk.playercommon.exoplayer2.source.UnrecognizedInputFormatException
            return r0
    }

    private boolean isPendingReset() {
            r4 = this;
            long r0 = r4.pendingResetPositionUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Ld
            r0 = 1
            goto Le
        Ld:
            r0 = 0
        Le:
            return r0
    }

    private void maybeFinishPrepare() {
            r8 = this;
            boolean r0 = r8.released
            if (r0 != 0) goto Lb0
            boolean r0 = r8.prepared
            if (r0 != 0) goto Lb0
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r8.seekMap
            if (r0 == 0) goto Lb0
            boolean r0 = r8.sampleQueuesBuilt
            if (r0 != 0) goto L12
            goto Lb0
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r8.sampleQueues
            int r1 = r0.length
            r2 = 0
            r3 = r2
        L17:
            if (r3 >= r1) goto L25
            r4 = r0[r3]
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r4.getUpstreamFormat()
            if (r4 != 0) goto L22
            return
        L22:
            int r3 = r3 + 1
            goto L17
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r0 = r8.loadCondition
            r0.close()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r8.sampleQueues
            int r0 = r0.length
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r0]
            boolean[] r3 = new boolean[r0]
            r8.trackIsAudioVideoFlags = r3
            boolean[] r3 = new boolean[r0]
            r8.trackEnabledStates = r3
            boolean[] r3 = new boolean[r0]
            r8.trackFormatNotificationSent = r3
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r3 = r8.seekMap
            long r3 = r3.getDurationUs()
            r8.durationUs = r3
            r3 = r2
        L44:
            r4 = 1
            if (r3 >= r0) goto L76
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = r8.sampleQueues
            r5 = r5[r3]
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r5.getUpstreamFormat()
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r6 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r7 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r4]
            r7[r2] = r5
            r6.<init>(r7)
            r1[r3] = r6
            java.lang.String r5 = r5.sampleMimeType
            boolean r6 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isVideo(r5)
            if (r6 != 0) goto L6a
            boolean r5 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isAudio(r5)
            if (r5 == 0) goto L69
            goto L6a
        L69:
            r4 = r2
        L6a:
            boolean[] r5 = r8.trackIsAudioVideoFlags
            r5[r3] = r4
            boolean r5 = r8.haveAudioVideoTracks
            r4 = r4 | r5
            r8.haveAudioVideoTracks = r4
            int r3 = r3 + 1
            goto L44
        L76:
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray
            r0.<init>(r1)
            r8.tracks = r0
            int r0 = r8.minLoadableRetryCount
            r1 = -1
            if (r0 != r1) goto L9c
            long r0 = r8.length
            r2 = -1
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9c
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r8.seekMap
            long r0 = r0.getDurationUs()
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L9c
            r0 = 6
            r8.actualMinLoadableRetryCount = r0
        L9c:
            r8.prepared = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$Listener r0 = r8.listener
            long r1 = r8.durationUs
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r3 = r8.seekMap
            boolean r3 = r3.isSeekable()
            r0.onSourceInfoRefreshed(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r0 = r8.callback
            r0.onPrepared(r8)
        Lb0:
            return
    }

    private void maybeNotifyTrackFormat(int r10) {
            r9 = this;
            boolean[] r0 = r9.trackFormatNotificationSent
            boolean r0 = r0[r10]
            if (r0 != 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r9.tracks
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r0 = r0.get(r10)
            r1 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r0.getFormat(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r9.eventDispatcher
            java.lang.String r0 = r4.sampleMimeType
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getTrackType(r0)
            r5 = 0
            r6 = 0
            long r7 = r9.lastSeekPositionUs
            r2.downstreamFormatChanged(r3, r4, r5, r6, r7)
            boolean[] r0 = r9.trackFormatNotificationSent
            r1 = 1
            r0[r10] = r1
        L25:
            return
    }

    private void maybeStartDeferredRetry(int r4) {
            r3 = this;
            boolean r0 = r3.pendingDeferredRetry
            if (r0 == 0) goto L35
            boolean[] r0 = r3.trackIsAudioVideoFlags
            boolean r0 = r0[r4]
            if (r0 == 0) goto L35
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r3.sampleQueues
            r4 = r0[r4]
            boolean r4 = r4.hasNextSample()
            if (r4 == 0) goto L15
            goto L35
        L15:
            r0 = 0
            r3.pendingResetPositionUs = r0
            r4 = 0
            r3.pendingDeferredRetry = r4
            r2 = 1
            r3.notifyDiscontinuity = r2
            r3.lastSeekPositionUs = r0
            r3.extractedSamplesCountAtStartOfLoad = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r3.sampleQueues
            int r1 = r0.length
        L26:
            if (r4 >= r1) goto L30
            r2 = r0[r4]
            r2.reset()
            int r4 = r4 + 1
            goto L26
        L30:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r4 = r3.callback
            r4.onContinueLoadingRequested(r3)
        L35:
            return
    }

    private boolean seekInsideBufferUs(long r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r6.sampleQueues
            int r0 = r0.length
            r1 = 0
            r2 = r1
        L5:
            r3 = 1
            if (r2 >= r0) goto L28
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r6.sampleQueues
            r4 = r4[r2]
            r4.rewind()
            int r4 = r4.advanceTo(r7, r3, r1)
            r5 = -1
            if (r4 == r5) goto L17
            goto L18
        L17:
            r3 = r1
        L18:
            if (r3 != 0) goto L25
            boolean[] r3 = r6.trackIsAudioVideoFlags
            boolean r3 = r3[r2]
            if (r3 != 0) goto L24
            boolean r3 = r6.haveAudioVideoTracks
            if (r3 != 0) goto L25
        L24:
            return r1
        L25:
            int r2 = r2 + 1
            goto L5
        L28:
            return r3
    }

    private void startLoading() {
            r21 = this;
            r6 = r21
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractingLoadable r7 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractingLoadable
            android.net.Uri r2 = r6.uri
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r3 = r6.dataSource
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder r4 = r6.extractorHolder
            com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r5 = r6.loadCondition
            r0 = r7
            r1 = r21
            r0.<init>(r1, r2, r3, r4, r5)
            boolean r0 = r6.prepared
            if (r0 == 0) goto L47
            boolean r0 = r21.isPendingReset()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            long r0 = r6.durationUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r4 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r4 == 0) goto L34
            long r4 = r6.pendingResetPositionUs
            int r0 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r0 < 0) goto L34
            r0 = 1
            r6.loadingFinished = r0
            r6.pendingResetPositionUs = r2
            return
        L34:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r6.seekMap
            long r4 = r6.pendingResetPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r0 = r0.getSeekPoints(r4)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = r0.first
            long r0 = r0.position
            long r4 = r6.pendingResetPositionUs
            r7.setLoadPosition(r0, r4)
            r6.pendingResetPositionUs = r2
        L47:
            int r0 = r21.getExtractedSamplesCount()
            r6.extractedSamplesCountAtStartOfLoad = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r6.loader
            int r1 = r6.actualMinLoadableRetryCount
            long r19 = r0.startLoading(r7, r6, r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r8 = r6.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r9 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$400(r7)
            r10 = 1
            r11 = -1
            r12 = 0
            r13 = 0
            r14 = 0
            long r15 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$500(r7)
            long r0 = r6.durationUs
            r17 = r0
            r8.loadStarted(r9, r10, r11, r12, r13, r14, r15, r17, r19)
            return
    }

    private boolean suppressRead() {
            r1 = this;
            boolean r0 = r1.notifyDiscontinuity
            if (r0 != 0) goto Ld
            boolean r0 = r1.isPendingReset()
            if (r0 == 0) goto Lb
            goto Ld
        Lb:
            r0 = 0
            goto Le
        Ld:
            r0 = 1
        Le:
            return r0
    }

    @Override
    public final boolean continueLoading(long r1) {
            r0 = this;
            boolean r1 = r0.loadingFinished
            if (r1 != 0) goto L24
            boolean r1 = r0.pendingDeferredRetry
            if (r1 != 0) goto L24
            boolean r1 = r0.prepared
            if (r1 == 0) goto L11
            int r1 = r0.enabledTrackCount
            if (r1 != 0) goto L11
            goto L24
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r1 = r0.loadCondition
            boolean r1 = r1.open()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r2 = r0.loader
            boolean r2 = r2.isLoading()
            if (r2 != 0) goto L23
            r0.startLoading()
            r1 = 1
        L23:
            return r1
        L24:
            r1 = 0
            return r1
    }

    @Override
    public final void discardBuffer(long r5, boolean r7) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r4.sampleQueues
            int r0 = r0.length
            r1 = 0
        L4:
            if (r1 >= r0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r2 = r4.sampleQueues
            r2 = r2[r1]
            boolean[] r3 = r4.trackEnabledStates
            boolean r3 = r3[r1]
            r2.discardTo(r5, r7, r3)
            int r1 = r1 + 1
            goto L4
        L14:
            return
    }

    @Override
    public final void endTracks() {
            r2 = this;
            r0 = 1
            r2.sampleQueuesBuilt = r0
            android.os.Handler r0 = r2.handler
            java.lang.Runnable r1 = r2.maybeFinishPrepareRunnable
            r0.post(r1)
            return
    }

    @Override
    public final long getAdjustedSeekPositionUs(long r10, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r12) {
            r9 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r9.seekMap
            boolean r0 = r0.isSeekable()
            if (r0 != 0) goto Lb
            r10 = 0
            return r10
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r9.seekMap
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap$SeekPoints r0 = r0.getSeekPoints(r10)
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r1 = r0.first
            long r5 = r1.timeUs
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekPoint r0 = r0.second
            long r7 = r0.timeUs
            r2 = r10
            r4 = r12
            long r10 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.resolveSeekPositionUs(r2, r4, r5, r7)
            return r10
    }

    @Override
    public final long getBufferedPositionUs() {
            r8 = this;
            boolean r0 = r8.loadingFinished
            r1 = -9223372036854775808
            if (r0 == 0) goto L7
            return r1
        L7:
            boolean r0 = r8.isPendingReset()
            if (r0 == 0) goto L10
            long r0 = r8.pendingResetPositionUs
            return r0
        L10:
            boolean r0 = r8.haveAudioVideoTracks
            if (r0 == 0) goto L34
            r3 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r8.sampleQueues
            int r0 = r0.length
            r5 = 0
        L1d:
            if (r5 >= r0) goto L38
            boolean[] r6 = r8.trackIsAudioVideoFlags
            boolean r6 = r6[r5]
            if (r6 == 0) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r6 = r8.sampleQueues
            r6 = r6[r5]
            long r6 = r6.getLargestQueuedTimestampUs()
            long r3 = java.lang.Math.min(r3, r6)
        L31:
            int r5 = r5 + 1
            goto L1d
        L34:
            long r3 = r8.getLargestQueuedTimestampUs()
        L38:
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 != 0) goto L3e
            long r3 = r8.lastSeekPositionUs
        L3e:
            return r3
    }

    @Override
    public final long getNextLoadPositionUs() {
            r2 = this;
            int r0 = r2.enabledTrackCount
            if (r0 != 0) goto L7
            r0 = -9223372036854775808
            goto Lb
        L7:
            long r0 = r2.getBufferedPositionUs()
        Lb:
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r1.tracks
            return r0
    }

    final boolean isReady(int r2) {
            r1 = this;
            boolean r0 = r1.suppressRead()
            if (r0 != 0) goto L16
            boolean r0 = r1.loadingFinished
            if (r0 != 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r1.sampleQueues
            r2 = r0[r2]
            boolean r2 = r2.hasNextSample()
            if (r2 == 0) goto L16
        L14:
            r2 = 1
            goto L17
        L16:
            r2 = 0
        L17:
            return r2
    }

    final void maybeThrowError() throws java.io.IOException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r2.loader
            int r1 = r2.actualMinLoadableRetryCount
            r0.maybeThrowError(r1)
            return
    }

    @Override
    public final void maybeThrowPrepareError() throws java.io.IOException {
            r0 = this;
            r0.maybeThrowError()
            return
    }

    public final void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r19, long r20, long r22, boolean r24) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$400(r19)
            long r8 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$500(r19)
            long r10 = r0.durationUs
            long r16 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$600(r19)
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r1.loadCanceled(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            if (r24 != 0) goto L3a
            r18.copyLengthFromLoader(r19)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r1 = r0.sampleQueues
            int r2 = r1.length
            r3 = 0
        L27:
            if (r3 >= r2) goto L31
            r4 = r1[r3]
            r4.reset()
            int r3 = r3 + 1
            goto L27
        L31:
            int r1 = r0.enabledTrackCount
            if (r1 <= 0) goto L3a
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
        L3a:
            return
    }

    @Override
    public final void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, boolean r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractingLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable) r1
            r0.onLoadCanceled(r1, r2, r4, r6)
            return
    }

    public final void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r23, long r24, long r26) {
            r22 = this;
            r0 = r22
            long r1 = r0.durationUs
            r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L2a
            long r1 = r22.getLargestQueuedTimestampUs()
            r3 = -9223372036854775808
            int r3 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r3 != 0) goto L1a
            r1 = 0
            goto L1d
        L1a:
            r3 = 10000(0x2710, double:4.9407E-320)
            long r1 = r1 + r3
        L1d:
            r0.durationUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$Listener r3 = r0.listener
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r4 = r0.seekMap
            boolean r4 = r4.isSeekable()
            r3.onSourceInfoRefreshed(r1, r4)
        L2a:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r5 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r6 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$400(r23)
            r7 = 1
            r8 = -1
            r9 = 0
            r10 = 0
            r11 = 0
            long r12 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$500(r23)
            long r14 = r0.durationUs
            long r20 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$600(r23)
            r16 = r24
            r18 = r26
            r5.loadCompleted(r6, r7, r8, r9, r10, r11, r12, r14, r16, r18, r20)
            r22.copyLengthFromLoader(r23)
            r1 = 1
            r0.loadingFinished = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod$Callback r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
            return
    }

    @Override
    public final void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractingLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable) r1
            r0.onLoadCompleted(r1, r2, r4)
            return
    }

    public final int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable r22, long r23, long r25, java.io.IOException r27) {
            r21 = this;
            r0 = r21
            r12 = r23
            r14 = r25
            r18 = r27
            boolean r20 = isLoadableExceptionFatal(r27)
            r19 = r20
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$400(r22)
            long r8 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$500(r22)
            long r10 = r0.durationUs
            long r16 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable.access$600(r22)
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r1.loadError(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16, r18, r19)
            r21.copyLengthFromLoader(r22)
            if (r20 == 0) goto L2d
            r1 = 3
            return r1
        L2d:
            int r1 = r21.getExtractedSamplesCount()
            int r2 = r0.extractedSamplesCountAtStartOfLoad
            r3 = 1
            r4 = 0
            if (r1 <= r2) goto L3b
            r2 = r22
            r5 = r3
            goto L3e
        L3b:
            r2 = r22
            r5 = r4
        L3e:
            boolean r1 = r0.configureRetry(r2, r1)
            if (r1 == 0) goto L49
            if (r5 == 0) goto L47
            goto L4a
        L47:
            r3 = r4
            goto L4a
        L49:
            r3 = 2
        L4a:
            return r3
    }

    @Override
    public final int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, java.io.IOException r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractingLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.ExtractingLoadable) r1
            int r1 = r0.onLoadError(r1, r2, r4, r6)
            return r1
    }

    @Override
    public final void onLoaderReleased() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r4.sampleQueues
            int r1 = r0.length
            r2 = 0
        L4:
            if (r2 >= r1) goto Le
            r3 = r0[r2]
            r3.reset()
            int r2 = r2 + 1
            goto L4
        Le:
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$ExtractorHolder r0 = r4.extractorHolder
            r0.release()
            return
    }

    @Override
    public final void onUpstreamFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r2) {
            r1 = this;
            android.os.Handler r2 = r1.handler
            java.lang.Runnable r0 = r1.maybeFinishPrepareRunnable
            r2.post(r0)
            return
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback r1, long r2) {
            r0 = this;
            r0.callback = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.ConditionVariable r1 = r0.loadCondition
            r1.open()
            r0.startLoading()
            return
    }

    final int readData(int r10, com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r11, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r12, boolean r13) {
            r9 = this;
            boolean r0 = r9.suppressRead()
            r1 = -3
            if (r0 == 0) goto L8
            return r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r9.sampleQueues
            r2 = r0[r10]
            boolean r6 = r9.loadingFinished
            long r7 = r9.lastSeekPositionUs
            r3 = r11
            r4 = r12
            r5 = r13
            int r11 = r2.read(r3, r4, r5, r6, r7)
            r12 = -4
            if (r11 != r12) goto L1e
            r9.maybeNotifyTrackFormat(r10)
            goto L23
        L1e:
            if (r11 != r1) goto L23
            r9.maybeStartDeferredRetry(r10)
        L23:
            return r11
    }

    @Override
    public final long readDiscontinuity() {
            r2 = this;
            boolean r0 = r2.notifiedReadingStarted
            if (r0 != 0) goto Lc
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r2.eventDispatcher
            r0.readingStarted()
            r0 = 1
            r2.notifiedReadingStarted = r0
        Lc:
            boolean r0 = r2.notifyDiscontinuity
            if (r0 == 0) goto L22
            boolean r0 = r2.loadingFinished
            if (r0 != 0) goto L1c
            int r0 = r2.getExtractedSamplesCount()
            int r1 = r2.extractedSamplesCountAtStartOfLoad
            if (r0 <= r1) goto L22
        L1c:
            r0 = 0
            r2.notifyDiscontinuity = r0
            long r0 = r2.lastSeekPositionUs
            return r0
        L22:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    @Override
    public final void reevaluateBuffer(long r1) {
            r0 = this;
            return
    }

    public final void release() {
            r4 = this;
            boolean r0 = r4.prepared
            if (r0 == 0) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r4.sampleQueues
            int r1 = r0.length
            r2 = 0
        L8:
            if (r2 >= r1) goto L12
            r3 = r0[r2]
            r3.discardToEnd()
            int r2 = r2 + 1
            goto L8
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r4.loader
            r0.release(r4)
            android.os.Handler r0 = r4.handler
            r1 = 0
            r0.removeCallbacksAndMessages(r1)
            r4.callback = r1
            r0 = 1
            r4.released = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r4.eventDispatcher
            r0.mediaPeriodReleased()
            return
    }

    @Override
    public final void seekMap(com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r2) {
            r1 = this;
            r1.seekMap = r2
            android.os.Handler r2 = r1.handler
            java.lang.Runnable r0 = r1.maybeFinishPrepareRunnable
            r2.post(r0)
            return
    }

    @Override
    public final long seekToUs(long r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.extractor.SeekMap r0 = r4.seekMap
            boolean r0 = r0.isSeekable()
            if (r0 == 0) goto L9
            goto Lb
        L9:
            r5 = 0
        Lb:
            r4.lastSeekPositionUs = r5
            r0 = 0
            r4.notifyDiscontinuity = r0
            boolean r1 = r4.isPendingReset()
            if (r1 != 0) goto L1d
            boolean r1 = r4.seekInsideBufferUs(r5)
            if (r1 == 0) goto L1d
            return r5
        L1d:
            r4.pendingDeferredRetry = r0
            r4.pendingResetPositionUs = r5
            r4.loadingFinished = r0
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r4.loader
            boolean r1 = r1.isLoading()
            if (r1 == 0) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r4.loader
            r0.cancelLoading()
            goto L3e
        L31:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r1 = r4.sampleQueues
            int r2 = r1.length
        L34:
            if (r0 >= r2) goto L3e
            r3 = r1[r0]
            r3.reset()
            int r0 = r0 + 1
            goto L34
        L3e:
            return r5
    }

    @Override
    public final long selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r7, boolean[] r8, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r9, boolean[] r10, long r11) {
            r6 = this;
            boolean r0 = r6.prepared
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            int r0 = r6.enabledTrackCount
            r1 = 0
            r2 = r1
        L9:
            int r3 = r7.length
            r4 = 1
            if (r2 >= r3) goto L37
            r3 = r9[r2]
            if (r3 == 0) goto L34
            r3 = r7[r2]
            if (r3 == 0) goto L19
            boolean r3 = r8[r2]
            if (r3 != 0) goto L34
        L19:
            r3 = r9[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$SampleStreamImpl r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.SampleStreamImpl) r3
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod.SampleStreamImpl.access$300(r3)
            boolean[] r5 = r6.trackEnabledStates
            boolean r5 = r5[r3]
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r5)
            int r5 = r6.enabledTrackCount
            int r5 = r5 - r4
            r6.enabledTrackCount = r5
            boolean[] r4 = r6.trackEnabledStates
            r4[r3] = r1
            r3 = 0
            r9[r2] = r3
        L34:
            int r2 = r2 + 1
            goto L9
        L37:
            boolean r8 = r6.seenFirstTrackSelection
            if (r8 == 0) goto L3e
            if (r0 != 0) goto L46
            goto L44
        L3e:
            r2 = 0
            int r8 = (r11 > r2 ? 1 : (r11 == r2 ? 0 : -1))
            if (r8 == 0) goto L46
        L44:
            r8 = r4
            goto L47
        L46:
            r8 = r1
        L47:
            r0 = r1
        L48:
            int r2 = r7.length
            if (r0 >= r2) goto Lad
            r2 = r9[r0]
            if (r2 != 0) goto Laa
            r2 = r7[r0]
            if (r2 == 0) goto Laa
            r2 = r7[r0]
            int r3 = r2.length()
            if (r3 != r4) goto L5d
            r3 = r4
            goto L5e
        L5d:
            r3 = r1
        L5e:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
            int r3 = r2.getIndexInTrackGroup(r1)
            if (r3 != 0) goto L69
            r3 = r4
            goto L6a
        L69:
            r3 = r1
        L6a:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r3 = r6.tracks
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r2 = r2.getTrackGroup()
            int r2 = r3.indexOf(r2)
            boolean[] r3 = r6.trackEnabledStates
            boolean r3 = r3[r2]
            r3 = r3 ^ r4
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
            int r3 = r6.enabledTrackCount
            int r3 = r3 + r4
            r6.enabledTrackCount = r3
            boolean[] r3 = r6.trackEnabledStates
            r3[r2] = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$SampleStreamImpl r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.ExtractorMediaPeriod$SampleStreamImpl
            r3.<init>(r6, r2)
            r9[r0] = r3
            r10[r0] = r4
            if (r8 != 0) goto Laa
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r8 = r6.sampleQueues
            r8 = r8[r2]
            r8.rewind()
            int r2 = r8.advanceTo(r11, r4, r4)
            r3 = -1
            if (r2 != r3) goto La9
            int r8 = r8.getReadIndex()
            if (r8 == 0) goto La9
            r8 = r4
            goto Laa
        La9:
            r8 = r1
        Laa:
            int r0 = r0 + 1
            goto L48
        Lad:
            int r7 = r6.enabledTrackCount
            if (r7 != 0) goto Ldd
            r6.pendingDeferredRetry = r1
            r6.notifyDiscontinuity = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r7 = r6.loader
            boolean r7 = r7.isLoading()
            if (r7 == 0) goto Ld0
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r7 = r6.sampleQueues
            int r8 = r7.length
        Lc0:
            if (r1 >= r8) goto Lca
            r9 = r7[r1]
            r9.discardToEnd()
            int r1 = r1 + 1
            goto Lc0
        Lca:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r7 = r6.loader
            r7.cancelLoading()
            goto Lef
        Ld0:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r7 = r6.sampleQueues
            int r8 = r7.length
        Ld3:
            if (r1 >= r8) goto Lef
            r9 = r7[r1]
            r9.reset()
            int r1 = r1 + 1
            goto Ld3
        Ldd:
            if (r8 == 0) goto Lef
            long r11 = r6.seekToUs(r11)
        Le3:
            int r7 = r9.length
            if (r1 >= r7) goto Lef
            r7 = r9[r1]
            if (r7 == 0) goto Lec
            r10[r1] = r4
        Lec:
            int r1 = r1 + 1
            goto Le3
        Lef:
            r6.seenFirstTrackSelection = r4
            return r11
    }

    final int skipData(int r5, long r6) {
            r4 = this;
            boolean r0 = r4.suppressRead()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r4.sampleQueues
            r0 = r0[r5]
            boolean r2 = r4.loadingFinished
            if (r2 == 0) goto L1d
            long r2 = r0.getLargestQueuedTimestampUs()
            int r2 = (r6 > r2 ? 1 : (r6 == r2 ? 0 : -1))
            if (r2 <= 0) goto L1d
            int r1 = r0.advanceToEnd()
            goto L27
        L1d:
            r2 = 1
            int r6 = r0.advanceTo(r6, r2, r2)
            r7 = -1
            if (r6 != r7) goto L26
            goto L27
        L26:
            r1 = r6
        L27:
            if (r1 <= 0) goto L2d
            r4.maybeNotifyTrackFormat(r5)
            goto L30
        L2d:
            r4.maybeStartDeferredRetry(r5)
        L30:
            return r1
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.extractor.TrackOutput track(int r4, int r5) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = r3.sampleQueues
            int r5 = r5.length
            r0 = 0
        L4:
            if (r0 >= r5) goto L14
            int[] r1 = r3.sampleQueueTrackIds
            r1 = r1[r0]
            if (r1 != r4) goto L11
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r3.sampleQueues
            r4 = r4[r0]
            return r4
        L11:
            int r0 = r0 + 1
            goto L4
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r1 = r3.allocator
            r0.<init>(r1)
            r0.setUpstreamFormatChangeListener(r3)
            int[] r1 = r3.sampleQueueTrackIds
            int r2 = r5 + 1
            int[] r1 = java.util.Arrays.copyOf(r1, r2)
            r3.sampleQueueTrackIds = r1
            r1[r5] = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r3.sampleQueues
            java.lang.Object[] r4 = java.util.Arrays.copyOf(r4, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[]) r4
            r3.sampleQueues = r4
            r4[r5] = r0
            return r0
    }
}
