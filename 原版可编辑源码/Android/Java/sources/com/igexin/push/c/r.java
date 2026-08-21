package com.igexin.push.c;

import com.xiaomi.mipush.sdk.Constants;
import java.net.InetSocketAddress;
import java.net.Socket;
import java.util.concurrent.Callable;

class r implements Callable<j> {
    final q a;

    r(q qVar) {
        this.a = qVar;
    }

    @Override
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
                if (this.a.e != null) {
                    this.a.e.a(this.a.d);
                }
            }
            long jCurrentTimeMillis = System.currentTimeMillis();
            String[] strArrA = com.igexin.b.a.b.f.a(this.a.d.a());
            socket = new Socket();
            try {
                try {
                    socket.connect(new InetSocketAddress(strArrA[1], this.a.d.d()), 2500);
                    long jCurrentTimeMillis2 = System.currentTimeMillis();
                    this.a.d.a("socket://" + socket.getInetAddress().getHostAddress() + Constants.COLON_SEPARATOR + this.a.d.d(), jCurrentTimeMillis2 - jCurrentTimeMillis, jCurrentTimeMillis2);
                    com.igexin.b.a.c.b.a(q.a + "|detect " + this.a.h() + "|time = " + this.a.d.e(), new Object[0]);
                } catch (Exception e3) {
                    e = e3;
                    com.igexin.b.a.c.b.a(q.a + "|detect " + this.a.h() + "thread -->" + e.toString(), new Object[0]);
                    synchronized (p.class) {
                        if (this.a.e != null) {
                            this.a.d.b();
                            this.a.e.a(g.c, this.a.d);
                        }
                        if (socket != null && !socket.isClosed()) {
                        }
                        return this.a.d;
                    }
                }
                synchronized (p.class) {
                    if (this.a.e != null && !Thread.currentThread().isInterrupted()) {
                        this.a.e.a(g.a, this.a.d);
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
        return this.a.d;
    }
}
