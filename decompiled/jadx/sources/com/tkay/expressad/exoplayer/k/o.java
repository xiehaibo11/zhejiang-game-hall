package com.tkay.expressad.exoplayer.k;

import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;

/* JADX INFO: loaded from: classes3.dex */
public final class o {
    public static final String A = "audio/eac3";
    public static final String B = "audio/eac3-joc";
    public static final String C = "audio/true-hd";
    public static final String D = "audio/vnd.dts";
    public static final String E = "audio/vnd.dts.hd";
    public static final String F = "audio/vnd.dts.hd;profile=lbr";
    public static final String G = "audio/vorbis";
    public static final String H = "audio/opus";
    public static final String I = "audio/3gpp";
    public static final String J = "audio/amr-wb";
    public static final String K = "audio/flac";
    public static final String L = "audio/alac";
    public static final String M = "audio/gsm";
    public static final String N = "audio/x-unknown";
    public static final String O = "text/vtt";
    public static final String P = "text/x-ssa";
    public static final String Q = "application/mp4";
    public static final String R = "application/webm";
    public static final String S = "application/dash+xml";
    public static final String T = "application/x-mpegURL";
    public static final String U = "application/vnd.ms-sstr+xml";
    public static final String V = "application/id3";
    public static final String W = "application/cea-608";
    public static final String X = "application/cea-708";
    public static final String Y = "application/x-subrip";
    public static final String Z = "application/ttml+xml";

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6767a = "video";
    public static final String aa = "application/x-quicktime-tx3g";
    public static final String ab = "application/x-mp4-vtt";
    public static final String ac = "application/x-mp4-cea-608";
    public static final String ad = "application/x-rawcc";
    public static final String ae = "application/vobsub";
    public static final String af = "application/pgs";
    public static final String ag = "application/x-scte35";
    public static final String ah = "application/x-camera-motion";
    public static final String ai = "application/x-emsg";
    public static final String aj = "application/dvbsubs";
    public static final String ak = "application/x-exif";
    private static final ArrayList<a> al = new ArrayList<>();
    public static final String b = "audio";
    public static final String c = "text";
    public static final String d = "application";
    public static final String e = "video/mp4";
    public static final String f = "video/webm";
    public static final String g = "video/3gpp";
    public static final String h = "video/avc";
    public static final String i = "video/hevc";
    public static final String j = "video/x-vnd.on2.vp8";
    public static final String k = "video/x-vnd.on2.vp9";
    public static final String l = "video/mp4v-es";
    public static final String m = "video/mpeg";
    public static final String n = "video/mpeg2";
    public static final String o = "video/wvc1";
    public static final String p = "video/x-unknown";
    public static final String q = "audio/mp4";
    public static final String r = "audio/mp4a-latm";
    public static final String s = "audio/webm";
    public static final String t = "audio/mpeg";
    public static final String u = "audio/mpeg-L1";
    public static final String v = "audio/mpeg-L2";
    public static final String w = "audio/raw";
    public static final String x = "audio/g711-alaw";
    public static final String y = "audio/g711-mlaw";
    public static final String z = "audio/ac3";

    public static String a(int i2) {
        if (i2 == 32) {
            return "video/mp4v-es";
        }
        if (i2 == 33) {
            return "video/avc";
        }
        if (i2 == 35) {
            return "video/hevc";
        }
        if (i2 == 64) {
            return "audio/mp4a-latm";
        }
        if (i2 == 163) {
            return "video/wvc1";
        }
        if (i2 == 177) {
            return "video/x-vnd.on2.vp9";
        }
        if (i2 == 165) {
            return "audio/ac3";
        }
        if (i2 == 166) {
            return "audio/eac3";
        }
        switch (i2) {
            case 96:
            case 97:
            case 98:
            case 99:
            case 100:
            case 101:
                return "video/mpeg2";
            case 102:
            case 103:
            case 104:
                return "audio/mp4a-latm";
            case 105:
            case 107:
                return "audio/mpeg";
            case 106:
                return "video/mpeg";
            default:
                switch (i2) {
                    case 169:
                    case 172:
                        return "audio/vnd.dts";
                    case 170:
                    case 171:
                        return "audio/vnd.dts.hd";
                    case 173:
                        return "audio/opus";
                    default:
                        return null;
                }
        }
    }

    private static void a(String str, String str2, int i2) {
        a aVar = new a(str, str2, i2);
        int size = al.size();
        int i3 = 0;
        while (true) {
            if (i3 >= size) {
                break;
            }
            if (str.equals(al.get(i3).f6768a)) {
                al.remove(i3);
                break;
            }
            i3++;
        }
        al.add(aVar);
    }

    public static boolean a(String str) {
        return "audio".equals(k(str));
    }

    public static boolean b(String str) {
        return "video".equals(k(str));
    }

    private static boolean g(String str) {
        return "text".equals(k(str));
    }

    private static boolean h(String str) {
        return "application".equals(k(str));
    }

    private static String i(String str) {
        if (str == null) {
            return null;
        }
        for (String str2 : af.a(str, Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            String strC = c(str2);
            if (strC != null && b(strC)) {
                return strC;
            }
        }
        return null;
    }

    private static String j(String str) {
        if (str == null) {
            return null;
        }
        for (String str2 : af.a(str, Constants.ACCEPT_TIME_SEPARATOR_SP)) {
            String strC = c(str2);
            if (strC != null && a(strC)) {
                return strC;
            }
        }
        return null;
    }

    public static String c(String str) {
        String strA = null;
        if (str == null) {
            return null;
        }
        String strTrim = str.trim();
        if (strTrim.startsWith("avc1") || strTrim.startsWith("avc3")) {
            return "video/avc";
        }
        if (strTrim.startsWith("hev1") || strTrim.startsWith("hvc1")) {
            return "video/hevc";
        }
        if (strTrim.startsWith("vp9") || strTrim.startsWith("vp09")) {
            return "video/x-vnd.on2.vp9";
        }
        if (strTrim.startsWith("vp8") || strTrim.startsWith("vp08")) {
            return "video/x-vnd.on2.vp8";
        }
        if (strTrim.startsWith("mp4a")) {
            if (strTrim.startsWith("mp4a.")) {
                String strSubstring = strTrim.substring(5);
                if (strSubstring.length() >= 2) {
                    try {
                        strA = a(Integer.parseInt(af.e(strSubstring.substring(0, 2)), 16));
                    } catch (NumberFormatException unused) {
                    }
                }
            }
            return strA == null ? "audio/mp4a-latm" : strA;
        }
        if (strTrim.startsWith("ac-3") || strTrim.startsWith("dac3")) {
            return "audio/ac3";
        }
        if (strTrim.startsWith("ec-3") || strTrim.startsWith("dec3")) {
            return "audio/eac3";
        }
        if (strTrim.startsWith("ec+3")) {
            return "audio/eac3-joc";
        }
        if (strTrim.startsWith("dtsc") || strTrim.startsWith("dtse")) {
            return "audio/vnd.dts";
        }
        if (strTrim.startsWith("dtsh") || strTrim.startsWith("dtsl")) {
            return "audio/vnd.dts.hd";
        }
        if (strTrim.startsWith("opus")) {
            return "audio/opus";
        }
        if (strTrim.startsWith("vorbis")) {
            return "audio/vorbis";
        }
        int size = al.size();
        for (int i2 = 0; i2 < size; i2++) {
            a aVar = al.get(i2);
            if (strTrim.startsWith(aVar.b)) {
                return aVar.f6768a;
            }
        }
        return null;
    }

    public static int d(String str) {
        if (TextUtils.isEmpty(str)) {
            return -1;
        }
        if (a(str)) {
            return 1;
        }
        if (b(str)) {
            return 2;
        }
        if ("text".equals(k(str)) || "application/cea-608".equals(str) || "application/cea-708".equals(str) || "application/x-mp4-cea-608".equals(str) || "application/x-subrip".equals(str) || "application/ttml+xml".equals(str) || "application/x-quicktime-tx3g".equals(str) || "application/x-mp4-vtt".equals(str) || "application/x-rawcc".equals(str) || "application/vobsub".equals(str) || "application/pgs".equals(str) || "application/dvbsubs".equals(str)) {
            return 3;
        }
        if ("application/id3".equals(str) || "application/x-emsg".equals(str) || "application/x-scte35".equals(str) || "application/x-camera-motion".equals(str)) {
            return 4;
        }
        int size = al.size();
        for (int i2 = 0; i2 < size; i2++) {
            a aVar = al.get(i2);
            if (str.equals(aVar.f6768a)) {
                return aVar.c;
            }
        }
        return -1;
    }

    /* JADX WARN: Can't fix incorrect switch cases order, some code will duplicate */
    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    /* JADX WARN: Removed duplicated region for block: B:23:0x004a  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public static int e(java.lang.String r7) {
        /*
            int r0 = r7.hashCode()
            r1 = 0
            r2 = 4
            r3 = 3
            r4 = 2
            r5 = 1
            r6 = 5
            switch(r0) {
                case -2123537834: goto L40;
                case -1095064472: goto L36;
                case 187078296: goto L2c;
                case 1504578661: goto L22;
                case 1505942594: goto L18;
                case 1556697186: goto Le;
                default: goto Ld;
            }
        Ld:
            goto L4a
        Le:
            java.lang.String r0 = "audio/true-hd"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r6
            goto L4b
        L18:
            java.lang.String r0 = "audio/vnd.dts.hd"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r2
            goto L4b
        L22:
            java.lang.String r0 = "audio/eac3"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r5
            goto L4b
        L2c:
            java.lang.String r0 = "audio/ac3"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r1
            goto L4b
        L36:
            java.lang.String r0 = "audio/vnd.dts"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r3
            goto L4b
        L40:
            java.lang.String r0 = "audio/eac3-joc"
            boolean r7 = r7.equals(r0)
            if (r7 == 0) goto L4a
            r7 = r4
            goto L4b
        L4a:
            r7 = -1
        L4b:
            if (r7 == 0) goto L62
            if (r7 == r5) goto L60
            if (r7 == r4) goto L60
            if (r7 == r3) goto L5e
            if (r7 == r2) goto L5b
            if (r7 == r6) goto L58
            return r1
        L58:
            r7 = 14
            return r7
        L5b:
            r7 = 8
            return r7
        L5e:
            r7 = 7
            return r7
        L60:
            r7 = 6
            return r7
        L62:
            return r6
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.exoplayer.k.o.e(java.lang.String):int");
    }

    public static int f(String str) {
        return d(c(str));
    }

    private static String k(String str) {
        if (str == null) {
            return null;
        }
        int iIndexOf = str.indexOf(47);
        if (iIndexOf == -1) {
            throw new IllegalArgumentException("Invalid mime type: ".concat(String.valueOf(str)));
        }
        return str.substring(0, iIndexOf);
    }

    private static String l(String str) {
        int size = al.size();
        for (int i2 = 0; i2 < size; i2++) {
            a aVar = al.get(i2);
            if (str.startsWith(aVar.b)) {
                return aVar.f6768a;
            }
        }
        return null;
    }

    private static int m(String str) {
        int size = al.size();
        for (int i2 = 0; i2 < size; i2++) {
            a aVar = al.get(i2);
            if (str.equals(aVar.f6768a)) {
                return aVar.c;
            }
        }
        return -1;
    }

    private o() {
    }

    private static final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        public final String f6768a;
        public final String b;
        public final int c;

        public a(String str, String str2, int i) {
            this.f6768a = str;
            this.b = str2;
            this.c = i;
        }
    }
}
