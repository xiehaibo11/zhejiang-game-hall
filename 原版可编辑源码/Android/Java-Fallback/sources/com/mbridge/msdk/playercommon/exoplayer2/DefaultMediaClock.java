package com.mbridge.msdk.playercommon.exoplayer2;

final class DefaultMediaClock implements com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock {
    private final com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock.PlaybackParameterListener listener;
    private com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock rendererClock;
    private com.mbridge.msdk.playercommon.exoplayer2.Renderer rendererClockSource;
    private final com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock standaloneMediaClock;

    public interface PlaybackParameterListener {
        void onPlaybackParametersChanged(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);
    }

    public DefaultMediaClock(com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock.PlaybackParameterListener r1, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r2) {
            r0 = this;
            r0.<init>()
            r0.listener = r1
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r1 = new com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock
            r1.<init>(r2)
            r0.standaloneMediaClock = r1
            return
    }

    private void ensureSynced() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r3.rendererClock
            long r0 = r0.getPositionUs()
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r2 = r3.standaloneMediaClock
            r2.resetPosition(r0)
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r3.rendererClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r1 = r3.standaloneMediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1 = r1.getPlaybackParameters()
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r1 = r3.standaloneMediaClock
            r1.setPlaybackParameters(r0)
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock$PlaybackParameterListener r1 = r3.listener
            r1.onPlaybackParametersChanged(r0)
        L27:
            return
    }

    private boolean isUsingRendererClock() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = r1.rendererClockSource
            if (r0 == 0) goto L1c
            boolean r0 = r0.isEnded()
            if (r0 != 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = r1.rendererClockSource
            boolean r0 = r0.isReady()
            if (r0 != 0) goto L1a
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = r1.rendererClockSource
            boolean r0 = r0.hasReadStreamToEnd()
            if (r0 != 0) goto L1c
        L1a:
            r0 = 1
            goto L1d
        L1c:
            r0 = 0
        L1d:
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r1.rendererClock
            if (r0 == 0) goto L9
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            goto Lf
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r1.standaloneMediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
        Lf:
            return r0
    }

    @Override
    public final long getPositionUs() {
            r2 = this;
            boolean r0 = r2.isUsingRendererClock()
            if (r0 == 0) goto Ld
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r2.rendererClock
            long r0 = r0.getPositionUs()
            return r0
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r2.standaloneMediaClock
            long r0 = r0.getPositionUs()
            return r0
    }

    public final void onRendererDisabled(com.mbridge.msdk.playercommon.exoplayer2.Renderer r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = r1.rendererClockSource
            if (r2 != r0) goto L9
            r2 = 0
            r1.rendererClock = r2
            r1.rendererClockSource = r2
        L9:
            return
    }

    public final void onRendererEnabled(com.mbridge.msdk.playercommon.exoplayer2.Renderer r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r3.getMediaClock()
            if (r0 == 0) goto L29
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r1 = r2.rendererClock
            if (r0 == r1) goto L29
            if (r1 != 0) goto L1d
            r2.rendererClock = r0
            r2.rendererClockSource = r3
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r3 = r2.standaloneMediaClock
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3 = r3.getPlaybackParameters()
            r0.setPlaybackParameters(r3)
            r2.ensureSynced()
            goto L29
        L1d:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.String r0 = "Multiple renderer media clocks enabled."
            r3.<init>(r0)
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r3 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForUnexpected(r3)
            throw r3
        L29:
            return
    }

    public final void resetPosition(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r1.standaloneMediaClock
            r0.resetPosition(r2)
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r1.rendererClock
            if (r0 == 0) goto L8
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r0.setPlaybackParameters(r2)
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r1.standaloneMediaClock
            r0.setPlaybackParameters(r2)
            com.mbridge.msdk.playercommon.exoplayer2.DefaultMediaClock$PlaybackParameterListener r0 = r1.listener
            r0.onPlaybackParametersChanged(r2)
            return r2
    }

    public final void start() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r1.standaloneMediaClock
            r0.start()
            return
    }

    public final void stop() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r1.standaloneMediaClock
            r0.stop()
            return
    }

    public final long syncAndGetPositionUs() {
            r2 = this;
            boolean r0 = r2.isUsingRendererClock()
            if (r0 == 0) goto L10
            r2.ensureSynced()
            com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock r0 = r2.rendererClock
            long r0 = r0.getPositionUs()
            return r0
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.util.StandaloneMediaClock r0 = r2.standaloneMediaClock
            long r0 = r0.getPositionUs()
            return r0
    }
}
