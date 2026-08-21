package com.xiaomi.push;

import android.os.SystemClock;
import com.xiaomi.push.service.XMPushService;
import java.io.IOException;
import java.net.Socket;

/* JADX INFO: loaded from: classes4.dex */
public abstract class gd extends fw {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected Exception f8176a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    protected Socket f437a;
    protected XMPushService b;
    private int c;

    /* JADX INFO: renamed from: c, reason: collision with other field name */
    String f438c;
    private String d;
    protected volatile long e;
    protected volatile long f;
    protected volatile long g;
    private long h;

    public gd(XMPushService xMPushService, fx fxVar) {
        super(xMPushService, fxVar);
        this.f8176a = null;
        this.f438c = null;
        this.e = 0L;
        this.f = 0L;
        this.g = 0L;
        this.h = 0L;
        this.b = xMPushService;
    }

    private void a(fx fxVar) throws Throwable {
        a(fxVar.c(), fxVar.m372a());
    }

    /* JADX WARN: Removed duplicated region for block: B:116:0x0278 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:117:0x0278 A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:119:0x027c A[SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:46:0x01a9  */
    /* JADX WARN: Removed duplicated region for block: B:47:0x01ab  */
    /* JADX WARN: Removed duplicated region for block: B:50:0x01c6  */
    /* JADX WARN: Removed duplicated region for block: B:54:0x01e8  */
    /* JADX WARN: Removed duplicated region for block: B:63:0x0238  */
    /* JADX WARN: Removed duplicated region for block: B:64:0x023a  */
    /* JADX WARN: Removed duplicated region for block: B:67:0x0253  */
    /* JADX WARN: Removed duplicated region for block: B:68:0x026b  */
    /* JADX WARN: Removed duplicated region for block: B:76:0x02c2  */
    /* JADX WARN: Removed duplicated region for block: B:77:0x02c4  */
    /* JADX WARN: Removed duplicated region for block: B:80:0x02dd  */
    /* JADX WARN: Removed duplicated region for block: B:81:0x02f2  */
    /* JADX WARN: Removed duplicated region for block: B:84:0x02ff  */
    /* JADX WARN: Removed duplicated region for block: B:85:0x0302  */
    /* JADX WARN: Removed duplicated region for block: B:90:0x031b  */
    /* JADX WARN: Removed duplicated region for block: B:97:0x0353  */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    private void a(java.lang.String r32, int r33) throws java.lang.Throwable {
        /*
            Method dump skipped, instruction units count: 862
            To view this dump add '--comments-level debug' option
        */
        throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.gd.a(java.lang.String, int):void");
    }

    cr a(String str) {
        cr crVarA = cv.a().a(str, false);
        if (!crVarA.b()) {
            gz.a(new gg(this, str));
        }
        return crVarA;
    }

    @Override // com.xiaomi.push.fw
    /* JADX INFO: renamed from: a */
    public String mo366a() {
        return this.d;
    }

    public Socket a() {
        return new Socket();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    protected synchronized void mo377a() {
    }

    protected synchronized void a(int i, Exception exc) {
        if (b() == 2) {
            return;
        }
        a(2, i, exc);
        this.f423a = "";
        try {
            this.f437a.close();
        } catch (Throwable unused) {
        }
        this.e = 0L;
        this.f = 0L;
    }

    protected void a(Exception exc) {
        if (SystemClock.elapsedRealtime() - this.g < 300000) {
            if (!bj.b(this.b)) {
                return;
            }
            int i = this.c + 1;
            this.c = i;
            if (i < 2) {
                return;
            }
            String strMo366a = mo366a();
            com.xiaomi.channel.commonutils.logger.b.m43a("max short conn time reached, sink down current host:" + strMo366a);
            a(strMo366a, 0L, exc);
        }
        this.c = 0;
    }

    protected void a(String str, long j, Exception exc) {
        cr crVarA = cv.a().a(fx.a(), false);
        if (crVarA != null) {
            crVarA.b(str, j, 0L, exc);
            cv.a().m214c();
        }
    }

    /* JADX INFO: renamed from: a */
    protected abstract void mo357a(boolean z);

    @Override // com.xiaomi.push.fw
    public void a(fl[] flVarArr) throws gh {
        throw new gh("Don't support send Blob");
    }

    @Override // com.xiaomi.push.fw
    public void b(int i, Exception exc) {
        a(i, exc);
        if ((exc != null || i == 18) && this.g != 0) {
            a(exc);
        }
    }

    @Override // com.xiaomi.push.fw
    public void b(boolean z) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long jCurrentTimeMillis = System.currentTimeMillis();
        mo357a(z);
        com.xiaomi.push.service.o.a(this.b).m681c();
        if (z) {
            return;
        }
        this.b.a(new ge(this, 13, jElapsedRealtime, jCurrentTimeMillis), com.heytap.mcssdk.constant.a.q);
    }

    public String c() {
        return this.f423a;
    }

    public void c(int i, Exception exc) {
        this.b.a(new gf(this, 2, i, exc));
    }

    public synchronized void e() {
        try {
            if (!c() && !b()) {
                a(0, 0, (Exception) null);
                a(this.f420a);
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.m43a("WARNING: current xmpp has connected");
        } catch (IOException e) {
            throw new gh(e);
        }
    }

    public void f() {
        this.e = SystemClock.elapsedRealtime();
    }

    public void g() {
        this.f = SystemClock.elapsedRealtime();
    }
}
