package com.mbridge.msdk.playercommon.exoplayer2.source.chunk;

import com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource;

public class ChunkSampleStream<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource> implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream, com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk>, com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.ReleaseCallback {
    private static final java.lang.String TAG = "ChunkSampleStream";
    private final com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T>> callback;
    private final T chunkSource;
    long decodeOnlyUntilPositionUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] embeddedSampleQueues;
    private final com.mbridge.msdk.playercommon.exoplayer2.Format[] embeddedTrackFormats;
    private final int[] embeddedTrackTypes;
    private final boolean[] embeddedTracksSelected;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher eventDispatcher;
    private long lastSeekPositionUs;
    private final com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader loader;
    boolean loadingFinished;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput mediaChunkOutput;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> mediaChunks;
    private final int minLoadableRetryCount;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder nextChunkHolder;
    private long pendingResetPositionUs;
    private com.mbridge.msdk.playercommon.exoplayer2.Format primaryDownstreamTrackFormat;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue primarySampleQueue;
    public final int primaryTrackType;
    private final java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> readOnlyMediaChunks;
    private com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.ReleaseCallback<T> releaseCallback;

    public final class EmbeddedSampleStream implements com.mbridge.msdk.playercommon.exoplayer2.source.SampleStream {
        private boolean formatNotificationSent;
        private final int index;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T> parent;
        private final com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue sampleQueue;
        final com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream this$0;

        public EmbeddedSampleStream(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r1, com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T> r2, com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r3, int r4) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                r0.parent = r2
                r0.sampleQueue = r3
                r0.index = r4
                return
        }

        private void maybeNotifyTrackFormatChanged() {
                r8 = this;
                boolean r0 = r8.formatNotificationSent
                if (r0 != 0) goto L2c
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$400(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r8.this$0
                int[] r0 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$100(r0)
                int r2 = r8.index
                r2 = r0[r2]
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$200(r0)
                int r3 = r8.index
                r3 = r0[r3]
                r4 = 0
                r5 = 0
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r8.this$0
                long r6 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$300(r0)
                r1.downstreamFormatChanged(r2, r3, r4, r5, r6)
                r0 = 1
                r8.formatNotificationSent = r0
            L2c:
                return
        }

        @Override
        public final boolean isReady() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r1.this$0
                boolean r0 = r0.loadingFinished
                if (r0 != 0) goto L19
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r1.this$0
                boolean r0 = r0.isPendingReset()
                if (r0 != 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r1.sampleQueue
                boolean r0 = r0.hasNextSample()
                if (r0 == 0) goto L17
                goto L19
            L17:
                r0 = 0
                goto L1a
            L19:
                r0 = 1
            L1a:
                return r0
        }

        @Override
        public final void maybeThrowError() throws java.io.IOException {
                r0 = this;
                return
        }

        @Override
        public final int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r8, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r9, boolean r10) {
                r7 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r7.this$0
                boolean r0 = r0.isPendingReset()
                if (r0 == 0) goto La
                r8 = -3
                return r8
            La:
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r7.sampleQueue
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r1 = r7.this$0
                boolean r4 = r1.loadingFinished
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r1 = r7.this$0
                long r5 = r1.decodeOnlyUntilPositionUs
                r1 = r8
                r2 = r9
                r3 = r10
                int r8 = r0.read(r1, r2, r3, r4, r5)
                r9 = -4
                if (r8 != r9) goto L21
                r7.maybeNotifyTrackFormatChanged()
            L21:
                return r8
        }

        public final void release() {
                r3 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r3.this$0
                boolean[] r0 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$000(r0)
                int r1 = r3.index
                boolean r0 = r0[r1]
                com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r3.this$0
                boolean[] r0 = com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.access$000(r0)
                int r1 = r3.index
                r2 = 0
                r0[r1] = r2
                return
        }

        @Override
        public final int skipData(long r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0 = r2.this$0
                boolean r0 = r0.loadingFinished
                if (r0 == 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r2.sampleQueue
                long r0 = r0.getLargestQueuedTimestampUs()
                int r0 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
                if (r0 <= 0) goto L17
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r3 = r2.sampleQueue
                int r3 = r3.advanceToEnd()
                goto L22
            L17:
                com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r2.sampleQueue
                r1 = 1
                int r3 = r0.advanceTo(r3, r1, r1)
                r4 = -1
                if (r3 != r4) goto L22
                r3 = 0
            L22:
                if (r3 <= 0) goto L27
                r2.maybeNotifyTrackFormatChanged()
            L27:
                return r3
        }
    }

    public interface ReleaseCallback<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource> {
        void onSampleStreamReleased(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T> r1);
    }

    public ChunkSampleStream(int r1, int[] r2, com.mbridge.msdk.playercommon.exoplayer2.Format[] r3, T r4, com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader.Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T>> r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r6, long r7, int r9, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher r10) {
            r0 = this;
            r0.<init>()
            r0.primaryTrackType = r1
            r0.embeddedTrackTypes = r2
            r0.embeddedTrackFormats = r3
            r0.chunkSource = r4
            r0.callback = r5
            r0.eventDispatcher = r10
            r0.minLoadableRetryCount = r9
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r3 = new com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader
            java.lang.String r4 = "Loader:ChunkSampleStream"
            r3.<init>(r4)
            r0.loader = r3
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder
            r3.<init>()
            r0.nextChunkHolder = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r0.mediaChunks = r3
            java.util.List r3 = java.util.Collections.unmodifiableList(r3)
            r0.readOnlyMediaChunks = r3
            r3 = 0
            if (r2 != 0) goto L33
            r4 = r3
            goto L34
        L33:
            int r4 = r2.length
        L34:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[r4]
            r0.embeddedSampleQueues = r5
            boolean[] r5 = new boolean[r4]
            r0.embeddedTracksSelected = r5
            int r5 = r4 + 1
            int[] r9 = new int[r5]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[r5]
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r10 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue
            r10.<init>(r6)
            r0.primarySampleQueue = r10
            r9[r3] = r1
            r5[r3] = r10
        L4d:
            if (r3 >= r4) goto L62
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue
            r1.<init>(r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r10 = r0.embeddedSampleQueues
            r10[r3] = r1
            int r10 = r3 + 1
            r5[r10] = r1
            r1 = r2[r3]
            r9[r10] = r1
            r3 = r10
            goto L4d
        L62:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput
            r1.<init>(r9, r5)
            r0.mediaChunkOutput = r1
            r0.pendingResetPositionUs = r7
            r0.lastSeekPositionUs = r7
            return
    }

    static boolean[] access$000(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0) {
            boolean[] r0 = r0.embeddedTracksSelected
            return r0
    }

    static int[] access$100(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0) {
            int[] r0 = r0.embeddedTrackTypes
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.Format[] access$200(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0) {
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r0.embeddedTrackFormats
            return r0
    }

    static long access$300(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r2) {
            long r0 = r2.lastSeekPositionUs
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher access$400(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream r0) {
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r0.eventDispatcher
            return r0
    }

    private void discardDownstreamMediaChunks(int r3) {
            r2 = this;
            r0 = 0
            int r3 = r2.primaryStreamIndexToMediaChunkIndex(r3, r0)
            if (r3 <= 0) goto Lc
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r1 = r2.mediaChunks
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.removeRange(r1, r0, r3)
        Lc:
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk discardUpstreamMediaChunksFromIndex(int r4) {
            r3 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r3.mediaChunks
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r0
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r1 = r3.mediaChunks
            int r2 = r1.size()
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.removeRange(r1, r4, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r4 = r3.primarySampleQueue
            r1 = 0
            int r2 = r0.getFirstSampleIndex(r1)
            r4.discardUpstreamSamples(r2)
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r3.embeddedSampleQueues
            int r2 = r4.length
            if (r1 >= r2) goto L2c
            r4 = r4[r1]
            int r1 = r1 + 1
            int r2 = r0.getFirstSampleIndex(r1)
            r4.discardUpstreamSamples(r2)
            goto L1b
        L2c:
            return r0
    }

    private com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk getLastMediaChunk() {
            r2 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r2.mediaChunks
            int r1 = r0.size()
            int r1 = r1 + (-1)
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r0
            return r0
    }

    private boolean haveReadFromMediaChunk(int r6) {
            r5 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r5.mediaChunks
            java.lang.Object r6 = r0.get(r6)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r6 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r6
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r5.primarySampleQueue
            int r0 = r0.getReadIndex()
            r1 = 0
            int r2 = r6.getFirstSampleIndex(r1)
            r3 = 1
            if (r0 <= r2) goto L17
            return r3
        L17:
            r0 = r1
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r2 = r5.embeddedSampleQueues
            int r4 = r2.length
            if (r0 >= r4) goto L2c
            r2 = r2[r0]
            int r2 = r2.getReadIndex()
            int r0 = r0 + 1
            int r4 = r6.getFirstSampleIndex(r0)
            if (r2 <= r4) goto L18
            return r3
        L2c:
            return r1
    }

    private boolean isMediaChunk(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1) {
            r0 = this;
            boolean r1 = r1 instanceof com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk
            return r1
    }

    private void maybeNotifyPrimaryTrackFormatChanged(int r9) {
            r8 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r8.mediaChunks
            java.lang.Object r9 = r0.get(r9)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r9 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r9
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r9.trackFormat
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r8.primaryDownstreamTrackFormat
            boolean r0 = r7.equals(r0)
            if (r0 != 0) goto L20
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r8.eventDispatcher
            int r1 = r8.primaryTrackType
            int r3 = r9.trackSelectionReason
            java.lang.Object r4 = r9.trackSelectionData
            long r5 = r9.startTimeUs
            r2 = r7
            r0.downstreamFormatChanged(r1, r2, r3, r4, r5)
        L20:
            r8.primaryDownstreamTrackFormat = r7
            return
    }

    private void maybeNotifyPrimaryTrackFormatChanged(int r3, int r4) {
            r2 = this;
            int r0 = r3 - r4
            r1 = 0
            int r0 = r2.primaryStreamIndexToMediaChunkIndex(r0, r1)
            r1 = 1
            if (r4 != r1) goto Lc
            r3 = r0
            goto L11
        Lc:
            int r3 = r3 - r1
            int r3 = r2.primaryStreamIndexToMediaChunkIndex(r3, r0)
        L11:
            if (r0 > r3) goto L19
            r2.maybeNotifyPrimaryTrackFormatChanged(r0)
            int r0 = r0 + 1
            goto L11
        L19:
            return
    }

    private int primaryStreamIndexToMediaChunkIndex(int r3, int r4) {
            r2 = this;
        L0:
            int r4 = r4 + 1
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r2.mediaChunks
            int r0 = r0.size()
            if (r4 >= r0) goto L1c
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r2.mediaChunks
            java.lang.Object r0 = r0.get(r4)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r0 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r0
            r1 = 0
            int r0 = r0.getFirstSampleIndex(r1)
            if (r0 <= r3) goto L0
            int r4 = r4 + (-1)
            return r4
        L1c:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r3 = r2.mediaChunks
            int r3 = r3.size()
            int r3 = r3 + (-1)
            return r3
    }

    @Override
    public boolean continueLoading(long r22) {
            r21 = this;
            r0 = r21
            boolean r1 = r0.loadingFinished
            r2 = 0
            if (r1 != 0) goto L93
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r0.loader
            boolean r1 = r1.isLoading()
            if (r1 == 0) goto L11
            goto L93
        L11:
            boolean r1 = r21.isPendingReset()
            if (r1 == 0) goto L1b
            r3 = 0
            long r4 = r0.pendingResetPositionUs
            goto L21
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r3 = r21.getLastMediaChunk()
            long r4 = r3.endTimeUs
        L21:
            r7 = r3
            r10 = r4
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r6 = r0.chunkSource
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r12 = r0.nextChunkHolder
            r8 = r22
            r6.getNextChunk(r7, r8, r10, r12)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r3 = r0.nextChunkHolder
            boolean r3 = r3.endOfStream
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r4 = r0.nextChunkHolder
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r4 = r4.chunk
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkHolder r5 = r0.nextChunkHolder
            r5.clear()
            r5 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r7 = 1
            if (r3 == 0) goto L46
            r0.pendingResetPositionUs = r5
            r0.loadingFinished = r7
            return r7
        L46:
            if (r4 != 0) goto L49
            return r2
        L49:
            boolean r3 = r0.isMediaChunk(r4)
            if (r3 == 0) goto L72
            r3 = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r3
            if (r1 == 0) goto L68
            long r8 = r3.startTimeUs
            long r10 = r0.pendingResetPositionUs
            int r1 = (r8 > r10 ? 1 : (r8 == r10 ? 0 : -1))
            if (r1 != 0) goto L5d
            r2 = r7
        L5d:
            if (r2 == 0) goto L62
            r1 = -9223372036854775808
            goto L64
        L62:
            long r1 = r0.pendingResetPositionUs
        L64:
            r0.decodeOnlyUntilPositionUs = r1
            r0.pendingResetPositionUs = r5
        L68:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunkOutput r1 = r0.mediaChunkOutput
            r3.init(r1)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r1 = r0.mediaChunks
            r1.add(r3)
        L72:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r1 = r0.loader
            int r2 = r0.minLoadableRetryCount
            long r19 = r1.startLoading(r4, r0, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r8 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r9 = r4.dataSpec
            int r10 = r4.type
            int r11 = r0.primaryTrackType
            com.mbridge.msdk.playercommon.exoplayer2.Format r12 = r4.trackFormat
            int r13 = r4.trackSelectionReason
            java.lang.Object r14 = r4.trackSelectionData
            long r1 = r4.startTimeUs
            long r3 = r4.endTimeUs
            r15 = r1
            r17 = r3
            r8.loadStarted(r9, r10, r11, r12, r13, r14, r15, r17, r19)
            return r7
        L93:
            return r2
    }

    public void discardBuffer(long r5, boolean r7) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r4.primarySampleQueue
            int r0 = r0.getFirstIndex()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r1 = r4.primarySampleQueue
            r2 = 1
            r1.discardTo(r5, r7, r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r5 = r4.primarySampleQueue
            int r5 = r5.getFirstIndex()
            if (r5 <= r0) goto L2f
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r6 = r4.primarySampleQueue
            long r0 = r6.getFirstTimestampUs()
            r6 = 0
        L1b:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r2 = r4.embeddedSampleQueues
            int r3 = r2.length
            if (r6 >= r3) goto L2c
            r2 = r2[r6]
            boolean[] r3 = r4.embeddedTracksSelected
            boolean r3 = r3[r6]
            r2.discardTo(r0, r7, r3)
            int r6 = r6 + 1
            goto L1b
        L2c:
            r4.discardDownstreamMediaChunks(r5)
        L2f:
            return
    }

    public long getAdjustedSeekPositionUs(long r2, com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r4) {
            r1 = this;
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r0 = r1.chunkSource
            long r2 = r0.getAdjustedSeekPositionUs(r2, r4)
            return r2
    }

    @Override
    public long getBufferedPositionUs() {
            r4 = this;
            boolean r0 = r4.loadingFinished
            if (r0 == 0) goto L7
            r0 = -9223372036854775808
            return r0
        L7:
            boolean r0 = r4.isPendingReset()
            if (r0 == 0) goto L10
            long r0 = r4.pendingResetPositionUs
            return r0
        L10:
            long r0 = r4.lastSeekPositionUs
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r2 = r4.getLastMediaChunk()
            boolean r3 = r2.isLoadCompleted()
            if (r3 == 0) goto L1d
            goto L36
        L1d:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r2 = r4.mediaChunks
            int r2 = r2.size()
            r3 = 1
            if (r2 <= r3) goto L35
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r2 = r4.mediaChunks
            int r3 = r2.size()
            int r3 = r3 + (-2)
            java.lang.Object r2 = r2.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r2 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r2
            goto L36
        L35:
            r2 = 0
        L36:
            if (r2 == 0) goto L3e
            long r2 = r2.endTimeUs
            long r0 = java.lang.Math.max(r0, r2)
        L3e:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r2 = r4.primarySampleQueue
            long r2 = r2.getLargestQueuedTimestampUs()
            long r0 = java.lang.Math.max(r0, r2)
            return r0
    }

    public T getChunkSource() {
            r1 = this;
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r0 = r1.chunkSource
            return r0
    }

    @Override
    public long getNextLoadPositionUs() {
            r2 = this;
            boolean r0 = r2.isPendingReset()
            if (r0 == 0) goto L9
            long r0 = r2.pendingResetPositionUs
            return r0
        L9:
            boolean r0 = r2.loadingFinished
            if (r0 == 0) goto L10
            r0 = -9223372036854775808
            goto L16
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r0 = r2.getLastMediaChunk()
            long r0 = r0.endTimeUs
        L16:
            return r0
    }

    boolean isPendingReset() {
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

    @Override
    public boolean isReady() {
            r1 = this;
            boolean r0 = r1.loadingFinished
            if (r0 != 0) goto L15
            boolean r0 = r1.isPendingReset()
            if (r0 != 0) goto L13
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r1.primarySampleQueue
            boolean r0 = r0.hasNextSample()
            if (r0 == 0) goto L13
            goto L15
        L13:
            r0 = 0
            goto L16
        L15:
            r0 = 1
        L16:
            return r0
    }

    @Override
    public void maybeThrowError() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r1.loader
            r0.maybeThrowError()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r1.loader
            boolean r0 = r0.isLoading()
            if (r0 != 0) goto L12
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r0 = r1.chunkSource
            r0.maybeThrowError()
        L12:
            return
    }

    public void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r20, long r21, long r23, boolean r25) {
            r19 = this;
            r0 = r19
            r1 = r20
            r13 = r21
            r15 = r23
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r1.dataSpec
            int r4 = r1.type
            int r5 = r0.primaryTrackType
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r1.trackFormat
            int r7 = r1.trackSelectionReason
            java.lang.Object r8 = r1.trackSelectionData
            long r9 = r1.startTimeUs
            long r11 = r1.endTimeUs
            long r17 = r20.bytesLoaded()
            r2.loadCanceled(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17)
            if (r25 != 0) goto L3b
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r1 = r0.primarySampleQueue
            r1.reset()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r1 = r0.embeddedSampleQueues
            int r2 = r1.length
            r3 = 0
        L2c:
            if (r3 >= r2) goto L36
            r4 = r1[r3]
            r4.reset()
            int r3 = r3 + 1
            goto L2c
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader$Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource>> r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
        L3b:
            return
    }

    @Override
    public void onLoadCanceled(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, boolean r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk) r1
            r0.onLoadCanceled(r1, r2, r4, r6)
            return
    }

    public void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r20, long r21, long r23) {
            r19 = this;
            r0 = r19
            r1 = r20
            r13 = r21
            r15 = r23
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r2 = r0.chunkSource
            r2.onChunkLoadCompleted(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r1.dataSpec
            int r4 = r1.type
            int r5 = r0.primaryTrackType
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r1.trackFormat
            int r7 = r1.trackSelectionReason
            java.lang.Object r8 = r1.trackSelectionData
            long r9 = r1.startTimeUs
            long r11 = r1.endTimeUs
            long r17 = r20.bytesLoaded()
            r2.loadCompleted(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17)
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader$Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource>> r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
            return
    }

    @Override
    public void onLoadCompleted(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk) r1
            r0.onLoadCompleted(r1, r2, r4)
            return
    }

    public int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r24, long r25, long r27, java.io.IOException r29) {
            r23 = this;
            r0 = r23
            r1 = r24
            long r17 = r24.bytesLoaded()
            boolean r2 = r23.isMediaChunk(r24)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r3 = r0.mediaChunks
            int r3 = r3.size()
            r4 = 1
            int r3 = r3 - r4
            r5 = 0
            int r5 = (r17 > r5 ? 1 : (r17 == r5 ? 0 : -1))
            r21 = 0
            if (r5 == 0) goto L28
            if (r2 == 0) goto L28
            boolean r5 = r0.haveReadFromMediaChunk(r3)
            if (r5 != 0) goto L25
            goto L28
        L25:
            r5 = r21
            goto L29
        L28:
            r5 = r4
        L29:
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r6 = r0.chunkSource
            r15 = r29
            boolean r6 = r6.onChunkLoadError(r1, r5, r15)
            if (r6 == 0) goto L5b
            if (r5 != 0) goto L3d
            java.lang.String r2 = "ChunkSampleStream"
            java.lang.String r3 = "Ignoring attempt to cancel non-cancelable load."
            android.util.Log.w(r2, r3)
            goto L5b
        L3d:
            if (r2 == 0) goto L58
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r2 = r0.discardUpstreamMediaChunksFromIndex(r3)
            if (r2 != r1) goto L47
            r2 = r4
            goto L49
        L47:
            r2 = r21
        L49:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r2)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r2 = r0.mediaChunks
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L58
            long r2 = r0.lastSeekPositionUs
            r0.pendingResetPositionUs = r2
        L58:
            r22 = r4
            goto L5d
        L5b:
            r22 = r21
        L5d:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r0.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.upstream.DataSpec r3 = r1.dataSpec
            int r4 = r1.type
            int r5 = r0.primaryTrackType
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r1.trackFormat
            int r7 = r1.trackSelectionReason
            java.lang.Object r8 = r1.trackSelectionData
            long r9 = r1.startTimeUs
            long r11 = r1.endTimeUs
            r13 = r25
            r15 = r27
            r19 = r29
            r20 = r22
            r2.loadError(r3, r4, r5, r6, r7, r8, r9, r11, r13, r15, r17, r19, r20)
            if (r22 == 0) goto L83
            com.mbridge.msdk.playercommon.exoplayer2.source.SequenceableLoader$Callback<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource>> r1 = r0.callback
            r1.onContinueLoadingRequested(r0)
            r1 = 2
            return r1
        L83:
            return r21
    }

    @Override
    public int onLoadError(com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader.Loadable r1, long r2, long r4, java.io.IOException r6) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.Chunk) r1
            int r1 = r0.onLoadError(r1, r2, r4, r6)
            return r1
    }

    @Override
    public void onLoaderReleased() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r4.primarySampleQueue
            r0.reset()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r4.embeddedSampleQueues
            int r1 = r0.length
            r2 = 0
        L9:
            if (r2 >= r1) goto L13
            r3 = r0[r2]
            r3.reset()
            int r2 = r2 + 1
            goto L9
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream$ReleaseCallback<T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource> r0 = r4.releaseCallback
            if (r0 == 0) goto L1a
            r0.onSampleStreamReleased(r4)
        L1a:
            return
    }

    @Override
    public int readData(com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r8, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r9, boolean r10) {
            r7 = this;
            boolean r0 = r7.isPendingReset()
            if (r0 == 0) goto L8
            r8 = -3
            return r8
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r7.primarySampleQueue
            boolean r4 = r7.loadingFinished
            long r5 = r7.decodeOnlyUntilPositionUs
            r1 = r8
            r2 = r9
            r3 = r10
            int r8 = r0.read(r1, r2, r3, r4, r5)
            r9 = -4
            if (r8 != r9) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r9 = r7.primarySampleQueue
            int r9 = r9.getReadIndex()
            r10 = 1
            r7.maybeNotifyPrimaryTrackFormatChanged(r9, r10)
        L22:
            return r8
    }

    @Override
    public void reevaluateBuffer(long r7) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r0 = r6.loader
            boolean r0 = r0.isLoading()
            if (r0 != 0) goto L52
            boolean r0 = r6.isPendingReset()
            if (r0 == 0) goto Lf
            goto L52
        Lf:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r0 = r6.mediaChunks
            int r0 = r0.size()
            T extends com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSource r1 = r6.chunkSource
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r2 = r6.readOnlyMediaChunks
            int r7 = r1.getPreferredQueueSize(r7, r2)
            if (r0 > r7) goto L20
            return
        L20:
            if (r7 >= r0) goto L2c
            boolean r8 = r6.haveReadFromMediaChunk(r7)
            if (r8 != 0) goto L29
            goto L2d
        L29:
            int r7 = r7 + 1
            goto L20
        L2c:
            r7 = r0
        L2d:
            if (r7 != r0) goto L30
            return
        L30:
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r8 = r6.getLastMediaChunk()
            long r4 = r8.endTimeUs
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r7 = r6.discardUpstreamMediaChunksFromIndex(r7)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r8 = r6.mediaChunks
            boolean r8 = r8.isEmpty()
            if (r8 == 0) goto L46
            long r0 = r6.lastSeekPositionUs
            r6.pendingResetPositionUs = r0
        L46:
            r8 = 0
            r6.loadingFinished = r8
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r6.eventDispatcher
            int r1 = r6.primaryTrackType
            long r2 = r7.startTimeUs
            r0.upstreamDiscarded(r1, r2, r4)
        L52:
            return
    }

    public void release() {
            r1 = this;
            r0 = 0
            r1.release(r0)
            return
    }

    public void release(com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream.ReleaseCallback<T> r4) {
            r3 = this;
            r3.releaseCallback = r4
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r4 = r3.primarySampleQueue
            r4.discardToEnd()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r3.embeddedSampleQueues
            int r0 = r4.length
            r1 = 0
        Lb:
            if (r1 >= r0) goto L15
            r2 = r4[r1]
            r2.discardToEnd()
            int r1 = r1 + 1
            goto Lb
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r4 = r3.loader
            r4.release(r3)
            return
    }

    public void seekToUs(long r11) {
            r10 = this;
            r10.lastSeekPositionUs = r11
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r10.primarySampleQueue
            r0.rewind()
            boolean r0 = r10.isPendingReset()
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L11
            r0 = r2
            goto L68
        L11:
            r0 = 0
            r3 = r2
        L13:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r4 = r10.mediaChunks
            int r4 = r4.size()
            if (r3 >= r4) goto L3c
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r4 = r10.mediaChunks
            java.lang.Object r4 = r4.get(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk) r4
            long r5 = r4.startTimeUs
            int r5 = (r5 > r11 ? 1 : (r5 == r11 ? 0 : -1))
            if (r5 != 0) goto L36
            long r6 = r4.seekTimeUs
            r8 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r6 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
            if (r6 != 0) goto L36
            r0 = r4
            goto L3c
        L36:
            if (r5 <= 0) goto L39
            goto L3c
        L39:
            int r3 = r3 + 1
            goto L13
        L3c:
            if (r0 == 0) goto L4d
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r3 = r10.primarySampleQueue
            int r0 = r0.getFirstSampleIndex(r2)
            boolean r0 = r3.setReadPosition(r0)
            r3 = -9223372036854775808
            r10.decodeOnlyUntilPositionUs = r3
            goto L68
        L4d:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r10.primarySampleQueue
            long r3 = r10.getNextLoadPositionUs()
            int r3 = (r11 > r3 ? 1 : (r11 == r3 ? 0 : -1))
            if (r3 >= 0) goto L59
            r3 = r1
            goto L5a
        L59:
            r3 = r2
        L5a:
            int r0 = r0.advanceTo(r11, r1, r3)
            r3 = -1
            if (r0 == r3) goto L63
            r0 = r1
            goto L64
        L63:
            r0 = r2
        L64:
            long r3 = r10.lastSeekPositionUs
            r10.decodeOnlyUntilPositionUs = r3
        L68:
            if (r0 == 0) goto L7b
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r0 = r10.embeddedSampleQueues
            int r3 = r0.length
            r4 = r2
        L6e:
            if (r4 >= r3) goto La4
            r5 = r0[r4]
            r5.rewind()
            r5.advanceTo(r11, r1, r2)
            int r4 = r4 + 1
            goto L6e
        L7b:
            r10.pendingResetPositionUs = r11
            r10.loadingFinished = r2
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.chunk.BaseMediaChunk> r11 = r10.mediaChunks
            r11.clear()
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r11 = r10.loader
            boolean r11 = r11.isLoading()
            if (r11 == 0) goto L92
            com.mbridge.msdk.playercommon.exoplayer2.upstream.Loader r11 = r10.loader
            r11.cancelLoading()
            goto La4
        L92:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r11 = r10.primarySampleQueue
            r11.reset()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r11 = r10.embeddedSampleQueues
            int r12 = r11.length
        L9a:
            if (r2 >= r12) goto La4
            r0 = r11[r2]
            r0.reset()
            int r2 = r2 + 1
            goto L9a
        La4:
            return
    }

    public com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream<T>.EmbeddedSampleStream selectEmbeddedTrack(long r3, int r5) {
            r2 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r1 = r2.embeddedSampleQueues
            int r1 = r1.length
            if (r0 >= r1) goto L34
            int[] r1 = r2.embeddedTrackTypes
            r1 = r1[r0]
            if (r1 != r5) goto L31
            boolean[] r5 = r2.embeddedTracksSelected
            boolean r5 = r5[r0]
            r1 = 1
            r5 = r5 ^ r1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r5)
            boolean[] r5 = r2.embeddedTracksSelected
            r5[r0] = r1
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = r2.embeddedSampleQueues
            r5 = r5[r0]
            r5.rewind()
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r5 = r2.embeddedSampleQueues
            r5 = r5[r0]
            r5.advanceTo(r3, r1, r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream$EmbeddedSampleStream r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.chunk.ChunkSampleStream$EmbeddedSampleStream
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue[] r4 = r2.embeddedSampleQueues
            r4 = r4[r0]
            r3.<init>(r2, r2, r4, r0)
            return r3
        L31:
            int r0 = r0 + 1
            goto L1
        L34:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            r3.<init>()
            throw r3
    }

    @Override
    public int skipData(long r5) {
            r4 = this;
            boolean r0 = r4.isPendingReset()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            boolean r0 = r4.loadingFinished
            if (r0 == 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r4.primarySampleQueue
            long r2 = r0.getLargestQueuedTimestampUs()
            int r0 = (r5 > r2 ? 1 : (r5 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r5 = r4.primarySampleQueue
            int r1 = r5.advanceToEnd()
            goto L29
        L1d:
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r0 = r4.primarySampleQueue
            r2 = 1
            int r5 = r0.advanceTo(r5, r2, r2)
            r6 = -1
            if (r5 != r6) goto L28
            goto L29
        L28:
            r1 = r5
        L29:
            if (r1 <= 0) goto L34
            com.mbridge.msdk.playercommon.exoplayer2.source.SampleQueue r5 = r4.primarySampleQueue
            int r5 = r5.getReadIndex()
            r4.maybeNotifyPrimaryTrackFormatChanged(r5, r1)
        L34:
            return r1
    }
}
