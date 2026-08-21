package com.mbridge.msdk.playercommon.exoplayer2.source;

public abstract class CompositeMediaSource<T> extends com.mbridge.msdk.playercommon.exoplayer2.source.BaseMediaSource {
    private final java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource.MediaSourceAndListener> childSources;
    private android.os.Handler eventHandler;
    private com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer player;


    private final class ForwardingEventListener implements com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener {
        private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.EventDispatcher eventDispatcher;
        private final T id;
        final com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource this$0;

        public ForwardingEventListener(com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r2, T r3) {
                r1 = this;
                r1.this$0 = r2
                r1.<init>()
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r2 = r2.createEventDispatcher(r0)
                r1.eventDispatcher = r2
                r1.id = r3
                return
        }

        private boolean maybeUpdateEventDispatcher(int r4, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r5) {
                r3 = this;
                if (r5 == 0) goto Le
                com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r0 = r3.this$0
                T r1 = r3.id
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r5 = r0.getMediaPeriodIdForChildMediaPeriodId(r1, r5)
                if (r5 != 0) goto Lf
                r4 = 0
                return r4
            Le:
                r5 = 0
            Lf:
                com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r0 = r3.this$0
                T r1 = r3.id
                int r4 = r0.getWindowIndexForChildWindowIndex(r1, r4)
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r3.eventDispatcher
                int r0 = r0.windowIndex
                if (r0 != r4) goto L27
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r0 = r3.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$MediaPeriodId r0 = r0.mediaPeriodId
                boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r0, r5)
                if (r0 != 0) goto L31
            L27:
                com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r0 = r3.this$0
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r4 = r0.createEventDispatcher(r4, r5, r1)
                r3.eventDispatcher = r4
            L31:
                r4 = 1
                return r4
        }

        private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData maybeUpdateMediaLoadData(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r15) {
                r14 = this;
                com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r0 = r14.this$0
                T r1 = r14.id
                long r2 = r15.mediaStartTimeMs
                long r10 = r0.getMediaTimeForChildMediaTime(r1, r2)
                com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource r0 = r14.this$0
                T r1 = r14.id
                long r2 = r15.mediaEndTimeMs
                long r12 = r0.getMediaTimeForChildMediaTime(r1, r2)
                long r0 = r15.mediaStartTimeMs
                int r0 = (r10 > r0 ? 1 : (r10 == r0 ? 0 : -1))
                if (r0 != 0) goto L21
                long r0 = r15.mediaEndTimeMs
                int r0 = (r12 > r0 ? 1 : (r12 == r0 ? 0 : -1))
                if (r0 != 0) goto L21
                return r15
            L21:
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData
                int r5 = r15.dataType
                int r6 = r15.trackType
                com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r15.trackFormat
                int r8 = r15.trackSelectionReason
                java.lang.Object r9 = r15.trackSelectionData
                r4 = r0
                r4.<init>(r5, r6, r7, r8, r9, r10, r12)
                return r0
        }

        @Override
        public final void onDownstreamFormatChanged(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r3)
                r1.downstreamFormatChanged(r2)
            Lf:
                return
        }

        @Override
        public final void onLoadCanceled(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r4)
                r1.loadCanceled(r3, r2)
            Lf:
                return
        }

        @Override
        public final void onLoadCompleted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r4)
                r1.loadCompleted(r3, r2)
            Lf:
                return
        }

        @Override
        public final void onLoadError(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4, java.io.IOException r5, boolean r6) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r4)
                r1.loadError(r3, r2, r5, r6)
            Lf:
                return
        }

        @Override
        public final void onLoadStarted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.LoadEventInfo r3, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r4) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r4)
                r1.loadStarted(r3, r2)
            Lf:
                return
        }

        @Override
        public final void onMediaPeriodCreated(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lb
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                r1.mediaPeriodCreated()
            Lb:
                return
        }

        @Override
        public final void onMediaPeriodReleased(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lb
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                r1.mediaPeriodReleased()
            Lb:
                return
        }

        @Override
        public final void onReadingStarted(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lb
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                r1.readingStarted()
            Lb:
                return
        }

        @Override
        public final void onUpstreamDiscarded(int r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener.MediaLoadData r3) {
                r0 = this;
                boolean r1 = r0.maybeUpdateEventDispatcher(r1, r2)
                if (r1 == 0) goto Lf
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$EventDispatcher r1 = r0.eventDispatcher
                com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener$MediaLoadData r2 = r0.maybeUpdateMediaLoadData(r3)
                r1.upstreamDiscarded(r2)
            Lf:
                return
        }
    }

    private static final class MediaSourceAndListener {
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener eventListener;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener listener;
        public final com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;

        public MediaSourceAndListener(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.SourceInfoRefreshListener r2, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r3) {
                r0 = this;
                r0.<init>()
                r0.mediaSource = r1
                r0.listener = r2
                r0.eventListener = r3
                return
        }
    }

    protected CompositeMediaSource() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.childSources = r0
            return
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId getMediaPeriodIdForChildMediaPeriodId(T r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource.MediaPeriodId r2) {
            r0 = this;
            return r2
    }

    protected long getMediaTimeForChildMediaTime(T r1, long r2) {
            r0 = this;
            return r2
    }

    protected int getWindowIndexForChildWindowIndex(T r1, int r2) {
            r0 = this;
            return r2
    }

    @Override
    public void maybeThrowSourceInfoRefreshError() throws java.io.IOException {
            r2 = this;
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r0 = r2.childSources
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1c
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource.MediaSourceAndListener) r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r1 = r1.mediaSource
            r1.maybeThrowSourceInfoRefreshError()
            goto La
        L1c:
            return
    }

    protected abstract void onChildSourceInfoRefreshed(T r1, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2, com.mbridge.msdk.playercommon.exoplayer2.Timeline r3, java.lang.Object r4);

    protected final void prepareChildSource(T r5, com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r6) {
            r4 = this;
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r0 = r4.childSources
            boolean r0 = r0.containsKey(r5)
            r0 = r0 ^ 1
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$1
            r0.<init>(r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$ForwardingEventListener r1 = new com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$ForwardingEventListener
            r1.<init>(r4, r5)
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r2 = r4.childSources
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener r3 = new com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener
            r3.<init>(r6, r0, r1)
            r2.put(r5, r3)
            android.os.Handler r5 = r4.eventHandler
            r6.addEventListener(r5, r1)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r5 = r4.player
            r1 = 0
            r6.prepareSource(r5, r1, r0)
            return
    }

    @Override
    public void prepareSourceInternal(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1, boolean r2) {
            r0 = this;
            r0.player = r1
            android.os.Handler r1 = new android.os.Handler
            r1.<init>()
            r0.eventHandler = r1
            return
    }

    protected final void releaseChildSource(T r3) {
            r2 = this;
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r0 = r2.childSources
            java.lang.Object r3 = r0.remove(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener r3 = (com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource.MediaSourceAndListener) r3
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener r1 = r3.listener
            r0.releaseSource(r1)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r3.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r3 = r3.eventListener
            r0.removeEventListener(r3)
            return
    }

    @Override
    public void releaseSourceInternal() {
            r4 = this;
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r0 = r4.childSources
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L25
            java.lang.Object r1 = r0.next()
            com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource.MediaSourceAndListener) r1
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r1.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource$SourceInfoRefreshListener r3 = r1.listener
            r2.releaseSource(r3)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r1.mediaSource
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSourceEventListener r1 = r1.eventListener
            r2.removeEventListener(r1)
            goto La
        L25:
            java.util.HashMap<T, com.mbridge.msdk.playercommon.exoplayer2.source.CompositeMediaSource$MediaSourceAndListener> r0 = r4.childSources
            r0.clear()
            r0 = 0
            r4.player = r0
            return
    }
}
