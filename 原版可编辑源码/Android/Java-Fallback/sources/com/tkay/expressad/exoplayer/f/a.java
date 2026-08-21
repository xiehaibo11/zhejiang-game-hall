package com.tkay.expressad.exoplayer.f;

public final class a {
    public static final java.lang.String a = "MediaCodecInfo";
    public static final int b = -1;
    public final java.lang.String c;
    public final java.lang.String d;
    public final android.media.MediaCodecInfo.CodecCapabilities e;
    public final boolean f;
    public final boolean g;
    public final boolean h;
    public final boolean i;

    private a(java.lang.String r1, java.lang.String r2, android.media.MediaCodecInfo.CodecCapabilities r3, boolean r4, boolean r5, boolean r6) {
            r0 = this;
            r0.<init>()
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r1)
            java.lang.String r1 = (java.lang.String) r1
            r0.c = r1
            r0.d = r2
            r0.e = r3
            r0.i = r4
            r1 = 1
            r2 = 0
            if (r5 != 0) goto L2c
            if (r3 == 0) goto L2c
            int r4 = com.tkay.expressad.exoplayer.k.af.a
            r5 = 19
            if (r4 < r5) goto L27
            java.lang.String r4 = "adaptive-playback"
            boolean r4 = r3.isFeatureSupported(r4)
            if (r4 == 0) goto L27
            r4 = r1
            goto L28
        L27:
            r4 = r2
        L28:
            if (r4 == 0) goto L2c
            r4 = r1
            goto L2d
        L2c:
            r4 = r2
        L2d:
            r0.f = r4
            r4 = 21
            if (r3 == 0) goto L46
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            if (r5 < r4) goto L41
            java.lang.String r5 = "tunneled-playback"
            boolean r5 = r3.isFeatureSupported(r5)
            if (r5 == 0) goto L41
            r5 = r1
            goto L42
        L41:
            r5 = r2
        L42:
            if (r5 == 0) goto L46
            r5 = r1
            goto L47
        L46:
            r5 = r2
        L47:
            r0.g = r5
            if (r6 != 0) goto L60
            if (r3 == 0) goto L5f
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            if (r5 < r4) goto L5b
            java.lang.String r4 = "secure-playback"
            boolean r3 = r3.isFeatureSupported(r4)
            if (r3 == 0) goto L5b
            r3 = r1
            goto L5c
        L5b:
            r3 = r2
        L5c:
            if (r3 == 0) goto L5f
            goto L60
        L5f:
            r1 = r2
        L60:
            r0.h = r1
            return
    }

    private static int a(java.lang.String r2, java.lang.String r3, int r4) {
            r0 = 1
            if (r4 > r0) goto La6
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 26
            if (r0 < r1) goto Ld
            if (r4 <= 0) goto Ld
            goto La6
        Ld:
            java.lang.String r0 = "audio/mpeg"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/3gpp"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/amr-wb"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/mp4a-latm"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/vorbis"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/opus"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/raw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/flac"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/g711-alaw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/g711-mlaw"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto La6
            java.lang.String r0 = "audio/gsm"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L66
            goto La6
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
            java.lang.String r1 = "AssumedMaxChannelAdjustment: "
            r0.<init>(r1)
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
        La6:
            return r4
    }

    public static com.tkay.expressad.exoplayer.f.a a(java.lang.String r8) {
            com.tkay.expressad.exoplayer.f.a r7 = new com.tkay.expressad.exoplayer.f.a
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

    private static com.tkay.expressad.exoplayer.f.a a(java.lang.String r8, java.lang.String r9, android.media.MediaCodecInfo.CodecCapabilities r10) {
            com.tkay.expressad.exoplayer.f.a r7 = new com.tkay.expressad.exoplayer.f.a
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

    public static com.tkay.expressad.exoplayer.f.a a(java.lang.String r8, java.lang.String r9, android.media.MediaCodecInfo.CodecCapabilities r10, boolean r11, boolean r12) {
            com.tkay.expressad.exoplayer.f.a r7 = new com.tkay.expressad.exoplayer.f.a
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

    private static boolean a(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 19
            if (r0 < r1) goto L10
            java.lang.String r0 = "adaptive-playback"
            boolean r2 = r2.isFeatureSupported(r0)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    private static boolean a(android.media.MediaCodecInfo.VideoCapabilities r2, int r3, int r4, double r5) {
            r0 = -4616189618054758400(0xbff0000000000000, double:-1.0)
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 == 0) goto L12
            r0 = 0
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto Ld
            goto L12
        Ld:
            boolean r2 = r2.areSizeAndRateSupported(r3, r4, r5)
            return r2
        L12:
            boolean r2 = r2.isSizeSupported(r3, r4)
            return r2
    }

    private int b() {
            r2 = this;
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 23
            if (r0 < r1) goto L10
            android.media.MediaCodecInfo$CodecCapabilities r0 = r2.e
            if (r0 != 0) goto Lb
            goto L10
        Lb:
            int r0 = r0.getMaxSupportedInstances()
            return r0
        L10:
            r0 = -1
            return r0
    }

    private static boolean b(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "adaptive-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private void c(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "NoSupport ["
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = "] ["
            r0.append(r3)
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r1 = r2.d
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.e
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MediaCodecInfo"
            android.util.Log.d(r0, r3)
            return
    }

    private static boolean c(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto L10
            java.lang.String r0 = "tunneled-playback"
            boolean r2 = r2.isFeatureSupported(r0)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    private void d(java.lang.String r3) {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "AssumedSupport ["
            r0.<init>(r1)
            r0.append(r3)
            java.lang.String r3 = "] ["
            r0.append(r3)
            java.lang.String r1 = r2.c
            r0.append(r1)
            java.lang.String r1 = ", "
            r0.append(r1)
            java.lang.String r1 = r2.d
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = com.tkay.expressad.exoplayer.k.af.e
            r0.append(r3)
            java.lang.String r3 = "]"
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "MediaCodecInfo"
            android.util.Log.d(r0, r3)
            return
    }

    private static boolean d(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "tunneled-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private static boolean e(android.media.MediaCodecInfo.CodecCapabilities r2) {
            int r0 = com.tkay.expressad.exoplayer.k.af.a
            r1 = 21
            if (r0 < r1) goto L10
            java.lang.String r0 = "secure-playback"
            boolean r2 = r2.isFeatureSupported(r0)
            if (r2 == 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    private static boolean f(android.media.MediaCodecInfo.CodecCapabilities r1) {
            java.lang.String r0 = "secure-playback"
            boolean r1 = r1.isFeatureSupported(r0)
            return r1
    }

    private static int g(android.media.MediaCodecInfo.CodecCapabilities r0) {
            int r0 = r0.getMaxSupportedInstances()
            return r0
    }

    public final android.graphics.Point a(int r4, int r5) {
            r3 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r3.e
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r4 = "align.caps"
            r3.c(r4)
            return r1
        Lb:
            android.media.MediaCodecInfo$VideoCapabilities r0 = r0.getVideoCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r4 = "align.vCaps"
            r3.c(r4)
            return r1
        L17:
            int r1 = r0.getWidthAlignment()
            int r0 = r0.getHeightAlignment()
            android.graphics.Point r2 = new android.graphics.Point
            int r4 = com.tkay.expressad.exoplayer.k.af.a(r4, r1)
            int r4 = r4 * r1
            int r5 = com.tkay.expressad.exoplayer.k.af.a(r5, r0)
            int r5 = r5 * r0
            r2.<init>(r4, r5)
            return r2
    }

    public final boolean a(int r3) {
            r2 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r2.e
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r3 = "sampleRate.caps"
            r2.c(r3)
            return r1
        Lb:
            android.media.MediaCodecInfo$AudioCapabilities r0 = r0.getAudioCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r3 = "sampleRate.aCaps"
            r2.c(r3)
            return r1
        L17:
            boolean r0 = r0.isSampleRateSupported(r3)
            if (r0 != 0) goto L2b
            java.lang.String r3 = java.lang.String.valueOf(r3)
            java.lang.String r0 = "sampleRate.support, "
            java.lang.String r3 = r0.concat(r3)
            r2.c(r3)
            return r1
        L2b:
            r3 = 1
            return r3
    }

    public final boolean a(int r5, int r6, double r7) {
            r4 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r4.e
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r5 = "sizeAndRate.caps"
            r4.c(r5)
            return r1
        Lb:
            android.media.MediaCodecInfo$VideoCapabilities r0 = r0.getVideoCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r5 = "sizeAndRate.vCaps"
            r4.c(r5)
            return r1
        L17:
            boolean r2 = a(r0, r5, r6, r7)
            if (r2 != 0) goto L95
            java.lang.String r2 = "x"
            if (r5 >= r6) goto L77
            boolean r0 = a(r0, r6, r5, r7)
            if (r0 != 0) goto L28
            goto L77
        L28:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "sizeAndRate.rotated, "
            r0.<init>(r1)
            r0.append(r5)
            r0.append(r2)
            r0.append(r6)
            r0.append(r2)
            r0.append(r7)
            java.lang.String r5 = r0.toString()
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            java.lang.String r7 = "AssumedSupport ["
            r6.<init>(r7)
            r6.append(r5)
            java.lang.String r5 = "] ["
            r6.append(r5)
            java.lang.String r7 = r4.c
            r6.append(r7)
            java.lang.String r7 = ", "
            r6.append(r7)
            java.lang.String r7 = r4.d
            r6.append(r7)
            r6.append(r5)
            java.lang.String r5 = com.tkay.expressad.exoplayer.k.af.e
            r6.append(r5)
            java.lang.String r5 = "]"
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            java.lang.String r6 = "MediaCodecInfo"
            android.util.Log.d(r6, r5)
            goto L95
        L77:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "sizeAndRate.support, "
            r0.<init>(r3)
            r0.append(r5)
            r0.append(r2)
            r0.append(r6)
            r0.append(r2)
            r0.append(r7)
            java.lang.String r5 = r0.toString()
            r4.c(r5)
            return r1
        L95:
            r5 = 1
            return r5
    }

    public final android.media.MediaCodecInfo.CodecProfileLevel[] a() {
            r1 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r1.e
            if (r0 == 0) goto Le
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = r0.profileLevels
            if (r0 != 0) goto L9
            goto Le
        L9:
            android.media.MediaCodecInfo$CodecCapabilities r0 = r1.e
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = r0.profileLevels
            return r0
        Le:
            r0 = 0
            android.media.MediaCodecInfo$CodecProfileLevel[] r0 = new android.media.MediaCodecInfo.CodecProfileLevel[r0]
            return r0
    }

    public final boolean b(int r8) {
            r7 = this;
            android.media.MediaCodecInfo$CodecCapabilities r0 = r7.e
            r1 = 0
            if (r0 != 0) goto Lb
            java.lang.String r8 = "channelCount.caps"
            r7.c(r8)
            return r1
        Lb:
            android.media.MediaCodecInfo$AudioCapabilities r0 = r0.getAudioCapabilities()
            if (r0 != 0) goto L17
            java.lang.String r8 = "channelCount.aCaps"
            r7.c(r8)
            return r1
        L17:
            java.lang.String r2 = r7.c
            java.lang.String r3 = r7.d
            int r0 = r0.getMaxInputChannelCount()
            r4 = 1
            if (r0 > r4) goto Lc5
            int r5 = com.tkay.expressad.exoplayer.k.af.a
            r6 = 26
            if (r5 < r6) goto L2c
            if (r0 <= 0) goto L2c
            goto Lc5
        L2c:
            java.lang.String r5 = "audio/mpeg"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/3gpp"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/amr-wb"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/mp4a-latm"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/vorbis"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/opus"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/raw"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/flac"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/g711-alaw"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/g711-mlaw"
            boolean r5 = r5.equals(r3)
            if (r5 != 0) goto Lc5
            java.lang.String r5 = "audio/gsm"
            boolean r5 = r5.equals(r3)
            if (r5 == 0) goto L85
            goto Lc5
        L85:
            java.lang.String r5 = "audio/ac3"
            boolean r5 = r5.equals(r3)
            if (r5 == 0) goto L8f
            r3 = 6
            goto L9c
        L8f:
            java.lang.String r5 = "audio/eac3"
            boolean r3 = r5.equals(r3)
            if (r3 == 0) goto L9a
            r3 = 16
            goto L9c
        L9a:
            r3 = 30
        L9c:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "AssumedMaxChannelAdjustment: "
            r5.<init>(r6)
            r5.append(r2)
            java.lang.String r2 = ", ["
            r5.append(r2)
            r5.append(r0)
            java.lang.String r0 = " to "
            r5.append(r0)
            r5.append(r3)
            java.lang.String r0 = "]"
            r5.append(r0)
            java.lang.String r0 = r5.toString()
            java.lang.String r2 = "MediaCodecInfo"
            android.util.Log.w(r2, r0)
            r0 = r3
        Lc5:
            if (r0 >= r8) goto Ld5
            java.lang.String r8 = java.lang.String.valueOf(r8)
            java.lang.String r0 = "channelCount.support, "
            java.lang.String r8 = r0.concat(r8)
            r7.c(r8)
            return r1
        Ld5:
            return r4
    }

    public final boolean b(java.lang.String r12) {
            r11 = this;
            r0 = 1
            if (r12 == 0) goto L77
            java.lang.String r1 = r11.d
            if (r1 != 0) goto L8
            goto L77
        L8:
            java.lang.String r1 = com.tkay.expressad.exoplayer.k.o.c(r12)
            if (r1 != 0) goto Lf
            return r0
        Lf:
            java.lang.String r2 = r11.d
            boolean r2 = r2.equals(r1)
            java.lang.String r3 = ", "
            r4 = 0
            if (r2 != 0) goto L32
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "codec.mime "
            r0.<init>(r2)
            r0.append(r12)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
            r11.c(r12)
            return r4
        L32:
            android.util.Pair r2 = com.tkay.expressad.exoplayer.f.d.a(r12)
            if (r2 != 0) goto L39
            return r0
        L39:
            android.media.MediaCodecInfo$CodecProfileLevel[] r5 = r11.a()
            int r6 = r5.length
            r7 = r4
        L3f:
            if (r7 >= r6) goto L5f
            r8 = r5[r7]
            int r9 = r8.profile
            java.lang.Object r10 = r2.first
            java.lang.Integer r10 = (java.lang.Integer) r10
            int r10 = r10.intValue()
            if (r9 != r10) goto L5c
            int r8 = r8.level
            java.lang.Object r9 = r2.second
            java.lang.Integer r9 = (java.lang.Integer) r9
            int r9 = r9.intValue()
            if (r8 < r9) goto L5c
            return r0
        L5c:
            int r7 = r7 + 1
            goto L3f
        L5f:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "codec.profileLevel, "
            r0.<init>(r2)
            r0.append(r12)
            r0.append(r3)
            r0.append(r1)
            java.lang.String r12 = r0.toString()
            r11.c(r12)
            return r4
        L77:
            return r0
    }
}
