package com.loc;

import android.content.ContentResolver;
import android.content.Context;
import android.net.ConnectivityManager;
import android.net.wifi.WifiInfo;
import android.net.wifi.WifiManager;
import android.os.Build;
import android.os.Handler;
import android.text.TextUtils;
import java.util.ArrayList;
import java.util.Collections;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Locale;
import java.util.TreeMap;

/* JADX INFO: compiled from: WifiManagerWrapper.java */
/* JADX INFO: loaded from: classes2.dex */
public final class ff {
    static long d;
    static long e;
    static long f;
    public static long g;
    static long h;
    private es E;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    WifiManager f2972a;
    Context i;
    fe t;
    public static HashMap<String, Long> w = new HashMap<>(36);
    public static long x = 0;
    static int y = 0;
    public static long A = 0;
    ArrayList<eg> b = new ArrayList<>();
    ArrayList<eg> c = new ArrayList<>();
    boolean j = false;
    StringBuilder k = null;
    boolean l = true;
    boolean m = true;
    boolean n = true;
    private volatile WifiInfo C = null;
    String o = null;
    TreeMap<Integer, eg> p = null;
    public boolean q = true;
    public boolean r = true;
    public boolean s = false;
    String u = "";
    long v = 0;
    ConnectivityManager z = null;
    private long D = 30000;
    volatile boolean B = false;

    public ff(Context context, WifiManager wifiManager, Handler handler) {
        this.f2972a = wifiManager;
        this.i = context;
        fe feVar = new fe(context, "wifiAgee", handler);
        this.t = feVar;
        feVar.a();
    }

    private void A() {
        try {
            if (fz.c(this.i, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF")) {
                this.r = this.f2972a.isWifiEnabled();
            }
        } catch (Throwable unused) {
            ft.b();
        }
    }

    private boolean B() {
        this.q = v();
        A();
        if (this.q && this.l) {
            if (f == 0) {
                return true;
            }
            if (fz.b() - f >= 4900 && fz.b() - g >= 1500) {
                int i = ((fz.b() - g) > 4900L ? 1 : ((fz.b() - g) == 4900L ? 0 : -1));
                return true;
            }
        }
        return false;
    }

    private static boolean a(int i) {
        int iCalculateSignalLevel = 20;
        try {
            iCalculateSignalLevel = WifiManager.calculateSignalLevel(i, 20);
        } catch (ArithmeticException e2) {
            fr.a(e2, "Aps", "wifiSigFine");
        }
        return iCalculateSignalLevel > 0;
    }

    public static boolean a(WifiInfo wifiInfo) {
        return (wifiInfo == null || TextUtils.isEmpty(wifiInfo.getSSID()) || !fz.a(wifiInfo.getBSSID())) ? false : true;
    }

    public static long b() {
        return ((fz.b() - x) / 1000) + 1;
    }

    private void d(boolean z) {
        String strValueOf;
        ArrayList<eg> arrayList = this.b;
        if (arrayList == null || arrayList.isEmpty()) {
            return;
        }
        if (fz.b() - g > 3600000) {
            g();
        }
        if (this.p == null) {
            this.p = new TreeMap<>(Collections.reverseOrder());
        }
        this.p.clear();
        if (this.s && z) {
            try {
                this.c.clear();
            } catch (Throwable unused) {
            }
        }
        int size = this.b.size();
        this.v = 0L;
        for (int i = 0; i < size; i++) {
            eg egVar = this.b.get(i);
            if (egVar.h) {
                this.v = egVar.f;
            }
            if (fz.a(egVar != null ? eg.a(egVar.f2941a) : "") && (size <= 20 || a(egVar.c))) {
                if (this.s && z) {
                    this.c.add(egVar);
                }
                if (!TextUtils.isEmpty(egVar.b)) {
                    strValueOf = "<unknown ssid>".equals(egVar.b) ? "unkwn" : String.valueOf(i);
                    this.p.put(Integer.valueOf((egVar.c * 25) + i), egVar);
                }
                egVar.b = strValueOf;
                this.p.put(Integer.valueOf((egVar.c * 25) + i), egVar);
            }
        }
        this.b.clear();
        Iterator<eg> it = this.p.values().iterator();
        while (it.hasNext()) {
            this.b.add(it.next());
        }
        this.p.clear();
    }

    public static String p() {
        return String.valueOf(fz.b() - g);
    }

    /* JADX WARN: Removed duplicated region for block: B:25:0x0087 A[Catch: all -> 0x0103, SecurityException -> 0x010e, TryCatch #2 {SecurityException -> 0x010e, all -> 0x0103, blocks: (B:4:0x0005, B:6:0x000f, B:8:0x0025, B:10:0x002b, B:12:0x0034, B:13:0x0038, B:15:0x003e, B:16:0x0050, B:18:0x0058, B:23:0x006e, B:25:0x0087, B:27:0x0091, B:29:0x0097, B:31:0x009f, B:33:0x00af, B:37:0x00ba, B:39:0x00dc, B:41:0x00ef, B:42:0x00f1, B:43:0x00fd, B:20:0x0060, B:21:0x0066, B:22:0x0069, B:7:0x0016), top: B:50:0x0005 }] */
    /* JADX WARN: Removed duplicated region for block: B:31:0x009f A[Catch: all -> 0x0103, SecurityException -> 0x010e, TryCatch #2 {SecurityException -> 0x010e, all -> 0x0103, blocks: (B:4:0x0005, B:6:0x000f, B:8:0x0025, B:10:0x002b, B:12:0x0034, B:13:0x0038, B:15:0x003e, B:16:0x0050, B:18:0x0058, B:23:0x006e, B:25:0x0087, B:27:0x0091, B:29:0x0097, B:31:0x009f, B:33:0x00af, B:37:0x00ba, B:39:0x00dc, B:41:0x00ef, B:42:0x00f1, B:43:0x00fd, B:20:0x0060, B:21:0x0066, B:22:0x0069, B:7:0x0016), top: B:50:0x0005 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private java.util.List<com.loc.eg> r() {
        /*
            Method dump skipped, instruction units count: 278
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.ff.r():java.util.List");
    }

    private int s() {
        WifiManager wifiManager = this.f2972a;
        if (wifiManager != null) {
            return wifiManager.getWifiState();
        }
        return 4;
    }

    private boolean t() {
        long jB = fz.b() - d;
        if (jB < 4900) {
            return false;
        }
        if (u() && jB < 9900) {
            return false;
        }
        if (y > 1) {
            long jO = this.D;
            if (jO == 30000) {
                jO = fq.o() != -1 ? fq.o() : 30000L;
            }
            if (Build.VERSION.SDK_INT >= 28 && jB < jO) {
                return false;
            }
        }
        if (this.f2972a != null) {
            d = fz.b();
            int i = y;
            if (i < 2) {
                y = i + 1;
            }
            if (fz.c(this.i, "WYW5kcm9pZC5wZXJtaXNzaW9uLkNIQU5HRV9XSUZJX1NUQVRF")) {
                return this.f2972a.startScan();
            }
            fr.a(new Exception("n_cws"), "OPENSDK_WMW", "wfs_n_cws");
        }
        return false;
    }

    private boolean u() {
        if (this.z == null) {
            this.z = (ConnectivityManager) fz.a(this.i, "connectivity");
        }
        return a(this.z);
    }

    private boolean v() {
        if (this.f2972a == null) {
            return false;
        }
        return fz.g(this.i);
    }

    private void w() {
        if (B()) {
            long jB = fz.b();
            if (jB - e >= com.heytap.mcssdk.constant.a.q) {
                this.b.clear();
                h = g;
            }
            x();
            if (jB - e >= com.heytap.mcssdk.constant.a.q) {
                for (int i = 20; i > 0 && g == h; i--) {
                    try {
                        Thread.sleep(150L);
                    } catch (Throwable unused) {
                    }
                }
            }
        }
    }

    private void x() {
        if (B()) {
            try {
                if (t()) {
                    f = fz.b();
                }
            } catch (Throwable th) {
                fr.a(th, "WifiManager", "wifiScan");
            }
        }
    }

    private void y() {
        if (h != g) {
            List<eg> listR = null;
            try {
                listR = r();
            } catch (Throwable th) {
                fr.a(th, "WifiManager", "updateScanResult");
            }
            h = g;
            if (listR == null) {
                this.b.clear();
            } else {
                this.b.clear();
                this.b.addAll(listR);
            }
        }
    }

    private void z() {
        int iS;
        try {
            if (this.f2972a == null) {
                return;
            }
            try {
                iS = s();
            } catch (Throwable th) {
                fr.a(th, "OPENSDK_WMW", "cwsc");
                iS = 4;
            }
            if (this.b == null) {
                this.b = new ArrayList<>();
            }
            if (iS == 0 || iS == 1 || iS == 4) {
                g();
            }
        } catch (Throwable unused) {
        }
    }

    public final ArrayList<eg> a() {
        if (!this.s) {
            return this.c;
        }
        b(true);
        return this.c;
    }

    public final void a(es esVar) {
        this.E = esVar;
    }

    public final void a(boolean z) {
        Context context = this.i;
        if (!fq.n() || !this.n || this.f2972a == null || context == null || !z || fz.c() <= 17) {
            return;
        }
        ContentResolver contentResolver = context.getContentResolver();
        try {
            if (((Integer) fv.a("android.provider.Settings$Global", "getInt", new Object[]{contentResolver, "wifi_scan_always_enabled"}, (Class<?>[]) new Class[]{ContentResolver.class, String.class})).intValue() == 0) {
                fv.a("android.provider.Settings$Global", "putInt", new Object[]{contentResolver, "wifi_scan_always_enabled", 1}, (Class<?>[]) new Class[]{ContentResolver.class, String.class, Integer.TYPE});
            }
        } catch (Throwable th) {
            fr.a(th, "WifiManagerWrapper", "enableWifiAlwaysScan");
        }
    }

    public final void a(boolean z, boolean z2, boolean z3, long j) {
        this.l = z;
        this.m = z2;
        this.n = z3;
        if (j < com.heytap.mcssdk.constant.a.q) {
            this.D = com.heytap.mcssdk.constant.a.q;
        } else {
            this.D = j;
        }
    }

    public final boolean a(ConnectivityManager connectivityManager) {
        try {
            if (fz.a(connectivityManager.getActiveNetworkInfo()) == 1) {
                return a(c());
            }
            return false;
        } catch (Throwable th) {
            fr.a(th, "WifiManagerWrapper", "wifiAccess");
            return false;
        }
    }

    public final void b(boolean z) {
        if (z) {
            w();
        } else {
            x();
        }
        boolean z2 = false;
        if (this.B) {
            this.B = false;
            z();
        }
        y();
        if (fz.b() - g > 20000) {
            this.b.clear();
        }
        e = fz.b();
        if (this.b.isEmpty()) {
            g = fz.b();
            List<eg> listR = r();
            if (listR != null) {
                this.b.addAll(listR);
                z2 = true;
            }
        }
        d(z2);
    }

    public final WifiInfo c() {
        try {
            if (this.f2972a == null) {
                return null;
            }
            if (fz.c(this.i, "EYW5kcm9pZC5wZXJtaXNzaW9uLkFDQ0VTU19XSUZJX1NUQVRF")) {
                return this.f2972a.getConnectionInfo();
            }
            fr.a(new Exception("gci_n_aws"), "OPENSDK_WMW", "gci_n_aws");
            return null;
        } catch (Throwable th) {
            fr.a(th, "WifiManagerWrapper", "getConnectionInfo");
            return null;
        }
    }

    public final void c(boolean z) {
        g();
        this.b.clear();
        this.t.a(z);
    }

    public final String d() {
        return this.o;
    }

    public final ArrayList<eg> e() {
        if (this.b == null) {
            return null;
        }
        ArrayList<eg> arrayList = new ArrayList<>();
        if (!this.b.isEmpty()) {
            arrayList.addAll(this.b);
        }
        return arrayList;
    }

    public final void f() {
        try {
            this.s = true;
            List<eg> listR = r();
            if (listR != null) {
                this.b.clear();
                this.b.addAll(listR);
            }
            d(true);
        } catch (Throwable unused) {
        }
    }

    public final void g() {
        this.C = null;
        this.b.clear();
    }

    public final void h() {
        A = System.currentTimeMillis();
        es esVar = this.E;
        if (esVar != null) {
            esVar.b();
        }
    }

    public final void i() {
        if (this.f2972a != null && fz.b() - g > 4900) {
            g = fz.b();
        }
    }

    public final void j() {
        if (this.f2972a == null) {
            return;
        }
        this.B = true;
    }

    public final boolean k() {
        return this.q;
    }

    public final boolean l() {
        return this.r;
    }

    public final WifiInfo m() {
        this.C = c();
        return this.C;
    }

    public final boolean n() {
        return this.j;
    }

    public final String o() {
        boolean z;
        String str;
        StringBuilder sb = this.k;
        if (sb == null) {
            this.k = new StringBuilder(700);
        } else {
            sb.delete(0, sb.length());
        }
        this.j = false;
        int size = this.b.size();
        int i = 0;
        boolean z2 = false;
        boolean z3 = false;
        while (i < size) {
            String strA = eg.a(this.b.get(i).f2941a);
            if (!this.m && !"<unknown ssid>".equals(this.b.get(i).b)) {
                z2 = true;
            }
            if (TextUtils.isEmpty(this.u) || !this.u.equals(strA)) {
                z = z3;
                str = "nb";
            } else {
                str = "access";
                z = true;
            }
            this.k.append(String.format(Locale.US, "#%s,%s", strA, str));
            i++;
            z3 = z;
        }
        if (this.b.size() == 0) {
            z2 = true;
        }
        if (!this.m && !z2) {
            this.j = true;
        }
        if (!z3 && !TextUtils.isEmpty(this.u)) {
            StringBuilder sb2 = this.k;
            sb2.append("#");
            sb2.append(this.u);
            this.k.append(",access");
        }
        return this.k.toString();
    }

    public final long q() {
        return this.v;
    }
}
