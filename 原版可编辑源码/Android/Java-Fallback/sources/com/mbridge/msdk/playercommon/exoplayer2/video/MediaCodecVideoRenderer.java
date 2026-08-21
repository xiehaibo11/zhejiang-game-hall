package com.mbridge.msdk.playercommon.exoplayer2.video;

public class MediaCodecVideoRenderer extends com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer {
    private static final java.lang.String KEY_CROP_BOTTOM = "crop-bottom";
    private static final java.lang.String KEY_CROP_LEFT = "crop-left";
    private static final java.lang.String KEY_CROP_RIGHT = "crop-right";
    private static final java.lang.String KEY_CROP_TOP = "crop-top";
    private static final int MAX_PENDING_OUTPUT_STREAM_OFFSET_COUNT = 10;
    private static final int[] STANDARD_LONG_EDGE_VIDEO_PX = null;
    private static final java.lang.String TAG = "MediaCodecVideoRenderer";
    private static boolean deviceNeedsSetOutputSurfaceWorkaround;
    private static boolean evaluatedDeviceNeedsSetOutputSurfaceWorkaround;
    private final long allowedJoiningTimeMs;
    private int buffersInCodecCount;
    private com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.CodecMaxValues codecMaxValues;
    private boolean codecNeedsSetOutputSurfaceWorkaround;
    private int consecutiveDroppedFrameCount;
    private final android.content.Context context;
    private int currentHeight;
    private float currentPixelWidthHeightRatio;
    private int currentUnappliedRotationDegrees;
    private int currentWidth;
    private final boolean deviceNeedsAutoFrcWorkaround;
    private long droppedFrameAccumulationStartTimeMs;
    private int droppedFrames;
    private android.view.Surface dummySurface;
    private final com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener.EventDispatcher eventDispatcher;
    private final com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper frameReleaseTimeHelper;
    private long initialPositionUs;
    private long joiningDeadlineMs;
    private long lastInputTimeUs;
    private long lastRenderTimeUs;
    private final int maxDroppedFramesToNotify;
    private long outputStreamOffsetUs;
    private int pendingOutputStreamOffsetCount;
    private final long[] pendingOutputStreamOffsetsUs;
    private final long[] pendingOutputStreamSwitchTimesUs;
    private float pendingPixelWidthHeightRatio;
    private int pendingRotationDegrees;
    private boolean renderedFirstFrame;
    private int reportedHeight;
    private float reportedPixelWidthHeightRatio;
    private int reportedUnappliedRotationDegrees;
    private int reportedWidth;
    private int scalingMode;
    private android.view.Surface surface;
    private boolean tunneling;
    private int tunnelingAudioSessionId;
    com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.OnFrameRenderedListenerV23 tunnelingOnFrameRenderedListener;

    static class 1 {
    }

    protected static final class CodecMaxValues {
        public final int height;
        public final int inputSize;
        public final int width;

        public CodecMaxValues(int r1, int r2, int r3) {
                r0 = this;
                r0.<init>()
                r0.width = r1
                r0.height = r2
                r0.inputSize = r3
                return
        }
    }

    private final class OnFrameRenderedListenerV23 implements android.media.MediaCodec.OnFrameRenderedListener {
        final com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer this$0;

        private OnFrameRenderedListenerV23(com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer r1, android.media.MediaCodec r2) {
                r0 = this;
                r0.this$0 = r1
                r0.<init>()
                android.os.Handler r1 = new android.os.Handler
                r1.<init>()
                r2.setOnFrameRenderedListener(r0, r1)
                return
        }

        OnFrameRenderedListenerV23(com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer r1, android.media.MediaCodec r2, com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.1 r3) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        @Override
        public final void onFrameRendered(android.media.MediaCodec r1, long r2, long r4) {
                r0 = this;
                com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer r1 = r0.this$0
                com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$OnFrameRenderedListenerV23 r1 = r1.tunnelingOnFrameRenderedListener
                if (r0 == r1) goto L7
                return
            L7:
                com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer r1 = r0.this$0
                r1.maybeNotifyRenderedFirstFrame()
                return
        }
    }

    static {
            r0 = 9
            int[] r0 = new int[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [1920, 1600, 1440, 1280, 960, 854, 640, 540, 480} // fill-array
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.STANDARD_LONG_EDGE_VIDEO_PX = r0
            return
    }

    public MediaCodecVideoRenderer(android.content.Context r3, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r4) {
            r2 = this;
            r0 = 0
            r2.<init>(r3, r4, r0)
            return
    }

    public MediaCodecVideoRenderer(android.content.Context r9, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r10, long r11) {
            r8 = this;
            r5 = 0
            r6 = 0
            r7 = -1
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r0.<init>(r1, r2, r3, r5, r6, r7)
            return
    }

    public MediaCodecVideoRenderer(android.content.Context r11, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r12, long r13, android.os.Handler r15, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r16, int r17) {
            r10 = this;
            r5 = 0
            r6 = 0
            r0 = r10
            r1 = r11
            r2 = r12
            r3 = r13
            r7 = r15
            r8 = r16
            r9 = r17
            r0.<init>(r1, r2, r3, r5, r6, r7, r8, r9)
            return
    }

    public MediaCodecVideoRenderer(android.content.Context r2, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r3, long r4, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r6, boolean r7, android.os.Handler r8, com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener r9, int r10) {
            r1 = this;
            r0 = 2
            r1.<init>(r0, r3, r6, r7)
            r1.allowedJoiningTimeMs = r4
            r1.maxDroppedFramesToNotify = r10
            android.content.Context r2 = r2.getApplicationContext()
            r1.context = r2
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r3 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper
            r3.<init>(r2)
            r1.frameReleaseTimeHelper = r3
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r2 = new com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher
            r2.<init>(r8, r9)
            r1.eventDispatcher = r2
            boolean r2 = deviceNeedsAutoFrcWorkaround()
            r1.deviceNeedsAutoFrcWorkaround = r2
            r2 = 10
            long[] r3 = new long[r2]
            r1.pendingOutputStreamOffsetsUs = r3
            long[] r2 = new long[r2]
            r1.pendingOutputStreamSwitchTimesUs = r2
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r1.outputStreamOffsetUs = r2
            r1.lastInputTimeUs = r2
            r1.joiningDeadlineMs = r2
            r2 = -1
            r1.currentWidth = r2
            r1.currentHeight = r2
            r2 = -1082130432(0xffffffffbf800000, float:-1.0)
            r1.currentPixelWidthHeightRatio = r2
            r1.pendingPixelWidthHeightRatio = r2
            r2 = 1
            r1.scalingMode = r2
            r1.clearReportedVideoSize()
            return
    }

    private static boolean areAdaptationCompatible(boolean r2, com.mbridge.msdk.playercommon.exoplayer2.Format r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            java.lang.String r0 = r3.sampleMimeType
            java.lang.String r1 = r4.sampleMimeType
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L2a
            int r0 = r3.rotationDegrees
            int r1 = r4.rotationDegrees
            if (r0 != r1) goto L2a
            if (r2 != 0) goto L1e
            int r2 = r3.width
            int r0 = r4.width
            if (r2 != r0) goto L2a
            int r2 = r3.height
            int r0 = r4.height
            if (r2 != r0) goto L2a
        L1e:
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r2 = r3.colorInfo
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r3 = r4.colorInfo
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto L2a
            r2 = 1
            goto L2b
        L2a:
            r2 = 0
        L2b:
            return r2
    }

    private void clearRenderedFirstFrame() {
            r3 = this;
            r0 = 0
            r3.renderedFirstFrame = r0
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 < r1) goto L1b
            boolean r0 = r3.tunneling
            if (r0 == 0) goto L1b
            android.media.MediaCodec r0 = r3.getCodec()
            if (r0 == 0) goto L1b
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$OnFrameRenderedListenerV23 r1 = new com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$OnFrameRenderedListenerV23
            r2 = 0
            r1.<init>(r3, r0, r2)
            r3.tunnelingOnFrameRenderedListener = r1
        L1b:
            return
    }

    private void clearReportedVideoSize() {
            r2 = this;
            r0 = -1
            r2.reportedWidth = r0
            r2.reportedHeight = r0
            r1 = -1082130432(0xffffffffbf800000, float:-1.0)
            r2.reportedPixelWidthHeightRatio = r1
            r2.reportedUnappliedRotationDegrees = r0
            return
    }

    private static void configureTunnelingV21(android.media.MediaFormat r2, int r3) {
            java.lang.String r0 = "tunneled-playback"
            r1 = 1
            r2.setFeatureEnabled(r0, r1)
            java.lang.String r0 = "audio-session-id"
            r2.setInteger(r0, r3)
            return
    }

    private static boolean deviceNeedsAutoFrcWorkaround() {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 22
            if (r0 > r1) goto L1c
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "foster"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r1 = "NVIDIA"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L1c
            r0 = 1
            goto L1d
        L1c:
            r0 = 0
        L1d:
            return r0
    }

    private static android.graphics.Point getCodecMaxSize(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r13, com.mbridge.msdk.playercommon.exoplayer2.Format r14) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            int r0 = r14.height
            int r1 = r14.width
            r2 = 0
            if (r0 <= r1) goto L9
            r0 = 1
            goto La
        L9:
            r0 = r2
        La:
            if (r0 == 0) goto Lf
            int r1 = r14.height
            goto L11
        Lf:
            int r1 = r14.width
        L11:
            if (r0 == 0) goto L16
            int r3 = r14.width
            goto L18
        L16:
            int r3 = r14.height
        L18:
            float r4 = (float) r3
            float r5 = (float) r1
            float r4 = r4 / r5
            int[] r5 = com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.STANDARD_LONG_EDGE_VIDEO_PX
            int r6 = r5.length
        L1e:
            r7 = 0
            if (r2 >= r6) goto L72
            r8 = r5[r2]
            float r9 = (float) r8
            float r9 = r9 * r4
            int r9 = (int) r9
            if (r8 <= r1) goto L72
            if (r9 > r3) goto L2b
            goto L72
        L2b:
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r10 = 21
            if (r7 < r10) goto L4c
            if (r0 == 0) goto L35
            r7 = r9
            goto L36
        L35:
            r7 = r8
        L36:
            if (r0 == 0) goto L39
            goto L3a
        L39:
            r8 = r9
        L3a:
            android.graphics.Point r7 = r13.alignVideoSizeV21(r7, r8)
            float r8 = r14.frameRate
            int r9 = r7.x
            int r10 = r7.y
            double r11 = (double) r8
            boolean r8 = r13.isVideoSizeAndRateSupportedV21(r9, r10, r11)
            if (r8 == 0) goto L6f
            return r7
        L4c:
            r7 = 16
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r8, r7)
            int r8 = r8 * r7
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r9, r7)
            int r9 = r9 * r7
            int r7 = r8 * r9
            int r10 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize()
            if (r7 > r10) goto L6f
            android.graphics.Point r13 = new android.graphics.Point
            if (r0 == 0) goto L66
            r14 = r9
            goto L67
        L66:
            r14 = r8
        L67:
            if (r0 == 0) goto L6a
            goto L6b
        L6a:
            r8 = r9
        L6b:
            r13.<init>(r14, r8)
            return r13
        L6f:
            int r2 = r2 + 1
            goto L1e
        L72:
            return r7
    }

    private static int getMaxInputSize(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            int r0 = r4.maxInputSize
            r1 = -1
            if (r0 == r1) goto L20
            java.util.List<byte[]> r3 = r4.initializationData
            int r3 = r3.size()
            r0 = 0
            r1 = r0
        Ld:
            if (r0 >= r3) goto L1c
            java.util.List<byte[]> r2 = r4.initializationData
            java.lang.Object r2 = r2.get(r0)
            byte[] r2 = (byte[]) r2
            int r2 = r2.length
            int r1 = r1 + r2
            int r0 = r0 + 1
            goto Ld
        L1c:
            int r3 = r4.maxInputSize
            int r3 = r3 + r1
            return r3
        L20:
            java.lang.String r0 = r4.sampleMimeType
            int r1 = r4.width
            int r4 = r4.height
            int r3 = getMaxInputSize(r3, r0, r1, r4)
            return r3
    }

    private static int getMaxInputSize(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r7, java.lang.String r8, int r9, int r10) {
            r0 = -1
            if (r9 == r0) goto La3
            if (r10 != r0) goto L7
            goto La3
        L7:
            int r1 = r8.hashCode()
            r2 = 5
            r3 = 1
            r4 = 4
            r5 = 3
            r6 = 2
            switch(r1) {
                case -1664118616: goto L46;
                case -1662541442: goto L3c;
                case 1187890754: goto L32;
                case 1331836730: goto L28;
                case 1599127256: goto L1e;
                case 1599127257: goto L14;
                default: goto L13;
            }
        L13:
            goto L50
        L14:
            java.lang.String r1 = "video/x-vnd.on2.vp9"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r2
            goto L51
        L1e:
            java.lang.String r1 = "video/x-vnd.on2.vp8"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r5
            goto L51
        L28:
            java.lang.String r1 = "video/avc"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r6
            goto L51
        L32:
            java.lang.String r1 = "video/mp4v-es"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r3
            goto L51
        L3c:
            java.lang.String r1 = "video/hevc"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = r4
            goto L51
        L46:
            java.lang.String r1 = "video/3gpp"
            boolean r8 = r8.equals(r1)
            if (r8 == 0) goto L50
            r8 = 0
            goto L51
        L50:
            r8 = r0
        L51:
            if (r8 == 0) goto L9d
            if (r8 == r3) goto L9d
            if (r8 == r6) goto L60
            if (r8 == r5) goto L9d
            if (r8 == r4) goto L5e
            if (r8 == r2) goto L5e
            return r0
        L5e:
            int r9 = r9 * r10
            goto L9f
        L60:
            java.lang.String r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "BRAVIA 4K 2015"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto L9c
            java.lang.String r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r1 = "Amazon"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto L8d
            java.lang.String r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "KFSOWI"
            boolean r8 = r1.equals(r8)
            if (r8 != 0) goto L9c
            java.lang.String r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "AFTS"
            boolean r8 = r1.equals(r8)
            if (r8 == 0) goto L8d
            boolean r7 = r7.secure
            if (r7 == 0) goto L8d
            goto L9c
        L8d:
            r7 = 16
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r9, r7)
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r10, r7)
            int r8 = r8 * r9
            int r8 = r8 * r7
            int r9 = r8 * 16
            goto L9e
        L9c:
            return r0
        L9d:
            int r9 = r9 * r10
        L9e:
            r4 = r6
        L9f:
            int r9 = r9 * r5
            int r4 = r4 * r6
            int r9 = r9 / r4
            return r9
        La3:
            return r0
    }

    private static boolean isBufferLate(long r2) {
            r0 = -30000(0xffffffffffff8ad0, double:NaN)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L8
            r2 = 1
            goto L9
        L8:
            r2 = 0
        L9:
            return r2
    }

    private static boolean isBufferVeryLate(long r2) {
            r0 = -500000(0xfffffffffff85ee0, double:NaN)
            int r2 = (r2 > r0 ? 1 : (r2 == r0 ? 0 : -1))
            if (r2 >= 0) goto L9
            r2 = 1
            goto La
        L9:
            r2 = 0
        La:
            return r2
    }

    private void maybeNotifyDroppedFrames() {
            r6 = this;
            int r0 = r6.droppedFrames
            if (r0 <= 0) goto L18
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r6.droppedFrameAccumulationStartTimeMs
            long r2 = r0 - r2
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r4 = r6.eventDispatcher
            int r5 = r6.droppedFrames
            r4.droppedFrames(r5, r2)
            r2 = 0
            r6.droppedFrames = r2
            r6.droppedFrameAccumulationStartTimeMs = r0
        L18:
            return
    }

    private void maybeNotifyVideoSizeChanged() {
            r5 = this;
            int r0 = r5.currentWidth
            r1 = -1
            if (r0 != r1) goto L9
            int r0 = r5.currentHeight
            if (r0 == r1) goto L40
        L9:
            int r0 = r5.reportedWidth
            int r1 = r5.currentWidth
            if (r0 != r1) goto L23
            int r0 = r5.reportedHeight
            int r1 = r5.currentHeight
            if (r0 != r1) goto L23
            int r0 = r5.reportedUnappliedRotationDegrees
            int r1 = r5.currentUnappliedRotationDegrees
            if (r0 != r1) goto L23
            float r0 = r5.reportedPixelWidthHeightRatio
            float r1 = r5.currentPixelWidthHeightRatio
            int r0 = (r0 > r1 ? 1 : (r0 == r1 ? 0 : -1))
            if (r0 == 0) goto L40
        L23:
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r5.eventDispatcher
            int r1 = r5.currentWidth
            int r2 = r5.currentHeight
            int r3 = r5.currentUnappliedRotationDegrees
            float r4 = r5.currentPixelWidthHeightRatio
            r0.videoSizeChanged(r1, r2, r3, r4)
            int r0 = r5.currentWidth
            r5.reportedWidth = r0
            int r0 = r5.currentHeight
            r5.reportedHeight = r0
            int r0 = r5.currentUnappliedRotationDegrees
            r5.reportedUnappliedRotationDegrees = r0
            float r0 = r5.currentPixelWidthHeightRatio
            r5.reportedPixelWidthHeightRatio = r0
        L40:
            return
    }

    private void maybeRenotifyRenderedFirstFrame() {
            r2 = this;
            boolean r0 = r2.renderedFirstFrame
            if (r0 == 0) goto Lb
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r2.eventDispatcher
            android.view.Surface r1 = r2.surface
            r0.renderedFirstFrame(r1)
        Lb:
            return
    }

    private void maybeRenotifyVideoSizeChanged() {
            r5 = this;
            int r0 = r5.reportedWidth
            r1 = -1
            if (r0 != r1) goto L9
            int r0 = r5.reportedHeight
            if (r0 == r1) goto L16
        L9:
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r5.eventDispatcher
            int r1 = r5.reportedWidth
            int r2 = r5.reportedHeight
            int r3 = r5.reportedUnappliedRotationDegrees
            float r4 = r5.reportedPixelWidthHeightRatio
            r0.videoSizeChanged(r1, r2, r3, r4)
        L16:
            return
    }

    private void setJoiningDeadlineMs() {
            r4 = this;
            long r0 = r4.allowedJoiningTimeMs
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 <= 0) goto L10
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = r4.allowedJoiningTimeMs
            long r0 = r0 + r2
            goto L15
        L10:
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
        L15:
            r4.joiningDeadlineMs = r0
            return
    }

    private static void setOutputSurfaceV23(android.media.MediaCodec r0, android.view.Surface r1) {
            r0.setOutputSurface(r1)
            return
    }

    private void setSurface(android.view.Surface r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r5 = this;
            if (r6 != 0) goto L1e
            android.view.Surface r0 = r5.dummySurface
            if (r0 == 0) goto L8
            r6 = r0
            goto L1e
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = r5.getCodecInfo()
            if (r0 == 0) goto L1e
            boolean r1 = r5.shouldUseDummySurface(r0)
            if (r1 == 0) goto L1e
            android.content.Context r6 = r5.context
            boolean r0 = r0.secure
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r6 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.newInstanceV17(r6, r0)
            r5.dummySurface = r6
        L1e:
            android.view.Surface r0 = r5.surface
            if (r0 == r6) goto L63
            r5.surface = r6
            int r0 = r5.getState()
            r1 = 1
            r2 = 2
            if (r0 == r1) goto L2e
            if (r0 != r2) goto L4a
        L2e:
            android.media.MediaCodec r1 = r5.getCodec()
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r4 = 23
            if (r3 < r4) goto L44
            if (r1 == 0) goto L44
            if (r6 == 0) goto L44
            boolean r3 = r5.codecNeedsSetOutputSurfaceWorkaround
            if (r3 != 0) goto L44
            setOutputSurfaceV23(r1, r6)
            goto L4a
        L44:
            r5.releaseCodec()
            r5.maybeInitCodec()
        L4a:
            if (r6 == 0) goto L5c
            android.view.Surface r1 = r5.dummySurface
            if (r6 == r1) goto L5c
            r5.maybeRenotifyVideoSizeChanged()
            r5.clearRenderedFirstFrame()
            if (r0 != r2) goto L6f
            r5.setJoiningDeadlineMs()
            goto L6f
        L5c:
            r5.clearReportedVideoSize()
            r5.clearRenderedFirstFrame()
            goto L6f
        L63:
            if (r6 == 0) goto L6f
            android.view.Surface r0 = r5.dummySurface
            if (r6 == r0) goto L6f
            r5.maybeRenotifyVideoSizeChanged()
            r5.maybeRenotifyRenderedFirstFrame()
        L6f:
            return
    }

    private boolean shouldUseDummySurface(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3) {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 < r1) goto L20
            boolean r0 = r2.tunneling
            if (r0 != 0) goto L20
            java.lang.String r0 = r3.name
            boolean r0 = r2.codecNeedsSetOutputSurfaceWorkaround(r0)
            if (r0 != 0) goto L20
            boolean r3 = r3.secure
            if (r3 == 0) goto L1e
            android.content.Context r3 = r2.context
            boolean r3 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.isSecureSupported(r3)
            if (r3 == 0) goto L20
        L1e:
            r3 = 1
            goto L21
        L20:
            r3 = 0
        L21:
            return r3
    }

    @Override
    protected int canKeepCodec(android.media.MediaCodec r2, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3, com.mbridge.msdk.playercommon.exoplayer2.Format r4, com.mbridge.msdk.playercommon.exoplayer2.Format r5) {
            r1 = this;
            boolean r2 = r3.adaptive
            boolean r2 = areAdaptationCompatible(r2, r4, r5)
            if (r2 == 0) goto L2c
            int r2 = r5.width
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r0 = r1.codecMaxValues
            int r0 = r0.width
            if (r2 > r0) goto L2c
            int r2 = r5.height
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r0 = r1.codecMaxValues
            int r0 = r0.height
            if (r2 > r0) goto L2c
            int r2 = getMaxInputSize(r3, r5)
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r3 = r1.codecMaxValues
            int r3 = r3.inputSize
            if (r2 > r3) goto L2c
            boolean r2 = r4.initializationDataEquals(r5)
            if (r2 == 0) goto L2a
            r2 = 1
            goto L2b
        L2a:
            r2 = 3
        L2b:
            return r2
        L2c:
            r2 = 0
            return r2
    }

    protected boolean codecNeedsSetOutputSurfaceWorkaround(java.lang.String r7) {
            r6 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 27
            r2 = 0
            if (r0 >= r1) goto L5d6
            java.lang.String r0 = "OMX.google"
            boolean r7 = r7.startsWith(r0)
            if (r7 == 0) goto L11
            goto L5d6
        L11:
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer> r7 = com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.class
            monitor-enter(r7)
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.evaluatedDeviceNeedsSetOutputSurfaceWorkaround     // Catch: java.lang.Throwable -> L5d3
            if (r0 != 0) goto L5cf
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE     // Catch: java.lang.Throwable -> L5d3
            int r3 = r0.hashCode()     // Catch: java.lang.Throwable -> L5d3
            r4 = -1
            r5 = 1
            switch(r3) {
                case -2144781245: goto L58f;
                case -2144781185: goto L584;
                case -2144781160: goto L579;
                case -2097309513: goto L56e;
                case -2022874474: goto L563;
                case -1978993182: goto L558;
                case -1978990237: goto L54d;
                case -1936688988: goto L542;
                case -1936688066: goto L537;
                case -1936688065: goto L52b;
                case -1931988508: goto L51f;
                case -1696512866: goto L513;
                case -1680025915: goto L507;
                case -1615810839: goto L4fb;
                case -1554255044: goto L4ef;
                case -1481772737: goto L4e3;
                case -1481772730: goto L4d7;
                case -1481772729: goto L4cb;
                case -1320080169: goto L4bf;
                case -1217592143: goto L4b3;
                case -1180384755: goto L4a7;
                case -1139198265: goto L49b;
                case -1052835013: goto L48f;
                case -993250464: goto L484;
                case -965403638: goto L478;
                case -958336948: goto L46c;
                case -879245230: goto L460;
                case -842500323: goto L454;
                case -821392978: goto L449;
                case -797483286: goto L43d;
                case -794946968: goto L431;
                case -788334647: goto L425;
                case -782144577: goto L419;
                case -575125681: goto L40d;
                case -521118391: goto L401;
                case -430914369: goto L3f5;
                case -290434366: goto L3e9;
                case -282781963: goto L3dd;
                case -277133239: goto L3d1;
                case -173639913: goto L3c5;
                case -56598463: goto L3b9;
                case 2126: goto L3ad;
                case 2564: goto L3a1;
                case 2715: goto L395;
                case 2719: goto L389;
                case 3483: goto L37d;
                case 73405: goto L371;
                case 75739: goto L365;
                case 76779: goto L359;
                case 78669: goto L34d;
                case 79305: goto L341;
                case 80618: goto L335;
                case 88274: goto L329;
                case 98846: goto L31d;
                case 98848: goto L311;
                case 99329: goto L305;
                case 101481: goto L2f9;
                case 1513190: goto L2ee;
                case 1514184: goto L2e3;
                case 1514185: goto L2d8;
                case 2436959: goto L2cc;
                case 2463773: goto L2c0;
                case 2464648: goto L2b4;
                case 2689555: goto L2a8;
                case 3351335: goto L29c;
                case 3386211: goto L290;
                case 41325051: goto L284;
                case 55178625: goto L278;
                case 61542055: goto L26d;
                case 65355429: goto L261;
                case 66214468: goto L255;
                case 66214470: goto L249;
                case 66214473: goto L23d;
                case 66215429: goto L231;
                case 66215431: goto L225;
                case 66215433: goto L219;
                case 66216390: goto L20d;
                case 76402249: goto L201;
                case 76404105: goto L1f5;
                case 76404911: goto L1e9;
                case 80963634: goto L1dd;
                case 82882791: goto L1d1;
                case 102844228: goto L1c5;
                case 165221241: goto L1ba;
                case 182191441: goto L1ae;
                case 245388979: goto L1a2;
                case 287431619: goto L196;
                case 307593612: goto L18a;
                case 308517133: goto L17e;
                case 316215098: goto L172;
                case 316215116: goto L166;
                case 316246811: goto L15a;
                case 316246818: goto L14e;
                case 407160593: goto L142;
                case 507412548: goto L136;
                case 793982701: goto L12a;
                case 794038622: goto L11e;
                case 794040393: goto L112;
                case 835649806: goto L106;
                case 917340916: goto Lfb;
                case 958008161: goto Lef;
                case 1060579533: goto Le3;
                case 1150207623: goto Ld7;
                case 1176899427: goto Lcb;
                case 1280332038: goto Lbf;
                case 1306947716: goto Lb5;
                case 1349174697: goto La9;
                case 1522194893: goto L9d;
                case 1691543273: goto L91;
                case 1709443163: goto L85;
                case 1865889110: goto L79;
                case 1906253259: goto L6d;
                case 1977196784: goto L61;
                case 2029784656: goto L55;
                case 2030379515: goto L49;
                case 2047190025: goto L3d;
                case 2047252157: goto L31;
                case 2048319463: goto L25;
                default: goto L23;
            }     // Catch: java.lang.Throwable -> L5d3
        L23:
            goto L59a
        L25:
            java.lang.String r1 = "HWVNS-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 50
            goto L59b
        L31:
            java.lang.String r1 = "ELUGA_Prim"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 25
            goto L59b
        L3d:
            java.lang.String r1 = "ELUGA_Note"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 24
            goto L59b
        L49:
            java.lang.String r1 = "HWCAM-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 49
            goto L59b
        L55:
            java.lang.String r1 = "HWBLN-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 48
            goto L59b
        L61:
            java.lang.String r1 = "Infinix-X572"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 52
            goto L59b
        L6d:
            java.lang.String r1 = "PB2-670M"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 79
            goto L59b
        L79:
            java.lang.String r1 = "santoni"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 95
            goto L59b
        L85:
            java.lang.String r1 = "iball8735_9806"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 51
            goto L59b
        L91:
            java.lang.String r1 = "CPH1609"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 17
            goto L59b
        L9d:
            java.lang.String r1 = "woods_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 111(0x6f, float:1.56E-43)
            goto L59b
        La9:
            java.lang.String r1 = "htc_e56ml_dtul"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 46
            goto L59b
        Lb5:
            java.lang.String r3 = "EverStar_S"
            boolean r0 = r0.equals(r3)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            goto L59b
        Lbf:
            java.lang.String r1 = "hwALE-H"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 47
            goto L59b
        Lcb:
            java.lang.String r1 = "itel_S41"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 54
            goto L59b
        Ld7:
            java.lang.String r1 = "LS-5017"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 59
            goto L59b
        Le3:
            java.lang.String r1 = "panell_d"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 75
            goto L59b
        Lef:
            java.lang.String r1 = "j2xlteins"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 55
            goto L59b
        Lfb:
            java.lang.String r1 = "A7000plus"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 7
            goto L59b
        L106:
            java.lang.String r1 = "manning"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 61
            goto L59b
        L112:
            java.lang.String r1 = "GIONEE_WBL7519"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 44
            goto L59b
        L11e:
            java.lang.String r1 = "GIONEE_WBL7365"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 43
            goto L59b
        L12a:
            java.lang.String r1 = "GIONEE_WBL5708"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 42
            goto L59b
        L136:
            java.lang.String r1 = "QM16XE_U"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 93
            goto L59b
        L142:
            java.lang.String r1 = "Pixi5-10_4G"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 85
            goto L59b
        L14e:
            java.lang.String r1 = "TB3-850M"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 103(0x67, float:1.44E-43)
            goto L59b
        L15a:
            java.lang.String r1 = "TB3-850F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 102(0x66, float:1.43E-43)
            goto L59b
        L166:
            java.lang.String r1 = "TB3-730X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 101(0x65, float:1.42E-43)
            goto L59b
        L172:
            java.lang.String r1 = "TB3-730F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 100
            goto L59b
        L17e:
            java.lang.String r1 = "A7020a48"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 9
            goto L59b
        L18a:
            java.lang.String r1 = "A7010a48"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 8
            goto L59b
        L196:
            java.lang.String r1 = "griffin"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 45
            goto L59b
        L1a2:
            java.lang.String r1 = "marino_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 62
            goto L59b
        L1ae:
            java.lang.String r1 = "CPY83_I00"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 18
            goto L59b
        L1ba:
            java.lang.String r1 = "A2016a40"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 5
            goto L59b
        L1c5:
            java.lang.String r1 = "le_x6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 58
            goto L59b
        L1d1:
            java.lang.String r1 = "X3_HK"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 113(0x71, float:1.58E-43)
            goto L59b
        L1dd:
            java.lang.String r1 = "V23GB"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 106(0x6a, float:1.49E-43)
            goto L59b
        L1e9:
            java.lang.String r1 = "Q4310"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 91
            goto L59b
        L1f5:
            java.lang.String r1 = "Q4260"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 89
            goto L59b
        L201:
            java.lang.String r1 = "PRO7S"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 87
            goto L59b
        L20d:
            java.lang.String r1 = "F3311"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 34
            goto L59b
        L219:
            java.lang.String r1 = "F3215"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 33
            goto L59b
        L225:
            java.lang.String r1 = "F3213"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 32
            goto L59b
        L231:
            java.lang.String r1 = "F3211"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 31
            goto L59b
        L23d:
            java.lang.String r1 = "F3116"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 30
            goto L59b
        L249:
            java.lang.String r1 = "F3113"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 29
            goto L59b
        L255:
            java.lang.String r1 = "F3111"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 28
            goto L59b
        L261:
            java.lang.String r1 = "E5643"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 22
            goto L59b
        L26d:
            java.lang.String r1 = "A1601"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 4
            goto L59b
        L278:
            java.lang.String r1 = "Aura_Note_2"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 11
            goto L59b
        L284:
            java.lang.String r1 = "MEIZU_M5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 63
            goto L59b
        L290:
            java.lang.String r1 = "p212"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 72
            goto L59b
        L29c:
            java.lang.String r1 = "mido"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 65
            goto L59b
        L2a8:
            java.lang.String r1 = "XE2X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 114(0x72, float:1.6E-43)
            goto L59b
        L2b4:
            java.lang.String r1 = "Q427"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 90
            goto L59b
        L2c0:
            java.lang.String r1 = "Q350"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 88
            goto L59b
        L2cc:
            java.lang.String r1 = "P681"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 73
            goto L59b
        L2d8:
            java.lang.String r1 = "1714"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 2
            goto L59b
        L2e3:
            java.lang.String r1 = "1713"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = r5
            goto L59b
        L2ee:
            java.lang.String r1 = "1601"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = r2
            goto L59b
        L2f9:
            java.lang.String r1 = "flo"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 35
            goto L59b
        L305:
            java.lang.String r1 = "deb"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 21
            goto L59b
        L311:
            java.lang.String r1 = "cv3"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 20
            goto L59b
        L31d:
            java.lang.String r1 = "cv1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 19
            goto L59b
        L329:
            java.lang.String r1 = "Z80"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 117(0x75, float:1.64E-43)
            goto L59b
        L335:
            java.lang.String r1 = "QX1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 94
            goto L59b
        L341:
            java.lang.String r1 = "PLE"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 86
            goto L59b
        L34d:
            java.lang.String r1 = "P85"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 74
            goto L59b
        L359:
            java.lang.String r1 = "MX6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 66
            goto L59b
        L365:
            java.lang.String r1 = "M5c"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 60
            goto L59b
        L371:
            java.lang.String r1 = "JGZ"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 56
            goto L59b
        L37d:
            java.lang.String r1 = "mh"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 64
            goto L59b
        L389:
            java.lang.String r1 = "V5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 107(0x6b, float:1.5E-43)
            goto L59b
        L395:
            java.lang.String r1 = "V1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 105(0x69, float:1.47E-43)
            goto L59b
        L3a1:
            java.lang.String r1 = "Q5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 92
            goto L59b
        L3ad:
            java.lang.String r1 = "C1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 14
            goto L59b
        L3b9:
            java.lang.String r1 = "woods_fn"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 112(0x70, float:1.57E-43)
            goto L59b
        L3c5:
            java.lang.String r1 = "ELUGA_A3_Pro"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 23
            goto L59b
        L3d1:
            java.lang.String r1 = "Z12_PRO"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 116(0x74, float:1.63E-43)
            goto L59b
        L3dd:
            java.lang.String r1 = "BLACK-1X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 12
            goto L59b
        L3e9:
            java.lang.String r1 = "taido_row"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 99
            goto L59b
        L3f5:
            java.lang.String r1 = "Pixi4-7_3G"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 84
            goto L59b
        L401:
            java.lang.String r1 = "GIONEE_GBL7360"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 38
            goto L59b
        L40d:
            java.lang.String r1 = "GiONEE_CBL7513"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 36
            goto L59b
        L419:
            java.lang.String r1 = "OnePlus5T"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 71
            goto L59b
        L425:
            java.lang.String r1 = "whyred"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 110(0x6e, float:1.54E-43)
            goto L59b
        L431:
            java.lang.String r1 = "watson"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 109(0x6d, float:1.53E-43)
            goto L59b
        L43d:
            java.lang.String r1 = "SVP-DTV15"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 97
            goto L59b
        L449:
            java.lang.String r1 = "A7000-a"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 6
            goto L59b
        L454:
            java.lang.String r1 = "nicklaus_f"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 68
            goto L59b
        L460:
            java.lang.String r1 = "tcl_eu"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 104(0x68, float:1.46E-43)
            goto L59b
        L46c:
            java.lang.String r1 = "ELUGA_Ray_X"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 26
            goto L59b
        L478:
            java.lang.String r1 = "s905x018"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 98
            goto L59b
        L484:
            java.lang.String r1 = "A10-70F"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 3
            goto L59b
        L48f:
            java.lang.String r1 = "namath"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 67
            goto L59b
        L49b:
            java.lang.String r1 = "Slate_Pro"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 96
            goto L59b
        L4a7:
            java.lang.String r1 = "iris60"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 53
            goto L59b
        L4b3:
            java.lang.String r1 = "BRAVIA_ATV2"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 13
            goto L59b
        L4bf:
            java.lang.String r1 = "GiONEE_GBL7319"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 37
            goto L59b
        L4cb:
            java.lang.String r1 = "panell_dt"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 78
            goto L59b
        L4d7:
            java.lang.String r1 = "panell_ds"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 77
            goto L59b
        L4e3:
            java.lang.String r1 = "panell_dl"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 76
            goto L59b
        L4ef:
            java.lang.String r1 = "vernee_M5"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 108(0x6c, float:1.51E-43)
            goto L59b
        L4fb:
            java.lang.String r1 = "Phantom6"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 83
            goto L59b
        L507:
            java.lang.String r1 = "ComioS1"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 15
            goto L59b
        L513:
            java.lang.String r1 = "XT1663"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 115(0x73, float:1.61E-43)
            goto L59b
        L51f:
            java.lang.String r1 = "AquaPowerM"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 10
            goto L59b
        L52b:
            java.lang.String r1 = "PGN611"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 82
            goto L59b
        L537:
            java.lang.String r1 = "PGN610"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 81
            goto L59b
        L542:
            java.lang.String r1 = "PGN528"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 80
            goto L59b
        L54d:
            java.lang.String r1 = "NX573J"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 70
            goto L59b
        L558:
            java.lang.String r1 = "NX541J"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 69
            goto L59b
        L563:
            java.lang.String r1 = "CP8676_I02"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 16
            goto L59b
        L56e:
            java.lang.String r1 = "K50a40"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 57
            goto L59b
        L579:
            java.lang.String r1 = "GIONEE_SWW1631"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 41
            goto L59b
        L584:
            java.lang.String r1 = "GIONEE_SWW1627"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 40
            goto L59b
        L58f:
            java.lang.String r1 = "GIONEE_SWW1609"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L59a
            r1 = 39
            goto L59b
        L59a:
            r1 = r4
        L59b:
            switch(r1) {
                case 0: goto L59f;
                case 1: goto L59f;
                case 2: goto L59f;
                case 3: goto L59f;
                case 4: goto L59f;
                case 5: goto L59f;
                case 6: goto L59f;
                case 7: goto L59f;
                case 8: goto L59f;
                case 9: goto L59f;
                case 10: goto L59f;
                case 11: goto L59f;
                case 12: goto L59f;
                case 13: goto L59f;
                case 14: goto L59f;
                case 15: goto L59f;
                case 16: goto L59f;
                case 17: goto L59f;
                case 18: goto L59f;
                case 19: goto L59f;
                case 20: goto L59f;
                case 21: goto L59f;
                case 22: goto L59f;
                case 23: goto L59f;
                case 24: goto L59f;
                case 25: goto L59f;
                case 26: goto L59f;
                case 27: goto L59f;
                case 28: goto L59f;
                case 29: goto L59f;
                case 30: goto L59f;
                case 31: goto L59f;
                case 32: goto L59f;
                case 33: goto L59f;
                case 34: goto L59f;
                case 35: goto L59f;
                case 36: goto L59f;
                case 37: goto L59f;
                case 38: goto L59f;
                case 39: goto L59f;
                case 40: goto L59f;
                case 41: goto L59f;
                case 42: goto L59f;
                case 43: goto L59f;
                case 44: goto L59f;
                case 45: goto L59f;
                case 46: goto L59f;
                case 47: goto L59f;
                case 48: goto L59f;
                case 49: goto L59f;
                case 50: goto L59f;
                case 51: goto L59f;
                case 52: goto L59f;
                case 53: goto L59f;
                case 54: goto L59f;
                case 55: goto L59f;
                case 56: goto L59f;
                case 57: goto L59f;
                case 58: goto L59f;
                case 59: goto L59f;
                case 60: goto L59f;
                case 61: goto L59f;
                case 62: goto L59f;
                case 63: goto L59f;
                case 64: goto L59f;
                case 65: goto L59f;
                case 66: goto L59f;
                case 67: goto L59f;
                case 68: goto L59f;
                case 69: goto L59f;
                case 70: goto L59f;
                case 71: goto L59f;
                case 72: goto L59f;
                case 73: goto L59f;
                case 74: goto L59f;
                case 75: goto L59f;
                case 76: goto L59f;
                case 77: goto L59f;
                case 78: goto L59f;
                case 79: goto L59f;
                case 80: goto L59f;
                case 81: goto L59f;
                case 82: goto L59f;
                case 83: goto L59f;
                case 84: goto L59f;
                case 85: goto L59f;
                case 86: goto L59f;
                case 87: goto L59f;
                case 88: goto L59f;
                case 89: goto L59f;
                case 90: goto L59f;
                case 91: goto L59f;
                case 92: goto L59f;
                case 93: goto L59f;
                case 94: goto L59f;
                case 95: goto L59f;
                case 96: goto L59f;
                case 97: goto L59f;
                case 98: goto L59f;
                case 99: goto L59f;
                case 100: goto L59f;
                case 101: goto L59f;
                case 102: goto L59f;
                case 103: goto L59f;
                case 104: goto L59f;
                case 105: goto L59f;
                case 106: goto L59f;
                case 107: goto L59f;
                case 108: goto L59f;
                case 109: goto L59f;
                case 110: goto L59f;
                case 111: goto L59f;
                case 112: goto L59f;
                case 113: goto L59f;
                case 114: goto L59f;
                case 115: goto L59f;
                case 116: goto L59f;
                case 117: goto L59f;
                default: goto L59e;
            }     // Catch: java.lang.Throwable -> L5d3
        L59e:
            goto L5a1
        L59f:
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.deviceNeedsSetOutputSurfaceWorkaround = r5     // Catch: java.lang.Throwable -> L5d3
        L5a1:
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL     // Catch: java.lang.Throwable -> L5d3
            int r1 = r0.hashCode()     // Catch: java.lang.Throwable -> L5d3
            r3 = 2006354(0x1e9d52, float:2.811501E-39)
            if (r1 == r3) goto L5bc
            r2 = 2006367(0x1e9d5f, float:2.811519E-39)
            if (r1 == r2) goto L5b2
            goto L5c5
        L5b2:
            java.lang.String r1 = "AFTN"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L5c5
            r2 = r5
            goto L5c6
        L5bc:
            java.lang.String r1 = "AFTA"
            boolean r0 = r0.equals(r1)     // Catch: java.lang.Throwable -> L5d3
            if (r0 == 0) goto L5c5
            goto L5c6
        L5c5:
            r2 = r4
        L5c6:
            if (r2 == 0) goto L5cb
            if (r2 == r5) goto L5cb
            goto L5cd
        L5cb:
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.deviceNeedsSetOutputSurfaceWorkaround = r5     // Catch: java.lang.Throwable -> L5d3
        L5cd:
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.evaluatedDeviceNeedsSetOutputSurfaceWorkaround = r5     // Catch: java.lang.Throwable -> L5d3
        L5cf:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L5d3
            boolean r7 = com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.deviceNeedsSetOutputSurfaceWorkaround
            return r7
        L5d3:
            r0 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L5d3
            throw r0
        L5d6:
            return r2
    }

    @Override
    protected void configureCodec(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r4, android.media.MediaCodec r5, com.mbridge.msdk.playercommon.exoplayer2.Format r6, android.media.MediaCrypto r7) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r3 = this;
            com.mbridge.msdk.playercommon.exoplayer2.Format[] r0 = r3.getStreamFormats()
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r0 = r3.getCodecMaxValues(r4, r6, r0)
            r3.codecMaxValues = r0
            boolean r1 = r3.deviceNeedsAutoFrcWorkaround
            int r2 = r3.tunnelingAudioSessionId
            android.media.MediaFormat r6 = r3.getMediaFormat(r6, r0, r1, r2)
            android.view.Surface r0 = r3.surface
            if (r0 != 0) goto L2f
            boolean r0 = r3.shouldUseDummySurface(r4)
            com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkState(r0)
            android.view.Surface r0 = r3.dummySurface
            if (r0 != 0) goto L2b
            android.content.Context r0 = r3.context
            boolean r4 = r4.secure
            com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface r4 = com.mbridge.msdk.playercommon.exoplayer2.video.DummySurface.newInstanceV17(r0, r4)
            r3.dummySurface = r4
        L2b:
            android.view.Surface r4 = r3.dummySurface
            r3.surface = r4
        L2f:
            android.view.Surface r4 = r3.surface
            r0 = 0
            r5.configure(r6, r4, r7, r0)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r6 = 23
            if (r4 < r6) goto L47
            boolean r4 = r3.tunneling
            if (r4 == 0) goto L47
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$OnFrameRenderedListenerV23 r4 = new com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$OnFrameRenderedListenerV23
            r6 = 0
            r4.<init>(r3, r5, r6)
            r3.tunnelingOnFrameRenderedListener = r4
        L47:
            return
    }

    protected void dropOutputBuffer(android.media.MediaCodec r1, int r2, long r3) {
            r0 = this;
            java.lang.String r3 = "dropVideoBuffer"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r3)
            r3 = 0
            r1.releaseOutputBuffer(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            r1 = 1
            r0.updateDroppedBufferCounters(r1)
            return
    }

    @Override
    protected void flushCodec() throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            super.flushCodec()
            r0 = 0
            r1.buffersInCodecCount = r0
            return
    }

    protected com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.CodecMaxValues getCodecMaxValues(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r12, com.mbridge.msdk.playercommon.exoplayer2.Format r13, com.mbridge.msdk.playercommon.exoplayer2.Format[] r14) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r11 = this;
            int r0 = r13.width
            int r1 = r13.height
            int r2 = getMaxInputSize(r12, r13)
            int r3 = r14.length
            r4 = 1
            if (r3 != r4) goto L12
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r12 = new com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues
            r12.<init>(r0, r1, r2)
            return r12
        L12:
            int r3 = r14.length
            r5 = 0
            r6 = r5
            r7 = r6
        L16:
            if (r6 >= r3) goto L47
            r8 = r14[r6]
            boolean r9 = r12.adaptive
            boolean r9 = areAdaptationCompatible(r9, r13, r8)
            if (r9 == 0) goto L44
            int r9 = r8.width
            r10 = -1
            if (r9 == r10) goto L2e
            int r9 = r8.height
            if (r9 != r10) goto L2c
            goto L2e
        L2c:
            r9 = r5
            goto L2f
        L2e:
            r9 = r4
        L2f:
            r7 = r7 | r9
            int r9 = r8.width
            int r0 = java.lang.Math.max(r0, r9)
            int r9 = r8.height
            int r1 = java.lang.Math.max(r1, r9)
            int r8 = getMaxInputSize(r12, r8)
            int r2 = java.lang.Math.max(r2, r8)
        L44:
            int r6 = r6 + 1
            goto L16
        L47:
            if (r7 == 0) goto L9d
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r3 = "Resolutions unknown. Codec max resolution: "
            r14.append(r3)
            r14.append(r0)
            java.lang.String r3 = "x"
            r14.append(r3)
            r14.append(r1)
            java.lang.String r14 = r14.toString()
            java.lang.String r4 = "MediaCodecVideoRenderer"
            android.util.Log.w(r4, r14)
            android.graphics.Point r14 = getCodecMaxSize(r12, r13)
            if (r14 == 0) goto L9d
            int r5 = r14.x
            int r0 = java.lang.Math.max(r0, r5)
            int r14 = r14.y
            int r1 = java.lang.Math.max(r1, r14)
            java.lang.String r13 = r13.sampleMimeType
            int r12 = getMaxInputSize(r12, r13, r0, r1)
            int r2 = java.lang.Math.max(r2, r12)
            java.lang.StringBuilder r12 = new java.lang.StringBuilder
            r12.<init>()
            java.lang.String r13 = "Codec max resolution adjusted to: "
            r12.append(r13)
            r12.append(r0)
            r12.append(r3)
            r12.append(r1)
            java.lang.String r12 = r12.toString()
            android.util.Log.w(r4, r12)
        L9d:
            com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues r12 = new com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer$CodecMaxValues
            r12.<init>(r0, r1, r2)
            return r12
    }

    protected android.media.MediaFormat getMediaFormat(com.mbridge.msdk.playercommon.exoplayer2.Format r4, com.mbridge.msdk.playercommon.exoplayer2.video.MediaCodecVideoRenderer.CodecMaxValues r5, boolean r6, int r7) {
            r3 = this;
            android.media.MediaFormat r0 = new android.media.MediaFormat
            r0.<init>()
            java.lang.String r1 = r4.sampleMimeType
            java.lang.String r2 = "mime"
            r0.setString(r2, r1)
            int r1 = r4.width
            java.lang.String r2 = "width"
            r0.setInteger(r2, r1)
            int r1 = r4.height
            java.lang.String r2 = "height"
            r0.setInteger(r2, r1)
            java.util.List<byte[]> r1 = r4.initializationData
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.setCsdBuffers(r0, r1)
            float r1 = r4.frameRate
            java.lang.String r2 = "frame-rate"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.maybeSetFloat(r0, r2, r1)
            int r1 = r4.rotationDegrees
            java.lang.String r2 = "rotation-degrees"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.maybeSetInteger(r0, r2, r1)
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r4 = r4.colorInfo
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.maybeSetColorInfo(r0, r4)
            int r4 = r5.width
            java.lang.String r1 = "max-width"
            r0.setInteger(r1, r4)
            int r4 = r5.height
            java.lang.String r1 = "max-height"
            r0.setInteger(r1, r4)
            int r4 = r5.inputSize
            java.lang.String r5 = "max-input-size"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil.maybeSetInteger(r0, r5, r4)
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r5 = 0
            r1 = 23
            if (r4 < r1) goto L53
            java.lang.String r4 = "priority"
            r0.setInteger(r4, r5)
        L53:
            if (r6 == 0) goto L5a
            java.lang.String r4 = "auto-frc"
            r0.setInteger(r4, r5)
        L5a:
            if (r7 == 0) goto L5f
            configureTunnelingV21(r0, r7)
        L5f:
            return r0
    }

    @Override
    public void handleMessage(int r2, java.lang.Object r3) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            r0 = 1
            if (r2 != r0) goto L9
            android.view.Surface r3 = (android.view.Surface) r3
            r1.setSurface(r3)
            goto L23
        L9:
            r0 = 4
            if (r2 != r0) goto L20
            java.lang.Integer r3 = (java.lang.Integer) r3
            int r2 = r3.intValue()
            r1.scalingMode = r2
            android.media.MediaCodec r2 = r1.getCodec()
            if (r2 == 0) goto L23
            int r3 = r1.scalingMode
            r2.setVideoScalingMode(r3)
            goto L23
        L20:
            super.handleMessage(r2, r3)
        L23:
            return
    }

    @Override
    public boolean isReady() {
            r9 = this;
            boolean r0 = super.isReady()
            r1 = 1
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            if (r0 == 0) goto L25
            boolean r0 = r9.renderedFirstFrame
            if (r0 != 0) goto L22
            android.view.Surface r0 = r9.dummySurface
            if (r0 == 0) goto L18
            android.view.Surface r4 = r9.surface
            if (r4 == r0) goto L22
        L18:
            android.media.MediaCodec r0 = r9.getCodec()
            if (r0 == 0) goto L22
            boolean r0 = r9.tunneling
            if (r0 == 0) goto L25
        L22:
            r9.joiningDeadlineMs = r2
            return r1
        L25:
            long r4 = r9.joiningDeadlineMs
            int r0 = (r4 > r2 ? 1 : (r4 == r2 ? 0 : -1))
            r4 = 0
            if (r0 != 0) goto L2d
            return r4
        L2d:
            long r5 = android.os.SystemClock.elapsedRealtime()
            long r7 = r9.joiningDeadlineMs
            int r0 = (r5 > r7 ? 1 : (r5 == r7 ? 0 : -1))
            if (r0 >= 0) goto L38
            return r1
        L38:
            r9.joiningDeadlineMs = r2
            return r4
    }

    protected boolean maybeDropBuffersToKeyframe(android.media.MediaCodec r1, int r2, long r3, long r5) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r0 = this;
            int r1 = r0.skipSource(r5)
            if (r1 != 0) goto L8
            r1 = 0
            return r1
        L8:
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r0.decoderCounters
            int r3 = r2.droppedToKeyframeCount
            r4 = 1
            int r3 = r3 + r4
            r2.droppedToKeyframeCount = r3
            int r2 = r0.buffersInCodecCount
            int r2 = r2 + r1
            r0.updateDroppedBufferCounters(r2)
            r0.flushCodec()
            return r4
    }

    void maybeNotifyRenderedFirstFrame() {
            r2 = this;
            boolean r0 = r2.renderedFirstFrame
            if (r0 != 0) goto Le
            r0 = 1
            r2.renderedFirstFrame = r0
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r2.eventDispatcher
            android.view.Surface r1 = r2.surface
            r0.renderedFirstFrame(r1)
        Le:
            return
    }

    @Override
    protected void onCodecInitialized(java.lang.String r7, long r8, long r10) {
            r6 = this;
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r6.eventDispatcher
            r1 = r7
            r2 = r8
            r4 = r10
            r0.decoderInitialized(r1, r2, r4)
            boolean r7 = r6.codecNeedsSetOutputSurfaceWorkaround(r7)
            r6.codecNeedsSetOutputSurfaceWorkaround = r7
            return
    }

    @Override
    protected void onDisabled() {
            r3 = this;
            r0 = -1
            r3.currentWidth = r0
            r3.currentHeight = r0
            r0 = -1082130432(0xffffffffbf800000, float:-1.0)
            r3.currentPixelWidthHeightRatio = r0
            r3.pendingPixelWidthHeightRatio = r0
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.outputStreamOffsetUs = r0
            r3.lastInputTimeUs = r0
            r0 = 0
            r3.pendingOutputStreamOffsetCount = r0
            r3.clearReportedVideoSize()
            r3.clearRenderedFirstFrame()
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r1 = r3.frameReleaseTimeHelper
            r1.disable()
            r1 = 0
            r3.tunnelingOnFrameRenderedListener = r1
            r3.tunneling = r0
            super.onDisabled()     // Catch: java.lang.Throwable -> L37
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r3.decoderCounters
            r0.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r0.disabled(r1)
            return
        L37:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r3.decoderCounters
            r1.ensureUpdated()
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r1 = r3.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r2 = r3.decoderCounters
            r1.disabled(r2)
            throw r0
    }

    @Override
    protected void onEnabled(boolean r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            super.onEnabled(r2)
            com.mbridge.msdk.playercommon.exoplayer2.RendererConfiguration r2 = r1.getConfiguration()
            int r2 = r2.tunnelingAudioSessionId
            r1.tunnelingAudioSessionId = r2
            if (r2 == 0) goto Lf
            r2 = 1
            goto L10
        Lf:
            r2 = 0
        L10:
            r1.tunneling = r2
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r2 = r1.eventDispatcher
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r1.decoderCounters
            r2.enabled(r0)
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r2 = r1.frameReleaseTimeHelper
            r2.enable()
            return
    }

    @Override
    protected void onInputFormatChanged(com.mbridge.msdk.playercommon.exoplayer2.Format r2) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r1 = this;
            super.onInputFormatChanged(r2)
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener$EventDispatcher r0 = r1.eventDispatcher
            r0.inputFormatChanged(r2)
            float r0 = r2.pixelWidthHeightRatio
            r1.pendingPixelWidthHeightRatio = r0
            int r2 = r2.rotationDegrees
            r1.pendingRotationDegrees = r2
            return
    }

    @Override
    protected void onOutputFormatChanged(android.media.MediaCodec r7, android.media.MediaFormat r8) {
            r6 = this;
            java.lang.String r0 = "crop-right"
            boolean r1 = r8.containsKey(r0)
            java.lang.String r2 = "crop-top"
            java.lang.String r3 = "crop-bottom"
            java.lang.String r4 = "crop-left"
            r5 = 1
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r4)
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r3)
            if (r1 == 0) goto L23
            boolean r1 = r8.containsKey(r2)
            if (r1 == 0) goto L23
            r1 = r5
            goto L24
        L23:
            r1 = 0
        L24:
            if (r1 == 0) goto L31
            int r0 = r8.getInteger(r0)
            int r4 = r8.getInteger(r4)
            int r0 = r0 - r4
            int r0 = r0 + r5
            goto L37
        L31:
            java.lang.String r0 = "width"
            int r0 = r8.getInteger(r0)
        L37:
            r6.currentWidth = r0
            if (r1 == 0) goto L46
            int r0 = r8.getInteger(r3)
            int r8 = r8.getInteger(r2)
            int r0 = r0 - r8
            int r0 = r0 + r5
            goto L4c
        L46:
            java.lang.String r0 = "height"
            int r0 = r8.getInteger(r0)
        L4c:
            r6.currentHeight = r0
            float r8 = r6.pendingPixelWidthHeightRatio
            r6.currentPixelWidthHeightRatio = r8
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 21
            if (r8 < r0) goto L72
            int r8 = r6.pendingRotationDegrees
            r0 = 90
            if (r8 == r0) goto L62
            r0 = 270(0x10e, float:3.78E-43)
            if (r8 != r0) goto L76
        L62:
            int r8 = r6.currentWidth
            int r0 = r6.currentHeight
            r6.currentWidth = r0
            r6.currentHeight = r8
            r8 = 1065353216(0x3f800000, float:1.0)
            float r0 = r6.currentPixelWidthHeightRatio
            float r8 = r8 / r0
            r6.currentPixelWidthHeightRatio = r8
            goto L76
        L72:
            int r8 = r6.pendingRotationDegrees
            r6.currentUnappliedRotationDegrees = r8
        L76:
            int r8 = r6.scalingMode
            r7.setVideoScalingMode(r8)
            return
    }

    @Override
    protected void onPositionReset(long r4, boolean r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r3 = this;
            super.onPositionReset(r4, r6)
            r3.clearRenderedFirstFrame()
            r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r3.initialPositionUs = r4
            r0 = 0
            r3.consecutiveDroppedFrameCount = r0
            r3.lastInputTimeUs = r4
            int r1 = r3.pendingOutputStreamOffsetCount
            if (r1 == 0) goto L20
            long[] r2 = r3.pendingOutputStreamOffsetsUs
            int r1 = r1 + (-1)
            r1 = r2[r1]
            r3.outputStreamOffsetUs = r1
            r3.pendingOutputStreamOffsetCount = r0
        L20:
            if (r6 == 0) goto L26
            r3.setJoiningDeadlineMs()
            goto L28
        L26:
            r3.joiningDeadlineMs = r4
        L28:
            return
    }

    @Override
    protected void onProcessedOutputBuffer(long r7) {
            r6 = this;
            int r0 = r6.buffersInCodecCount
            r1 = 1
            int r0 = r0 - r1
            r6.buffersInCodecCount = r0
        L6:
            int r0 = r6.pendingOutputStreamOffsetCount
            if (r0 == 0) goto L28
            long[] r2 = r6.pendingOutputStreamSwitchTimesUs
            r3 = 0
            r4 = r2[r3]
            int r2 = (r7 > r4 ? 1 : (r7 == r4 ? 0 : -1))
            if (r2 < 0) goto L28
            long[] r2 = r6.pendingOutputStreamOffsetsUs
            r4 = r2[r3]
            r6.outputStreamOffsetUs = r4
            int r0 = r0 + (-1)
            r6.pendingOutputStreamOffsetCount = r0
            java.lang.System.arraycopy(r2, r1, r2, r3, r0)
            long[] r0 = r6.pendingOutputStreamSwitchTimesUs
            int r2 = r6.pendingOutputStreamOffsetCount
            java.lang.System.arraycopy(r0, r1, r0, r3, r2)
            goto L6
        L28:
            return
    }

    @Override
    protected void onQueueInputBuffer(com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer r5) {
            r4 = this;
            int r0 = r4.buffersInCodecCount
            int r0 = r0 + 1
            r4.buffersInCodecCount = r0
            long r0 = r5.timeUs
            long r2 = r4.lastInputTimeUs
            long r0 = java.lang.Math.max(r0, r2)
            r4.lastInputTimeUs = r0
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r0 = 23
            if (r5 >= r0) goto L1d
            boolean r5 = r4.tunneling
            if (r5 == 0) goto L1d
            r4.maybeNotifyRenderedFirstFrame()
        L1d:
            return
    }

    @Override
    protected void onStarted() {
            r4 = this;
            super.onStarted()
            r0 = 0
            r4.droppedFrames = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r4.droppedFrameAccumulationStartTimeMs = r0
            long r0 = android.os.SystemClock.elapsedRealtime()
            r2 = 1000(0x3e8, double:4.94E-321)
            long r0 = r0 * r2
            r4.lastRenderTimeUs = r0
            return
    }

    @Override
    protected void onStopped() {
            r2 = this;
            r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            r2.joiningDeadlineMs = r0
            r2.maybeNotifyDroppedFrames()
            super.onStopped()
            return
    }

    @Override
    protected void onStreamChanged(com.mbridge.msdk.playercommon.exoplayer2.Format[] r5, long r6) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r4 = this;
            long r0 = r4.outputStreamOffsetUs
            r2 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto Le
            r4.outputStreamOffsetUs = r6
            goto L48
        Le:
            int r0 = r4.pendingOutputStreamOffsetCount
            long[] r1 = r4.pendingOutputStreamOffsetsUs
            int r1 = r1.length
            if (r0 != r1) goto L34
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Too many stream changes, so dropping offset: "
            r0.append(r1)
            long[] r1 = r4.pendingOutputStreamOffsetsUs
            int r2 = r4.pendingOutputStreamOffsetCount
            int r2 = r2 + (-1)
            r2 = r1[r2]
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "MediaCodecVideoRenderer"
            android.util.Log.w(r1, r0)
            goto L38
        L34:
            int r0 = r0 + 1
            r4.pendingOutputStreamOffsetCount = r0
        L38:
            long[] r0 = r4.pendingOutputStreamOffsetsUs
            int r1 = r4.pendingOutputStreamOffsetCount
            int r2 = r1 + (-1)
            r0[r2] = r6
            long[] r0 = r4.pendingOutputStreamSwitchTimesUs
            int r1 = r1 + (-1)
            long r2 = r4.lastInputTimeUs
            r0[r1] = r2
        L48:
            super.onStreamChanged(r5, r6)
            return
    }

    @Override
    protected boolean processOutputBuffer(long r22, long r24, android.media.MediaCodec r26, java.nio.ByteBuffer r27, int r28, int r29, long r30, boolean r32) throws com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException {
            r21 = this;
            r7 = r21
            r5 = r22
            r8 = r24
            r10 = r26
            r11 = r28
            r0 = r30
            long r2 = r7.initialPositionUs
            r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            int r2 = (r2 > r12 ? 1 : (r2 == r12 ? 0 : -1))
            if (r2 != 0) goto L19
            r7.initialPositionUs = r5
        L19:
            long r2 = r7.outputStreamOffsetUs
            long r12 = r0 - r2
            r14 = 1
            if (r32 == 0) goto L24
            r7.skipOutputBuffer(r10, r11, r12)
            return r14
        L24:
            long r2 = r0 - r5
            android.view.Surface r4 = r7.surface
            android.view.Surface r15 = r7.dummySurface
            r16 = 0
            if (r4 != r15) goto L39
            boolean r0 = isBufferLate(r2)
            if (r0 == 0) goto L38
            r7.skipOutputBuffer(r10, r11, r12)
            return r14
        L38:
            return r16
        L39:
            long r17 = android.os.SystemClock.elapsedRealtime()
            r19 = 1000(0x3e8, double:4.94E-321)
            long r17 = r17 * r19
            int r4 = r21.getState()
            r15 = 2
            if (r4 != r15) goto L4a
            r4 = r14
            goto L4c
        L4a:
            r4 = r16
        L4c:
            boolean r15 = r7.renderedFirstFrame
            if (r15 == 0) goto Lda
            if (r4 == 0) goto L5e
            long r14 = r7.lastRenderTimeUs
            long r14 = r17 - r14
            boolean r14 = r7.shouldForceRenderOutputBuffer(r2, r14)
            if (r14 == 0) goto L5e
            goto Lda
        L5e:
            if (r4 == 0) goto Ld9
            long r14 = r7.initialPositionUs
            int r4 = (r5 > r14 ? 1 : (r5 == r14 ? 0 : -1))
            if (r4 != 0) goto L68
            goto Ld9
        L68:
            long r17 = r17 - r8
            long r2 = r2 - r17
            long r14 = java.lang.System.nanoTime()
            long r2 = r2 * r19
            long r2 = r2 + r14
            com.mbridge.msdk.playercommon.exoplayer2.video.VideoFrameReleaseTimeHelper r4 = r7.frameReleaseTimeHelper
            long r17 = r4.adjustReleaseTime(r0, r2)
            long r0 = r17 - r14
            long r14 = r0 / r19
            boolean r0 = r7.shouldDropBuffersToKeyframe(r14, r8)
            if (r0 == 0) goto L93
            r0 = r21
            r1 = r26
            r2 = r28
            r3 = r12
            r5 = r22
            boolean r0 = r0.maybeDropBuffersToKeyframe(r1, r2, r3, r5)
            if (r0 == 0) goto L93
            return r16
        L93:
            boolean r0 = r7.shouldDropOutputBuffer(r14, r8)
            if (r0 == 0) goto L9e
            r7.dropOutputBuffer(r10, r11, r12)
        L9c:
            r0 = 1
            return r0
        L9e:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lb8
            r0 = 50000(0xc350, double:2.47033E-319)
            int r0 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r0 >= 0) goto Ld9
            r0 = r21
            r1 = r26
            r2 = r28
            r3 = r12
            r5 = r17
            r0.renderOutputBufferV21(r1, r2, r3, r5)
            goto L9c
        Lb8:
            r0 = 30000(0x7530, double:1.4822E-319)
            int r0 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r0 >= 0) goto Ld9
            r0 = 11000(0x2af8, double:5.4347E-320)
            int r0 = (r14 > r0 ? 1 : (r14 == r0 ? 0 : -1))
            if (r0 <= 0) goto Ld5
            r0 = 10000(0x2710, double:4.9407E-320)
            long r14 = r14 - r0
            long r14 = r14 / r19
            java.lang.Thread.sleep(r14)     // Catch: java.lang.InterruptedException -> Lcd
            goto Ld5
        Lcd:
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            r0.interrupt()
            return r16
        Ld5:
            r7.renderOutputBuffer(r10, r11, r12)
            goto L9c
        Ld9:
            return r16
        Lda:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lef
            long r5 = java.lang.System.nanoTime()
            r0 = r21
            r1 = r26
            r2 = r28
            r3 = r12
            r0.renderOutputBufferV21(r1, r2, r3, r5)
            goto Lf2
        Lef:
            r7.renderOutputBuffer(r10, r11, r12)
        Lf2:
            r0 = 1
            return r0
    }

    @Override
    protected void releaseCodec() {
            r4 = this;
            r0 = 0
            r1 = 0
            super.releaseCodec()     // Catch: java.lang.Throwable -> L19
            r4.buffersInCodecCount = r0
            android.view.Surface r0 = r4.dummySurface
            if (r0 == 0) goto L18
            android.view.Surface r2 = r4.surface
            if (r2 != r0) goto L11
            r4.surface = r1
        L11:
            android.view.Surface r0 = r4.dummySurface
            r0.release()
            r4.dummySurface = r1
        L18:
            return
        L19:
            r2 = move-exception
            r4.buffersInCodecCount = r0
            android.view.Surface r0 = r4.dummySurface
            if (r0 == 0) goto L2d
            android.view.Surface r3 = r4.surface
            if (r3 != r0) goto L26
            r4.surface = r1
        L26:
            android.view.Surface r0 = r4.dummySurface
            r0.release()
            r4.dummySurface = r1
        L2d:
            throw r2
    }

    protected void renderOutputBuffer(android.media.MediaCodec r3, int r4, long r5) {
            r2 = this;
            r2.maybeNotifyVideoSizeChanged()
            java.lang.String r5 = "releaseOutputBuffer"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r5)
            r5 = 1
            r3.releaseOutputBuffer(r4, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            long r3 = android.os.SystemClock.elapsedRealtime()
            r0 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 * r0
            r2.lastRenderTimeUs = r3
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3 = r2.decoderCounters
            int r4 = r3.renderedOutputBufferCount
            int r4 = r4 + r5
            r3.renderedOutputBufferCount = r4
            r3 = 0
            r2.consecutiveDroppedFrameCount = r3
            r2.maybeNotifyRenderedFirstFrame()
            return
    }

    protected void renderOutputBufferV21(android.media.MediaCodec r1, int r2, long r3, long r5) {
            r0 = this;
            r0.maybeNotifyVideoSizeChanged()
            java.lang.String r3 = "releaseOutputBuffer"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r3)
            r1.releaseOutputBuffer(r2, r5)
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            long r1 = android.os.SystemClock.elapsedRealtime()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 * r3
            r0.lastRenderTimeUs = r1
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r0.decoderCounters
            int r2 = r1.renderedOutputBufferCount
            int r2 = r2 + 1
            r1.renderedOutputBufferCount = r2
            r1 = 0
            r0.consecutiveDroppedFrameCount = r1
            r0.maybeNotifyRenderedFirstFrame()
            return
    }

    protected boolean shouldDropBuffersToKeyframe(long r1, long r3) {
            r0 = this;
            boolean r1 = isBufferVeryLate(r1)
            return r1
    }

    protected boolean shouldDropOutputBuffer(long r1, long r3) {
            r0 = this;
            boolean r1 = isBufferLate(r1)
            return r1
    }

    protected boolean shouldForceRenderOutputBuffer(long r1, long r3) {
            r0 = this;
            boolean r1 = isBufferLate(r1)
            if (r1 == 0) goto Lf
            r1 = 100000(0x186a0, double:4.94066E-319)
            int r1 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r1 <= 0) goto Lf
            r1 = 1
            goto L10
        Lf:
            r1 = 0
        L10:
            return r1
    }

    @Override
    protected boolean shouldInitCodec(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2) {
            r1 = this;
            android.view.Surface r0 = r1.surface
            if (r0 != 0) goto Ld
            boolean r2 = r1.shouldUseDummySurface(r2)
            if (r2 == 0) goto Lb
            goto Ld
        Lb:
            r2 = 0
            goto Le
        Ld:
            r2 = 1
        Le:
            return r2
    }

    protected void skipOutputBuffer(android.media.MediaCodec r1, int r2, long r3) {
            r0 = this;
            java.lang.String r3 = "skipVideoBuffer"
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.beginSection(r3)
            r3 = 0
            r1.releaseOutputBuffer(r2, r3)
            com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil.endSection()
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r0.decoderCounters
            int r2 = r1.skippedOutputBufferCount
            int r2 = r2 + 1
            r1.skippedOutputBufferCount = r2
            return
    }

    @Override
    protected int supportsFormat(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector r8, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager<com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto> r9, com.mbridge.msdk.playercommon.exoplayer2.Format r10) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r7 = this;
            java.lang.String r0 = r10.sampleMimeType
            boolean r1 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.isVideo(r0)
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r10.drmInitData
            if (r1 == 0) goto L1e
            r3 = r2
            r4 = r3
        L10:
            int r5 = r1.schemeDataCount
            if (r3 >= r5) goto L1f
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData$SchemeData r5 = r1.get(r3)
            boolean r5 = r5.requiresSecureDecryption
            r4 = r4 | r5
            int r3 = r3 + 1
            goto L10
        L1e:
            r4 = r2
        L1f:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r3 = r8.getDecoderInfo(r0, r4)
            r5 = 2
            r6 = 1
            if (r3 != 0) goto L32
            if (r4 == 0) goto L30
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r8 = r8.getDecoderInfo(r0, r2)
            if (r8 == 0) goto L30
            goto L31
        L30:
            r5 = r6
        L31:
            return r5
        L32:
            boolean r8 = supportsFormatDrm(r9, r1)
            if (r8 != 0) goto L39
            return r5
        L39:
            java.lang.String r8 = r10.codecs
            boolean r8 = r3.isCodecSupported(r8)
            if (r8 == 0) goto L9c
            int r9 = r10.width
            if (r9 <= 0) goto L9c
            int r9 = r10.height
            if (r9 <= 0) goto L9c
            int r8 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r9 = 21
            if (r8 < r9) goto L5b
            int r8 = r10.width
            int r9 = r10.height
            float r10 = r10.frameRate
            double r0 = (double) r10
            boolean r8 = r3.isVideoSizeAndRateSupportedV21(r8, r9, r0)
            goto L9c
        L5b:
            int r8 = r10.width
            int r9 = r10.height
            int r8 = r8 * r9
            int r9 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize()
            if (r8 > r9) goto L67
            goto L68
        L67:
            r6 = r2
        L68:
            if (r6 != 0) goto L9b
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r9 = "FalseCheck [legacyFrameSize, "
            r8.append(r9)
            int r9 = r10.width
            r8.append(r9)
            java.lang.String r9 = "x"
            r8.append(r9)
            int r9 = r10.height
            r8.append(r9)
            java.lang.String r9 = "] ["
            r8.append(r9)
            java.lang.String r9 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE_DEBUG_INFO
            r8.append(r9)
            java.lang.String r9 = "]"
            r8.append(r9)
            java.lang.String r8 = r8.toString()
            java.lang.String r9 = "MediaCodecVideoRenderer"
            android.util.Log.d(r9, r8)
        L9b:
            r8 = r6
        L9c:
            boolean r9 = r3.adaptive
            if (r9 == 0) goto La3
            r9 = 16
            goto La5
        La3:
            r9 = 8
        La5:
            boolean r10 = r3.tunneling
            if (r10 == 0) goto Lab
            r2 = 32
        Lab:
            if (r8 == 0) goto Laf
            r8 = 4
            goto Lb0
        Laf:
            r8 = 3
        Lb0:
            r9 = r9 | r2
            r8 = r8 | r9
            return r8
    }

    protected void updateDroppedBufferCounters(int r3) {
            r2 = this;
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r0 = r2.decoderCounters
            int r1 = r0.droppedBufferCount
            int r1 = r1 + r3
            r0.droppedBufferCount = r1
            int r0 = r2.droppedFrames
            int r0 = r0 + r3
            r2.droppedFrames = r0
            int r0 = r2.consecutiveDroppedFrameCount
            int r0 = r0 + r3
            r2.consecutiveDroppedFrameCount = r0
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r3 = r2.decoderCounters
            int r0 = r2.consecutiveDroppedFrameCount
            com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderCounters r1 = r2.decoderCounters
            int r1 = r1.maxConsecutiveDroppedBufferCount
            int r0 = java.lang.Math.max(r0, r1)
            r3.maxConsecutiveDroppedBufferCount = r0
            int r3 = r2.droppedFrames
            int r0 = r2.maxDroppedFramesToNotify
            if (r3 < r0) goto L28
            r2.maybeNotifyDroppedFrames()
        L28:
            return
    }
}
