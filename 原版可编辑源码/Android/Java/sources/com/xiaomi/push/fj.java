package com.xiaomi.push;

import android.os.SystemClock;
import com.xiaomi.push.ff;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;
import java.util.Hashtable;

public class fj {
    private static final int a = ez.c.a();
    private static long a = 0;

    class a {
        static Hashtable<Integer, Long> a = new Hashtable<>();
    }

    public static void a() {
        if (a == 0 || SystemClock.elapsedRealtime() - a > 7200000) {
            a = SystemClock.elapsedRealtime();
            a(0, a);
        }
    }

    public static void a(int i) {
        fa faVarA = fh.a().a();
        faVarA.a(ez.k.a());
        faVarA.c(i);
        fh.a().a(faVarA);
    }

    public static synchronized void a(int i, int i2) {
        if (i2 < 16777215) {
            a.a.put(Integer.valueOf((i << 24) | i2), Long.valueOf(System.currentTimeMillis()));
        } else {
            com.xiaomi.channel.commonutils.logger.b.d("stats key should less than 16777215");
        }
    }

    public static void a(int i, int i2, int i3, String str, int i4) {
        fa faVarA = fh.a().a();
        faVarA.a((byte) i);
        faVarA.a(i2);
        faVarA.b(i3);
        faVarA.b(str);
        faVarA.c(i4);
        fh.a().a(faVarA);
    }

    public static synchronized void a(int i, int i2, String str, int i3) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        int i4 = (i << 24) | i2;
        if (a.a.containsKey(Integer.valueOf(i4))) {
            fa faVarA = fh.a().a();
            faVarA.a(i2);
            faVarA.b((int) (jCurrentTimeMillis - a.a.get(Integer.valueOf(i4)).longValue()));
            faVarA.b(str);
            if (i3 > -1) {
                faVarA.c(i3);
            }
            fh.a().a(faVarA);
            a.a.remove(Integer.valueOf(i2));
        } else {
            com.xiaomi.channel.commonutils.logger.b.d("stats key not found");
        }
    }

    public static void a(XMPushService xMPushService, bg.b bVar) {
        new fc(xMPushService, bVar).a();
    }

    public static void a(String str, int i, Exception exc) {
        fa faVarA = fh.a().a();
        if (fh.a() != null && fh.a().a != null) {
            faVarA.c(bj.c(fh.a().a) ? 1 : 0);
        }
        if (i > 0) {
            faVarA.a(ez.l.a());
            faVarA.b(str);
            faVarA.b(i);
            fh.a().a(faVarA);
            return;
        }
        try {
            ff.a aVarA = ff.a(exc);
            faVarA.a(aVarA.a.a());
            faVarA.c(aVarA.a);
            faVarA.b(str);
            fh.a().a(faVarA);
        } catch (NullPointerException unused) {
        }
    }

    public static void a(String str, Exception exc) {
        try {
            ff.a aVarB = ff.b(exc);
            fa faVarA = fh.a().a();
            faVarA.a(aVarB.a.a());
            faVarA.c(aVarB.a);
            faVarA.b(str);
            if (fh.a() != null && fh.a().a != null) {
                faVarA.c(bj.c(fh.a().a) ? 1 : 0);
            }
            fh.a().a(faVarA);
        } catch (NullPointerException unused) {
        }
    }

    public static byte[] a() {
        fb fbVarA = fh.a().a();
        if (fbVarA != null) {
            return it.a(fbVarA);
        }
        return null;
    }

    public static void b() {
        a(0, a, null, -1);
    }

    public static void b(String str, Exception exc) {
        try {
            ff.a aVarD = ff.d(exc);
            fa faVarA = fh.a().a();
            faVarA.a(aVarD.a.a());
            faVarA.c(aVarD.a);
            faVarA.b(str);
            if (fh.a() != null && fh.a().a != null) {
                faVarA.c(bj.c(fh.a().a) ? 1 : 0);
            }
            fh.a().a(faVarA);
        } catch (NullPointerException unused) {
        }
    }
}
