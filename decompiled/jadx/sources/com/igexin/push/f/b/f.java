package com.igexin.push.f.b;

import android.os.SystemClock;
import android.text.TextUtils;
import com.igexin.push.core.b.i;
import com.igexin.push.core.m;
import java.util.concurrent.TimeUnit;

/* JADX INFO: loaded from: classes2.dex */
public class f extends g {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static f f2650a;
    private long b;
    private long c;

    private f() {
        super(1200000L);
        this.o = true;
        this.b = System.currentTimeMillis();
        this.c = SystemClock.elapsedRealtime();
    }

    public static synchronized f i() {
        if (f2650a == null) {
            f2650a = new f();
        }
        return f2650a;
    }

    public void a(long j) {
        this.c = j;
    }

    @Override // com.igexin.b.a.d.a.e
    public final int b_() {
        return -2147483641;
    }

    @Override // com.igexin.b.a.d.e
    public void c() {
        super.c();
    }

    @Override // com.igexin.b.a.d.e
    public void d() {
    }

    @Override // com.igexin.push.f.b.g
    protected void d_() {
        long j;
        com.igexin.push.core.a.e.a().l();
        boolean zA = com.igexin.push.util.a.a(System.currentTimeMillis());
        boolean zA2 = com.igexin.push.util.a.a();
        com.igexin.push.core.d.i = com.igexin.push.util.a.f();
        com.igexin.b.a.c.b.a("RTTask|networkAvailable = " + com.igexin.push.core.d.i + ",sdkOnline = " + com.igexin.push.core.d.n + ", pushOn =" + com.igexin.push.core.d.k + ", isSilentTime= " + zA + ", blockEndTime= " + zA2, new Object[0]);
        if (!com.igexin.push.core.d.i || !com.igexin.push.core.d.k || com.igexin.push.core.d.n || zA || !zA2) {
            com.igexin.b.a.c.b.a("RTTask reconnect timer task stop, connect interval= 20min #######", new Object[0]);
            j = 1200000;
        } else {
            if (!com.igexin.push.util.a.g() && TextUtils.isEmpty(com.igexin.push.core.d.u)) {
                a(com.heytap.mcssdk.constant.a.h, TimeUnit.MILLISECONDS);
                com.igexin.b.a.c.b.a("RTTask|date is error, set connect interval = 15min", new Object[0]);
                return;
            }
            com.igexin.b.a.c.b.a("RTTask reconnect timer task isOnline = false, try login...", new Object[0]);
            if (System.currentTimeMillis() - this.b < 2500) {
                com.igexin.push.core.d.q++;
            }
            if (com.igexin.push.core.d.q > 30 && Math.abs(SystemClock.elapsedRealtime() - this.c) < 72000.0d) {
                i.a().d();
            }
            this.b = System.currentTimeMillis();
            m.a().b();
            j = 1800000;
        }
        a(j, TimeUnit.MILLISECONDS);
    }

    public void j() {
        long j = com.igexin.push.core.d.F;
        com.igexin.b.a.c.b.a("RTTask|refreshDelayTime, delay = " + j, new Object[0]);
        a(j, TimeUnit.MILLISECONDS);
    }
}
