package com.tkay.expressad.exoplayer.f;

import android.media.MediaCodecInfo;
import android.media.MediaCodecList;
import android.text.TextUtils;
import android.util.Log;
import android.util.Pair;
import android.util.SparseIntArray;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.exoplayer.k.af;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public final class d {
    private static final String a = "MediaCodecUtil";
    private static final String c = "OMX.MTK.AUDIO.DECODER.RAW";
    private static final SparseIntArray g;
    private static final SparseIntArray h;
    private static final String i = "avc1";
    private static final String j = "avc2";
    private static final Map<String, Integer> k;
    private static final String l = "hev1";
    private static final String m = "hvc1";
    private static final String b = "OMX.google.raw.decoder";
    private static final com.tkay.expressad.exoplayer.f.a d = com.tkay.expressad.exoplayer.f.a.a(b);
    private static final Pattern e = Pattern.compile("^\\D?(\\d+)$");
    private static final HashMap<a, List<com.tkay.expressad.exoplayer.f.a>> f = new HashMap<>();
    private static int n = -1;

    private interface c {
        int a();

        MediaCodecInfo a(int i);

        boolean a(String str, MediaCodecInfo.CodecCapabilities codecCapabilities);

        boolean b();
    }

    private static int a(int i2) {
        if (i2 == 1 || i2 == 2) {
            return 25344;
        }
        switch (i2) {
            case 8:
            case 16:
            case 32:
                return 101376;
            case 64:
                return 202752;
            case 128:
            case 256:
                return 414720;
            case 512:
                return 921600;
            case 1024:
                return 1310720;
            case 2048:
            case 4096:
                return 2097152;
            case 8192:
                return 2228224;
            case 16384:
                return 5652480;
            case 32768:
            case 65536:
                return 9437184;
            default:
                return -1;
        }
    }

    public static class b extends Exception {
        b(Throwable th, byte b) {
            this(th);
        }

        private b(Throwable th) {
            super("Failed to query underlying media codecs", th);
        }
    }

    static {
        SparseIntArray sparseIntArray = new SparseIntArray();
        g = sparseIntArray;
        sparseIntArray.put(66, 1);
        g.put(77, 2);
        g.put(88, 4);
        g.put(100, 8);
        SparseIntArray sparseIntArray2 = new SparseIntArray();
        h = sparseIntArray2;
        sparseIntArray2.put(10, 1);
        h.put(11, 4);
        h.put(12, 8);
        h.put(13, 16);
        h.put(20, 32);
        h.put(21, 64);
        h.put(22, 128);
        h.put(30, 256);
        h.put(31, 512);
        h.put(32, 1024);
        h.put(40, 2048);
        h.put(41, 4096);
        h.put(42, 8192);
        h.put(50, 16384);
        h.put(51, 32768);
        h.put(52, 65536);
        HashMap map = new HashMap();
        k = map;
        map.put("L30", 1);
        k.put("L60", 4);
        k.put("L63", 16);
        k.put("L90", 64);
        k.put("L93", 256);
        k.put("L120", 1024);
        k.put("L123", 4096);
        k.put("L150", 16384);
        k.put("L153", 65536);
        k.put("L156", 262144);
        k.put("L180", 1048576);
        k.put("L183", 4194304);
        k.put("L186", 16777216);
        k.put("H30", 2);
        k.put("H60", 8);
        k.put("H63", 32);
        k.put("H90", 128);
        k.put("H93", 512);
        k.put("H120", 2048);
        k.put("H123", 8192);
        k.put("H150", 32768);
        k.put("H153", 131072);
        k.put("H156", 524288);
        k.put("H180", 2097152);
        k.put("H183", 8388608);
        k.put("H186", Integer.valueOf(DownloadExpSwitchCode.BACK_CLEAR_DATA));
    }

    private d() {
    }

    private static void b(String str, boolean z) {
        try {
            c(str, z);
        } catch (b e2) {
            Log.e(a, "Codec warming failed", e2);
        }
    }

    public static com.tkay.expressad.exoplayer.f.a a() {
        return d;
    }

    public static com.tkay.expressad.exoplayer.f.a a(String str, boolean z) {
        List<com.tkay.expressad.exoplayer.f.a> listC = c(str, z);
        if (listC.isEmpty()) {
            return null;
        }
        return listC.get(0);
    }

    private static synchronized List<com.tkay.expressad.exoplayer.f.a> c(String str, boolean z) {
        a aVar = new a(str, z);
        List<com.tkay.expressad.exoplayer.f.a> list = f.get(aVar);
        if (list != null) {
            return list;
        }
        byte b2 = 0;
        c eVar = af.a >= 21 ? new e(z) : new d(b2);
        ArrayList<com.tkay.expressad.exoplayer.f.a> arrayListA = a(aVar, eVar, str);
        if (z && arrayListA.isEmpty() && 21 <= af.a && af.a <= 23) {
            eVar = new d(b2);
            arrayListA = a(aVar, eVar, str);
            if (!arrayListA.isEmpty()) {
                Log.w(a, "MediaCodecList API didn't list secure decoder for: " + str + ". Assuming: " + arrayListA.get(0).c);
            }
        }
        if ("audio/eac3-joc".equals(str)) {
            arrayListA.addAll(a(new a("audio/eac3", aVar.b), eVar, str));
        }
        a(arrayListA);
        List<com.tkay.expressad.exoplayer.f.a> listUnmodifiableList = Collections.unmodifiableList(arrayListA);
        f.put(aVar, listUnmodifiableList);
        return listUnmodifiableList;
    }

    public static int b() {
        if (n == -1) {
            int iMax = 0;
            com.tkay.expressad.exoplayer.f.a aVarA = a("video/avc", false);
            if (aVarA != null) {
                MediaCodecInfo.CodecProfileLevel[] codecProfileLevelArrA = aVarA.a();
                int length = codecProfileLevelArrA.length;
                int iMax2 = 0;
                while (iMax < length) {
                    int i2 = codecProfileLevelArrA[iMax].level;
                    int i3 = 9437184;
                    if (i2 != 1 && i2 != 2) {
                        switch (i2) {
                            case 8:
                            case 16:
                            case 32:
                                i3 = 101376;
                                break;
                            case 64:
                                i3 = 202752;
                                break;
                            case 128:
                            case 256:
                                i3 = 414720;
                                break;
                            case 512:
                                i3 = 921600;
                                break;
                            case 1024:
                                i3 = 1310720;
                                break;
                            case 2048:
                            case 4096:
                                i3 = 2097152;
                                break;
                            case 8192:
                                i3 = 2228224;
                                break;
                            case 16384:
                                i3 = 5652480;
                                break;
                            case 32768:
                            case 65536:
                                break;
                            default:
                                i3 = -1;
                                break;
                        }
                    } else {
                        i3 = 25344;
                    }
                    iMax2 = Math.max(i3, iMax2);
                    iMax++;
                }
                iMax = Math.max(iMax2, af.a >= 21 ? 345600 : 172800);
            }
            n = iMax;
        }
        return n;
    }

    /* JADX WARN: Failed to restore switch over string. Please report as a decompilation issue */
    public static Pair<Integer, Integer> a(String str) {
        if (str == null) {
            return null;
        }
        String[] strArrSplit = str.split("\\.");
        byte b2 = 0;
        String str2 = strArrSplit[0];
        int i2 = 2;
        switch (str2.hashCode()) {
            case 3006243:
                b2 = !str2.equals(i) ? (byte) -1 : (byte) 2;
                break;
            case 3006244:
                b2 = !str2.equals(j) ? (byte) -1 : (byte) 3;
                break;
            case 3199032:
                if (!str2.equals(l)) {
                    b2 = -1;
                }
                break;
            case 3214780:
                b2 = !str2.equals(m) ? (byte) -1 : (byte) 1;
                break;
            default:
                b2 = -1;
                break;
        }
        if (b2 != 0 && b2 != 1) {
            if (b2 == 2 || b2 == 3) {
                return b(str, strArrSplit);
            }
            return null;
        }
        if (strArrSplit.length < 4) {
            Log.w(a, "Ignoring malformed HEVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
        Matcher matcher = e.matcher(strArrSplit[1]);
        if (!matcher.matches()) {
            Log.w(a, "Ignoring malformed HEVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
        String strGroup = matcher.group(1);
        if ("1".equals(strGroup)) {
            i2 = 1;
        } else if (!"2".equals(strGroup)) {
            Log.w(a, "Unknown HEVC profile string: ".concat(String.valueOf(strGroup)));
            return null;
        }
        Integer num = k.get(strArrSplit[3]);
        if (num == null) {
            Log.w(a, "Unknown HEVC level string: " + matcher.group(1));
            return null;
        }
        return new Pair<>(Integer.valueOf(i2), num);
    }

    /* JADX WARN: Removed duplicated region for block: B:144:0x024b A[Catch: Exception -> 0x0334, TryCatch #2 {Exception -> 0x0334, blocks: (B:3:0x0004, B:5:0x0016, B:9:0x0028, B:12:0x002f, B:14:0x0035, B:16:0x003d, B:18:0x0045, B:20:0x004d, B:22:0x0055, B:24:0x005d, B:27:0x0069, B:29:0x006f, B:32:0x0078, B:34:0x007c, B:36:0x0084, B:38:0x008e, B:40:0x0098, B:43:0x00a3, B:45:0x00a9, B:47:0x00b1, B:49:0x00bb, B:51:0x00c5, B:53:0x00cf, B:55:0x00d9, B:57:0x00e3, B:59:0x00ed, B:61:0x00f7, B:63:0x0101, B:65:0x010b, B:67:0x0115, B:69:0x011f, B:72:0x012b, B:74:0x012f, B:76:0x0137, B:78:0x0141, B:80:0x014b, B:82:0x0155, B:85:0x0161, B:88:0x0169, B:90:0x0171, B:92:0x0179, B:94:0x0181, B:96:0x018b, B:98:0x0195, B:100:0x019f, B:102:0x01a9, B:104:0x01b3, B:106:0x01bd, B:108:0x01c7, B:111:0x01d3, B:114:0x01db, B:116:0x01e3, B:118:0x01eb, B:120:0x01f5, B:122:0x01ff, B:124:0x0207, B:126:0x0211, B:129:0x021d, B:131:0x0221, B:133:0x0229, B:136:0x0233, B:138:0x023d, B:144:0x024b, B:146:0x0253, B:190:0x02d7, B:193:0x02df, B:195:0x02e5, B:196:0x02fc, B:197:0x031a), top: B:209:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:164:0x0295  */
    /* JADX WARN: Removed duplicated region for block: B:193:0x02df A[Catch: Exception -> 0x0334, TRY_ENTER, TryCatch #2 {Exception -> 0x0334, blocks: (B:3:0x0004, B:5:0x0016, B:9:0x0028, B:12:0x002f, B:14:0x0035, B:16:0x003d, B:18:0x0045, B:20:0x004d, B:22:0x0055, B:24:0x005d, B:27:0x0069, B:29:0x006f, B:32:0x0078, B:34:0x007c, B:36:0x0084, B:38:0x008e, B:40:0x0098, B:43:0x00a3, B:45:0x00a9, B:47:0x00b1, B:49:0x00bb, B:51:0x00c5, B:53:0x00cf, B:55:0x00d9, B:57:0x00e3, B:59:0x00ed, B:61:0x00f7, B:63:0x0101, B:65:0x010b, B:67:0x0115, B:69:0x011f, B:72:0x012b, B:74:0x012f, B:76:0x0137, B:78:0x0141, B:80:0x014b, B:82:0x0155, B:85:0x0161, B:88:0x0169, B:90:0x0171, B:92:0x0179, B:94:0x0181, B:96:0x018b, B:98:0x0195, B:100:0x019f, B:102:0x01a9, B:104:0x01b3, B:106:0x01bd, B:108:0x01c7, B:111:0x01d3, B:114:0x01db, B:116:0x01e3, B:118:0x01eb, B:120:0x01f5, B:122:0x01ff, B:124:0x0207, B:126:0x0211, B:129:0x021d, B:131:0x0221, B:133:0x0229, B:136:0x0233, B:138:0x023d, B:144:0x024b, B:146:0x0253, B:190:0x02d7, B:193:0x02df, B:195:0x02e5, B:196:0x02fc, B:197:0x031a), top: B:209:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:217:0x02fc A[ADDED_TO_REGION, REMOVE, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:219:0x0329 A[SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private static ArrayList<com.tkay.expressad.exoplayer.f.a> a(a aVar, c cVar, String str) throws b {
        boolean z;
        int i2;
        MediaCodecInfo mediaCodecInfo;
        c cVar2 = cVar;
        try {
            ArrayList<com.tkay.expressad.exoplayer.f.a> arrayList = new ArrayList<>();
            String str2 = aVar.a;
            int iA = cVar.a();
            boolean zB = cVar.b();
            int i3 = 0;
            while (i3 < iA) {
                MediaCodecInfo mediaCodecInfoA = cVar2.a(i3);
                String name = mediaCodecInfoA.getName();
                if (!mediaCodecInfoA.isEncoder() && ((zB || !name.endsWith(".secure")) && ((af.a >= 21 || (!"CIPAACDecoder".equals(name) && !"CIPMP3Decoder".equals(name) && !"CIPVorbisDecoder".equals(name) && !"CIPAMRNBDecoder".equals(name) && !"AACDecoder".equals(name) && !"MP3Decoder".equals(name))) && ((af.a >= 18 || !"OMX.SEC.MP3.Decoder".equals(name)) && ((af.a >= 18 || !"OMX.MTK.AUDIO.DECODER.AAC".equals(name) || (!"a70".equals(af.b) && (!"Xiaomi".equals(af.c) || !af.b.startsWith("HM")))) && ((af.a != 16 || !"OMX.qcom.audio.decoder.mp3".equals(name) || (!"dlxu".equals(af.b) && !"protou".equals(af.b) && !"ville".equals(af.b) && !"villeplus".equals(af.b) && !"villec2".equals(af.b) && !af.b.startsWith("gee") && !"C6602".equals(af.b) && !"C6603".equals(af.b) && !"C6606".equals(af.b) && !"C6616".equals(af.b) && !"L36h".equals(af.b) && !"SO-02E".equals(af.b))) && ((af.a != 16 || !"OMX.qcom.audio.decoder.aac".equals(name) || (!"C1504".equals(af.b) && !"C1505".equals(af.b) && !"C1604".equals(af.b) && !"C1605".equals(af.b))) && ((af.a >= 24 || ((!"OMX.SEC.aac.dec".equals(name) && !"OMX.Exynos.AAC.Decoder".equals(name)) || !"samsung".equals(af.c) || (!af.b.startsWith("zeroflte") && !af.b.startsWith("zerolte") && !af.b.startsWith("zenlte") && !"SC-05G".equals(af.b) && !"marinelteatt".equals(af.b) && !"404SC".equals(af.b) && !"SC-04G".equals(af.b) && !"SCV31".equals(af.b)))) && ((af.a > 19 || !"OMX.SEC.vp8.dec".equals(name) || !"samsung".equals(af.c) || (!af.b.startsWith(com.tkay.expressad.foundation.g.a.O) && !af.b.startsWith("serrano") && !af.b.startsWith("jflte") && !af.b.startsWith("santos") && !af.b.startsWith("t0"))) && (af.a > 19 || !af.b.startsWith("jflte") || !"OMX.qcom.video.decoder.vp8".equals(name))))))))))) {
                    if (!"audio/eac3-joc".equals(str) || !"OMX.MTK.AUDIO.DECODER.DSPAC3".equals(name)) {
                        z = true;
                        if (!z) {
                            String[] supportedTypes = mediaCodecInfoA.getSupportedTypes();
                            int length = supportedTypes.length;
                            int i4 = 0;
                            while (i4 < length) {
                                String str3 = supportedTypes[i4];
                                if (str3.equalsIgnoreCase(str2)) {
                                    try {
                                        MediaCodecInfo.CodecCapabilities capabilitiesForType = mediaCodecInfoA.getCapabilitiesForType(str3);
                                        i2 = iA;
                                        try {
                                            boolean zA = cVar2.a(str2, capabilitiesForType);
                                            mediaCodecInfo = mediaCodecInfoA;
                                            if (af.a <= 22) {
                                                try {
                                                    boolean z2 = ("ODROID-XU3".equals(af.d) || "Nexus 10".equals(af.d)) && ("OMX.Exynos.AVC.Decoder".equals(name) || "OMX.Exynos.AVC.Decoder.secure".equals(name));
                                                    if (zB && aVar.b == zA) {
                                                        arrayList.add(com.tkay.expressad.exoplayer.f.a.a(name, str2, capabilitiesForType, z2, false));
                                                    } else if (!zB && !aVar.b) {
                                                        arrayList.add(com.tkay.expressad.exoplayer.f.a.a(name, str2, capabilitiesForType, z2, false));
                                                    } else if (!zB && zA) {
                                                        try {
                                                            arrayList.add(com.tkay.expressad.exoplayer.f.a.a(name + ".secure", str2, capabilitiesForType, z2, true));
                                                            return arrayList;
                                                        } catch (Exception e2) {
                                                            e = e2;
                                                            if (af.a <= 23) {
                                                            }
                                                            Log.e(a, "Failed to query codec " + name + " (" + str3 + ")");
                                                            throw e;
                                                        }
                                                    }
                                                } catch (Exception e3) {
                                                    e = e3;
                                                    if (af.a <= 23) {
                                                    }
                                                    Log.e(a, "Failed to query codec " + name + " (" + str3 + ")");
                                                    throw e;
                                                }
                                            }
                                        } catch (Exception e4) {
                                            e = e4;
                                            mediaCodecInfo = mediaCodecInfoA;
                                            if (af.a <= 23 && !arrayList.isEmpty()) {
                                                Log.e(a, "Skipping codec " + name + " (failed to query capabilities)");
                                                i4++;
                                                cVar2 = cVar;
                                                iA = i2;
                                                mediaCodecInfoA = mediaCodecInfo;
                                            } else {
                                                Log.e(a, "Failed to query codec " + name + " (" + str3 + ")");
                                                throw e;
                                            }
                                        }
                                    } catch (Exception e5) {
                                        e = e5;
                                        i2 = iA;
                                    }
                                } else {
                                    i2 = iA;
                                    mediaCodecInfo = mediaCodecInfoA;
                                }
                                i4++;
                                cVar2 = cVar;
                                iA = i2;
                                mediaCodecInfoA = mediaCodecInfo;
                            }
                        }
                        i3++;
                        cVar2 = cVar;
                        iA = iA;
                    }
                }
                z = false;
                if (!z) {
                }
                i3++;
                cVar2 = cVar;
                iA = iA;
            }
            return arrayList;
        } catch (Exception e6) {
            throw new b(e6, (byte) 0);
        }
    }

    private static boolean a(MediaCodecInfo mediaCodecInfo, String str, boolean z, String str2) {
        if (mediaCodecInfo.isEncoder() || (!z && str.endsWith(".secure"))) {
            return false;
        }
        if (af.a < 21 && ("CIPAACDecoder".equals(str) || "CIPMP3Decoder".equals(str) || "CIPVorbisDecoder".equals(str) || "CIPAMRNBDecoder".equals(str) || "AACDecoder".equals(str) || "MP3Decoder".equals(str))) {
            return false;
        }
        if (af.a < 18 && "OMX.SEC.MP3.Decoder".equals(str)) {
            return false;
        }
        if (af.a < 18 && "OMX.MTK.AUDIO.DECODER.AAC".equals(str) && ("a70".equals(af.b) || ("Xiaomi".equals(af.c) && af.b.startsWith("HM")))) {
            return false;
        }
        if (af.a == 16 && "OMX.qcom.audio.decoder.mp3".equals(str) && ("dlxu".equals(af.b) || "protou".equals(af.b) || "ville".equals(af.b) || "villeplus".equals(af.b) || "villec2".equals(af.b) || af.b.startsWith("gee") || "C6602".equals(af.b) || "C6603".equals(af.b) || "C6606".equals(af.b) || "C6616".equals(af.b) || "L36h".equals(af.b) || "SO-02E".equals(af.b))) {
            return false;
        }
        if (af.a == 16 && "OMX.qcom.audio.decoder.aac".equals(str) && ("C1504".equals(af.b) || "C1505".equals(af.b) || "C1604".equals(af.b) || "C1605".equals(af.b))) {
            return false;
        }
        if (af.a < 24 && (("OMX.SEC.aac.dec".equals(str) || "OMX.Exynos.AAC.Decoder".equals(str)) && "samsung".equals(af.c) && (af.b.startsWith("zeroflte") || af.b.startsWith("zerolte") || af.b.startsWith("zenlte") || "SC-05G".equals(af.b) || "marinelteatt".equals(af.b) || "404SC".equals(af.b) || "SC-04G".equals(af.b) || "SCV31".equals(af.b)))) {
            return false;
        }
        if (af.a <= 19 && "OMX.SEC.vp8.dec".equals(str) && "samsung".equals(af.c) && (af.b.startsWith(com.tkay.expressad.foundation.g.a.O) || af.b.startsWith("serrano") || af.b.startsWith("jflte") || af.b.startsWith("santos") || af.b.startsWith("t0"))) {
            return false;
        }
        if (af.a <= 19 && af.b.startsWith("jflte") && "OMX.qcom.video.decoder.vp8".equals(str)) {
            return false;
        }
        return ("audio/eac3-joc".equals(str2) && "OMX.MTK.AUDIO.DECODER.DSPAC3".equals(str)) ? false : true;
    }

    private static void a(List<com.tkay.expressad.exoplayer.f.a> list) {
        if (af.a < 26) {
            if (list.size() <= 1 || !c.equals(list.get(0).c)) {
                return;
            }
            for (int i2 = 1; i2 < list.size(); i2++) {
                com.tkay.expressad.exoplayer.f.a aVar = list.get(i2);
                if (b.equals(aVar.c)) {
                    list.remove(i2);
                    list.add(0, aVar);
                    return;
                }
            }
        }
    }

    private static boolean b(String str) {
        if (af.a > 22) {
            return false;
        }
        if ("ODROID-XU3".equals(af.d) || "Nexus 10".equals(af.d)) {
            return "OMX.Exynos.AVC.Decoder".equals(str) || "OMX.Exynos.AVC.Decoder.secure".equals(str);
        }
        return false;
    }

    private static Pair<Integer, Integer> a(String str, String[] strArr) {
        int i2;
        if (strArr.length < 4) {
            Log.w(a, "Ignoring malformed HEVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
        Matcher matcher = e.matcher(strArr[1]);
        if (!matcher.matches()) {
            Log.w(a, "Ignoring malformed HEVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
        String strGroup = matcher.group(1);
        if ("1".equals(strGroup)) {
            i2 = 1;
        } else {
            if (!"2".equals(strGroup)) {
                Log.w(a, "Unknown HEVC profile string: ".concat(String.valueOf(strGroup)));
                return null;
            }
            i2 = 2;
        }
        Integer num = k.get(strArr[3]);
        if (num == null) {
            Log.w(a, "Unknown HEVC level string: " + matcher.group(1));
            return null;
        }
        return new Pair<>(Integer.valueOf(i2), num);
    }

    private static Pair<Integer, Integer> b(String str, String[] strArr) {
        Integer numValueOf;
        Integer numValueOf2;
        if (strArr.length < 2) {
            Log.w(a, "Ignoring malformed AVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
        try {
            if (strArr[1].length() == 6) {
                numValueOf2 = Integer.valueOf(Integer.parseInt(strArr[1].substring(0, 2), 16));
                numValueOf = Integer.valueOf(Integer.parseInt(strArr[1].substring(4), 16));
            } else if (strArr.length >= 3) {
                Integer numValueOf3 = Integer.valueOf(Integer.parseInt(strArr[1]));
                numValueOf = Integer.valueOf(Integer.parseInt(strArr[2]));
                numValueOf2 = numValueOf3;
            } else {
                Log.w(a, "Ignoring malformed AVC codec string: ".concat(String.valueOf(str)));
                return null;
            }
            int i2 = g.get(numValueOf2.intValue(), -1);
            if (i2 == -1) {
                Log.w(a, "Unknown AVC profile: ".concat(String.valueOf(numValueOf2)));
                return null;
            }
            int i3 = h.get(numValueOf.intValue(), -1);
            if (i3 == -1) {
                Log.w(a, "Unknown AVC level: ".concat(String.valueOf(numValueOf)));
                return null;
            }
            return new Pair<>(Integer.valueOf(i2), Integer.valueOf(i3));
        } catch (NumberFormatException unused) {
            Log.w(a, "Ignoring malformed AVC codec string: ".concat(String.valueOf(str)));
            return null;
        }
    }

    private static final class e implements c {
        private final int a;
        private MediaCodecInfo[] b;

        @Override
        public final boolean b() {
            return true;
        }

        public e(boolean z) {
            this.a = z ? 1 : 0;
        }

        @Override
        public final int a() {
            c();
            return this.b.length;
        }

        @Override
        public final MediaCodecInfo a(int i) {
            c();
            return this.b[i];
        }

        @Override
        public final boolean a(String str, MediaCodecInfo.CodecCapabilities codecCapabilities) {
            return codecCapabilities.isFeatureSupported("secure-playback");
        }

        private void c() {
            if (this.b == null) {
                this.b = new MediaCodecList(this.a).getCodecInfos();
            }
        }
    }

    private static final class d implements c {
        @Override
        public final boolean b() {
            return false;
        }

        private d() {
        }

        d(byte b) {
            this();
        }

        @Override
        public final int a() {
            return MediaCodecList.getCodecCount();
        }

        @Override
        public final MediaCodecInfo a(int i) {
            return MediaCodecList.getCodecInfoAt(i);
        }

        @Override
        public final boolean a(String str, MediaCodecInfo.CodecCapabilities codecCapabilities) {
            return "video/avc".equals(str);
        }
    }

    private static final class a {
        public final String a;
        public final boolean b;

        public a(String str, boolean z) {
            this.a = str;
            this.b = z;
        }

        public final int hashCode() {
            String str = this.a;
            return (((str == null ? 0 : str.hashCode()) + 31) * 31) + (this.b ? 1231 : 1237);
        }

        public final boolean equals(Object obj) {
            if (this == obj) {
                return true;
            }
            if (obj != null && obj.getClass() == a.class) {
                a aVar = (a) obj;
                if (TextUtils.equals(this.a, aVar.a) && this.b == aVar.b) {
                    return true;
                }
            }
            return false;
        }
    }
}
