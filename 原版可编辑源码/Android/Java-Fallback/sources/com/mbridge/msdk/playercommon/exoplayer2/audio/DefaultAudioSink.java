package com.mbridge.msdk.playercommon.exoplayer2.audio;

public final class DefaultAudioSink implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink {
    private static final int BUFFER_MULTIPLICATION_FACTOR = 4;
    private static final int ERROR_BAD_VALUE = -2;
    private static final long MAX_BUFFER_DURATION_US = 750000;
    private static final long MIN_BUFFER_DURATION_US = 250000;
    private static final int MODE_STATIC = 0;
    private static final int MODE_STREAM = 1;
    private static final long PASSTHROUGH_BUFFER_DURATION_US = 250000;
    private static final int START_IN_SYNC = 1;
    private static final int START_NEED_SYNC = 2;
    private static final int START_NOT_SET = 0;
    private static final int STATE_INITIALIZED = 1;
    private static final java.lang.String TAG = "AudioTrack";
    private static final int WRITE_NON_BLOCKING = 1;
    public static boolean enablePreV21AudioSessionWorkaround;
    public static boolean failOnSpuriousAudioTimestamp;
    private com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] activeAudioProcessors;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters afterDrainPlaybackParameters;
    private com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes audioAttributes;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities audioCapabilities;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.AudioProcessorChain audioProcessorChain;
    private int audioSessionId;
    private android.media.AudioTrack audioTrack;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker audioTrackPositionTracker;
    private java.nio.ByteBuffer avSyncHeader;
    private int bufferSize;
    private int bytesUntilNextAvSync;
    private boolean canApplyPlaybackParameters;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor channelMappingAudioProcessor;
    private int drainingAudioProcessorIndex;
    private final boolean enableConvertHighResIntPcmToFloat;
    private int framesPerEncodedSample;
    private boolean handledEndOfStream;
    private java.nio.ByteBuffer inputBuffer;
    private int inputSampleRate;
    private boolean isInputPcm;
    private android.media.AudioTrack keepSessionIdAudioTrack;
    private long lastFeedElapsedRealtimeMs;
    private com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener listener;
    private java.nio.ByteBuffer outputBuffer;
    private java.nio.ByteBuffer[] outputBuffers;
    private int outputChannelConfig;
    private int outputEncoding;
    private int outputPcmFrameSize;
    private int outputSampleRate;
    private int pcmFrameSize;
    private com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters playbackParameters;
    private final java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint> playbackParametersCheckpoints;
    private long playbackParametersOffsetUs;
    private long playbackParametersPositionUs;
    private boolean playing;
    private byte[] preV21OutputBuffer;
    private int preV21OutputBufferOffset;
    private boolean processingEnabled;
    private final android.os.ConditionVariable releasingConditionVariable;
    private boolean shouldConvertHighResIntPcmToFloat;
    private int startMediaTimeState;
    private long startMediaTimeUs;
    private long submittedEncodedFrames;
    private long submittedPcmBytes;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] toFloatPcmAvailableAudioProcessors;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] toIntPcmAvailableAudioProcessors;
    private final com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor trimmingAudioProcessor;
    private boolean tunneling;
    private float volume;
    private long writtenEncodedFrames;
    private long writtenPcmBytes;



    public interface AudioProcessorChain {
        com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters applyPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1);

        com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] getAudioProcessors();

        long getMediaDuration(long r1);

        long getSkippedOutputFrameCount();
    }

    public static class DefaultAudioProcessorChain implements com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.AudioProcessorChain {
        private final com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] audioProcessors;
        private final com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor silenceSkippingAudioProcessor;
        private final com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor sonicAudioProcessor;

        public DefaultAudioProcessorChain(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor... r5) {
                r4 = this;
                r4.<init>()
                int r0 = r5.length
                int r0 = r0 + 2
                java.lang.Object[] r0 = java.util.Arrays.copyOf(r5, r0)
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]) r0
                r4.audioProcessors = r0
                com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor
                r0.<init>()
                r4.silenceSkippingAudioProcessor = r0
                com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor
                r0.<init>()
                r4.sonicAudioProcessor = r0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r1 = r4.audioProcessors
                int r2 = r5.length
                com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor r3 = r4.silenceSkippingAudioProcessor
                r1[r2] = r3
                int r5 = r5.length
                int r5 = r5 + 1
                r1[r5] = r0
                return
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters applyPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r5) {
                r4 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor r0 = r4.silenceSkippingAudioProcessor
                boolean r1 = r5.skipSilence
                r0.setEnabled(r1)
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = new com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters
                com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor r1 = r4.sonicAudioProcessor
                float r2 = r5.speed
                float r1 = r1.setSpeed(r2)
                com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor r2 = r4.sonicAudioProcessor
                float r3 = r5.pitch
                float r2 = r2.setPitch(r3)
                boolean r5 = r5.skipSilence
                r0.<init>(r1, r2, r5)
                return r0
        }

        @Override
        public com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] getAudioProcessors() {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r1.audioProcessors
                return r0
        }

        @Override
        public long getMediaDuration(long r2) {
                r1 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SonicAudioProcessor r0 = r1.sonicAudioProcessor
                long r2 = r0.scaleDurationForSpeedup(r2)
                return r2
        }

        @Override
        public long getSkippedOutputFrameCount() {
                r2 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.SilenceSkippingAudioProcessor r0 = r2.silenceSkippingAudioProcessor
                long r0 = r0.getSkippedFrames()
                return r0
        }
    }

    public static final class InvalidAudioTrackTimestampException extends java.lang.RuntimeException {
        private InvalidAudioTrackTimestampException(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        InvalidAudioTrackTimestampException(java.lang.String r1, com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private static final class PlaybackParametersCheckpoint {
        private final long mediaTimeUs;
        private final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters playbackParameters;
        private final long positionUs;

        private PlaybackParametersCheckpoint(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1, long r2, long r4) {
                r0 = this;
                r0.<init>()
                r0.playbackParameters = r1
                r0.mediaTimeUs = r2
                r0.positionUs = r4
                return
        }

        PlaybackParametersCheckpoint(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1, long r2, long r4, com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.1 r6) {
                r0 = this;
                r0.<init>(r1, r2, r4)
                return
        }

        static com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters access$200(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint r0) {
                com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.playbackParameters
                return r0
        }

        static long access$400(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint r2) {
                long r0 = r2.positionUs
                return r0
        }

        static long access$500(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint r2) {
                long r0 = r2.mediaTimeUs
                return r0
        }
    }

    private final class PositionTrackerListener implements com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker.Listener {
        final com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink this$0;

        private PositionTrackerListener(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r1) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                return
        }

        PositionTrackerListener(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r1, com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onInvalidLatency(long r3) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Ignoring impossibly large audio latency: "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                java.lang.String r4 = "AudioTrack"
                android.util.Log.w(r4, r3)
                return
        }

        @Override
        public final void onPositionFramesMismatch(long r3, long r5, long r7, long r9) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Spurious audio timestamp (frame position mismatch): "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ", "
                r0.append(r3)
                r0.append(r5)
                r0.append(r3)
                r0.append(r7)
                r0.append(r3)
                r0.append(r9)
                r0.append(r3)
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r4 = r2.this$0
                long r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$600(r4)
                r0.append(r4)
                r0.append(r3)
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r3 = r2.this$0
                long r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$700(r3)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                boolean r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.failOnSpuriousAudioTimestamp
                if (r4 != 0) goto L47
                java.lang.String r4 = "AudioTrack"
                android.util.Log.w(r4, r3)
                return
            L47:
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$InvalidAudioTrackTimestampException r4 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$InvalidAudioTrackTimestampException
                r5 = 0
                r4.<init>(r3, r5)
                throw r4
        }

        @Override
        public final void onSystemTimeUsMismatch(long r3, long r5, long r7, long r9) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Spurious audio timestamp (system clock mismatch): "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r3 = ", "
                r0.append(r3)
                r0.append(r5)
                r0.append(r3)
                r0.append(r7)
                r0.append(r3)
                r0.append(r9)
                r0.append(r3)
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r4 = r2.this$0
                long r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$600(r4)
                r0.append(r4)
                r0.append(r3)
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r3 = r2.this$0
                long r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$700(r3)
                r0.append(r3)
                java.lang.String r3 = r0.toString()
                boolean r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.failOnSpuriousAudioTimestamp
                if (r4 != 0) goto L47
                java.lang.String r4 = "AudioTrack"
                android.util.Log.w(r4, r3)
                return
            L47:
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$InvalidAudioTrackTimestampException r4 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$InvalidAudioTrackTimestampException
                r5 = 0
                r4.<init>(r3, r5)
                throw r4
        }

        @Override
        public final void onUnderrun(int r11, long r12) {
                r10 = this;
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r0 = r10.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$Listener r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$900(r0)
                if (r0 == 0) goto L1f
                long r0 = android.os.SystemClock.elapsedRealtime()
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r2 = r10.this$0
                long r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$1000(r2)
                long r8 = r0 - r2
                com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r0 = r10.this$0
                com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$Listener r4 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.access$900(r0)
                r5 = r11
                r6 = r12
                r4.onUnderrun(r5, r6, r8)
            L1f:
                return
        }
    }

    private @interface StartMediaTimeState {
    }

    static {
            return
    }

    public DefaultAudioSink(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r5, com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.AudioProcessorChain r6, boolean r7) {
            r4 = this;
            r4.<init>()
            r4.audioCapabilities = r5
            java.lang.Object r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r6)
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r5 = (com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.AudioProcessorChain) r5
            r4.audioProcessorChain = r5
            r4.enableConvertHighResIntPcmToFloat = r7
            android.os.ConditionVariable r5 = new android.os.ConditionVariable
            r7 = 1
            r5.<init>(r7)
            r4.releasingConditionVariable = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PositionTrackerListener r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PositionTrackerListener
            r1 = 0
            r0.<init>(r4, r1)
            r5.<init>(r0)
            r4.audioTrackPositionTracker = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor
            r5.<init>()
            r4.channelMappingAudioProcessor = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor
            r5.<init>()
            r4.trimmingAudioProcessor = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r0 = 3
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r0]
            com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.ResamplingAudioProcessor
            r1.<init>()
            r2 = 0
            r0[r2] = r1
            com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor r1 = r4.channelMappingAudioProcessor
            r0[r7] = r1
            com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor r1 = r4.trimmingAudioProcessor
            r3 = 2
            r0[r3] = r1
            java.util.Collections.addAll(r5, r0)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r6 = r6.getAudioProcessors()
            java.util.Collections.addAll(r5, r6)
            int r6 = r5.size()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r6 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r6]
            java.lang.Object[] r5 = r5.toArray(r6)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r5 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]) r5
            r4.toIntPcmAvailableAudioProcessors = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r7]
            com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor r6 = new com.mbridge.msdk.playercommon.exoplayer2.audio.FloatResamplingAudioProcessor
            r6.<init>()
            r5[r2] = r6
            r4.toFloatPcmAvailableAudioProcessors = r5
            r5 = 1065353216(0x3f800000, float:1.0)
            r4.volume = r5
            r4.startMediaTimeState = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r5 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes.DEFAULT
            r4.audioAttributes = r5
            r4.audioSessionId = r2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r5 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
            r4.playbackParameters = r5
            r5 = -1
            r4.drainingAudioProcessorIndex = r5
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r5 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r2]
            r4.activeAudioProcessors = r5
            java.nio.ByteBuffer[] r5 = new java.nio.ByteBuffer[r2]
            r4.outputBuffers = r5
            java.util.ArrayDeque r5 = new java.util.ArrayDeque
            r5.<init>()
            r4.playbackParametersCheckpoints = r5
            return
    }

    public DefaultAudioSink(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r2, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public DefaultAudioSink(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r2, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r3, boolean r4) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$DefaultAudioProcessorChain r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$DefaultAudioProcessorChain
            r0.<init>(r3)
            r1.<init>(r2, r0, r4)
            return
    }

    static long access$1000(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r2) {
            long r0 = r2.lastFeedElapsedRealtimeMs
            return r0
    }

    static android.os.ConditionVariable access$300(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r0) {
            android.os.ConditionVariable r0 = r0.releasingConditionVariable
            return r0
    }

    static long access$600(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r2) {
            long r0 = r2.getSubmittedFrames()
            return r0
    }

    static long access$700(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r2) {
            long r0 = r2.getWrittenFrames()
            return r0
    }

    static com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener access$900(com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink r0) {
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$Listener r0 = r0.listener
            return r0
    }

    private long applySkipping(long r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r0 = r2.audioProcessorChain
            long r0 = r0.getSkippedOutputFrameCount()
            long r0 = r2.framesToDurationUs(r0)
            long r3 = r3 + r0
            return r3
    }

    private long applySpeedup(long r6) {
            r5 = this;
            r0 = 0
        L1:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r1 = r5.playbackParametersCheckpoints
            boolean r1 = r1.isEmpty()
            if (r1 != 0) goto L22
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r1 = r5.playbackParametersCheckpoints
            java.lang.Object r1 = r1.getFirst()
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint r1 = (com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint) r1
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$400(r1)
            int r1 = (r6 > r1 ? 1 : (r6 == r1 ? 0 : -1))
            if (r1 < 0) goto L22
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r0 = r5.playbackParametersCheckpoints
            java.lang.Object r0 = r0.remove()
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint r0 = (com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint) r0
            goto L1
        L22:
            if (r0 == 0) goto L39
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$200(r0)
            r5.playbackParameters = r1
            long r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$400(r0)
            r5.playbackParametersPositionUs = r1
            long r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$500(r0)
            long r2 = r5.startMediaTimeUs
            long r0 = r0 - r2
            r5.playbackParametersOffsetUs = r0
        L39:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r5.playbackParameters
            float r0 = r0.speed
            r1 = 1065353216(0x3f800000, float:1.0)
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 != 0) goto L4a
            long r0 = r5.playbackParametersOffsetUs
            long r6 = r6 + r0
            long r0 = r5.playbackParametersPositionUs
            long r6 = r6 - r0
            return r6
        L4a:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r0 = r5.playbackParametersCheckpoints
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L5f
            long r0 = r5.playbackParametersOffsetUs
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r2 = r5.audioProcessorChain
            long r3 = r5.playbackParametersPositionUs
            long r6 = r6 - r3
            long r6 = r2.getMediaDuration(r6)
        L5d:
            long r0 = r0 + r6
            return r0
        L5f:
            long r0 = r5.playbackParametersOffsetUs
            long r2 = r5.playbackParametersPositionUs
            long r6 = r6 - r2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r5.playbackParameters
            float r2 = r2.speed
            long r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getMediaDurationForPlayoutDuration(r6, r2)
            goto L5d
    }

    private android.media.AudioTrack createAudioTrackV21() {
            r7 = this;
            boolean r0 = r7.tunneling
            if (r0 == 0) goto L1e
            android.media.AudioAttributes$Builder r0 = new android.media.AudioAttributes$Builder
            r0.<init>()
            r1 = 3
            android.media.AudioAttributes$Builder r0 = r0.setContentType(r1)
            r1 = 16
            android.media.AudioAttributes$Builder r0 = r0.setFlags(r1)
            r1 = 1
            android.media.AudioAttributes$Builder r0 = r0.setUsage(r1)
            android.media.AudioAttributes r0 = r0.build()
            goto L24
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r7.audioAttributes
            android.media.AudioAttributes r0 = r0.getAudioAttributesV21()
        L24:
            r2 = r0
            android.media.AudioFormat$Builder r0 = new android.media.AudioFormat$Builder
            r0.<init>()
            int r1 = r7.outputChannelConfig
            android.media.AudioFormat$Builder r0 = r0.setChannelMask(r1)
            int r1 = r7.outputEncoding
            android.media.AudioFormat$Builder r0 = r0.setEncoding(r1)
            int r1 = r7.outputSampleRate
            android.media.AudioFormat$Builder r0 = r0.setSampleRate(r1)
            android.media.AudioFormat r3 = r0.build()
            int r0 = r7.audioSessionId
            if (r0 == 0) goto L45
            goto L46
        L45:
            r0 = 0
        L46:
            r6 = r0
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r4 = r7.bufferSize
            r5 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
    }

    private boolean drainAudioProcessorsToEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r9 = this;
            int r0 = r9.drainingAudioProcessorIndex
            r1 = -1
            r2 = 1
            r3 = 0
            if (r0 != r1) goto L14
            boolean r0 = r9.processingEnabled
            if (r0 == 0) goto Ld
            r0 = r3
            goto L10
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r9.activeAudioProcessors
            int r0 = r0.length
        L10:
            r9.drainingAudioProcessorIndex = r0
        L12:
            r0 = r2
            goto L15
        L14:
            r0 = r3
        L15:
            int r4 = r9.drainingAudioProcessorIndex
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r5 = r9.activeAudioProcessors
            int r6 = r5.length
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r4 >= r6) goto L38
            r4 = r5[r4]
            if (r0 == 0) goto L28
            r4.queueEndOfStream()
        L28:
            r9.processBuffers(r7)
            boolean r0 = r4.isEnded()
            if (r0 != 0) goto L32
            return r3
        L32:
            int r0 = r9.drainingAudioProcessorIndex
            int r0 = r0 + r2
            r9.drainingAudioProcessorIndex = r0
            goto L12
        L38:
            java.nio.ByteBuffer r0 = r9.outputBuffer
            if (r0 == 0) goto L44
            r9.writeBuffer(r0, r7)
            java.nio.ByteBuffer r0 = r9.outputBuffer
            if (r0 == 0) goto L44
            return r3
        L44:
            r9.drainingAudioProcessorIndex = r1
            return r2
    }

    private long durationUsToFrames(long r3) {
            r2 = this;
            int r0 = r2.outputSampleRate
            long r0 = (long) r0
            long r3 = r3 * r0
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 / r0
            return r3
    }

    private void flushAudioProcessors() {
            r3 = this;
            r0 = 0
        L1:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r1 = r3.activeAudioProcessors
            int r2 = r1.length
            if (r0 >= r2) goto L16
            r1 = r1[r0]
            r1.flush()
            java.nio.ByteBuffer[] r2 = r3.outputBuffers
            java.nio.ByteBuffer r1 = r1.getOutput()
            r2[r0] = r1
            int r0 = r0 + 1
            goto L1
        L16:
            return
    }

    private long framesToDurationUs(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.outputSampleRate
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    private com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] getAvailableAudioProcessors() {
            r1 = this;
            boolean r0 = r1.shouldConvertHighResIntPcmToFloat
            if (r0 == 0) goto L7
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r1.toFloatPcmAvailableAudioProcessors
            goto L9
        L7:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r1.toIntPcmAvailableAudioProcessors
        L9:
            return r0
    }

    private static int getFramesPerEncodedSample(int r2, java.nio.ByteBuffer r3) {
            r0 = 7
            if (r2 == r0) goto L43
            r0 = 8
            if (r2 != r0) goto L8
            goto L43
        L8:
            r0 = 5
            if (r2 != r0) goto L10
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.getAc3SyncframeAudioSampleCount()
            return r2
        L10:
            r0 = 6
            if (r2 != r0) goto L18
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseEAc3SyncframeAudioSampleCount(r3)
            return r2
        L18:
            r0 = 14
            if (r2 != r0) goto L2c
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.findTrueHdSyncframeOffset(r3)
            r0 = -1
            if (r2 != r0) goto L25
            r2 = 0
            goto L2b
        L25:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.Ac3Util.parseTrueHdSyncframeAudioSampleCount(r3, r2)
            int r2 = r2 * 16
        L2b:
            return r2
        L2c:
            java.lang.IllegalStateException r3 = new java.lang.IllegalStateException
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Unexpected audio encoding: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            r3.<init>(r2)
            throw r3
        L43:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.DtsUtil.parseDtsAudioSampleCount(r3)
            return r2
    }

    private long getSubmittedFrames() {
            r4 = this;
            boolean r0 = r4.isInputPcm
            if (r0 == 0) goto Lb
            long r0 = r4.submittedPcmBytes
            int r2 = r4.pcmFrameSize
            long r2 = (long) r2
            long r0 = r0 / r2
            goto Ld
        Lb:
            long r0 = r4.submittedEncodedFrames
        Ld:
            return r0
    }

    private long getWrittenFrames() {
            r4 = this;
            boolean r0 = r4.isInputPcm
            if (r0 == 0) goto Lb
            long r0 = r4.writtenPcmBytes
            int r2 = r4.outputPcmFrameSize
            long r2 = (long) r2
            long r0 = r0 / r2
            goto Ld
        Lb:
            long r0 = r4.writtenEncodedFrames
        Ld:
            return r0
    }

    private void initialize() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException {
            r5 = this;
            android.os.ConditionVariable r0 = r5.releasingConditionVariable
            r0.block()
            android.media.AudioTrack r0 = r5.initializeAudioTrack()
            r5.audioTrack = r0
            int r0 = r0.getAudioSessionId()
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.enablePreV21AudioSessionWorkaround
            if (r1 == 0) goto L30
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 21
            if (r1 >= r2) goto L30
            android.media.AudioTrack r1 = r5.keepSessionIdAudioTrack
            if (r1 == 0) goto L26
            int r1 = r1.getAudioSessionId()
            if (r0 == r1) goto L26
            r5.releaseKeepSessionIdAudioTrack()
        L26:
            android.media.AudioTrack r1 = r5.keepSessionIdAudioTrack
            if (r1 != 0) goto L30
            android.media.AudioTrack r1 = r5.initializeKeepSessionIdAudioTrack(r0)
            r5.keepSessionIdAudioTrack = r1
        L30:
            int r1 = r5.audioSessionId
            if (r1 == r0) goto L3d
            r5.audioSessionId = r0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$Listener r1 = r5.listener
            if (r1 == 0) goto L3d
            r1.onAudioSessionId(r0)
        L3d:
            boolean r0 = r5.canApplyPlaybackParameters
            if (r0 == 0) goto L4a
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r0 = r5.audioProcessorChain
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r1 = r5.playbackParameters
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r0.applyPlaybackParameters(r1)
            goto L4c
        L4a:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
        L4c:
            r5.playbackParameters = r0
            r5.setupAudioProcessors()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r5.audioTrackPositionTracker
            android.media.AudioTrack r1 = r5.audioTrack
            int r2 = r5.outputEncoding
            int r3 = r5.outputPcmFrameSize
            int r4 = r5.bufferSize
            r0.setAudioTrack(r1, r2, r3, r4)
            r5.setVolumeInternal()
            return
    }

    private android.media.AudioTrack initializeAudioTrack() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException {
            r9 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb
            android.media.AudioTrack r0 = r9.createAudioTrackV21()
            goto L38
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r9.audioAttributes
            int r0 = r0.usage
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getStreamTypeForAudioUsage(r0)
            int r0 = r9.audioSessionId
            if (r0 != 0) goto L27
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r3 = r9.outputSampleRate
            int r4 = r9.outputChannelConfig
            int r5 = r9.outputEncoding
            int r6 = r9.bufferSize
            r7 = 1
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            goto L38
        L27:
            android.media.AudioTrack r0 = new android.media.AudioTrack
            int r3 = r9.outputSampleRate
            int r4 = r9.outputChannelConfig
            int r5 = r9.outputEncoding
            int r6 = r9.bufferSize
            r7 = 1
            int r8 = r9.audioSessionId
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7, r8)
        L38:
            int r1 = r0.getState()
            r2 = 1
            if (r1 != r2) goto L40
            return r0
        L40:
            r0.release()     // Catch: java.lang.Exception -> L43
        L43:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$InitializationException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$InitializationException
            int r2 = r9.outputSampleRate
            int r3 = r9.outputChannelConfig
            int r4 = r9.bufferSize
            r0.<init>(r1, r2, r3, r4)
            throw r0
    }

    private android.media.AudioTrack initializeKeepSessionIdAudioTrack(int r10) {
            r9 = this;
            android.media.AudioTrack r8 = new android.media.AudioTrack
            r2 = 4000(0xfa0, float:5.605E-42)
            r3 = 4
            r4 = 2
            r5 = 2
            r1 = 3
            r6 = 0
            r0 = r8
            r7 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    private long inputFramesToDurationUs(long r3) {
            r2 = this;
            r0 = 1000000(0xf4240, double:4.940656E-318)
            long r3 = r3 * r0
            int r0 = r2.inputSampleRate
            long r0 = (long) r0
            long r3 = r3 / r0
            return r3
    }

    private boolean isInitialized() {
            r1 = this;
            android.media.AudioTrack r0 = r1.audioTrack
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private void processBuffers(long r6) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r5.activeAudioProcessors
            int r0 = r0.length
            r1 = r0
        L4:
            if (r1 < 0) goto L3e
            if (r1 <= 0) goto Lf
            java.nio.ByteBuffer[] r2 = r5.outputBuffers
            int r3 = r1 + (-1)
            r2 = r2[r3]
            goto L16
        Lf:
            java.nio.ByteBuffer r2 = r5.inputBuffer
            if (r2 == 0) goto L14
            goto L16
        L14:
            java.nio.ByteBuffer r2 = com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.EMPTY_BUFFER
        L16:
            if (r1 != r0) goto L1c
            r5.writeBuffer(r2, r6)
            goto L34
        L1c:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r3 = r5.activeAudioProcessors
            r3 = r3[r1]
            r3.queueInput(r2)
            java.nio.ByteBuffer r3 = r3.getOutput()
            java.nio.ByteBuffer[] r4 = r5.outputBuffers
            r4[r1] = r3
            boolean r3 = r3.hasRemaining()
            if (r3 == 0) goto L34
            int r1 = r1 + 1
            goto L4
        L34:
            boolean r2 = r2.hasRemaining()
            if (r2 == 0) goto L3b
            return
        L3b:
            int r1 = r1 + (-1)
            goto L4
        L3e:
            return
    }

    private void releaseKeepSessionIdAudioTrack() {
            r2 = this;
            android.media.AudioTrack r0 = r2.keepSessionIdAudioTrack
            if (r0 != 0) goto L5
            return
        L5:
            r1 = 0
            r2.keepSessionIdAudioTrack = r1
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$2 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$2
            r1.<init>(r2, r0)
            r1.start()
            return
    }

    private void setVolumeInternal() {
            r2 = this;
            boolean r0 = r2.isInitialized()
            if (r0 != 0) goto L7
            goto L1c
        L7:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto L15
            android.media.AudioTrack r0 = r2.audioTrack
            float r1 = r2.volume
            setVolumeInternalV21(r0, r1)
            goto L1c
        L15:
            android.media.AudioTrack r0 = r2.audioTrack
            float r1 = r2.volume
            setVolumeInternalV3(r0, r1)
        L1c:
            return
    }

    private static void setVolumeInternalV21(android.media.AudioTrack r0, float r1) {
            r0.setVolume(r1)
            return
    }

    private static void setVolumeInternalV3(android.media.AudioTrack r0, float r1) {
            r0.setStereoVolume(r1, r1)
            return
    }

    private void setupAudioProcessors() {
            r6 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r1 = r6.getAvailableAudioProcessors()
            int r2 = r1.length
            r3 = 0
        Lb:
            if (r3 >= r2) goto L1f
            r4 = r1[r3]
            boolean r5 = r4.isActive()
            if (r5 == 0) goto L19
            r0.add(r4)
            goto L1c
        L19:
            r4.flush()
        L1c:
            int r3 = r3 + 1
            goto Lb
        L1f:
            int r1 = r0.size()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r2 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[r1]
            java.lang.Object[] r0 = r0.toArray(r2)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = (com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[]) r0
            r6.activeAudioProcessors = r0
            java.nio.ByteBuffer[] r0 = new java.nio.ByteBuffer[r1]
            r6.outputBuffers = r0
            r6.flushAudioProcessors()
            return
    }

    private void writeBuffer(java.nio.ByteBuffer r13, long r14) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r12 = this;
            boolean r0 = r13.hasRemaining()
            if (r0 != 0) goto L7
            return
        L7:
            java.nio.ByteBuffer r0 = r12.outputBuffer
            r1 = 1
            r2 = 21
            r3 = 0
            if (r0 == 0) goto L18
            if (r0 != r13) goto L13
            r0 = r1
            goto L14
        L13:
            r0 = r3
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r0)
            goto L3b
        L18:
            r12.outputBuffer = r13
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r0 >= r2) goto L3b
            int r0 = r13.remaining()
            byte[] r4 = r12.preV21OutputBuffer
            if (r4 == 0) goto L29
            int r4 = r4.length
            if (r4 >= r0) goto L2d
        L29:
            byte[] r4 = new byte[r0]
            r12.preV21OutputBuffer = r4
        L2d:
            int r4 = r13.position()
            byte[] r5 = r12.preV21OutputBuffer
            r13.get(r5, r3, r0)
            r13.position(r4)
            r12.preV21OutputBufferOffset = r3
        L3b:
            int r0 = r13.remaining()
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r4 >= r2) goto L6b
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r14 = r12.audioTrackPositionTracker
            long r1 = r12.writtenPcmBytes
            int r14 = r14.getAvailableBufferSize(r1)
            if (r14 <= 0) goto L8e
            int r14 = java.lang.Math.min(r0, r14)
            android.media.AudioTrack r15 = r12.audioTrack
            byte[] r1 = r12.preV21OutputBuffer
            int r2 = r12.preV21OutputBufferOffset
            int r3 = r15.write(r1, r2, r14)
            if (r3 <= 0) goto L8e
            int r14 = r12.preV21OutputBufferOffset
            int r14 = r14 + r3
            r12.preV21OutputBufferOffset = r14
            int r14 = r13.position()
            int r14 = r14 + r3
            r13.position(r14)
            goto L8e
        L6b:
            boolean r2 = r12.tunneling
            if (r2 == 0) goto L88
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r14 > r4 ? 1 : (r14 == r4 ? 0 : -1))
            if (r2 == 0) goto L79
            goto L7a
        L79:
            r1 = r3
        L7a:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r1)
            android.media.AudioTrack r7 = r12.audioTrack
            r6 = r12
            r8 = r13
            r9 = r0
            r10 = r14
            int r3 = r6.writeNonBlockingWithAvSyncV21(r7, r8, r9, r10)
            goto L8e
        L88:
            android.media.AudioTrack r14 = r12.audioTrack
            int r3 = writeNonBlockingV21(r14, r13, r0)
        L8e:
            long r13 = android.os.SystemClock.elapsedRealtime()
            r12.lastFeedElapsedRealtimeMs = r13
            if (r3 < 0) goto Lb2
            boolean r13 = r12.isInputPcm
            if (r13 == 0) goto La0
            long r13 = r12.writtenPcmBytes
            long r1 = (long) r3
            long r13 = r13 + r1
            r12.writtenPcmBytes = r13
        La0:
            if (r3 != r0) goto Lb1
            boolean r13 = r12.isInputPcm
            if (r13 != 0) goto Lae
            long r13 = r12.writtenEncodedFrames
            int r15 = r12.framesPerEncodedSample
            long r0 = (long) r15
            long r13 = r13 + r0
            r12.writtenEncodedFrames = r13
        Lae:
            r13 = 0
            r12.outputBuffer = r13
        Lb1:
            return
        Lb2:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$WriteException r13 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$WriteException
            r13.<init>(r3)
            throw r13
    }

    private static int writeNonBlockingV21(android.media.AudioTrack r1, java.nio.ByteBuffer r2, int r3) {
            r0 = 1
            int r1 = r1.write(r2, r3, r0)
            return r1
    }

    private int writeNonBlockingWithAvSyncV21(android.media.AudioTrack r6, java.nio.ByteBuffer r7, int r8, long r9) {
            r5 = this;
            java.nio.ByteBuffer r0 = r5.avSyncHeader
            if (r0 != 0) goto L19
            r0 = 16
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocate(r0)
            r5.avSyncHeader = r0
            java.nio.ByteOrder r1 = java.nio.ByteOrder.BIG_ENDIAN
            r0.order(r1)
            java.nio.ByteBuffer r0 = r5.avSyncHeader
            r1 = 1431633921(0x55550001, float:1.463725E13)
            r0.putInt(r1)
        L19:
            int r0 = r5.bytesUntilNextAvSync
            r1 = 0
            if (r0 != 0) goto L35
            java.nio.ByteBuffer r0 = r5.avSyncHeader
            r2 = 4
            r0.putInt(r2, r8)
            java.nio.ByteBuffer r0 = r5.avSyncHeader
            r2 = 8
            r3 = 1000(0x3e8, double:4.94E-321)
            long r9 = r9 * r3
            r0.putLong(r2, r9)
            java.nio.ByteBuffer r9 = r5.avSyncHeader
            r9.position(r1)
            r5.bytesUntilNextAvSync = r8
        L35:
            java.nio.ByteBuffer r9 = r5.avSyncHeader
            int r9 = r9.remaining()
            if (r9 <= 0) goto L4c
            java.nio.ByteBuffer r10 = r5.avSyncHeader
            r0 = 1
            int r10 = r6.write(r10, r9, r0)
            if (r10 >= 0) goto L49
            r5.bytesUntilNextAvSync = r1
            return r10
        L49:
            if (r10 >= r9) goto L4c
            return r1
        L4c:
            int r6 = writeNonBlockingV21(r6, r7, r8)
            if (r6 >= 0) goto L55
            r5.bytesUntilNextAvSync = r1
            return r6
        L55:
            int r7 = r5.bytesUntilNextAvSync
            int r7 = r7 - r6
            r5.bytesUntilNextAvSync = r7
            return r6
    }

    @Override
    public final void configure(int r18, int r19, int r20, int r21, int[] r22, int r23, int r24) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.ConfigurationException {
            r17 = this;
            r1 = r17
            r0 = r21
            r2 = r20
            r1.inputSampleRate = r2
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isEncodingPcm(r18)
            r1.isInputPcm = r3
            boolean r3 = r1.enableConvertHighResIntPcmToFloat
            r4 = 1
            r5 = 0
            if (r3 == 0) goto L24
            r3 = 1073741824(0x40000000, float:2.0)
            boolean r3 = r1.isEncodingSupported(r3)
            if (r3 == 0) goto L24
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isEncodingHighResolutionIntegerPcm(r18)
            if (r3 == 0) goto L24
            r3 = r4
            goto L25
        L24:
            r3 = r5
        L25:
            r1.shouldConvertHighResIntPcmToFloat = r3
            boolean r3 = r1.isInputPcm
            if (r3 == 0) goto L31
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmFrameSize(r18, r19)
            r1.pcmFrameSize = r3
        L31:
            boolean r3 = r1.isInputPcm
            r6 = 4
            if (r3 == 0) goto L3c
            r3 = r18
            if (r3 == r6) goto L3e
            r7 = r4
            goto L3f
        L3c:
            r3 = r18
        L3e:
            r7 = r5
        L3f:
            if (r7 == 0) goto L47
            boolean r8 = r1.shouldConvertHighResIntPcmToFloat
            if (r8 != 0) goto L47
            r8 = r4
            goto L48
        L47:
            r8 = r5
        L48:
            r1.canApplyPlaybackParameters = r8
            if (r7 == 0) goto L91
            com.mbridge.msdk.playercommon.exoplayer2.audio.TrimmingAudioProcessor r8 = r1.trimmingAudioProcessor
            r9 = r23
            r10 = r24
            r8.setTrimFrameCount(r9, r10)
            com.mbridge.msdk.playercommon.exoplayer2.audio.ChannelMappingAudioProcessor r8 = r1.channelMappingAudioProcessor
            r9 = r22
            r8.setChannelMap(r9)
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r8 = r17.getAvailableAudioProcessors()
            int r9 = r8.length
            r10 = r2
            r11 = r5
            r12 = r11
            r2 = r19
        L66:
            if (r11 >= r9) goto L95
            r13 = r8[r11]
            boolean r14 = r13.configure(r10, r2, r3)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor.UnhandledFormatException -> L89
            r12 = r12 | r14
            boolean r14 = r13.isActive()
            if (r14 == 0) goto L86
            int r2 = r13.getOutputChannelCount()
            int r3 = r13.getOutputSampleRateHz()
            int r10 = r13.getOutputEncoding()
            r16 = r10
            r10 = r3
            r3 = r16
        L86:
            int r11 = r11 + 1
            goto L66
        L89:
            r0 = move-exception
            r2 = r0
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$ConfigurationException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$ConfigurationException
            r0.<init>(r2)
            throw r0
        L91:
            r10 = r2
            r12 = r5
            r2 = r19
        L95:
            r8 = 252(0xfc, float:3.53E-43)
            r9 = 12
            switch(r2) {
                case 1: goto Lc5;
                case 2: goto Lc4;
                case 3: goto Lc1;
                case 4: goto Lbe;
                case 5: goto Lbb;
                case 6: goto Lb9;
                case 7: goto Lb6;
                case 8: goto Lb3;
                default: goto L9c;
            }
        L9c:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$ConfigurationException r0 = new com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$ConfigurationException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Unsupported channel count: "
            r3.append(r4)
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            r0.<init>(r2)
            throw r0
        Lb3:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.C.CHANNEL_OUT_7POINT1_SURROUND
            goto Lc5
        Lb6:
            r6 = 1276(0x4fc, float:1.788E-42)
            goto Lc5
        Lb9:
            r6 = r8
            goto Lc5
        Lbb:
            r6 = 220(0xdc, float:3.08E-43)
            goto Lc5
        Lbe:
            r6 = 204(0xcc, float:2.86E-43)
            goto Lc5
        Lc1:
            r6 = 28
            goto Lc5
        Lc4:
            r6 = r9
        Lc5:
            int r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r13 = 23
            r14 = 7
            r15 = 5
            if (r11 > r13) goto Lec
            java.lang.String r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r13 = "foster"
            boolean r11 = r13.equals(r11)
            if (r11 == 0) goto Lec
            java.lang.String r11 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r13 = "NVIDIA"
            boolean r11 = r13.equals(r11)
            if (r11 == 0) goto Lec
            r11 = 3
            if (r2 == r11) goto Led
            if (r2 == r15) goto Led
            if (r2 == r14) goto Le9
            goto Lec
        Le9:
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.C.CHANNEL_OUT_7POINT1_SURROUND
            goto Led
        Lec:
            r8 = r6
        Led:
            int r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r11 = 25
            if (r6 > r11) goto L104
            java.lang.String r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r11 = "fugu"
            boolean r6 = r11.equals(r6)
            if (r6 == 0) goto L104
            boolean r6 = r1.isInputPcm
            if (r6 != 0) goto L104
            if (r2 != r4) goto L104
            goto L105
        L104:
            r9 = r8
        L105:
            if (r12 != 0) goto L11a
            boolean r6 = r17.isInitialized()
            if (r6 == 0) goto L11a
            int r6 = r1.outputEncoding
            if (r6 != r3) goto L11a
            int r6 = r1.outputSampleRate
            if (r6 != r10) goto L11a
            int r6 = r1.outputChannelConfig
            if (r6 != r9) goto L11a
            return
        L11a:
            r17.reset()
            r1.processingEnabled = r7
            r1.outputSampleRate = r10
            r1.outputChannelConfig = r9
            r1.outputEncoding = r3
            boolean r6 = r1.isInputPcm
            if (r6 == 0) goto L12e
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getPcmFrameSize(r3, r2)
            goto L12f
        L12e:
            r2 = -1
        L12f:
            r1.outputPcmFrameSize = r2
            if (r0 == 0) goto L136
            r1.bufferSize = r0
            goto L187
        L136:
            boolean r0 = r1.isInputPcm
            if (r0 == 0) goto L16d
            int r0 = r1.outputEncoding
            int r0 = android.media.AudioTrack.getMinBufferSize(r10, r9, r0)
            r2 = -2
            if (r0 == r2) goto L144
            goto L145
        L144:
            r4 = r5
        L145:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r4)
            int r2 = r0 * 4
            r3 = 250000(0x3d090, double:1.235164E-318)
            long r3 = r1.durationUsToFrames(r3)
            int r3 = (int) r3
            int r4 = r1.outputPcmFrameSize
            int r3 = r3 * r4
            long r4 = (long) r0
            r6 = 750000(0xb71b0, double:3.70549E-318)
            long r6 = r1.durationUsToFrames(r6)
            int r0 = r1.outputPcmFrameSize
            long r8 = (long) r0
            long r6 = r6 * r8
            long r4 = java.lang.Math.max(r4, r6)
            int r0 = (int) r4
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.constrainValue(r2, r3, r0)
            r1.bufferSize = r0
            goto L187
        L16d:
            int r0 = r1.outputEncoding
            if (r0 == r15) goto L183
            r2 = 6
            if (r0 != r2) goto L175
            goto L183
        L175:
            if (r0 != r14) goto L17d
            r0 = 49152(0xc000, float:6.8877E-41)
            r1.bufferSize = r0
            goto L187
        L17d:
            r0 = 294912(0x48000, float:4.1326E-40)
            r1.bufferSize = r0
            goto L187
        L183:
            r0 = 20480(0x5000, float:2.8699E-41)
            r1.bufferSize = r0
        L187:
            return
    }

    @Override
    public final void disableTunneling() {
            r1 = this;
            boolean r0 = r1.tunneling
            if (r0 == 0) goto Lc
            r0 = 0
            r1.tunneling = r0
            r1.audioSessionId = r0
            r1.reset()
        Lc:
            return
    }

    @Override
    public final void enableTunnelingV21(int r4) {
            r3 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 1
            r2 = 21
            if (r0 < r2) goto L9
            r0 = r1
            goto La
        L9:
            r0 = 0
        La:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            boolean r0 = r3.tunneling
            if (r0 == 0) goto L15
            int r0 = r3.audioSessionId
            if (r0 == r4) goto L1c
        L15:
            r3.tunneling = r1
            r3.audioSessionId = r4
            r3.reset()
        L1c:
            return
    }

    @Override
    public final long getCurrentPositionUs(boolean r5) {
            r4 = this;
            boolean r0 = r4.isInitialized()
            if (r0 == 0) goto L29
            int r0 = r4.startMediaTimeState
            if (r0 != 0) goto Lb
            goto L29
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r4.audioTrackPositionTracker
            long r0 = r0.getCurrentPositionUs(r5)
            long r2 = r4.getWrittenFrames()
            long r2 = r4.framesToDurationUs(r2)
            long r0 = java.lang.Math.min(r0, r2)
            long r2 = r4.startMediaTimeUs
            long r0 = r4.applySpeedup(r0)
            long r0 = r4.applySkipping(r0)
            long r2 = r2 + r0
            return r2
        L29:
            r0 = -9223372036854775808
            return r0
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters getPlaybackParameters() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r1.playbackParameters
            return r0
    }

    @Override
    public final boolean handleBuffer(java.nio.ByteBuffer r20, long r21) throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.InitializationException, com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r19 = this;
            r0 = r19
            r1 = r20
            r2 = r21
            java.nio.ByteBuffer r4 = r0.inputBuffer
            r5 = 0
            r6 = 1
            if (r4 == 0) goto L11
            if (r1 != r4) goto Lf
            goto L11
        Lf:
            r4 = r5
            goto L12
        L11:
            r4 = r6
        L12:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkArgument(r4)
            boolean r4 = r19.isInitialized()
            if (r4 != 0) goto L25
            r19.initialize()
            boolean r4 = r0.playing
            if (r4 == 0) goto L25
            r19.play()
        L25:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r4 = r0.audioTrackPositionTracker
            long r7 = r19.getWrittenFrames()
            boolean r4 = r4.mayHandleBuffer(r7)
            if (r4 != 0) goto L32
            return r5
        L32:
            java.nio.ByteBuffer r4 = r0.inputBuffer
            java.lang.String r7 = "AudioTrack"
            r8 = 0
            if (r4 != 0) goto L103
            boolean r4 = r20.hasRemaining()
            if (r4 != 0) goto L40
            return r6
        L40:
            boolean r4 = r0.isInputPcm
            if (r4 != 0) goto L53
            int r4 = r0.framesPerEncodedSample
            if (r4 != 0) goto L53
            int r4 = r0.outputEncoding
            int r4 = getFramesPerEncodedSample(r4, r1)
            r0.framesPerEncodedSample = r4
            if (r4 != 0) goto L53
            return r6
        L53:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4 = r0.afterDrainPlaybackParameters
            r9 = 0
            if (r4 == 0) goto L86
            boolean r4 = r19.drainAudioProcessorsToEndOfStream()
            if (r4 != 0) goto L60
            return r5
        L60:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r4 = r0.afterDrainPlaybackParameters
            r0.afterDrainPlaybackParameters = r8
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r11 = r0.audioProcessorChain
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r13 = r11.applyPlaybackParameters(r4)
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r4 = r0.playbackParametersCheckpoints
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint r11 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint
            long r14 = java.lang.Math.max(r9, r2)
            long r5 = r19.getWrittenFrames()
            long r16 = r0.framesToDurationUs(r5)
            r18 = 0
            r12 = r11
            r12.<init>(r13, r14, r16, r18)
            r4.add(r11)
            r19.setupAudioProcessors()
        L86:
            int r4 = r0.startMediaTimeState
            if (r4 != 0) goto L94
            long r4 = java.lang.Math.max(r9, r2)
            r0.startMediaTimeUs = r4
            r4 = 1
            r0.startMediaTimeState = r4
            goto Lea
        L94:
            r4 = 1
            long r5 = r0.startMediaTimeUs
            long r9 = r19.getSubmittedFrames()
            long r9 = r0.inputFramesToDurationUs(r9)
            long r5 = r5 + r9
            int r9 = r0.startMediaTimeState
            r10 = 2
            if (r9 != r4) goto Ld5
            long r11 = r5 - r2
            long r11 = java.lang.Math.abs(r11)
            r13 = 200000(0x30d40, double:9.8813E-319)
            int r4 = (r11 > r13 ? 1 : (r11 == r13 ? 0 : -1))
            if (r4 <= 0) goto Ld5
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r9 = "Discontinuity detected [expected "
            r4.append(r9)
            r4.append(r5)
            java.lang.String r9 = ", got "
            r4.append(r9)
            r4.append(r2)
            java.lang.String r9 = "]"
            r4.append(r9)
            java.lang.String r4 = r4.toString()
            android.util.Log.e(r7, r4)
            r0.startMediaTimeState = r10
        Ld5:
            int r4 = r0.startMediaTimeState
            if (r4 != r10) goto Lea
            long r9 = r0.startMediaTimeUs
            long r4 = r2 - r5
            long r9 = r9 + r4
            r0.startMediaTimeUs = r9
            r4 = 1
            r0.startMediaTimeState = r4
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink$Listener r4 = r0.listener
            if (r4 == 0) goto Lea
            r4.onPositionDiscontinuity()
        Lea:
            boolean r4 = r0.isInputPcm
            if (r4 == 0) goto Lf9
            long r4 = r0.submittedPcmBytes
            int r6 = r20.remaining()
            long r9 = (long) r6
            long r4 = r4 + r9
            r0.submittedPcmBytes = r4
            goto L101
        Lf9:
            long r4 = r0.submittedEncodedFrames
            int r6 = r0.framesPerEncodedSample
            long r9 = (long) r6
            long r4 = r4 + r9
            r0.submittedEncodedFrames = r4
        L101:
            r0.inputBuffer = r1
        L103:
            boolean r1 = r0.processingEnabled
            if (r1 == 0) goto L10b
            r0.processBuffers(r2)
            goto L110
        L10b:
            java.nio.ByteBuffer r1 = r0.inputBuffer
            r0.writeBuffer(r1, r2)
        L110:
            java.nio.ByteBuffer r1 = r0.inputBuffer
            boolean r1 = r1.hasRemaining()
            if (r1 != 0) goto L11c
            r0.inputBuffer = r8
            r1 = 1
            return r1
        L11c:
            r1 = 1
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r2 = r0.audioTrackPositionTracker
            long r3 = r19.getWrittenFrames()
            boolean r2 = r2.isStalled(r3)
            if (r2 == 0) goto L132
            java.lang.String r2 = "Resetting stalled audio track"
            android.util.Log.w(r7, r2)
            r19.reset()
            return r1
        L132:
            r1 = 0
            return r1
    }

    @Override
    public final void handleDiscontinuity() {
            r2 = this;
            int r0 = r2.startMediaTimeState
            r1 = 1
            if (r0 != r1) goto L8
            r0 = 2
            r2.startMediaTimeState = r0
        L8:
            return
    }

    @Override
    public final boolean hasPendingData() {
            r3 = this;
            boolean r0 = r3.isInitialized()
            if (r0 == 0) goto L14
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r3.audioTrackPositionTracker
            long r1 = r3.getWrittenFrames()
            boolean r0 = r0.hasPendingData(r1)
            if (r0 == 0) goto L14
            r0 = 1
            goto L15
        L14:
            r0 = 0
        L15:
            return r0
    }

    @Override
    public final boolean isEncodingSupported(int r4) {
            r3 = this;
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.isEncodingPcm(r4)
            r1 = 1
            r2 = 0
            if (r0 == 0) goto L14
            r0 = 4
            if (r4 != r0) goto L13
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 21
            if (r4 < r0) goto L12
            goto L13
        L12:
            r1 = r2
        L13:
            return r1
        L14:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioCapabilities r0 = r3.audioCapabilities
            if (r0 == 0) goto L1f
            boolean r4 = r0.supportsEncoding(r4)
            if (r4 == 0) goto L1f
            goto L20
        L1f:
            r1 = r2
        L20:
            return r1
    }

    @Override
    public final boolean isEnded() {
            r1 = this;
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto L13
            boolean r0 = r1.handledEndOfStream
            if (r0 == 0) goto L11
            boolean r0 = r1.hasPendingData()
            if (r0 != 0) goto L11
            goto L13
        L11:
            r0 = 0
            goto L14
        L13:
            r0 = 1
        L14:
            return r0
    }

    @Override
    public final void pause() {
            r1 = this;
            r0 = 0
            r1.playing = r0
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto L16
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r1.audioTrackPositionTracker
            boolean r0 = r0.pause()
            if (r0 == 0) goto L16
            android.media.AudioTrack r0 = r1.audioTrack
            r0.pause()
        L16:
            return
    }

    @Override
    public final void play() {
            r1 = this;
            r0 = 1
            r1.playing = r0
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto L13
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r1.audioTrackPositionTracker
            r0.start()
            android.media.AudioTrack r0 = r1.audioTrack
            r0.play()
        L13:
            return
    }

    @Override
    public final void playToEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.WriteException {
            r3 = this;
            boolean r0 = r3.handledEndOfStream
            if (r0 != 0) goto L25
            boolean r0 = r3.isInitialized()
            if (r0 != 0) goto Lb
            goto L25
        Lb:
            boolean r0 = r3.drainAudioProcessorsToEndOfStream()
            if (r0 == 0) goto L25
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r3.audioTrackPositionTracker
            long r1 = r3.getWrittenFrames()
            r0.handleEndOfStream(r1)
            android.media.AudioTrack r0 = r3.audioTrack
            r0.stop()
            r0 = 0
            r3.bytesUntilNextAvSync = r0
            r0 = 1
            r3.handledEndOfStream = r0
        L25:
            return
    }

    @Override
    public final void release() {
            r5 = this;
            r5.reset()
            r5.releaseKeepSessionIdAudioTrack()
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r5.toIntPcmAvailableAudioProcessors
            int r1 = r0.length
            r2 = 0
            r3 = r2
        Lb:
            if (r3 >= r1) goto L15
            r4 = r0[r3]
            r4.reset()
            int r3 = r3 + 1
            goto Lb
        L15:
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioProcessor[] r0 = r5.toFloatPcmAvailableAudioProcessors
            int r1 = r0.length
            r3 = r2
        L19:
            if (r3 >= r1) goto L23
            r4 = r0[r3]
            r4.reset()
            int r3 = r3 + 1
            goto L19
        L23:
            r5.audioSessionId = r2
            r5.playing = r2
            return
    }

    @Override
    public final void reset() {
            r5 = this;
            boolean r0 = r5.isInitialized()
            if (r0 == 0) goto L71
            r0 = 0
            r5.submittedPcmBytes = r0
            r5.submittedEncodedFrames = r0
            r5.writtenPcmBytes = r0
            r5.writtenEncodedFrames = r0
            r2 = 0
            r5.framesPerEncodedSample = r2
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3 = r5.afterDrainPlaybackParameters
            r4 = 0
            if (r3 == 0) goto L1d
            r5.playbackParameters = r3
            r5.afterDrainPlaybackParameters = r4
            goto L33
        L1d:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r3 = r5.playbackParametersCheckpoints
            boolean r3 = r3.isEmpty()
            if (r3 != 0) goto L33
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r3 = r5.playbackParametersCheckpoints
            java.lang.Object r3 = r3.getLast()
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint r3 = (com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint) r3
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r3 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$200(r3)
            r5.playbackParameters = r3
        L33:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r3 = r5.playbackParametersCheckpoints
            r3.clear()
            r5.playbackParametersOffsetUs = r0
            r5.playbackParametersPositionUs = r0
            r5.inputBuffer = r4
            r5.outputBuffer = r4
            r5.flushAudioProcessors()
            r5.handledEndOfStream = r2
            r0 = -1
            r5.drainingAudioProcessorIndex = r0
            r5.avSyncHeader = r4
            r5.bytesUntilNextAvSync = r2
            r5.startMediaTimeState = r2
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r0 = r5.audioTrackPositionTracker
            boolean r0 = r0.isPlaying()
            if (r0 == 0) goto L5b
            android.media.AudioTrack r0 = r5.audioTrack
            r0.pause()
        L5b:
            android.media.AudioTrack r0 = r5.audioTrack
            r5.audioTrack = r4
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioTrackPositionTracker r1 = r5.audioTrackPositionTracker
            r1.reset()
            android.os.ConditionVariable r1 = r5.releasingConditionVariable
            r1.close()
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$1 r1 = new com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$1
            r1.<init>(r5, r0)
            r1.start()
        L71:
            return
    }

    @Override
    public final void setAudioAttributes(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r2) {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.audio.AudioAttributes r0 = r1.audioAttributes
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L9
            return
        L9:
            r1.audioAttributes = r2
            boolean r2 = r1.tunneling
            if (r2 == 0) goto L10
            return
        L10:
            r1.reset()
            r2 = 0
            r1.audioSessionId = r2
            return
    }

    @Override
    public final void setAudioSessionId(int r2) {
            r1 = this;
            int r0 = r1.audioSessionId
            if (r0 == r2) goto L9
            r1.audioSessionId = r2
            r1.reset()
        L9:
            return
    }

    @Override
    public final void setListener(com.mbridge.msdk.playercommon.exoplayer2.audio.AudioSink.Listener r1) {
            r0 = this;
            r0.listener = r1
            return
    }

    @Override
    public final com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters setPlaybackParameters(com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2) {
            r1 = this;
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto Lf
            boolean r0 = r1.canApplyPlaybackParameters
            if (r0 != 0) goto Lf
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters.DEFAULT
            r1.playbackParameters = r2
            return r2
        Lf:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r1.afterDrainPlaybackParameters
            if (r0 == 0) goto L14
            goto L2b
        L14:
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r0 = r1.playbackParametersCheckpoints
            boolean r0 = r0.isEmpty()
            if (r0 != 0) goto L29
            java.util.ArrayDeque<com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint> r0 = r1.playbackParametersCheckpoints
            java.lang.Object r0 = r0.getLast()
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$PlaybackParametersCheckpoint r0 = (com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint) r0
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink.PlaybackParametersCheckpoint.access$200(r0)
            goto L2b
        L29:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r0 = r1.playbackParameters
        L2b:
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto L42
            boolean r0 = r1.isInitialized()
            if (r0 == 0) goto L3a
            r1.afterDrainPlaybackParameters = r2
            goto L42
        L3a:
            com.mbridge.msdk.playercommon.exoplayer2.audio.DefaultAudioSink$AudioProcessorChain r0 = r1.audioProcessorChain
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r0.applyPlaybackParameters(r2)
            r1.playbackParameters = r2
        L42:
            com.mbridge.msdk.playercommon.exoplayer2.PlaybackParameters r2 = r1.playbackParameters
            return r2
    }

    @Override
    public final void setVolume(float r2) {
            r1 = this;
            float r0 = r1.volume
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto Lb
            r1.volume = r2
            r1.setVolumeInternal()
        Lb:
            return
    }
}
