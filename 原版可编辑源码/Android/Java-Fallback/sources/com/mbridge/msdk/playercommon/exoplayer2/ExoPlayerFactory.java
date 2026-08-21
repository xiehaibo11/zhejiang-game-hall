package com.mbridge.msdk.playercommon.exoplayer2;

public final class ExoPlayerFactory {
    private ExoPlayerFactory() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer newInstance(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r1 = newInstance(r1, r2, r0)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer newInstance(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r3, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r4) {
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r0, r2)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r0, r2, r3)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory
            r0.<init>(r1)
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r0, r2, r3, r4)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4, int r5) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory
            r0.<init>(r1, r5)
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r0, r2, r3, r4)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4, int r5, long r6) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultRenderersFactory
            r0.<init>(r1, r5, r6)
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r0, r2, r3, r4)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r1, r2, r0)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r3, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r4) {
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = new com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer
            r1 = 0
            r0.<init>(r2, r3, r4, r1)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4) {
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = new com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer
            r0.<init>(r1, r2, r3, r4)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r7, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r8, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r10, com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.Factory r11) {
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r6 = new com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            return r6
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer newSimpleInstance(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r1, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3) {
            com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl r0 = new com.mbridge.msdk.playercommon.exoplayer2.DefaultLoadControl
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1 = newSimpleInstance(r1, r2, r0, r3)
            return r1
    }
}
