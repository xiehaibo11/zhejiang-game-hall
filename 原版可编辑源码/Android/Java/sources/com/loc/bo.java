package com.loc;

import android.os.SystemClock;
import android.text.TextUtils;
import com.loc.bt;
import java.net.URL;
import java.net.URLConnection;
import java.util.HashMap;

public final class bo {
    public static int a = 0;
    public static String b = "";
    public static HashMap<String, String> c;
    public static HashMap<String, String> d;
    public static HashMap<String, String> e;
    private static bo f;

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
            if (btVar.p() != bt.a.d && btVar.p() != bt.a.e) {
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
        btVar.a(z ? bt.c.b : bt.c.a);
        bu buVarA = null;
        long jElapsedRealtime = 0;
        boolean z2 = false;
        if (b(btVar)) {
            boolean zC = c(btVar);
            try {
                jElapsedRealtime = SystemClock.elapsedRealtime();
                buVarA = a(btVar, b(btVar, zC), d(btVar, zC));
            } catch (k e2) {
                if ((e2.f() == 21 && btVar.p() == bt.a.b) || !zC) {
                    throw e2;
                }
                z2 = true;
            }
        }
        if (buVarA != null && buVarA.a != null && buVarA.a.length > 0) {
            return buVarA;
        }
        try {
            return a(btVar, c(btVar, z2), a(btVar, jElapsedRealtime));
        } catch (k e3) {
            throw e3;
        }
    }

    private static bt.b b(bt btVar, boolean z) {
        if (btVar.p() == bt.a.d) {
            return bt.b.e;
        }
        if (btVar.p() != bt.a.e && z) {
            return bt.b.a;
        }
        return bt.b.b;
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
        return btVar.p() == bt.a.d ? z ? bt.b.f : bt.b.g : z ? bt.b.c : bt.b.d;
    }

    private static boolean c(bt btVar) throws k {
        d(btVar);
        try {
            if (!b(btVar)) {
                return true;
            }
            if (btVar.b().equals(btVar.c()) || btVar.p() == bt.a.e) {
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
            if (btVar.p() != bt.a.d) {
                if (btVar.p() != bt.a.e && iN >= i && z) {
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
