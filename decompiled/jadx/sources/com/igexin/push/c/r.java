package com.igexin.push.c;

import com.xiaomi.mipush.sdk.Constants;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.util.concurrent.Callable;

/* JADX INFO: loaded from: classes2.dex */
class r implements Callable<j> {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ q f2483a;

    r(q qVar) {
        this.f2483a = qVar;
    }

    @Override // java.util.concurrent.Callable
    /* JADX INFO: renamed from: a, reason: merged with bridge method [inline-methods] */
    public j call() throws Throwable {
        Socket socket;
        Exception e;
        if (!Thread.currentThread().isInterrupted()) {
            Socket socket2 = null;
            try {
            } catch (Exception e2) {
                socket = null;
                e = e2;
            } catch (Throwable th) {
                th = th;
                if (socket2 != null) {
                    try {
                        socket2.close();
                    } catch (Exception unused) {
                    }
                }
                throw th;
            }
            if (Thread.currentThread().isInterrupted()) {
                return null;
            }
            synchronized (p.class) {
                if (this.f2483a.e != null) {
                    this.f2483a.e.a(this.f2483a.d);
                }
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            String[] strArrA = com.igexin.b.a.b.f.a(this.f2483a.d.a());
            socket = new Socket();
            try {
                try {
                    socket.connect(new InetSocketAddress(strArrA[1], this.f2483a.d.d()), 2500);
                    long jCurrentTimeMillis2 = System.currentTimeMillis();
                    this.f2483a.d.a("socket://" + socket.getInetAddress().getHostAddress() + Constants.COLON_SEPARATOR + this.f2483a.d.d(), jCurrentTimeMillis2 - jCurrentTimeMillis, jCurrentTimeMillis2);
                    com.igexin.b.a.c.b.a(q.f2482a + "|detect " + this.f2483a.h() + "|time = " + this.f2483a.d.e(), new Object[0]);
                } catch (Exception e3) {
                    e = e3;
                    com.igexin.b.a.c.b.a(q.f2482a + "|detect " + this.f2483a.h() + "thread -->" + e.toString(), new Object[0]);
                    synchronized (p.class) {
                        if (this.f2483a.e != null) {
                            this.f2483a.d.b();
                            this.f2483a.e.a(g.EXCEPTION, this.f2483a.d);
                        }
                        if (socket != null && !socket.isClosed()) {
                        }
                        return this.f2483a.d;
                    }
                }
                synchronized (p.class) {
                    if (this.f2483a.e != null && !Thread.currentThread().isInterrupted()) {
                        this.f2483a.e.a(g.SUCCESS, this.f2483a.d);
                    }
                    if (!socket.isClosed()) {
                        try {
                            socket.close();
                        } catch (Exception unused2) {
                        }
                    }
                }
            } catch (Throwable th2) {
                th = th2;
                socket2 = socket;
                if (socket2 != null && !socket2.isClosed()) {
                    socket2.close();
                }
                throw th;
            }
        }
        return this.f2483a.d;
    }
}
