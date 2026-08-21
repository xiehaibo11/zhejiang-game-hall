package com.xiaomi.push;

import android.content.Context;
import android.os.SystemClock;
import android.text.TextUtils;
import com.xiaomi.push.service.XMPushService;
import java.io.IOException;
import java.net.Socket;
import java.util.ArrayList;
import java.util.Iterator;

public abstract class gd extends fw {
    protected Exception a;
    protected Socket a;
    protected XMPushService b;
    private int c;
    String c;
    private String d;
    protected volatile long e;
    protected volatile long f;
    protected volatile long g;
    private long h;

    public gd(XMPushService xMPushService, fx fxVar) {
        super(xMPushService, fxVar);
        this.a = null;
        this.c = null;
        this.e = 0L;
        this.f = 0L;
        this.g = 0L;
        this.h = 0L;
        this.b = xMPushService;
    }

    private void a(fx fxVar) throws Throwable {
        a(fxVar.c(), fxVar.a());
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
    */
    private void a(String str, int i) throws Throwable {
        StringBuilder sb;
        long j;
        int i2;
        String str2;
        boolean z;
        Iterator<String> it;
        String str3;
        cr crVar;
        String str4;
        String str5;
        String str6;
        String str7;
        String str8;
        boolean z2;
        this.a = null;
        ArrayList<String> arrayList = new ArrayList<>();
        int iIntValue = com.xiaomi.channel.commonutils.logger.b.a("get bucket for host : " + str).intValue();
        cr crVarA = a(str);
        com.xiaomi.channel.commonutils.logger.b.a(Integer.valueOf(iIntValue));
        if (crVarA != null) {
            arrayList = crVarA.a(true);
        }
        cr crVarD = cv.a().d(str);
        if (crVarD != null) {
            for (String str9 : crVarD.a(true)) {
                if (arrayList.indexOf(str9) == -1) {
                    arrayList.add(str9);
                }
            }
        }
        if (arrayList.isEmpty()) {
            arrayList.add(str);
        }
        long j2 = 0;
        this.g = 0L;
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        String strA = bj.a((Context) this.b);
        StringBuilder sb2 = new StringBuilder();
        Iterator<String> it2 = arrayList.iterator();
        String str10 = "";
        int i3 = 0;
        while (it2.hasNext()) {
            String next = it2.next();
            long jCurrentTimeMillis = System.currentTimeMillis();
            this.a++;
            int i4 = i3 + 1;
            try {
                com.xiaomi.channel.commonutils.logger.b.a("begin to connect to " + next);
                this.a = a();
                this.a.connect(ct.a(next, i), 8000);
                com.xiaomi.channel.commonutils.logger.b.a("tcp connected");
                try {
                    this.a.setTcpNoDelay(true);
                    this.d = next;
                    a();
                    this.a = System.currentTimeMillis() - jCurrentTimeMillis;
                    this.b = strA;
                    if (crVarA != null) {
                        it = it2;
                        sb = sb2;
                        str3 = strA;
                        z2 = true;
                        j = 0;
                        crVar = crVarA;
                        try {
                            crVarA.b(next, this.a, 0L);
                        } catch (Exception e) {
                            e = e;
                            str4 = str10;
                            str5 = str3;
                            try {
                                this.a = e;
                                com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                                sb.append("SMACK: Could not connect to ");
                                sb.append(next);
                                sb.append(" port:");
                                sb.append(i);
                                sb.append(" err:");
                                sb.append(this.a.getClass().getSimpleName());
                                sb.append("\n");
                                if (TextUtils.isEmpty(str4)) {
                                }
                                fj.a(next, this.a);
                                if (crVar == null) {
                                }
                                if (TextUtils.equals(str7, bj.a((Context) this.b))) {
                                }
                            } catch (Throwable th) {
                                th = th;
                                com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                                sb.append("SMACK: Could not connect to ");
                                sb.append(next);
                                sb.append(" port:");
                                sb.append(i);
                                sb.append(" err:");
                                sb.append(this.a.getClass().getSimpleName());
                                sb.append("\n");
                                String str11 = TextUtils.isEmpty(str4) ? str4 + "|" + next : next;
                                fj.a(next, this.a);
                                if (crVar == null) {
                                    str8 = str5;
                                    crVar.b(next, System.currentTimeMillis() - jCurrentTimeMillis, 0L, this.a);
                                } else {
                                    str8 = str5;
                                }
                                if (!TextUtils.equals(str8, bj.a((Context) this.b))) {
                                    throw th;
                                }
                                str2 = str11;
                                i2 = i4;
                                z = false;
                                cv.a().c();
                                int iElapsedRealtime = (int) (SystemClock.elapsedRealtime() - jElapsedRealtime);
                                if (!z) {
                                }
                            }
                        } catch (Throwable th2) {
                            th = th2;
                            try {
                                this.a = new Exception("abnormal exception", th);
                                com.xiaomi.channel.commonutils.logger.b.a(th);
                                com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                                sb.append("SMACK: Could not connect to ");
                                sb.append(next);
                                sb.append(" port:");
                                sb.append(i);
                                sb.append(" err:");
                                sb.append(this.a.getClass().getSimpleName());
                                sb.append("\n");
                                if (TextUtils.isEmpty(str10)) {
                                }
                                fj.a(next, this.a);
                                if (crVar != null) {
                                }
                                str6 = str3;
                                if (TextUtils.equals(str6, bj.a((Context) this.b))) {
                                }
                            } catch (Throwable th3) {
                                th = th3;
                                str4 = str10;
                                str5 = str3;
                                com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                                sb.append("SMACK: Could not connect to ");
                                sb.append(next);
                                sb.append(" port:");
                                sb.append(i);
                                sb.append(" err:");
                                sb.append(this.a.getClass().getSimpleName());
                                sb.append("\n");
                                if (TextUtils.isEmpty(str4)) {
                                }
                                fj.a(next, this.a);
                                if (crVar == null) {
                                }
                                if (!TextUtils.equals(str8, bj.a((Context) this.b))) {
                                }
                            }
                        }
                    } else {
                        it = it2;
                        sb = sb2;
                        str3 = strA;
                        crVar = crVarA;
                        z2 = true;
                        j = 0;
                    }
                    this.g = SystemClock.elapsedRealtime();
                    com.xiaomi.channel.commonutils.logger.b.a("connected to " + next + " in " + this.a);
                    str2 = str10;
                    z = z2;
                    i2 = i4;
                    break;
                } catch (Exception e2) {
                    e = e2;
                    it = it2;
                    sb = sb2;
                    crVar = crVarA;
                    j = 0;
                    str4 = str10;
                    str5 = strA;
                    this.a = e;
                    com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                    sb.append("SMACK: Could not connect to ");
                    sb.append(next);
                    sb.append(" port:");
                    sb.append(i);
                    sb.append(" err:");
                    sb.append(this.a.getClass().getSimpleName());
                    sb.append("\n");
                    str2 = TextUtils.isEmpty(str4) ? str4 + "|" + next : next;
                    fj.a(next, this.a);
                    if (crVar == null) {
                        str7 = str5;
                        crVar.b(next, System.currentTimeMillis() - jCurrentTimeMillis, 0L, this.a);
                    } else {
                        str7 = str5;
                    }
                    if (TextUtils.equals(str7, bj.a((Context) this.b))) {
                        i2 = i4;
                        z = false;
                        cv.a().c();
                        int iElapsedRealtime2 = (int) (SystemClock.elapsedRealtime() - jElapsedRealtime);
                        if (!z) {
                        }
                    } else {
                        str10 = str2;
                        sb2 = sb;
                        strA = str7;
                        i3 = i4;
                        it2 = it;
                        j2 = j;
                        crVarA = crVar;
                    }
                } catch (Throwable th4) {
                    th = th4;
                    it = it2;
                    sb = sb2;
                    str3 = strA;
                    crVar = crVarA;
                    j = 0;
                    this.a = new Exception("abnormal exception", th);
                    com.xiaomi.channel.commonutils.logger.b.a(th);
                    com.xiaomi.channel.commonutils.logger.b.d("SMACK: Could not connect to:" + next);
                    sb.append("SMACK: Could not connect to ");
                    sb.append(next);
                    sb.append(" port:");
                    sb.append(i);
                    sb.append(" err:");
                    sb.append(this.a.getClass().getSimpleName());
                    sb.append("\n");
                    str2 = TextUtils.isEmpty(str10) ? str10 + "|" + next : next;
                    fj.a(next, this.a);
                    if (crVar != null) {
                        crVar.b(next, System.currentTimeMillis() - jCurrentTimeMillis, 0L, this.a);
                    }
                    str6 = str3;
                    if (TextUtils.equals(str6, bj.a((Context) this.b))) {
                        i2 = i4;
                        z = false;
                        cv.a().c();
                        int iElapsedRealtime22 = (int) (SystemClock.elapsedRealtime() - jElapsedRealtime);
                        if (!z) {
                        }
                    } else {
                        str7 = str6;
                        str10 = str2;
                        sb2 = sb;
                        strA = str7;
                        i3 = i4;
                        it2 = it;
                        j2 = j;
                        crVarA = crVar;
                    }
                }
            } catch (Exception e3) {
                e = e3;
                it = it2;
                sb = sb2;
                crVar = crVarA;
            } catch (Throwable th5) {
                th = th5;
                it = it2;
                sb = sb2;
                str3 = strA;
                crVar = crVarA;
            }
        }
        sb = sb2;
        j = j2;
        i2 = i3;
        str2 = str10;
        z = false;
        cv.a().c();
        int iElapsedRealtime222 = (int) (SystemClock.elapsedRealtime() - jElapsedRealtime);
        if (!z) {
            fj.a(0, ez.i.a(), iElapsedRealtime222, str2, i2);
            return;
        }
        if (this.h == j || SystemClock.elapsedRealtime() - this.h > 480000) {
            this.h = SystemClock.elapsedRealtime();
            fj.a(0, ez.j.a(), iElapsedRealtime222, str2, bj.c(this.b.getApplicationContext()) ? 1 : 0);
        }
        throw new gh(sb.toString());
    }

    cr a(String str) {
        cr crVarA = cv.a().a(str, false);
        if (!crVarA.b()) {
            gz.a(new gg(this, str));
        }
        return crVarA;
    }

    @Override
    public String a() {
        return this.d;
    }

    public Socket a() {
        return new Socket();
    }

    protected synchronized void a() {
    }

    protected synchronized void a(int i, Exception exc) {
        if (b() == 2) {
            return;
        }
        a(2, i, exc);
        this.a = "";
        try {
            this.a.close();
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
            String strA = a();
            com.xiaomi.channel.commonutils.logger.b.a("max short conn time reached, sink down current host:" + strA);
            a(strA, 0L, exc);
        }
        this.c = 0;
    }

    protected void a(String str, long j, Exception exc) {
        cr crVarA = cv.a().a(fx.a(), false);
        if (crVarA != null) {
            crVarA.b(str, j, 0L, exc);
            cv.a().c();
        }
    }

    protected abstract void a(boolean z);

    @Override
    public void a(fl[] flVarArr) throws gh {
        throw new gh("Don't support send Blob");
    }

    @Override
    public void b(int i, Exception exc) {
        a(i, exc);
        if ((exc != null || i == 18) && this.g != 0) {
            a(exc);
        }
    }

    @Override
    public void b(boolean z) {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        long jCurrentTimeMillis = System.currentTimeMillis();
        a(z);
        com.xiaomi.push.service.o.a(this.b).c();
        if (z) {
            return;
        }
        this.b.a(new ge(this, 13, jElapsedRealtime, jCurrentTimeMillis), com.heytap.mcssdk.constant.a.q);
    }

    public String c() {
        return this.a;
    }

    public void c(int i, Exception exc) {
        this.b.a(new gf(this, 2, i, exc));
    }

    public synchronized void e() {
        try {
            if (!c() && !b()) {
                a(0, 0, (Exception) null);
                a(this.a);
                return;
            }
            com.xiaomi.channel.commonutils.logger.b.a("WARNING: current xmpp has connected");
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
