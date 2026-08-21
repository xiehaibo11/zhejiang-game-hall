package com.loc;

import android.content.Context;
import android.content.SharedPreferences;
import android.text.TextUtils;
import java.net.URL;
import java.util.ArrayList;
import org.json.JSONArray;
import org.json.JSONException;

/* JADX INFO: compiled from: AMapDnsManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class fk {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f2977a = 1;
    public static int b = 2;
    private static fk e;
    private Context j;
    private String k;
    private long c = 0;
    private boolean d = false;
    private ArrayList<String> f = new ArrayList<>();
    private et g = new et();
    private et h = new et();
    private long i = 120000;
    private boolean l = false;

    private fk(Context context) {
        this.j = context;
    }

    public static synchronized fk a(Context context) {
        if (e == null) {
            e = new fk(context);
        }
        return e;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public et b(int i) {
        return i == b ? this.h : this.g;
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0017 A[Catch: all -> 0x0090, TRY_LEAVE, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0009, B:10:0x000f, B:12:0x0017, B:17:0x0027, B:22:0x0033, B:24:0x004d, B:25:0x0082), top: B:31:0x0003 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x004d A[Catch: all -> 0x0090, LOOP:0: B:23:0x004b->B:24:0x004d, LOOP_END, TryCatch #0 {, blocks: (B:4:0x0003, B:6:0x0009, B:10:0x000f, B:12:0x0017, B:17:0x0027, B:22:0x0033, B:24:0x004d, B:25:0x0082), top: B:31:0x0003 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private synchronized void b(boolean r7, final int r8) {
        /*
            r6 = this;
            monitor-enter(r6)
            if (r7 != 0) goto Lf
            boolean r7 = com.loc.fq.p()     // Catch: java.lang.Throwable -> L90
            if (r7 != 0) goto Lf
            boolean r7 = r6.l     // Catch: java.lang.Throwable -> L90
            if (r7 == 0) goto Lf
            monitor-exit(r6)
            return
        Lf:
            long r0 = r6.c     // Catch: java.lang.Throwable -> L90
            r2 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 == 0) goto L33
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L90
            long r2 = r6.c     // Catch: java.lang.Throwable -> L90
            long r2 = r0 - r2
            long r4 = r6.i     // Catch: java.lang.Throwable -> L90
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 >= 0) goto L27
            monitor-exit(r6)
            return
        L27:
            long r2 = r6.c     // Catch: java.lang.Throwable -> L90
            long r0 = r0 - r2
            r2 = 60000(0xea60, double:2.9644E-319)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L33
            monitor-exit(r6)
            return
        L33:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L90
            r6.c = r0     // Catch: java.lang.Throwable -> L90
            r7 = 1
            r6.l = r7     // Catch: java.lang.Throwable -> L90
            java.lang.Thread r7 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L90
            java.lang.StackTraceElement[] r7 = r7.getStackTrace()     // Catch: java.lang.Throwable -> L90
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L90
            r0.<init>()     // Catch: java.lang.Throwable -> L90
            int r1 = r7.length     // Catch: java.lang.Throwable -> L90
            r2 = 0
        L4b:
            if (r2 >= r1) goto L82
            r3 = r7[r2]     // Catch: java.lang.Throwable -> L90
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r4.<init>()     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r3.getClassName()     // Catch: java.lang.Throwable -> L90
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = "("
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r3.getMethodName()     // Catch: java.lang.Throwable -> L90
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = ":"
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            int r3 = r3.getLineNumber()     // Catch: java.lang.Throwable -> L90
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = "),"
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L90
            r0.append(r3)     // Catch: java.lang.Throwable -> L90
            int r2 = r2 + 1
            goto L4b
        L82:
            com.loc.cr r7 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L90
            com.loc.fk$1 r0 = new com.loc.fk$1     // Catch: java.lang.Throwable -> L90
            r0.<init>()     // Catch: java.lang.Throwable -> L90
            r7.b(r0)     // Catch: java.lang.Throwable -> L90
            monitor-exit(r6)
            return
        L90:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
        */
        throw new UnsupportedOperationException("Method not decompiled: com.loc.fk.b(boolean, int):void");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static boolean b(String[] strArr, String[] strArr2) {
        if (strArr == null || strArr.length == 0 || strArr2 == null || strArr2.length == 0 || strArr.length != strArr2.length) {
            return false;
        }
        int length = strArr.length;
        for (int i = 0; i < length; i++) {
            if (!strArr[i].equals(strArr2[i])) {
                return false;
            }
        }
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static String[] b(JSONArray jSONArray, int i) throws JSONException {
        if (jSONArray == null || jSONArray.length() == 0) {
            return new String[0];
        }
        int length = jSONArray.length();
        String[] strArr = new String[length];
        for (int i2 = 0; i2 < length; i2++) {
            String string = jSONArray.getString(i2);
            if (!TextUtils.isEmpty(string)) {
                if (i == b) {
                    string = "[" + string + "]";
                }
                strArr[i2] = string;
            }
        }
        return strArr;
    }

    private static String c(int i) {
        return i == b ? "last_ip_6" : "last_ip_4";
    }

    private void d(int i) {
        if (b(i).d()) {
            SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
            fy.a(editorA, c(i));
            fy.a(editorA);
            b(i).a(false);
        }
    }

    private String e(int i) {
        String str;
        int i2 = 0;
        b(false, i);
        String[] strArrA = b(i).a();
        if (strArrA == null || strArrA.length <= 0) {
            g(i);
            return b(i).b();
        }
        int length = strArrA.length;
        while (true) {
            if (i2 >= length) {
                str = null;
                break;
            }
            str = strArrA[i2];
            if (!this.f.contains(str)) {
                break;
            }
            i2++;
        }
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        b(i).a(str);
        return str;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f(int i) {
        if (b(i).a() == null || b(i).a().length <= 0) {
            return;
        }
        String str = b(i).a()[0];
        if (str.equals(this.k) || this.f.contains(str)) {
            return;
        }
        this.k = str;
        SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
        fy.a(editorA, c(i), str);
        fy.a(editorA);
    }

    private void g(int i) {
        String strA = fy.a(this.j, "cbG9jaXA", c(i), (String) null);
        if (TextUtils.isEmpty(strA) || this.f.contains(strA)) {
            return;
        }
        b(i).a(strA);
        b(i).b(strA);
        b(i).a(true);
    }

    public final String a(fn fnVar, int i) {
        try {
            if (fq.q() && fnVar != null) {
                String strB = fnVar.b();
                String host = new URL(strB).getHost();
                if (!"http://abroad.apilocate.amap.com/mobile/binary".equals(strB) && !"abroad.apilocate.amap.com".equals(host)) {
                    String str = "apilocate.amap.com".equalsIgnoreCase(host) ? "httpdns.apilocate.amap.com" : host;
                    if (!m.g(str)) {
                        return null;
                    }
                    String strE = e(i);
                    if (!TextUtils.isEmpty(strE)) {
                        fnVar.d(strB.replace(host, strE));
                        fnVar.a().put("host", str);
                        fnVar.e(str);
                        fnVar.a(i == b);
                        return strE;
                    }
                }
            }
        } catch (Throwable unused) {
        }
        return null;
    }

    public final void a(int i) {
        if (b(i).e()) {
            d(i);
            return;
        }
        this.f.add(b(i).b());
        d(i);
        b(true, i);
    }

    public final void a(boolean z, int i) {
        b(i).b(z);
        if (z) {
            String strC = b(i).c();
            String strB = b(i).b();
            if (TextUtils.isEmpty(strB) || strB.equals(strC)) {
                return;
            }
            SharedPreferences.Editor editorA = fy.a(this.j, "cbG9jaXA");
            fy.a(editorA, c(i), strB);
            fy.a(editorA);
        }
    }
}
