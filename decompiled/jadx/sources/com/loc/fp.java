package com.loc;

import android.content.Context;
import android.net.ConnectivityManager;
import android.net.NetworkInfo;
import android.net.wifi.WifiInfo;
import android.os.Build;
import android.telephony.TelephonyManager;
import android.text.TextUtils;
import com.xiaomi.mipush.sdk.Constants;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* JADX INFO: compiled from: Req.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fp {
    protected static String I;
    protected static String K;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public String f2982a = "1";
    protected short b = 0;
    protected String c = null;
    protected String d = null;
    protected String e = null;
    protected String f = null;
    protected String g = null;
    public String h = null;
    public String i = null;
    protected String j = null;
    protected String k = null;
    protected String l = null;
    protected String m = null;
    protected String n = null;
    protected String o = null;
    protected String p = null;
    protected String q = null;
    protected String r = null;
    protected String s = null;
    protected String t = null;
    protected String u = null;
    protected String v = null;
    protected String w = null;
    protected String x = null;
    protected String y = null;
    protected int z = 0;
    protected ArrayList<fa> A = new ArrayList<>();
    protected ArrayList<fa> B = new ArrayList<>();
    protected String C = null;
    protected String D = null;
    protected ArrayList<eg> E = new ArrayList<>();
    protected String F = null;
    protected String G = null;
    protected byte[] H = null;
    private byte[] Q = null;
    private int R = 0;
    protected String J = null;
    protected String L = null;
    protected String M = null;
    protected String N = null;
    protected int O = 0;
    private List<fc> S = null;
    private List<fa> T = Collections.synchronizedList(new ArrayList());
    final int P = 3;

    private static int a(String str, byte[] bArr, int i) {
        try {
        } catch (Throwable th) {
            fr.a(th, "Req", "copyContentWithByteLen");
            bArr[i] = 0;
        }
        if (TextUtils.isEmpty(str)) {
            bArr[i] = 0;
            return i + 1;
        }
        byte[] bytes = str.getBytes("GBK");
        int length = bytes.length;
        if (length > 127) {
            length = 127;
        }
        bArr[i] = (byte) length;
        int i2 = i + 1;
        System.arraycopy(bytes, 0, bArr, i2, length);
        return i2 + length;
    }

    private static void a(fa faVar, List<fa> list) {
        if (faVar == null || list == null) {
            return;
        }
        int size = list.size();
        if (size == 0) {
            list.add(faVar);
            return;
        }
        long jMin = Long.MAX_VALUE;
        int i = 0;
        int i2 = -1;
        int i3 = -1;
        while (true) {
            if (i >= size) {
                i2 = i3;
                break;
            }
            fa faVar2 = list.get(i);
            if (faVar.c() == null || !faVar.c().equals(faVar2.c())) {
                jMin = Math.min(jMin, faVar2.t);
                if (jMin == faVar2.t) {
                    i3 = i;
                }
                i++;
            } else if (faVar.s != faVar2.s) {
                faVar2.t = faVar.t;
                faVar2.s = faVar.s;
            }
        }
        if (i2 >= 0) {
            if (size < 3) {
                list.add(faVar);
            } else {
                if (faVar.t <= jMin || i2 >= size) {
                    return;
                }
                list.remove(i2);
                list.add(faVar);
            }
        }
    }

    private void a(ArrayList<fa> arrayList, ArrayList<fa> arrayList2) {
        if (arrayList2 != null && arrayList2.size() > 0) {
            for (fa faVar : arrayList2) {
                if (faVar.r && faVar.n) {
                    a(faVar, this.T);
                    return;
                }
            }
        }
        if (arrayList == null || arrayList.size() <= 0) {
            return;
        }
        a(arrayList.get(0), this.T);
    }

    /* JADX WARN: Removed duplicated region for block: B:6:0x000f A[Catch: all -> 0x003e, TryCatch #0 {all -> 0x003e, blocks: (B:4:0x000c, B:10:0x001c, B:12:0x001f, B:14:0x0028, B:15:0x0030, B:6:0x000f, B:8:0x0014), top: B:20:0x000c }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private byte[] a(java.lang.String r7) {
        /*
            r6 = this;
            java.lang.String r0 = ":"
            java.lang.String[] r0 = r7.split(r0)
            r1 = 6
            byte[] r2 = new byte[r1]
            r3 = 0
            if (r0 == 0) goto Lf
            int r4 = r0.length     // Catch: java.lang.Throwable -> L3e
            if (r4 == r1) goto L1b
        Lf:
            java.lang.String[] r0 = new java.lang.String[r1]     // Catch: java.lang.Throwable -> L3e
            r4 = 0
        L12:
            if (r4 >= r1) goto L1b
            java.lang.String r5 = "0"
            r0[r4] = r5     // Catch: java.lang.Throwable -> L3e
            int r4 = r4 + 1
            goto L12
        L1b:
            r1 = 0
        L1c:
            int r4 = r0.length     // Catch: java.lang.Throwable -> L3e
            if (r1 >= r4) goto L54
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            int r4 = r4.length()     // Catch: java.lang.Throwable -> L3e
            r5 = 2
            if (r4 <= r5) goto L30
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            java.lang.String r4 = r4.substring(r3, r5)     // Catch: java.lang.Throwable -> L3e
            r0[r1] = r4     // Catch: java.lang.Throwable -> L3e
        L30:
            r4 = r0[r1]     // Catch: java.lang.Throwable -> L3e
            r5 = 16
            int r4 = java.lang.Integer.parseInt(r4, r5)     // Catch: java.lang.Throwable -> L3e
            byte r4 = (byte) r4     // Catch: java.lang.Throwable -> L3e
            r2[r1] = r4     // Catch: java.lang.Throwable -> L3e
            int r1 = r1 + 1
            goto L1c
        L3e:
            r0 = move-exception
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.String r1 = "getMacBa "
            java.lang.String r7 = r1.concat(r7)
            java.lang.String r1 = "Req"
            com.loc.fr.a(r0, r1, r7)
            java.lang.String r7 = "00:00:00:00:00:00"
            byte[] r2 = r6.a(r7)
        L54:
            return r2
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fp.a(java.lang.String):byte[]");
    }

    private void b() {
        String[] strArr = new String[27];
        strArr[0] = this.f2982a;
        strArr[1] = this.c;
        strArr[2] = this.d;
        strArr[3] = this.e;
        strArr[4] = this.f;
        strArr[5] = this.g;
        strArr[6] = this.h;
        strArr[7] = this.i;
        strArr[8] = this.l;
        strArr[9] = this.m;
        strArr[10] = this.n;
        strArr[11] = this.o;
        strArr[12] = this.p;
        strArr[13] = this.q;
        strArr[14] = this.r;
        strArr[15] = this.s;
        strArr[16] = this.t;
        strArr[17] = this.u;
        strArr[18] = this.v;
        strArr[19] = this.w;
        strArr[20] = this.x;
        strArr[21] = this.D;
        strArr[22] = this.F;
        strArr[23] = this.G;
        strArr[24] = I;
        strArr[25] = this.M;
        strArr[26] = this.N;
        for (int i = 0; i < 27; i++) {
            if (TextUtils.isEmpty(strArr[i])) {
                strArr[i] = "";
            }
        }
        if (TextUtils.isEmpty(this.j) || (!"0".equals(this.j) && !"2".equals(this.j))) {
            this.j = "0";
        }
        if (TextUtils.isEmpty(this.k) || (!"0".equals(this.k) && !"1".equals(this.k))) {
            this.k = "0";
        }
        if (TextUtils.isEmpty(this.y) || (!"1".equals(this.y) && !"2".equals(this.y))) {
            this.y = "0";
        }
        if (!fb.a(this.z)) {
            this.z = 0;
        }
        if (this.H == null) {
            this.H = new byte[0];
        }
    }

    public final void a(Context context, boolean z, boolean z2, fb fbVar, ff ffVar, ConnectivityManager connectivityManager, String str, fd fdVar) {
        String str2;
        String str3;
        String str4;
        NetworkInfo activeNetworkInfo;
        String strA;
        String str5;
        ArrayList<eg> arrayList;
        int length;
        String strF = l.f(context);
        int iD = fz.d();
        this.J = str;
        this.S = null;
        if (z2) {
            str2 = "api_serverSDK_130905";
            str3 = "S128DF1572465B890OE3F7A13167KLEI";
        } else {
            str2 = "UC_nlp_20131029";
            str3 = "BKZCHMBBSSUK7U8GLUKHBB56CCFF78U";
        }
        String str6 = str3;
        String str7 = str2;
        StringBuilder sb = new StringBuilder();
        int iG = fbVar.g();
        int iH = fbVar.h();
        TelephonyManager telephonyManagerI = fbVar.i();
        ArrayList<fa> arrayListC = fbVar.c();
        ArrayList<fa> arrayListD = fbVar.d();
        ArrayList<eg> arrayListE = ffVar.e();
        String str8 = iH == 2 ? "1" : "0";
        if (telephonyManagerI != null) {
            if (TextUtils.isEmpty(fr.g)) {
                try {
                    fr.g = o.k();
                } catch (Throwable th) {
                    fr.a(th, "Aps", "getApsReq part4");
                }
            }
            str4 = "1";
            if (TextUtils.isEmpty(fr.g) && Build.VERSION.SDK_INT < 29) {
                fr.g = "888888888888888";
            }
            if (TextUtils.isEmpty(fr.h)) {
                try {
                    fr.h = o.n();
                } catch (SecurityException unused) {
                } catch (Throwable th2) {
                    fr.a(th2, "Aps", "getApsReq part2");
                }
            }
            if (TextUtils.isEmpty(fr.h) && Build.VERSION.SDK_INT < 29) {
                fr.h = "888888888888888";
            }
        } else {
            str4 = "1";
        }
        try {
            activeNetworkInfo = connectivityManager.getActiveNetworkInfo();
        } catch (Throwable th3) {
            fr.a(th3, "Aps", "getApsReq part");
            activeNetworkInfo = null;
        }
        boolean zA = ffVar.a(connectivityManager);
        if (fz.a(activeNetworkInfo) != -1) {
            strA = fz.a(connectivityManager);
            str5 = zA ? "2" : str4;
        } else {
            strA = "";
            str5 = strA;
        }
        if ((iG & 4) != 4 || arrayListD.isEmpty()) {
            this.B.clear();
        } else {
            this.B.clear();
            this.B.addAll(arrayListD);
        }
        this.A.clear();
        this.A.addAll(arrayListC);
        StringBuilder sb2 = new StringBuilder();
        if (ffVar.k()) {
            if (zA) {
                WifiInfo wifiInfoM = ffVar.m();
                if (ff.a(wifiInfoM)) {
                    sb2.append(wifiInfoM.getBSSID());
                    sb2.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    int rssi = wifiInfoM.getRssi();
                    if (rssi < -128 || rssi > 127) {
                        rssi = 0;
                    }
                    sb2.append(rssi);
                    sb2.append(Constants.ACCEPT_TIME_SEPARATOR_SP);
                    String ssid = wifiInfoM.getSSID();
                    try {
                        length = wifiInfoM.getSSID().getBytes("UTF-8").length;
                    } catch (Exception unused2) {
                        length = 32;
                    }
                    if (length >= 32) {
                        ssid = "unkwn";
                    }
                    sb2.append(ssid.replace("*", "."));
                }
            }
            if (arrayListE != null && (arrayList = this.E) != null) {
                arrayList.clear();
                this.E.addAll(arrayListE);
            }
        } else {
            ffVar.g();
            ArrayList<eg> arrayList2 = this.E;
            if (arrayList2 != null) {
                arrayList2.clear();
            }
        }
        this.b = (short) 0;
        if (!z) {
            this.b = (short) (0 | 2);
        }
        this.c = str7;
        this.d = str6;
        this.f = Build.MODEL;
        this.g = "android" + Build.VERSION.RELEASE;
        this.h = fz.b(context);
        this.i = str8;
        this.j = "0";
        this.k = "0";
        this.l = "0";
        this.m = "0";
        this.n = "0";
        this.o = strF;
        this.p = fr.g;
        this.q = fr.h;
        this.s = String.valueOf(iD);
        this.t = fz.i(context);
        this.v = "6.4.0";
        this.w = null;
        this.u = "";
        this.x = strA;
        this.y = str5;
        this.z = iG;
        this.C = fbVar.l();
        this.F = ff.p();
        this.D = sb2.toString();
        this.O = (int) ((fz.b() - ffVar.q()) / 1000);
        try {
            if (TextUtils.isEmpty(I)) {
                I = o.f(context);
            }
        } catch (Throwable unused3) {
        }
        try {
            if (TextUtils.isEmpty(K)) {
                K = o.a(context);
            }
        } catch (Throwable unused4) {
        }
        try {
            if (TextUtils.isEmpty(this.M)) {
                this.M = o.f();
            }
        } catch (Throwable unused5) {
        }
        try {
            if (TextUtils.isEmpty(this.N)) {
                this.N = o.e(context);
            }
        } catch (Throwable unused6) {
        }
        try {
            this.S = fdVar.a(this.B, this.E);
            a(this.A, this.B);
        } catch (Throwable th4) {
            th4.printStackTrace();
        }
        sb.delete(0, sb.length());
        sb2.delete(0, sb2.length());
    }

    /* JADX WARN: Can't wrap try/catch for region: R(42:13|18|19|(8:24|(1:26)(1:27)|28|(7:30|(1:32)(1:33)|34|(1:36)(1:37)|38|(1:40)(1:41)|42)(12:(11:45|(1:47)(1:48)|49|(1:51)(1:52)|53|(1:55)(1:56)|57|(1:59)(1:60)|61|(1:63)(1:64)|65)|66|(1:68)(1:69)|(1:71)|74|(1:76)(1:77)|78|(1:80)|81|(1:83)|84|(2:86|(2:88|127)(3:89|(11:91|(1:93)(1:94)|95|(1:97)(1:98)|99|(1:101)(1:102)|103|(1:105)|109|(2:122|399)(8:111|(1:113)(1:114)|115|(1:117)|118|(1:120)|121|400)|123)|398))(2:124|(2:126|127)))|43|66|(0)(0)|(9:71|74|(0)(0)|78|(0)|81|(0)|84|(0)(0))(0))(1:23)|128|(1:134)(3:377|132|133)|135|(1:202)(4:138|(7:140|(3:160|(1:162)|163)(3:147|(3:149|(1:151)|152)(2:153|(3:155|(1:157)|158))|159)|164|(1:166)|170|(2:189|(1:389)(5:191|(1:193)|(1:196)|197|(3:199|188|388)(1:390)))(2:177|(1:387)(6:181|(1:183)|(1:186)|187|188|388))|200)|385|201)|203|(1:231)(14:208|383|209|210|369|211|(1:213)|214|215|218|(1:220)|224|(2:226|227)|228)|232|(1:234)(7:235|(1:237)(1:238)|(1:240)|241|(10:243|381|244|245|247|(1:252)|253|(1:259)(1:258)|(2:261|396)(1:397)|262)|395|263)|264|(2:371|265)|(1:267)(3:268|(1:270)|(1:272)(28:273|274|277|375|278|(1:280)|281|282|(3:372|284|285)|286|288|367|289|290|379|291|292|(1:294)(1:295)|296|(1:298)|299|(5:301|(1:303)(1:304)|305|(5:365|307|(5:310|(3:329|(1:331)|332)(2:317|(3:319|(1:321)|322)(2:323|(3:325|(1:327)|328)))|333|334|308)|391|335)|337)|338|(4:340|(1:342)(1:343)|344|(3:346|(6:349|(1:351)|352|(2:354|393)(1:394)|355|347)|392))|356|(1:358)|359|360))|276|277|375|278|(0)|281|282|(0)|286|288|367|289|290|379|291|292|(0)(0)|296|(0)|299|(0)|338|(0)|356|(0)|359|360) */
    /* JADX WARN: Can't wrap try/catch for region: R(43:13|18|19|(8:24|(1:26)(1:27)|28|(7:30|(1:32)(1:33)|34|(1:36)(1:37)|38|(1:40)(1:41)|42)(12:(11:45|(1:47)(1:48)|49|(1:51)(1:52)|53|(1:55)(1:56)|57|(1:59)(1:60)|61|(1:63)(1:64)|65)|66|(1:68)(1:69)|(1:71)|74|(1:76)(1:77)|78|(1:80)|81|(1:83)|84|(2:86|(2:88|127)(3:89|(11:91|(1:93)(1:94)|95|(1:97)(1:98)|99|(1:101)(1:102)|103|(1:105)|109|(2:122|399)(8:111|(1:113)(1:114)|115|(1:117)|118|(1:120)|121|400)|123)|398))(2:124|(2:126|127)))|43|66|(0)(0)|(9:71|74|(0)(0)|78|(0)|81|(0)|84|(0)(0))(0))(1:23)|128|(1:134)(3:377|132|133)|135|(1:202)(4:138|(7:140|(3:160|(1:162)|163)(3:147|(3:149|(1:151)|152)(2:153|(3:155|(1:157)|158))|159)|164|(1:166)|170|(2:189|(1:389)(5:191|(1:193)|(1:196)|197|(3:199|188|388)(1:390)))(2:177|(1:387)(6:181|(1:183)|(1:186)|187|188|388))|200)|385|201)|203|(1:231)(14:208|383|209|210|369|211|(1:213)|214|215|218|(1:220)|224|(2:226|227)|228)|232|(1:234)(7:235|(1:237)(1:238)|(1:240)|241|(10:243|381|244|245|247|(1:252)|253|(1:259)(1:258)|(2:261|396)(1:397)|262)|395|263)|264|371|265|(1:267)(3:268|(1:270)|(1:272)(28:273|274|277|375|278|(1:280)|281|282|(3:372|284|285)|286|288|367|289|290|379|291|292|(1:294)(1:295)|296|(1:298)|299|(5:301|(1:303)(1:304)|305|(5:365|307|(5:310|(3:329|(1:331)|332)(2:317|(3:319|(1:321)|322)(2:323|(3:325|(1:327)|328)))|333|334|308)|391|335)|337)|338|(4:340|(1:342)(1:343)|344|(3:346|(6:349|(1:351)|352|(2:354|393)(1:394)|355|347)|392))|356|(1:358)|359|360))|276|277|375|278|(0)|281|282|(0)|286|288|367|289|290|379|291|292|(0)(0)|296|(0)|299|(0)|338|(0)|356|(0)|359|360) */
    /* JADX WARN: Code restructure failed: missing block: B:287:0x0728, code lost:
    
        r2 = 2;
        r8 = r8 + 2;
     */
    /* JADX WARN: Removed duplicated region for block: B:124:0x031c  */
    /* JADX WARN: Removed duplicated region for block: B:134:0x0346 A[PHI: r0
      0x0346: PHI (r0v50 int) = (r0v49 int), (r0v49 int), (r0v163 int) binds: [B:129:0x0329, B:131:0x032e, B:364:0x0346] A[DONT_GENERATE, DONT_INLINE]] */
    /* JADX WARN: Removed duplicated region for block: B:202:0x0547  */
    /* JADX WARN: Removed duplicated region for block: B:231:0x05ff  */
    /* JADX WARN: Removed duplicated region for block: B:234:0x0613  */
    /* JADX WARN: Removed duplicated region for block: B:235:0x0619  */
    /* JADX WARN: Removed duplicated region for block: B:24:0x00e8  */
    /* JADX WARN: Removed duplicated region for block: B:267:0x06d1 A[Catch: all -> 0x06f5, TryCatch #3 {all -> 0x06f5, blocks: (B:265:0x06cd, B:267:0x06d1, B:268:0x06d4, B:272:0x06e2, B:273:0x06e7), top: B:371:0x06cd }] */
    /* JADX WARN: Removed duplicated region for block: B:268:0x06d4 A[Catch: all -> 0x06f5, TryCatch #3 {all -> 0x06f5, blocks: (B:265:0x06cd, B:267:0x06d1, B:268:0x06d4, B:272:0x06e2, B:273:0x06e7), top: B:371:0x06cd }] */
    /* JADX WARN: Removed duplicated region for block: B:26:0x00f0  */
    /* JADX WARN: Removed duplicated region for block: B:27:0x00fb  */
    /* JADX WARN: Removed duplicated region for block: B:280:0x0708 A[Catch: all -> 0x0728, TryCatch #6 {all -> 0x0728, blocks: (B:278:0x0700, B:280:0x0708, B:281:0x0712), top: B:375:0x0700 }] */
    /* JADX WARN: Removed duplicated region for block: B:294:0x0740  */
    /* JADX WARN: Removed duplicated region for block: B:295:0x0742  */
    /* JADX WARN: Removed duplicated region for block: B:298:0x0751  */
    /* JADX WARN: Removed duplicated region for block: B:301:0x076b  */
    /* JADX WARN: Removed duplicated region for block: B:30:0x0108  */
    /* JADX WARN: Removed duplicated region for block: B:340:0x0873  */
    /* JADX WARN: Removed duplicated region for block: B:358:0x091e  */
    /* JADX WARN: Removed duplicated region for block: B:372:0x071a A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:44:0x0164  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x0205  */
    /* JADX WARN: Removed duplicated region for block: B:69:0x0210  */
    /* JADX WARN: Removed duplicated region for block: B:71:0x0213  */
    /* JADX WARN: Removed duplicated region for block: B:72:0x0215 A[ADDED_TO_REGION] */
    /* JADX WARN: Removed duplicated region for block: B:76:0x0224  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x0237  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x0242  */
    /* JADX WARN: Removed duplicated region for block: B:83:0x0247  */
    /* JADX WARN: Removed duplicated region for block: B:86:0x0255  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public final byte[] a() {
        /*
            Method dump skipped, instruction units count: 2387
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fp.a():byte[]");
    }
}
