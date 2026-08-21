package com.mbridge.msdk.playercommon.exoplayer2.audio;

public class MediaCodecAudioRenderer extends com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer implements com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock {
    private boolean allowFirstBufferPositionDiscontinuity;
    private boolean allowPositionDiscontinuity;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink audioSink;
    private int channelCount;
    private int codecMaxInputSize;
    private boolean codecNeedsDiscardChannelsWorkaround;
    private final android.content.Context context;
    private long currentPositionUs;
    private int encoderDelay;
    private int encoderPadding;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.EventDispatcher eventDispatcher;
    private boolean passthroughEnabled;
    private android.media.MediaFormat passthroughMediaFormat;
    private int pcmEncoding;

    static class 1 {
    }

    private final class AudioSinkListener implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener {
        final com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer this$0;

        private AudioSinkListener(com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        AudioSinkListener(com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r1, com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAudioSessionId(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0 = r1.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer.access$100(r0)
                r0.audioSessionId(r2)
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0 = r1.this$0
                r0.onAudioSessionId(r2)
                return
        }

        @Override
        public final void onPositionDiscontinuity() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0 = r2.this$0
                r0.onAudioTrackPositionDiscontinuity()
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0 = r2.this$0
                r1 = 1
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer.access$202(r0, r1)
                return
        }

        @Override
        public final void onUnderrun(int r9, long r10, long r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer.access$100(r0)
                r2 = r9
                r3 = r10
                r5 = r12
                r1.audioTrackUnderrun(r2, r3, r5)
                com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r2 = r8.this$0
                r3 = r9
                r4 = r10
                r6 = r12
                r2.onAudioTrackUnderrun(r3, r4, r6)
                return
        }
    }

    public MediaCodecAudioRenderer(android.content.Context r3, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r4) {
            r2 = this;
            r0 = 0
            r1 = 0
            r2.<init>(r3, r4, r0, r1)
            return
    }

    public MediaCodecAudioRenderer(android.content.Context r8, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r9, android.os.Handler r10, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r11) {
            r7 = this;
            r3 = 0
            r4 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r5 = r10
            r6 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public MediaCodecAudioRenderer(android.content.Context r8, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r10, boolean r11) {
            r7 = this;
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    public MediaCodecAudioRenderer(android.content.Context r11, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r12, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r13, boolean r14, android.os.Handler r15, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r16) {
            r10 = this;
            r0 = 0
            r8 = r0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r8 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities) r8
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r9 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r0]
            r1 = r10
            r2 = r11
            r3 = r12
            r4 = r13
            r5 = r14
            r6 = r15
            r7 = r16
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9)
            return
    }

    public MediaCodecAudioRenderer(android.content.Context r9, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r10, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r11, boolean r12, android.os.Handler r13, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r14, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r15, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor... r16) {
            r8 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r7 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink
            r0 = r15
            r1 = r16
            r7.<init>(r15, r1)
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return
    }

    public MediaCodecAudioRenderer(android.content.Context r2, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4, boolean r5, android.os.Handler r6, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r7, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r8) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r3, r4, r5)
            android.content.Context r2 = r2.getApplicationContext()
            r1.context = r2
            r1.audioSink = r8
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r2 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher
            r2.<init>(r6, r7)
            r1.eventDispatcher = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer$AudioSinkListener r2 = new com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer$AudioSinkListener
            r3 = 0
            r2.<init>(r1, r3)
            r8.setListener(r2)
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.EventDispatcher access$100(com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0) {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r0.eventDispatcher
            return r0
    }

    static boolean access$202(com.mbridge.msdk.playercommon.exoplayer2.audio.MediaCodecAudioRenderer r0, boolean r1) {
            r0.allowPositionDiscontinuity = r1
            return r1
    }

    private static boolean areAdaptationCompatible(com.mbridge.msdk.playercommon.exoplayer2.Format r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            java.lang.String r0 = r2.sampleMimeType
            java.lang.String r1 = r3.sampleMimeType
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L2e
            int r0 = r2.channelCount
            int r1 = r3.channelCount
            if (r0 != r1) goto L2e
            int r0 = r2.sampleRate
            int r1 = r3.sampleRate
            if (r0 != r1) goto L2e
            int r0 = r2.encoderDelay
            if (r0 != 0) goto L2e
            int r0 = r2.encoderPadding
            if (r0 != 0) goto L2e
            int r0 = r3.encoderDelay
            if (r0 != 0) goto L2e
            int r0 = r3.encoderPadding
            if (r0 != 0) goto L2e
            boolean r2 = r2.initializationDataEquals(r3)
            if (r2 == 0) goto L2e
            r2 = 1
            goto L2f
        L2e:
            r2 = 0
        L2f:
            return r2
    }

    private static boolean codecNeedsDiscardChannelsWorkaround(java.lang.String r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 24
            if (r0 >= r1) goto L38
            java.lang.String r0 = "OMX.SEC.aac.dec"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L38
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r0 = "samsung"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L38
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "zeroflte"
            boolean r2 = r2.startsWith(r0)
            if (r2 != 0) goto L36
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "herolte"
            boolean r2 = r2.startsWith(r0)
            if (r2 != 0) goto L36
            java.lang.String r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "heroqlte"
            boolean r2 = r2.startsWith(r0)
            if (r2 == 0) goto L38
        L36:
            r2 = 1
            goto L39
        L38:
            r2 = 0
        L39:
            return r2
    }

    private int getCodecMaxInputSize(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 24
            if (r0 >= r1) goto L2c
            java.lang.String r3 = r3.name
            java.lang.String r0 = "OMX.google.raw.decoder"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L2c
            r3 = 1
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 != r1) goto L28
            android.content.Context r0 = r2.context
            android.content.pm.PackageManager r0 = r0.getPackageManager()
            if (r0 == 0) goto L28
            java.lang.String r1 = "android.software.leanback"
            boolean r0 = r0.hasSystemFeature(r1)
            if (r0 == 0) goto L28
            r3 = 0
        L28:
            if (r3 == 0) goto L2c
            r3 = -1
            return r3
        L2c:
            int r3 = r4.maxInputSize
            return r3
    }

    private void updateCurrentPosition() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r4.audioSink
            boolean r1 = r4.isEnded()
            long r0 = r0.getCurrentPositionUs(r1)
            r2 = -9223372036854775808
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 == 0) goto L20
            boolean r2 = r4.allowPositionDiscontinuity
            if (r2 == 0) goto L15
            goto L1b
        L15:
            long r2 = r4.currentPositionUs
            long r0 = java.lang.Math.max(r2, r0)
        L1b:
            r4.currentPositionUs = r0
            r0 = 0
            r4.allowPositionDiscontinuity = r0
        L20:
            return
    }

    protected boolean allowPassthrough(java.lang.String r2) {
            r1 = this;
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getEncoding(r2)
            if (r2 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r2 = r0.isEncodingSupported(r2)
            if (r2 == 0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    @Override
    protected int canKeepCodec(android.media.MediaCodec r1, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    protected void configureCodec(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3, android.media.MediaCodec r4, com.mbridge.msdk.playercommon.exoplayer2.Format r5, android.media.MediaCrypto r6) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r2.getStreamFormats()
            int r0 = r2.getCodecMaxInputSize(r3, r5, r0)
            r2.codecMaxInputSize = r0
            java.lang.String r0 = r3.name
            boolean r0 = codecNeedsDiscardChannelsWorkaround(r0)
            r2.codecNeedsDiscardChannelsWorkaround = r0
            boolean r0 = r3.passthrough
            r2.passthroughEnabled = r0
            java.lang.String r0 = r3.mimeType
            if (r0 != 0) goto L1d
            java.lang.String r3 = "audio/raw"
            goto L1f
        L1d:
            java.lang.String r3 = r3.mimeType
        L1f:
            int r0 = r2.codecMaxInputSize
            android.media.MediaFormat r3 = r2.getMediaFormat(r5, r3, r0)
            r0 = 0
            r1 = 0
            r4.configure(r3, r1, r6, r0)
            boolean r4 = r2.passthroughEnabled
            if (r4 == 0) goto L38
            r2.passthroughMediaFormat = r3
            java.lang.String r4 = r5.sampleMimeType
            java.lang.String r5 = "mime"
            r3.setString(r5, r4)
            goto L3a
        L38:
            r2.passthroughMediaFormat = r1
        L3a:
            return
    }

    protected int getCodecMaxInputSize(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2, com.mbridge.msdk.playercommon.exoplayer2.Format[] r3) {
            r0 = this;
            int r1 = r0.getCodecMaxInputSize(r1, r2)
            return r1
    }

    @Override
    protected com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getDecoderInfo(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, boolean r4) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r1 = this;
            java.lang.String r0 = r3.sampleMimeType
            boolean r0 = r1.allowPassthrough(r0)
            if (r0 == 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r2.getPassthroughDecoderInfo()
            if (r0 == 0) goto Lf
            return r0
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2 = super.getDecoderInfo(r2, r3, r4)
            return r2
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock getMediaClock() {
            r0 = this;
            return r0
    }

    protected android.media.MediaFormat getMediaFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r3, java.lang.String r4, int r5) {
            r2 = this;
            android.media.MediaFormat r0 = new android.media.MediaFormat
            r0.<init>()
            java.lang.String r1 = "mime"
            r0.setString(r1, r4)
            int r4 = r3.channelCount
            java.lang.String r1 = "channel-count"
            r0.setInteger(r1, r4)
            int r4 = r3.sampleRate
            java.lang.String r1 = "sample-rate"
            r0.setInteger(r1, r4)
            java.util.List<byte[]> r3 = r3.initializationData
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.setCsdBuffers(r0, r3)
            java.lang.String r3 = "max-input-size"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.maybeSetInteger(r0, r3, r5)
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r4 = 23
            if (r3 < r4) goto L2e
            r3 = 0
            java.lang.String r4 = "priority"
            r0.setInteger(r4, r3)
        L2e:
            return r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.getPlaybackParameters()
            return r0
    }

    @Override
    public long getPositionUs() {
            r2 = this;
            int r0 = r2.getState()
            r1 = 2
            if (r0 != r1) goto La
            r2.updateCurrentPosition()
        La:
            long r0 = r2.currentPositionUs
            return r0
    }

    @Override
    public void handleMessage(int r2, java.lang.Object r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 2
            if (r2 == r0) goto L12
            r0 = 3
            if (r2 == r0) goto La
            super.handleMessage(r2, r3)
            goto L1d
        La:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r3 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes) r3
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r2 = r1.audioSink
            r2.setAudioAttributes(r3)
            goto L1d
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r2 = r1.audioSink
            java.lang.Float r3 = (java.lang.Float) r3
            float r3 = r3.floatValue()
            r2.setVolume(r3)
        L1d:
            return
    }

    @Override
    public boolean isEnded() {
            r1 = this;
            boolean r0 = super.isEnded()
            if (r0 == 0) goto L10
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r0 = r0.isEnded()
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            return r0
    }

    @Override
    public boolean isReady() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r0 = r0.hasPendingData()
            if (r0 != 0) goto L11
            boolean r0 = super.isReady()
            if (r0 == 0) goto Lf
            goto L11
        Lf:
            r0 = 0
            goto L12
        L11:
            r0 = 1
        L12:
            return r0
    }

    protected void onAudioSessionId(int r1) {
            r0 = this;
            return
    }

    protected void onAudioTrackPositionDiscontinuity() {
            r0 = this;
            return
    }

    protected void onAudioTrackUnderrun(int r1, long r2, long r4) {
            r0 = this;
            return
    }

    @Override
    protected void onCodecInitialized(java.lang.String r7, long r8, long r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r6.eventDispatcher
            r1 = r7
            r2 = r8
            r4 = r10
            r0.decoderInitialized(r1, r2, r4)
            return
    }

    @Override
    protected void onDisabled() {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r3.audioSink     // Catch: java.lang.Throwable -> L23
            r0.release()     // Catch: java.lang.Throwable -> L23
            super.onDisabled()     // Catch: java.lang.Throwable -> L15
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r3.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r0.disabled(r1)
            return
        L15:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r1.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r1 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r3.decoderCounters
            r1.disabled(r2)
            throw r0
        L23:
            r0 = move-exception
            super.onDisabled()     // Catch: java.lang.Throwable -> L34
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r1.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r1 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r3.decoderCounters
            r1.disabled(r2)
            throw r0
        L34:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r1.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r1 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r3.decoderCounters
            r1.disabled(r2)
            throw r0
    }

    @Override
    protected void onEnabled(boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            super.onEnabled(r2)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r2 = r1.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r1.decoderCounters
            r2.enabled(r0)
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r2 = r1.getConfiguration()
            int r2 = r2.tunnelingAudioSessionId
            if (r2 == 0) goto L18
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            r0.enableTunnelingV21(r2)
            goto L1d
        L18:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r2 = r1.audioSink
            r2.disableTunneling()
        L1d:
            return
    }

    @Override
    protected void onInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            super.onInputFormatChanged(r3)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r2.eventDispatcher
            r0.inputFormatChanged(r3)
            java.lang.String r0 = r3.sampleMimeType
            java.lang.String r1 = "audio/raw"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L15
            int r0 = r3.pcmEncoding
            goto L16
        L15:
            r0 = 2
        L16:
            r2.pcmEncoding = r0
            int r0 = r3.channelCount
            r2.channelCount = r0
            int r0 = r3.encoderDelay
            r2.encoderDelay = r0
            int r3 = r3.encoderPadding
            r2.encoderPadding = r3
            return
    }

    @Override
    protected void onOutputFormatChanged(android.media.MediaCodec r9, android.media.MediaFormat r10) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r8 = this;
            android.media.MediaFormat r9 = r8.passthroughMediaFormat
            if (r9 == 0) goto L11
            java.lang.String r10 = "mime"
            java.lang.String r9 = r9.getString(r10)
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getEncoding(r9)
            android.media.MediaFormat r10 = r8.passthroughMediaFormat
            goto L13
        L11:
            int r9 = r8.pcmEncoding
        L13:
            r1 = r9
            java.lang.String r9 = "channel-count"
            int r2 = r10.getInteger(r9)
            java.lang.String r9 = "sample-rate"
            int r3 = r10.getInteger(r9)
            boolean r9 = r8.codecNeedsDiscardChannelsWorkaround
            if (r9 == 0) goto L37
            r9 = 6
            if (r2 != r9) goto L37
            int r10 = r8.channelCount
            if (r10 >= r9) goto L37
            int[] r9 = new int[r10]
            r10 = 0
        L2e:
            int r0 = r8.channelCount
            if (r10 >= r0) goto L38
            r9[r10] = r10
            int r10 = r10 + 1
            goto L2e
        L37:
            r9 = 0
        L38:
            r5 = r9
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r8.audioSink     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L44
            r4 = 0
            int r6 = r8.encoderDelay     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L44
            int r7 = r8.encoderPadding     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L44
            r0.configure(r1, r2, r3, r4, r5, r6, r7)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L44
            return
        L44:
            r9 = move-exception
            int r10 = r8.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r9 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r9, r10)
            throw r9
    }

    @Override
    protected void onPositionReset(long r1, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            super.onPositionReset(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r3 = r0.audioSink
            r3.reset()
            r0.currentPositionUs = r1
            r1 = 1
            r0.allowFirstBufferPositionDiscontinuity = r1
            r0.allowPositionDiscontinuity = r1
            return
    }

    @Override
    protected void onQueueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r5) {
            r4 = this;
            boolean r0 = r4.allowFirstBufferPositionDiscontinuity
            if (r0 == 0) goto L21
            boolean r0 = r5.isDecodeOnly()
            if (r0 != 0) goto L21
            long r0 = r5.timeUs
            long r2 = r4.currentPositionUs
            long r0 = r0 - r2
            long r0 = java.lang.Math.abs(r0)
            r2 = 500000(0x7a120, double:2.47033E-318)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L1e
            long r0 = r5.timeUs
            r4.currentPositionUs = r0
        L1e:
            r5 = 0
            r4.allowFirstBufferPositionDiscontinuity = r5
        L21:
            return
    }

    @Override
    protected void onStarted() {
            r1 = this;
            super.onStarted()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            r0.play()
            return
    }

    @Override
    protected void onStopped() {
            r1 = this;
            r1.updateCurrentPosition()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            r0.pause()
            super.onStopped()
            return
    }

    @Override
    protected boolean processOutputBuffer(long r1, long r3, android.media.MediaCodec r5, java.nio.ByteBuffer r6, int r7, int r8, long r9, boolean r11) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            boolean r1 = r0.passthroughEnabled
            r2 = 0
            r3 = 1
            if (r1 == 0) goto Le
            r1 = r8 & 2
            if (r1 == 0) goto Le
            r5.releaseOutputBuffer(r7, r2)
            return r3
        Le:
            if (r11 == 0) goto L20
            r5.releaseOutputBuffer(r7, r2)
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r0.decoderCounters
            int r2 = r1.skippedOutputBufferCount
            int r2 = r2 + r3
            r1.skippedOutputBufferCount = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r1 = r0.audioSink
            r1.handleDiscontinuity()
            return r3
        L20:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r1 = r0.audioSink     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            boolean r1 = r1.handleBuffer(r6, r9)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            if (r1 == 0) goto L33
            r5.releaseOutputBuffer(r7, r2)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r0.decoderCounters     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            int r2 = r1.renderedOutputBufferCount     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            int r2 = r2 + r3
            r1.renderedOutputBufferCount = r2     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L34 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L36
            return r3
        L33:
            return r2
        L34:
            r1 = move-exception
            goto L37
        L36:
            r1 = move-exception
        L37:
            int r2 = r0.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r1 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r1, r2)
            throw r1
    }

    @Override
    protected void renderToEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r2.audioSink     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L6
            r0.playToEndOfStream()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L6
            return
        L6:
            r0 = move-exception
            int r1 = r2.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r0.setPlaybackParameters(r2)
            return r2
    }

    @Override
    protected int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r12, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r11 = this;
            java.lang.String r0 = r14.sampleMimeType
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isAudio(r0)
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r3 = 21
            if (r1 < r3) goto L13
            r1 = 32
            goto L14
        L13:
            r1 = r2
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r4 = r14.drmInitData
            boolean r13 = supportsFormatDrm(r13, r4)
            r4 = 4
            if (r13 == 0) goto L2d
            boolean r5 = r11.allowPassthrough(r0)
            if (r5 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r5 = r12.getPassthroughDecoderInfo()
            if (r5 == 0) goto L2d
            r12 = r1 | 8
            r12 = r12 | r4
            return r12
        L2d:
            java.lang.String r5 = "audio/raw"
            boolean r5 = r5.equals(r0)
            r6 = 1
            if (r5 == 0) goto L40
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r5 = r11.audioSink
            int r7 = r14.pcmEncoding
            boolean r5 = r5.isEncodingSupported(r7)
            if (r5 == 0) goto L49
        L40:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r5 = r11.audioSink
            r7 = 2
            boolean r5 = r5.isEncodingSupported(r7)
            if (r5 != 0) goto L4a
        L49:
            return r6
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r5 = r14.drmInitData
            if (r5 == 0) goto L5e
            r8 = r2
            r9 = r8
        L50:
            int r10 = r5.schemeDataCount
            if (r8 >= r10) goto L5f
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r10 = r5.get(r8)
            boolean r10 = r10.requiresSecureDecryption
            r9 = r9 | r10
            int r8 = r8 + 1
            goto L50
        L5e:
            r9 = r2
        L5f:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r5 = r12.getDecoderInfo(r0, r9)
            if (r5 != 0) goto L6f
            if (r9 == 0) goto L6e
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r12 = r12.getDecoderInfo(r0, r2)
            if (r12 == 0) goto L6e
            r6 = r7
        L6e:
            return r6
        L6f:
            if (r13 != 0) goto L72
            return r7
        L72:
            int r12 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r12 < r3) goto L8f
            int r12 = r14.sampleRate
            r13 = -1
            if (r12 == r13) goto L83
            int r12 = r14.sampleRate
            boolean r12 = r5.isAudioSampleRateSupportedV21(r12)
            if (r12 == 0) goto L90
        L83:
            int r12 = r14.channelCount
            if (r12 == r13) goto L8f
            int r12 = r14.channelCount
            boolean r12 = r5.isAudioChannelCountSupportedV21(r12)
            if (r12 == 0) goto L90
        L8f:
            r2 = r6
        L90:
            if (r2 == 0) goto L93
            goto L94
        L93:
            r4 = 3
        L94:
            r12 = r1 | 8
            r12 = r12 | r4
            return r12
    }
}
