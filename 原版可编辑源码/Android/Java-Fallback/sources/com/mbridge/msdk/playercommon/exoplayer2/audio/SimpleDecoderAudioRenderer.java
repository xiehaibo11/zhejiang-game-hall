package com.mbridge.msdk.playercommon.exoplayer2.audio;

public abstract class SimpleDecoderAudioRenderer extends com.mbridge.msdk.playercommon.exoplayer2.BaseRenderer implements com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock {
    private static final int REINITIALIZATION_STATE_NONE = 0;
    private static final int REINITIALIZATION_STATE_SIGNAL_END_OF_STREAM = 1;
    private static final int REINITIALIZATION_STATE_WAIT_END_OF_STREAM = 2;
    private boolean allowFirstBufferPositionDiscontinuity;
    private boolean allowPositionDiscontinuity;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink audioSink;
    private boolean audioTrackNeedsConfigure;
    private long currentPositionUs;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> decoder;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters decoderCounters;
    private boolean decoderReceivedBuffers;
    private int decoderReinitializationState;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> drmSession;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> drmSessionManager;
    private int encoderDelay;
    private int encoderPadding;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.EventDispatcher eventDispatcher;
    private final com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer flagsOnlyBuffer;
    private final com.mbridge.msdk.playercommon.exoplayer2.FormatHolder formatHolder;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer inputBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.Format inputFormat;
    private boolean inputStreamEnded;
    private com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer outputBuffer;
    private boolean outputStreamEnded;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> pendingDrmSession;
    private final boolean playClearSamplesWithoutKeys;
    private boolean waitingForKeys;

    static class 1 {
    }

    private final class AudioSinkListener implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener {
        final com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer this$0;

        private AudioSinkListener(com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        AudioSinkListener(com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r1, com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onAudioSessionId(int r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0 = r1.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer.access$100(r0)
                r0.audioSessionId(r2)
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0 = r1.this$0
                r0.onAudioSessionId(r2)
                return
        }

        @Override
        public final void onPositionDiscontinuity() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0 = r2.this$0
                r0.onAudioTrackPositionDiscontinuity()
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0 = r2.this$0
                r1 = 1
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer.access$202(r0, r1)
                return
        }

        @Override
        public final void onUnderrun(int r9, long r10, long r12) {
                r8 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0 = r8.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer.access$100(r0)
                r2 = r9
                r3 = r10
                r5 = r12
                r1.audioTrackUnderrun(r2, r3, r5)
                com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r2 = r8.this$0
                r3 = r9
                r4 = r10
                r6 = r12
                r2.onAudioTrackUnderrun(r3, r4, r6)
                return
        }
    }

    private @interface ReinitializationState {
    }

    public SimpleDecoderAudioRenderer() {
            r2 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r0]
            r1 = 0
            r2.<init>(r1, r1, r0)
            return
    }

    public SimpleDecoderAudioRenderer(android.os.Handler r9, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r10, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r11) {
            r8 = this;
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r7 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r0]
            r5 = 0
            r6 = 0
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return
    }

    public SimpleDecoderAudioRenderer(android.os.Handler r7, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r8, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r9, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r10, boolean r11, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor... r12) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink
            r5.<init>(r9, r12)
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public SimpleDecoderAudioRenderer(android.os.Handler r2, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r3, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r4, boolean r5, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r6) {
            r1 = this;
            r0 = 1
            r1.<init>(r0)
            r1.drmSessionManager = r4
            r1.playClearSamplesWithoutKeys = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r4 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher
            r4.<init>(r2, r3)
            r1.eventDispatcher = r4
            r1.audioSink = r6
            com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer$AudioSinkListener r2 = new com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer$AudioSinkListener
            r3 = 0
            r2.<init>(r1, r3)
            r6.setListener(r2)
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r2 = new com.mbridge.msdk.playercommon.exoplayer2.FormatHolder
            r2.<init>()
            r1.formatHolder = r2
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2 = com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer.newFlagsOnlyInstance()
            r1.flagsOnlyBuffer = r2
            r2 = 0
            r1.decoderReinitializationState = r2
            r1.audioTrackNeedsConfigure = r0
            return
    }

    public SimpleDecoderAudioRenderer(android.os.Handler r8, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener r9, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor... r10) {
            r7 = this;
            r3 = 0
            r4 = 0
            r5 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r6 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener.EventDispatcher access$100(com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0) {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r0.eventDispatcher
            return r0
    }

    static boolean access$202(com.mbridge.msdk.playercommon.exoplayer2.audio.SimpleDecoderAudioRenderer r0, boolean r1) {
            r0.allowPositionDiscontinuity = r1
            return r1
    }

    private boolean drainOutputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r12 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = r12.outputBuffer
            r1 = 0
            if (r0 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r12.decoder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.OutputBuffer r0 = r0.dequeueOutputBuffer()
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = (com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer) r0
            r12.outputBuffer = r0
            if (r0 != 0) goto L12
            return r1
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r12.decoderCounters
            int r2 = r0.skippedOutputBufferCount
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r3 = r12.outputBuffer
            int r3 = r3.skippedOutputBufferCount
            int r2 = r2 + r3
            r0.skippedOutputBufferCount = r2
        L1d:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = r12.outputBuffer
            boolean r0 = r0.isEndOfStream()
            r2 = 0
            r3 = 1
            if (r0 == 0) goto L40
            int r0 = r12.decoderReinitializationState
            r4 = 2
            if (r0 != r4) goto L35
            r12.releaseDecoder()
            r12.maybeInitDecoder()
            r12.audioTrackNeedsConfigure = r3
            goto L3f
        L35:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = r12.outputBuffer
            r0.release()
            r12.outputBuffer = r2
            r12.processEndOfStream()
        L3f:
            return r1
        L40:
            boolean r0 = r12.audioTrackNeedsConfigure
            if (r0 == 0) goto L5b
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r12.getOutputFormat()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r4 = r12.audioSink
            int r5 = r0.pcmEncoding
            int r6 = r0.channelCount
            int r7 = r0.sampleRate
            r8 = 0
            r9 = 0
            int r10 = r12.encoderDelay
            int r11 = r12.encoderPadding
            r4.configure(r5, r6, r7, r8, r9, r10, r11)
            r12.audioTrackNeedsConfigure = r1
        L5b:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r12.audioSink
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r4 = r12.outputBuffer
            java.nio.ByteBuffer r4 = r4.data
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r5 = r12.outputBuffer
            long r5 = r5.timeUs
            boolean r0 = r0.handleBuffer(r4, r5)
            if (r0 == 0) goto L7a
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r12.decoderCounters
            int r1 = r0.renderedOutputBufferCount
            int r1 = r1 + r3
            r0.renderedOutputBufferCount = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = r12.outputBuffer
            r0.release()
            r12.outputBuffer = r2
            return r3
        L7a:
            return r1
    }

    private boolean feedInputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException, com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r5.decoder
            r1 = 0
            if (r0 == 0) goto L92
            int r2 = r5.decoderReinitializationState
            r3 = 2
            if (r2 == r3) goto L92
            boolean r2 = r5.inputStreamEnded
            if (r2 == 0) goto L10
            goto L92
        L10:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2 = r5.inputBuffer
            if (r2 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r0.dequeueInputBuffer()
            r5.inputBuffer = r0
            if (r0 != 0) goto L1d
            return r1
        L1d:
            int r0 = r5.decoderReinitializationState
            r2 = 0
            r4 = 1
            if (r0 != r4) goto L35
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.inputBuffer
            r4 = 4
            r0.setFlags(r4)
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r5.decoder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r4 = r5.inputBuffer
            r0.queueInputBuffer(r4)
            r5.inputBuffer = r2
            r5.decoderReinitializationState = r3
            return r1
        L35:
            boolean r0 = r5.waitingForKeys
            if (r0 == 0) goto L3b
            r0 = -4
            goto L43
        L3b:
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r0 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r5.inputBuffer
            int r0 = r5.readSource(r0, r3, r1)
        L43:
            r3 = -3
            if (r0 != r3) goto L47
            return r1
        L47:
            r3 = -5
            if (r0 != r3) goto L52
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r0 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r0.format
            r5.onInputFormatChanged(r0)
            return r4
        L52:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.inputBuffer
            boolean r0 = r0.isEndOfStream()
            if (r0 == 0) goto L66
            r5.inputStreamEnded = r4
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r5.decoder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r5.inputBuffer
            r0.queueInputBuffer(r3)
            r5.inputBuffer = r2
            return r1
        L66:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.inputBuffer
            boolean r0 = r0.isEncrypted()
            boolean r0 = r5.shouldWaitForKeys(r0)
            r5.waitingForKeys = r0
            if (r0 == 0) goto L75
            return r1
        L75:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.inputBuffer
            r0.flip()
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.inputBuffer
            r5.onQueueInputBuffer(r0)
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r5.decoder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r5.inputBuffer
            r0.queueInputBuffer(r1)
            r5.decoderReceivedBuffers = r4
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r5.decoderCounters
            int r1 = r0.inputBufferCount
            int r1 = r1 + r4
            r0.inputBufferCount = r1
            r5.inputBuffer = r2
            return r4
        L92:
            return r1
    }

    private void flushDecoder() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            r0 = 0
            r3.waitingForKeys = r0
            int r1 = r3.decoderReinitializationState
            if (r1 == 0) goto Le
            r3.releaseDecoder()
            r3.maybeInitDecoder()
            goto L21
        Le:
            r1 = 0
            r3.inputBuffer = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r2 = r3.outputBuffer
            if (r2 == 0) goto L1a
            r2.release()
            r3.outputBuffer = r1
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r1 = r3.decoder
            r1.flush()
            r3.decoderReceivedBuffers = r0
        L21:
            return
    }

    private void maybeInitDecoder() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r10 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r10.decoder
            if (r0 == 0) goto L5
            return
        L5:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r10.pendingDrmSession
            r10.drmSession = r0
            r1 = 0
            if (r0 == 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto r1 = r0.getMediaCrypto()
            if (r1 != 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r10.drmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = r0.getError()
            if (r0 == 0) goto L1b
            goto L1c
        L1b:
            return
        L1c:
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            java.lang.String r0 = "createAudioDecoder"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r10.inputFormat     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder r0 = r10.createDecoder(r0, r1)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            r10.decoder = r0     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            long r6 = android.os.SystemClock.elapsedRealtime()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r4 = r10.eventDispatcher     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r10.decoder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            java.lang.String r5 = r0.getName()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            long r8 = r6 - r2
            r4.decoderInitialized(r5, r6, r8)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r10.decoderCounters     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            int r1 = r0.decoderInitCount     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            int r1 = r1 + 1
            r0.decoderInitCount = r1     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L4a
            return
        L4a:
            r0 = move-exception
            int r1 = r10.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
    }

    private void onInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r4.inputFormat
            r4.inputFormat = r5
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r5.drmInitData
            r2 = 0
            if (r0 != 0) goto Lb
            r0 = r2
            goto Ld
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = r0.drmInitData
        Ld:
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r1, r0)
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r4.inputFormat
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = r0.drmInitData
            if (r0 == 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r4.drmSessionManager
            if (r0 == 0) goto L37
            android.os.Looper r2 = android.os.Looper.myLooper()
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r4.inputFormat
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r3.drmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession r0 = r0.acquireSession(r2, r3)
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSession
            if (r0 != r2) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSessionManager
            r2.releaseSession(r0)
            goto L49
        L37:
            java.lang.IllegalStateException r5 = new java.lang.IllegalStateException
            java.lang.String r0 = "Media requires a DrmSessionManager"
            r5.<init>(r0)
            int r0 = r4.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r5 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r5, r0)
            throw r5
        L47:
            r4.pendingDrmSession = r2
        L49:
            boolean r0 = r4.decoderReceivedBuffers
            if (r0 == 0) goto L50
            r4.decoderReinitializationState = r1
            goto L58
        L50:
            r4.releaseDecoder()
            r4.maybeInitDecoder()
            r4.audioTrackNeedsConfigure = r1
        L58:
            int r0 = r5.encoderDelay
            r4.encoderDelay = r0
            int r0 = r5.encoderPadding
            r4.encoderPadding = r0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            r0.inputFormatChanged(r5)
            return
    }

    private void onQueueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r5) {
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

    private void processEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            r0 = 1
            r2.outputStreamEnded = r0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r2.audioSink     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L9
            r0.playToEndOfStream()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L9
            return
        L9:
            r0 = move-exception
            int r1 = r2.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
    }

    private void releaseDecoder() {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r0 = r2.decoder
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2.inputBuffer = r1
            r2.outputBuffer = r1
            r0.release()
            r2.decoder = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r2.decoderCounters
            int r1 = r0.decoderReleaseCount
            int r1 = r1 + 1
            r0.decoderReleaseCount = r1
            r0 = 0
            r2.decoderReinitializationState = r0
            r2.decoderReceivedBuffers = r0
            return
    }

    private boolean shouldWaitForKeys(boolean r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r3.drmSession
            r1 = 0
            if (r0 == 0) goto L29
            if (r4 != 0) goto Lc
            boolean r4 = r3.playClearSamplesWithoutKeys
            if (r4 == 0) goto Lc
            goto L29
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r4 = r3.drmSession
            int r4 = r4.getState()
            r0 = 1
            if (r4 == r0) goto L1a
            r2 = 4
            if (r4 == r2) goto L19
            r1 = r0
        L19:
            return r1
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r4 = r3.drmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r4 = r4.getError()
            int r0 = r3.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r4 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r4, r0)
            throw r4
        L29:
            return r1
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

    protected abstract com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> createDecoder(com.mbridge.msdk.playercommon.exoplayer2.Format r1, com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto r2) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException;

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.util.MediaClock getMediaClock() {
            r0 = this;
            return r0
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.Format getOutputFormat() {
            r13 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r13.inputFormat
            int r6 = r0.channelCount
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r13.inputFormat
            int r7 = r0.sampleRate
            r1 = 0
            java.lang.String r2 = "audio/raw"
            r3 = 0
            r4 = -1
            r5 = -1
            r8 = 2
            r9 = 0
            r10 = 0
            r11 = 0
            r12 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = com.mbridge.msdk.playercommon.exoplayer2.Format.createAudioSampleFormat(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12)
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
            boolean r0 = r1.outputStreamEnded
            if (r0 == 0) goto Le
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r0 = r0.isEnded()
            if (r0 == 0) goto Le
            r0 = 1
            goto Lf
        Le:
            r0 = 0
        Lf:
            return r0
    }

    @Override
    public boolean isReady() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r0 = r0.hasPendingData()
            if (r0 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r1.inputFormat
            if (r0 == 0) goto L1b
            boolean r0 = r1.waitingForKeys
            if (r0 != 0) goto L1b
            boolean r0 = r1.isSourceReady()
            if (r0 != 0) goto L1d
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer r0 = r1.outputBuffer
            if (r0 == 0) goto L1b
            goto L1d
        L1b:
            r0 = 0
            goto L1e
        L1d:
            r0 = 1
        L1e:
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
    protected void onDisabled() {
            r4 = this;
            r0 = 0
            r4.inputFormat = r0
            r1 = 1
            r4.audioTrackNeedsConfigure = r1
            r1 = 0
            r4.waitingForKeys = r1
            r4.releaseDecoder()     // Catch: java.lang.Throwable -> L85
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r1 = r4.audioSink     // Catch: java.lang.Throwable -> L85
            r1.release()     // Catch: java.lang.Throwable -> L85
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r4.drmSession     // Catch: java.lang.Throwable -> L50
            if (r1 == 0) goto L1c
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L50
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> L50
            r1.releaseSession(r2)     // Catch: java.lang.Throwable -> L50
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L3e
            if (r1 == 0) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> L3e
            if (r1 == r2) goto L2d
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L3e
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L3e
            r1.releaseSession(r2)     // Catch: java.lang.Throwable -> L3e
        L2d:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r4.decoderCounters
            r0.disabled(r1)
            return
        L3e:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        L50:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L73
            if (r2 == 0) goto L62
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> L73
            if (r2 == r3) goto L62
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L73
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L73
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> L73
        L62:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        L73:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        L85:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> Lc5
            if (r2 == 0) goto L91
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> Lc5
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> Lc5
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> Lc5
        L91:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Lb3
            if (r2 == 0) goto La2
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Lb3
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> Lb3
            if (r2 == r3) goto La2
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> Lb3
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Lb3
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> Lb3
        La2:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        Lb3:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        Lc5:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Le8
            if (r2 == 0) goto Ld7
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> Le8
            if (r2 == r3) goto Ld7
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> Le8
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> Le8
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> Le8
        Ld7:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
        Le8:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r4.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r4.decoderCounters
            r0.disabled(r2)
            throw r1
    }

    @Override
    protected void onEnabled(boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters
            r2.<init>()
            r1.decoderCounters = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioRendererEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.enabled(r2)
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r2 = r1.getConfiguration()
            int r2 = r2.tunnelingAudioSessionId
            if (r2 == 0) goto L1a
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            r0.enableTunnelingV21(r2)
            goto L1f
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r2 = r1.audioSink
            r2.disableTunneling()
        L1f:
            return
    }

    @Override
    protected void onPositionReset(long r1, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r3 = r0.audioSink
            r3.reset()
            r0.currentPositionUs = r1
            r1 = 1
            r0.allowFirstBufferPositionDiscontinuity = r1
            r0.allowPositionDiscontinuity = r1
            r1 = 0
            r0.inputStreamEnded = r1
            r0.outputStreamEnded = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r1 = r0.decoder
            if (r1 == 0) goto L18
            r0.flushDecoder()
        L18:
            return
    }

    @Override
    protected void onStarted() {
            r1 = this;
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
            return
    }

    @Override
    public void render(long r1, long r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            boolean r1 = r0.outputStreamEnded
            if (r1 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r1 = r0.audioSink     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> La
            r1.playToEndOfStream()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> La
            return
        La:
            r1 = move-exception
            int r2 = r0.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r1 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r1, r2)
            throw r1
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r0.inputFormat
            if (r1 != 0) goto L43
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r0.flagsOnlyBuffer
            r1.clear()
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r1 = r0.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2 = r0.flagsOnlyBuffer
            r3 = 1
            int r1 = r0.readSource(r1, r2, r3)
            r2 = -5
            if (r1 != r2) goto L31
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r1 = r0.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r1.format
            r0.onInputFormatChanged(r1)
            goto L43
        L31:
            r2 = -4
            if (r1 != r2) goto L42
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1 = r0.flagsOnlyBuffer
            boolean r1 = r1.isEndOfStream()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            r0.inputStreamEnded = r3
            r0.processEndOfStream()
        L42:
            return
        L43:
            r0.maybeInitDecoder()
            com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleDecoder<com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.decoder.SimpleOutputBuffer, ? extends com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException> r1 = r0.decoder
            if (r1 == 0) goto L76
            java.lang.String r1 = "drainAndFeed"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r1)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L66 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L68 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L6a com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L6c
        L4f:
            boolean r1 = r0.drainOutputBuffer()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L66 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L68 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L6a com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L6c
            if (r1 == 0) goto L56
            goto L4f
        L56:
            boolean r1 = r0.feedInputBuffer()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L66 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L68 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L6a com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L6c
            if (r1 == 0) goto L5d
            goto L56
        L5d:
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException -> L66 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException -> L68 com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException -> L6a com.mbridge.msdk.playercommon.exoplayer2.audio.AudioDecoderException -> L6c
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r0.decoderCounters
            r1.ensureUpdated()
            goto L76
        L66:
            r1 = move-exception
            goto L6d
        L68:
            r1 = move-exception
            goto L6d
        L6a:
            r1 = move-exception
            goto L6d
        L6c:
            r1 = move-exception
        L6d:
            int r2 = r0.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r1 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r1, r2)
            throw r1
        L76:
            return
    }

    @Override
    public com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r0.setPlaybackParameters(r2)
            return r2
    }

    @Override
    public final int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r0 = r2.drmSessionManager
            int r3 = r2.supportsFormatInternal(r0, r3)
            r0 = 2
            if (r3 > r0) goto La
            return r3
        La:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto L13
            r0 = 32
            goto L14
        L13:
            r0 = 0
        L14:
            r0 = r0 | 8
            r3 = r3 | r0
            return r3
    }

    protected abstract int supportsFormatInternal(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto> r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2);

    protected final boolean supportsOutputEncoding(int r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink r0 = r1.audioSink
            boolean r2 = r0.isEncodingSupported(r2)
            return r2
    }
}
