package com.igexin.push.c;

import com.igexin.push.config.SDKUrlConfig;
import java.util.List;

/* JADX INFO: loaded from: classes2.dex */
public class i {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final String f2476a = "DT_" + i.class.getName();
    private static i b;
    private static h c;

    private i() {
        c = com.igexin.push.util.a.b() ? h.WIFI : h.MOBILE;
    }

    public static synchronized i a() {
        if (b == null) {
            b = new i();
        }
        return b;
    }

    public void b() {
        if (SDKUrlConfig.hasMultipleXfr()) {
            com.igexin.b.a.b.c.b().a(k.c_(), false, true);
            return;
        }
        com.igexin.b.a.c.b.a(f2476a + "|xfr len = 1, detect = false", new Object[0]);
    }

    public void c() {
        if (SDKUrlConfig.hasMultipleXfr()) {
            try {
                f().d();
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2476a + "|" + th.toString(), new Object[0]);
            }
        }
    }

    public a d() {
        return f().d;
    }

    public void e() {
        if (SDKUrlConfig.hasMultipleXfr()) {
            try {
                s.a().j();
                s.a().f();
                l.a().f();
                m mVarF = f();
                if (mVarF != null) {
                    mVarF.h();
                    return;
                }
                return;
            } catch (Throwable th) {
                com.igexin.b.a.c.b.a(f2476a + "|" + th.toString(), new Object[0]);
                return;
            }
        }
        q.a();
        k.c_().h();
        try {
            l.a().d.a((List<e>) null);
            s.a().d.a((List<e>) null);
            s.a().g();
            l.a().g();
            s.a().j();
        } catch (Throwable th2) {
            com.igexin.b.a.c.b.a(f2476a + "|" + th2.toString(), new Object[0]);
        }
    }

    public synchronized m f() {
        m mVarA;
        mVarA = com.igexin.push.util.a.b() ? s.a() : l.a();
        h hVarB = mVarA.b();
        if (hVarB != c) {
            if (hVarB == h.WIFI) {
                l.a().e();
            } else if (hVarB == h.MOBILE) {
                s.a().e();
            }
        }
        c = hVarB;
        return mVarA;
    }
}
