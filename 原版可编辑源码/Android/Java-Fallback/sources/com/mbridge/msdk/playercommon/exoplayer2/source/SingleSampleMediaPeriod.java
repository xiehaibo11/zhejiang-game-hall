package com.mbridge.msdk.playercommon.exoplayer2.source;

final class SingleSampleMediaPeriod implements com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable> {
    private static final int INITIAL_SAMPLE_SIZE = 1024;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory dataSourceFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
    private final long durationUs;
    private int errorCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher eventDispatcher;
    final com.mbridge.msdk.playercommon.exoplayer2.Format format;
    final com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader loader;
    boolean loadingFinished;
    boolean loadingSucceeded;
    private final int minLoadableRetryCount;
    boolean notifiedReadingStarted;
    byte[] sampleData;
    int sampleSize;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SampleStreamImpl> sampleStreams;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray tracks;
    final boolean treatLoadErrorsAsEndOfStream;

    static class 1 {
    }

    private final class SampleStreamImpl implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream {
        private static final int STREAM_STATE_END_OF_STREAM = 2;
        private static final int STREAM_STATE_SEND_FORMAT = 0;
        private static final int STREAM_STATE_SEND_SAMPLE = 1;
        private boolean formatSent;
        private int streamState;
        final com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod this$0;

        private SampleStreamImpl(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        SampleStreamImpl(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r1, com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        private void sendFormat() {
                r8 = this;
                boolean r0 = r8.formatSent
                if (r0 != 0) goto L22
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.access$300(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r0.format
                java.lang.String r0 = r0.sampleMimeType
                int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getTrackType(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r0.format
                r4 = 0
                r5 = 0
                r6 = 0
                r1.downstreamFormatChanged(r2, r3, r4, r5, r6)
                r0 = 1
                r8.formatSent = r0
            L22:
                return
        }

        @Override
        public final boolean isReady() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r1.this$0
                boolean r0 = r0.loadingFinished
                return r0
        }

        @Override
        public final void maybeThrowError() throws java.io.IOException {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r1.this$0
                boolean r0 = r0.treatLoadErrorsAsEndOfStream
                if (r0 != 0) goto Ld
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r1.this$0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r0.loader
                r0.maybeThrowError()
            Ld:
                return
        }

        @Override
        public final int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r8, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r9, boolean r10) {
                r7 = this;
                int r0 = r7.streamState
                r1 = -4
                r2 = 4
                r3 = 2
                if (r0 != r3) goto Lb
                r9.addFlag(r2)
                return r1
            Lb:
                r4 = 1
                if (r10 != 0) goto L45
                if (r0 != 0) goto L11
                goto L45
            L11:
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r8 = r7.this$0
                boolean r8 = r8.loadingFinished
                if (r8 == 0) goto L43
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r8 = r7.this$0
                boolean r8 = r8.loadingSucceeded
                if (r8 == 0) goto L3d
                r5 = 0
                r9.timeUs = r5
                r9.addFlag(r4)
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r8 = r7.this$0
                int r8 = r8.sampleSize
                r9.ensureSpaceForWrite(r8)
                java.nio.ByteBuffer r8 = r9.data
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r9 = r7.this$0
                byte[] r9 = r9.sampleData
                r10 = 0
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0 = r7.this$0
                int r0 = r0.sampleSize
                r8.put(r9, r10, r0)
                r7.sendFormat()
                goto L40
            L3d:
                r9.addFlag(r2)
            L40:
                r7.streamState = r3
                return r1
            L43:
                r8 = -3
                return r8
            L45:
                com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r9 = r7.this$0
                com.mbridge.msdk.playercommon.exoplayer2.Format r9 = r9.format
                r8.format = r9
                r7.streamState = r4
                r8 = -5
                return r8
        }

        public final void reset() {
                r2 = this;
                int r0 = r2.streamState
                r1 = 2
                if (r0 != r1) goto L8
                r0 = 1
                r2.streamState = r0
            L8:
                return
        }

        @Override
        public final int skipData(long r3) {
                r2 = this;
                r0 = 0
                int r3 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r3 <= 0) goto L12
                int r3 = r2.streamState
                r4 = 2
                if (r3 == r4) goto L12
                r2.streamState = r4
                r2.sendFormat()
                r3 = 1
                return r3
            L12:
                r3 = 0
                return r3
        }
    }

    static final class SourceLoadable implements com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable {
        private final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource dataSource;
        public final com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec dataSpec;
        private byte[] sampleData;
        private int sampleSize;

        public SourceLoadable(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r2) {
                r0 = this;
                r0.<init>()
                r0.dataSpec = r1
                r0.dataSource = r2
                return
        }

        static int access$100(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable r0) {
                int r0 = r0.sampleSize
                return r0
        }

        static byte[] access$200(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable r0) {
                byte[] r0 = r0.sampleData
                return r0
        }

        @Override
        public final void cancelLoad() {
                r0 = this;
                return
        }

        @Override
        public final void load() throws java.io.IOException, java.lang.InterruptedException {
                r5 = this;
                r0 = 0
                r5.sampleSize = r0
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r5.dataSource     // Catch: java.lang.Throwable -> L46
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r5.dataSpec     // Catch: java.lang.Throwable -> L46
                r1.open(r2)     // Catch: java.lang.Throwable -> L46
            La:
                r1 = -1
                if (r0 == r1) goto L40
                int r1 = r5.sampleSize     // Catch: java.lang.Throwable -> L46
                int r1 = r1 + r0
                r5.sampleSize = r1     // Catch: java.lang.Throwable -> L46
                byte[] r0 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                if (r0 != 0) goto L1d
                r0 = 1024(0x400, float:1.435E-42)
                byte[] r0 = new byte[r0]     // Catch: java.lang.Throwable -> L46
                r5.sampleData = r0     // Catch: java.lang.Throwable -> L46
                goto L2f
            L1d:
                byte[] r0 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                int r0 = r0.length     // Catch: java.lang.Throwable -> L46
                if (r1 != r0) goto L2f
                byte[] r0 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                byte[] r1 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                int r1 = r1.length     // Catch: java.lang.Throwable -> L46
                int r1 = r1 * 2
                byte[] r0 = java.util.Arrays.copyOf(r0, r1)     // Catch: java.lang.Throwable -> L46
                r5.sampleData = r0     // Catch: java.lang.Throwable -> L46
            L2f:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r5.dataSource     // Catch: java.lang.Throwable -> L46
                byte[] r1 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                int r2 = r5.sampleSize     // Catch: java.lang.Throwable -> L46
                byte[] r3 = r5.sampleData     // Catch: java.lang.Throwable -> L46
                int r3 = r3.length     // Catch: java.lang.Throwable -> L46
                int r4 = r5.sampleSize     // Catch: java.lang.Throwable -> L46
                int r3 = r3 - r4
                int r0 = r0.read(r1, r2, r3)     // Catch: java.lang.Throwable -> L46
                goto La
            L40:
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r0 = r5.dataSource
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r0)
                return
            L46:
                r0 = move-exception
                com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r1 = r5.dataSource
                com.mbridge.msdk.playercommon.exoplayer2.util.Util.closeQuietly(r1)
                throw r0
        }
    }

    public SingleSampleMediaPeriod(com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r1, com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource.Factory r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, long r4, int r6, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher r7, boolean r8) {
            r0 = this;
            r0.<init>()
            r0.dataSpec = r1
            r0.dataSourceFactory = r2
            r0.format = r3
            r0.durationUs = r4
            r0.minLoadableRetryCount = r6
            r0.eventDispatcher = r7
            r0.treatLoadErrorsAsEndOfStream = r8
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray
            r2 = 1
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[] r4 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroup
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.Format[r2]
            r6 = 0
            r2[r6] = r3
            r5.<init>(r2)
            r4[r6] = r5
            r1.<init>(r4)
            r0.tracks = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r0.sampleStreams = r1
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader
            java.lang.String r2 = "Loader:SingleSampleMediaPeriod"
            r1.<init>(r2)
            r0.loader = r1
            r7.mediaPeriodCreated()
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher access$300(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod r0) {
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r0.eventDispatcher
            return r0
    }

    @Override
    public final boolean continueLoading(long r18) {
            r17 = this;
            r0 = r17
            boolean r1 = r0.loadingFinished
            if (r1 != 0) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r0.loader
            boolean r1 = r1.isLoading()
            if (r1 == 0) goto Lf
            goto L37
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r0.loader
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SourceLoadable r2 = new com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SourceLoadable
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r0.dataSpec
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource$Factory r4 = r0.dataSourceFactory
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSource r4 = r4.createDataSource()
            r2.<init>(r3, r4)
            int r3 = r0.minLoadableRetryCount
            long r15 = r1.startLoading(r2, r0, r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r4 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r5 = r0.dataSpec
            r6 = 1
            r7 = -1
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r0.format
            r9 = 0
            r10 = 0
            r11 = 0
            long r13 = r0.durationUs
            r4.loadStarted(r5, r6, r7, r8, r9, r10, r11, r13, r15)
            r1 = 1
            return r1
        L37:
            r1 = 0
            return r1
    }

    @Override
    public final void discardBuffer(long r1, boolean r3) {
            r0 = this;
            return
    }

    @Override
    public final long getAdjustedSeekPositionUs(long r1, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r3) {
            r0 = this;
            return r1
    }

    @Override
    public final long getBufferedPositionUs() {
            r2 = this;
            boolean r0 = r2.loadingFinished
            if (r0 == 0) goto L7
            r0 = -9223372036854775808
            goto L9
        L7:
            r0 = 0
        L9:
            return r0
    }

    @Override
    public final long getNextLoadPositionUs() {
            r2 = this;
            boolean r0 = r2.loadingFinished
            if (r0 != 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r2.loader
            boolean r0 = r0.isLoading()
            if (r0 == 0) goto Ld
            goto L10
        Ld:
            r0 = 0
            goto L12
        L10:
            r0 = -9223372036854775808
        L12:
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r1.tracks
            return r0
    }

    @Override
    public final void maybeThrowPrepareError() throws java.io.IOException {
            r0 = this;
            return
    }

    public final void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable r19, long r20, long r22, boolean r24) {
            r18 = this;
            r0 = r18
            r12 = r20
            r14 = r22
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
            r3 = r19
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r3.dataSpec
            long r10 = r0.durationUs
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable.access$100(r19)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r5 = 0
            r6 = 0
            r7 = 0
            r8 = 0
            r1.loadCanceled(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            return
    }

    @Override
    public final void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, boolean r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SourceLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable) r1
            r0.onLoadCanceled(r1, r2, r4, r6)
            return
    }

    public final void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable r21, long r22, long r24) {
            r20 = this;
            r0 = r20
            r12 = r22
            r14 = r24
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
            r8 = r21
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r2 = r8.dataSpec
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r0.format
            long r10 = r0.durationUs
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable.access$100(r21)
            long r3 = (long) r3
            r16 = r3
            r3 = 1
            r4 = -1
            r6 = 0
            r7 = 0
            r18 = 0
            r8 = r18
            r1.loadCompleted(r2, r3, r4, r5, r6, r7, r8, r10, r12, r14, r16)
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable.access$100(r21)
            r0.sampleSize = r1
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable.access$200(r21)
            r0.sampleData = r1
            r1 = 1
            r0.loadingFinished = r1
            r0.loadingSucceeded = r1
            return
    }

    @Override
    public final void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SourceLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable) r1
            r0.onLoadCompleted(r1, r2, r4)
            return
    }

    public final int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable r25, long r26, long r28, java.io.IOException r30) {
            r24 = this;
            r0 = r24
            int r1 = r0.errorCount
            r2 = 1
            int r1 = r1 + r2
            r0.errorCount = r1
            boolean r3 = r0.treatLoadErrorsAsEndOfStream
            r4 = 0
            if (r3 == 0) goto L13
            int r3 = r0.minLoadableRetryCount
            if (r1 < r3) goto L13
            r1 = r2
            goto L14
        L13:
            r1 = r4
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r5 = r0.eventDispatcher
            r3 = r25
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r6 = r3.dataSpec
            r7 = 1
            r8 = -1
            com.mbridge.msdk.playercommon.exoplayer2.Format r9 = r0.format
            r10 = 0
            r11 = 0
            r12 = 0
            long r14 = r0.durationUs
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable.access$100(r25)
            long r2 = (long) r3
            r20 = r2
            r16 = r26
            r18 = r28
            r22 = r30
            r23 = r1
            r5.loadError(r6, r7, r8, r9, r10, r11, r12, r14, r16, r18, r20, r22, r23)
            if (r1 == 0) goto L3d
            r1 = 1
            r0.loadingFinished = r1
            r1 = 2
            return r1
        L3d:
            return r4
    }

    @Override
    public final int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, java.io.IOException r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SourceLoadable r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SourceLoadable) r1
            int r1 = r0.onLoadError(r1, r2, r4, r6)
            return r1
    }

    @Override
    public final void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod.Callback r1, long r2) {
            r0 = this;
            r1.onPrepared(r0)
            return
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
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            return r0
    }

    @Override
    public final void reevaluateBuffer(long r1) {
            r0 = this;
            return
    }

    public final void release() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r1.loader
            r0.release()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.mediaPeriodReleased()
            return
    }

    @Override
    public final long seekToUs(long r3) {
            r2 = this;
            r0 = 0
        L1:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl> r1 = r2.sampleStreams
            int r1 = r1.size()
            if (r0 >= r1) goto L17
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl> r1 = r2.sampleStreams
            java.lang.Object r1 = r1.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod.SampleStreamImpl) r1
            r1.reset()
            int r0 = r0 + 1
            goto L1
        L17:
            return r3
    }

    @Override
    public final long selectTracks(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelection[] r5, boolean[] r6, com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream[] r7, boolean[] r8, long r9) {
            r4 = this;
            r0 = 0
        L1:
            int r1 = r5.length
            if (r0 >= r1) goto L34
            r1 = r7[r0]
            r2 = 0
            if (r1 == 0) goto L1a
            r1 = r5[r0]
            if (r1 == 0) goto L11
            boolean r1 = r6[r0]
            if (r1 != 0) goto L1a
        L11:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl> r1 = r4.sampleStreams
            r3 = r7[r0]
            r1.remove(r3)
            r7[r0] = r2
        L1a:
            r1 = r7[r0]
            if (r1 != 0) goto L31
            r1 = r5[r0]
            if (r1 == 0) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl
            r1.<init>(r4, r2)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.SingleSampleMediaPeriod$SampleStreamImpl> r2 = r4.sampleStreams
            r2.add(r1)
            r7[r0] = r1
            r1 = 1
            r8[r0] = r1
        L31:
            int r0 = r0 + 1
            goto L1
        L34:
            return r9
    }
}
