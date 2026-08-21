package com.mbridge.msdk.playercommon.exoplayer2.trackselection;

public abstract class TrackSelector {
    private com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector.InvalidationListener listener;

    public interface InvalidationListener {
        void onTrackSelectionsInvalidated();
    }

    public TrackSelector() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void init(com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector.InvalidationListener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    protected final void invalidate() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector$InvalidationListener r0 = r1.listener
            if (r0 == 0) goto L7
            r0.onTrackSelectionsInvalidated()
        L7:
            return
    }

    public abstract void onSelectionActivated(java.lang.Object r1);

    public abstract com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectorResult selectTracks(com.mbridge.msdk.playercommon.exoplayer2.RendererCapabilities[] r1, com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;
}
