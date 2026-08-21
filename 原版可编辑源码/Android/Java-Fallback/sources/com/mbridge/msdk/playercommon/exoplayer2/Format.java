package com.mbridge.msdk.playercommon.exoplayer2;

public final class Format implements android.os.Parcelable {
    public static final android.os.Parcelable.Creator<com.mbridge.msdk.playercommon.exoplayer2.Format> CREATOR = null;
    public static final int NO_VALUE = -1;
    public static final long OFFSET_SAMPLE_RELATIVE = Long.MAX_VALUE;
    public final int accessibilityChannel;
    public final int bitrate;
    public final int channelCount;
    public final java.lang.String codecs;
    public final com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo colorInfo;
    public final java.lang.String containerMimeType;
    public final com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData drmInitData;
    public final int encoderDelay;
    public final int encoderPadding;
    public final float frameRate;
    private int hashCode;
    public final int height;
    public final java.lang.String id;
    public final java.util.List<byte[]> initializationData;
    public final java.lang.String language;
    public final int maxInputSize;
    public final com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata metadata;
    public final int pcmEncoding;
    public final float pixelWidthHeightRatio;
    public final byte[] projectionData;
    public final int rotationDegrees;
    public final java.lang.String sampleMimeType;
    public final int sampleRate;
    public final int selectionFlags;
    public final int stereoMode;
    public final long subsampleOffsetUs;
    public final int width;


    static {
            com.mbridge.msdk.playercommon.exoplayer2.Format$1 r0 = new com.mbridge.msdk.playercommon.exoplayer2.Format$1
            r0.<init>()
            com.mbridge.msdk.playercommon.exoplayer2.Format.CREATOR = r0
            return
    }

    Format(android.os.Parcel r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = r5.readString()
            r4.id = r0
            java.lang.String r0 = r5.readString()
            r4.containerMimeType = r0
            java.lang.String r0 = r5.readString()
            r4.sampleMimeType = r0
            java.lang.String r0 = r5.readString()
            r4.codecs = r0
            int r0 = r5.readInt()
            r4.bitrate = r0
            int r0 = r5.readInt()
            r4.maxInputSize = r0
            int r0 = r5.readInt()
            r4.width = r0
            int r0 = r5.readInt()
            r4.height = r0
            float r0 = r5.readFloat()
            r4.frameRate = r0
            int r0 = r5.readInt()
            r4.rotationDegrees = r0
            float r0 = r5.readFloat()
            r4.pixelWidthHeightRatio = r0
            boolean r0 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.readBoolean(r5)
            if (r0 == 0) goto L50
            byte[] r0 = r5.createByteArray()
            goto L51
        L50:
            r0 = 0
        L51:
            r4.projectionData = r0
            int r0 = r5.readInt()
            r4.stereoMode = r0
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo> r0 = com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r5.readParcelable(r0)
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r0 = (com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo) r0
            r4.colorInfo = r0
            int r0 = r5.readInt()
            r4.channelCount = r0
            int r0 = r5.readInt()
            r4.sampleRate = r0
            int r0 = r5.readInt()
            r4.pcmEncoding = r0
            int r0 = r5.readInt()
            r4.encoderDelay = r0
            int r0 = r5.readInt()
            r4.encoderPadding = r0
            int r0 = r5.readInt()
            r4.selectionFlags = r0
            java.lang.String r0 = r5.readString()
            r4.language = r0
            int r0 = r5.readInt()
            r4.accessibilityChannel = r0
            long r0 = r5.readLong()
            r4.subsampleOffsetUs = r0
            int r0 = r5.readInt()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>(r0)
            r4.initializationData = r1
            r1 = 0
        La9:
            if (r1 >= r0) goto Lb7
            java.util.List<byte[]> r2 = r4.initializationData
            byte[] r3 = r5.createByteArray()
            r2.add(r3)
            int r1 = r1 + 1
            goto La9
        Lb7:
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData> r0 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r0 = r5.readParcelable(r0)
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r0 = (com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData) r0
            r4.drmInitData = r0
            java.lang.Class<com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata> r0 = com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            android.os.Parcelable r5 = r5.readParcelable(r0)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r5 = (com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata) r5
            r4.metadata = r5
            return
    }

    Format(java.lang.String r5, java.lang.String r6, java.lang.String r7, java.lang.String r8, int r9, int r10, int r11, int r12, float r13, int r14, float r15, byte[] r16, int r17, com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r18, int r19, int r20, int r21, int r22, int r23, int r24, java.lang.String r25, int r26, long r27, java.util.List<byte[]> r29, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r30, com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r31) {
            r4 = this;
            r0 = r4
            r4.<init>()
            r1 = r5
            r0.id = r1
            r1 = r6
            r0.containerMimeType = r1
            r1 = r7
            r0.sampleMimeType = r1
            r1 = r8
            r0.codecs = r1
            r1 = r9
            r0.bitrate = r1
            r1 = r10
            r0.maxInputSize = r1
            r1 = r11
            r0.width = r1
            r1 = r12
            r0.height = r1
            r1 = r13
            r0.frameRate = r1
            r1 = 0
            r2 = -1
            r3 = r14
            if (r3 != r2) goto L25
            r3 = r1
        L25:
            r0.rotationDegrees = r3
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r3 = (r15 > r3 ? 1 : (r15 == r3 ? 0 : -1))
            if (r3 != 0) goto L30
            r3 = 1065353216(0x3f800000, float:1.0)
            goto L31
        L30:
            r3 = r15
        L31:
            r0.pixelWidthHeightRatio = r3
            r3 = r16
            r0.projectionData = r3
            r3 = r17
            r0.stereoMode = r3
            r3 = r18
            r0.colorInfo = r3
            r3 = r19
            r0.channelCount = r3
            r3 = r20
            r0.sampleRate = r3
            r3 = r21
            r0.pcmEncoding = r3
            r3 = r22
            if (r3 != r2) goto L50
            r3 = r1
        L50:
            r0.encoderDelay = r3
            r3 = r23
            if (r3 != r2) goto L57
            goto L58
        L57:
            r1 = r3
        L58:
            r0.encoderPadding = r1
            r1 = r24
            r0.selectionFlags = r1
            r1 = r25
            r0.language = r1
            r1 = r26
            r0.accessibilityChannel = r1
            r1 = r27
            r0.subsampleOffsetUs = r1
            if (r29 != 0) goto L71
            java.util.List r1 = java.util.Collections.emptyList()
            goto L73
        L71:
            r1 = r29
        L73:
            r0.initializationData = r1
            r1 = r30
            r0.drmInitData = r1
            r1 = r31
            r0.metadata = r1
            return
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createAudioContainerFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, int r35, java.util.List<byte[]> r36, int r37, java.lang.String r38) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r15 = r34
            r16 = r35
            r25 = r36
            r20 = r37
            r21 = r38
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createAudioSampleFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, int r34, int r35, int r36, int r37, int r38, java.util.List<byte[]> r39, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r40, int r41, java.lang.String r42, com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r43) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r6 = r33
            r15 = r34
            r16 = r35
            r17 = r36
            r18 = r37
            r19 = r38
            r25 = r39
            r26 = r40
            r20 = r41
            r21 = r42
            r27 = r43
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createAudioSampleFormat(java.lang.String r15, java.lang.String r16, java.lang.String r17, int r18, int r19, int r20, int r21, int r22, java.util.List<byte[]> r23, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r24, int r25, java.lang.String r26) {
            r8 = -1
            r9 = -1
            r14 = 0
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r10 = r23
            r11 = r24
            r12 = r25
            r13 = r26
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createAudioSampleFormat(java.lang.String r12, java.lang.String r13, java.lang.String r14, int r15, int r16, int r17, int r18, java.util.List<byte[]> r19, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r20, int r21, java.lang.String r22) {
            r7 = -1
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r8 = r19
            r9 = r20
            r10 = r21
            r11 = r22
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createAudioSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createContainerFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, java.lang.String r35) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r20 = r34
            r21 = r35
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createImageSampleFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, java.util.List<byte[]> r34, java.lang.String r35, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r36) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r20 = r33
            r25 = r34
            r21 = r35
            r26 = r36
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createSampleFormat(java.lang.String r29, java.lang.String r30, long r31) {
            r1 = r29
            r3 = r30
            r23 = r31
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r4 = 0
            r5 = -1
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createSampleFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r33) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r26 = r33
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextContainerFormat(java.lang.String r8, java.lang.String r9, java.lang.String r10, java.lang.String r11, int r12, int r13, java.lang.String r14) {
            r7 = -1
            r0 = r8
            r1 = r9
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            com.mbridge.msdk.playercommon.exoplayer2.Format r8 = createTextContainerFormat(r0, r1, r2, r3, r4, r5, r6, r7)
            return r8
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextContainerFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, java.lang.String r35, int r36) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r20 = r34
            r21 = r35
            r22 = r36
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r25 = 0
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextSampleFormat(java.lang.String r1, java.lang.String r2, int r3, java.lang.String r4) {
            r0 = 0
            com.mbridge.msdk.playercommon.exoplayer2.Format r1 = createTextSampleFormat(r1, r2, r3, r4, r0)
            return r1
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextSampleFormat(java.lang.String r11, java.lang.String r12, int r13, java.lang.String r14, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r15) {
            java.util.List r10 = java.util.Collections.emptyList()
            r2 = 0
            r3 = -1
            r6 = -1
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r11
            r1 = r12
            r4 = r13
            r5 = r14
            r7 = r15
            com.mbridge.msdk.playercommon.exoplayer2.Format r11 = createTextSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r11
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextSampleFormat(java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, int r15, java.lang.String r16, int r17, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r18) {
            java.util.List r10 = java.util.Collections.emptyList()
            r8 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r6 = r17
            r7 = r18
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createTextSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextSampleFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, java.lang.String r34, int r35, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r36, long r37, java.util.List<byte[]> r39) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r20 = r33
            r21 = r34
            r22 = r35
            r26 = r36
            r23 = r37
            r25 = r39
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r6 = -1
            r7 = -1
            r8 = -1
            r9 = -1082130432(0xffffffffbf800000, float:-1.0)
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createTextSampleFormat(java.lang.String r11, java.lang.String r12, java.lang.String r13, int r14, int r15, java.lang.String r16, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r17, long r18) {
            java.util.List r10 = java.util.Collections.emptyList()
            r6 = -1
            r0 = r11
            r1 = r12
            r2 = r13
            r3 = r14
            r4 = r15
            r5 = r16
            r7 = r17
            r8 = r18
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createTextSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r10)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createVideoContainerFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, java.lang.String r32, int r33, int r34, int r35, float r36, java.util.List<byte[]> r37, int r38) {
            r1 = r29
            r2 = r30
            r3 = r31
            r4 = r32
            r5 = r33
            r7 = r34
            r8 = r35
            r9 = r36
            r25 = r37
            r20 = r38
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r6 = -1
            r10 = -1
            r11 = -1082130432(0xffffffffbf800000, float:-1.0)
            r12 = 0
            r13 = -1
            r14 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r26 = 0
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createVideoSampleFormat(java.lang.String r15, java.lang.String r16, java.lang.String r17, int r18, int r19, int r20, int r21, float r22, java.util.List<byte[]> r23, int r24, float r25, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r26) {
            r11 = 0
            r12 = -1
            r13 = 0
            r0 = r15
            r1 = r16
            r2 = r17
            r3 = r18
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r14 = r26
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createVideoSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14)
            return r0
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createVideoSampleFormat(java.lang.String r29, java.lang.String r30, java.lang.String r31, int r32, int r33, int r34, int r35, float r36, java.util.List<byte[]> r37, int r38, float r39, byte[] r40, int r41, com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r42, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r43) {
            r1 = r29
            r3 = r30
            r4 = r31
            r5 = r32
            r6 = r33
            r7 = r34
            r8 = r35
            r9 = r36
            r25 = r37
            r10 = r38
            r11 = r39
            r12 = r40
            r13 = r41
            r14 = r42
            r26 = r43
            com.mbridge.msdk.playercommon.exoplayer2.Format r28 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r0 = r28
            r2 = 0
            r15 = -1
            r16 = -1
            r17 = -1
            r18 = -1
            r19 = -1
            r20 = 0
            r21 = 0
            r22 = -1
            r23 = 9223372036854775807(0x7fffffffffffffff, double:NaN)
            r27 = 0
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r25, r26, r27)
            return r28
    }

    public static com.mbridge.msdk.playercommon.exoplayer2.Format createVideoSampleFormat(java.lang.String r12, java.lang.String r13, java.lang.String r14, int r15, int r16, int r17, int r18, float r19, java.util.List<byte[]> r20, com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r21) {
            r9 = -1
            r10 = -1082130432(0xffffffffbf800000, float:-1.0)
            r0 = r12
            r1 = r13
            r2 = r14
            r3 = r15
            r4 = r16
            r5 = r17
            r6 = r18
            r7 = r19
            r8 = r20
            r11 = r21
            com.mbridge.msdk.playercommon.exoplayer2.Format r0 = createVideoSampleFormat(r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            return r0
    }

    public static java.lang.String toLogString(com.mbridge.msdk.playercommon.exoplayer2.Format r4) {
            if (r4 != 0) goto L5
            java.lang.String r4 = "null"
            return r4
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "id="
            r0.append(r1)
            java.lang.String r1 = r4.id
            r0.append(r1)
            java.lang.String r1 = ", mimeType="
            r0.append(r1)
            java.lang.String r1 = r4.sampleMimeType
            r0.append(r1)
            int r1 = r4.bitrate
            r2 = -1
            if (r1 == r2) goto L2d
            java.lang.String r1 = ", bitrate="
            r0.append(r1)
            int r1 = r4.bitrate
            r0.append(r1)
        L2d:
            int r1 = r4.width
            if (r1 == r2) goto L49
            int r1 = r4.height
            if (r1 == r2) goto L49
            java.lang.String r1 = ", res="
            r0.append(r1)
            int r1 = r4.width
            r0.append(r1)
            java.lang.String r1 = "x"
            r0.append(r1)
            int r1 = r4.height
            r0.append(r1)
        L49:
            float r1 = r4.frameRate
            r3 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 == 0) goto L5b
            java.lang.String r1 = ", fps="
            r0.append(r1)
            float r1 = r4.frameRate
            r0.append(r1)
        L5b:
            int r1 = r4.channelCount
            if (r1 == r2) goto L69
            java.lang.String r1 = ", channels="
            r0.append(r1)
            int r1 = r4.channelCount
            r0.append(r1)
        L69:
            int r1 = r4.sampleRate
            if (r1 == r2) goto L77
            java.lang.String r1 = ", sample_rate="
            r0.append(r1)
            int r1 = r4.sampleRate
            r0.append(r1)
        L77:
            java.lang.String r1 = r4.language
            if (r1 == 0) goto L85
            java.lang.String r1 = ", language="
            r0.append(r1)
            java.lang.String r4 = r4.language
            r0.append(r4)
        L85:
            java.lang.String r4 = r0.toString()
            return r4
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithContainerInfo(java.lang.String r32, java.lang.String r33, java.lang.String r34, int r35, int r36, int r37, int r38, java.lang.String r39) {
            r31 = this;
            r0 = r31
            r2 = r32
            r4 = r33
            r5 = r34
            r6 = r35
            r8 = r36
            r9 = r37
            r21 = r38
            r22 = r39
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r3 = r0.containerMimeType
            int r7 = r0.maxInputSize
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r32 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithDrmInitData(com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r32) {
            r31 = this;
            r0 = r31
            r27 = r32
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r32 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithGaplessInfo(int r31, int r32) {
            r30 = this;
            r0 = r30
            r19 = r31
            r20 = r32
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r31 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r32 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r31
            r2 = r32
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithManifestFormatInfo(com.mbridge.msdk.playercommon.exoplayer2.Format r33) {
            r32 = this;
            r0 = r32
            r1 = r33
            if (r0 != r1) goto L7
            return r0
        L7:
            java.lang.String r2 = r1.id
            java.lang.String r3 = r0.codecs
            if (r3 != 0) goto Lf
            java.lang.String r3 = r1.codecs
        Lf:
            r5 = r3
            int r3 = r0.bitrate
            r4 = -1
            if (r3 != r4) goto L17
            int r3 = r1.bitrate
        L17:
            r6 = r3
            float r3 = r0.frameRate
            r4 = -1082130432(0xffffffffbf800000, float:-1.0)
            int r4 = (r3 > r4 ? 1 : (r3 == r4 ? 0 : -1))
            if (r4 != 0) goto L22
            float r3 = r1.frameRate
        L22:
            r10 = r3
            int r3 = r0.selectionFlags
            int r4 = r1.selectionFlags
            r21 = r3 | r4
            java.lang.String r3 = r0.language
            if (r3 != 0) goto L2f
            java.lang.String r3 = r1.language
        L2f:
            r22 = r3
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r1.drmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r0.drmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r27 = com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData.createSessionCreationData(r1, r3)
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r33 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r3
            r31 = r4
            long r3 = r0.subsampleOffsetUs
            r24 = r3
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r33
            r3 = r30
            r4 = r31
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithMaxInputSize(int r32) {
            r31 = this;
            r0 = r31
            r7 = r32
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r32 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithMetadata(com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r32) {
            r31 = this;
            r0 = r31
            r28 = r32
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r32 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithRotationDegrees(int r32) {
            r31 = this;
            r0 = r31
            r11 = r32
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r32 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            r30 = r2
            long r1 = r0.subsampleOffsetUs
            r24 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r32
            r2 = r30
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    public final com.mbridge.msdk.playercommon.exoplayer2.Format copyWithSubsampleOffsetUs(long r31) {
            r30 = this;
            r0 = r30
            r24 = r31
            com.mbridge.msdk.playercommon.exoplayer2.Format r29 = new com.mbridge.msdk.playercommon.exoplayer2.Format
            r1 = r29
            java.lang.String r2 = r0.id
            java.lang.String r3 = r0.containerMimeType
            java.lang.String r4 = r0.sampleMimeType
            java.lang.String r5 = r0.codecs
            int r6 = r0.bitrate
            int r7 = r0.maxInputSize
            int r8 = r0.width
            int r9 = r0.height
            float r10 = r0.frameRate
            int r11 = r0.rotationDegrees
            float r12 = r0.pixelWidthHeightRatio
            byte[] r13 = r0.projectionData
            int r14 = r0.stereoMode
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r15 = r0.colorInfo
            r31 = r1
            int r1 = r0.channelCount
            r16 = r1
            int r1 = r0.sampleRate
            r17 = r1
            int r1 = r0.pcmEncoding
            r18 = r1
            int r1 = r0.encoderDelay
            r19 = r1
            int r1 = r0.encoderPadding
            r20 = r1
            int r1 = r0.selectionFlags
            r21 = r1
            java.lang.String r1 = r0.language
            r22 = r1
            int r1 = r0.accessibilityChannel
            r23 = r1
            java.util.List<byte[]> r1 = r0.initializationData
            r26 = r1
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r0.drmInitData
            r27 = r1
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r0.metadata
            r28 = r1
            r1 = r31
            r1.<init>(r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13, r14, r15, r16, r17, r18, r19, r20, r21, r22, r23, r24, r26, r27, r28)
            return r29
    }

    @Override
    public final int describeContents() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final boolean equals(java.lang.Object r7) {
            r6 = this;
            r0 = 1
            if (r6 != r7) goto L4
            return r0
        L4:
            r1 = 0
            if (r7 == 0) goto Lde
            java.lang.Class r2 = r6.getClass()
            java.lang.Class r3 = r7.getClass()
            if (r2 == r3) goto L13
            goto Lde
        L13:
            com.mbridge.msdk.playercommon.exoplayer2.Format r7 = (com.mbridge.msdk.playercommon.exoplayer2.Format) r7
            int r2 = r6.bitrate
            int r3 = r7.bitrate
            if (r2 != r3) goto Ldc
            int r2 = r6.maxInputSize
            int r3 = r7.maxInputSize
            if (r2 != r3) goto Ldc
            int r2 = r6.width
            int r3 = r7.width
            if (r2 != r3) goto Ldc
            int r2 = r6.height
            int r3 = r7.height
            if (r2 != r3) goto Ldc
            float r2 = r6.frameRate
            float r3 = r7.frameRate
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.rotationDegrees
            int r3 = r7.rotationDegrees
            if (r2 != r3) goto Ldc
            float r2 = r6.pixelWidthHeightRatio
            float r3 = r7.pixelWidthHeightRatio
            int r2 = (r2 > r3 ? 1 : (r2 == r3 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.stereoMode
            int r3 = r7.stereoMode
            if (r2 != r3) goto Ldc
            int r2 = r6.channelCount
            int r3 = r7.channelCount
            if (r2 != r3) goto Ldc
            int r2 = r6.sampleRate
            int r3 = r7.sampleRate
            if (r2 != r3) goto Ldc
            int r2 = r6.pcmEncoding
            int r3 = r7.pcmEncoding
            if (r2 != r3) goto Ldc
            int r2 = r6.encoderDelay
            int r3 = r7.encoderDelay
            if (r2 != r3) goto Ldc
            int r2 = r6.encoderPadding
            int r3 = r7.encoderPadding
            if (r2 != r3) goto Ldc
            long r2 = r6.subsampleOffsetUs
            long r4 = r7.subsampleOffsetUs
            int r2 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r2 != 0) goto Ldc
            int r2 = r6.selectionFlags
            int r3 = r7.selectionFlags
            if (r2 != r3) goto Ldc
            java.lang.String r2 = r6.id
            java.lang.String r3 = r7.id
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.language
            java.lang.String r3 = r7.language
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            int r2 = r6.accessibilityChannel
            int r3 = r7.accessibilityChannel
            if (r2 != r3) goto Ldc
            java.lang.String r2 = r6.containerMimeType
            java.lang.String r3 = r7.containerMimeType
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.sampleMimeType
            java.lang.String r3 = r7.sampleMimeType
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            java.lang.String r2 = r6.codecs
            java.lang.String r3 = r7.codecs
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r2 = r6.drmInitData
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r3 = r7.drmInitData
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r2 = r6.metadata
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r3 = r7.metadata
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r2 = r6.colorInfo
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r3 = r7.colorInfo
            boolean r2 = com.mbridge.msdk.playercommon.exoplayer2.util.Util.areEqual(r2, r3)
            if (r2 == 0) goto Ldc
            byte[] r2 = r6.projectionData
            byte[] r3 = r7.projectionData
            boolean r2 = java.util.Arrays.equals(r2, r3)
            if (r2 == 0) goto Ldc
            boolean r7 = r6.initializationDataEquals(r7)
            if (r7 == 0) goto Ldc
            goto Ldd
        Ldc:
            r0 = r1
        Ldd:
            return r0
        Lde:
            return r1
    }

    public final int getPixelCount() {
            r3 = this;
            int r0 = r3.width
            r1 = -1
            if (r0 == r1) goto Lc
            int r2 = r3.height
            if (r2 != r1) goto La
            goto Lc
        La:
            int r1 = r0 * r2
        Lc:
            return r1
    }

    public final int hashCode() {
            r3 = this;
            int r0 = r3.hashCode
            if (r0 != 0) goto L7f
            r0 = 527(0x20f, float:7.38E-43)
            java.lang.String r1 = r3.id
            r2 = 0
            if (r1 != 0) goto Ld
            r1 = r2
            goto L11
        Ld:
            int r1 = r1.hashCode()
        L11:
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.containerMimeType
            if (r1 != 0) goto L1a
            r1 = r2
            goto L1e
        L1a:
            int r1 = r1.hashCode()
        L1e:
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.sampleMimeType
            if (r1 != 0) goto L27
            r1 = r2
            goto L2b
        L27:
            int r1 = r1.hashCode()
        L2b:
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.codecs
            if (r1 != 0) goto L34
            r1 = r2
            goto L38
        L34:
            int r1 = r1.hashCode()
        L38:
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.bitrate
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.width
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.height
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.channelCount
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.sampleRate
            int r0 = r0 + r1
            int r0 = r0 * 31
            java.lang.String r1 = r3.language
            if (r1 != 0) goto L5a
            r1 = r2
            goto L5e
        L5a:
            int r1 = r1.hashCode()
        L5e:
            int r0 = r0 + r1
            int r0 = r0 * 31
            int r1 = r3.accessibilityChannel
            int r0 = r0 + r1
            int r0 = r0 * 31
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r1 = r3.drmInitData
            if (r1 != 0) goto L6c
            r1 = r2
            goto L70
        L6c:
            int r1 = r1.hashCode()
        L70:
            int r0 = r0 + r1
            int r0 = r0 * 31
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r1 = r3.metadata
            if (r1 != 0) goto L78
            goto L7c
        L78:
            int r2 = r1.hashCode()
        L7c:
            int r0 = r0 + r2
            r3.hashCode = r0
        L7f:
            int r0 = r3.hashCode
            return r0
    }

    public final boolean initializationDataEquals(com.mbridge.msdk.playercommon.exoplayer2.Format r5) {
            r4 = this;
            java.util.List<byte[]> r0 = r4.initializationData
            int r0 = r0.size()
            java.util.List<byte[]> r1 = r5.initializationData
            int r1 = r1.size()
            r2 = 0
            if (r0 == r1) goto L10
            return r2
        L10:
            r0 = r2
        L11:
            java.util.List<byte[]> r1 = r4.initializationData
            int r1 = r1.size()
            if (r0 >= r1) goto L33
            java.util.List<byte[]> r1 = r4.initializationData
            java.lang.Object r1 = r1.get(r0)
            byte[] r1 = (byte[]) r1
            java.util.List<byte[]> r3 = r5.initializationData
            java.lang.Object r3 = r3.get(r0)
            byte[] r3 = (byte[]) r3
            boolean r1 = java.util.Arrays.equals(r1, r3)
            if (r1 != 0) goto L30
            return r2
        L30:
            int r0 = r0 + 1
            goto L11
        L33:
            r5 = 1
            return r5
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Format("
            r0.append(r1)
            java.lang.String r1 = r3.id
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r2 = r3.containerMimeType
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.sampleMimeType
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.bitrate
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = r3.language
            r0.append(r2)
            java.lang.String r2 = ", ["
            r0.append(r2)
            int r2 = r3.width
            r0.append(r2)
            r0.append(r1)
            int r2 = r3.height
            r0.append(r2)
            r0.append(r1)
            float r2 = r3.frameRate
            r0.append(r2)
            java.lang.String r2 = "], ["
            r0.append(r2)
            int r2 = r3.channelCount
            r0.append(r2)
            r0.append(r1)
            int r1 = r3.sampleRate
            r0.append(r1)
            java.lang.String r1 = "])"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    @Override
    public final void writeToParcel(android.os.Parcel r5, int r6) {
            r4 = this;
            java.lang.String r0 = r4.id
            r5.writeString(r0)
            java.lang.String r0 = r4.containerMimeType
            r5.writeString(r0)
            java.lang.String r0 = r4.sampleMimeType
            r5.writeString(r0)
            java.lang.String r0 = r4.codecs
            r5.writeString(r0)
            int r0 = r4.bitrate
            r5.writeInt(r0)
            int r0 = r4.maxInputSize
            r5.writeInt(r0)
            int r0 = r4.width
            r5.writeInt(r0)
            int r0 = r4.height
            r5.writeInt(r0)
            float r0 = r4.frameRate
            r5.writeFloat(r0)
            int r0 = r4.rotationDegrees
            r5.writeInt(r0)
            float r0 = r4.pixelWidthHeightRatio
            r5.writeFloat(r0)
            byte[] r0 = r4.projectionData
            r1 = 0
            if (r0 == 0) goto L3e
            r0 = 1
            goto L3f
        L3e:
            r0 = r1
        L3f:
            com.mbridge.msdk.playercommon.exoplayer2.util.Util.writeBoolean(r5, r0)
            byte[] r0 = r4.projectionData
            if (r0 == 0) goto L49
            r5.writeByteArray(r0)
        L49:
            int r0 = r4.stereoMode
            r5.writeInt(r0)
            com.mbridge.msdk.playercommon.exoplayer2.video.ColorInfo r0 = r4.colorInfo
            r5.writeParcelable(r0, r6)
            int r6 = r4.channelCount
            r5.writeInt(r6)
            int r6 = r4.sampleRate
            r5.writeInt(r6)
            int r6 = r4.pcmEncoding
            r5.writeInt(r6)
            int r6 = r4.encoderDelay
            r5.writeInt(r6)
            int r6 = r4.encoderPadding
            r5.writeInt(r6)
            int r6 = r4.selectionFlags
            r5.writeInt(r6)
            java.lang.String r6 = r4.language
            r5.writeString(r6)
            int r6 = r4.accessibilityChannel
            r5.writeInt(r6)
            long r2 = r4.subsampleOffsetUs
            r5.writeLong(r2)
            java.util.List<byte[]> r6 = r4.initializationData
            int r6 = r6.size()
            r5.writeInt(r6)
            r0 = r1
        L8a:
            if (r0 >= r6) goto L9a
            java.util.List<byte[]> r2 = r4.initializationData
            java.lang.Object r2 = r2.get(r0)
            byte[] r2 = (byte[]) r2
            r5.writeByteArray(r2)
            int r0 = r0 + 1
            goto L8a
        L9a:
            com.mbridge.msdk.playercommon.exoplayer2.drm.DrmInitData r6 = r4.drmInitData
            r5.writeParcelable(r6, r1)
            com.mbridge.msdk.playercommon.exoplayer2.metadata.Metadata r6 = r4.metadata
            r5.writeParcelable(r6, r1)
            return
    }
}
