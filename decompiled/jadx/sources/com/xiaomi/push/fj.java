package com.xiaomi.push;

import android.os.SystemClock;
import com.xiaomi.push.ff;
import com.xiaomi.push.service.XMPushService;
import com.xiaomi.push.service.bg;
import java.util.Hashtable;

/* JADX INFO: loaded from: classes4.dex */
public class fj {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final int f8157a = ez.PING_RTT.a();

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private static long f382a = 0;

    class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        static Hashtable<Integer, Long> f8158a = new Hashtable<>();
    }

    public static void a() {
        if (f382a == 0 || SystemClock.elapsedRealtime() - f382a > 7200000) {
            f382a = SystemClock.elapsedRealtime();
            a(0, f8157a);
        }
    }

    public static void a(int i) {
        fa faVarM339a = fh.m337a().m339a();
        faVarM339a.a(ez.CHANNEL_STATS_COUNTER.a());
        faVarM339a.c(i);
        fh.m337a().a(faVarM339a);
    }

    public static synchronized void a(int i, int i2) {
        if (i2 < 16777215) {
            a.f8158a.put(Integer.valueOf((i << 24) | i2), Long.valueOf(System.currentTimeMillis()));
        } else {
            com.xiaomi.channel.commonutils.logger.b.d("stats key should less than 16777215");
        }
    }

    public static void a(int i, int i2, int i3, String str, int i4) {
        fa faVarM339a = fh.m337a().m339a();
        faVarM339a.a((byte) i);
        faVarM339a.a(i2);
        faVarM339a.b(i3);
        faVarM339a.b(str);
        faVarM339a.c(i4);
        fh.m337a().a(faVarM339a);
    }

    public static synchronized void a(int i, int i2, String str, int i3) {
        long jCurrentTimeMillis = System.currentTimeMillis();
        int i4 = (i << 24) | i2;
        if (a.f8158a.containsKey(Integer.valueOf(i4))) {
            fa faVarM339a = fh.m337a().m339a();
            faVarM339a.a(i2);
            faVarM339a.b((int) (jCurrentTimeMillis - a.f8158a.get(Integer.valueOf(i4)).longValue()));
            faVarM339a.b(str);
            if (i3 > -1) {
                faVarM339a.c(i3);
            }
            fh.m337a().a(faVarM339a);
            a.f8158a.remove(Integer.valueOf(i2));
        } else {
            com.xiaomi.channel.commonutils.logger.b.d("stats key not found");
        }
    }

    public static void a(XMPushService xMPushService, bg.b bVar) {
        new fc(xMPushService, bVar).a();
    }

    public static void a(String str, int i, Exception exc) {
        fa faVarM339a = fh.m337a().m339a();
        if (fh.a() != null && fh.a().f374a != null) {
            faVarM339a.c(bj.c(fh.a().f374a) ? 1 : 0);
        }
        if (i > 0) {
            faVarM339a.a(ez.GSLB_REQUEST_SUCCESS.a());
            faVarM339a.b(str);
            faVarM339a.b(i);
            fh.m337a().a(faVarM339a);
            return;
        }
        try {
            ff.a aVarA = ff.a(exc);
            faVarM339a.a(aVarA.f8152a.a());
            faVarM339a.c(aVarA.f371a);
            faVarM339a.b(str);
            fh.m337a().a(faVarM339a);
        } catch (NullPointerException unused) {
        }
    }

    public static void a(String str, Exception exc) {
        try {
            ff.a aVarB = ff.b(exc);
            fa faVarM339a = fh.m337a().m339a();
            faVarM339a.a(aVarB.f8152a.a());
            faVarM339a.c(aVarB.f371a);
            faVarM339a.b(str);
            if (fh.a() != null && fh.a().f374a != null) {
                faVarM339a.c(bj.c(fh.a().f374a) ? 1 : 0);
            }
            fh.m337a().a(faVarM339a);
        } catch (NullPointerException unused) {
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public static byte[] m343a() {
        fb fbVarM340a = fh.m337a().m340a();
        if (fbVarM340a != null) {
            return it.a(fbVarM340a);
        }
        return null;
    }

    public static void b() {
        a(0, f8157a, null, -1);
    }

    public static void b(String str, Exception exc) {
        try {
            ff.a aVarD = ff.d(exc);
            fa faVarM339a = fh.m337a().m339a();
            faVarM339a.a(aVarD.f8152a.a());
            faVarM339a.c(aVarD.f371a);
            faVarM339a.b(str);
            if (fh.a() != null && fh.a().f374a != null) {
                faVarM339a.c(bj.c(fh.a().f374a) ? 1 : 0);
            }
            fh.m337a().a(faVarM339a);
        } catch (NullPointerException unused) {
        }
    }
}
