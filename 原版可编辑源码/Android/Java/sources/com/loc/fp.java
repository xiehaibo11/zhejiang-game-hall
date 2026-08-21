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
import java.util.zip.CRC32;
import okhttp3.internal.ws.WebSocketProtocol;

public final class fp {
    protected static String I;
    protected static String K;
    public String a = "1";
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
    */
    private byte[] a(String str) {
        String[] strArrSplit = str.split(Constants.COLON_SEPARATOR);
        byte[] bArr = new byte[6];
        if (strArrSplit != null) {
            try {
                if (strArrSplit.length != 6) {
                    strArrSplit = new String[6];
                    for (int i = 0; i < 6; i++) {
                        strArrSplit[i] = "0";
                    }
                }
            } catch (Throwable th) {
                fr.a(th, "Req", "getMacBa ".concat(String.valueOf(str)));
                return a(com.alipay.sdk.m.u.c.a);
            }
        }
        for (int i2 = 0; i2 < strArrSplit.length; i2++) {
            if (strArrSplit[i2].length() > 2) {
                strArrSplit[i2] = strArrSplit[i2].substring(0, 2);
            }
            bArr[i2] = (byte) Integer.parseInt(strArrSplit[i2], 16);
        }
        return bArr;
    }

    private void b() {
        String[] strArr = new String[27];
        strArr[0] = this.a;
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
    */
    public final byte[] a() {
        int length;
        int i;
        int length2;
        int length3;
        int length4;
        int i2;
        byte[] bArr;
        long jB;
        String str;
        int i3;
        byte[] bArr2;
        byte b;
        int length5;
        int i4;
        byte b2;
        int length6;
        int iMin;
        byte b3;
        int length7;
        int i5;
        int length8;
        int i6;
        int i7;
        int length9;
        int length10;
        boolean zIsEmpty;
        int i8;
        byte[] bArr3;
        int length11;
        int length12;
        byte[] bArr4;
        b();
        int i9 = 2;
        byte[] bArr5 = new byte[2];
        byte[] bArr6 = new byte[4];
        byte[] bArr7 = this.H;
        int i10 = 1;
        int length13 = bArr7 != null ? 4096 + bArr7.length + 1 : 4096;
        byte[] bArr8 = this.Q;
        if (bArr8 == null || length13 > this.R) {
            bArr8 = new byte[length13];
            this.Q = bArr8;
            this.R = length13;
        }
        byte[] bArr9 = bArr8;
        int i11 = 0;
        bArr9[0] = fz.g(this.a);
        byte[] bArr10 = null;
        byte[] bArrA = fz.a(this.b, (byte[]) null);
        System.arraycopy(bArrA, 0, bArr9, 1, bArrA.length);
        int iA = a(this.q, bArr9, a(this.p, bArr9, a(this.h, bArr9, a(this.u, bArr9, a(this.g, bArr9, a(this.f, bArr9, a(this.e, bArr9, a(this.o, bArr9, a(this.d, bArr9, a(this.c, bArr9, bArrA.length + 1))))))))));
        try {
        } catch (Throwable th) {
            fr.a(th, "Req", "buildV4Dot219");
            bArr9[iA] = 0;
        }
        if (!TextUtils.isEmpty(this.t)) {
            byte[] bArrA2 = a(this.t);
            bArr9[iA] = (byte) bArrA2.length;
            int i12 = iA + 1;
            System.arraycopy(bArrA2, 0, bArr9, i12, bArrA2.length);
            length = i12 + bArrA2.length;
            int iA2 = a(this.x, bArr9, a(K, bArr9, a(I, bArr9, a(this.w, bArr9, a(this.v, bArr9, length)))));
            bArr9[iA2] = Byte.parseByte(this.y);
            int i13 = iA2 + 1;
            bArr9[i13] = Byte.parseByte(this.j);
            int i14 = i13 + 1;
            int i15 = this.z;
            i = i15 & 3;
            bArr9[i14] = (byte) i15;
            length2 = i14 + 1;
            if (i != 1) {
                byte[] bArrA3 = fz.a(this.A.size() <= 0 ? this.A.get(0).a : 0, (byte[]) null);
                System.arraycopy(bArrA3, 0, bArr9, length2, bArrA3.length);
                int length14 = length2 + bArrA3.length;
                if (i != 1) {
                }
                length14 = length3 + length4;
                if (this.A.size() > 0) {
                }
                if (i2 > 127) {
                }
            }
            str = this.C;
            int i16 = 8;
            if (str == null) {
                bArr9[length2] = 0;
                i3 = length2 + 1;
            }
            ArrayList<fa> arrayList = this.B;
            int size = arrayList.size();
            int i17 = 5;
            int i18 = 3;
            if ((this.z & 4) == 4) {
                bArr2 = bArr;
                bArr9[i3] = 0;
                b = 1;
                length5 = i3 + 1;
            }
            if (TextUtils.isEmpty(this.D)) {
                i4 = 1;
                b2 = 0;
                bArr9[length5] = 0;
                length6 = length5 + 1;
            }
            ArrayList<eg> arrayList2 = this.E;
            iMin = Math.min(arrayList2.size(), 25);
            if (iMin != 0) {
            }
            bArr9[length7] = b3;
            int i19 = 1;
            int i20 = length7 + 1;
            if (this.G != null) {
            }
            length9 = i20 + i19;
            byte[] bArrA4 = {0, 0};
            zIsEmpty = TextUtils.isEmpty(this.J);
            if (!zIsEmpty) {
            }
            System.arraycopy(bArrA4, 0, bArr9, length9, 2);
            int length15 = length9 + 2;
            if (!zIsEmpty) {
            }
            int i21 = 2;
            System.arraycopy(fz.a(0, bArr5), 0, bArr9, length15, i21);
            int i22 = length15 + i21;
            byte[] bArr11 = new byte[i21];
            
            bArr11[0] = 0;
            bArr11[1] = 0;
            System.arraycopy(bArr11, 0, bArr9, i22, i21);
            int i23 = i22 + i21;
            byte[] bArr12 = this.H;
            if (bArr12 != null) {
            }
            byte[] bArrA5 = fz.a(length10, (byte[]) null);
            System.arraycopy(bArrA5, 0, bArr9, i23, bArrA5.length);
            int length16 = i23 + bArrA5.length;
            if (length10 > 0) {
            }
            if (Double.valueOf(fr.a).doubleValue() >= 5.0d) {
            }
            if (Double.valueOf(fr.a).doubleValue() >= 5.2d) {
            }
            if (Double.valueOf(fr.a).doubleValue() >= 5.3d) {
            }
            byte[] bArr13 = new byte[length16];
            System.arraycopy(bArr9, 0, bArr13, 0, length16);
            CRC32 crc32 = new CRC32();
            crc32.update(bArr13);
            byte[] bArrA6 = fz.a(crc32.getValue());
            byte[] bArr14 = new byte[length16 + 8];
            System.arraycopy(bArr13, 0, bArr14, 0, length16);
            System.arraycopy(bArrA6, 0, bArr14, length16, 8);
            return bArr14;
        }
        bArr9[iA] = 0;
        length = iA + 1;
        int iA22 = a(this.x, bArr9, a(K, bArr9, a(I, bArr9, a(this.w, bArr9, a(this.v, bArr9, length)))));
        bArr9[iA22] = Byte.parseByte(this.y);
        int i132 = iA22 + 1;
        bArr9[i132] = Byte.parseByte(this.j);
        int i142 = i132 + 1;
        int i152 = this.z;
        i = i152 & 3;
        bArr9[i142] = (byte) i152;
        length2 = i142 + 1;
        if (i != 1 || i == 2) {
            byte[] bArrA32 = fz.a(this.A.size() <= 0 ? this.A.get(0).a : 0, (byte[]) null);
            System.arraycopy(bArrA32, 0, bArr9, length2, bArrA32.length);
            int length142 = length2 + bArrA32.length;
            if (i != 1) {
                byte[] bArrA7 = fz.a(this.A.size() > 0 ? this.A.get(0).b : 0, (byte[]) null);
                System.arraycopy(bArrA7, 0, bArr9, length142, bArrA7.length);
                int length17 = length142 + bArrA7.length;
                byte[] bArrA8 = fz.a(this.A.size() > 0 ? this.A.get(0).c : 0, (byte[]) null);
                System.arraycopy(bArrA8, 0, bArr9, length17, bArrA8.length);
                length3 = length17 + bArrA8.length;
                byte[] bArrB = fz.b(this.A.size() > 0 ? this.A.get(0).d : 0, (byte[]) null);
                System.arraycopy(bArrB, 0, bArr9, length3, bArrB.length);
                length4 = bArrB.length;
            } else {
                if (i == 2) {
                    byte[] bArrA9 = fz.a(this.A.size() > 0 ? this.A.get(0).h : 0, (byte[]) null);
                    System.arraycopy(bArrA9, 0, bArr9, length142, bArrA9.length);
                    int length18 = length142 + bArrA9.length;
                    byte[] bArrA10 = fz.a(this.A.size() > 0 ? this.A.get(0).i : 0, (byte[]) null);
                    System.arraycopy(bArrA10, 0, bArr9, length18, bArrA10.length);
                    int length19 = length18 + bArrA10.length;
                    byte[] bArrA11 = fz.a(this.A.size() > 0 ? this.A.get(0).j : 0, (byte[]) null);
                    System.arraycopy(bArrA11, 0, bArr9, length19, bArrA11.length);
                    int length20 = length19 + bArrA11.length;
                    byte[] bArrB2 = fz.b(this.A.size() > 0 ? this.A.get(0).g : 0, (byte[]) null);
                    System.arraycopy(bArrB2, 0, bArr9, length20, bArrB2.length);
                    length3 = length20 + bArrB2.length;
                    byte[] bArrB3 = fz.b(this.A.size() > 0 ? this.A.get(0).f : 0, (byte[]) null);
                    System.arraycopy(bArrB3, 0, bArr9, length3, bArrB3.length);
                    length4 = bArrB3.length;
                }
                i2 = this.A.size() > 0 ? this.A.get(0).k : 0;
                if (i2 > 127 || i2 < -128) {
                    i2 = 0;
                }
                bArr9[length142] = (byte) i2;
                int i24 = length142 + 1;
                if (this.A.size() <= 0) {
                    bArr = bArr6;
                    jB = (fz.b() - this.A.get(0).t) / 1000;
                } else {
                    bArr = bArr6;
                    jB = 0;
                }
                if (jB > WebSocketProtocol.PAYLOAD_SHORT_MAX) {
                    jB = 65535;
                }
                if (jB < 0) {
                    jB = 0;
                }
                byte[] bArrA12 = fz.a((int) jB, bArr5);
                System.arraycopy(bArrA12, 0, bArr9, i24, bArrA12.length);
                length2 = i24 + 2;
                if (i != 1) {
                    if (this.A.size() == 0) {
                        bArr9[length2] = 0;
                        length2++;
                    } else {
                        int size2 = this.A.size();
                        bArr9[length2] = (byte) size2;
                        length2++;
                        int i25 = 0;
                        while (i25 < size2) {
                            byte[] bArrA13 = fz.a(this.A.size() > 0 ? this.A.get(i25).c : 0, bArr10);
                            System.arraycopy(bArrA13, i11, bArr9, length2, bArrA13.length);
                            int length21 = length2 + bArrA13.length;
                            byte[] bArrB4 = fz.b(this.A.size() > 0 ? this.A.get(i25).d : 0, bArr10);
                            System.arraycopy(bArrB4, i11, bArr9, length21, bArrB4.length);
                            int length22 = length21 + bArrB4.length;
                            int i26 = this.A.size() > 0 ? this.A.get(i25).k : 0;
                            if (i26 > 127 || i26 < -128) {
                                i26 = 0;
                            }
                            bArr9[length22] = (byte) i26;
                            length2 = length22 + i10;
                            if (Double.valueOf(fr.a).doubleValue() >= 5.2d) {
                                long jB2 = this.A.size() > 0 ? (fz.b() - this.A.get(i11).t) / 1000 : 0L;
                                if (jB2 > WebSocketProtocol.PAYLOAD_SHORT_MAX) {
                                    jB2 = 65535;
                                }
                                if (jB2 < 0) {
                                    jB2 = 0;
                                }
                                byte[] bArrA14 = fz.a((int) jB2, bArr5);
                                System.arraycopy(bArrA14, 0, bArr9, length2, bArrA14.length);
                                length2 += bArrA14.length;
                            }
                            i25++;
                            i10 = 1;
                            i11 = 0;
                            bArr10 = null;
                        }
                    }
                } else if (i == 2) {
                    bArr9[length2] = 0;
                    length2++;
                }
            }
            length142 = length3 + length4;
            if (this.A.size() > 0) {
            }
            if (i2 > 127) {
                i2 = 0;
                bArr9[length142] = (byte) i2;
                int i242 = length142 + 1;
                if (this.A.size() <= 0) {
                }
                if (jB > WebSocketProtocol.PAYLOAD_SHORT_MAX) {
                }
                if (jB < 0) {
                }
                byte[] bArrA122 = fz.a((int) jB, bArr5);
                System.arraycopy(bArrA122, 0, bArr9, i242, bArrA122.length);
                length2 = i242 + 2;
                if (i != 1) {
                }
            }
        } else {
            bArr = bArr6;
        }
        str = this.C;
        int i162 = 8;
        if (str == null && (this.z & 8) == 8) {
            try {
                byte[] bytes = str.getBytes("GBK");
                int iMin2 = Math.min(bytes.length, 60);
                bArr9[length2] = (byte) iMin2;
                length2++;
                System.arraycopy(bytes, 0, bArr9, length2, iMin2);
                i3 = length2 + iMin2;
            } catch (Exception unused) {
                bArr9[length2] = 0;
                i3 = length2 + 1;
            }
        } else {
            bArr9[length2] = 0;
            i3 = length2 + 1;
        }
        ArrayList<fa> arrayList3 = this.B;
        int size3 = arrayList3.size();
        int i172 = 5;
        int i182 = 3;
        if ((this.z & 4) == 4 || size3 <= 0) {
            bArr2 = bArr;
            bArr9[i3] = 0;
            b = 1;
            length5 = i3 + 1;
        } else {
            arrayList3.get(0);
            bArr9[i3] = (byte) size3;
            int i27 = 1;
            length5 = i3 + 1;
            int i28 = 0;
            while (i28 < size3) {
                fa faVar = arrayList3.get(i28);
                if (faVar.l == i27 || faVar.l == i182 || faVar.l == 4) {
                    bArr3 = bArr;
                    byte b4 = (byte) faVar.l;
                    if (faVar.n) {
                        b4 = (byte) (b4 | 8);
                    }
                    bArr9[length5] = b4;
                    int i29 = length5 + 1;
                    byte[] bArrA15 = fz.a(faVar.a, bArr5);
                    System.arraycopy(bArrA15, 0, bArr9, i29, bArrA15.length);
                    int length23 = i29 + bArrA15.length;
                    byte[] bArrA16 = fz.a(faVar.b, bArr5);
                    System.arraycopy(bArrA16, 0, bArr9, length23, bArrA16.length);
                    int length24 = length23 + bArrA16.length;
                    byte[] bArrA17 = fz.a(faVar.c, bArr5);
                    System.arraycopy(bArrA17, 0, bArr9, length24, bArrA17.length);
                    int length25 = length24 + bArrA17.length;
                    byte[] bArrB5 = fz.b(faVar.d, bArr3);
                    System.arraycopy(bArrB5, 0, bArr9, length25, bArrB5.length);
                    length5 = length25 + bArrB5.length;
                } else {
                    if (faVar.l == i9) {
                        byte b5 = (byte) faVar.l;
                        if (faVar.n) {
                            b5 = (byte) (b5 | 8);
                        }
                        bArr9[length5] = b5;
                        int i30 = length5 + 1;
                        byte[] bArrA18 = fz.a(faVar.a, bArr5);
                        System.arraycopy(bArrA18, 0, bArr9, i30, bArrA18.length);
                        int length26 = i30 + bArrA18.length;
                        byte[] bArrA19 = fz.a(faVar.h, bArr5);
                        System.arraycopy(bArrA19, 0, bArr9, length26, bArrA19.length);
                        int length27 = length26 + bArrA19.length;
                        byte[] bArrA20 = fz.a(faVar.i, bArr5);
                        System.arraycopy(bArrA20, 0, bArr9, length27, bArrA20.length);
                        int length28 = length27 + bArrA20.length;
                        byte[] bArrA21 = fz.a(faVar.j, bArr5);
                        System.arraycopy(bArrA21, 0, bArr9, length28, bArrA21.length);
                        int length29 = length28 + bArrA21.length;
                        bArr4 = bArr;
                        byte[] bArrB6 = fz.b(faVar.g, bArr4);
                        System.arraycopy(bArrB6, 0, bArr9, length29, bArrB6.length);
                        int length30 = length29 + bArrB6.length;
                        byte[] bArrB7 = fz.b(faVar.f, bArr4);
                        System.arraycopy(bArrB7, 0, bArr9, length30, bArrB7.length);
                        length5 = length30 + bArrB7.length;
                    } else {
                        bArr4 = bArr;
                        if (faVar.l == i172) {
                            byte b6 = (byte) faVar.l;
                            if (faVar.n) {
                                b6 = (byte) (b6 | 8);
                            }
                            bArr9[length5] = b6;
                            int i31 = length5 + 1;
                            byte[] bArrA22 = fz.a(faVar.a, bArr5);
                            System.arraycopy(bArrA22, 0, bArr9, i31, bArrA22.length);
                            int length31 = i31 + bArrA22.length;
                            byte[] bArrA23 = fz.a(faVar.b, bArr5);
                            System.arraycopy(bArrA23, 0, bArr9, length31, bArrA23.length);
                            int length32 = length31 + bArrA23.length;
                            byte[] bArrA24 = fz.a(faVar.c, bArr5);
                            System.arraycopy(bArrA24, 0, bArr9, length32, bArrA24.length);
                            int length33 = length32 + bArrA24.length;
                            bArr3 = bArr4;
                            System.arraycopy(fz.a(faVar.e), 0, bArr9, length33, i162);
                            length5 = length33 + i162;
                        }
                    }
                    bArr3 = bArr4;
                }
                int i32 = faVar.k;
                if (i32 > 127 || i32 < -128) {
                    i32 = 99;
                }
                bArr9[length5] = (byte) i32;
                int i33 = length5 + 1;
                int i34 = size3;
                byte[] bArrA25 = fz.a((short) ((fz.b() - faVar.t) / 1000), bArr5);
                System.arraycopy(bArrA25, 0, bArr9, i33, bArrA25.length);
                length5 = i33 + bArrA25.length;
                if (faVar.l == 3 || faVar.l == 4 || faVar.l == 5) {
                    if (Double.valueOf(fr.a).doubleValue() >= 5.0d) {
                        int i35 = faVar.o;
                        if (i35 > 32767) {
                            i35 = 32767;
                        }
                        byte[] bArrA26 = fz.a(i35 >= 0 ? i35 : 32767, bArr5);
                        System.arraycopy(bArrA26, 0, bArr9, length5, bArrA26.length);
                        length5 += bArrA26.length;
                        if (Double.valueOf(fr.a).doubleValue() >= 5.3d) {
                            byte[] bArrB8 = fz.b(faVar.p, bArr3);
                            System.arraycopy(bArrB8, 0, bArr9, length5, bArrB8.length);
                            length11 = length5 + bArrB8.length;
                            byte[] bArrB9 = fz.b(faVar.q, bArr3);
                            System.arraycopy(bArrB9, 0, bArr9, length11, bArrB9.length);
                            length12 = bArrB9.length;
                            length5 = length11 + length12;
                        }
                    }
                } else if (faVar.l == 1 && Double.valueOf(fr.a).doubleValue() >= 5.3d) {
                    int i36 = faVar.o;
                    if (i36 > 32767) {
                        i36 = 32767;
                    }
                    byte[] bArrA27 = fz.a(i36 >= 0 ? i36 : 32767, bArr5);
                    System.arraycopy(bArrA27, 0, bArr9, length5, bArrA27.length);
                    int length34 = length5 + bArrA27.length;
                    byte[] bArrB10 = fz.b(faVar.p, bArr3);
                    System.arraycopy(bArrB10, 0, bArr9, length34, bArrB10.length);
                    length11 = length34 + bArrB10.length;
                    byte[] bArrB11 = fz.b(faVar.q, bArr3);
                    System.arraycopy(bArrB11, 0, bArr9, length11, bArrB11.length);
                    length12 = bArrB11.length;
                    length5 = length11 + length12;
                }
                i28++;
                bArr = bArr3;
                size3 = i34;
                i9 = 2;
                i162 = 8;
                i27 = 1;
                i182 = 3;
                i172 = 5;
            }
            bArr2 = bArr;
            b = 1;
        }
        if (!TextUtils.isEmpty(this.D) || this.D.length() == 0) {
            i4 = 1;
            b2 = 0;
            bArr9[length5] = 0;
            length6 = length5 + 1;
        } else {
            bArr9[length5] = b;
            length6 = length5 + 1;
            try {
                String[] strArrSplit = this.D.split(Constants.ACCEPT_TIME_SEPARATOR_SP);
                byte[] bArrA28 = a(strArrSplit[0]);
                System.arraycopy(bArrA28, 0, bArr9, length6, bArrA28.length);
                length6 += bArrA28.length;
                try {
                    byte[] bytes2 = strArrSplit[2].getBytes("GBK");
                    int length35 = bytes2.length;
                    if (length35 > 127) {
                        length35 = 127;
                    }
                    bArr9[length6] = (byte) length35;
                    length6++;
                    System.arraycopy(bytes2, 0, bArr9, length6, length35);
                    i8 = length6 + length35;
                } catch (Throwable th2) {
                    fr.a(th2, "Req", "buildV4Dot214");
                    bArr9[length6] = 0;
                    i8 = length6 + 1;
                }
                int i37 = Integer.parseInt(strArrSplit[1]);
                if (i37 > 127 || i37 < -128) {
                    i37 = 0;
                }
                bArr9[i8] = Byte.parseByte(String.valueOf(i37));
                length6 = i8 + 1;
                if (Double.valueOf(fr.a).doubleValue() >= 5.2d) {
                    byte[] bArrA29 = fz.a(this.O, bArr5);
                    System.arraycopy(bArrA29, 0, bArr9, length6, bArrA29.length);
                    length6 += bArrA29.length;
                }
                i4 = 1;
                b2 = 0;
            } catch (Throwable th3) {
                fr.a(th3, "Req", "buildV4Dot216");
                byte[] bArrA30 = a(com.alipay.sdk.m.u.c.a);
                b2 = 0;
                System.arraycopy(bArrA30, 0, bArr9, length6, bArrA30.length);
                int length36 = length6 + bArrA30.length;
                bArr9[length36] = 0;
                i4 = 1;
                int i38 = length36 + 1;
                bArr9[i38] = Byte.parseByte("0");
                length6 = i38 + 1;
            }
        }
        ArrayList<eg> arrayList22 = this.E;
        iMin = Math.min(arrayList22.size(), 25);
        if (iMin != 0) {
            bArr9[length6] = b2;
            length7 = length6 + i4;
            b3 = 0;
        } else {
            bArr9[length6] = (byte) iMin;
            int length37 = length6 + i4;
            boolean z = fz.c() >= 17;
            long jB3 = z ? fz.b() / 1000 : 0L;
            for (int i39 = 0; i39 < iMin; i39++) {
                eg egVar = arrayList22.get(i39);
                byte[] bArrA31 = a(eg.a(egVar.a));
                System.arraycopy(bArrA31, 0, bArr9, length37, bArrA31.length);
                int length38 = length37 + bArrA31.length;
                try {
                    byte[] bytes3 = egVar.b.getBytes("GBK");
                    bArr9[length38] = (byte) bytes3.length;
                    length38++;
                    System.arraycopy(bytes3, 0, bArr9, length38, bytes3.length);
                    length8 = length38 + bytes3.length;
                    i5 = 1;
                } catch (Exception unused2) {
                    bArr9[length38] = 0;
                    i5 = 1;
                    length8 = length38 + 1;
                }
                int i40 = egVar.c;
                if (i40 > 127 || i40 < -128) {
                    i40 = 0;
                }
                bArr9[length8] = Byte.parseByte(String.valueOf(i40));
                int i41 = length8 + i5;
                if (!z || (i7 = (int) (jB3 - (egVar.f / 1000))) < 0) {
                    i6 = 65535;
                    i7 = 0;
                } else {
                    i6 = 65535;
                }
                if (i7 > i6) {
                    i7 = 65535;
                }
                byte[] bArrA33 = fz.a(i7, bArr5);
                System.arraycopy(bArrA33, 0, bArr9, i41, bArrA33.length);
                int length39 = i41 + bArrA33.length;
                byte[] bArrA34 = fz.a(egVar.d, bArr5);
                System.arraycopy(bArrA34, 0, bArr9, length39, bArrA34.length);
                length37 = length39 + bArrA34.length;
            }
            b3 = 0;
            byte[] bArrA35 = fz.a(Integer.parseInt(this.F), bArr5);
            System.arraycopy(bArrA35, 0, bArr9, length37, bArrA35.length);
            length7 = length37 + bArrA35.length;
        }
        bArr9[length7] = b3;
        int i192 = 1;
        int i202 = length7 + 1;
        try {
        } catch (Throwable unused3) {
            bArr9[i202] = 0;
            i192 = 1;
        }
        if (this.G != null) {
            bArr9[i202] = b3;
        } else {
            byte[] bytes4 = this.G.getBytes("GBK");
            if (bytes4.length > 127) {
                bytes4 = null;
            }
            if (bytes4 != null) {
                bArr9[i202] = (byte) bytes4.length;
                int i42 = i202 + 1;
                System.arraycopy(bytes4, 0, bArr9, i42, bytes4.length);
                length9 = i42 + bytes4.length;
                byte[] bArrA42 = {0, 0};
                zIsEmpty = TextUtils.isEmpty(this.J);
                if (!zIsEmpty) {
                    bArrA42 = fz.a(this.J.length(), bArr5);
                }
                System.arraycopy(bArrA42, 0, bArr9, length9, 2);
                int length152 = length9 + 2;
                if (!zIsEmpty) {
                    try {
                        byte[] bytes5 = this.J.getBytes("GBK");
                        System.arraycopy(bytes5, 0, bArr9, length152, bytes5.length);
                        length152 += bytes5.length;
                    } catch (Throwable unused4) {
                    }
                }
                int i212 = 2;
                System.arraycopy(fz.a(0, bArr5), 0, bArr9, length152, i212);
                int i222 = length152 + i212;
                byte[] bArr112 = new byte[i212];
                
                bArr112[0] = 0;
                bArr112[1] = 0;
                System.arraycopy(bArr112, 0, bArr9, i222, i212);
                int i232 = i222 + i212;
                byte[] bArr122 = this.H;
                length10 = bArr122 != null ? bArr122.length : 0;
                byte[] bArrA52 = fz.a(length10, (byte[]) null);
                System.arraycopy(bArrA52, 0, bArr9, i232, bArrA52.length);
                int length162 = i232 + bArrA52.length;
                if (length10 > 0) {
                    byte[] bArr15 = this.H;
                    System.arraycopy(bArr15, 0, bArr9, length162, bArr15.length);
                    length162 += this.H.length;
                }
                if (Double.valueOf(fr.a).doubleValue() >= 5.0d) {
                    List<fa> list = this.T;
                    int size4 = list != null ? list.size() : 0;
                    bArr9[length162] = (byte) size4;
                    int i43 = length162 + 1;
                    byte[] bArr16 = new byte[i43];
                    System.arraycopy(bArr9, 0, bArr16, 0, i43);
                    if (size4 > 0) {
                        try {
                            int length40 = i43;
                            for (fa faVar2 : this.T) {
                                if (faVar2.l == 1 || faVar2.l == 3 || faVar2.l == 4) {
                                    byte b7 = (byte) faVar2.l;
                                    if (faVar2.n) {
                                        b7 = (byte) (b7 | 8);
                                    }
                                    bArr9[length40] = b7;
                                    int i44 = length40 + 1;
                                    byte[] bArrA36 = fz.a(faVar2.c, bArr5);
                                    System.arraycopy(bArrA36, 0, bArr9, i44, bArrA36.length);
                                    int length41 = i44 + bArrA36.length;
                                    byte[] bArrB12 = fz.b(faVar2.d, bArr2);
                                    System.arraycopy(bArrB12, 0, bArr9, length41, bArrB12.length);
                                    length40 = length41 + bArrB12.length;
                                } else if (faVar2.l == 2) {
                                    byte b8 = (byte) faVar2.l;
                                    if (faVar2.n) {
                                        b8 = (byte) (b8 | 8);
                                    }
                                    bArr9[length40] = b8;
                                    int i45 = length40 + 1;
                                    byte[] bArrA37 = fz.a(faVar2.h, bArr5);
                                    System.arraycopy(bArrA37, 0, bArr9, i45, bArrA37.length);
                                    int length42 = i45 + bArrA37.length;
                                    byte[] bArrA38 = fz.a(faVar2.i, bArr5);
                                    System.arraycopy(bArrA38, 0, bArr9, length42, bArrA38.length);
                                    int length43 = length42 + bArrA38.length;
                                    byte[] bArrA39 = fz.a(faVar2.j, bArr5);
                                    System.arraycopy(bArrA39, 0, bArr9, length43, bArrA39.length);
                                    length40 = length43 + bArrA39.length;
                                } else if (faVar2.l == 5) {
                                    byte b9 = (byte) faVar2.l;
                                    if (faVar2.n) {
                                        b9 = (byte) (b9 | 8);
                                    }
                                    bArr9[length40] = b9;
                                    int i46 = length40 + 1;
                                    byte[] bArrA40 = fz.a(faVar2.c, bArr5);
                                    System.arraycopy(bArrA40, 0, bArr9, i46, bArrA40.length);
                                    int length44 = i46 + bArrA40.length;
                                    System.arraycopy(fz.a(faVar2.e), 0, bArr9, length44, 8);
                                    length40 = length44 + 8;
                                }
                                byte[] bArrA41 = fz.a((short) ((fz.b() - faVar2.t) / 1000), bArr5);
                                System.arraycopy(bArrA41, 0, bArr9, length40, bArrA41.length);
                                length40 += bArrA41.length;
                            }
                            i43 = length40;
                        } catch (Throwable unused5) {
                            System.arraycopy(bArr16, 0, bArr9, 0, i43);
                            bArr9[i43 - 1] = 0;
                        }
                    }
                    length162 = a(this.M, bArr9, i43);
                }
                if (Double.valueOf(fr.a).doubleValue() >= 5.2d) {
                    List<fc> list2 = this.S;
                    int size5 = list2 == null ? 0 : list2.size();
                    bArr9[length162] = (byte) size5;
                    length162++;
                    if (size5 > 0) {
                        for (fc fcVar : this.S) {
                            int iCurrentTimeMillis = ((int) (System.currentTimeMillis() - fcVar.d)) / 1000;
                            if (iCurrentTimeMillis > 65535) {
                                iCurrentTimeMillis = 65535;
                            }
                            System.arraycopy(fz.a(iCurrentTimeMillis, bArr5), 0, bArr9, length162, 2);
                            int i47 = length162 + 2;
                            System.arraycopy(fz.b((int) Math.round(fcVar.c * 1.0E7d), bArr2), 0, bArr9, i47, 4);
                            int i48 = i47 + 4;
                            System.arraycopy(fz.b((int) Math.round(fcVar.b * 1.0E7d), bArr2), 0, bArr9, i48, 4);
                            int i49 = i48 + 4;
                            float f = fcVar.e;
                            if (f > 65535.0f) {
                                f = 65535.0f;
                            }
                            System.arraycopy(fz.a((int) f, bArr5), 0, bArr9, i49, 2);
                            int i50 = i49 + 2;
                            System.arraycopy(fz.a((short) ((fcVar.h | (fcVar.a << 13) | (fcVar.g << 6)) & 65535), bArr5), 0, bArr9, i50, 2);
                            length162 = i50 + 2;
                        }
                    }
                }
                if (Double.valueOf(fr.a).doubleValue() >= 5.3d) {
                    length162 = a(this.N, bArr9, length162);
                }
                byte[] bArr132 = new byte[length162];
                System.arraycopy(bArr9, 0, bArr132, 0, length162);
                CRC32 crc322 = new CRC32();
                crc322.update(bArr132);
                byte[] bArrA62 = fz.a(crc322.getValue());
                byte[] bArr142 = new byte[length162 + 8];
                System.arraycopy(bArr132, 0, bArr142, 0, length162);
                System.arraycopy(bArrA62, 0, bArr142, length162, 8);
                return bArr142;
            }
            bArr9[i202] = 0;
            i192 = 1;
        }
        length9 = i202 + i192;
        byte[] bArrA422 = {0, 0};
        zIsEmpty = TextUtils.isEmpty(this.J);
        if (!zIsEmpty) {
        }
        System.arraycopy(bArrA422, 0, bArr9, length9, 2);
        int length1522 = length9 + 2;
        if (!zIsEmpty) {
        }
        int i2122 = 2;
        System.arraycopy(fz.a(0, bArr5), 0, bArr9, length1522, i2122);
        int i2222 = length1522 + i2122;
        byte[] bArr1122 = new byte[i2122];
        
        bArr1122[0] = 0;
        bArr1122[1] = 0;
        System.arraycopy(bArr1122, 0, bArr9, i2222, i2122);
        int i2322 = i2222 + i2122;
        byte[] bArr1222 = this.H;
        if (bArr1222 != null) {
        }
        byte[] bArrA522 = fz.a(length10, (byte[]) null);
        System.arraycopy(bArrA522, 0, bArr9, i2322, bArrA522.length);
        int length1622 = i2322 + bArrA522.length;
        if (length10 > 0) {
        }
        if (Double.valueOf(fr.a).doubleValue() >= 5.0d) {
        }
        if (Double.valueOf(fr.a).doubleValue() >= 5.2d) {
        }
        if (Double.valueOf(fr.a).doubleValue() >= 5.3d) {
        }
        byte[] bArr1322 = new byte[length1622];
        System.arraycopy(bArr9, 0, bArr1322, 0, length1622);
        CRC32 crc3222 = new CRC32();
        crc3222.update(bArr1322);
        byte[] bArrA622 = fz.a(crc3222.getValue());
        byte[] bArr1422 = new byte[length1622 + 8];
        System.arraycopy(bArr1322, 0, bArr1422, 0, length1622);
        System.arraycopy(bArrA622, 0, bArr1422, length1622, 8);
        return bArr1422;
    }
}
