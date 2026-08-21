package com.mbridge.msdk.playercommon.exoplayer2;

public class DefaultRenderersFactory implements com.mbridge.msdk.playercommon.exoplayer2.RenderersFactory {
    public static final long DEFAULT_ALLOWED_VIDEO_JOINING_TIME_MS = 5000;
    public static final int EXTENSION_RENDERER_MODE_OFF = 0;
    public static final int EXTENSION_RENDERER_MODE_ON = 1;
    public static final int EXTENSION_RENDERER_MODE_PREFER = 2;
    protected static final int MAX_DROPPED_VIDEO_FRAME_COUNT_TO_NOTIFY = 50;
    private static final java.lang.String TAG = "DefaultRenderersFactory";
    private final long allowedVideoJoiningTimeMs;
    private final android.content.Context context;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> drmSessionManager;
    private final int extensionRendererMode;

    public @interface ExtensionRendererMode {
    }

    public DefaultRenderersFactory(android.content.Context r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    public DefaultRenderersFactory(android.content.Context r7, int r8) {
            r6 = this;
            r2 = 0
            r4 = 5000(0x1388, double:2.4703E-320)
            r0 = r6
            r1 = r7
            r3 = r8
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public DefaultRenderersFactory(android.content.Context r7, int r8, long r9) {
            r6 = this;
            r2 = 0
            r0 = r6
            r1 = r7
            r3 = r8
            r4 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public DefaultRenderersFactory(android.content.Context r2, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DefaultRenderersFactory(android.content.Context r7, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r8, int r9) {
            r6 = this;
            r4 = 5000(0x1388, double:2.4703E-320)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.<init>(r1, r2, r3, r4)
            return
    }

    public DefaultRenderersFactory(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2, int r3, long r4) {
            r0 = this;
            r0.<init>()
            r0.context = r1
            r0.extensionRendererMode = r3
            r0.allowedVideoJoiningTimeMs = r4
            r0.drmSessionManager = r2
            return
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] buildAudioProcessors() {
            r1 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r0]
            return r0
    }

    protected void buildAudioRenderers(android.content.Context r14, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r15, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r16, android.os.Handler r17, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r18, int r19, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.Renderer> r20) {
            r13 = this;
            r0 = r19
            r10 = r20
            java.lang.String r11 = "DefaultRenderersFactory"
            com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r12 = new com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r3 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector.DEFAULT
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r8 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities.getCapabilities(r14)
            r5 = 0
            r1 = r12
            r2 = r14
            r4 = r15
            r6 = r17
            r7 = r18
            r9 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            r10.add(r12)
            if (r0 != 0) goto L21
            return
        L21:
            int r1 = r20.size()
            r2 = 2
            if (r0 != r2) goto L2a
            int r1 = r1 + (-1)
        L2a:
            r0 = 0
            r3 = 3
            r4 = 1
            java.lang.String r5 = "com.mbridge.msdk.playercommon.exoplayer2.ext.opus.LibopusAudioRenderer"
            java.lang.Class r5 = java.lang.Class.forName(r5)     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r6[r0] = r7     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.class
            r6[r4] = r7     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[].class
            r6[r2] = r7     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.reflect.Constructor r5 = r5.getConstructor(r6)     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Object[] r6 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            r6[r0] = r17     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            r6[r4] = r18     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            r6[r2] = r16     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            java.lang.Object r5 = r5.newInstance(r6)     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r5 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer) r5     // Catch: java.lang.Exception -> L60 java.lang.ClassNotFoundException -> L69
            int r6 = r1 + 1
            r10.add(r1, r5)     // Catch: java.lang.ClassNotFoundException -> L5e java.lang.Exception -> L60
            java.lang.String r1 = "Loaded LibopusAudioRenderer."
            android.util.Log.i(r11, r1)     // Catch: java.lang.ClassNotFoundException -> L5e java.lang.Exception -> L60
            goto L6a
        L5e:
            r1 = r6
            goto L69
        L60:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating Opus extension"
            r1.<init>(r2, r0)
            throw r1
        L69:
            r6 = r1
        L6a:
            java.lang.String r1 = "com.mbridge.msdk.playercommon.exoplayer2.ext.flac.LibflacAudioRenderer"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Class[] r5 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r5[r0] = r7     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.class
            r5[r4] = r7     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[].class
            r5[r2] = r7     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.reflect.Constructor r1 = r1.getConstructor(r5)     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            r5[r0] = r17     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            r5[r4] = r18     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            r5[r2] = r16     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            java.lang.Object r1 = r1.newInstance(r5)     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r1 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer) r1     // Catch: java.lang.Exception -> L9d java.lang.ClassNotFoundException -> La6
            int r5 = r6 + 1
            r10.add(r6, r1)     // Catch: java.lang.ClassNotFoundException -> L9b java.lang.Exception -> L9d
            java.lang.String r1 = "Loaded LibflacAudioRenderer."
            android.util.Log.i(r11, r1)     // Catch: java.lang.ClassNotFoundException -> L9b java.lang.Exception -> L9d
            goto La7
        L9b:
            r6 = r5
            goto La6
        L9d:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FLAC extension"
            r1.<init>(r2, r0)
            throw r1
        La6:
            r5 = r6
        La7:
            java.lang.String r1 = "com.mbridge.msdk.playercommon.exoplayer2.ext.ffmpeg.FfmpegAudioRenderer"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Class[] r6 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Class<android.os.Handler> r7 = android.os.Handler.class
            r6[r0] = r7     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.class
            r6[r4] = r7     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]> r7 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[].class
            r6[r2] = r7     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.reflect.Constructor r1 = r1.getConstructor(r6)     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            r3[r0] = r17     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            r3[r4] = r18     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            r3[r2] = r16     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.Object r0 = r1.newInstance(r3)     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer) r0     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            r10.add(r5, r0)     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            java.lang.String r0 = "Loaded FfmpegAudioRenderer."
            android.util.Log.i(r11, r0)     // Catch: java.lang.Exception -> Ld6 java.lang.ClassNotFoundException -> Ldf
            goto Ldf
        Ld6:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating FFmpeg extension"
            r1.<init>(r2, r0)
            throw r1
        Ldf:
            return
    }

    protected void buildMetadataRenderers(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r2, android.os.Looper r3, int r4, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.Renderer> r5) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataRenderer r1 = new com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataRenderer
            r1.<init>(r2, r3)
            r5.add(r1)
            return
    }

    protected void buildMiscellaneousRenderers(android.content.Context r1, android.os.Handler r2, int r3, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.Renderer> r4) {
            r0 = this;
            return
    }

    protected void buildTextRenderers(android.content.Context r1, com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r2, android.os.Looper r3, int r4, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.Renderer> r5) {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.text.TextRenderer r1 = new com.mbridge.msdk.playercommon.exoplayer2.text.TextRenderer
            r1.<init>(r2, r3)
            r5.add(r1)
            return
    }

    protected void buildVideoRenderers(android.content.Context r14, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r15, long r16, android.os.Handler r18, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r19, int r20, java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.Renderer> r21) {
            r13 = this;
            r0 = r20
            r1 = r21
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer r12 = new com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r4 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector.DEFAULT
            r8 = 0
            r11 = 50
            r2 = r12
            r3 = r14
            r5 = r16
            r7 = r15
            r9 = r18
            r10 = r19
            r2.<init>(r3, r4, r5, r7, r8, r9, r10, r11)
            r1.add(r12)
            if (r0 != 0) goto L1d
            return
        L1d:
            int r2 = r21.size()
            r3 = 2
            if (r0 != r3) goto L26
            int r2 = r2 + (-1)
        L26:
            java.lang.String r0 = "com.mbridge.msdk.playercommon.exoplayer2.ext.vp9.LibvpxVideoRenderer"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4 = 5
            java.lang.Class[] r5 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Class r6 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r7 = 0
            r5[r7] = r6     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Class r6 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r8 = 1
            r5[r8] = r6     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Class<android.os.Handler> r6 = android.os.Handler.class
            r5[r3] = r6     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener> r6 = com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener.class
            r9 = 3
            r5[r9] = r6     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Class r6 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r10 = 4
            r5[r10] = r6     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.reflect.Constructor r0 = r0.getConstructor(r5)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Boolean r5 = java.lang.Boolean.valueOf(r8)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4[r7] = r5     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Long r5 = java.lang.Long.valueOf(r16)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4[r8] = r5     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4[r3] = r18     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4[r9] = r19     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r3 = 50
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r4[r10] = r3     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.Object r0 = r0.newInstance(r4)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            com.mbridge.msdk.playercommon.exoplayer2.Renderer r0 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer) r0     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            r1.add(r2, r0)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            java.lang.String r0 = "DefaultRenderersFactory"
            java.lang.String r1 = "Loaded LibvpxVideoRenderer."
            android.util.Log.i(r0, r1)     // Catch: java.lang.Exception -> L76 java.lang.ClassNotFoundException -> L7f
            goto L7f
        L76:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating VP9 extension"
            r1.<init>(r2, r0)
            throw r1
        L7f:
            return
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.Renderer[] createRenderers(android.os.Handler r13, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r14, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r15, com.mbridge.msdk.playercommon.exoplayer2.text.TextOutput r16, com.mbridge.msdk.playercommon.exoplayer2.metadata.MetadataOutput r17, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r18) {
            r12 = this;
            r9 = r12
            if (r18 != 0) goto L7
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r0 = r9.drmSessionManager
            r10 = r0
            goto L9
        L7:
            r10 = r18
        L9:
            java.util.ArrayList r11 = new java.util.ArrayList
            r11.<init>()
            android.content.Context r1 = r9.context
            long r3 = r9.allowedVideoJoiningTimeMs
            int r7 = r9.extensionRendererMode
            r0 = r12
            r2 = r10
            r5 = r13
            r6 = r14
            r8 = r11
            r0.buildVideoRenderers(r1, r2, r3, r5, r6, r7, r8)
            android.content.Context r1 = r9.context
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r3 = r12.buildAudioProcessors()
            int r6 = r9.extensionRendererMode
            r4 = r13
            r5 = r15
            r7 = r11
            r0.buildAudioRenderers(r1, r2, r3, r4, r5, r6, r7)
            android.content.Context r1 = r9.context
            android.os.Looper r3 = r13.getLooper()
            int r4 = r9.extensionRendererMode
            r2 = r16
            r5 = r11
            r0.buildTextRenderers(r1, r2, r3, r4, r5)
            android.content.Context r1 = r9.context
            android.os.Looper r3 = r13.getLooper()
            int r4 = r9.extensionRendererMode
            r2 = r17
            r0.buildMetadataRenderers(r1, r2, r3, r4, r5)
            android.content.Context r0 = r9.context
            int r1 = r9.extensionRendererMode
            r2 = r13
            r12.buildMiscellaneousRenderers(r0, r13, r1, r11)
            int r0 = r11.size()
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.Renderer[r0]
            java.lang.Object[] r0 = r11.toArray(r0)
            com.mbridge.msdk.playercommon.exoplayer2.Renderer[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.Renderer[]) r0
            return r0
    }
}
