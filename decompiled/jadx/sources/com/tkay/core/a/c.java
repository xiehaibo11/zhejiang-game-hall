package com.tkay.core.a;

import com.tkay.core.c.d;
import com.tkay.core.common.b.f;
import com.tkay.core.common.b.m;
import com.tkay.core.common.f.aj;
import com.tkay.core.common.l.p;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static c f5942a;
    private final String b = "pacing_";

    public static c a() {
        if (f5942a == null) {
            f5942a = new c();
        }
        return f5942a;
    }

    public static void a(String str) {
        try {
            p.a(m.a().f(), f.o, "pacing_".concat(String.valueOf(str)), System.currentTimeMillis());
        } catch (Exception unused) {
        }
    }

    public static boolean a(String str, d dVar) {
        if (dVar == null) {
            return true;
        }
        if (dVar.ae() == -1) {
            return false;
        }
        long jLongValue = p.a(m.a().f(), f.o, "pacing_".concat(String.valueOf(str)), (Long) 0L).longValue();
        if (System.currentTimeMillis() - jLongValue >= 0) {
            return System.currentTimeMillis() - jLongValue < dVar.ae();
        }
        a(str);
        return false;
    }

    public final void a(final String str, final String str2) {
        com.tkay.core.common.l.b.a.a().a(new Runnable() { // from class: com.tkay.core.a.c.1
            @Override // java.lang.Runnable
            public final void run() {
                try {
                    p.a(m.a().f(), f.o, "pacing_" + str + "_" + str2, System.currentTimeMillis());
                } catch (Exception unused) {
                }
            }
        });
    }

    public final boolean a(String str, aj ajVar) {
        if (ajVar == null) {
            return true;
        }
        if (ajVar.s() == -1) {
            return false;
        }
        long jLongValue = p.a(m.a().f(), f.o, "pacing_" + str + "_" + ajVar.t(), (Long) 0L).longValue();
        if (System.currentTimeMillis() - jLongValue >= 0) {
            return System.currentTimeMillis() - jLongValue < ajVar.s();
        }
        a(str, ajVar.t());
        return false;
    }
}
