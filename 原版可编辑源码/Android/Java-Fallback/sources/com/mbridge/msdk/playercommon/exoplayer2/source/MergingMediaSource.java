package com.mbridge.msdk.playercommon.exoplayer2.source;

public final class MergingMediaSource extends com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource<java.lang.Integer> {
    private static final int PERIOD_COUNT_UNSET = -1;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoaderFactory compositeSequenceableLoaderFactory;
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] mediaSources;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource.IllegalMergeException mergeError;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> pendingTimelineSources;
    private int periodCount;
    private java.lang.Object primaryManifest;
    private com.mbridge.msdk.playercommon.exoplayer2.Timeline primaryTimeline;

    public static final class IllegalMergeException extends java.io.IOException {
        public static final int REASON_PERIOD_COUNT_MISMATCH = 0;
        public final int reason;

        public @interface Reason {
        }

        public IllegalMergeException(int r1) {
                r0 = this;
                r0.<init>()
                r0.reason = r1
                return
        }
    }

    public MergingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoaderFactory r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource... r2) {
            r0 = this;
            r0.<init>()
            r0.mediaSources = r2
            r0.compositeSequenceableLoaderFactory = r1
            java.util.ArrayList r1 = new java.util.ArrayList
            java.util.List r2 = java.util.Arrays.asList(r2)
            r1.<init>(r2)
            r0.pendingTimelineSources = r1
            r1 = -1
            r0.periodCount = r1
            return
    }

    public MergingMediaSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource... r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.DefaultCompositeSequenceableLoaderFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.DefaultCompositeSequenceableLoaderFactory
            r0.<init>()
            r1.<init>(r0, r2)
            return
    }

    private com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource.IllegalMergeException checkTimelineMerges(com.mbridge.msdk.playercommon.exoplayer2.Timeline r3) {
            r2 = this;
            int r0 = r2.periodCount
            r1 = -1
            if (r0 != r1) goto Lc
            int r3 = r3.getPeriodCount()
            r2.periodCount = r3
            goto L1b
        Lc:
            int r3 = r3.getPeriodCount()
            int r0 = r2.periodCount
            if (r3 == r0) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException
            r0 = 0
            r3.<init>(r0)
            return r3
        L1b:
            r3 = 0
            return r3
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod createPeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r5, com.mbridge.msdk.playercommon.exoplayer2.upstream.Allocator r6) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r0 = r4.mediaSources
            int r0 = r0.length
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod[] r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod[r0]
            r2 = 0
        L6:
            if (r2 >= r0) goto L15
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r3 = r4.mediaSources
            r3 = r3[r2]
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r3 = r3.createPeriod(r5, r6)
            r1[r2] = r3
            int r2 = r2 + 1
            goto L6
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaPeriod r5 = new com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaPeriod
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeSequenceableLoaderFactory r6 = r4.compositeSequenceableLoaderFactory
            r5.<init>(r6, r1)
            return r5
    }

    @Override
    public final void maybeThrowSourceInfoRefreshError() throws java.io.IOException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException r0 = r1.mergeError
            if (r0 != 0) goto L8
            super.maybeThrowSourceInfoRefreshError()
            return
        L8:
            throw r0
    }

    protected final void onChildSourceInfoRefreshed(java.lang.Integer r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, com.mbridge.msdk.playercommon.exoplayer2.Timeline r4, java.lang.Object r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException r2 = r1.mergeError
            if (r2 != 0) goto La
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException r2 = r1.checkTimelineMerges(r4)
            r1.mergeError = r2
        La:
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaSource$IllegalMergeException r2 = r1.mergeError
            if (r2 == 0) goto Lf
            return
        Lf:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r2 = r1.pendingTimelineSources
            r2.remove(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r2 = r1.mediaSources
            r0 = 0
            r2 = r2[r0]
            if (r3 != r2) goto L1f
            r1.primaryTimeline = r4
            r1.primaryManifest = r5
        L1f:
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r2 = r1.pendingTimelineSources
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L2e
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r1.primaryTimeline
            java.lang.Object r3 = r1.primaryManifest
            r1.refreshSourceInfo(r2, r3)
        L2e:
            return
    }

    @Override
    protected final void onChildSourceInfoRefreshed(java.lang.Integer r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r0 = this;
            java.lang.Integer r1 = (java.lang.Integer) r1
            r0.onChildSourceInfoRefreshed(r1, r2, r3, r4)
            return
    }

    @Override
    public final void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r2, boolean r3) {
            r1 = this;
            super.prepareSourceInternal(r2, r3)
            r2 = 0
        L4:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r3 = r1.mediaSources
            int r3 = r3.length
            if (r2 >= r3) goto L17
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r0 = r1.mediaSources
            r0 = r0[r2]
            r1.prepareChildSource(r3, r0)
            int r2 = r2 + 1
            goto L4
        L17:
            return
    }

    @Override
    public final void releasePeriod(com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod r4) {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaPeriod r4 = (com.mbridge.msdk.playercommon.exoplayer2.source.MergingMediaPeriod) r4
            r0 = 0
        L3:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r1 = r3.mediaSources
            int r2 = r1.length
            if (r0 >= r2) goto L14
            r1 = r1[r0]
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaPeriod[] r2 = r4.periods
            r2 = r2[r0]
            r1.releasePeriod(r2)
            int r0 = r0 + 1
            goto L3
        L14:
            return
    }

    @Override
    public final void releaseSourceInternal() {
            r2 = this;
            super.releaseSourceInternal()
            r0 = 0
            r2.primaryTimeline = r0
            r2.primaryManifest = r0
            r1 = -1
            r2.periodCount = r1
            r2.mergeError = r0
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r0 = r2.pendingTimelineSources
            r0.clear()
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource> r0 = r2.pendingTimelineSources
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource[] r1 = r2.mediaSources
            java.util.Collections.addAll(r0, r1)
            return
    }
}
