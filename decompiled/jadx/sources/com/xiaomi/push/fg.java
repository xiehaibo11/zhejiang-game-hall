package com.xiaomi.push;

import android.content.Context;
import android.net.TrafficStats;
import android.os.Process;
import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;

/* JADX INFO: loaded from: classes4.dex */
public class fg implements fz {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private int f8153a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    fw f373a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    XMPushService f374a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private Exception f375a;
    private long e;
    private long f;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private long f372a = 0;
    private long b = 0;
    private long c = 0;
    private long d = 0;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private String f376a = "";

    fg(XMPushService xMPushService) {
        this.e = 0L;
        this.f = 0L;
        this.f374a = xMPushService;
        b();
        int iMyUid = Process.myUid();
        try {
            this.f = TrafficStats.getUidRxBytes(iMyUid);
            this.e = TrafficStats.getUidTxBytes(iMyUid);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Failed to obtain traffic data during initialization: " + e);
            this.f = -1L;
            this.e = -1L;
        }
    }

    private void b() {
        this.b = 0L;
        this.d = 0L;
        this.f372a = 0L;
        this.c = 0L;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (bj.b(this.f374a)) {
            this.f372a = jElapsedRealtime;
        }
        if (this.f374a.m611c()) {
            this.c = jElapsedRealtime;
        }
    }

    private synchronized void c() {
        com.xiaomi.channel.commonutils.logger.b.c("stat connpt = " + this.f376a + " netDuration = " + this.b + " ChannelDuration = " + this.d + " channelConnectedTime = " + this.c);
        fa faVar = new fa();
        faVar.f351a = (byte) 0;
        faVar.a(ez.CHANNEL_ONLINE_RATE.a());
        faVar.a(this.f376a);
        faVar.d((int) (System.currentTimeMillis() / 1000));
        faVar.b((int) (this.b / 1000));
        faVar.c((int) (this.d / 1000));
        fh.m337a().a(faVar);
        b();
    }

    Exception a() {
        return this.f375a;
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public synchronized void m336a() {
        if (this.f374a == null) {
            return;
        }
        String strM149a = bj.m149a((Context) this.f374a);
        boolean zC = bj.c(this.f374a);
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (this.f372a > 0) {
            this.b += jElapsedRealtime - this.f372a;
            this.f372a = 0L;
        }
        if (this.c != 0) {
            this.d += jElapsedRealtime - this.c;
            this.c = 0L;
        }
        if (zC) {
            if ((!TextUtils.equals(this.f376a, strM149a) && this.b > 30000) || this.b > 5400000) {
                c();
            }
            this.f376a = strM149a;
            if (this.f372a == 0) {
                this.f372a = jElapsedRealtime;
            }
            if (this.f374a.m611c()) {
                this.c = jElapsedRealtime;
            }
        }
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar) {
        this.f8153a = 0;
        this.f375a = null;
        this.f373a = fwVar;
        this.f376a = bj.m149a((Context) this.f374a);
        fj.a(0, ez.CONN_SUCCESS.a());
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar, int i, Exception exc) {
        long uidTxBytes;
        if (this.f8153a == 0 && this.f375a == null) {
            this.f8153a = i;
            this.f375a = exc;
            fj.b(fwVar.mo366a(), exc);
        }
        if (i == 22 && this.c != 0) {
            long jM364a = fwVar.m364a() - this.c;
            if (jM364a < 0) {
                jM364a = 0;
            }
            this.d += jM364a + ((long) (gc.b() / 2));
            this.c = 0L;
        }
        m336a();
        int iMyUid = Process.myUid();
        long uidRxBytes = -1;
        try {
            uidRxBytes = TrafficStats.getUidRxBytes(iMyUid);
            uidTxBytes = TrafficStats.getUidTxBytes(iMyUid);
        } catch (Exception e) {
            com.xiaomi.channel.commonutils.logger.b.m43a("Failed to obtain traffic data: " + e);
            uidTxBytes = -1L;
        }
        com.xiaomi.channel.commonutils.logger.b.c("Stats rx=" + (uidRxBytes - this.f) + ", tx=" + (uidTxBytes - this.e));
        this.f = uidRxBytes;
        this.e = uidTxBytes;
    }

    @Override // com.xiaomi.push.fz
    public void a(fw fwVar, Exception exc) {
        fj.a(0, ez.CHANNEL_CON_FAIL.a(), 1, fwVar.mo366a(), bj.c(this.f374a) ? 1 : 0);
        m336a();
    }

    @Override // com.xiaomi.push.fz
    public void b(fw fwVar) {
        m336a();
        this.c = SystemClock.elapsedRealtime();
        fj.a(0, ez.CONN_SUCCESS.a(), fwVar.mo366a(), fwVar.a());
    }
}
