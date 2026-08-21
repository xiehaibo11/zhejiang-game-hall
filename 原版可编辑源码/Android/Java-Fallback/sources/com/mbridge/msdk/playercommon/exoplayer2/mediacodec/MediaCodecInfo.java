package com.mbridge.msdk.playercommon.exoplayer2.mediacodec;

public final class MediaCodecInfo {
    public static final int MAX_SUPPORTED_INSTANCES_UNKNOWN = -1;
    public static final java.lang.String TAG = "MediaCodecInfo";
    public final boolean adaptive;
    public final android.media.MediaCodecInfo.CodecCapabilities capabilities;
    public final java.lang.String mimeType;
    public final java.lang.String name;
    public final boolean passthrough;
    public final boolean secure;
    public final boolean tunneling;

    private MediaCodecInfo(java.lang.String r1, java.lang.String r2, android.media.MediaCodecInfo.CodecCapabilities r3, boolean r4, boolean r5, boolean r6) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.mbridge.msdk.playercommon.exoplayer2.util.Assertions.checkNotNull(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.name = r1
            r0.mimeType = r2
            r0.capabilities = r3
            r0.passthrough = r4
            r1 = 1
            r2 = 0
            if (r5 != 0) goto L1f
            if (r3 == 0) goto L1f
            boolean r4 = isAdaptive(r3)
            if (r4 == 0) goto L1f
            r4 = r1
            goto L20
        L1f:
            r4 = r2
        L20:
            r0.adaptive = r4
            if (r3 == 0) goto L2c
            boolean r4 = isTunneling(r3)
            if (r4 == 0) goto L2c
            r4 = r1
            goto L2d
        L2c:
            r4 = r2
        L2d:
            r0.tunneling = r4
            if (r6 != 0) goto L3b
            if (r3 == 0) goto L3a
            boolean r3 = isSecure(r3)
            if (r3 == 0) goto L3a
            goto L3b
        L3a:
            r1 = r2
        L3b:
            r0.secure = r1
            return
    }

    private static int adjustMaxInputChannelCount(java.lang.String r2, java.lang.String r3, int r4) {
            r0 = 1
            if (r4 > r0) goto La9
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 26
            if (r0 < r1) goto Ld
            if (r4 <= 0) goto Ld
            goto La9
        Ld:
            java.lang.String r0 = "audio/mpeg"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/3gpp"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/amr-wb"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/mp4a-latm"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/vorbis"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/opus"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/raw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/flac"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/g711-alaw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/g711-mlaw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La9
            java.lang.String r0 = "audio/gsm"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L66
            goto La9
        L66:
            java.lang.String r0 = "audio/ac3"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L70
            r3 = 6
            goto L7d
        L70:
            java.lang.String r0 = "audio/eac3"
            boolean r3 = r0.equals(r3)
            if (r3 == 0) goto L7b
            r3 = 16
            goto L7d
        L7b:
            r3 = 30
        L7d:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AssumedMaxChannelAdjustment: "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = ", ["
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = " to "
            r0.append(r2)
            r0.append(r3)
            java.lang.String r2 = "]"
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r4 = "MediaCodecInfo"
            android.util.Log.w(r4, r2)
            return r3
        La9:
            return r4
    }

    private static boolean areSizeAndRateSupportedV21(android.media.MediaCodecInfo.VideoCapabilities r2, int r3, int r4, double r5) {
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            goto L12
        Ld:
            boolean r2 = r2.areSizeAndRateSupported(r3, r4, r5)
            goto L16
        L12:
            boolean r2 = r2.isSizeSupported(r3, r4)
        L16:
            return r2
    }

    private static int getMaxSupportedInstancesV23(android.media.MediaCodecInfo.CodecCapabilities r0) {
            int r0 = r0.getMaxSupportedInstances()
            return r0
    }

    private static boolean isAdaptive(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 19
            if (r0 < r1) goto Le
            boolean r2 = isAdaptiveV19(r2)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private static boolean isAdaptiveV19(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "adaptive-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private static boolean isSecure(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            boolean r2 = isSecureV21(r2)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private static boolean isSecureV21(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "secure-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private static boolean isTunneling(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto Le
            boolean r2 = isTunnelingV21(r2)
            if (r2 == 0) goto Le
            r2 = 1
            goto Lf
        Le:
            r2 = 0
        Lf:
            return r2
    }

    private static boolean isTunnelingV21(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "tunneled-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private void logAssumedSupport(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AssumedSupport ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "] ["
            r0.append(r3)
            java.lang.String r1 = r2.name
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r1 = r2.mimeType
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE_DEBUG_INFO
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MediaCodecInfo"
            android.util.Log.d(r0, r3)
            return
    }

    private void logNoSupport(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "NoSupport ["
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "] ["
            r0.append(r3)
            java.lang.String r1 = r2.name
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r1 = r2.mimeType
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE_DEBUG_INFO
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MediaCodecInfo"
            android.util.Log.d(r0, r3)
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo newInstance(java.lang.String r8, java.lang.String r9, android.media.MediaCodecInfo.CodecCapabilities r10) {
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r7 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo
            r4 = 0
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo newInstance(java.lang.String r8, java.lang.String r9, android.media.MediaCodecInfo.CodecCapabilities r10, boolean r11, boolean r12) {
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r7 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo
            r4 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r5 = r11
            r6 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo newPassthroughInstance(java.lang.String r8) {
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r7 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo
            r2 = 0
            r3 = 0
            r4 = 1
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return r7
    }

    public final android.graphics.Point alignVideoSizeV21(int r4, int r5) {
            r3 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r3.capabilities
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r4 = "align.caps"
            r3.logNoSupport(r4)
            return r1
        Lb:
            android.media.MediaCodecInfo$VideoCapabilities r0 = r0.getVideoCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r4 = "align.vCaps"
            r3.logNoSupport(r4)
            return r1
        L17:
            int r1 = r0.getWidthAlignment()
            int r0 = r0.getHeightAlignment()
            android.graphics.Point r2 = new android.graphics.Point
            int r4 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r4, r1)
            int r4 = r4 * r1
            int r5 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.ceilDivide(r5, r0)
            int r5 = r5 * r0
            r2.<init>(r4, r5)
            return r2
    }

    public final int getMaxSupportedInstances() {
            r2 = this;
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 23
            if (r0 < r1) goto L10
            android.media.MediaCodecInfo$CodecCapabilities r0 = r2.capabilities
            if (r0 != 0) goto Lb
            goto L10
        Lb:
            int r0 = getMaxSupportedInstancesV23(r0)
            goto L11
        L10:
            r0 = -1
        L11:
            return r0
    }

    public final android.media.MediaCodecInfo.CodecProfileLevel[] getProfileLevels() {
            r1 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r1.capabilities
            if (r0 == 0) goto Le
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = r0.profileLevels
            if (r0 != 0) goto L9
            goto Le
        L9:
            android.media.MediaCodecInfo$CodecCapabilities r0 = r1.capabilities
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = r0.profileLevels
            goto L11
        Le:
            r0 = 0
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = new android.media.MediaCodecInfo.CodecProfileLevel[r0]
        L11:
            return r0
    }

    public final boolean isAudioChannelCountSupportedV21(int r5) {
            r4 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r4.capabilities
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r5 = "channelCount.caps"
            r4.logNoSupport(r5)
            return r1
        Lb:
            android.media.MediaCodecInfo$AudioCapabilities r0 = r0.getAudioCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r5 = "channelCount.aCaps"
            r4.logNoSupport(r5)
            return r1
        L17:
            java.lang.String r2 = r4.name
            java.lang.String r3 = r4.mimeType
            int r0 = r0.getMaxInputChannelCount()
            int r0 = adjustMaxInputChannelCount(r2, r3, r0)
            if (r0 >= r5) goto L3a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "channelCount.support, "
            r0.append(r2)
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            r4.logNoSupport(r5)
            return r1
        L3a:
            r5 = 1
            return r5
    }

    public final boolean isAudioSampleRateSupportedV21(int r4) {
            r3 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r3.capabilities
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r4 = "sampleRate.caps"
            r3.logNoSupport(r4)
            return r1
        Lb:
            android.media.MediaCodecInfo$AudioCapabilities r0 = r0.getAudioCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r4 = "sampleRate.aCaps"
            r3.logNoSupport(r4)
            return r1
        L17:
            boolean r0 = r0.isSampleRateSupported(r4)
            if (r0 != 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "sampleRate.support, "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r3.logNoSupport(r4)
            return r1
        L32:
            r4 = 1
            return r4
    }

    public final boolean isCodecSupported(java.lang.String r12) {
            r11 = this;
            r0 = 1
            if (r12 == 0) goto L7e
            java.lang.String r1 = r11.mimeType
            if (r1 != 0) goto L9
            goto L7e
        L9:
            java.lang.String r1 = com.mbridge.msdk.playercommon.exoplayer2.util.MimeTypes.getMediaMimeType(r12)
            if (r1 != 0) goto L10
            return r0
        L10:
            java.lang.String r2 = r11.mimeType
            boolean r2 = r2.equals(r1)
            java.lang.String r3 = ", "
            r4 = 0
            if (r2 != 0) goto L36
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "codec.mime "
            r0.append(r2)
            r0.append(r12)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
            r11.logNoSupport(r12)
            return r4
        L36:
            android.util.Pair r2 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.getCodecProfileAndLevel(r12)
            if (r2 != 0) goto L3d
            return r0
        L3d:
            android.media.MediaCodecInfo$CodecProfileLevel[] r5 = r11.getProfileLevels()
            int r6 = r5.length
            r7 = r4
        L43:
            if (r7 >= r6) goto L63
            r8 = r5[r7]
            int r9 = r8.profile
            java.lang.Object r10 = r2.first
            java.lang.Integer r10 = (java.lang.Integer) r10
            int r10 = r10.intValue()
            if (r9 != r10) goto L60
            int r8 = r8.level
            java.lang.Object r9 = r2.second
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            if (r8 < r9) goto L60
            return r0
        L60:
            int r7 = r7 + 1
            goto L43
        L63:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "codec.profileLevel, "
            r0.append(r2)
            r0.append(r12)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
            r11.logNoSupport(r12)
            return r4
        L7e:
            return r0
    }

    public final boolean isVideoSizeAndRateSupportedV21(int r5, int r6, double r7) {
            r4 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r4.capabilities
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r5 = "sizeAndRate.caps"
            r4.logNoSupport(r5)
            return r1
        Lb:
            android.media.MediaCodecInfo$VideoCapabilities r0 = r0.getVideoCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r5 = "sizeAndRate.vCaps"
            r4.logNoSupport(r5)
            return r1
        L17:
            boolean r2 = areSizeAndRateSupportedV21(r0, r5, r6, r7)
            if (r2 != 0) goto L6a
            java.lang.String r2 = "x"
            if (r5 >= r6) goto L49
            boolean r0 = areSizeAndRateSupportedV21(r0, r6, r5, r7)
            if (r0 != 0) goto L28
            goto L49
        L28:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "sizeAndRate.rotated, "
            r0.append(r1)
            r0.append(r5)
            r0.append(r2)
            r0.append(r6)
            r0.append(r2)
            r0.append(r7)
            java.lang.String r5 = r0.toString()
            r4.logAssumedSupport(r5)
            goto L6a
        L49:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "sizeAndRate.support, "
            r0.append(r3)
            r0.append(r5)
            r0.append(r2)
            r0.append(r6)
            r0.append(r2)
            r0.append(r7)
            java.lang.String r5 = r0.toString()
            r4.logNoSupport(r5)
            return r1
        L6a:
            r5 = 1
            return r5
    }
}
