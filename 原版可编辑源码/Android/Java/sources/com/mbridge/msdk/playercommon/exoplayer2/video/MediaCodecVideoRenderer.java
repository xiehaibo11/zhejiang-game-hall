package com.mbridge.msdk.playercommon.exoplayer2.video;

import android.content.Context;
import android.graphics.Point;
import android.media.MediaCodec;
import android.media.MediaCrypto;
import android.media.MediaFormat;
import android.os.Handler;
import android.os.SystemClock;
import android.util.Log;
import android.view.Surface;
import com.bykv.vk.openvk.TTVfConstant;
import com.heytap.mcssdk.constant.a;
import com.huawei.hms.push.constant.RemoteMessageConst;
import com.mbridge.msdk.playercommon.exoplayer2.ExoPlaybackException;
import com.mbridge.msdk.playercommon.exoplayer2.Format;
import com.mbridge.msdk.playercommon.exoplayer2.decoder.DecoderInputBuffer;
import com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData;
import com.mbridge.msdk.playercommon.exoplayer2.drm.DrmSessionManager;
import com.mbridge.msdk.playercommon.exoplayer2.drm.FrameworkMediaCrypto;
import com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo;
import com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecRenderer;
import com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecSelector;
import com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil;
import com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaFormatUtil;
import com.mbridge.msdk.playercommon.exoplayer2.util.Assertions;
import com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes;
import com.mbridge.msdk.playercommon.exoplayer2.util.TraceUtil;
import com.mbridge.msdk.playercommon.exoplayer2.util.Util;
import com.mbridge.msdk.playercommon.exoplayer2.video.VideoRendererEventListener;
import com.sigmob.sdk.archives.tar.e;
import java.nio.ByteBuffer;
import okio.Utf8;
import org.bouncycastle.math.ec.Tnaf;

public class MediaCodecVideoRenderer extends MediaCodecRenderer {
    private static final String KEY_CROP_BOTTOM = "crop-bottom";
    private static final String KEY_CROP_LEFT = "crop-left";
    private static final String KEY_CROP_RIGHT = "crop-right";
    private static final String KEY_CROP_TOP = "crop-top";
    private static final int MAX_PENDING_OUTPUT_STREAM_OFFSET_COUNT = 10;
    private static final int[] STANDARD_LONG_EDGE_VIDEO_PX = {1920, 1600, 1440, TTVfConstant.EXT_PLUGIN_UNINSTALL, 960, 854, 640, 540, 480};
    private static final String TAG = "MediaCodecVideoRenderer";
    private static boolean deviceNeedsSetOutputSurfaceWorkaround;
    private static boolean evaluatedDeviceNeedsSetOutputSurfaceWorkaround;
    private final long allowedJoiningTimeMs;
    private int buffersInCodecCount;
    private CodecMaxValues codecMaxValues;
    private boolean codecNeedsSetOutputSurfaceWorkaround;
    private int consecutiveDroppedFrameCount;
    private final Context context;
    private int currentHeight;
    private float currentPixelWidthHeightRatio;
    private int currentUnappliedRotationDegrees;
    private int currentWidth;
    private final boolean deviceNeedsAutoFrcWorkaround;
    private long droppedFrameAccumulationStartTimeMs;
    private int droppedFrames;
    private Surface dummySurface;
    private final VideoRendererEventListener.EventDispatcher eventDispatcher;
    private final VideoFrameReleaseTimeHelper frameReleaseTimeHelper;
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
    private Surface surface;
    private boolean tunneling;
    private int tunnelingAudioSessionId;
    OnFrameRenderedListenerV23 tunnelingOnFrameRenderedListener;

    private static boolean isBufferLate(long j) {
        return j < -30000;
    }

    private static boolean isBufferVeryLate(long j) {
        return j < -500000;
    }

    public MediaCodecVideoRenderer(Context context, MediaCodecSelector mediaCodecSelector) {
        this(context, mediaCodecSelector, 0L);
    }

    public MediaCodecVideoRenderer(Context context, MediaCodecSelector mediaCodecSelector, long j) {
        this(context, mediaCodecSelector, j, null, null, -1);
    }

    public MediaCodecVideoRenderer(Context context, MediaCodecSelector mediaCodecSelector, long j, Handler handler, VideoRendererEventListener videoRendererEventListener, int i) {
        this(context, mediaCodecSelector, j, null, false, handler, videoRendererEventListener, i);
    }

    public MediaCodecVideoRenderer(Context context, MediaCodecSelector mediaCodecSelector, long j, DrmSessionManager<FrameworkMediaCrypto> drmSessionManager, boolean z, Handler handler, VideoRendererEventListener videoRendererEventListener, int i) {
        super(2, mediaCodecSelector, drmSessionManager, z);
        this.allowedJoiningTimeMs = j;
        this.maxDroppedFramesToNotify = i;
        Context applicationContext = context.getApplicationContext();
        this.context = applicationContext;
        this.frameReleaseTimeHelper = new VideoFrameReleaseTimeHelper(applicationContext);
        this.eventDispatcher = new VideoRendererEventListener.EventDispatcher(handler, videoRendererEventListener);
        this.deviceNeedsAutoFrcWorkaround = deviceNeedsAutoFrcWorkaround();
        this.pendingOutputStreamOffsetsUs = new long[10];
        this.pendingOutputStreamSwitchTimesUs = new long[10];
        this.outputStreamOffsetUs = -9223372036854775807L;
        this.lastInputTimeUs = -9223372036854775807L;
        this.joiningDeadlineMs = -9223372036854775807L;
        this.currentWidth = -1;
        this.currentHeight = -1;
        this.currentPixelWidthHeightRatio = -1.0f;
        this.pendingPixelWidthHeightRatio = -1.0f;
        this.scalingMode = 1;
        clearReportedVideoSize();
    }

    @Override
    protected int supportsFormat(MediaCodecSelector mediaCodecSelector, DrmSessionManager<FrameworkMediaCrypto> drmSessionManager, Format format) throws MediaCodecUtil.DecoderQueryException {
        boolean z;
        String str = format.sampleMimeType;
        if (!MimeTypes.isVideo(str)) {
            return 0;
        }
        DrmInitData drmInitData = format.drmInitData;
        if (drmInitData != null) {
            z = false;
            for (int i = 0; i < drmInitData.schemeDataCount; i++) {
                z |= drmInitData.get(i).requiresSecureDecryption;
            }
        } else {
            z = false;
        }
        MediaCodecInfo decoderInfo = mediaCodecSelector.getDecoderInfo(str, z);
        if (decoderInfo == null) {
            return (!z || mediaCodecSelector.getDecoderInfo(str, false) == null) ? 1 : 2;
        }
        if (!supportsFormatDrm(drmSessionManager, drmInitData)) {
            return 2;
        }
        boolean zIsCodecSupported = decoderInfo.isCodecSupported(format.codecs);
        if (zIsCodecSupported && format.width > 0 && format.height > 0) {
            if (Util.SDK_INT >= 21) {
                zIsCodecSupported = decoderInfo.isVideoSizeAndRateSupportedV21(format.width, format.height, format.frameRate);
            } else {
                boolean z2 = format.width * format.height <= MediaCodecUtil.maxH264DecodableFrameSize();
                if (!z2) {
                    Log.d(TAG, "FalseCheck [legacyFrameSize, " + format.width + "x" + format.height + "] [" + Util.DEVICE_DEBUG_INFO + "]");
                }
                zIsCodecSupported = z2;
            }
        }
        return (zIsCodecSupported ? 4 : 3) | (decoderInfo.adaptive ? 16 : 8) | (decoderInfo.tunneling ? 32 : 0);
    }

    @Override
    protected void onEnabled(boolean z) throws ExoPlaybackException {
        super.onEnabled(z);
        int i = getConfiguration().tunnelingAudioSessionId;
        this.tunnelingAudioSessionId = i;
        this.tunneling = i != 0;
        this.eventDispatcher.enabled(this.decoderCounters);
        this.frameReleaseTimeHelper.enable();
    }

    @Override
    protected void onStreamChanged(Format[] formatArr, long j) throws ExoPlaybackException {
        if (this.outputStreamOffsetUs == -9223372036854775807L) {
            this.outputStreamOffsetUs = j;
        } else {
            int i = this.pendingOutputStreamOffsetCount;
            if (i == this.pendingOutputStreamOffsetsUs.length) {
                Log.w(TAG, "Too many stream changes, so dropping offset: " + this.pendingOutputStreamOffsetsUs[this.pendingOutputStreamOffsetCount - 1]);
            } else {
                this.pendingOutputStreamOffsetCount = i + 1;
            }
            long[] jArr = this.pendingOutputStreamOffsetsUs;
            int i2 = this.pendingOutputStreamOffsetCount;
            jArr[i2 - 1] = j;
            this.pendingOutputStreamSwitchTimesUs[i2 - 1] = this.lastInputTimeUs;
        }
        super.onStreamChanged(formatArr, j);
    }

    @Override
    protected void onPositionReset(long j, boolean z) throws ExoPlaybackException {
        super.onPositionReset(j, z);
        clearRenderedFirstFrame();
        this.initialPositionUs = -9223372036854775807L;
        this.consecutiveDroppedFrameCount = 0;
        this.lastInputTimeUs = -9223372036854775807L;
        int i = this.pendingOutputStreamOffsetCount;
        if (i != 0) {
            this.outputStreamOffsetUs = this.pendingOutputStreamOffsetsUs[i - 1];
            this.pendingOutputStreamOffsetCount = 0;
        }
        if (z) {
            setJoiningDeadlineMs();
        } else {
            this.joiningDeadlineMs = -9223372036854775807L;
        }
    }

    @Override
    public boolean isReady() {
        Surface surface;
        if (super.isReady() && (this.renderedFirstFrame || (((surface = this.dummySurface) != null && this.surface == surface) || getCodec() == null || this.tunneling))) {
            this.joiningDeadlineMs = -9223372036854775807L;
            return true;
        }
        if (this.joiningDeadlineMs == -9223372036854775807L) {
            return false;
        }
        if (SystemClock.elapsedRealtime() < this.joiningDeadlineMs) {
            return true;
        }
        this.joiningDeadlineMs = -9223372036854775807L;
        return false;
    }

    @Override
    protected void onStarted() {
        super.onStarted();
        this.droppedFrames = 0;
        this.droppedFrameAccumulationStartTimeMs = SystemClock.elapsedRealtime();
        this.lastRenderTimeUs = SystemClock.elapsedRealtime() * 1000;
    }

    @Override
    protected void onStopped() {
        this.joiningDeadlineMs = -9223372036854775807L;
        maybeNotifyDroppedFrames();
        super.onStopped();
    }

    @Override
    protected void onDisabled() {
        this.currentWidth = -1;
        this.currentHeight = -1;
        this.currentPixelWidthHeightRatio = -1.0f;
        this.pendingPixelWidthHeightRatio = -1.0f;
        this.outputStreamOffsetUs = -9223372036854775807L;
        this.lastInputTimeUs = -9223372036854775807L;
        this.pendingOutputStreamOffsetCount = 0;
        clearReportedVideoSize();
        clearRenderedFirstFrame();
        this.frameReleaseTimeHelper.disable();
        this.tunnelingOnFrameRenderedListener = null;
        this.tunneling = false;
        try {
            super.onDisabled();
        } finally {
            this.decoderCounters.ensureUpdated();
            this.eventDispatcher.disabled(this.decoderCounters);
        }
    }

    @Override
    public void handleMessage(int i, Object obj) throws ExoPlaybackException {
        if (i == 1) {
            setSurface((Surface) obj);
            return;
        }
        if (i == 4) {
            this.scalingMode = ((Integer) obj).intValue();
            MediaCodec codec = getCodec();
            if (codec != null) {
                codec.setVideoScalingMode(this.scalingMode);
                return;
            }
            return;
        }
        super.handleMessage(i, obj);
    }

    private void setSurface(Surface surface) throws ExoPlaybackException {
        if (surface == null) {
            Surface surface2 = this.dummySurface;
            if (surface2 != null) {
                surface = surface2;
            } else {
                MediaCodecInfo codecInfo = getCodecInfo();
                if (codecInfo != null && shouldUseDummySurface(codecInfo)) {
                    surface = DummySurface.newInstanceV17(this.context, codecInfo.secure);
                    this.dummySurface = surface;
                }
            }
        }
        if (this.surface != surface) {
            this.surface = surface;
            int state = getState();
            if (state == 1 || state == 2) {
                MediaCodec codec = getCodec();
                if (Util.SDK_INT >= 23 && codec != null && surface != null && !this.codecNeedsSetOutputSurfaceWorkaround) {
                    setOutputSurfaceV23(codec, surface);
                } else {
                    releaseCodec();
                    maybeInitCodec();
                }
            }
            if (surface != null && surface != this.dummySurface) {
                maybeRenotifyVideoSizeChanged();
                clearRenderedFirstFrame();
                if (state == 2) {
                    setJoiningDeadlineMs();
                    return;
                }
                return;
            }
            clearReportedVideoSize();
            clearRenderedFirstFrame();
            return;
        }
        if (surface == null || surface == this.dummySurface) {
            return;
        }
        maybeRenotifyVideoSizeChanged();
        maybeRenotifyRenderedFirstFrame();
    }

    @Override
    protected boolean shouldInitCodec(MediaCodecInfo mediaCodecInfo) {
        return this.surface != null || shouldUseDummySurface(mediaCodecInfo);
    }

    @Override
    protected void configureCodec(MediaCodecInfo mediaCodecInfo, MediaCodec mediaCodec, Format format, MediaCrypto mediaCrypto) throws MediaCodecUtil.DecoderQueryException {
        CodecMaxValues codecMaxValues = getCodecMaxValues(mediaCodecInfo, format, getStreamFormats());
        this.codecMaxValues = codecMaxValues;
        MediaFormat mediaFormat = getMediaFormat(format, codecMaxValues, this.deviceNeedsAutoFrcWorkaround, this.tunnelingAudioSessionId);
        if (this.surface == null) {
            Assertions.checkState(shouldUseDummySurface(mediaCodecInfo));
            if (this.dummySurface == null) {
                this.dummySurface = DummySurface.newInstanceV17(this.context, mediaCodecInfo.secure);
            }
            this.surface = this.dummySurface;
        }
        mediaCodec.configure(mediaFormat, this.surface, mediaCrypto, 0);
        if (Util.SDK_INT < 23 || !this.tunneling) {
            return;
        }
        this.tunnelingOnFrameRenderedListener = new OnFrameRenderedListenerV23(mediaCodec);
    }

    @Override
    protected int canKeepCodec(MediaCodec mediaCodec, MediaCodecInfo mediaCodecInfo, Format format, Format format2) {
        if (!areAdaptationCompatible(mediaCodecInfo.adaptive, format, format2) || format2.width > this.codecMaxValues.width || format2.height > this.codecMaxValues.height || getMaxInputSize(mediaCodecInfo, format2) > this.codecMaxValues.inputSize) {
            return 0;
        }
        return format.initializationDataEquals(format2) ? 1 : 3;
    }

    @Override
    protected void releaseCodec() {
        try {
            super.releaseCodec();
        } finally {
            this.buffersInCodecCount = 0;
            Surface surface = this.dummySurface;
            if (surface != null) {
                if (this.surface == surface) {
                    this.surface = null;
                }
                this.dummySurface.release();
                this.dummySurface = null;
            }
        }
    }

    @Override
    protected void flushCodec() throws ExoPlaybackException {
        super.flushCodec();
        this.buffersInCodecCount = 0;
    }

    @Override
    protected void onCodecInitialized(String str, long j, long j2) {
        this.eventDispatcher.decoderInitialized(str, j, j2);
        this.codecNeedsSetOutputSurfaceWorkaround = codecNeedsSetOutputSurfaceWorkaround(str);
    }

    @Override
    protected void onInputFormatChanged(Format format) throws ExoPlaybackException {
        super.onInputFormatChanged(format);
        this.eventDispatcher.inputFormatChanged(format);
        this.pendingPixelWidthHeightRatio = format.pixelWidthHeightRatio;
        this.pendingRotationDegrees = format.rotationDegrees;
    }

    @Override
    protected void onQueueInputBuffer(DecoderInputBuffer decoderInputBuffer) {
        this.buffersInCodecCount++;
        this.lastInputTimeUs = Math.max(decoderInputBuffer.timeUs, this.lastInputTimeUs);
        if (Util.SDK_INT >= 23 || !this.tunneling) {
            return;
        }
        maybeNotifyRenderedFirstFrame();
    }

    @Override
    protected void onOutputFormatChanged(MediaCodec mediaCodec, MediaFormat mediaFormat) {
        int integer;
        int integer2;
        boolean z = mediaFormat.containsKey(KEY_CROP_RIGHT) && mediaFormat.containsKey(KEY_CROP_LEFT) && mediaFormat.containsKey(KEY_CROP_BOTTOM) && mediaFormat.containsKey(KEY_CROP_TOP);
        if (z) {
            integer = (mediaFormat.getInteger(KEY_CROP_RIGHT) - mediaFormat.getInteger(KEY_CROP_LEFT)) + 1;
        } else {
            integer = mediaFormat.getInteger("width");
        }
        this.currentWidth = integer;
        if (z) {
            integer2 = (mediaFormat.getInteger(KEY_CROP_BOTTOM) - mediaFormat.getInteger(KEY_CROP_TOP)) + 1;
        } else {
            integer2 = mediaFormat.getInteger("height");
        }
        this.currentHeight = integer2;
        this.currentPixelWidthHeightRatio = this.pendingPixelWidthHeightRatio;
        if (Util.SDK_INT >= 21) {
            int i = this.pendingRotationDegrees;
            if (i == 90 || i == 270) {
                int i2 = this.currentWidth;
                this.currentWidth = this.currentHeight;
                this.currentHeight = i2;
                this.currentPixelWidthHeightRatio = 1.0f / this.currentPixelWidthHeightRatio;
            }
        } else {
            this.currentUnappliedRotationDegrees = this.pendingRotationDegrees;
        }
        mediaCodec.setVideoScalingMode(this.scalingMode);
    }

    @Override
    protected boolean processOutputBuffer(long j, long j2, MediaCodec mediaCodec, ByteBuffer byteBuffer, int i, int i2, long j3, boolean z) throws ExoPlaybackException {
        if (this.initialPositionUs == -9223372036854775807L) {
            this.initialPositionUs = j;
        }
        long j4 = j3 - this.outputStreamOffsetUs;
        if (z) {
            skipOutputBuffer(mediaCodec, i, j4);
            return true;
        }
        long j5 = j3 - j;
        if (this.surface == this.dummySurface) {
            if (!isBufferLate(j5)) {
                return false;
            }
            skipOutputBuffer(mediaCodec, i, j4);
            return true;
        }
        long jElapsedRealtime = SystemClock.elapsedRealtime() * 1000;
        boolean z2 = getState() == 2;
        if (!this.renderedFirstFrame || (z2 && shouldForceRenderOutputBuffer(j5, jElapsedRealtime - this.lastRenderTimeUs))) {
            if (Util.SDK_INT >= 21) {
                renderOutputBufferV21(mediaCodec, i, j4, System.nanoTime());
                return true;
            }
            renderOutputBuffer(mediaCodec, i, j4);
            return true;
        }
        if (z2 && j != this.initialPositionUs) {
            long jNanoTime = System.nanoTime();
            long jAdjustReleaseTime = this.frameReleaseTimeHelper.adjustReleaseTime(j3, ((j5 - (jElapsedRealtime - j2)) * 1000) + jNanoTime);
            long j6 = (jAdjustReleaseTime - jNanoTime) / 1000;
            if (shouldDropBuffersToKeyframe(j6, j2) && maybeDropBuffersToKeyframe(mediaCodec, i, j4, j)) {
                return false;
            }
            if (shouldDropOutputBuffer(j6, j2)) {
                dropOutputBuffer(mediaCodec, i, j4);
                return true;
            }
            if (Util.SDK_INT >= 21) {
                if (j6 < 50000) {
                    renderOutputBufferV21(mediaCodec, i, j4, jAdjustReleaseTime);
                    return true;
                }
            } else if (j6 < 30000) {
                if (j6 > 11000) {
                    try {
                        Thread.sleep((j6 - a.q) / 1000);
                    } catch (InterruptedException unused) {
                        Thread.currentThread().interrupt();
                        return false;
                    }
                }
                renderOutputBuffer(mediaCodec, i, j4);
                return true;
            }
        }
        return false;
    }

    @Override
    protected void onProcessedOutputBuffer(long j) {
        this.buffersInCodecCount--;
        while (true) {
            int i = this.pendingOutputStreamOffsetCount;
            if (i == 0 || j < this.pendingOutputStreamSwitchTimesUs[0]) {
                return;
            }
            long[] jArr = this.pendingOutputStreamOffsetsUs;
            this.outputStreamOffsetUs = jArr[0];
            int i2 = i - 1;
            this.pendingOutputStreamOffsetCount = i2;
            System.arraycopy(jArr, 1, jArr, 0, i2);
            long[] jArr2 = this.pendingOutputStreamSwitchTimesUs;
            System.arraycopy(jArr2, 1, jArr2, 0, this.pendingOutputStreamOffsetCount);
        }
    }

    protected boolean shouldDropOutputBuffer(long j, long j2) {
        return isBufferLate(j);
    }

    protected boolean shouldDropBuffersToKeyframe(long j, long j2) {
        return isBufferVeryLate(j);
    }

    protected boolean shouldForceRenderOutputBuffer(long j, long j2) {
        return isBufferLate(j) && j2 > 100000;
    }

    protected void skipOutputBuffer(MediaCodec mediaCodec, int i, long j) {
        TraceUtil.beginSection("skipVideoBuffer");
        mediaCodec.releaseOutputBuffer(i, false);
        TraceUtil.endSection();
        this.decoderCounters.skippedOutputBufferCount++;
    }

    protected void dropOutputBuffer(MediaCodec mediaCodec, int i, long j) {
        TraceUtil.beginSection("dropVideoBuffer");
        mediaCodec.releaseOutputBuffer(i, false);
        TraceUtil.endSection();
        updateDroppedBufferCounters(1);
    }

    protected boolean maybeDropBuffersToKeyframe(MediaCodec mediaCodec, int i, long j, long j2) throws ExoPlaybackException {
        int iSkipSource = skipSource(j2);
        if (iSkipSource == 0) {
            return false;
        }
        this.decoderCounters.droppedToKeyframeCount++;
        updateDroppedBufferCounters(this.buffersInCodecCount + iSkipSource);
        flushCodec();
        return true;
    }

    protected void updateDroppedBufferCounters(int i) {
        this.decoderCounters.droppedBufferCount += i;
        this.droppedFrames += i;
        this.consecutiveDroppedFrameCount += i;
        this.decoderCounters.maxConsecutiveDroppedBufferCount = Math.max(this.consecutiveDroppedFrameCount, this.decoderCounters.maxConsecutiveDroppedBufferCount);
        if (this.droppedFrames >= this.maxDroppedFramesToNotify) {
            maybeNotifyDroppedFrames();
        }
    }

    protected void renderOutputBuffer(MediaCodec mediaCodec, int i, long j) {
        maybeNotifyVideoSizeChanged();
        TraceUtil.beginSection("releaseOutputBuffer");
        mediaCodec.releaseOutputBuffer(i, true);
        TraceUtil.endSection();
        this.lastRenderTimeUs = SystemClock.elapsedRealtime() * 1000;
        this.decoderCounters.renderedOutputBufferCount++;
        this.consecutiveDroppedFrameCount = 0;
        maybeNotifyRenderedFirstFrame();
    }

    protected void renderOutputBufferV21(MediaCodec mediaCodec, int i, long j, long j2) {
        maybeNotifyVideoSizeChanged();
        TraceUtil.beginSection("releaseOutputBuffer");
        mediaCodec.releaseOutputBuffer(i, j2);
        TraceUtil.endSection();
        this.lastRenderTimeUs = SystemClock.elapsedRealtime() * 1000;
        this.decoderCounters.renderedOutputBufferCount++;
        this.consecutiveDroppedFrameCount = 0;
        maybeNotifyRenderedFirstFrame();
    }

    private boolean shouldUseDummySurface(MediaCodecInfo mediaCodecInfo) {
        return Util.SDK_INT >= 23 && !this.tunneling && !codecNeedsSetOutputSurfaceWorkaround(mediaCodecInfo.name) && (!mediaCodecInfo.secure || DummySurface.isSecureSupported(this.context));
    }

    private void setJoiningDeadlineMs() {
        this.joiningDeadlineMs = this.allowedJoiningTimeMs > 0 ? SystemClock.elapsedRealtime() + this.allowedJoiningTimeMs : -9223372036854775807L;
    }

    private void clearRenderedFirstFrame() {
        MediaCodec codec;
        this.renderedFirstFrame = false;
        if (Util.SDK_INT < 23 || !this.tunneling || (codec = getCodec()) == null) {
            return;
        }
        this.tunnelingOnFrameRenderedListener = new OnFrameRenderedListenerV23(codec);
    }

    void maybeNotifyRenderedFirstFrame() {
        if (this.renderedFirstFrame) {
            return;
        }
        this.renderedFirstFrame = true;
        this.eventDispatcher.renderedFirstFrame(this.surface);
    }

    private void maybeRenotifyRenderedFirstFrame() {
        if (this.renderedFirstFrame) {
            this.eventDispatcher.renderedFirstFrame(this.surface);
        }
    }

    private void clearReportedVideoSize() {
        this.reportedWidth = -1;
        this.reportedHeight = -1;
        this.reportedPixelWidthHeightRatio = -1.0f;
        this.reportedUnappliedRotationDegrees = -1;
    }

    private void maybeNotifyVideoSizeChanged() {
        if (this.currentWidth == -1 && this.currentHeight == -1) {
            return;
        }
        if (this.reportedWidth == this.currentWidth && this.reportedHeight == this.currentHeight && this.reportedUnappliedRotationDegrees == this.currentUnappliedRotationDegrees && this.reportedPixelWidthHeightRatio == this.currentPixelWidthHeightRatio) {
            return;
        }
        this.eventDispatcher.videoSizeChanged(this.currentWidth, this.currentHeight, this.currentUnappliedRotationDegrees, this.currentPixelWidthHeightRatio);
        this.reportedWidth = this.currentWidth;
        this.reportedHeight = this.currentHeight;
        this.reportedUnappliedRotationDegrees = this.currentUnappliedRotationDegrees;
        this.reportedPixelWidthHeightRatio = this.currentPixelWidthHeightRatio;
    }

    private void maybeRenotifyVideoSizeChanged() {
        if (this.reportedWidth == -1 && this.reportedHeight == -1) {
            return;
        }
        this.eventDispatcher.videoSizeChanged(this.reportedWidth, this.reportedHeight, this.reportedUnappliedRotationDegrees, this.reportedPixelWidthHeightRatio);
    }

    private void maybeNotifyDroppedFrames() {
        if (this.droppedFrames > 0) {
            long jElapsedRealtime = SystemClock.elapsedRealtime();
            this.eventDispatcher.droppedFrames(this.droppedFrames, jElapsedRealtime - this.droppedFrameAccumulationStartTimeMs);
            this.droppedFrames = 0;
            this.droppedFrameAccumulationStartTimeMs = jElapsedRealtime;
        }
    }

    private static void setOutputSurfaceV23(MediaCodec mediaCodec, Surface surface) {
        mediaCodec.setOutputSurface(surface);
    }

    private static void configureTunnelingV21(MediaFormat mediaFormat, int i) {
        mediaFormat.setFeatureEnabled("tunneled-playback", true);
        mediaFormat.setInteger("audio-session-id", i);
    }

    protected MediaFormat getMediaFormat(Format format, CodecMaxValues codecMaxValues, boolean z, int i) {
        MediaFormat mediaFormat = new MediaFormat();
        mediaFormat.setString("mime", format.sampleMimeType);
        mediaFormat.setInteger("width", format.width);
        mediaFormat.setInteger("height", format.height);
        MediaFormatUtil.setCsdBuffers(mediaFormat, format.initializationData);
        MediaFormatUtil.maybeSetFloat(mediaFormat, "frame-rate", format.frameRate);
        MediaFormatUtil.maybeSetInteger(mediaFormat, "rotation-degrees", format.rotationDegrees);
        MediaFormatUtil.maybeSetColorInfo(mediaFormat, format.colorInfo);
        mediaFormat.setInteger("max-width", codecMaxValues.width);
        mediaFormat.setInteger("max-height", codecMaxValues.height);
        MediaFormatUtil.maybeSetInteger(mediaFormat, "max-input-size", codecMaxValues.inputSize);
        if (Util.SDK_INT >= 23) {
            mediaFormat.setInteger(RemoteMessageConst.Notification.PRIORITY, 0);
        }
        if (z) {
            mediaFormat.setInteger("auto-frc", 0);
        }
        if (i != 0) {
            configureTunnelingV21(mediaFormat, i);
        }
        return mediaFormat;
    }

    protected CodecMaxValues getCodecMaxValues(MediaCodecInfo mediaCodecInfo, Format format, Format[] formatArr) throws MediaCodecUtil.DecoderQueryException {
        int iMax = format.width;
        int iMax2 = format.height;
        int maxInputSize = getMaxInputSize(mediaCodecInfo, format);
        if (formatArr.length == 1) {
            return new CodecMaxValues(iMax, iMax2, maxInputSize);
        }
        boolean z = false;
        for (Format format2 : formatArr) {
            if (areAdaptationCompatible(mediaCodecInfo.adaptive, format, format2)) {
                z |= format2.width == -1 || format2.height == -1;
                iMax = Math.max(iMax, format2.width);
                iMax2 = Math.max(iMax2, format2.height);
                maxInputSize = Math.max(maxInputSize, getMaxInputSize(mediaCodecInfo, format2));
            }
        }
        if (z) {
            Log.w(TAG, "Resolutions unknown. Codec max resolution: " + iMax + "x" + iMax2);
            Point codecMaxSize = getCodecMaxSize(mediaCodecInfo, format);
            if (codecMaxSize != null) {
                iMax = Math.max(iMax, codecMaxSize.x);
                iMax2 = Math.max(iMax2, codecMaxSize.y);
                maxInputSize = Math.max(maxInputSize, getMaxInputSize(mediaCodecInfo, format.sampleMimeType, iMax, iMax2));
                Log.w(TAG, "Codec max resolution adjusted to: " + iMax + "x" + iMax2);
            }
        }
        return new CodecMaxValues(iMax, iMax2, maxInputSize);
    }

    private static Point getCodecMaxSize(MediaCodecInfo mediaCodecInfo, Format format) throws MediaCodecUtil.DecoderQueryException {
        boolean z = format.height > format.width;
        int i = z ? format.height : format.width;
        int i2 = z ? format.width : format.height;
        float f = i2 / i;
        for (int i3 : STANDARD_LONG_EDGE_VIDEO_PX) {
            int i4 = (int) (i3 * f);
            if (i3 <= i || i4 <= i2) {
                break;
            }
            if (Util.SDK_INT >= 21) {
                int i5 = z ? i4 : i3;
                if (!z) {
                    i3 = i4;
                }
                Point pointAlignVideoSizeV21 = mediaCodecInfo.alignVideoSizeV21(i5, i3);
                if (mediaCodecInfo.isVideoSizeAndRateSupportedV21(pointAlignVideoSizeV21.x, pointAlignVideoSizeV21.y, format.frameRate)) {
                    return pointAlignVideoSizeV21;
                }
            } else {
                int iCeilDivide = Util.ceilDivide(i3, 16) * 16;
                int iCeilDivide2 = Util.ceilDivide(i4, 16) * 16;
                if (iCeilDivide * iCeilDivide2 <= MediaCodecUtil.maxH264DecodableFrameSize()) {
                    int i6 = z ? iCeilDivide2 : iCeilDivide;
                    if (!z) {
                        iCeilDivide = iCeilDivide2;
                    }
                    return new Point(i6, iCeilDivide);
                }
            }
        }
        return null;
    }

    private static int getMaxInputSize(MediaCodecInfo mediaCodecInfo, Format format) {
        if (format.maxInputSize != -1) {
            int size = format.initializationData.size();
            int length = 0;
            for (int i = 0; i < size; i++) {
                length += format.initializationData.get(i).length;
            }
            return format.maxInputSize + length;
        }
        return getMaxInputSize(mediaCodecInfo, format.sampleMimeType, format.width, format.height);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    private static int getMaxInputSize(MediaCodecInfo mediaCodecInfo, String str, int i, int i2) {
        byte b;
        int iCeilDivide;
        if (i == -1 || i2 == -1) {
            return -1;
        }
        int i3 = 4;
        switch (str.hashCode()) {
            case -1664118616:
                b = !str.equals("video/3gpp") ? (byte) -1 : (byte) 0;
                break;
            case -1662541442:
                b = !str.equals("video/hevc") ? (byte) -1 : (byte) 4;
                break;
            case 1187890754:
                b = !str.equals("video/mp4v-es") ? (byte) -1 : (byte) 1;
                break;
            case 1331836730:
                b = !str.equals("video/avc") ? (byte) -1 : (byte) 2;
                break;
            case 1599127256:
                b = !str.equals("video/x-vnd.on2.vp8") ? (byte) -1 : (byte) 3;
                break;
            case 1599127257:
                b = !str.equals("video/x-vnd.on2.vp9") ? (byte) -1 : (byte) 5;
                break;
            default:
                b = -1;
                break;
        }
        if (b == 0 || b == 1) {
            iCeilDivide = i * i2;
            i3 = 2;
        } else if (b != 2) {
            if (b != 3) {
                if (b != 4 && b != 5) {
                    return -1;
                }
                iCeilDivide = i * i2;
            }
            iCeilDivide = i * i2;
            i3 = 2;
        } else {
            if ("BRAVIA 4K 2015".equals(Util.MODEL) || ("Amazon".equals(Util.MANUFACTURER) && ("KFSOWI".equals(Util.MODEL) || ("AFTS".equals(Util.MODEL) && mediaCodecInfo.secure)))) {
                return -1;
            }
            iCeilDivide = Util.ceilDivide(i, 16) * Util.ceilDivide(i2, 16) * 16 * 16;
            i3 = 2;
        }
        return (iCeilDivide * 3) / (i3 * 2);
    }

    private static boolean areAdaptationCompatible(boolean z, Format format, Format format2) {
        return format.sampleMimeType.equals(format2.sampleMimeType) && format.rotationDegrees == format2.rotationDegrees && (z || (format.width == format2.width && format.height == format2.height)) && Util.areEqual(format.colorInfo, format2.colorInfo);
    }

    private static boolean deviceNeedsAutoFrcWorkaround() {
        return Util.SDK_INT <= 22 && "foster".equals(Util.DEVICE) && "NVIDIA".equals(Util.MANUFACTURER);
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:368:0x059a  */
    /* JADX WARN: Removed duplicated region for block: B:383:0x05c5  */
    /* JADX WARN: Removed duplicated region for block: B:387:0x05cb A[Catch: all -> 0x05d3, TryCatch #0 {, blocks: (B:9:0x0014, B:11:0x0018, B:12:0x0020, B:369:0x059b, B:372:0x05a1, B:388:0x05cd, B:387:0x05cb, B:377:0x05b2, B:380:0x05bc, B:371:0x059f, B:14:0x0025, B:17:0x0031, B:20:0x003d, B:23:0x0049, B:26:0x0055, B:29:0x0061, B:32:0x006d, B:35:0x0079, B:38:0x0085, B:41:0x0091, B:44:0x009d, B:47:0x00a9, B:50:0x00b5, B:53:0x00bf, B:56:0x00cb, B:59:0x00d7, B:62:0x00e3, B:65:0x00ef, B:68:0x00fb, B:71:0x0106, B:74:0x0112, B:77:0x011e, B:80:0x012a, B:83:0x0136, B:86:0x0142, B:89:0x014e, B:92:0x015a, B:95:0x0166, B:98:0x0172, B:101:0x017e, B:104:0x018a, B:107:0x0196, B:110:0x01a2, B:113:0x01ae, B:116:0x01ba, B:119:0x01c5, B:122:0x01d1, B:125:0x01dd, B:128:0x01e9, B:131:0x01f5, B:134:0x0201, B:137:0x020d, B:140:0x0219, B:143:0x0225, B:146:0x0231, B:149:0x023d, B:152:0x0249, B:155:0x0255, B:158:0x0261, B:161:0x026d, B:164:0x0278, B:167:0x0284, B:170:0x0290, B:173:0x029c, B:176:0x02a8, B:179:0x02b4, B:182:0x02c0, B:185:0x02cc, B:188:0x02d8, B:191:0x02e3, B:194:0x02ee, B:197:0x02f9, B:200:0x0305, B:203:0x0311, B:206:0x031d, B:209:0x0329, B:212:0x0335, B:215:0x0341, B:218:0x034d, B:221:0x0359, B:224:0x0365, B:227:0x0371, B:230:0x037d, B:233:0x0389, B:236:0x0395, B:239:0x03a1, B:242:0x03ad, B:245:0x03b9, B:248:0x03c5, B:251:0x03d1, B:254:0x03dd, B:257:0x03e9, B:260:0x03f5, B:263:0x0401, B:266:0x040d, B:269:0x0419, B:272:0x0425, B:275:0x0431, B:278:0x043d, B:281:0x0449, B:284:0x0454, B:287:0x0460, B:290:0x046c, B:293:0x0478, B:296:0x0484, B:299:0x048f, B:302:0x049b, B:305:0x04a7, B:308:0x04b3, B:311:0x04bf, B:314:0x04cb, B:317:0x04d7, B:320:0x04e3, B:323:0x04ef, B:326:0x04fb, B:329:0x0507, B:332:0x0513, B:335:0x051f, B:338:0x052b, B:341:0x0537, B:344:0x0542, B:347:0x054d, B:350:0x0558, B:353:0x0563, B:356:0x056e, B:359:0x0579, B:362:0x0584, B:365:0x058f, B:389:0x05cf), top: B:396:0x0014 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    protected boolean codecNeedsSetOutputSurfaceWorkaround(String str) {
        byte b = 27;
        byte b2 = 0;
        if (Util.SDK_INT >= 27 || str.startsWith("OMX.google")) {
            return false;
        }
        synchronized (MediaCodecVideoRenderer.class) {
            if (!evaluatedDeviceNeedsSetOutputSurfaceWorkaround) {
                String str2 = Util.DEVICE;
                switch (str2.hashCode()) {
                    case -2144781245:
                        b = !str2.equals("GIONEE_SWW1609") ? (byte) -1 : (byte) 39;
                        break;
                    case -2144781185:
                        if (str2.equals("GIONEE_SWW1627")) {
                            b = 40;
                            break;
                        }
                        break;
                    case -2144781160:
                        if (str2.equals("GIONEE_SWW1631")) {
                            b = 41;
                            break;
                        }
                        break;
                    case -2097309513:
                        if (str2.equals("K50a40")) {
                            b = 57;
                            break;
                        }
                        break;
                    case -2022874474:
                        if (str2.equals("CP8676_I02")) {
                            b = Tnaf.POW_2_WIDTH;
                            break;
                        }
                        break;
                    case -1978993182:
                        if (str2.equals("NX541J")) {
                            b = 69;
                            break;
                        }
                        break;
                    case -1978990237:
                        if (str2.equals("NX573J")) {
                            b = 70;
                            break;
                        }
                        break;
                    case -1936688988:
                        if (str2.equals("PGN528")) {
                            b = 80;
                            break;
                        }
                        break;
                    case -1936688066:
                        if (str2.equals("PGN610")) {
                            b = 81;
                            break;
                        }
                        break;
                    case -1936688065:
                        if (str2.equals("PGN611")) {
                            b = 82;
                            break;
                        }
                        break;
                    case -1931988508:
                        if (str2.equals("AquaPowerM")) {
                            b = 10;
                            break;
                        }
                        break;
                    case -1696512866:
                        if (str2.equals("XT1663")) {
                            b = 115;
                            break;
                        }
                        break;
                    case -1680025915:
                        if (str2.equals("ComioS1")) {
                            b = 15;
                            break;
                        }
                        break;
                    case -1615810839:
                        if (str2.equals("Phantom6")) {
                            b = e.Q;
                            break;
                        }
                        break;
                    case -1554255044:
                        if (str2.equals("vernee_M5")) {
                            b = 108;
                            break;
                        }
                        break;
                    case -1481772737:
                        if (str2.equals("panell_dl")) {
                            b = e.P;
                            break;
                        }
                        break;
                    case -1481772730:
                        if (str2.equals("panell_ds")) {
                            b = 77;
                            break;
                        }
                        break;
                    case -1481772729:
                        if (str2.equals("panell_dt")) {
                            b = 78;
                            break;
                        }
                        break;
                    case -1320080169:
                        if (str2.equals("GiONEE_GBL7319")) {
                            b = 37;
                            break;
                        }
                        break;
                    case -1217592143:
                        if (str2.equals("BRAVIA_ATV2")) {
                            b = 13;
                            break;
                        }
                        break;
                    case -1180384755:
                        if (str2.equals("iris60")) {
                            b = e.M;
                            break;
                        }
                        break;
                    case -1139198265:
                        if (str2.equals("Slate_Pro")) {
                            b = 96;
                            break;
                        }
                        break;
                    case -1052835013:
                        if (str2.equals("namath")) {
                            b = 67;
                            break;
                        }
                        break;
                    case -993250464:
                        if (str2.equals("A10-70F")) {
                            b = 3;
                            break;
                        }
                        break;
                    case -965403638:
                        if (str2.equals("s905x018")) {
                            b = 98;
                            break;
                        }
                        break;
                    case -958336948:
                        if (str2.equals("ELUGA_Ray_X")) {
                            b = 26;
                            break;
                        }
                        break;
                    case -879245230:
                        if (str2.equals("tcl_eu")) {
                            b = 104;
                            break;
                        }
                        break;
                    case -842500323:
                        if (str2.equals("nicklaus_f")) {
                            b = 68;
                            break;
                        }
                        break;
                    case -821392978:
                        if (str2.equals("A7000-a")) {
                            b = 6;
                            break;
                        }
                        break;
                    case -797483286:
                        if (str2.equals("SVP-DTV15")) {
                            b = 97;
                            break;
                        }
                        break;
                    case -794946968:
                        if (str2.equals("watson")) {
                            b = 109;
                            break;
                        }
                        break;
                    case -788334647:
                        if (str2.equals("whyred")) {
                            b = 110;
                            break;
                        }
                        break;
                    case -782144577:
                        if (str2.equals("OnePlus5T")) {
                            b = 71;
                            break;
                        }
                        break;
                    case -575125681:
                        if (str2.equals("GiONEE_CBL7513")) {
                            b = 36;
                            break;
                        }
                        break;
                    case -521118391:
                        if (str2.equals("GIONEE_GBL7360")) {
                            b = 38;
                            break;
                        }
                        break;
                    case -430914369:
                        if (str2.equals("Pixi4-7_3G")) {
                            b = 84;
                            break;
                        }
                        break;
                    case -290434366:
                        if (str2.equals("taido_row")) {
                            b = 99;
                            break;
                        }
                        break;
                    case -282781963:
                        if (str2.equals("BLACK-1X")) {
                            b = 12;
                            break;
                        }
                        break;
                    case -277133239:
                        if (str2.equals("Z12_PRO")) {
                            b = 116;
                            break;
                        }
                        break;
                    case -173639913:
                        if (str2.equals("ELUGA_A3_Pro")) {
                            b = 23;
                            break;
                        }
                        break;
                    case -56598463:
                        if (str2.equals("woods_fn")) {
                            b = 112;
                            break;
                        }
                        break;
                    case 2126:
                        if (str2.equals("C1")) {
                            b = 14;
                            break;
                        }
                        break;
                    case 2564:
                        if (str2.equals("Q5")) {
                            b = 92;
                            break;
                        }
                        break;
                    case 2715:
                        if (str2.equals("V1")) {
                            b = 105;
                            break;
                        }
                        break;
                    case 2719:
                        if (str2.equals("V5")) {
                            b = 107;
                            break;
                        }
                        break;
                    case 3483:
                        if (str2.equals("mh")) {
                            b = 64;
                            break;
                        }
                        break;
                    case 73405:
                        if (str2.equals("JGZ")) {
                            b = 56;
                            break;
                        }
                        break;
                    case 75739:
                        if (str2.equals("M5c")) {
                            b = 60;
                            break;
                        }
                        break;
                    case 76779:
                        if (str2.equals("MX6")) {
                            b = 66;
                            break;
                        }
                        break;
                    case 78669:
                        if (str2.equals("P85")) {
                            b = 74;
                            break;
                        }
                        break;
                    case 79305:
                        if (str2.equals("PLE")) {
                            b = 86;
                            break;
                        }
                        break;
                    case 80618:
                        if (str2.equals("QX1")) {
                            b = 94;
                            break;
                        }
                        break;
                    case 88274:
                        if (str2.equals("Z80")) {
                            b = 117;
                            break;
                        }
                        break;
                    case 98846:
                        if (str2.equals("cv1")) {
                            b = 19;
                            break;
                        }
                        break;
                    case 98848:
                        if (str2.equals("cv3")) {
                            b = 20;
                            break;
                        }
                        break;
                    case 99329:
                        if (str2.equals("deb")) {
                            b = 21;
                            break;
                        }
                        break;
                    case 101481:
                        if (str2.equals("flo")) {
                            b = 35;
                            break;
                        }
                        break;
                    case 1513190:
                        if (str2.equals("1601")) {
                            b = 0;
                            break;
                        }
                        break;
                    case 1514184:
                        if (str2.equals("1713")) {
                            b = 1;
                            break;
                        }
                        break;
                    case 1514185:
                        if (str2.equals("1714")) {
                            b = 2;
                            break;
                        }
                        break;
                    case 2436959:
                        if (str2.equals("P681")) {
                            b = 73;
                            break;
                        }
                        break;
                    case 2463773:
                        if (str2.equals("Q350")) {
                            b = e.S;
                            break;
                        }
                        break;
                    case 2464648:
                        if (str2.equals("Q427")) {
                            b = 90;
                            break;
                        }
                        break;
                    case 2689555:
                        if (str2.equals("XE2X")) {
                            b = 114;
                            break;
                        }
                        break;
                    case 3351335:
                        if (str2.equals("mido")) {
                            b = 65;
                            break;
                        }
                        break;
                    case 3386211:
                        if (str2.equals("p212")) {
                            b = 72;
                            break;
                        }
                        break;
                    case 41325051:
                        if (str2.equals("MEIZU_M5")) {
                            b = Utf8.REPLACEMENT_BYTE;
                            break;
                        }
                        break;
                    case 55178625:
                        if (str2.equals("Aura_Note_2")) {
                            b = 11;
                            break;
                        }
                        break;
                    case 61542055:
                        if (str2.equals("A1601")) {
                            b = 4;
                            break;
                        }
                        break;
                    case 65355429:
                        if (str2.equals("E5643")) {
                            b = 22;
                            break;
                        }
                        break;
                    case 66214468:
                        if (str2.equals("F3111")) {
                            b = 28;
                            break;
                        }
                        break;
                    case 66214470:
                        if (str2.equals("F3113")) {
                            b = 29;
                            break;
                        }
                        break;
                    case 66214473:
                        if (str2.equals("F3116")) {
                            b = 30;
                            break;
                        }
                        break;
                    case 66215429:
                        if (str2.equals("F3211")) {
                            b = 31;
                            break;
                        }
                        break;
                    case 66215431:
                        if (str2.equals("F3213")) {
                            b = 32;
                            break;
                        }
                        break;
                    case 66215433:
                        if (str2.equals("F3215")) {
                            b = 33;
                            break;
                        }
                        break;
                    case 66216390:
                        if (str2.equals("F3311")) {
                            b = 34;
                            break;
                        }
                        break;
                    case 76402249:
                        if (str2.equals("PRO7S")) {
                            b = 87;
                            break;
                        }
                        break;
                    case 76404105:
                        if (str2.equals("Q4260")) {
                            b = 89;
                            break;
                        }
                        break;
                    case 76404911:
                        if (str2.equals("Q4310")) {
                            b = 91;
                            break;
                        }
                        break;
                    case 80963634:
                        if (str2.equals("V23GB")) {
                            b = 106;
                            break;
                        }
                        break;
                    case 82882791:
                        if (str2.equals("X3_HK")) {
                            b = 113;
                            break;
                        }
                        break;
                    case 102844228:
                        if (str2.equals("le_x6")) {
                            b = 58;
                            break;
                        }
                        break;
                    case 165221241:
                        if (str2.equals("A2016a40")) {
                            b = 5;
                            break;
                        }
                        break;
                    case 182191441:
                        if (str2.equals("CPY83_I00")) {
                            b = 18;
                            break;
                        }
                        break;
                    case 245388979:
                        if (str2.equals("marino_f")) {
                            b = 62;
                            break;
                        }
                        break;
                    case 287431619:
                        if (str2.equals("griffin")) {
                            b = 45;
                            break;
                        }
                        break;
                    case 307593612:
                        if (str2.equals("A7010a48")) {
                            b = 8;
                            break;
                        }
                        break;
                    case 308517133:
                        if (str2.equals("A7020a48")) {
                            b = 9;
                            break;
                        }
                        break;
                    case 316215098:
                        if (str2.equals("TB3-730F")) {
                            b = 100;
                            break;
                        }
                        break;
                    case 316215116:
                        if (str2.equals("TB3-730X")) {
                            b = 101;
                            break;
                        }
                        break;
                    case 316246811:
                        if (str2.equals("TB3-850F")) {
                            b = 102;
                            break;
                        }
                        break;
                    case 316246818:
                        if (str2.equals("TB3-850M")) {
                            b = e.T;
                            break;
                        }
                        break;
                    case 407160593:
                        if (str2.equals("Pixi5-10_4G")) {
                            b = 85;
                            break;
                        }
                        break;
                    case 507412548:
                        if (str2.equals("QM16XE_U")) {
                            b = 93;
                            break;
                        }
                        break;
                    case 793982701:
                        if (str2.equals("GIONEE_WBL5708")) {
                            b = 42;
                            break;
                        }
                        break;
                    case 794038622:
                        if (str2.equals("GIONEE_WBL7365")) {
                            b = 43;
                            break;
                        }
                        break;
                    case 794040393:
                        if (str2.equals("GIONEE_WBL7519")) {
                            b = 44;
                            break;
                        }
                        break;
                    case 835649806:
                        if (str2.equals("manning")) {
                            b = 61;
                            break;
                        }
                        break;
                    case 917340916:
                        if (str2.equals("A7000plus")) {
                            b = 7;
                            break;
                        }
                        break;
                    case 958008161:
                        if (str2.equals("j2xlteins")) {
                            b = e.O;
                            break;
                        }
                        break;
                    case 1060579533:
                        if (str2.equals("panell_d")) {
                            b = 75;
                            break;
                        }
                        break;
                    case 1150207623:
                        if (str2.equals("LS-5017")) {
                            b = 59;
                            break;
                        }
                        break;
                    case 1176899427:
                        if (str2.equals("itel_S41")) {
                            b = e.N;
                            break;
                        }
                        break;
                    case 1280332038:
                        if (str2.equals("hwALE-H")) {
                            b = 47;
                            break;
                        }
                        break;
                    case 1306947716:
                        if (str2.equals("EverStar_S")) {
                            break;
                        }
                        break;
                    case 1349174697:
                        if (str2.equals("htc_e56ml_dtul")) {
                            b = 46;
                            break;
                        }
                        break;
                    case 1522194893:
                        if (str2.equals("woods_f")) {
                            b = 111;
                            break;
                        }
                        break;
                    case 1691543273:
                        if (str2.equals("CPH1609")) {
                            b = 17;
                            break;
                        }
                        break;
                    case 1709443163:
                        if (str2.equals("iball8735_9806")) {
                            b = e.K;
                            break;
                        }
                        break;
                    case 1865889110:
                        if (str2.equals("santoni")) {
                            b = 95;
                            break;
                        }
                        break;
                    case 1906253259:
                        if (str2.equals("PB2-670M")) {
                            b = 79;
                            break;
                        }
                        break;
                    case 1977196784:
                        if (str2.equals("Infinix-X572")) {
                            b = e.L;
                            break;
                        }
                        break;
                    case 2029784656:
                        if (str2.equals("HWBLN-H")) {
                            b = e.H;
                            break;
                        }
                        break;
                    case 2030379515:
                        if (str2.equals("HWCAM-H")) {
                            b = e.I;
                            break;
                        }
                        break;
                    case 2047190025:
                        if (str2.equals("ELUGA_Note")) {
                            b = 24;
                            break;
                        }
                        break;
                    case 2047252157:
                        if (str2.equals("ELUGA_Prim")) {
                            b = 25;
                            break;
                        }
                        break;
                    case 2048319463:
                        if (str2.equals("HWVNS-H")) {
                            b = e.J;
                            break;
                        }
                        break;
                    default:
                        break;
                }
                switch (b) {
                    case 0:
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 10:
                    case 11:
                    case 12:
                    case 13:
                    case 14:
                    case 15:
                    case 16:
                    case 17:
                    case 18:
                    case 19:
                    case 20:
                    case 21:
                    case 22:
                    case 23:
                    case 24:
                    case 25:
                    case 26:
                    case 27:
                    case 28:
                    case 29:
                    case 30:
                    case 31:
                    case 32:
                    case 33:
                    case 34:
                    case 35:
                    case 36:
                    case 37:
                    case 38:
                    case 39:
                    case 40:
                    case 41:
                    case 42:
                    case 43:
                    case 44:
                    case 45:
                    case 46:
                    case 47:
                    case 48:
                    case 49:
                    case 50:
                    case 51:
                    case 52:
                    case 53:
                    case 54:
                    case 55:
                    case 56:
                    case 57:
                    case 58:
                    case 59:
                    case 60:
                    case 61:
                    case 62:
                    case 63:
                    case 64:
                    case 65:
                    case 66:
                    case 67:
                    case 68:
                    case 69:
                    case 70:
                    case 71:
                    case 72:
                    case 73:
                    case 74:
                    case 75:
                    case 76:
                    case 77:
                    case 78:
                    case 79:
                    case 80:
                    case 81:
                    case 82:
                    case 83:
                    case 84:
                    case 85:
                    case 86:
                    case 87:
                    case 88:
                    case 89:
                    case 90:
                    case 91:
                    case 92:
                    case 93:
                    case 94:
                    case 95:
                    case 96:
                    case 97:
                    case 98:
                    case 99:
                    case 100:
                    case 101:
                    case 102:
                    case 103:
                    case 104:
                    case 105:
                    case 106:
                    case 107:
                    case 108:
                    case 109:
                    case 110:
                    case 111:
                    case 112:
                    case 113:
                    case 114:
                    case 115:
                    case 116:
                    case 117:
                        deviceNeedsSetOutputSurfaceWorkaround = true;
                        break;
                }
                String str3 = Util.MODEL;
                int iHashCode = str3.hashCode();
                if (iHashCode != 2006354) {
                    b2 = (iHashCode == 2006367 && str3.equals("AFTN")) ? (byte) 1 : (byte) -1;
                    if (b2 != 0 || b2 == 1) {
                        deviceNeedsSetOutputSurfaceWorkaround = true;
                    }
                    evaluatedDeviceNeedsSetOutputSurfaceWorkaround = true;
                } else {
                    if (str3.equals("AFTA")) {
                    }
                    if (b2 != 0) {
                        deviceNeedsSetOutputSurfaceWorkaround = true;
                        evaluatedDeviceNeedsSetOutputSurfaceWorkaround = true;
                    }
                }
            }
        }
        return deviceNeedsSetOutputSurfaceWorkaround;
    }

    protected static final class CodecMaxValues {
        public final int height;
        public final int inputSize;
        public final int width;

        public CodecMaxValues(int i, int i2, int i3) {
            this.width = i;
            this.height = i2;
            this.inputSize = i3;
        }
    }

    private final class OnFrameRenderedListenerV23 implements MediaCodec.OnFrameRenderedListener {
        private OnFrameRenderedListenerV23(MediaCodec mediaCodec) {
            mediaCodec.setOnFrameRenderedListener(this, new Handler());
        }

        @Override
        public final void onFrameRendered(MediaCodec mediaCodec, long j, long j2) {
            if (this != MediaCodecVideoRenderer.this.tunnelingOnFrameRenderedListener) {
                return;
            }
            MediaCodecVideoRenderer.this.maybeNotifyRenderedFirstFrame();
        }
    }
}
