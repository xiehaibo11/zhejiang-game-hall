package com.kuaishou.weapon.p0;

import android.content.Context;
import android.content.pm.PackageInfo;
import android.text.TextUtils;
import com.meizu.cloud.pushsdk.constants.PushConstants;
import java.io.File;
import java.util.HashMap;
import java.util.Timer;
import java.util.TimerTask;

/* JADX INFO: loaded from: classes2.dex */
public class q {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static final int f2785a = 3;
    private static q b = null;
    private static final String g = "1";
    private volatile boolean c = false;
    private dp d;
    private Context e;
    private t f;

    private q(Context context) {
        this.e = context;
        this.d = dp.a(context);
        this.f = t.a(context);
    }

    public static synchronized q a(Context context) {
        try {
            if (b == null) {
                b = new q(context);
            }
        } catch (Exception unused) {
            return null;
        }
        return b;
    }

    private synchronized boolean a(int i, String str, String str2, boolean z, PackageInfo packageInfo) {
        if (z) {
            if (this.f.c(i) != 1) {
                return false;
            }
        }
        s sVarA = this.f.a(i);
        if (sVarA == null) {
            this.f.b(i, -1);
            HashMap map = new HashMap();
            StringBuilder sb = new StringBuilder();
            sb.append(i);
            map.put(PushConstants.URI_PACKAGE_NAME, sb.toString());
            map.put("pv", str);
            map.put("e", cj.m);
            bg.a(this.e, "1002001", map);
            return false;
        }
        if (!dn.a(new File(sVarA.e))) {
            this.f.b(i, -1);
            HashMap map2 = new HashMap();
            StringBuilder sb2 = new StringBuilder();
            sb2.append(i);
            map2.put(PushConstants.URI_PACKAGE_NAME, sb2.toString());
            map2.put("pv", str);
            map2.put("e", cj.n);
            map2.put("l", "CBH");
            bg.a(this.e, "1002001", map2);
            return false;
        }
        if (packageInfo != null) {
            sVarA.r = packageInfo;
        }
        r rVarA = r.a(this.e.getApplicationContext(), true);
        if (rVarA.a(sVarA, false)) {
            s sVarC = rVarA.c(sVarA.e);
            sVarC.b = 1;
            sVarC.p = 1;
            this.f.a(sVarC);
            return true;
        }
        this.f.b(i, -1);
        rVarA.a(sVarA.e);
        HashMap map3 = new HashMap();
        StringBuilder sb3 = new StringBuilder();
        sb3.append(i);
        map3.put(PushConstants.URI_PACKAGE_NAME, sb3.toString());
        map3.put("pv", str);
        map3.put("e", cj.o);
        map3.put("l", "CBH");
        bg.a(this.e, "1002001", map3);
        return false;
    }

    private static void d() {
        try {
            dp dpVarA = dp.a();
            if (dpVarA != null) {
                dpVarA.b("W_S_V", "1");
            }
        } catch (Exception unused) {
        }
    }

    public void a() {
        d();
        b();
    }

    public void a(final String str) {
        try {
            n.a().a(new Runnable() { // from class: com.kuaishou.weapon.p0.q.1
                @Override // java.lang.Runnable
                public void run() {
                    final r rVarA;
                    try {
                        if (TextUtils.isEmpty(str) || (rVarA = r.a(q.this.e.getApplicationContext(), true)) == null) {
                            return;
                        }
                        final s sVarD = rVarA.d(str);
                        if (sVarD == null) {
                            s sVarB = q.this.f.b(str);
                            if (sVarB != null) {
                                q.this.a(str, sVarB.e);
                                return;
                            }
                            return;
                        }
                        new Timer().schedule(new TimerTask() { // from class: com.kuaishou.weapon.p0.q.1.1
                            @Override // java.util.TimerTask, java.lang.Runnable
                            public void run() {
                                rVarA.b(str);
                                q.this.f.a(str);
                                File file = new File(sVarD.e);
                                if (file.exists()) {
                                    file.delete();
                                }
                            }
                        }, 600000L);
                        rVarA.b(str);
                        q.this.f.a(str);
                        File file = new File(sVarD.e);
                        if (file.exists()) {
                            file.delete();
                        }
                    } catch (Throwable unused) {
                    }
                }
            });
        } catch (Throwable unused) {
        }
    }

    public void a(String str, String str2) {
        this.f.a(str);
        File file = new File(str2);
        if (file.exists()) {
            file.delete();
        }
    }

    public synchronized boolean a(int i, String str, PackageInfo packageInfo) {
        return a(i, str, null, false, packageInfo);
    }

    public boolean a(s sVar, String str, String str2) {
        s sVarC;
        r rVarA;
        HashMap map;
        String str3;
        if (sVar == null) {
            map = new HashMap();
            str3 = cj.r;
        } else {
            File file = new File(sVar.e);
            if (dn.a(file)) {
                try {
                    if (!this.f.b(sVar.f2790a)) {
                        this.f.a(sVar);
                    }
                    rVarA = r.a(this.e.getApplicationContext(), true);
                    this.f.a(sVar.f2790a, 1);
                    b(sVar.c);
                } catch (Throwable unused) {
                    sVarC = sVar;
                }
                if (!rVarA.a(sVar, true)) {
                    file.delete();
                    a(sVar.f2790a, sVar.d, null, true, null);
                    this.f.a(sVar.f2790a, 0);
                    HashMap map2 = new HashMap();
                    map2.put("e", cj.u);
                    map2.put("l", "CBH");
                    map2.put("apk", sVar.toString());
                    bg.a(this.e, "1002001", map2);
                    return false;
                }
                sVarC = rVarA.c(sVar.e);
                if (sVarC == null) {
                    try {
                        this.f.a(sVarC.f2790a, 0);
                        HashMap map3 = new HashMap();
                        map3.put("e", cj.s);
                        map3.put("l", "CBH");
                        bg.a(this.e, "1002001", map3);
                        return false;
                    } catch (Throwable unused2) {
                    }
                }
                try {
                    s sVarA = this.f.a(sVarC.f2790a);
                    File file2 = null;
                    if (sVarA != null && !sVarA.d.equals(sVarC.d)) {
                        file2 = new File(sVarA.e);
                    }
                    sVarC.b = 1;
                    sVarC.p = 1;
                    if (this.f.a(sVarC) > 0 && file2 != null && file2.exists()) {
                        file2.delete();
                    }
                    this.f.a(sVarC.f2790a, 0);
                    return true;
                } catch (Throwable unused3) {
                    return false;
                }
            }
            map = new HashMap();
            str3 = cj.t;
        }
        map.put("e", str3);
        map.put("l", "CBH");
        bg.a(this.e, "1002001", map);
        return false;
    }

    public synchronized void b() {
        try {
            if (this.c) {
                return;
            }
            this.c = true;
            for (s sVar : this.f.a()) {
                String canonicalPath = null;
                try {
                    canonicalPath = this.e.getFilesDir().getCanonicalPath();
                } catch (Throwable unused) {
                }
                if (canonicalPath != null) {
                    sVar.m = canonicalPath + bh.j + sVar.f2790a;
                    StringBuilder sb = new StringBuilder();
                    sb.append(sVar.m);
                    sb.append("/lib");
                    dn.c(sb.toString());
                    dn.b(sVar.m);
                }
            }
            this.f.b();
            if (this.d.b(dp.d)) {
                this.f.c();
            } else {
                this.d.a(dp.d, Boolean.TRUE, true);
            }
            n.a().a(new u(this.e, 1, false));
        } catch (Throwable unused2) {
        }
    }

    public void b(String str) {
        r rVarA;
        try {
            if (TextUtils.isEmpty(str) || (rVarA = r.a()) == null) {
                return;
            }
            rVarA.b(str);
        } catch (Throwable unused) {
        }
    }

    public void c() {
        for (s sVar : this.f.a()) {
            r rVarA = r.a();
            if ((rVarA != null ? rVarA.d(sVar.c) : null) == null) {
                a(sVar.f2790a, sVar.d, (PackageInfo) null);
            }
        }
    }
}
