package com.mbridge.msdk.playercommon.exoplayer2.mediacodec;

public final class MediaCodecUtil {
    private static final android.util.SparseIntArray AVC_LEVEL_NUMBER_TO_CONST = null;
    private static final android.util.SparseIntArray AVC_PROFILE_NUMBER_TO_CONST = null;
    private static final java.lang.String CODEC_ID_AVC1 = "avc1";
    private static final java.lang.String CODEC_ID_AVC2 = "avc2";
    private static final java.lang.String CODEC_ID_HEV1 = "hev1";
    private static final java.lang.String CODEC_ID_HVC1 = "hvc1";
    private static final java.lang.String GOOGLE_RAW_DECODER_NAME = "OMX.google.raw.decoder";
    private static final java.util.Map<java.lang.String, java.lang.Integer> HEVC_CODEC_STRING_TO_PROFILE_LEVEL = null;
    private static final java.lang.String MTK_RAW_DECODER_NAME = "OMX.MTK.AUDIO.DECODER.RAW";
    private static final com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo PASSTHROUGH_DECODER_INFO = null;
    private static final java.util.regex.Pattern PROFILE_PATTERN = null;
    private static final java.lang.String TAG = "MediaCodecUtil";
    private static final java.util.HashMap<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.CodecKey, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo>> decoderInfosCache = null;
    private static int maxH264DecodableFrameSize;

    static class 1 {
    }

    private static final class CodecKey {
        public final java.lang.String mimeType;
        public final boolean secure;

        public CodecKey(java.lang.String r1, boolean r2) {
                r0 = this;
                r0.<init>()
                r0.mimeType = r1
                r0.secure = r2
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L25
                java.lang.Class r2 = r5.getClass()
                java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey> r3 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.CodecKey.class
                if (r2 == r3) goto L10
                goto L25
            L10:
                com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey r5 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.CodecKey) r5
                java.lang.String r2 = r4.mimeType
                java.lang.String r3 = r5.mimeType
                boolean r2 = android.text.TextUtils.equals(r2, r3)
                if (r2 == 0) goto L23
                boolean r2 = r4.secure
                boolean r5 = r5.secure
                if (r2 != r5) goto L23
                goto L24
            L23:
                r0 = r1
            L24:
                return r0
            L25:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                java.lang.String r0 = r2.mimeType
                if (r0 != 0) goto L6
                r0 = 0
                goto La
            L6:
                int r0 = r0.hashCode()
            La:
                r1 = 31
                int r0 = r0 + r1
                int r0 = r0 * r1
                boolean r1 = r2.secure
                if (r1 == 0) goto L15
                r1 = 1231(0x4cf, float:1.725E-42)
                goto L17
            L15:
                r1 = 1237(0x4d5, float:1.733E-42)
            L17:
                int r0 = r0 + r1
                return r0
        }
    }

    public static class DecoderQueryException extends java.lang.Exception {
        private DecoderQueryException(java.lang.Throwable r2) {
                r1 = this;
                java.lang.String r0 = "Failed to query underlying media codecs"
                r1.<init>(r0, r2)
                return
        }

        DecoderQueryException(java.lang.Throwable r1, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.1 r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    private interface MediaCodecListCompat {
        int getCodecCount();

        android.media.MediaCodecInfo getCodecInfoAt(int r1);

        boolean isSecurePlaybackSupported(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2);

        boolean secureDecodersExplicit();
    }

    private static final class MediaCodecListCompatV16 implements com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.MediaCodecListCompat {
        private MediaCodecListCompatV16() {
                r0 = this;
                r0.<init>()
                return
        }

        MediaCodecListCompatV16(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.1 r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final int getCodecCount() {
                r1 = this;
                int r0 = android.media.MediaCodecList.getCodecCount()
                return r0
        }

        @Override
        public final android.media.MediaCodecInfo getCodecInfoAt(int r1) {
                r0 = this;
                android.media.MediaCodecInfo r1 = android.media.MediaCodecList.getCodecInfoAt(r1)
                return r1
        }

        @Override
        public final boolean isSecurePlaybackSupported(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2) {
                r0 = this;
                java.lang.String r2 = "video/avc"
                boolean r1 = r2.equals(r1)
                return r1
        }

        @Override
        public final boolean secureDecodersExplicit() {
                r1 = this;
                r0 = 0
                return r0
        }
    }

    private static final class MediaCodecListCompatV21 implements com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.MediaCodecListCompat {
        private final int codecKind;
        private android.media.MediaCodecInfo[] mediaCodecInfos;

        public MediaCodecListCompatV21(boolean r1) {
                r0 = this;
                r0.<init>()
                r0.codecKind = r1
                return
        }

        private void ensureMediaCodecInfosInitialized() {
                r2 = this;
                android.media.MediaCodecInfo[] r0 = r2.mediaCodecInfos
                if (r0 != 0) goto L11
                android.media.MediaCodecList r0 = new android.media.MediaCodecList
                int r1 = r2.codecKind
                r0.<init>(r1)
                android.media.MediaCodecInfo[] r0 = r0.getCodecInfos()
                r2.mediaCodecInfos = r0
            L11:
                return
        }

        @Override
        public final int getCodecCount() {
                r1 = this;
                r1.ensureMediaCodecInfosInitialized()
                android.media.MediaCodecInfo[] r0 = r1.mediaCodecInfos
                int r0 = r0.length
                return r0
        }

        @Override
        public final android.media.MediaCodecInfo getCodecInfoAt(int r2) {
                r1 = this;
                r1.ensureMediaCodecInfosInitialized()
                android.media.MediaCodecInfo[] r0 = r1.mediaCodecInfos
                r2 = r0[r2]
                return r2
        }

        @Override
        public final boolean isSecurePlaybackSupported(java.lang.String r1, android.media.MediaCodecInfo.CodecCapabilities r2) {
                r0 = this;
                java.lang.String r1 = "secure-playback"
                boolean r1 = r2.isFeatureSupported(r1)
                return r1
        }

        @Override
        public final boolean secureDecodersExplicit() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    static {
            java.lang.String r0 = "OMX.google.raw.decoder"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo.newPassthroughInstance(r0)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.PASSTHROUGH_DECODER_INFO = r0
            java.lang.String r0 = "^\\D?(\\d+)$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.PROFILE_PATTERN = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.decoderInfosCache = r0
            r0 = -1
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize = r0
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_PROFILE_NUMBER_TO_CONST = r0
            r1 = 1
            r2 = 66
            r0.put(r2, r1)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_PROFILE_NUMBER_TO_CONST
            r2 = 2
            r3 = 77
            r0.put(r3, r2)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_PROFILE_NUMBER_TO_CONST
            r3 = 4
            r4 = 88
            r0.put(r4, r3)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_PROFILE_NUMBER_TO_CONST
            r4 = 8
            r5 = 100
            r0.put(r5, r4)
            android.util.SparseIntArray r0 = new android.util.SparseIntArray
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST = r0
            r5 = 10
            r0.put(r5, r1)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r5 = 11
            r0.put(r5, r3)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r5 = 12
            r0.put(r5, r4)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r5 = 16
            r6 = 13
            r0.put(r6, r5)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r6 = 32
            r7 = 20
            r0.put(r7, r6)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r7 = 64
            r8 = 21
            r0.put(r8, r7)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r8 = 128(0x80, float:1.8E-43)
            r9 = 22
            r0.put(r9, r8)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r9 = 256(0x100, float:3.59E-43)
            r10 = 30
            r0.put(r10, r9)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r10 = 512(0x200, float:7.17E-43)
            r11 = 31
            r0.put(r11, r10)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r11 = 1024(0x400, float:1.435E-42)
            r0.put(r6, r11)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r12 = 2048(0x800, float:2.87E-42)
            r13 = 40
            r0.put(r13, r12)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r13 = 4096(0x1000, float:5.74E-42)
            r14 = 41
            r0.put(r14, r13)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r14 = 8192(0x2000, float:1.148E-41)
            r15 = 42
            r0.put(r15, r14)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r15 = 16384(0x4000, float:2.2959E-41)
            r14 = 50
            r0.put(r14, r15)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r14 = 32768(0x8000, float:4.5918E-41)
            r12 = 51
            r0.put(r12, r14)
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            r12 = 65536(0x10000, float:9.1835E-41)
            r14 = 52
            r0.put(r14, r12)
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL = r0
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r14 = "L30"
            r0.put(r14, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r3)
            java.lang.String r3 = "L60"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r5)
            java.lang.String r3 = "L63"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r7)
            java.lang.String r3 = "L90"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r9)
            java.lang.String r3 = "L93"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r11)
            java.lang.String r3 = "L120"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r13)
            java.lang.String r3 = "L123"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r15)
            java.lang.String r3 = "L150"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r12)
            java.lang.String r3 = "L153"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 262144(0x40000, float:3.67342E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L156"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 1048576(0x100000, float:1.469368E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L180"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 4194304(0x400000, float:5.877472E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L183"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 16777216(0x1000000, float:2.3509887E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r3 = "L186"
            r0.put(r3, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            java.lang.String r2 = "H30"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r4)
            java.lang.String r2 = "H60"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r6)
            java.lang.String r2 = "H63"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r8)
            java.lang.String r2 = "H90"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            java.lang.Integer r1 = java.lang.Integer.valueOf(r10)
            java.lang.String r2 = "H93"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 2048(0x800, float:2.87E-42)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H120"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 8192(0x2000, float:1.148E-41)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H123"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 32768(0x8000, float:4.5918E-41)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H150"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 131072(0x20000, float:1.83671E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H153"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 524288(0x80000, float:7.34684E-40)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H156"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 2097152(0x200000, float:2.938736E-39)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H180"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 8388608(0x800000, float:1.1754944E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H183"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.Integer> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r1 = 33554432(0x2000000, float:9.403955E-38)
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            java.lang.String r2 = "H186"
            r0.put(r2, r1)
            return
    }

    private MediaCodecUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void applyWorkarounds(java.util.List<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo> r5) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 26
            if (r0 >= r1) goto L3e
            int r0 = r5.size()
            r1 = 1
            if (r0 <= r1) goto L3e
            r0 = 0
            java.lang.Object r2 = r5.get(r0)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo) r2
            java.lang.String r2 = r2.name
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.RAW"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L3e
        L1e:
            int r2 = r5.size()
            if (r1 >= r2) goto L3e
            java.lang.Object r2 = r5.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r2 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo) r2
            java.lang.String r3 = r2.name
            java.lang.String r4 = "OMX.google.raw.decoder"
            boolean r3 = r4.equals(r3)
            if (r3 == 0) goto L3b
            r5.remove(r1)
            r5.add(r0, r2)
            goto L3e
        L3b:
            int r1 = r1 + 1
            goto L1e
        L3e:
            return
    }

    private static int avcLevelToMaxFrameSize(int r4) {
            r0 = 1
            r1 = 25344(0x6300, float:3.5515E-41)
            if (r4 == r0) goto L2d
            r0 = 2
            if (r4 == r0) goto L2d
            r0 = 9437184(0x900000, float:1.3224311E-38)
            r1 = 2097152(0x200000, float:2.938736E-39)
            r2 = 414720(0x65400, float:5.81146E-40)
            r3 = 101376(0x18c00, float:1.42058E-40)
            switch(r4) {
                case 8: goto L2c;
                case 16: goto L2c;
                case 32: goto L2c;
                case 64: goto L28;
                case 128: goto L27;
                case 256: goto L27;
                case 512: goto L23;
                case 1024: goto L20;
                case 2048: goto L1f;
                case 4096: goto L1f;
                case 8192: goto L1c;
                case 16384: goto L18;
                case 32768: goto L17;
                case 65536: goto L17;
                default: goto L15;
            }
        L15:
            r4 = -1
            return r4
        L17:
            return r0
        L18:
            r4 = 5652480(0x564000, float:7.920812E-39)
            return r4
        L1c:
            r4 = 2228224(0x220000, float:3.122407E-39)
            return r4
        L1f:
            return r1
        L20:
            r4 = 1310720(0x140000, float:1.83671E-39)
            return r4
        L23:
            r4 = 921600(0xe1000, float:1.291437E-39)
            return r4
        L27:
            return r2
        L28:
            r4 = 202752(0x31800, float:2.84116E-40)
            return r4
        L2c:
            return r3
        L2d:
            return r1
    }

    private static boolean codecNeedsDisableAdaptationWorkaround(java.lang.String r2) {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 22
            if (r0 > r1) goto L2c
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "ODROID-XU3"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L1a
            java.lang.String r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MODEL
            java.lang.String r1 = "Nexus 10"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L2c
        L1a:
            java.lang.String r0 = "OMX.Exynos.AVC.Decoder"
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L2a
            java.lang.String r0 = "OMX.Exynos.AVC.Decoder.secure"
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L2c
        L2a:
            r2 = 1
            goto L2d
        L2c:
            r2 = 0
        L2d:
            return r2
    }

    private static android.util.Pair<java.lang.Integer, java.lang.Integer> getAvcProfileAndLevel(java.lang.String r7, java.lang.String[] r8) {
            int r0 = r8.length
            java.lang.String r1 = "Ignoring malformed AVC codec string: "
            r2 = 2
            r3 = 0
            java.lang.String r4 = "MediaCodecUtil"
            if (r0 >= r2) goto L1c
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r1)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.w(r4, r7)
            return r3
        L1c:
            r0 = 1
            r5 = r8[r0]     // Catch: java.lang.NumberFormatException -> Lc4
            int r5 = r5.length()     // Catch: java.lang.NumberFormatException -> Lc4
            r6 = 6
            if (r5 != r6) goto L47
            r5 = r8[r0]     // Catch: java.lang.NumberFormatException -> Lc4
            r6 = 0
            java.lang.String r2 = r5.substring(r6, r2)     // Catch: java.lang.NumberFormatException -> Lc4
            r5 = 16
            int r2 = java.lang.Integer.parseInt(r2, r5)     // Catch: java.lang.NumberFormatException -> Lc4
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.NumberFormatException -> Lc4
            r8 = r8[r0]     // Catch: java.lang.NumberFormatException -> Lc4
            r0 = 4
            java.lang.String r8 = r8.substring(r0)     // Catch: java.lang.NumberFormatException -> Lc4
            int r8 = java.lang.Integer.parseInt(r8, r5)     // Catch: java.lang.NumberFormatException -> Lc4
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.NumberFormatException -> Lc4
            goto L60
        L47:
            int r5 = r8.length     // Catch: java.lang.NumberFormatException -> Lc4
            r6 = 3
            if (r5 < r6) goto Lb1
            r0 = r8[r0]     // Catch: java.lang.NumberFormatException -> Lc4
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.NumberFormatException -> Lc4
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)     // Catch: java.lang.NumberFormatException -> Lc4
            r8 = r8[r2]     // Catch: java.lang.NumberFormatException -> Lc4
            int r8 = java.lang.Integer.parseInt(r8)     // Catch: java.lang.NumberFormatException -> Lc4
            java.lang.Integer r7 = java.lang.Integer.valueOf(r8)     // Catch: java.lang.NumberFormatException -> Lc4
            r2 = r0
        L60:
            android.util.SparseIntArray r8 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_PROFILE_NUMBER_TO_CONST
            int r0 = r2.intValue()
            r1 = -1
            int r8 = r8.get(r0, r1)
            if (r8 != r1) goto L82
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r8 = "Unknown AVC profile: "
            r7.append(r8)
            r7.append(r2)
            java.lang.String r7 = r7.toString()
            android.util.Log.w(r4, r7)
            return r3
        L82:
            android.util.SparseIntArray r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.AVC_LEVEL_NUMBER_TO_CONST
            int r2 = r7.intValue()
            int r0 = r0.get(r2, r1)
            if (r0 != r1) goto La3
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            java.lang.String r0 = "Unknown AVC level: "
            r8.append(r0)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.w(r4, r7)
            return r3
        La3:
            android.util.Pair r7 = new android.util.Pair
            java.lang.Integer r8 = java.lang.Integer.valueOf(r8)
            java.lang.Integer r0 = java.lang.Integer.valueOf(r0)
            r7.<init>(r8, r0)
            return r7
        Lb1:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder     // Catch: java.lang.NumberFormatException -> Lc4
            r8.<init>()     // Catch: java.lang.NumberFormatException -> Lc4
            r8.append(r1)     // Catch: java.lang.NumberFormatException -> Lc4
            r8.append(r7)     // Catch: java.lang.NumberFormatException -> Lc4
            java.lang.String r8 = r8.toString()     // Catch: java.lang.NumberFormatException -> Lc4
            android.util.Log.w(r4, r8)     // Catch: java.lang.NumberFormatException -> Lc4
            return r3
        Lc4:
            java.lang.StringBuilder r8 = new java.lang.StringBuilder
            r8.<init>()
            r8.append(r1)
            r8.append(r7)
            java.lang.String r7 = r8.toString()
            android.util.Log.w(r4, r7)
            return r3
    }

    public static android.util.Pair<java.lang.Integer, java.lang.Integer> getCodecProfileAndLevel(java.lang.String r9) {
            r0 = 0
            if (r9 != 0) goto L4
            return r0
        L4:
            java.lang.String r1 = "\\."
            java.lang.String[] r1 = r9.split(r1)
            r2 = 0
            r3 = r1[r2]
            r4 = -1
            int r5 = r3.hashCode()
            r6 = 3
            r7 = 2
            r8 = 1
            switch(r5) {
                case 3006243: goto L36;
                case 3006244: goto L2c;
                case 3199032: goto L23;
                case 3214780: goto L19;
                default: goto L18;
            }
        L18:
            goto L40
        L19:
            java.lang.String r2 = "hvc1"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r8
            goto L41
        L23:
            java.lang.String r5 = "hev1"
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L40
            goto L41
        L2c:
            java.lang.String r2 = "avc2"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r6
            goto L41
        L36:
            java.lang.String r2 = "avc1"
            boolean r2 = r3.equals(r2)
            if (r2 == 0) goto L40
            r2 = r7
            goto L41
        L40:
            r2 = r4
        L41:
            if (r2 == 0) goto L4f
            if (r2 == r8) goto L4f
            if (r2 == r7) goto L4a
            if (r2 == r6) goto L4a
            return r0
        L4a:
            android.util.Pair r9 = getAvcProfileAndLevel(r9, r1)
            return r9
        L4f:
            android.util.Pair r9 = getHevcProfileAndLevel(r9, r1)
            return r9
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getDecoderInfo(java.lang.String r0, boolean r1) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            java.util.List r0 = getDecoderInfos(r0, r1)
            boolean r1 = r0.isEmpty()
            if (r1 == 0) goto Lc
            r0 = 0
            goto L13
        Lc:
            r1 = 0
            java.lang.Object r0 = r0.get(r1)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo) r0
        L13:
            return r0
    }

    public static synchronized java.util.List<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo> getDecoderInfos(java.lang.String r6, boolean r7) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil> r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.class
            monitor-enter(r0)
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey r1 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey     // Catch: java.lang.Throwable -> L98
            r1.<init>(r6, r7)     // Catch: java.lang.Throwable -> L98
            java.util.HashMap<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo>> r2 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.decoderInfosCache     // Catch: java.lang.Throwable -> L98
            java.lang.Object r2 = r2.get(r1)     // Catch: java.lang.Throwable -> L98
            java.util.List r2 = (java.util.List) r2     // Catch: java.lang.Throwable -> L98
            if (r2 == 0) goto L14
            monitor-exit(r0)
            return r2
        L14:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT     // Catch: java.lang.Throwable -> L98
            r3 = 0
            r4 = 21
            if (r2 < r4) goto L21
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV21 r2 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV21     // Catch: java.lang.Throwable -> L98
            r2.<init>(r7)     // Catch: java.lang.Throwable -> L98
            goto L26
        L21:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV16 r2 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV16     // Catch: java.lang.Throwable -> L98
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L98
        L26:
            java.util.ArrayList r5 = getDecoderInfosInternal(r1, r2, r6)     // Catch: java.lang.Throwable -> L98
            if (r7 == 0) goto L72
            boolean r7 = r5.isEmpty()     // Catch: java.lang.Throwable -> L98
            if (r7 == 0) goto L72
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT     // Catch: java.lang.Throwable -> L98
            if (r4 > r7) goto L72
            int r7 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT     // Catch: java.lang.Throwable -> L98
            r4 = 23
            if (r7 > r4) goto L72
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV16 r2 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$MediaCodecListCompatV16     // Catch: java.lang.Throwable -> L98
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L98
            java.util.ArrayList r5 = getDecoderInfosInternal(r1, r2, r6)     // Catch: java.lang.Throwable -> L98
            boolean r7 = r5.isEmpty()     // Catch: java.lang.Throwable -> L98
            if (r7 != 0) goto L72
            java.lang.String r7 = "MediaCodecUtil"
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L98
            r3.<init>()     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = "MediaCodecList API didn't list secure decoder for: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L98
            r3.append(r6)     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = ". Assuming: "
            r3.append(r4)     // Catch: java.lang.Throwable -> L98
            r4 = 0
            java.lang.Object r4 = r5.get(r4)     // Catch: java.lang.Throwable -> L98
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r4 = (com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo) r4     // Catch: java.lang.Throwable -> L98
            java.lang.String r4 = r4.name     // Catch: java.lang.Throwable -> L98
            r3.append(r4)     // Catch: java.lang.Throwable -> L98
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L98
            android.util.Log.w(r7, r3)     // Catch: java.lang.Throwable -> L98
        L72:
            java.lang.String r7 = "audio/eac3-joc"
            boolean r7 = r7.equals(r6)     // Catch: java.lang.Throwable -> L98
            if (r7 == 0) goto L8a
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey r7 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey     // Catch: java.lang.Throwable -> L98
            java.lang.String r3 = "audio/eac3"
            boolean r4 = r1.secure     // Catch: java.lang.Throwable -> L98
            r7.<init>(r3, r4)     // Catch: java.lang.Throwable -> L98
            java.util.ArrayList r6 = getDecoderInfosInternal(r7, r2, r6)     // Catch: java.lang.Throwable -> L98
            r5.addAll(r6)     // Catch: java.lang.Throwable -> L98
        L8a:
            applyWorkarounds(r5)     // Catch: java.lang.Throwable -> L98
            java.util.List r6 = java.util.Collections.unmodifiableList(r5)     // Catch: java.lang.Throwable -> L98
            java.util.HashMap<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$CodecKey, java.util.List<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo>> r7 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.decoderInfosCache     // Catch: java.lang.Throwable -> L98
            r7.put(r1, r6)     // Catch: java.lang.Throwable -> L98
            monitor-exit(r0)
            return r6
        L98:
            r6 = move-exception
            monitor-exit(r0)
            throw r6
    }

    private static java.util.ArrayList<com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo> getDecoderInfosInternal(com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.CodecKey r17, com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.MediaCodecListCompat r18, java.lang.String r19) throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            r1 = r17
            r2 = r18
            java.util.ArrayList r3 = new java.util.ArrayList     // Catch: java.lang.Exception -> Le1
            r3.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r4 = r1.mimeType     // Catch: java.lang.Exception -> Le1
            int r5 = r18.getCodecCount()     // Catch: java.lang.Exception -> Le1
            boolean r6 = r18.secureDecodersExplicit()     // Catch: java.lang.Exception -> Le1
            r8 = 0
        L14:
            if (r8 >= r5) goto Le0
            android.media.MediaCodecInfo r9 = r2.getCodecInfoAt(r8)     // Catch: java.lang.Exception -> Le1
            java.lang.String r10 = r9.getName()     // Catch: java.lang.Exception -> Le1
            r11 = r19
            boolean r0 = isCodecUsableDecoder(r9, r10, r6, r11)     // Catch: java.lang.Exception -> Le1
            if (r0 == 0) goto Ld6
            java.lang.String[] r12 = r9.getSupportedTypes()     // Catch: java.lang.Exception -> Le1
            int r13 = r12.length     // Catch: java.lang.Exception -> Le1
            r14 = 0
        L2c:
            if (r14 >= r13) goto Ld6
            r15 = r12[r14]     // Catch: java.lang.Exception -> Le1
            boolean r0 = r15.equalsIgnoreCase(r4)     // Catch: java.lang.Exception -> Le1
            if (r0 == 0) goto Lcc
            android.media.MediaCodecInfo$CodecCapabilities r0 = r9.getCapabilitiesForType(r15)     // Catch: java.lang.Exception -> L7f
            boolean r7 = r2.isSecurePlaybackSupported(r4, r0)     // Catch: java.lang.Exception -> L7f
            boolean r2 = codecNeedsDisableAdaptationWorkaround(r10)     // Catch: java.lang.Exception -> L7f
            if (r6 == 0) goto L4f
            r16 = r5
            boolean r5 = r1.secure     // Catch: java.lang.Exception -> L4d
            if (r5 == r7) goto L4b
            goto L51
        L4b:
            r5 = 0
            goto L58
        L4d:
            r0 = move-exception
            goto L82
        L4f:
            r16 = r5
        L51:
            if (r6 != 0) goto L60
            boolean r5 = r1.secure     // Catch: java.lang.Exception -> L4d
            if (r5 != 0) goto L60
            goto L4b
        L58:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo.newInstance(r10, r4, r0, r2, r5)     // Catch: java.lang.Exception -> L4d
            r3.add(r0)     // Catch: java.lang.Exception -> L4d
            goto Lce
        L60:
            r5 = 0
            if (r6 != 0) goto Lce
            if (r7 == 0) goto Lce
            java.lang.StringBuilder r7 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L4d
            r7.<init>()     // Catch: java.lang.Exception -> L4d
            r7.append(r10)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = ".secure"
            r7.append(r5)     // Catch: java.lang.Exception -> L4d
            java.lang.String r5 = r7.toString()     // Catch: java.lang.Exception -> L4d
            r7 = 1
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo.newInstance(r5, r4, r0, r2, r7)     // Catch: java.lang.Exception -> L4d
            r3.add(r0)     // Catch: java.lang.Exception -> L4d
            return r3
        L7f:
            r0 = move-exception
            r16 = r5
        L82:
            int r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT     // Catch: java.lang.Exception -> Le1
            r5 = 23
            java.lang.String r7 = "MediaCodecUtil"
            if (r2 > r5) goto Laa
            boolean r2 = r3.isEmpty()     // Catch: java.lang.Exception -> Le1
            if (r2 != 0) goto Laa
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r0.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r2 = "Skipping codec "
            r0.append(r2)     // Catch: java.lang.Exception -> Le1
            r0.append(r10)     // Catch: java.lang.Exception -> Le1
            java.lang.String r2 = " (failed to query capabilities)"
            r0.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> Le1
            android.util.Log.e(r7, r0)     // Catch: java.lang.Exception -> Le1
            goto Lce
        Laa:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> Le1
            r1.<init>()     // Catch: java.lang.Exception -> Le1
            java.lang.String r2 = "Failed to query codec "
            r1.append(r2)     // Catch: java.lang.Exception -> Le1
            r1.append(r10)     // Catch: java.lang.Exception -> Le1
            java.lang.String r2 = " ("
            r1.append(r2)     // Catch: java.lang.Exception -> Le1
            r1.append(r15)     // Catch: java.lang.Exception -> Le1
            java.lang.String r2 = ")"
            r1.append(r2)     // Catch: java.lang.Exception -> Le1
            java.lang.String r1 = r1.toString()     // Catch: java.lang.Exception -> Le1
            android.util.Log.e(r7, r1)     // Catch: java.lang.Exception -> Le1
            throw r0     // Catch: java.lang.Exception -> Le1
        Lcc:
            r16 = r5
        Lce:
            int r14 = r14 + 1
            r2 = r18
            r5 = r16
            goto L2c
        Ld6:
            r16 = r5
            int r8 = r8 + 1
            r2 = r18
            r5 = r16
            goto L14
        Le0:
            return r3
        Le1:
            r0 = move-exception
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$DecoderQueryException r1 = new com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil$DecoderQueryException
            r2 = 0
            r1.<init>(r0, r2)
            throw r1
    }

    private static android.util.Pair<java.lang.Integer, java.lang.Integer> getHevcProfileAndLevel(java.lang.String r6, java.lang.String[] r7) {
            int r0 = r7.length
            java.lang.String r1 = "Ignoring malformed HEVC codec string: "
            r2 = 0
            java.lang.String r3 = "MediaCodecUtil"
            r4 = 4
            if (r0 >= r4) goto L1c
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            android.util.Log.w(r3, r6)
            return r2
        L1c:
            java.util.regex.Pattern r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.PROFILE_PATTERN
            r4 = 1
            r5 = r7[r4]
            java.util.regex.Matcher r0 = r0.matcher(r5)
            boolean r5 = r0.matches()
            if (r5 != 0) goto L3e
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            r7.append(r1)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            android.util.Log.w(r3, r6)
            return r2
        L3e:
            java.lang.String r6 = r0.group(r4)
            java.lang.String r1 = "1"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L4c
            r6 = r4
            goto L55
        L4c:
            java.lang.String r1 = "2"
            boolean r1 = r1.equals(r6)
            if (r1 == 0) goto L85
            r6 = 2
        L55:
            java.util.Map<java.lang.String, java.lang.Integer> r1 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.HEVC_CODEC_STRING_TO_PROFILE_LEVEL
            r5 = 3
            r7 = r7[r5]
            java.lang.Object r7 = r1.get(r7)
            java.lang.Integer r7 = (java.lang.Integer) r7
            if (r7 != 0) goto L7b
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r7 = "Unknown HEVC level string: "
            r6.append(r7)
            java.lang.String r7 = r0.group(r4)
            r6.append(r7)
            java.lang.String r6 = r6.toString()
            android.util.Log.w(r3, r6)
            return r2
        L7b:
            android.util.Pair r0 = new android.util.Pair
            java.lang.Integer r6 = java.lang.Integer.valueOf(r6)
            r0.<init>(r6, r7)
            return r0
        L85:
            java.lang.StringBuilder r7 = new java.lang.StringBuilder
            r7.<init>()
            java.lang.String r0 = "Unknown HEVC profile string: "
            r7.append(r0)
            r7.append(r6)
            java.lang.String r6 = r7.toString()
            android.util.Log.w(r3, r6)
            return r2
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo getPassthroughDecoderInfo() {
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.PASSTHROUGH_DECODER_INFO
            return r0
    }

    private static boolean isCodecUsableDecoder(android.media.MediaCodecInfo r3, java.lang.String r4, boolean r5, java.lang.String r6) {
            boolean r3 = r3.isEncoder()
            r0 = 0
            if (r3 != 0) goto L222
            if (r5 != 0) goto L13
            java.lang.String r3 = ".secure"
            boolean r3 = r4.endsWith(r3)
            if (r3 == 0) goto L13
            goto L222
        L13:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r5 = 21
            if (r3 >= r5) goto L4a
            java.lang.String r3 = "CIPAACDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPMP3Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPVorbisDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "CIPAMRNBDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "AACDecoder"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L49
            java.lang.String r3 = "MP3Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L4a
        L49:
            return r0
        L4a:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r5 = 18
            if (r3 >= r5) goto L59
            java.lang.String r3 = "OMX.SEC.MP3.Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L59
            return r0
        L59:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r3 >= r5) goto L84
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.AAC"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L84
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "a70"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L83
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            java.lang.String r5 = "Xiaomi"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L84
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "HM"
            boolean r3 = r3.startsWith(r5)
            if (r3 == 0) goto L84
        L83:
            return r0
        L84:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r5 = 16
            if (r3 != r5) goto L10b
            java.lang.String r3 = "OMX.qcom.audio.decoder.mp3"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L10b
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "dlxu"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "protou"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "ville"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "villeplus"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "villec2"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "gee"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "C6602"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "C6603"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "C6606"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "C6616"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "L36h"
            boolean r3 = r1.equals(r3)
            if (r3 != 0) goto L10a
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "SO-02E"
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L10b
        L10a:
            return r0
        L10b:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r3 != r5) goto L140
            java.lang.String r3 = "OMX.qcom.audio.decoder.aac"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L140
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "C1504"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "C1505"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "C1604"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L13f
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "C1605"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L140
        L13f:
            return r0
        L140:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r5 = 24
            java.lang.String r1 = "samsung"
            if (r3 >= r5) goto L1b1
            java.lang.String r3 = "OMX.SEC.aac.dec"
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L158
            java.lang.String r3 = "OMX.Exynos.AAC.Decoder"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1b1
        L158:
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L1b1
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "zeroflte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "zerolte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "zenlte"
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "SC-05G"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "marinelteatt"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "404SC"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "SC-04G"
            boolean r3 = r5.equals(r3)
            if (r3 != 0) goto L1b0
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r5 = "SCV31"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L1b1
        L1b0:
            return r0
        L1b1:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            java.lang.String r5 = "jflte"
            r2 = 19
            if (r3 > r2) goto L1fa
            java.lang.String r3 = "OMX.SEC.vp8.dec"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L1fa
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.MANUFACTURER
            boolean r3 = r1.equals(r3)
            if (r3 == 0) goto L1fa
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "d2"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "serrano"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            boolean r3 = r3.startsWith(r5)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "santos"
            boolean r3 = r3.startsWith(r1)
            if (r3 != 0) goto L1f9
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            java.lang.String r1 = "t0"
            boolean r3 = r3.startsWith(r1)
            if (r3 == 0) goto L1fa
        L1f9:
            return r0
        L1fa:
            int r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            if (r3 > r2) goto L20f
            java.lang.String r3 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.DEVICE
            boolean r3 = r3.startsWith(r5)
            if (r3 == 0) goto L20f
            java.lang.String r3 = "OMX.qcom.video.decoder.vp8"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L20f
            return r0
        L20f:
            java.lang.String r3 = "audio/eac3-joc"
            boolean r3 = r3.equals(r6)
            if (r3 == 0) goto L220
            java.lang.String r3 = "OMX.MTK.AUDIO.DECODER.DSPAC3"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L220
            return r0
        L220:
            r3 = 1
            return r3
        L222:
            return r0
    }

    public static int maxH264DecodableFrameSize() throws com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException {
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize
            r1 = -1
            if (r0 != r1) goto L38
            r0 = 0
            java.lang.String r1 = "video/avc"
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecInfo r1 = getDecoderInfo(r1, r0)
            if (r1 == 0) goto L36
            android.media.MediaCodecInfo$CodecProfileLevel[] r1 = r1.getProfileLevels()
            int r2 = r1.length
            r3 = r0
        L14:
            if (r0 >= r2) goto L25
            r4 = r1[r0]
            int r4 = r4.level
            int r4 = avcLevelToMaxFrameSize(r4)
            int r3 = java.lang.Math.max(r4, r3)
            int r0 = r0 + 1
            goto L14
        L25:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.SDK_INT
            r1 = 21
            if (r0 < r1) goto L2f
            r0 = 345600(0x54600, float:4.84289E-40)
            goto L32
        L2f:
            r0 = 172800(0x2a300, float:2.42144E-40)
        L32:
            int r0 = java.lang.Math.max(r3, r0)
        L36:
            com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize = r0
        L38:
            int r0 = com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.maxH264DecodableFrameSize
            return r0
    }

    public static void warmDecoderInfoCache(java.lang.String r1, boolean r2) {
            getDecoderInfos(r1, r2)     // Catch: com.mbridge.msdk.playercommon.exoplayer2.mediacodec.MediaCodecUtil.DecoderQueryException -> L4
            goto Lc
        L4:
            r1 = move-exception
            java.lang.String r2 = "MediaCodecUtil"
            java.lang.String r0 = "Codec warming failed"
            android.util.Log.e(r2, r0, r1)
        Lc:
            return
    }
}
