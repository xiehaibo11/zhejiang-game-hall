package com.mbridge.msdk.playercommon.exoplayer2.mediacodec;

public abstract class MediaCodecRenderer extends com.mbridge.msdk.playercommon.exoplayer2.BaseRenderer {
    private static final byte[] ADAPTATION_WORKAROUND_BUFFER = null;
    private static final int ADAPTATION_WORKAROUND_MODE_ALWAYS = 2;
    private static final int ADAPTATION_WORKAROUND_MODE_NEVER = 0;
    private static final int ADAPTATION_WORKAROUND_MODE_SAME_RESOLUTION = 1;
    private static final int ADAPTATION_WORKAROUND_SLICE_WIDTH_HEIGHT = 32;
    protected static final int KEEP_CODEC_RESULT_NO = 0;
    protected static final int KEEP_CODEC_RESULT_YES_WITHOUT_RECONFIGURATION = 1;
    protected static final int KEEP_CODEC_RESULT_YES_WITH_RECONFIGURATION = 3;
    private static final long MAX_CODEC_HOTSWAP_TIME_MS = 1000;
    private static final int RECONFIGURATION_STATE_NONE = 0;
    private static final int RECONFIGURATION_STATE_QUEUE_PENDING = 2;
    private static final int RECONFIGURATION_STATE_WRITE_PENDING = 1;
    private static final int REINITIALIZATION_STATE_NONE = 0;
    private static final int REINITIALIZATION_STATE_SIGNAL_END_OF_STREAM = 1;
    private static final int REINITIALIZATION_STATE_WAIT_END_OF_STREAM = 2;
    private static final java.lang.String TAG = "MediaCodecRenderer";
    private final com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer buffer;
    private android.media.MediaCodec codec;
    private int codecAdaptationWorkaroundMode;
    private long codecHotswapDeadlineMs;
    private com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo codecInfo;
    private boolean codecNeedsAdaptationWorkaroundBuffer;
    private boolean codecNeedsDiscardToSpsWorkaround;
    private boolean codecNeedsEosFlushWorkaround;
    private boolean codecNeedsEosOutputExceptionWorkaround;
    private boolean codecNeedsEosPropagationWorkaround;
    private boolean codecNeedsFlushWorkaround;
    private boolean codecNeedsMonoChannelCountWorkaround;
    private boolean codecReceivedBuffers;
    private boolean codecReceivedEos;
    private int codecReconfigurationState;
    private boolean codecReconfigured;
    private int codecReinitializationState;
    private final java.util.List<java.lang.Long> decodeOnlyPresentationTimestamps;
    protected com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters decoderCounters;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> drmSession;
    private final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> drmSessionManager;
    private final com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer flagsOnlyBuffer;
    private com.mbridge.msdk.playercommon.exoplayer2.Format format;
    private final com.mbridge.msdk.playercommon.exoplayer2.FormatHolder formatHolder;
    private java.nio.ByteBuffer[] inputBuffers;
    private int inputIndex;
    private boolean inputStreamEnded;
    private final com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector mediaCodecSelector;
    private java.nio.ByteBuffer outputBuffer;
    private final android.media.MediaCodec.BufferInfo outputBufferInfo;
    private java.nio.ByteBuffer[] outputBuffers;
    private int outputIndex;
    private boolean outputStreamEnded;
    private com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> pendingDrmSession;
    private final boolean playClearSamplesWithoutKeys;
    private boolean shouldSkipAdaptationWorkaroundOutputBuffer;
    private boolean shouldSkipOutputBuffer;
    private boolean waitingForFirstSyncFrame;
    private boolean waitingForKeys;

    private @interface AdaptationWorkaroundMode {
    }

    public static class DecoderInitializationException extends java.lang.Exception {
        private static final int CUSTOM_ERROR_CODE_BASE = -50000;
        private static final int DECODER_QUERY_ERROR = -49998;
        private static final int NO_SUITABLE_DECODER_ERROR = -49999;
        public final java.lang.String decoderName;
        public final java.lang.String diagnosticInfo;
        public final java.lang.String mimeType;
        public final boolean secureDecoderRequired;

        public DecoderInitializationException(com.mbridge.msdk.playercommon.exoplayer2.Format r3, java.lang.Throwable r4, boolean r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Decoder init failed: ["
                r0.append(r1)
                r0.append(r6)
                java.lang.String r1 = "], "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r4)
                java.lang.String r3 = r3.sampleMimeType
                r2.mimeType = r3
                r2.secureDecoderRequired = r5
                r3 = 0
                r2.decoderName = r3
                java.lang.String r3 = buildCustomDiagnosticInfo(r6)
                r2.diagnosticInfo = r3
                return
        }

        public DecoderInitializationException(com.mbridge.msdk.playercommon.exoplayer2.Format r3, java.lang.Throwable r4, boolean r5, java.lang.String r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                r0.<init>()
                java.lang.String r1 = "Decoder init failed: "
                r0.append(r1)
                r0.append(r6)
                java.lang.String r1 = ", "
                r0.append(r1)
                r0.append(r3)
                java.lang.String r0 = r0.toString()
                r2.<init>(r0, r4)
                java.lang.String r3 = r3.sampleMimeType
                r2.mimeType = r3
                r2.secureDecoderRequired = r5
                r2.decoderName = r6
                int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
                r5 = 21
                if (r3 < r5) goto L2f
                java.lang.String r3 = getDiagnosticInfoV21(r4)
                goto L30
            L2f:
                r3 = 0
            L30:
                r2.diagnosticInfo = r3
                return
        }

        private static java.lang.String buildCustomDiagnosticInfo(int r3) {
                if (r3 >= 0) goto L5
                java.lang.String r0 = "neg_"
                goto L7
            L5:
                java.lang.String r0 = ""
            L7:
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                java.lang.String r2 = "com.google.android.exoplayer.MediaCodecTrackRenderer_"
                r1.append(r2)
                r1.append(r0)
                int r3 = java.lang.Math.abs(r3)
                r1.append(r3)
                java.lang.String r3 = r1.toString()
                return r3
        }

        private static java.lang.String getDiagnosticInfoV21(java.lang.Throwable r1) {
                boolean r0 = r1 instanceof android.media.MediaCodec.CodecException
                if (r0 == 0) goto Lb
                android.media.MediaCodec$CodecException r1 = (android.media.MediaCodec.CodecException) r1
                java.lang.String r1 = r1.getDiagnosticInfo()
                return r1
            Lb:
                r1 = 0
                return r1
        }
    }

    protected @interface KeepCodecResult {
    }

    private @interface ReconfigurationState {
    }

    private @interface ReinitializationState {
    }

    static {
            java.lang.String r0 = "0000016742C00BDA259000000168CE0F13200000016588840DCE7118A0002FBF1C31C3275D78"
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.getBytesFromHexString(r0)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer.ADAPTATION_WORKAROUND_BUFFER = r0
            return
    }

    public MediaCodecRenderer(int r3, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r4, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r5, boolean r6) {
            r2 = this;
            r2.<init>(r3)
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 0
            r1 = 16
            if (r3 < r1) goto Lc
            r3 = 1
            goto Ld
        Lc:
            r3 = r0
        Ld:
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r3)
            java.lang.Object r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r4)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r3 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector) r3
            r2.mediaCodecSelector = r3
            r2.drmSessionManager = r5
            r2.playClearSamplesWithoutKeys = r6
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer
            r3.<init>(r0)
            r2.buffer = r3
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer.newFlagsOnlyInstance()
            r2.flagsOnlyBuffer = r3
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r3 = new com.mbridge.msdk.playercommon.exoplayer2.FormatHolder
            r3.<init>()
            r2.formatHolder = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r2.decodeOnlyPresentationTimestamps = r3
            android.media.MediaCodec$BufferInfo r3 = new android.media.MediaCodec$BufferInfo
            r3.<init>()
            r2.outputBufferInfo = r3
            r2.codecReconfigurationState = r0
            r2.codecReinitializationState = r0
            return
    }

    private int codecAdaptationWorkaroundMode(java.lang.String r3) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 25
            if (r0 > r1) goto L38
            java.lang.String r0 = "OMX.Exynos.avc.dec.secure"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L38
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "SM-T585"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "SM-A510"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "SM-A520"
            boolean r0 = r0.startsWith(r1)
            if (r0 != 0) goto L36
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "SM-J700"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L38
        L36:
            r3 = 2
            return r3
        L38:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 24
            if (r0 >= r1) goto L78
            java.lang.String r0 = "OMX.Nvidia.h264.decode"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L4e
            java.lang.String r0 = "OMX.Nvidia.h264.decode.secure"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L78
        L4e:
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "flounder"
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L76
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "flounder_lte"
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L76
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "grouper"
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L76
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r0 = "tilapia"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L78
        L76:
            r3 = 1
            return r3
        L78:
            r3 = 0
            return r3
    }

    private static boolean codecNeedsDiscardToSpsWorkaround(java.lang.String r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L18
            java.util.List<byte[]> r3 = r3.initializationData
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L18
            java.lang.String r3 = "OMX.MTK.VIDEO.DECODER.AVC"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L18
            r2 = 1
            goto L19
        L18:
            r2 = 0
        L19:
            return r2
    }

    private static boolean codecNeedsEosFlushWorkaround(java.lang.String r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 > r1) goto Le
            java.lang.String r0 = "OMX.google.vorbis.decoder"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2e
        Le:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 19
            if (r0 > r1) goto L30
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "hb2000"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L30
            java.lang.String r0 = "OMX.amlogic.avc.decoder.awesome"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2e
            java.lang.String r0 = "OMX.amlogic.avc.decoder.awesome.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L30
        L2e:
            r2 = 1
            goto L31
        L30:
            r2 = 0
        L31:
            return r2
    }

    private static boolean codecNeedsEosOutputExceptionWorkaround(java.lang.String r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 != r1) goto L10
            java.lang.String r0 = "OMX.google.aac.decoder"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L10
            r2 = 1
            goto L11
        L10:
            r2 = 0
        L11:
            return r2
    }

    private static boolean codecNeedsEosPropagationWorkaround(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3) {
            java.lang.String r0 = r3.name
            int r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r2 = 17
            if (r1 > r2) goto L18
            java.lang.String r1 = "OMX.rk.video_decoder.avc"
            boolean r1 = r1.equals(r0)
            if (r1 != 0) goto L30
            java.lang.String r1 = "OMX.allwinner.video.decoder.avc"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L30
        L18:
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L32
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTS"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L32
            boolean r3 = r3.secure
            if (r3 == 0) goto L32
        L30:
            r3 = 1
            goto L33
        L32:
            r3 = 0
        L33:
            return r3
    }

    private static boolean codecNeedsFlushWorkaround(java.lang.String r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 18
            if (r0 < r1) goto L3d
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r0 != r1) goto L1a
            java.lang.String r0 = "OMX.SEC.avc.dec"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
            java.lang.String r0 = "OMX.SEC.avc.dec.secure"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
        L1a:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 19
            if (r0 != r1) goto L3b
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "SM-G800"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L3b
            java.lang.String r0 = "OMX.Exynos.avc.dec"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L3d
            java.lang.String r0 = "OMX.Exynos.avc.dec.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L3b
            goto L3d
        L3b:
            r2 = 0
            goto L3e
        L3d:
            r2 = 1
        L3e:
            return r2
    }

    private static boolean codecNeedsMonoChannelCountWorkaround(java.lang.String r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 1
            r2 = 18
            if (r0 > r2) goto L14
            int r4 = r4.channelCount
            if (r4 != r1) goto L14
            java.lang.String r4 = "OMX.MTK.AUDIO.DECODER.MP3"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L14
            goto L15
        L14:
            r1 = 0
        L15:
            return r1
    }

    private boolean deviceNeedsDrmKeysToConfigureCodecWorkaround() {
            r2 = this;
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r1 = "Amazon"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTM"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1e
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTB"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L20
        L1e:
            r0 = 1
            goto L21
        L20:
            r0 = 0
        L21:
            return r0
    }

    private boolean drainOutputBuffer(long r16, long r18) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r15 = this;
            r12 = r15
            boolean r0 = r15.hasOutputBuffer()
            r13 = 1
            r14 = 0
            if (r0 != 0) goto L9e
            boolean r0 = r12.codecNeedsEosOutputExceptionWorkaround
            if (r0 == 0) goto L29
            boolean r0 = r12.codecReceivedEos
            if (r0 == 0) goto L29
            android.media.MediaCodec r0 = r12.codec     // Catch: java.lang.IllegalStateException -> L1e
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo     // Catch: java.lang.IllegalStateException -> L1e
            long r2 = r15.getDequeueOutputBufferTimeoutUs()     // Catch: java.lang.IllegalStateException -> L1e
            int r0 = r0.dequeueOutputBuffer(r1, r2)     // Catch: java.lang.IllegalStateException -> L1e
            goto L35
        L1e:
            r15.processEndOfStream()
            boolean r0 = r12.outputStreamEnded
            if (r0 == 0) goto L28
            r15.releaseCodec()
        L28:
            return r14
        L29:
            android.media.MediaCodec r0 = r12.codec
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo
            long r2 = r15.getDequeueOutputBufferTimeoutUs()
            int r0 = r0.dequeueOutputBuffer(r1, r2)
        L35:
            if (r0 < 0) goto L7f
            boolean r1 = r12.shouldSkipAdaptationWorkaroundOutputBuffer
            if (r1 == 0) goto L43
            r12.shouldSkipAdaptationWorkaroundOutputBuffer = r14
            android.media.MediaCodec r1 = r12.codec
            r1.releaseOutputBuffer(r0, r14)
            return r13
        L43:
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo
            int r1 = r1.size
            if (r1 != 0) goto L55
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo
            int r1 = r1.flags
            r1 = r1 & 4
            if (r1 == 0) goto L55
            r15.processEndOfStream()
            return r14
        L55:
            r12.outputIndex = r0
            java.nio.ByteBuffer r0 = r15.getOutputBuffer(r0)
            r12.outputBuffer = r0
            if (r0 == 0) goto L74
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo
            int r1 = r1.offset
            r0.position(r1)
            java.nio.ByteBuffer r0 = r12.outputBuffer
            android.media.MediaCodec$BufferInfo r1 = r12.outputBufferInfo
            int r1 = r1.offset
            android.media.MediaCodec$BufferInfo r2 = r12.outputBufferInfo
            int r2 = r2.size
            int r1 = r1 + r2
            r0.limit(r1)
        L74:
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo
            long r0 = r0.presentationTimeUs
            boolean r0 = r15.shouldSkipOutputBuffer(r0)
            r12.shouldSkipOutputBuffer = r0
            goto L9e
        L7f:
            r1 = -2
            if (r0 != r1) goto L86
            r15.processOutputFormat()
            return r13
        L86:
            r1 = -3
            if (r0 != r1) goto L8d
            r15.processOutputBuffersChanged()
            return r13
        L8d:
            boolean r0 = r12.codecNeedsEosPropagationWorkaround
            if (r0 == 0) goto L9d
            boolean r0 = r12.inputStreamEnded
            if (r0 != 0) goto L9a
            int r0 = r12.codecReinitializationState
            r1 = 2
            if (r0 != r1) goto L9d
        L9a:
            r15.processEndOfStream()
        L9d:
            return r14
        L9e:
            boolean r0 = r12.codecNeedsEosOutputExceptionWorkaround
            if (r0 == 0) goto Lcb
            boolean r0 = r12.codecReceivedEos
            if (r0 == 0) goto Lcb
            android.media.MediaCodec r5 = r12.codec     // Catch: java.lang.IllegalStateException -> Lc0
            java.nio.ByteBuffer r6 = r12.outputBuffer     // Catch: java.lang.IllegalStateException -> Lc0
            int r7 = r12.outputIndex     // Catch: java.lang.IllegalStateException -> Lc0
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo     // Catch: java.lang.IllegalStateException -> Lc0
            int r8 = r0.flags     // Catch: java.lang.IllegalStateException -> Lc0
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo     // Catch: java.lang.IllegalStateException -> Lc0
            long r9 = r0.presentationTimeUs     // Catch: java.lang.IllegalStateException -> Lc0
            boolean r11 = r12.shouldSkipOutputBuffer     // Catch: java.lang.IllegalStateException -> Lc0
            r0 = r15
            r1 = r16
            r3 = r18
            boolean r0 = r0.processOutputBuffer(r1, r3, r5, r6, r7, r8, r9, r11)     // Catch: java.lang.IllegalStateException -> Lc0
            goto Le4
        Lc0:
            r15.processEndOfStream()
            boolean r0 = r12.outputStreamEnded
            if (r0 == 0) goto Lca
            r15.releaseCodec()
        Lca:
            return r14
        Lcb:
            android.media.MediaCodec r5 = r12.codec
            java.nio.ByteBuffer r6 = r12.outputBuffer
            int r7 = r12.outputIndex
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo
            int r8 = r0.flags
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo
            long r9 = r0.presentationTimeUs
            boolean r11 = r12.shouldSkipOutputBuffer
            r0 = r15
            r1 = r16
            r3 = r18
            boolean r0 = r0.processOutputBuffer(r1, r3, r5, r6, r7, r8, r9, r11)
        Le4:
            if (r0 == 0) goto L101
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo
            long r0 = r0.presentationTimeUs
            r15.onProcessedOutputBuffer(r0)
            android.media.MediaCodec$BufferInfo r0 = r12.outputBufferInfo
            int r0 = r0.flags
            r0 = r0 & 4
            if (r0 == 0) goto Lf7
            r0 = r13
            goto Lf8
        Lf7:
            r0 = r14
        Lf8:
            r15.resetOutputBuffer()
            if (r0 != 0) goto Lfe
            return r13
        Lfe:
            r15.processEndOfStream()
        L101:
            return r14
    }

    private boolean feedInputBuffer() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r13 = this;
            android.media.MediaCodec r0 = r13.codec
            r1 = 0
            if (r0 == 0) goto L1a2
            int r2 = r13.codecReinitializationState
            r3 = 2
            if (r2 == r3) goto L1a2
            boolean r2 = r13.inputStreamEnded
            if (r2 == 0) goto L10
            goto L1a2
        L10:
            int r2 = r13.inputIndex
            if (r2 >= 0) goto L2c
            r4 = 0
            int r0 = r0.dequeueInputBuffer(r4)
            r13.inputIndex = r0
            if (r0 >= 0) goto L1f
            return r1
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r2 = r13.buffer
            java.nio.ByteBuffer r0 = r13.getInputBuffer(r0)
            r2.data = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            r0.clear()
        L2c:
            int r0 = r13.codecReinitializationState
            r2 = 1
            if (r0 != r2) goto L4a
            boolean r0 = r13.codecNeedsEosPropagationWorkaround
            if (r0 == 0) goto L36
            goto L47
        L36:
            r13.codecReceivedEos = r2
            android.media.MediaCodec r4 = r13.codec
            int r5 = r13.inputIndex
            r6 = 0
            r7 = 0
            r8 = 0
            r10 = 4
            r4.queueInputBuffer(r5, r6, r7, r8, r10)
            r13.resetInputBuffer()
        L47:
            r13.codecReinitializationState = r3
            return r1
        L4a:
            boolean r0 = r13.codecNeedsAdaptationWorkaroundBuffer
            if (r0 == 0) goto L6d
            r13.codecNeedsAdaptationWorkaroundBuffer = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            java.nio.ByteBuffer r0 = r0.data
            byte[] r1 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer.ADAPTATION_WORKAROUND_BUFFER
            r0.put(r1)
            android.media.MediaCodec r3 = r13.codec
            int r4 = r13.inputIndex
            r5 = 0
            byte[] r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer.ADAPTATION_WORKAROUND_BUFFER
            int r6 = r0.length
            r7 = 0
            r9 = 0
            r3.queueInputBuffer(r4, r5, r6, r7, r9)
            r13.resetInputBuffer()
            r13.codecReceivedBuffers = r2
            return r2
        L6d:
            boolean r0 = r13.waitingForKeys
            if (r0 == 0) goto L74
            r0 = -4
            r4 = r1
            goto Lac
        L74:
            int r0 = r13.codecReconfigurationState
            if (r0 != r2) goto L99
            r0 = r1
        L79:
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r13.format
            java.util.List<byte[]> r4 = r4.initializationData
            int r4 = r4.size()
            if (r0 >= r4) goto L97
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r13.format
            java.util.List<byte[]> r4 = r4.initializationData
            java.lang.Object r4 = r4.get(r0)
            byte[] r4 = (byte[]) r4
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r5 = r13.buffer
            java.nio.ByteBuffer r5 = r5.data
            r5.put(r4)
            int r0 = r0 + 1
            goto L79
        L97:
            r13.codecReconfigurationState = r3
        L99:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            java.nio.ByteBuffer r0 = r0.data
            int r0 = r0.position()
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r4 = r13.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r5 = r13.buffer
            int r4 = r13.readSource(r4, r5, r1)
            r12 = r4
            r4 = r0
            r0 = r12
        Lac:
            r5 = -3
            if (r0 != r5) goto Lb0
            return r1
        Lb0:
            r5 = -5
            if (r0 != r5) goto Lc6
            int r0 = r13.codecReconfigurationState
            if (r0 != r3) goto Lbe
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            r0.clear()
            r13.codecReconfigurationState = r2
        Lbe:
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r0 = r13.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r0.format
            r13.onInputFormatChanged(r0)
            return r2
        Lc6:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            boolean r0 = r0.isEndOfStream()
            if (r0 == 0) goto L104
            int r0 = r13.codecReconfigurationState
            if (r0 != r3) goto Ld9
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            r0.clear()
            r13.codecReconfigurationState = r2
        Ld9:
            r13.inputStreamEnded = r2
            boolean r0 = r13.codecReceivedBuffers
            if (r0 != 0) goto Le3
            r13.processEndOfStream()
            return r1
        Le3:
            boolean r0 = r13.codecNeedsEosPropagationWorkaround     // Catch: android.media.MediaCodec.CryptoException -> Lfa
            if (r0 == 0) goto Le8
            goto Lf9
        Le8:
            r13.codecReceivedEos = r2     // Catch: android.media.MediaCodec.CryptoException -> Lfa
            android.media.MediaCodec r3 = r13.codec     // Catch: android.media.MediaCodec.CryptoException -> Lfa
            int r4 = r13.inputIndex     // Catch: android.media.MediaCodec.CryptoException -> Lfa
            r5 = 0
            r6 = 0
            r7 = 0
            r9 = 4
            r3.queueInputBuffer(r4, r5, r6, r7, r9)     // Catch: android.media.MediaCodec.CryptoException -> Lfa
            r13.resetInputBuffer()     // Catch: android.media.MediaCodec.CryptoException -> Lfa
        Lf9:
            return r1
        Lfa:
            r0 = move-exception
            int r1 = r13.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
        L104:
            boolean r0 = r13.waitingForFirstSyncFrame
            if (r0 == 0) goto L11c
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            boolean r0 = r0.isKeyFrame()
            if (r0 != 0) goto L11c
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            r0.clear()
            int r0 = r13.codecReconfigurationState
            if (r0 != r3) goto L11b
            r13.codecReconfigurationState = r2
        L11b:
            return r2
        L11c:
            r13.waitingForFirstSyncFrame = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer
            boolean r0 = r0.isEncrypted()
            boolean r3 = r13.shouldWaitForKeys(r0)
            r13.waitingForKeys = r3
            if (r3 == 0) goto L12d
            return r1
        L12d:
            boolean r3 = r13.codecNeedsDiscardToSpsWorkaround
            if (r3 == 0) goto L147
            if (r0 != 0) goto L147
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer
            java.nio.ByteBuffer r3 = r3.data
            com.mbridge.msdk.playercommon.exoplayer2.util.NalUnitUtil.discardToSps(r3)
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer
            java.nio.ByteBuffer r3 = r3.data
            int r3 = r3.position()
            if (r3 != 0) goto L145
            return r2
        L145:
            r13.codecNeedsDiscardToSpsWorkaround = r1
        L147:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            long r9 = r3.timeUs     // Catch: android.media.MediaCodec.CryptoException -> L198
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            boolean r3 = r3.isDecodeOnly()     // Catch: android.media.MediaCodec.CryptoException -> L198
            if (r3 == 0) goto L15c
            java.util.List<java.lang.Long> r3 = r13.decodeOnlyPresentationTimestamps     // Catch: android.media.MediaCodec.CryptoException -> L198
            java.lang.Long r5 = java.lang.Long.valueOf(r9)     // Catch: android.media.MediaCodec.CryptoException -> L198
            r3.add(r5)     // Catch: android.media.MediaCodec.CryptoException -> L198
        L15c:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            r3.flip()     // Catch: android.media.MediaCodec.CryptoException -> L198
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            r13.onQueueInputBuffer(r3)     // Catch: android.media.MediaCodec.CryptoException -> L198
            if (r0 == 0) goto L178
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            android.media.MediaCodec$CryptoInfo r8 = getFrameworkCryptoInfo(r0, r4)     // Catch: android.media.MediaCodec.CryptoException -> L198
            android.media.MediaCodec r5 = r13.codec     // Catch: android.media.MediaCodec.CryptoException -> L198
            int r6 = r13.inputIndex     // Catch: android.media.MediaCodec.CryptoException -> L198
            r7 = 0
            r11 = 0
            r5.queueSecureInputBuffer(r6, r7, r8, r9, r11)     // Catch: android.media.MediaCodec.CryptoException -> L198
            goto L189
        L178:
            android.media.MediaCodec r5 = r13.codec     // Catch: android.media.MediaCodec.CryptoException -> L198
            int r6 = r13.inputIndex     // Catch: android.media.MediaCodec.CryptoException -> L198
            r7 = 0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r13.buffer     // Catch: android.media.MediaCodec.CryptoException -> L198
            java.nio.ByteBuffer r0 = r0.data     // Catch: android.media.MediaCodec.CryptoException -> L198
            int r8 = r0.limit()     // Catch: android.media.MediaCodec.CryptoException -> L198
            r11 = 0
            r5.queueInputBuffer(r6, r7, r8, r9, r11)     // Catch: android.media.MediaCodec.CryptoException -> L198
        L189:
            r13.resetInputBuffer()     // Catch: android.media.MediaCodec.CryptoException -> L198
            r13.codecReceivedBuffers = r2     // Catch: android.media.MediaCodec.CryptoException -> L198
            r13.codecReconfigurationState = r1     // Catch: android.media.MediaCodec.CryptoException -> L198
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r13.decoderCounters     // Catch: android.media.MediaCodec.CryptoException -> L198
            int r1 = r0.inputBufferCount     // Catch: android.media.MediaCodec.CryptoException -> L198
            int r1 = r1 + r2
            r0.inputBufferCount = r1     // Catch: android.media.MediaCodec.CryptoException -> L198
            return r2
        L198:
            r0 = move-exception
            int r1 = r13.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
        L1a2:
            return r1
    }

    private void getCodecBuffers() {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto L16
            android.media.MediaCodec r0 = r2.codec
            java.nio.ByteBuffer[] r0 = r0.getInputBuffers()
            r2.inputBuffers = r0
            android.media.MediaCodec r0 = r2.codec
            java.nio.ByteBuffer[] r0 = r0.getOutputBuffers()
            r2.outputBuffers = r0
        L16:
            return
    }

    private static android.media.MediaCodec.CryptoInfo getFrameworkCryptoInfo(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r3, int r4) {
            com.mbridge.msdk.playercommon.exoplayer2.decoder.CryptoInfo r3 = r3.cryptoInfo
            android.media.MediaCodec$CryptoInfo r3 = r3.getFrameworkCryptoInfoV16()
            if (r4 != 0) goto L9
            return r3
        L9:
            int[] r0 = r3.numBytesOfClearData
            if (r0 != 0) goto L12
            r0 = 1
            int[] r0 = new int[r0]
            r3.numBytesOfClearData = r0
        L12:
            int[] r0 = r3.numBytesOfClearData
            r1 = 0
            r2 = r0[r1]
            int r2 = r2 + r4
            r0[r1] = r2
            return r3
    }

    private java.nio.ByteBuffer getInputBuffer(int r3) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.media.MediaCodec r0 = r2.codec
            java.nio.ByteBuffer r3 = r0.getInputBuffer(r3)
            return r3
        Ld:
            java.nio.ByteBuffer[] r0 = r2.inputBuffers
            r3 = r0[r3]
            return r3
    }

    private java.nio.ByteBuffer getOutputBuffer(int r3) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Ld
            android.media.MediaCodec r0 = r2.codec
            java.nio.ByteBuffer r3 = r0.getOutputBuffer(r3)
            return r3
        Ld:
            java.nio.ByteBuffer[] r0 = r2.outputBuffers
            r3 = r0[r3]
            return r3
    }

    private boolean hasOutputBuffer() {
            r1 = this;
            int r0 = r1.outputIndex
            if (r0 < 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    private void processEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            int r0 = r2.codecReinitializationState
            r1 = 2
            if (r0 != r1) goto Lc
            r2.releaseCodec()
            r2.maybeInitCodec()
            goto L12
        Lc:
            r0 = 1
            r2.outputStreamEnded = r0
            r2.renderToEndOfStream()
        L12:
            return
    }

    private void processOutputBuffersChanged() {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto Le
            android.media.MediaCodec r0 = r2.codec
            java.nio.ByteBuffer[] r0 = r0.getOutputBuffers()
            r2.outputBuffers = r0
        Le:
            return
    }

    private void processOutputFormat() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            android.media.MediaCodec r0 = r4.codec
            android.media.MediaFormat r0 = r0.getOutputFormat()
            int r1 = r4.codecAdaptationWorkaroundMode
            r2 = 1
            if (r1 == 0) goto L20
            java.lang.String r1 = "width"
            int r1 = r0.getInteger(r1)
            r3 = 32
            if (r1 != r3) goto L20
            java.lang.String r1 = "height"
            int r1 = r0.getInteger(r1)
            if (r1 != r3) goto L20
            r4.shouldSkipAdaptationWorkaroundOutputBuffer = r2
            return
        L20:
            boolean r1 = r4.codecNeedsMonoChannelCountWorkaround
            if (r1 == 0) goto L29
            java.lang.String r1 = "channel-count"
            r0.setInteger(r1, r2)
        L29:
            android.media.MediaCodec r1 = r4.codec
            r4.onOutputFormatChanged(r1, r0)
            return
    }

    private void resetCodecBuffers() {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 >= r1) goto Lb
            r0 = 0
            r2.inputBuffers = r0
            r2.outputBuffers = r0
        Lb:
            return
    }

    private void resetInputBuffer() {
            r2 = this;
            r0 = -1
            r2.inputIndex = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r2.buffer
            r1 = 0
            r0.data = r1
            return
    }

    private void resetOutputBuffer() {
            r1 = this;
            r0 = -1
            r1.outputIndex = r0
            r0 = 0
            r1.outputBuffer = r0
            return
    }

    private boolean shouldSkipOutputBuffer(long r6) {
            r5 = this;
            java.util.List<java.lang.Long> r0 = r5.decodeOnlyPresentationTimestamps
            int r0 = r0.size()
            r1 = 0
            r2 = r1
        L8:
            if (r2 >= r0) goto L24
            java.util.List<java.lang.Long> r3 = r5.decodeOnlyPresentationTimestamps
            java.lang.Object r3 = r3.get(r2)
            java.lang.Long r3 = (java.lang.Long) r3
            long r3 = r3.longValue()
            int r3 = (r3 > r6 ? 1 : (r3 == r6 ? 0 : -1))
            if (r3 != 0) goto L21
            java.util.List<java.lang.Long> r6 = r5.decodeOnlyPresentationTimestamps
            r6.remove(r2)
            r6 = 1
            return r6
        L21:
            int r2 = r2 + 1
            goto L8
        L24:
            return r1
    }

    private boolean shouldWaitForKeys(boolean r4) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r0 = r3.drmSession
            r1 = 0
            if (r0 == 0) goto L29
            if (r4 != 0) goto Lc
            boolean r4 = r3.playClearSamplesWithoutKeys
            if (r4 == 0) goto Lc
            goto L29
        Lc:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4 = r3.drmSession
            int r4 = r4.getState()
            r0 = 1
            if (r4 == r0) goto L1a
            r2 = 4
            if (r4 == r2) goto L19
            r1 = r0
        L19:
            return r1
        L1a:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r4 = r3.drmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r4 = r4.getError()
            int r0 = r3.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r4 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r4, r0)
            throw r4
        L29:
            return r1
    }

    private void throwDecoderInitError(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer.DecoderInitializationException r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            int r0 = r1.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r2 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r2, r0)
            throw r2
    }

    protected int canKeepCodec(android.media.MediaCodec r1, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            r0 = this;
            r1 = 0
            return r1
    }

    protected abstract void configureCodec(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1, android.media.MediaCodec r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, android.media.MediaCrypto r4) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException;

    protected void flushCodec() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.codecHotswapDeadlineMs = r0
            r3.resetInputBuffer()
            r3.resetOutputBuffer()
            r0 = 1
            r3.waitingForFirstSyncFrame = r0
            r1 = 0
            r3.waitingForKeys = r1
            r3.shouldSkipOutputBuffer = r1
            java.util.List<java.lang.Long> r2 = r3.decodeOnlyPresentationTimestamps
            r2.clear()
            r3.codecNeedsAdaptationWorkaroundBuffer = r1
            r3.shouldSkipAdaptationWorkaroundOutputBuffer = r1
            boolean r2 = r3.codecNeedsFlushWorkaround
            if (r2 != 0) goto L3e
            boolean r2 = r3.codecNeedsEosFlushWorkaround
            if (r2 == 0) goto L2b
            boolean r2 = r3.codecReceivedEos
            if (r2 == 0) goto L2b
            goto L3e
        L2b:
            int r2 = r3.codecReinitializationState
            if (r2 == 0) goto L36
            r3.releaseCodec()
            r3.maybeInitCodec()
            goto L44
        L36:
            android.media.MediaCodec r2 = r3.codec
            r2.flush()
            r3.codecReceivedBuffers = r1
            goto L44
        L3e:
            r3.releaseCodec()
            r3.maybeInitCodec()
        L44:
            boolean r1 = r3.codecReconfigured
            if (r1 == 0) goto L4e
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = r3.format
            if (r1 == 0) goto L4e
            r3.codecReconfigurationState = r0
        L4e:
            return
    }

    protected final android.media.MediaCodec getCodec() {
            r1 = this;
            android.media.MediaCodec r0 = r1.codec
            return r0
    }

    protected final com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getCodecInfo() {
            r1 = this;
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r1.codecInfo
            return r0
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getDecoderInfo(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r1, com.mbridge.msdk.playercommon.exoplayer2.Format r2, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r0 = this;
            java.lang.String r2 = r2.sampleMimeType
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1 = r1.getDecoderInfo(r2, r3)
            return r1
    }

    protected long getDequeueOutputBufferTimeoutUs() {
            r2 = this;
            r0 = 0
            return r0
    }

    @Override
    public boolean isEnded() {
            r1 = this;
            boolean r0 = r1.outputStreamEnded
            return r0
    }

    @Override
    public boolean isReady() {
            r4 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r4.format
            if (r0 == 0) goto L2b
            boolean r0 = r4.waitingForKeys
            if (r0 != 0) goto L2b
            boolean r0 = r4.isSourceReady()
            if (r0 != 0) goto L29
            boolean r0 = r4.hasOutputBuffer()
            if (r0 != 0) goto L29
            long r0 = r4.codecHotswapDeadlineMs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 == 0) goto L2b
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.codecHotswapDeadlineMs
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 >= 0) goto L2b
        L29:
            r0 = 1
            goto L2c
        L2b:
            r0 = 0
        L2c:
            return r0
    }

    protected final void maybeInitCodec() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r12 = this;
            android.media.MediaCodec r0 = r12.codec
            if (r0 != 0) goto L176
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r12.format
            if (r0 != 0) goto La
            goto L176
        La:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r12.pendingDrmSession
            r12.drmSession = r1
            java.lang.String r0 = r0.sampleMimeType
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r12.drmSession
            r2 = 0
            r3 = 0
            r4 = 1
            if (r1 == 0) goto L54
            com.mbridge.msdk.playercommon.exoplayer2.drm.ExoMediaCrypto r1 = r1.getMediaCrypto()
            com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto r1 = (com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto) r1
            if (r1 != 0) goto L2b
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r12.drmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r1 = r1.getError()
            if (r1 == 0) goto L2a
            r1 = r2
            r5 = r3
            goto L33
        L2a:
            return
        L2b:
            android.media.MediaCrypto r5 = r1.getWrappedMediaCrypto()
            boolean r1 = r1.requiresSecureDecoderComponent(r0)
        L33:
            boolean r6 = r12.deviceNeedsDrmKeysToConfigureCodecWorkaround()
            if (r6 == 0) goto L56
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r6 = r12.drmSession
            int r6 = r6.getState()
            if (r6 == r4) goto L45
            r7 = 4
            if (r6 == r7) goto L56
            return
        L45:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r0 = r12.drmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession$DrmSessionException r0 = r0.getError()
            int r1 = r12.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r0 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r0, r1)
            throw r0
        L54:
            r1 = r2
            r5 = r3
        L56:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r6 = r12.codecInfo
            if (r6 != 0) goto Lbb
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r6 = r12.mediaCodecSelector     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r12.format     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r6 = r12.getDecoderInfo(r6, r7, r1)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            r12.codecInfo = r6     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            if (r6 != 0) goto Laa
            if (r1 == 0) goto Laa
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r6 = r12.mediaCodecSelector     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = r12.format     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2 = r12.getDecoderInfo(r6, r7, r2)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            r12.codecInfo = r2     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            if (r2 == 0) goto Laa
            java.lang.String r2 = "MediaCodecRenderer"
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            r6.<init>()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            java.lang.String r7 = "Drm session requires secure decoder for "
            r6.append(r7)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            r6.append(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            java.lang.String r0 = ", but no secure decoder available. Trying to proceed with "
            r6.append(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r12.codecInfo     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            java.lang.String r0 = r0.name     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            r6.append(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            java.lang.String r0 = "."
            r6.append(r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            java.lang.String r0 = r6.toString()     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            android.util.Log.w(r2, r0)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9c
            goto Laa
        L9c:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException r2 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r12.format
            r7 = -49998(0xffffffffffff3cb2, float:NaN)
            r2.<init>(r6, r0, r1, r7)
            r12.throwDecoderInitError(r2)
        Laa:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r12.codecInfo
            if (r0 != 0) goto Lbb
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException r0 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r12.format
            r6 = -49999(0xffffffffffff3cb1, float:NaN)
            r0.<init>(r2, r3, r1, r6)
            r12.throwDecoderInitError(r0)
        Lbb:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r12.codecInfo
            boolean r0 = r12.shouldInitCodec(r0)
            if (r0 != 0) goto Lc4
            return
        Lc4:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r12.codecInfo
            java.lang.String r0 = r0.name
            int r2 = r12.codecAdaptationWorkaroundMode(r0)
            r12.codecAdaptationWorkaroundMode = r2
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r12.format
            boolean r2 = codecNeedsDiscardToSpsWorkaround(r0, r2)
            r12.codecNeedsDiscardToSpsWorkaround = r2
            boolean r2 = codecNeedsFlushWorkaround(r0)
            r12.codecNeedsFlushWorkaround = r2
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2 = r12.codecInfo
            boolean r2 = codecNeedsEosPropagationWorkaround(r2)
            r12.codecNeedsEosPropagationWorkaround = r2
            boolean r2 = codecNeedsEosFlushWorkaround(r0)
            r12.codecNeedsEosFlushWorkaround = r2
            boolean r2 = codecNeedsEosOutputExceptionWorkaround(r0)
            r12.codecNeedsEosOutputExceptionWorkaround = r2
            com.mbridge.msdk.playercommon.exoplayer2.Format r2 = r12.format
            boolean r2 = codecNeedsMonoChannelCountWorkaround(r0, r2)
            r12.codecNeedsMonoChannelCountWorkaround = r2
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L146
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L146
            r6.<init>()     // Catch: java.lang.Exception -> L146
            java.lang.String r7 = "createCodec:"
            r6.append(r7)     // Catch: java.lang.Exception -> L146
            r6.append(r0)     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = r6.toString()     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r6)     // Catch: java.lang.Exception -> L146
            android.media.MediaCodec r6 = android.media.MediaCodec.createByCodecName(r0)     // Catch: java.lang.Exception -> L146
            r12.codec = r6     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: java.lang.Exception -> L146
            java.lang.String r6 = "configureCodec"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r6)     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r6 = r12.codecInfo     // Catch: java.lang.Exception -> L146
            android.media.MediaCodec r7 = r12.codec     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = r12.format     // Catch: java.lang.Exception -> L146
            r12.configureCodec(r6, r7, r8, r5)     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: java.lang.Exception -> L146
            java.lang.String r5 = "startCodec"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r5)     // Catch: java.lang.Exception -> L146
            android.media.MediaCodec r5 = r12.codec     // Catch: java.lang.Exception -> L146
            r5.start()     // Catch: java.lang.Exception -> L146
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()     // Catch: java.lang.Exception -> L146
            long r8 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Exception -> L146
            long r10 = r8 - r2
            r6 = r12
            r7 = r0
            r6.onCodecInitialized(r7, r8, r10)     // Catch: java.lang.Exception -> L146
            r12.getCodecBuffers()     // Catch: java.lang.Exception -> L146
            goto L151
        L146:
            r2 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException r3 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer$DecoderInitializationException
            com.mbridge.msdk.playercommon.exoplayer2.Format r5 = r12.format
            r3.<init>(r5, r2, r1, r0)
            r12.throwDecoderInitError(r3)
        L151:
            int r0 = r12.getState()
            r1 = 2
            if (r0 != r1) goto L160
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 + r2
            goto L165
        L160:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L165:
            r12.codecHotswapDeadlineMs = r0
            r12.resetInputBuffer()
            r12.resetOutputBuffer()
            r12.waitingForFirstSyncFrame = r4
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r12.decoderCounters
            int r1 = r0.decoderInitCount
            int r1 = r1 + r4
            r0.decoderInitCount = r1
        L176:
            return
    }

    protected void onCodecInitialized(java.lang.String r1, long r2, long r4) {
            r0 = this;
            return
    }

    @Override
    protected void onDisabled() {
            r4 = this;
            r0 = 0
            r4.format = r0
            r4.releaseCodec()     // Catch: java.lang.Throwable -> L4a
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r4.drmSession     // Catch: java.lang.Throwable -> L2d
            if (r1 == 0) goto L11
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L2d
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> L2d
            r1.releaseSession(r2)     // Catch: java.lang.Throwable -> L2d
        L11:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L27
            if (r1 == 0) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> L27
            if (r1 == r2) goto L22
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L27
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L27
            r1.releaseSession(r2)     // Catch: java.lang.Throwable -> L27
        L22:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            return
        L27:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L2d:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L44
            if (r2 == 0) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> L44
            if (r2 == r3) goto L3f
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L44
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L44
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> L44
        L3f:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L44:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L4a:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession     // Catch: java.lang.Throwable -> L72
            if (r2 == 0) goto L56
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L72
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> L72
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> L72
        L56:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L6c
            if (r2 == 0) goto L67
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> L6c
            if (r2 == r3) goto L67
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L6c
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L6c
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> L6c
        L67:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L6c:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L72:
            r1 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L89
            if (r2 == 0) goto L84
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSession     // Catch: java.lang.Throwable -> L89
            if (r2 == r3) goto L84
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession     // Catch: java.lang.Throwable -> L89
            r2.releaseSession(r3)     // Catch: java.lang.Throwable -> L89
        L84:
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
        L89:
            r1 = move-exception
            r4.drmSession = r0
            r4.pendingDrmSession = r0
            throw r1
    }

    @Override
    protected void onEnabled(boolean r1) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = new com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters
            r1.<init>()
            r0.decoderCounters = r1
            return
    }

    protected void onInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r5.format
            r5.format = r6
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r6 = r6.drmInitData
            r1 = 0
            if (r0 != 0) goto Lb
            r2 = r1
            goto Ld
        Lb:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = r0.drmInitData
        Ld:
            boolean r6 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r6, r2)
            r2 = 1
            r6 = r6 ^ r2
            if (r6 == 0) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r5.format
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r6 = r6.drmInitData
            if (r6 == 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r6 = r5.drmSessionManager
            if (r6 == 0) goto L37
            android.os.Looper r1 = android.os.Looper.myLooper()
            com.mbridge.msdk.playercommon.exoplayer2.Format r3 = r5.format
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r3.drmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession r6 = r6.acquireSession(r1, r3)
            r5.pendingDrmSession = r6
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r5.drmSession
            if (r6 != r1) goto L49
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r5.drmSessionManager
            r1.releaseSession(r6)
            goto L49
        L37:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            java.lang.String r0 = "Media requires a DrmSessionManager"
            r6.<init>(r0)
            int r0 = r5.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r6 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r6, r0)
            throw r6
        L47:
            r5.pendingDrmSession = r1
        L49:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r6 = r5.pendingDrmSession
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r5.drmSession
            r3 = 0
            if (r6 != r1) goto L89
            android.media.MediaCodec r6 = r5.codec
            if (r6 == 0) goto L89
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1 = r5.codecInfo
            com.mbridge.msdk.playercommon.exoplayer2.Format r4 = r5.format
            int r6 = r5.canKeepCodec(r6, r1, r0, r4)
            if (r6 == 0) goto L89
            if (r6 == r2) goto L88
            r1 = 3
            if (r6 != r1) goto L82
            r5.codecReconfigured = r2
            r5.codecReconfigurationState = r2
            int r6 = r5.codecAdaptationWorkaroundMode
            r1 = 2
            if (r6 == r1) goto L7e
            if (r6 != r2) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r5.format
            int r6 = r6.width
            int r1 = r0.width
            if (r6 != r1) goto L7f
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r5.format
            int r6 = r6.height
            int r0 = r0.height
            if (r6 != r0) goto L7f
        L7e:
            r3 = r2
        L7f:
            r5.codecNeedsAdaptationWorkaroundBuffer = r3
            goto L88
        L82:
            java.lang.IllegalStateException r6 = new java.lang.IllegalStateException
            r6.<init>()
            throw r6
        L88:
            r3 = r2
        L89:
            if (r3 != 0) goto L98
            boolean r6 = r5.codecReceivedBuffers
            if (r6 == 0) goto L92
            r5.codecReinitializationState = r2
            goto L98
        L92:
            r5.releaseCodec()
            r5.maybeInitCodec()
        L98:
            return
    }

    protected void onOutputFormatChanged(android.media.MediaCodec r1, android.media.MediaFormat r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    @Override
    protected void onPositionReset(long r1, boolean r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            r1 = 0
            r0.inputStreamEnded = r1
            r0.outputStreamEnded = r1
            android.media.MediaCodec r1 = r0.codec
            if (r1 == 0) goto Lc
            r0.flushCodec()
        Lc:
            return
    }

    protected void onProcessedOutputBuffer(long r1) {
            r0 = this;
            return
    }

    protected void onQueueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r1) {
            r0 = this;
            return
    }

    @Override
    protected void onStarted() {
            r0 = this;
            return
    }

    @Override
    protected void onStopped() {
            r0 = this;
            return
    }

    protected abstract boolean processOutputBuffer(long r1, long r3, android.media.MediaCodec r5, java.nio.ByteBuffer r6, int r7, int r8, long r9, boolean r11) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;

    protected void releaseCodec() {
            r4 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r4.codecHotswapDeadlineMs = r0
            r4.resetInputBuffer()
            r4.resetOutputBuffer()
            r0 = 0
            r4.waitingForKeys = r0
            r4.shouldSkipOutputBuffer = r0
            java.util.List<java.lang.Long> r1 = r4.decodeOnlyPresentationTimestamps
            r1.clear()
            r4.resetCodecBuffers()
            r1 = 0
            r4.codecInfo = r1
            r4.codecReconfigured = r0
            r4.codecReceivedBuffers = r0
            r4.codecNeedsDiscardToSpsWorkaround = r0
            r4.codecNeedsFlushWorkaround = r0
            r4.codecAdaptationWorkaroundMode = r0
            r4.codecNeedsEosPropagationWorkaround = r0
            r4.codecNeedsEosFlushWorkaround = r0
            r4.codecNeedsMonoChannelCountWorkaround = r0
            r4.codecNeedsAdaptationWorkaroundBuffer = r0
            r4.shouldSkipAdaptationWorkaroundOutputBuffer = r0
            r4.codecReceivedEos = r0
            r4.codecReconfigurationState = r0
            r4.codecReinitializationState = r0
            android.media.MediaCodec r0 = r4.codec
            if (r0 == 0) goto Lb0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r4.decoderCounters
            int r2 = r0.decoderReleaseCount
            int r2 = r2 + 1
            r0.decoderReleaseCount = r2
            android.media.MediaCodec r0 = r4.codec     // Catch: java.lang.Throwable -> L7b
            r0.stop()     // Catch: java.lang.Throwable -> L7b
            android.media.MediaCodec r0 = r4.codec     // Catch: java.lang.Throwable -> L63
            r0.release()     // Catch: java.lang.Throwable -> L63
            r4.codec = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r0 = r4.drmSession
            if (r0 == 0) goto Lb0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.pendingDrmSession
            if (r2 == r0) goto Lb0
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L5f
            r2.releaseSession(r0)     // Catch: java.lang.Throwable -> L5f
            r4.drmSession = r1
            goto Lb0
        L5f:
            r0 = move-exception
            r4.drmSession = r1
            throw r0
        L63:
            r0 = move-exception
            r4.codec = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession
            if (r2 == 0) goto L7a
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession
            if (r3 == r2) goto L7a
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L76
            r3.releaseSession(r2)     // Catch: java.lang.Throwable -> L76
            r4.drmSession = r1
            goto L7a
        L76:
            r0 = move-exception
            r4.drmSession = r1
            throw r0
        L7a:
            throw r0
        L7b:
            r0 = move-exception
            android.media.MediaCodec r2 = r4.codec     // Catch: java.lang.Throwable -> L98
            r2.release()     // Catch: java.lang.Throwable -> L98
            r4.codec = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession
            if (r2 == 0) goto L97
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession
            if (r3 == r2) goto L97
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSessionManager     // Catch: java.lang.Throwable -> L93
            r3.releaseSession(r2)     // Catch: java.lang.Throwable -> L93
            r4.drmSession = r1
            goto L97
        L93:
            r0 = move-exception
            r4.drmSession = r1
            throw r0
        L97:
            throw r0
        L98:
            r0 = move-exception
            r4.codec = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2 = r4.drmSession
            if (r2 == 0) goto Laf
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSession<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.pendingDrmSession
            if (r3 == r2) goto Laf
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r3 = r4.drmSessionManager     // Catch: java.lang.Throwable -> Lab
            r3.releaseSession(r2)     // Catch: java.lang.Throwable -> Lab
            r4.drmSession = r1
            goto Laf
        Lab:
            r0 = move-exception
            r4.drmSession = r1
            throw r0
        Laf:
            throw r0
        Lb0:
            return
    }

    @Override
    public void render(long r6, long r8) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            boolean r0 = r5.outputStreamEnded
            if (r0 == 0) goto L8
            r5.renderToEndOfStream()
            return
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r5.format
            r1 = -4
            r2 = -5
            r3 = 1
            if (r0 != 0) goto L37
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r0 = r5.flagsOnlyBuffer
            r0.clear()
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r0 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r4 = r5.flagsOnlyBuffer
            int r0 = r5.readSource(r0, r4, r3)
            if (r0 != r2) goto L26
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r0 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = r0.format
            r5.onInputFormatChanged(r0)
            goto L37
        L26:
            if (r0 != r1) goto L36
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r6 = r5.flagsOnlyBuffer
            boolean r6 = r6.isEndOfStream()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r6)
            r5.inputStreamEnded = r3
            r5.processEndOfStream()
        L36:
            return
        L37:
            r5.maybeInitCodec()
            android.media.MediaCodec r0 = r5.codec
            if (r0 == 0) goto L55
            java.lang.String r0 = "drainAndFeed"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r0)
        L43:
            boolean r0 = r5.drainOutputBuffer(r6, r8)
            if (r0 == 0) goto L4a
            goto L43
        L4a:
            boolean r6 = r5.feedInputBuffer()
            if (r6 == 0) goto L51
            goto L4a
        L51:
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            goto L88
        L55:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r8 = r5.decoderCounters
            int r9 = r8.skippedInputBufferCount
            int r6 = r5.skipSource(r6)
            int r9 = r9 + r6
            r8.skippedInputBufferCount = r9
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r6 = r5.flagsOnlyBuffer
            r6.clear()
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r6 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r7 = r5.flagsOnlyBuffer
            r8 = 0
            int r6 = r5.readSource(r6, r7, r8)
            if (r6 != r2) goto L78
            com.mbridge.msdk.playercommon.exoplayer2.FormatHolder r6 = r5.formatHolder
            com.mbridge.msdk.playercommon.exoplayer2.Format r6 = r6.format
            r5.onInputFormatChanged(r6)
            goto L88
        L78:
            if (r6 != r1) goto L88
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r6 = r5.flagsOnlyBuffer
            boolean r6 = r6.isEndOfStream()
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r6)
            r5.inputStreamEnded = r3
            r5.processEndOfStream()
        L88:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r6 = r5.decoderCounters
            r6.ensureUpdated()
            return
    }

    protected void renderToEndOfStream() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            return
    }

    protected boolean shouldInitCodec(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1) {
            r0 = this;
            r1 = 1
            return r1
    }

    @Override
    public final int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r0 = r2.mediaCodecSelector     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r1 = r2.drmSessionManager     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9
            int r3 = r2.supportsFormat(r0, r1, r3)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L9
            return r3
        L9:
            r3 = move-exception
            int r0 = r2.getIndex()
            com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException r3 = com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException.createForRenderer(r3, r0)
            throw r3
    }

    protected abstract int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r1, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException;

    @Override
    public final int supportsMixedMimeTypeAdaptation() {
            r1 = this;
            r0 = 8
            return r0
    }
}
