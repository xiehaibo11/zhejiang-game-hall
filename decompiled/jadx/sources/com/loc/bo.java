package com.loc;

import android.os.SystemClock;
import android.text.TextUtils;
import com.loc.bt;
import java.net.URL;
import java.net.URLConnection;
import java.util.HashMap;

/* JADX INFO: compiled from: BaseNetManager.java */
/* JADX INFO: loaded from: classes2.dex */
public final class bo {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static int f2873a = 0;
    public static String b = "";
    public static HashMap<String, String> c;
    public static HashMap<String, String> d;
    public static HashMap<String, String> e;
    private static bo f;

    /* JADX INFO: compiled from: BaseNetManager.java */
    public interface a {
        URLConnection a();
    }

    public bo() {
        m.e();
    }

    private static int a(bt btVar, long j) {
        try {
            d(btVar);
            long jElapsedRealtime = 0;
            if (j != 0) {
                jElapsedRealtime = SystemClock.elapsedRealtime() - j;
            }
            int iN = btVar.n();
            if (btVar.p() != bt.a.FIX && btVar.p() != bt.a.SINGLE) {
                long j2 = iN;
                if (jElapsedRealtime < j2) {
                    long j3 = j2 - jElapsedRealtime;
                    if (j3 >= 1000) {
                        return (int) j3;
                    }
                }
                return Math.min(1000, btVar.n());
            }
            return iN;
        } catch (Throwable unused) {
            return 5000;
        }
    }

    public static bo a() {
        if (f == null) {
            f = new bo();
        }
        return f;
    }

    public static bu a(bt btVar) throws k {
        return a(btVar, btVar.s());
    }

    private static bu a(bt btVar, bt.b bVar, int i) throws k {
        try {
            d(btVar);
            btVar.a(bVar);
            btVar.c(i);
            return new br().a(btVar);
        } catch (k e2) {
            throw e2;
        } catch (Throwable th) {
            th.printStackTrace();
            throw new k("未知的错误");
        }
    }

    @Deprecated
    private static bu a(bt btVar, boolean z) throws k {
        d(btVar);
        btVar.a(z ? bt.c.HTTPS : bt.c.HTTP);
        bu buVarA = null;
        long jElapsedRealtime = 0;
        boolean z2 = false;
        if (b(btVar)) {
            boolean zC = c(btVar);
            try {
                jElapsedRealtime = SystemClock.elapsedRealtime();
                buVarA = a(btVar, b(btVar, zC), d(btVar, zC));
            } catch (k e2) {
                if ((e2.f() == 21 && btVar.p() == bt.a.INTERRUPT_IO) || !zC) {
                    throw e2;
                }
                z2 = true;
            }
        }
        if (buVarA != null && buVarA.f2891a != null && buVarA.f2891a.length > 0) {
            return buVarA;
        }
        try {
            return a(btVar, c(btVar, z2), a(btVar, jElapsedRealtime));
        } catch (k e3) {
            throw e3;
        }
    }

    private static bt.b b(bt btVar, boolean z) {
        if (btVar.p() == bt.a.FIX) {
            return bt.b.FIX_NONDEGRADE;
        }
        if (btVar.p() != bt.a.SINGLE && z) {
            return bt.b.FIRST_NONDEGRADE;
        }
        return bt.b.NEVER_GRADE;
    }

    private static boolean b(bt btVar) throws k {
        d(btVar);
        try {
            String strC = btVar.c();
            if (TextUtils.isEmpty(strC)) {
                return false;
            }
            String host = new URL(strC).getHost();
            if (!TextUtils.isEmpty(btVar.g())) {
                host = btVar.g();
            }
            return m.g(host);
        } catch (Throwable unused) {
            return true;
        }
    }

    private static bt.b c(bt btVar, boolean z) {
        return btVar.p() == bt.a.FIX ? z ? bt.b.FIX_DEGRADE_BYERROR : bt.b.FIX_DEGRADE_ONLY : z ? bt.b.DEGRADE_BYERROR : bt.b.DEGRADE_ONLY;
    }

    private static boolean c(bt btVar) throws k {
        d(btVar);
        try {
            if (!b(btVar)) {
                return true;
            }
            if (btVar.b().equals(btVar.c()) || btVar.p() == bt.a.SINGLE) {
                return false;
            }
            if (!m.h) {
                return false;
            }
        } catch (Throwable unused) {
        }
        return true;
    }

    private static int d(bt btVar, boolean z) {
        try {
            d(btVar);
            int iN = btVar.n();
            int i = m.e;
            if (btVar.p() != bt.a.FIX) {
                if (btVar.p() != bt.a.SINGLE && iN >= i && z) {
                    return i;
                }
            }
            return iN;
        } catch (Throwable unused) {
            return 5000;
        }
    }

    private static void d(bt btVar) throws k {
        if (btVar == null) {
            throw new k("requeust is null");
        }
        if (btVar.b() == null || "".equals(btVar.b())) {
            throw new k("request url is empty");
        }
    }
}
