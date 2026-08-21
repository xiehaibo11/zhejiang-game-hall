package com.xiaomi.push;

import android.content.Context;
import android.net.TrafficStats;
import android.os.Process;
import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;

public class fg implements fz {
    private int a;
    fw a;
    XMPushService a;
    private Exception a;
    private long e;
    private long f;
    private long a = 0;
    private long b = 0;
    private long c = 0;
    private long d = 0;
    private String a = "";

    fg(XMPushService xMPushService) {
        this.e = 0L;
        this.f = 0L;
        this.a = xMPushService;
        b();
        int iMyUid = Process.myUid();
        try {
            this.f = TrafficStats.getUidRxBytes(iMyUid);
            this.e = TrafficStats.getUidTxBytes(iMyUid);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("Failed to obtain traffic data during initialization: " + e);
            this.f = -1L;
            this.e = -1L;
        }
    }

    private void b() {
        this.b = 0L;
        this.d = 0L;
        this.a = 0L;
        this.c = 0L;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (bj.b(this.a)) {
            this.a = jElapsedRealtime;
        }
        if (this.a.c()) {
            this.c = jElapsedRealtime;
        }
    }

    private synchronized void c() {
        com.xiaomi.channel.commonutils.logger.b.c("stat connpt = " + this.a + " netDuration = " + this.b + " ChannelDuration = " + this.d + " channelConnectedTime = " + this.c);
        fa faVar = new fa();
        faVar.a = (byte) 0;
        faVar.a(ez.h.a());
        faVar.a(this.a);
        faVar.d((int) (System.currentTimeMillis() / 1000));
        faVar.b((int) (this.b / 1000));
        faVar.c((int) (this.d / 1000));
        fh.a().a(faVar);
        b();
    }

    Exception a() {
        return this.a;
    }

    public synchronized void a() {
        if (this.a == null) {
            return;
        }
        String strA = bj.a((Context) this.a);
        boolean zC = bj.c(this.a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (this.a > 0) {
            this.b += jElapsedRealtime - this.a;
            this.a = 0L;
        }
        if (this.c != 0) {
            this.d += jElapsedRealtime - this.c;
            this.c = 0L;
        }
        if (zC) {
            if ((!TextUtils.equals(this.a, strA) && this.b > 30000) || this.b > 5400000) {
                c();
            }
            this.a = strA;
            if (this.a == 0) {
                this.a = jElapsedRealtime;
            }
            if (this.a.c()) {
                this.c = jElapsedRealtime;
            }
        }
    }

    @Override
    public void a(fw fwVar) {
        this.a = 0;
        this.a = null;
        this.a = fwVar;
        this.a = bj.a((Context) this.a);
        fj.a(0, ez.v.a());
    }

    @Override
    public void a(fw fwVar, int i, Exception exc) {
        long uidTxBytes;
        if (this.a == 0 && this.a == null) {
            this.a = i;
            this.a = exc;
            fj.b(fwVar.a(), exc);
        }
        if (i == 22 && this.c != 0) {
            long jA = fwVar.a() - this.c;
            if (jA < 0) {
                jA = 0;
            }
            this.d += jA + ((long) (gc.b() / 2));
            this.c = 0L;
        }
        a();
        int iMyUid = Process.myUid();
        long uidRxBytes = -1;
        try {
            uidRxBytes = TrafficStats.getUidRxBytes(iMyUid);
            uidTxBytes = TrafficStats.getUidTxBytes(iMyUid);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.a("Failed to obtain traffic data: " + e);
            uidTxBytes = -1L;
        }
        com.xiaomi.channel.commonutils.logger.b.c("Stats rx=" + (uidRxBytes - this.f) + ", tx=" + (uidTxBytes - this.e));
        this.f = uidRxBytes;
        this.e = uidTxBytes;
    }

    @Override
    public void a(fw fwVar, Exception exc) {
        fj.a(0, ez.d.a(), 1, fwVar.a(), bj.c(this.a) ? 1 : 0);
        a();
    }

    @Override
    public void b(fw fwVar) {
        a();
        this.c = SystemClock.elapsedRealtime();
        fj.a(0, ez.v.a(), fwVar.a(), fwVar.a());
    }
}
