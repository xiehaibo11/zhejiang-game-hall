package com.mbridge.msdk.playercommon.exoplayer2.source;

public abstract class BaseMediaSource implements com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource {
    private final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher eventDispatcher;
    private java.lang.Object manifest;
    private com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer player;
    private final java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener> sourceInfoListeners;
    private com.mbridge.msdk.playercommon.exoplayer2.Timeline timeline;

    public BaseMediaSource() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 1
            r0.<init>(r1)
            r2.sourceInfoListeners = r0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher
            r0.<init>()
            r2.eventDispatcher = r0
            return
    }

    @Override
    public final void addEventListener(android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.addEventListener(r2, r3)
            return
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher createEventDispatcher(int r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r1.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r0.withParameters(r2, r3, r4)
            return r2
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher createEventDispatcher(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r5) {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r4.eventDispatcher
            r1 = 0
            r2 = 0
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r5 = r0.withParameters(r1, r5, r2)
            return r5
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher createEventDispatcher(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r3, long r4) {
            r2 = this;
            r0 = 0
            if (r3 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r2.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r3 = r1.withParameters(r0, r3, r4)
            return r3
    }

    @Override
    public final void prepareSource(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r2, boolean r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            if (r0 == 0) goto L9
            if (r0 != r2) goto L7
            goto L9
        L7:
            r0 = 0
            goto La
        L9:
            r0 = 1
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener> r0 = r1.sourceInfoListeners
            r0.add(r4)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            if (r0 != 0) goto L1c
            r1.player = r2
            r1.prepareSourceInternal(r2, r3)
            goto L25
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r2 = r1.timeline
            if (r2 == 0) goto L25
            java.lang.Object r3 = r1.manifest
            r4.onSourceInfoRefreshed(r1, r2, r3)
        L25:
            return
    }

    protected abstract void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2);

    protected final void refreshSourceInfo(com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4) {
            r2 = this;
            r2.timeline = r3
            r2.manifest = r4
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener> r0 = r2.sourceInfoListeners
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener) r1
            r1.onSourceInfoRefreshed(r2, r3, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void releaseSource(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener r2) {
            r1 = this;
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener> r0 = r1.sourceInfoListeners
            r0.remove(r2)
            java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener> r2 = r1.sourceInfoListeners
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L17
            r2 = 0
            r1.player = r2
            r1.timeline = r2
            r1.manifest = r2
            r1.releaseSourceInternal()
        L17:
            return
    }

    protected abstract void releaseSourceInternal();

    @Override
    public final void removeEventListener(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.removeEventListener(r2)
            return
    }
}
