package com.tkay.expressad.exoplayer.f;

import android.graphics.Point;
import android.media.MediaCodecInfo;
import android.util.Log;
import android.util.Pair;
import com.tkay.expressad.exoplayer.k.af;
import com.tkay.expressad.exoplayer.k.o;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6579a = "MediaCodecInfo";
    public static final int b = -1;
    public final String c;
    public final String d;
    public final MediaCodecInfo.CodecCapabilities e;
    public final boolean f;
    public final boolean g;
    public final boolean h;
    public final boolean i;

    public static a a(String str) {
        return new a(str, null, null, true, false, false);
    }

    private static a a(String str, String str2, MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return new a(str, str2, codecCapabilities, false, false, false);
    }

    public static a a(String str, String str2, MediaCodecInfo.CodecCapabilities codecCapabilities, boolean z, boolean z2) {
        return new a(str, str2, codecCapabilities, false, z, z2);
    }

    /* JADX WARN: Removed duplicated region for block: B:13:0x002c  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0046  */
    /* JADX WARN: Removed duplicated region for block: B:36:0x005f  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private a(java.lang.String r1, java.lang.String r2, android.media.MediaCodecInfo.CodecCapabilities r3, boolean r4, boolean r5, boolean r6) {
        /*
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
            int r4 = com.tkay.expressad.exoplayer.k.af.f6754a
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
            int r5 = com.tkay.expressad.exoplayer.k.af.f6754a
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
            int r5 = com.tkay.expressad.exoplayer.k.af.f6754a
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
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.f.a.<init>(java.lang.String, java.lang.String, android.media.MediaCodecInfo$CodecCapabilities, boolean, boolean, boolean):void");
    }

    public final MediaCodecInfo.CodecProfileLevel[] a() {
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.e;
        return (codecCapabilities == null || codecCapabilities.profileLevels == null) ? new MediaCodecInfo.CodecProfileLevel[0] : this.e.profileLevels;
    }

    private int b() {
        MediaCodecInfo.CodecCapabilities codecCapabilities;
        if (af.f6754a < 23 || (codecCapabilities = this.e) == null) {
            return -1;
        }
        return codecCapabilities.getMaxSupportedInstances();
    }

    public final boolean b(String str) {
        String strC;
        if (str == null || this.d == null || (strC = o.c(str)) == null) {
            return true;
        }
        if (!this.d.equals(strC)) {
            c("codec.mime " + str + ", " + strC);
            return false;
        }
        Pair<Integer, Integer> pairA = d.a(str);
        if (pairA == null) {
            return true;
        }
        for (MediaCodecInfo.CodecProfileLevel codecProfileLevel : a()) {
            if (codecProfileLevel.profile == ((Integer) pairA.first).intValue() && codecProfileLevel.level >= ((Integer) pairA.second).intValue()) {
                return true;
            }
        }
        c("codec.profileLevel, " + str + ", " + strC);
        return false;
    }

    public final boolean a(int i, int i2, double d) {
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.e;
        if (codecCapabilities == null) {
            c("sizeAndRate.caps");
            return false;
        }
        MediaCodecInfo.VideoCapabilities videoCapabilities = codecCapabilities.getVideoCapabilities();
        if (videoCapabilities == null) {
            c("sizeAndRate.vCaps");
            return false;
        }
        if (a(videoCapabilities, i, i2, d)) {
            return true;
        }
        if (i >= i2 || !a(videoCapabilities, i2, i, d)) {
            c("sizeAndRate.support, " + i + "x" + i2 + "x" + d);
            return false;
        }
        Log.d("MediaCodecInfo", "AssumedSupport [" + ("sizeAndRate.rotated, " + i + "x" + i2 + "x" + d) + "] [" + this.c + ", " + this.d + "] [" + af.e + "]");
        return true;
    }

    public final Point a(int i, int i2) {
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.e;
        if (codecCapabilities == null) {
            c("align.caps");
            return null;
        }
        MediaCodecInfo.VideoCapabilities videoCapabilities = codecCapabilities.getVideoCapabilities();
        if (videoCapabilities == null) {
            c("align.vCaps");
            return null;
        }
        int widthAlignment = videoCapabilities.getWidthAlignment();
        int heightAlignment = videoCapabilities.getHeightAlignment();
        return new Point(af.a(i, widthAlignment) * widthAlignment, af.a(i2, heightAlignment) * heightAlignment);
    }

    public final boolean a(int i) {
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.e;
        if (codecCapabilities == null) {
            c("sampleRate.caps");
            return false;
        }
        MediaCodecInfo.AudioCapabilities audioCapabilities = codecCapabilities.getAudioCapabilities();
        if (audioCapabilities == null) {
            c("sampleRate.aCaps");
            return false;
        }
        if (audioCapabilities.isSampleRateSupported(i)) {
            return true;
        }
        c("sampleRate.support, ".concat(String.valueOf(i)));
        return false;
    }

    public final boolean b(int i) {
        int i2;
        MediaCodecInfo.CodecCapabilities codecCapabilities = this.e;
        if (codecCapabilities == null) {
            c("channelCount.caps");
            return false;
        }
        MediaCodecInfo.AudioCapabilities audioCapabilities = codecCapabilities.getAudioCapabilities();
        if (audioCapabilities == null) {
            c("channelCount.aCaps");
            return false;
        }
        String str = this.c;
        String str2 = this.d;
        int maxInputChannelCount = audioCapabilities.getMaxInputChannelCount();
        if (maxInputChannelCount <= 1 && ((af.f6754a < 26 || maxInputChannelCount <= 0) && !"audio/mpeg".equals(str2) && !"audio/3gpp".equals(str2) && !"audio/amr-wb".equals(str2) && !"audio/mp4a-latm".equals(str2) && !"audio/vorbis".equals(str2) && !"audio/opus".equals(str2) && !"audio/raw".equals(str2) && !"audio/flac".equals(str2) && !"audio/g711-alaw".equals(str2) && !"audio/g711-mlaw".equals(str2) && !"audio/gsm".equals(str2))) {
            if ("audio/ac3".equals(str2)) {
                i2 = 6;
            } else {
                i2 = "audio/eac3".equals(str2) ? 16 : 30;
            }
            Log.w("MediaCodecInfo", "AssumedMaxChannelAdjustment: " + str + ", [" + maxInputChannelCount + " to " + i2 + "]");
            maxInputChannelCount = i2;
        }
        if (maxInputChannelCount >= i) {
            return true;
        }
        c("channelCount.support, ".concat(String.valueOf(i)));
        return false;
    }

    private void c(String str) {
        Log.d("MediaCodecInfo", "NoSupport [" + str + "] [" + this.c + ", " + this.d + "] [" + af.e + "]");
    }

    private void d(String str) {
        Log.d("MediaCodecInfo", "AssumedSupport [" + str + "] [" + this.c + ", " + this.d + "] [" + af.e + "]");
    }

    private static int a(String str, String str2, int i) {
        int i2;
        if (i > 1 || ((af.f6754a >= 26 && i > 0) || "audio/mpeg".equals(str2) || "audio/3gpp".equals(str2) || "audio/amr-wb".equals(str2) || "audio/mp4a-latm".equals(str2) || "audio/vorbis".equals(str2) || "audio/opus".equals(str2) || "audio/raw".equals(str2) || "audio/flac".equals(str2) || "audio/g711-alaw".equals(str2) || "audio/g711-mlaw".equals(str2) || "audio/gsm".equals(str2))) {
            return i;
        }
        if ("audio/ac3".equals(str2)) {
            i2 = 6;
        } else {
            i2 = "audio/eac3".equals(str2) ? 16 : 30;
        }
        Log.w("MediaCodecInfo", "AssumedMaxChannelAdjustment: " + str + ", [" + i + " to " + i2 + "]");
        return i2;
    }

    private static boolean a(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return af.f6754a >= 19 && codecCapabilities.isFeatureSupported("adaptive-playback");
    }

    private static boolean b(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.isFeatureSupported("adaptive-playback");
    }

    private static boolean c(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return af.f6754a >= 21 && codecCapabilities.isFeatureSupported("tunneled-playback");
    }

    private static boolean d(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.isFeatureSupported("tunneled-playback");
    }

    private static boolean e(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return af.f6754a >= 21 && codecCapabilities.isFeatureSupported("secure-playback");
    }

    private static boolean f(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.isFeatureSupported("secure-playback");
    }

    private static boolean a(MediaCodecInfo.VideoCapabilities videoCapabilities, int i, int i2, double d) {
        if (d == -1.0d || d <= 0.0d) {
            return videoCapabilities.isSizeSupported(i, i2);
        }
        return videoCapabilities.areSizeAndRateSupported(i, i2, d);
    }

    private static int g(MediaCodecInfo.CodecCapabilities codecCapabilities) {
        return codecCapabilities.getMaxSupportedInstances();
    }
}
