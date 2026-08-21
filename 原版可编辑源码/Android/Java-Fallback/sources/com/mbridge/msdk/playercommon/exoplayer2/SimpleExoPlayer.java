package com.mbridge.msdk.playercommon.exoplayer2;

public class SimpleExoPlayer implements com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer, com.mbridge.msdk.playercommon.exoplayer2.Player.TextComponent, com.mbridge.msdk.playercommon.exoplayer2.Player.VideoComponent {
    private static final java.lang.String TAG = "SimpleExoPlayer";
    private final com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector analyticsCollector;
    private com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes audioAttributes;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> audioDebugListeners;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters audioDecoderCounters;
    private com.mbridge.msdk.playercommon.exoplayer2.Format audioFormat;
    private int audioSessionId;
    private float audioVolume;
    private final com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.ComponentListener componentListener;
    private java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> currentCues;
    private final android.os.Handler eventHandler;
    private com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource mediaSource;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput> metadataOutputs;
    private boolean ownsSurface;
    private final com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer player;
    protected final com.mbridge.msdk.playercommon.exoplayer2.Renderer[] renderers;
    private android.view.Surface surface;
    private android.view.SurfaceHolder surfaceHolder;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput> textOutputs;
    private android.view.TextureView textureView;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> videoDebugListeners;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters videoDecoderCounters;
    private com.mbridge.msdk.playercommon.exoplayer2.Format videoFormat;
    private final java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> videoListeners;
    private int videoScalingMode;

    static class 1 {
    }

    private final class ComponentListener implements android.view.SurfaceHolder.Callback, android.view.TextureView.SurfaceTextureListener, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput, com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener {
        final com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer this$0;

        private ComponentListener(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        ComponentListener(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r1, com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAudioDecoderInitialized(java.lang.String r9, long r10, long r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r8.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.onAudioDecoderInitialized(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void onAudioDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r1
                r1.onAudioDisabled(r3)
                goto La
            L1a:
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$902(r3, r0)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$602(r3, r0)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$802(r3, r0)
                return
        }

        @Override
        public final void onAudioEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$602(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r1
                r1.onAudioEnabled(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onAudioInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$902(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r1
                r1.onAudioInputFormatChanged(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onAudioSessionId(int r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$802(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r1
                r1.onAudioSessionId(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onAudioSinkUnderrun(int r9, long r10, long r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r8.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$700(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.onAudioSinkUnderrun(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void onCues(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1002(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1100(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r1 = (com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput) r1
                r1.onCues(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onDroppedFrames(int r3, long r4) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onDroppedFrames(r3, r4)
                goto La
            L1a:
                return
        }

        @Override
        public final void onMetadata(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1200(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r1 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput) r1
                r1.onMetadata(r3)
                goto La
            L1a:
                return
        }

        @Override
        public final void onRenderedFirstFrame(android.view.Surface r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                android.view.Surface r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$500(r0)
                if (r0 != r3) goto L22
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$400(r0)
                java.util.Iterator r0 = r0.iterator()
            L12:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L22
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener) r1
                r1.onRenderedFirstFrame()
                goto L12
            L22:
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            L2c:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L3c
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onRenderedFirstFrame(r3)
                goto L2c
            L3c:
                return
        }

        @Override
        public final void onSurfaceTextureAvailable(android.graphics.SurfaceTexture r1, int r2, int r3) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r2 = r0.this$0
                android.view.Surface r3 = new android.view.Surface
                r3.<init>(r1)
                r1 = 1
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1300(r2, r3, r1)
                return
        }

        @Override
        public final boolean onSurfaceTextureDestroyed(android.graphics.SurfaceTexture r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                r0 = 1
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1300(r3, r1, r0)
                return r0
        }

        @Override
        public final void onSurfaceTextureSizeChanged(android.graphics.SurfaceTexture r1, int r2, int r3) {
                r0 = this;
                return
        }

        @Override
        public final void onSurfaceTextureUpdated(android.graphics.SurfaceTexture r1) {
                r0 = this;
                return
        }

        @Override
        public final void onVideoDecoderInitialized(java.lang.String r9, long r10, long r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r8.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1e
                java.lang.Object r1 = r0.next()
                r2 = r1
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r2 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r2
                r3 = r9
                r4 = r10
                r6 = r12
                r2.onVideoDecoderInitialized(r3, r4, r6)
                goto La
            L1e:
                return
        }

        @Override
        public final void onVideoDisabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onVideoDisabled(r3)
                goto La
            L1a:
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                r0 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$302(r3, r0)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$102(r3, r0)
                return
        }

        @Override
        public final void onVideoEnabled(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$102(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onVideoEnabled(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onVideoInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$302(r0, r3)
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            Lf:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onVideoInputFormatChanged(r3)
                goto Lf
            L1f:
                return
        }

        @Override
        public final void onVideoSizeChanged(int r3, int r4, int r5, float r6) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$400(r0)
                java.util.Iterator r0 = r0.iterator()
            La:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1a
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener) r1
                r1.onVideoSizeChanged(r3, r4, r5, r6)
                goto La
            L1a:
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                java.util.concurrent.CopyOnWriteArraySet r0 = com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$200(r0)
                java.util.Iterator r0 = r0.iterator()
            L24:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L34
                java.lang.Object r1 = r0.next()
                com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r1 = (com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener) r1
                r1.onVideoSizeChanged(r3, r4, r5, r6)
                goto L24
            L34:
                return
        }

        @Override
        public final void surfaceChanged(android.view.SurfaceHolder r1, int r2, int r3, int r4) {
                r0 = this;
                return
        }

        @Override
        public final void surfaceCreated(android.view.SurfaceHolder r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0 = r2.this$0
                android.view.Surface r3 = r3.getSurface()
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1300(r0, r3, r1)
                return
        }

        @Override
        public final void surfaceDestroyed(android.view.SurfaceHolder r3) {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r3 = r2.this$0
                r0 = 0
                r1 = 0
                com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.access$1300(r3, r0, r1)
                return
        }
    }

    public interface VideoListener extends com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener {
    }

    protected SimpleExoPlayer(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r7, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r8, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$Factory r5 = new com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector$Factory
            r5.<init>()
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    protected SimpleExoPlayer(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r8, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r9, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r10, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r11, com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.Factory r12) {
            r7 = this;
            com.mbridge.msdk.playercommon.exoplayer2.util.Clock r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Clock.DEFAULT
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r5 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    protected SimpleExoPlayer(com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory r9, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r10, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r11, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r12, com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector.Factory r13, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r14) {
            r8 = this;
            r8.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r0 = new com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener
            r1 = 0
            r0.<init>(r8, r1)
            r8.componentListener = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.videoListeners = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.textOutputs = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.metadataOutputs = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.videoDebugListeners = r0
            java.util.concurrent.CopyOnWriteArraySet r0 = new java.util.concurrent.CopyOnWriteArraySet
            r0.<init>()
            r8.audioDebugListeners = r0
            android.os.Looper r0 = android.os.Looper.myLooper()
            if (r0 == 0) goto L39
            android.os.Looper r0 = android.os.Looper.myLooper()
            goto L3d
        L39:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
        L3d:
            android.os.Handler r2 = new android.os.Handler
            r2.<init>(r0)
            r8.eventHandler = r2
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r6 = r8.componentListener
            r1 = r9
            r3 = r6
            r4 = r6
            r5 = r6
            r7 = r12
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r9 = r1.createRenderers(r2, r3, r4, r5, r6, r7)
            r8.renderers = r9
            r9 = 1065353216(0x3f800000, float:1.0)
            r8.audioVolume = r9
            r9 = 0
            r8.audioSessionId = r9
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r9 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.DEFAULT
            r8.audioAttributes = r9
            r9 = 1
            r8.videoScalingMode = r9
            java.util.List r9 = java.util.Collections.emptyList()
            r8.currentCues = r9
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r9 = r8.renderers
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r9 = r8.createExoPlayerImpl(r9, r10, r11, r14)
            r8.player = r9
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r9 = r13.createAnalyticsCollector(r9, r14)
            r8.analyticsCollector = r9
            r8.addListener(r9)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r9 = r8.videoDebugListeners
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r10 = r8.analyticsCollector
            r9.add(r10)
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r9 = r8.audioDebugListeners
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r10 = r8.analyticsCollector
            r9.add(r10)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r9 = r8.analyticsCollector
            r8.addMetadataOutput(r9)
            boolean r9 = r12 instanceof com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager
            if (r9 == 0) goto L96
            com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager r12 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DefaultDrmSessionManager) r12
            android.os.Handler r9 = r8.eventHandler
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r10 = r8.analyticsCollector
            r12.addListener(r9, r10)
        L96:
            return
    }

    static java.util.List access$1002(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, java.util.List r1) {
            r0.currentCues = r1
            return r1
    }

    static com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters access$102(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1) {
            r0.videoDecoderCounters = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet access$1100(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput> r0 = r0.textOutputs
            return r0
    }

    static java.util.concurrent.CopyOnWriteArraySet access$1200(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput> r0 = r0.metadataOutputs
            return r0
    }

    static void access$1300(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, android.view.Surface r1, boolean r2) {
            r0.setVideoSurfaceInternal(r1, r2)
            return
    }

    static java.util.concurrent.CopyOnWriteArraySet access$200(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r0 = r0.videoDebugListeners
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.Format access$302(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, com.mbridge.msdk.playercommon.exoplayer2.Format r1) {
            r0.videoFormat = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet access$400(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> r0 = r0.videoListeners
            return r0
    }

    static android.view.Surface access$500(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            android.view.Surface r0 = r0.surface
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters access$602(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1) {
            r0.audioDecoderCounters = r1
            return r1
    }

    static java.util.concurrent.CopyOnWriteArraySet access$700(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0) {
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r0 = r0.audioDebugListeners
            return r0
    }

    static int access$802(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, int r1) {
            r0.audioSessionId = r1
            return r1
    }

    static com.mbridge.msdk.playercommon.exoplayer2.Format access$902(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer r0, com.mbridge.msdk.playercommon.exoplayer2.Format r1) {
            r0.audioFormat = r1
            return r1
    }

    private void removeSurfaceCallbacks() {
            r3 = this;
            android.view.TextureView r0 = r3.textureView
            r1 = 0
            if (r0 == 0) goto L1c
            android.view.TextureView$SurfaceTextureListener r0 = r0.getSurfaceTextureListener()
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r2 = r3.componentListener
            if (r0 == r2) goto L15
            java.lang.String r0 = "SimpleExoPlayer"
            java.lang.String r2 = "SurfaceTextureListener already unset or replaced."
            android.util.Log.w(r0, r2)
            goto L1a
        L15:
            android.view.TextureView r0 = r3.textureView
            r0.setSurfaceTextureListener(r1)
        L1a:
            r3.textureView = r1
        L1c:
            android.view.SurfaceHolder r0 = r3.surfaceHolder
            if (r0 == 0) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r2 = r3.componentListener
            r0.removeCallback(r2)
            r3.surfaceHolder = r1
        L27:
            return
    }

    private void setVideoSurfaceInternal(android.view.Surface r9, boolean r10) {
            r8 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r1 = r8.renderers
            int r2 = r1.length
            r3 = 0
            r4 = r3
        La:
            if (r4 >= r2) goto L2e
            r5 = r1[r4]
            int r6 = r5.getTrackType()
            r7 = 2
            if (r6 != r7) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r6 = r8.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r6.createMessage(r5)
            r6 = 1
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r5.setType(r6)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r5.setPayload(r9)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r5 = r5.send()
            r0.add(r5)
        L2b:
            int r4 = r4 + 1
            goto La
        L2e:
            android.view.Surface r1 = r8.surface
            if (r1 == 0) goto L5e
            if (r1 == r9) goto L5e
            java.util.Iterator r0 = r0.iterator()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
        L38:
            boolean r1 = r0.hasNext()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            if (r1 == 0) goto L55
            java.lang.Object r1 = r0.next()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r1 = (com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage) r1     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            r1.blockUntilDelivered()     // Catch: java.util.concurrent.TimeoutException -> L48 java.lang.InterruptedException -> L4e
            goto L38
        L48:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r8.player
            r0.stop(r3)
            goto L55
        L4e:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
        L55:
            boolean r0 = r8.ownsSurface
            if (r0 == 0) goto L5e
            android.view.Surface r0 = r8.surface
            r0.release()
        L5e:
            r8.surface = r9
            r8.ownsSurface = r10
            return
    }

    public void addAnalyticsListener(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.addListener(r2)
            return
    }

    public void addAudioDebugListener(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r0 = r1.audioDebugListeners
            r0.add(r2)
            return
    }

    @Override
    public void addListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.addListener(r2)
            return
    }

    public void addMetadataOutput(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput> r0 = r1.metadataOutputs
            r0.add(r2)
            return
    }

    @Override
    public void addTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2) {
            r1 = this;
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r0 = r1.currentCues
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto Ld
            java.util.List<com.mbridge.msdk.playercommon.exoplayer2.text.Cue> r0 = r1.currentCues
            r2.onCues(r0)
        Ld:
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput> r0 = r1.textOutputs
            r0.add(r2)
            return
    }

    public void addVideoDebugListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r0 = r1.videoDebugListeners
            r0.add(r2)
            return
    }

    @Override
    public void addVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> r0 = r1.videoListeners
            r0.add(r2)
            return
    }

    @Override
    public void blockingSendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.blockingSendMessages(r2)
            return
    }

    public void clearMetadataOutput(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r1) {
            r0 = this;
            r0.removeMetadataOutput(r1)
            return
    }

    public void clearTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r1) {
            r0 = this;
            r0.removeTextOutput(r1)
            return
    }

    public void clearVideoListener(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.VideoListener r1) {
            r0 = this;
            r0.removeVideoListener(r1)
            return
    }

    @Override
    public void clearVideoSurface() {
            r1 = this;
            r0 = 0
            r1.setVideoSurface(r0)
            return
    }

    @Override
    public void clearVideoSurface(android.view.Surface r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.Surface r0 = r1.surface
            if (r2 != r0) goto La
            r2 = 0
            r1.setVideoSurface(r2)
        La:
            return
    }

    @Override
    public void clearVideoSurfaceHolder(android.view.SurfaceHolder r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.SurfaceHolder r0 = r1.surfaceHolder
            if (r2 != r0) goto La
            r2 = 0
            r1.setVideoSurfaceHolder(r2)
        La:
            return
    }

    @Override
    public void clearVideoSurfaceView(android.view.SurfaceView r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            goto L8
        L4:
            android.view.SurfaceHolder r1 = r1.getHolder()
        L8:
            r0.clearVideoSurfaceHolder(r1)
            return
    }

    @Override
    public void clearVideoTextureView(android.view.TextureView r2) {
            r1 = this;
            if (r2 == 0) goto La
            android.view.TextureView r0 = r1.textureView
            if (r2 != r0) goto La
            r2 = 0
            r1.setVideoTextureView(r2)
        La:
            return
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer createExoPlayerImpl(com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r2, com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelector r3, com.mbridge.msdk.playercommon.exoplayer2.LoadControl r4, com.mbridge.msdk.playercommon.exoplayer2.util.Clock r5) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl r0 = new com.mbridge.msdk.playercommon.exoplayer2.ExoPlayerImpl
            r0.<init>(r2, r3, r4, r5)
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage createMessage(com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage.Target r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r2 = r0.createMessage(r2)
            return r2
    }

    public com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector getAnalyticsCollector() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes getAudioAttributes() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r1.audioAttributes
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters getAudioDecoderCounters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r1.audioDecoderCounters
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.Format getAudioFormat() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r1.audioFormat
            return r0
    }

    public int getAudioSessionId() {
            r1 = this;
            int r0 = r1.audioSessionId
            return r0
    }

    public int getAudioStreamType() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r1.audioAttributes
            int r0 = r0.usage
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getStreamTypeForAudioUsage(r0)
            return r0
    }

    @Override
    public int getBufferedPercentage() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getBufferedPercentage()
            return r0
    }

    @Override
    public long getBufferedPosition() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            long r0 = r0.getBufferedPosition()
            return r0
    }

    @Override
    public long getContentPosition() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            long r0 = r0.getContentPosition()
            return r0
    }

    @Override
    public int getCurrentAdGroupIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getCurrentAdGroupIndex()
            return r0
    }

    @Override
    public int getCurrentAdIndexInAdGroup() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getCurrentAdIndexInAdGroup()
            return r0
    }

    @Override
    public java.lang.Object getCurrentManifest() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            java.lang.Object r0 = r0.getCurrentManifest()
            return r0
    }

    @Override
    public int getCurrentPeriodIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getCurrentPeriodIndex()
            return r0
    }

    @Override
    public long getCurrentPosition() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            long r0 = r0.getCurrentPosition()
            return r0
    }

    @Override
    public java.lang.Object getCurrentTag() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            java.lang.Object r0 = r0.getCurrentTag()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Timeline getCurrentTimeline() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.Timeline r0 = r0.getCurrentTimeline()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray getCurrentTrackGroups() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.source.TrackGroupArray r0 = r0.getCurrentTrackGroups()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray getCurrentTrackSelections() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.trackselection.TrackSelectionArray r0 = r0.getCurrentTrackSelections()
            return r0
    }

    @Override
    public int getCurrentWindowIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getCurrentWindowIndex()
            return r0
    }

    @Override
    public long getDuration() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            long r0 = r0.getDuration()
            return r0
    }

    @Override
    public int getNextWindowIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getNextWindowIndex()
            return r0
    }

    @Override
    public boolean getPlayWhenReady() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.getPlayWhenReady()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException getPlaybackError() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = r0.getPlaybackError()
            return r0
    }

    @Override
    public android.os.Looper getPlaybackLooper() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            android.os.Looper r0 = r0.getPlaybackLooper()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            return r0
    }

    @Override
    public int getPlaybackState() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getPlaybackState()
            return r0
    }

    @Override
    public int getPreviousWindowIndex() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getPreviousWindowIndex()
            return r0
    }

    @Override
    public int getRendererCount() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getRendererCount()
            return r0
    }

    @Override
    public int getRendererType(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r2 = r0.getRendererType(r2)
            return r2
    }

    @Override
    public int getRepeatMode() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            int r0 = r0.getRepeatMode()
            return r0
    }

    @Override
    public boolean getShuffleModeEnabled() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.getShuffleModeEnabled()
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Player.TextComponent getTextComponent() {
            r0 = this;
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Player.VideoComponent getVideoComponent() {
            r0 = this;
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters getVideoDecoderCounters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r1.videoDecoderCounters
            return r0
    }

    public com.mbridge.msdk.playercommon.exoplayer2.Format getVideoFormat() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r1.videoFormat
            return r0
    }

    @Override
    public int getVideoScalingMode() {
            r1 = this;
            int r0 = r1.videoScalingMode
            return r0
    }

    public float getVolume() {
            r1 = this;
            float r0 = r1.audioVolume
            return r0
    }

    @Override
    public boolean isCurrentWindowDynamic() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.isCurrentWindowDynamic()
            return r0
    }

    @Override
    public boolean isCurrentWindowSeekable() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.isCurrentWindowSeekable()
            return r0
    }

    @Override
    public boolean isLoading() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.isLoading()
            return r0
    }

    public final boolean isPlaying() {
            r2 = this;
            int r0 = r2.getPlaybackState()
            r1 = 3
            if (r0 != r1) goto Lf
            boolean r0 = r2.getPlayWhenReady()
            if (r0 == 0) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            return r0
    }

    @Override
    public boolean isPlayingAd() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            boolean r0 = r0.isPlayingAd()
            return r0
    }

    @Override
    public void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2) {
            r1 = this;
            r0 = 1
            r1.prepare(r2, r0, r0)
            return
    }

    @Override
    public void prepare(com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r3, boolean r4, boolean r5) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r2.mediaSource
            if (r0 == r3) goto L19
            if (r0 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            r0.removeEventListener(r1)
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r2.analyticsCollector
            r0.resetForNewMediaSource()
        L10:
            android.os.Handler r0 = r2.eventHandler
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            r3.addEventListener(r0, r1)
            r2.mediaSource = r3
        L19:
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            r0.prepare(r3, r4, r5)
            return
    }

    @Override
    public void release() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r2.player
            r0.release()
            r2.removeSurfaceCallbacks()
            android.view.Surface r0 = r2.surface
            if (r0 == 0) goto L16
            boolean r1 = r2.ownsSurface
            if (r1 == 0) goto L13
            r0.release()
        L13:
            r0 = 0
            r2.surface = r0
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r0 = r2.mediaSource
            if (r0 == 0) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            r0.removeEventListener(r1)
        L1f:
            java.util.List r0 = java.util.Collections.emptyList()
            r2.currentCues = r0
            return
    }

    public void removeAnalyticsListener(com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.removeListener(r2)
            return
    }

    public void removeAudioDebugListener(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r0 = r1.audioDebugListeners
            r0.remove(r2)
            return
    }

    @Override
    public void removeListener(com.mbridge.msdk.playercommon.exoplayer2.Player.EventListener r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.removeListener(r2)
            return
    }

    public void removeMetadataOutput(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput> r0 = r1.metadataOutputs
            r0.remove(r2)
            return
    }

    @Override
    public void removeTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput> r0 = r1.textOutputs
            r0.remove(r2)
            return
    }

    public void removeVideoDebugListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r0 = r1.videoDebugListeners
            r0.remove(r2)
            return
    }

    @Override
    public void removeVideoListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> r0 = r1.videoListeners
            r0.remove(r2)
            return
    }

    @Override
    public void seekTo(int r2, long r3) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.notifySeekStarted()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.seekTo(r2, r3)
            return
    }

    @Override
    public void seekTo(long r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.notifySeekStarted()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.seekTo(r2)
            return
    }

    @Override
    public void seekToDefaultPosition() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.notifySeekStarted()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.seekToDefaultPosition()
            return
    }

    @Override
    public void seekToDefaultPosition(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r0.notifySeekStarted()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.seekToDefaultPosition(r2)
            return
    }

    @Override
    public void sendMessages(com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer.ExoPlayerMessage... r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.sendMessages(r2)
            return
    }

    public void setAudioAttributes(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r7) {
            r6 = this;
            r6.audioAttributes = r7
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r6.renderers
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L26
            r3 = r0[r2]
            int r4 = r3.getTrackType()
            r5 = 1
            if (r4 != r5) goto L23
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r4 = r6.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r4.createMessage(r3)
            r4 = 3
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setType(r4)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setPayload(r7)
            r3.send()
        L23:
            int r2 = r2 + 1
            goto L6
        L26:
            return
    }

    public void setAudioDebugListener(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r0 = r2.audioDebugListeners
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L10
            r2.addAudioDebugListener(r3)
        L10:
            return
    }

    public void setAudioStreamType(int r3) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getAudioUsageForStreamType(r3)
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getAudioContentTypeForStreamType(r3)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder
            r1.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder r0 = r1.setUsage(r0)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes$Builder r3 = r0.setContentType(r3)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r3 = r3.build()
            r2.setAudioAttributes(r3)
            return
    }

    public void setMetadataOutput(com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput> r0 = r2.metadataOutputs
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L10
            r2.addMetadataOutput(r3)
        L10:
            return
    }

    @Override
    public void setPlayWhenReady(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.setPlayWhenReady(r2)
            return
    }

    @Override
    public void setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.setPlaybackParameters(r2)
            return
    }

    public void setPlaybackParams(android.media.PlaybackParams r3) {
            r2 = this;
            if (r3 == 0) goto L13
            r3.allowDefaults()
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters
            float r1 = r3.getSpeed()
            float r3 = r3.getPitch()
            r0.<init>(r1, r3)
            goto L14
        L13:
            r0 = 0
        L14:
            r2.setPlaybackParameters(r0)
            return
    }

    @Override
    public void setRepeatMode(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.setRepeatMode(r2)
            return
    }

    @Override
    public void setSeekParameters(com.mbridge.msdk.playercommon.exoplayer2.SeekParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.setSeekParameters(r2)
            return
    }

    @Override
    public void setShuffleModeEnabled(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.setShuffleModeEnabled(r2)
            return
    }

    public void setTextOutput(com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput> r0 = r1.textOutputs
            r0.clear()
            if (r2 == 0) goto La
            r1.addTextOutput(r2)
        La:
            return
    }

    public void setVideoDebugListener(com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r3) {
            r2 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r0 = r2.videoDebugListeners
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r1 = r2.analyticsCollector
            java.util.Set r1 = java.util.Collections.singleton(r1)
            r0.retainAll(r1)
            if (r3 == 0) goto L10
            r2.addVideoDebugListener(r3)
        L10:
            return
    }

    public void setVideoListener(com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer.VideoListener r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.mbridge.msdk.playercommon.exoplayer2.video.VideoListener> r0 = r1.videoListeners
            r0.clear()
            if (r2 == 0) goto La
            r1.addVideoListener(r2)
        La:
            return
    }

    @Override
    public void setVideoScalingMode(int r7) {
            r6 = this;
            r6.videoScalingMode = r7
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r6.renderers
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L2a
            r3 = r0[r2]
            int r4 = r3.getTrackType()
            r5 = 2
            if (r4 != r5) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r4 = r6.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r4.createMessage(r3)
            r4 = 4
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setType(r4)
            java.lang.Integer r4 = java.lang.Integer.valueOf(r7)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setPayload(r4)
            r3.send()
        L27:
            int r2 = r2 + 1
            goto L6
        L2a:
            return
    }

    @Override
    public void setVideoSurface(android.view.Surface r2) {
            r1 = this;
            r1.removeSurfaceCallbacks()
            r0 = 0
            r1.setVideoSurfaceInternal(r2, r0)
            return
    }

    @Override
    public void setVideoSurfaceHolder(android.view.SurfaceHolder r2) {
            r1 = this;
            r1.removeSurfaceCallbacks()
            r1.surfaceHolder = r2
            if (r2 != 0) goto L8
            goto L1a
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r0 = r1.componentListener
            r2.addCallback(r0)
            android.view.Surface r2 = r2.getSurface()
            if (r2 == 0) goto L1a
            boolean r0 = r2.isValid()
            if (r0 == 0) goto L1a
            goto L1b
        L1a:
            r2 = 0
        L1b:
            r0 = 0
            r1.setVideoSurfaceInternal(r2, r0)
            return
    }

    @Override
    public void setVideoSurfaceView(android.view.SurfaceView r1) {
            r0 = this;
            if (r1 != 0) goto L4
            r1 = 0
            goto L8
        L4:
            android.view.SurfaceHolder r1 = r1.getHolder()
        L8:
            r0.setVideoSurfaceHolder(r1)
            return
    }

    @Override
    public void setVideoTextureView(android.view.TextureView r4) {
            r3 = this;
            r3.removeSurfaceCallbacks()
            r3.textureView = r4
            r0 = 0
            if (r4 != 0) goto L9
            goto L2f
        L9:
            android.view.TextureView$SurfaceTextureListener r1 = r4.getSurfaceTextureListener()
            if (r1 == 0) goto L16
            java.lang.String r1 = "SimpleExoPlayer"
            java.lang.String r2 = "Replacing existing SurfaceTextureListener."
            android.util.Log.w(r1, r2)
        L16:
            com.mbridge.msdk.playercommon.exoplayer2.SimpleExoPlayer$ComponentListener r1 = r3.componentListener
            r4.setSurfaceTextureListener(r1)
            boolean r1 = r4.isAvailable()
            if (r1 == 0) goto L26
            android.graphics.SurfaceTexture r4 = r4.getSurfaceTexture()
            goto L27
        L26:
            r4 = r0
        L27:
            if (r4 != 0) goto L2a
            goto L2f
        L2a:
            android.view.Surface r0 = new android.view.Surface
            r0.<init>(r4)
        L2f:
            r4 = 1
            r3.setVideoSurfaceInternal(r0, r4)
            return
    }

    public void setVolume(float r7) {
            r6 = this;
            r6.audioVolume = r7
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = r6.renderers
            int r1 = r0.length
            r2 = 0
        L6:
            if (r2 >= r1) goto L2a
            r3 = r0[r2]
            int r4 = r3.getTrackType()
            r5 = 1
            if (r4 != r5) goto L27
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r4 = r6.player
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r4.createMessage(r3)
            r4 = 2
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setType(r4)
            java.lang.Float r4 = java.lang.Float.valueOf(r7)
            com.mbridge.msdk.playercommon.exoplayer2.PlayerMessage r3 = r3.setPayload(r4)
            r3.send()
        L27:
            int r2 = r2 + 1
            goto L6
        L2a:
            return
    }

    @Override
    public void stop() {
            r1 = this;
            r0 = 0
            r1.stop(r0)
            return
    }

    @Override
    public void stop(boolean r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlayer r0 = r1.player
            r0.stop(r2)
            com.mbridge.msdk.playercommon.exoplayer2.source.MediaSource r2 = r1.mediaSource
            if (r2 == 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r0 = r1.analyticsCollector
            r2.removeEventListener(r0)
            r2 = 0
            r1.mediaSource = r2
            com.mbridge.msdk.playercommon.exoplayer2.analytics.AnalyticsCollector r2 = r1.analyticsCollector
            r2.resetForNewMediaSource()
        L16:
            java.util.List r2 = java.util.Collections.emptyList()
            r1.currentCues = r2
            return
    }
}
