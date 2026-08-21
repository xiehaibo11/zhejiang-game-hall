package com.tkay.expressad.a;

import android.content.Context;
import android.content.Intent;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import com.ss.android.download.api.constant.BaseConstants;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.a.c;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.foundation.h.w;
import com.tkay.expressad.out.LoadingActivity;
import com.tkay.expressad.out.j;
import java.net.URLEncoder;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

/* JADX INFO: loaded from: classes3.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final String f6326a = "Tkay SDK M";
    public static boolean b = false;
    public static Map<String, Long> c = new HashMap();
    public static Set<String> d = new HashSet();
    public static final String e = "2";
    private static final int f = 1;
    private String g;
    private long h;
    private com.tkay.expressad.foundation.c.c i;
    private Context j;
    private c k;
    private com.tkay.expressad.out.a l;
    private com.tkay.expressad.d.a n;
    private boolean o;
    private boolean r;
    private j.c m = null;
    private boolean p = false;
    private boolean q = true;

    private static void f() {
    }

    private static void h() {
    }

    public a(Context context, String str) {
        this.i = null;
        this.j = null;
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        this.n = aVarB;
        if (aVarB == null) {
            com.tkay.expressad.d.b.a();
            this.n = com.tkay.expressad.d.b.c();
        }
        this.o = this.n.t();
        Context applicationContext = context.getApplicationContext();
        this.j = applicationContext;
        this.g = str;
        if (this.i == null) {
            this.i = com.tkay.expressad.foundation.c.c.a(applicationContext);
        }
    }

    private void a(String str) {
        this.g = str;
    }

    public final void a(j.c cVar) {
        this.m = cVar;
    }

    private boolean c() {
        return this.q;
    }

    public final void a() {
        this.q = false;
    }

    private com.tkay.expressad.out.a d() {
        return this.l;
    }

    private void a(com.tkay.expressad.out.a aVar) {
        this.l = aVar;
    }

    private com.tkay.expressad.foundation.c.c e() {
        return this.i;
    }

    public final void b() {
        try {
            this.m = null;
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void g() {
        c cVar = this.k;
        if (cVar == null || !cVar.a()) {
            return;
        }
        this.k.b();
    }

    private static boolean a(com.tkay.expressad.foundation.d.c cVar) {
        Long l;
        if (cVar == null) {
            return true;
        }
        try {
            if (2 != cVar.Q() && 3 != cVar.Q()) {
                return true;
            }
            String strAZ = cVar.aZ();
            if (c == null) {
                return true;
            }
            if (c.containsKey(strAZ) && (l = c.get(strAZ)) != null) {
                if (l.longValue() > System.currentTimeMillis() || d.contains(cVar.aZ())) {
                    return false;
                }
            }
            c.put(cVar.aZ(), Long.valueOf(System.currentTimeMillis() + ((long) (cVar.Y() * 1000))));
            return true;
        } catch (Exception e2) {
            if (!com.tkay.expressad.b.f6449a) {
                return true;
            }
            e2.printStackTrace();
            return true;
        }
    }

    private void a(com.tkay.expressad.foundation.d.c cVar, String str) {
        if (TextUtils.isEmpty(str)) {
            return;
        }
        a(this.j, cVar, this.g, str, true, false, com.tkay.expressad.a.a.a.k);
    }

    public static void a(Context context, com.tkay.expressad.foundation.d.c cVar, String str, String str2, boolean z) {
        if (context == null) {
            return;
        }
        new c(context.getApplicationContext()).a("2", str, cVar, null, str2, false, z, com.tkay.expressad.a.a.a.h);
    }

    public static void a(Context context, com.tkay.expressad.foundation.d.c cVar, String str, String str2, boolean z, boolean z2, int i) {
        if (context == null) {
            return;
        }
        new c(context.getApplicationContext()).a("2", str, cVar, null, str2, z, z2, i);
    }

    public static void a(Context context, com.tkay.expressad.foundation.d.c cVar, String str, String[] strArr, boolean z) {
        if (context == null || cVar == null || TextUtils.isEmpty(str) || strArr == null) {
            return;
        }
        c cVar2 = new c(context.getApplicationContext());
        for (String str2 : strArr) {
            cVar2.a("2", str, cVar, null, str2, false, z, com.tkay.expressad.a.a.a.h);
        }
    }

    private void a(final boolean z, final com.tkay.expressad.out.d dVar) {
        new Handler(Looper.getMainLooper()).post(new Runnable() { // from class: com.tkay.expressad.a.a.1
            @Override // java.lang.Runnable
            public final void run() {
                if (z && !a.b && com.tkay.expressad.b.o) {
                    a.a(a.this);
                }
                if (a.this.m == null || a.b || !com.tkay.expressad.b.o) {
                    return;
                }
                a.this.m.b(dVar);
            }
        });
    }

    private void a(c.b bVar, com.tkay.expressad.foundation.d.c cVar, boolean z) {
        if (cVar == null || bVar == null) {
            return;
        }
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.h;
            com.tkay.expressad.foundation.d.f fVar = new com.tkay.expressad.foundation.d.f();
            fVar.i(cVar.aa());
            fVar.a();
            fVar.h(String.valueOf(jCurrentTimeMillis));
            fVar.g(cVar.aZ());
            fVar.d(bVar.c());
            if (!TextUtils.isEmpty(bVar.j())) {
                fVar.f(URLEncoder.encode(bVar.j(), "utf-8"));
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.h / 1000);
            fVar.b(sb.toString());
            fVar.a(Integer.parseInt(cVar.ac()));
            fVar.b(cVar.Q());
            fVar.a(this.g);
            fVar.d(bVar.c());
            if (!TextUtils.isEmpty(bVar.j())) {
                fVar.f(URLEncoder.encode(bVar.j(), "utf-8"));
            }
            if (this.o) {
                fVar.c(bVar.a());
                if (!TextUtils.isEmpty(bVar.d())) {
                    fVar.d(URLEncoder.encode(bVar.d(), "utf-8"));
                }
                if (!TextUtils.isEmpty(bVar.f())) {
                    fVar.e(URLEncoder.encode(bVar.f(), "UTF-8"));
                }
                if (!TextUtils.isEmpty(bVar.e())) {
                    fVar.c(URLEncoder.encode(bVar.e(), "utf-8"));
                }
            }
            if (z) {
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(fVar);
            w.b(com.tkay.expressad.foundation.d.f.a(arrayList));
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    private void a(com.tkay.expressad.out.d dVar, String str) {
        try {
            if (!TextUtils.isEmpty(str) && dVar != null) {
                com.tkay.expressad.foundation.d.c cVar = dVar instanceof com.tkay.expressad.foundation.d.c ? (com.tkay.expressad.foundation.d.c) dVar : null;
                if ((!str.startsWith("market://") && !str.startsWith("https://play.google.com/")) || s.a.a(this.j, str, this.m) || cVar == null) {
                    return;
                }
                if (!TextUtils.isEmpty(cVar.ba())) {
                    s.a.a(this.j, BaseConstants.MARKET_PREFIX + cVar.ba(), this.m);
                    return;
                }
                if (i() == 2) {
                    s.a(this.j, cVar.ad(), cVar, this.m);
                } else {
                    s.a(this.j, cVar.ad(), this.m);
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
    }

    private void a(int i, String str, com.tkay.expressad.foundation.d.c cVar, j.c cVar2) {
        try {
            if (TextUtils.isEmpty(str)) {
                return;
            }
            if (i == 2) {
                s.a(this.j, str, cVar, cVar2);
            } else {
                s.a(this.j, str, cVar2);
            }
        } catch (Throwable th) {
            th.getMessage();
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x0065 A[Catch: all -> 0x0061, TryCatch #0 {all -> 0x0061, blocks: (B:4:0x0004, B:6:0x000e, B:10:0x001e, B:11:0x002a, B:13:0x0030, B:16:0x004d, B:17:0x0057, B:21:0x0065, B:23:0x006c, B:24:0x0076, B:27:0x007f), top: B:31:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:24:0x0076 A[Catch: all -> 0x0061, TryCatch #0 {all -> 0x0061, blocks: (B:4:0x0004, B:6:0x000e, B:10:0x001e, B:11:0x002a, B:13:0x0030, B:16:0x004d, B:17:0x0057, B:21:0x0065, B:23:0x006c, B:24:0x0076, B:27:0x007f), top: B:31:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(com.tkay.expressad.foundation.d.c r6, com.tkay.expressad.a.c.b r7, boolean r8, int r9) {
        /*
            r5 = this;
            r0 = 0
            r1 = 1
            if (r8 == 0) goto L63
            java.lang.String r2 = r6.ac()     // Catch: java.lang.Throwable -> L61
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L61
            if (r2 != r1) goto L1b
            android.content.Context r9 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.h.s.a(r9, r2, r3)     // Catch: java.lang.Throwable -> L61
        L19:
            r0 = r1
            goto L63
        L1b:
            r3 = 2
            if (r2 != r3) goto L2a
            android.content.Context r9 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.h.s.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L19
        L2a:
            java.lang.String r2 = r6.ba()     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L57
            android.content.Context r2 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "market://details?id="
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = r6.ba()     // Catch: java.lang.Throwable -> L61
            r3.append(r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r4 = r5.m     // Catch: java.lang.Throwable -> L61
            boolean r2 = com.tkay.expressad.foundation.h.s.a.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L4d
            goto L19
        L4d:
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            r5.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L63
        L57:
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            r5.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L63
        L61:
            r6 = move-exception
            goto L89
        L63:
            if (r0 == 0) goto L76
            r5.b(r7, r6, r1)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            if (r8 == 0) goto L8c
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            java.lang.String r7 = r7.j()     // Catch: java.lang.Throwable -> L61
            r8.a(r6, r7)     // Catch: java.lang.Throwable -> L61
            goto L8c
        L76:
            r5.b(r7, r6, r1)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r9 = r5.m     // Catch: java.lang.Throwable -> L61
            if (r9 == 0) goto L8c
            if (r8 == 0) goto L8c
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            java.lang.String r7 = r7.j()     // Catch: java.lang.Throwable -> L61
            r8.b(r6, r7)     // Catch: java.lang.Throwable -> L61
            goto L8c
        L89:
            r6.getMessage()
        L8c:
            return r0
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.a.a.a(com.tkay.expressad.foundation.d.c, com.tkay.expressad.a.c$b, boolean, int):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0023 A[Catch: all -> 0x0031, TryCatch #0 {all -> 0x0031, blocks: (B:4:0x0004, B:5:0x0010, B:7:0x0015, B:9:0x0019, B:10:0x0023, B:12:0x0027), top: B:17:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0015 A[Catch: all -> 0x0031, TryCatch #0 {all -> 0x0031, blocks: (B:4:0x0004, B:5:0x0010, B:7:0x0015, B:9:0x0019, B:10:0x0023, B:12:0x0027), top: B:17:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private boolean a(com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.a.c.b r6, boolean r7) {
        /*
            r4 = this;
            r0 = 1
            r1 = 0
            if (r7 == 0) goto L10
            android.content.Context r7 = r4.j     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = r5.ad()     // Catch: java.lang.Throwable -> L31
            com.tkay.expressad.out.j$c r3 = r4.m     // Catch: java.lang.Throwable -> L31
            com.tkay.expressad.foundation.h.s.a(r7, r2, r3)     // Catch: java.lang.Throwable -> L31
            r1 = r0
        L10:
            r4.b(r6, r5, r0)     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L23
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L35
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            java.lang.String r6 = r6.j()     // Catch: java.lang.Throwable -> L31
            r7.a(r5, r6)     // Catch: java.lang.Throwable -> L31
            goto L35
        L23:
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L35
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            java.lang.String r6 = r6.j()     // Catch: java.lang.Throwable -> L31
            r7.b(r5, r6)     // Catch: java.lang.Throwable -> L31
            goto L35
        L31:
            r5 = move-exception
            r5.getMessage()
        L35:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.a.a.a(com.tkay.expressad.foundation.d.c, com.tkay.expressad.a.c$b, boolean):boolean");
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00af A[Catch: Exception -> 0x0151, TryCatch #0 {Exception -> 0x0151, blocks: (B:2:0x0000, B:9:0x000c, B:12:0x0022, B:14:0x0028, B:17:0x0032, B:19:0x0036, B:21:0x0048, B:24:0x0054, B:26:0x005e, B:28:0x0068, B:31:0x0078, B:39:0x00af, B:40:0x00b8, B:43:0x00be, B:63:0x0119, B:65:0x0127, B:67:0x012f, B:71:0x0137, B:66:0x012c, B:35:0x0089, B:37:0x0093, B:46:0x00cc, B:47:0x00d7, B:50:0x00dd, B:52:0x00e9, B:54:0x00ef, B:56:0x00f3, B:58:0x00f9, B:60:0x0101, B:62:0x0110, B:74:0x0143, B:76:0x014a), top: B:81:0x0000 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(com.tkay.expressad.foundation.d.c r7, com.tkay.expressad.a.c.b r8, boolean r9, boolean r10) {
        /*
            Method dump skipped, instruction units count: 342
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.a.a.a(com.tkay.expressad.foundation.d.c, com.tkay.expressad.a.c$b, boolean, boolean):void");
    }

    private int i() {
        try {
            if (this.n != null) {
                return this.n.k();
            }
            return 1;
        } catch (Exception e2) {
            e2.printStackTrace();
            return 1;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:12:0x0017  */
    /* JADX WARN: Unsupported multi-entry loop pattern (BACK_EDGE: B:12:0x0017 -> B:14:0x0018). Please report as a decompilation issue!!! */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private static boolean a(int r3, java.lang.String r4) {
        /*
            r0 = 2
            r1 = 1
            r2 = 0
            if (r3 != r0) goto Lc
            boolean r3 = com.tkay.expressad.foundation.h.s.a.a(r4)     // Catch: java.lang.Exception -> L13
            if (r3 == 0) goto L17
            goto L18
        Lc:
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L13
            if (r3 != 0) goto L17
            goto L18
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            r1 = r2
        L18:
            return r1
        */
        throw new UnsupportedOperationException("Method not decompiled: com.tkay.expressad.a.a.a(int, java.lang.String):boolean");
    }

    private void b(com.tkay.expressad.foundation.d.c cVar) {
        try {
            Intent intent = new Intent(this.j, (Class<?>) LoadingActivity.class);
            intent.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
            intent.putExtra("icon_url", cVar.bd());
            this.j.startActivity(intent);
        } catch (Exception unused) {
        }
    }

    private void j() {
        try {
            Intent intent = new Intent();
            intent.setAction("ExitApp");
            com.tkay.core.common.b.j.a(this.j).a(intent);
        } catch (Exception unused) {
        }
    }

    private void b(c.b bVar, com.tkay.expressad.foundation.d.c cVar, boolean z) {
        if (cVar == null || bVar == null) {
            return;
        }
        try {
            long jCurrentTimeMillis = System.currentTimeMillis() - this.h;
            com.tkay.expressad.foundation.d.f fVar = new com.tkay.expressad.foundation.d.f();
            fVar.i(cVar.aa());
            fVar.a();
            fVar.h(String.valueOf(jCurrentTimeMillis));
            fVar.g(cVar.aZ());
            fVar.d(bVar.c());
            if (!TextUtils.isEmpty(bVar.j())) {
                fVar.f(URLEncoder.encode(bVar.j(), "utf-8"));
            }
            StringBuilder sb = new StringBuilder();
            sb.append(this.h / 1000);
            fVar.b(sb.toString());
            fVar.a(Integer.parseInt(cVar.ac()));
            fVar.b(cVar.Q());
            fVar.a(this.g);
            fVar.d(bVar.c());
            if (!TextUtils.isEmpty(bVar.j())) {
                fVar.f(URLEncoder.encode(bVar.j(), "utf-8"));
            }
            if (this.o) {
                fVar.c(bVar.a());
                if (!TextUtils.isEmpty(bVar.d())) {
                    fVar.d(URLEncoder.encode(bVar.d(), "utf-8"));
                }
                if (!TextUtils.isEmpty(bVar.f())) {
                    fVar.e(URLEncoder.encode(bVar.f(), "UTF-8"));
                }
                if (!TextUtils.isEmpty(bVar.e())) {
                    fVar.c(URLEncoder.encode(bVar.e(), "utf-8"));
                }
            }
            if (z) {
                return;
            }
            ArrayList arrayList = new ArrayList();
            arrayList.add(fVar);
            w.b(com.tkay.expressad.foundation.d.f.a(arrayList));
        } catch (Throwable th) {
            th.printStackTrace();
        }
    }

    static /* synthetic */ void a(a aVar) {
        try {
            Intent intent = new Intent();
            intent.setAction("ExitApp");
            com.tkay.core.common.b.j.a(aVar.j).a(intent);
        } catch (Exception unused) {
        }
    }
}
