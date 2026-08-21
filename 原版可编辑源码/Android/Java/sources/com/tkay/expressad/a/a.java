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

public final class a {
    public static final String a = "Tkay SDK M";
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
            if (!com.tkay.expressad.b.a) {
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
        new Handler(Looper.getMainLooper()).post(new Runnable() {
            @Override
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
    */
    private boolean a(com.tkay.expressad.foundation.d.c cVar, c.b bVar, boolean z, int i) {
        boolean z2 = false;
        if (z) {
            try {
                int i2 = Integer.parseInt(cVar.ac());
                if (i2 == 1) {
                    s.a(this.j, bVar.j(), this.m);
                } else if (i2 == 2) {
                    s.a(this.j, bVar.j(), cVar, this.m);
                } else {
                    if (cVar.ba() != null) {
                        if (!s.a.a(this.j, BaseConstants.MARKET_PREFIX + cVar.ba(), this.m)) {
                            a(i, bVar.j(), cVar, this.m);
                        }
                    } else {
                        a(i, bVar.j(), cVar, this.m);
                    }
                    if (z2) {
                        b(bVar, cVar, true);
                        if (this.m != null) {
                            this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                        }
                    } else {
                        b(bVar, cVar, true);
                        if (this.m != null && z) {
                            this.m.b(cVar, bVar.j());
                        }
                    }
                }
                z2 = true;
                if (z2) {
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        } else if (z2) {
        }
        return z2;
    }

    /* JADX WARN: Removed duplicated region for block: B:10:0x0023 A[Catch: all -> 0x0031, TryCatch #0 {all -> 0x0031, blocks: (B:4:0x0004, B:5:0x0010, B:7:0x0015, B:9:0x0019, B:10:0x0023, B:12:0x0027), top: B:17:0x0004 }] */
    /* JADX WARN: Removed duplicated region for block: B:7:0x0015 A[Catch: all -> 0x0031, TryCatch #0 {all -> 0x0031, blocks: (B:4:0x0004, B:5:0x0010, B:7:0x0015, B:9:0x0019, B:10:0x0023, B:12:0x0027), top: B:17:0x0004 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private boolean a(com.tkay.expressad.foundation.d.c cVar, c.b bVar, boolean z) {
        boolean z2 = false;
        if (z) {
            try {
                s.a(this.j, cVar.ad(), this.m);
                z2 = true;
                b(bVar, cVar, true);
                if (!z2) {
                    if (this.m != null) {
                        this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                    }
                } else if (this.m != null) {
                    this.m.b(cVar, bVar.j());
                }
            } catch (Throwable th) {
                th.getMessage();
            }
        } else {
            b(bVar, cVar, true);
            if (!z2) {
            }
        }
        return z2;
    }

    /* JADX WARN: Removed duplicated region for block: B:39:0x00af A[Catch: Exception -> 0x0151, TryCatch #0 {Exception -> 0x0151, blocks: (B:2:0x0000, B:9:0x000c, B:12:0x0022, B:14:0x0028, B:17:0x0032, B:19:0x0036, B:21:0x0048, B:24:0x0054, B:26:0x005e, B:28:0x0068, B:31:0x0078, B:39:0x00af, B:40:0x00b8, B:43:0x00be, B:63:0x0119, B:65:0x0127, B:67:0x012f, B:71:0x0137, B:66:0x012c, B:35:0x0089, B:37:0x0093, B:46:0x00cc, B:47:0x00d7, B:50:0x00dd, B:52:0x00e9, B:54:0x00ef, B:56:0x00f3, B:58:0x00f9, B:60:0x0101, B:62:0x0110, B:74:0x0143, B:76:0x014a), top: B:81:0x0000 }] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void a(com.tkay.expressad.foundation.d.c cVar, c.b bVar, boolean z, boolean z2) {
        try {
            if (this.q) {
                if (cVar != null && bVar != null) {
                    int i = i();
                    int i2 = bVar.i();
                    if (TextUtils.isEmpty(bVar.j()) && z) {
                        int iQ = cVar.Q();
                        if (iQ == 2) {
                            a(cVar, bVar, z, i());
                            return;
                        }
                        if (iQ == 3) {
                            a(cVar, bVar, z);
                            return;
                        }
                        s.a(this.j, cVar.ad(), this.m);
                        b(bVar, cVar, true);
                        if (this.m != null) {
                            this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                            return;
                        }
                        return;
                    }
                    if (i2 == 1) {
                        if (!TextUtils.isEmpty(cVar.ba()) && !TextUtils.isEmpty(bVar.j()) && bVar.j().contains(cVar.ba()) && z) {
                            if (!s.a.a(this.j, bVar.j(), this.m)) {
                                a(i, bVar.j(), cVar, this.m);
                            }
                            if (this.m != null) {
                                this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                            }
                        } else {
                            if (z) {
                                if (!TextUtils.isEmpty(cVar.ba())) {
                                    if (!s.a.a(this.j, BaseConstants.MARKET_PREFIX + cVar.ba(), this.m)) {
                                        a(i, bVar.j(), cVar, this.m);
                                    }
                                }
                            }
                            if (this.m != null && z) {
                                this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                            }
                        }
                    } else if (i2 == 3) {
                        if (z) {
                            s.a(this.j, bVar.j(), this.m);
                        }
                        if (this.m != null && z) {
                            this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                        }
                    } else if (z) {
                        if (3 == cVar.Q()) {
                            a(cVar, bVar, z);
                            return;
                        } else if (2 == cVar.Q()) {
                            a(cVar, bVar, z, i());
                            return;
                        } else {
                            s.a(this.j, bVar.j(), this.m);
                            if (this.m != null) {
                                this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                            }
                        }
                    }
                    if (a(cVar.Q(), bVar.j())) {
                        b(bVar, cVar, false);
                    } else {
                        b(bVar, cVar, true);
                    }
                    if (this.m == null || z || !z2) {
                        return;
                    }
                    this.m.a((com.tkay.expressad.out.d) cVar, bVar.j());
                    return;
                }
                if (z) {
                    b(bVar, cVar, true);
                    if (this.m != null) {
                        this.m.b(null, null);
                    }
                }
            }
        } catch (Exception e2) {
            e2.printStackTrace();
        }
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
    */
    private static boolean a(int i, String str) {
        boolean z = true;
        try {
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        if (i == 2) {
            if (!s.a.a(str)) {
                z = false;
            }
        } else if (TextUtils.isEmpty(str)) {
        }
        return z;
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

    static void a(a aVar) {
        try {
            Intent intent = new Intent();
            intent.setAction("ExitApp");
            com.tkay.core.common.b.j.a(aVar.j).a(intent);
        } catch (Exception unused) {
        }
    }
}
