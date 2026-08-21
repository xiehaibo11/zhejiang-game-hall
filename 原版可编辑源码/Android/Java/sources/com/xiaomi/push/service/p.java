package com.xiaomi.push.service;

import android.content.Intent;
import android.os.SystemClock;
import com.xiaomi.push.service.XMPushService;
import java.util.concurrent.RejectedExecutionException;

public class p {
    private static long a;
    private static long b;
    private static long c;
    private final a a;
    private final c a;

    final class a {
        private final c a;

        a(c cVar) {
            this.a = cVar;
        }

        protected void finalize() throws Throwable {
            try {
                synchronized (this.a) {
                    this.a.c = true;
                    this.a.notify();
                }
            } finally {
                super.finalize();
            }
        }
    }

    public abstract class b implements Runnable {
        protected int a;

        public b(int i) {
            this.a = i;
        }
    }

    final class c extends Thread {
        private boolean b;
        private boolean c;
        private volatile long a = 0;
        private volatile boolean a = false;
        private long b = 50;
        private a a = new a();

        final class a {
            private int a;
            private d[] a;
            private int b;
            private int c;

            private a() {
                this.a = 256;
                this.a = new d[256];
                this.b = 0;
                this.c = 0;
            }

            private int a(d dVar) {
                int i = 0;
                while (true) {
                    d[] dVarArr = this.a;
                    if (i >= dVarArr.length) {
                        return -1;
                    }
                    if (dVarArr[i] == dVar) {
                        return i;
                    }
                    i++;
                }
            }

            private void b(d dVar) {
                Intent intentA;
                if (dVar.a.a == 8) {
                    XMPushService.d dVar2 = (XMPushService.d) dVar.a;
                    if (dVar2.a().a != null) {
                        dVar2.a().a.b = System.currentTimeMillis();
                        dVar2.a().a.b = a(dVar);
                        return;
                    }
                    return;
                }
                if (dVar.a.a == 15 && (intentA = ((XMPushService.i) dVar.a).a()) != null && "10".equals(intentA.getStringExtra("ext_chid"))) {
                    intentA.putExtra("enqueue", System.currentTimeMillis());
                    intentA.putExtra(com.tkay.expressad.foundation.d.l.d, a(dVar));
                }
            }

            private void c() {
                int i = this.b - 1;
                int i2 = (i - 1) / 2;
                while (this.a[i].a < this.a[i2].a) {
                    d[] dVarArr = this.a;
                    d dVar = dVarArr[i];
                    dVarArr[i] = dVarArr[i2];
                    dVarArr[i2] = dVar;
                    int i3 = i2;
                    i2 = (i2 - 1) / 2;
                    i = i3;
                }
            }

            private void c(int i) {
                int i2 = (i * 2) + 1;
                while (true) {
                    int i3 = this.b;
                    if (i2 >= i3 || i3 <= 0) {
                        return;
                    }
                    int i4 = i2 + 1;
                    if (i4 < i3 && this.a[i4].a < this.a[i2].a) {
                        i2 = i4;
                    }
                    if (this.a[i].a < this.a[i2].a) {
                        return;
                    }
                    d[] dVarArr = this.a;
                    d dVar = dVarArr[i];
                    dVarArr[i] = dVarArr[i2];
                    dVarArr[i2] = dVar;
                    int i5 = i2;
                    i2 = (i2 * 2) + 1;
                    i = i5;
                }
            }

            public d a() {
                return this.a[0];
            }

            public void a() {
                this.a = new d[this.a];
                this.b = 0;
            }

            public void a(int i) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.a[i2].a == i) {
                        this.a[i2].a();
                    }
                }
                b();
            }

            public void a(int i, b bVar) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.a[i2].a == bVar) {
                        this.a[i2].a();
                    }
                }
                b();
            }

            public void a(d dVar) {
                d[] dVarArr = this.a;
                int length = dVarArr.length;
                int i = this.b;
                if (length == i) {
                    d[] dVarArr2 = new d[i * 2];
                    System.arraycopy(dVarArr, 0, dVarArr2, 0, i);
                    this.a = dVarArr2;
                }
                d[] dVarArr3 = this.a;
                int i2 = this.b;
                this.b = i2 + 1;
                dVarArr3[i2] = dVar;
                c();
                b(dVar);
            }

            public boolean a() {
                return this.b == 0;
            }

            public boolean a(int i) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.a[i2].a == i) {
                        return true;
                    }
                }
                return false;
            }

            public void b() {
                int i = 0;
                while (i < this.b) {
                    if (this.a[i].a) {
                        this.c++;
                        b(i);
                        i--;
                    }
                    i++;
                }
            }

            public void b(int i) {
                int i2;
                if (i < 0 || i >= (i2 = this.b)) {
                    return;
                }
                d[] dVarArr = this.a;
                int i3 = i2 - 1;
                this.b = i3;
                dVarArr[i] = dVarArr[i3];
                dVarArr[i3] = null;
                c(i);
            }
        }

        c(String str, boolean z) {
            setName(str);
            setDaemon(z);
            start();
        }

        private void a(d dVar) {
            this.a.a(dVar);
            notify();
        }

        public synchronized void a() {
            this.b = true;
            this.a.a();
            notify();
        }

        public boolean a() {
            return this.a && SystemClock.uptimeMillis() - this.a > 600000;
        }

        /* JADX WARN: Code restructure failed: missing block: B:50:0x0093, code lost:
        
            r10.a = android.os.SystemClock.uptimeMillis();
            r10.a = true;
            r2.a.run();
            r10.a = false;
         */
        /* JADX WARN: Code restructure failed: missing block: B:52:0x00a4, code lost:
        
            r1 = move-exception;
         */
        /* JADX WARN: Code restructure failed: missing block: B:53:0x00a5, code lost:
        
            monitor-enter(r10);
         */
        /* JADX WARN: Code restructure failed: missing block: B:54:0x00a6, code lost:
        
            r10.b = true;
         */
        /* JADX WARN: Code restructure failed: missing block: B:56:0x00a9, code lost:
        
            throw r1;
         */
        @Override
        /*
            Code decompiled incorrectly, please refer to instructions dump.
        */
        public void run() {
            while (true) {
                synchronized (this) {
                    if (this.b) {
                        return;
                    }
                    if (!this.a.a()) {
                        long jA = p.a();
                        d dVarA = this.a.a();
                        synchronized (dVarA.a) {
                            if (dVarA.a) {
                                this.a.b(0);
                            } else {
                                long j = dVarA.a - jA;
                                if (j > 0) {
                                    if (j > this.b) {
                                        j = this.b;
                                    }
                                    long j2 = this.b + 50;
                                    this.b = j2;
                                    if (j2 > 500) {
                                        this.b = 500L;
                                    }
                                    wait(j);
                                } else {
                                    this.b = 50L;
                                    synchronized (dVarA.a) {
                                        int iA = this.a.a().a != dVarA.a ? this.a.a(dVarA) : 0;
                                        if (dVarA.a) {
                                            this.a.b(this.a.a(dVarA));
                                        } else {
                                            dVarA.a(dVarA.a);
                                            this.a.b(iA);
                                            dVarA.a = 0L;
                                        }
                                    }
                                }
                            }
                        }
                    } else if (this.c) {
                        return;
                    } else {
                        try {
                            wait();
                        } catch (InterruptedException unused) {
                        }
                    }
                }
            }
        }
    }

    class d {
        int a;
        long a;
        b a;
        final Object a = new Object();
        boolean a;
        private long b;

        d() {
        }

        void a(long j) {
            synchronized (this.a) {
                this.b = j;
            }
        }

        public boolean a() {
            boolean z;
            synchronized (this.a) {
                z = !this.a && this.a > 0;
                this.a = true;
            }
            return z;
        }
    }

    static {
        long jElapsedRealtime = SystemClock.elapsedRealtime() > 0 ? SystemClock.elapsedRealtime() : 0L;
        a = jElapsedRealtime;
        b = jElapsedRealtime;
    }

    public p() {
        this(false);
    }

    public p(String str) {
        this(str, false);
    }

    public p(String str, boolean z) {
        if (str == null) {
            throw new NullPointerException("name == null");
        }
        this.a = new c(str, z);
        this.a = new a(this.a);
    }

    public p(boolean z) {
        this("Timer-" + b(), z);
    }

    static synchronized long a() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (jElapsedRealtime > b) {
            a += jElapsedRealtime - b;
        }
        b = jElapsedRealtime;
        return a;
    }

    private static synchronized long b() {
        long j;
        j = c;
        c = 1 + j;
        return j;
    }

    private void b(b bVar, long j) {
        synchronized (this.a) {
            if (this.a.b) {
                throw new IllegalStateException("Timer was canceled");
            }
            long jA = j + a();
            if (jA < 0) {
                throw new IllegalArgumentException("Illegal delay to start the TimerTask: " + jA);
            }
            d dVar = new d();
            dVar.a = bVar.a;
            dVar.a = bVar;
            dVar.a = jA;
            this.a.a(dVar);
        }
    }

    public void a() {
        com.xiaomi.channel.commonutils.logger.b.a("quit. finalizer:" + this.a);
        this.a.a();
    }

    public void a(int i) {
        synchronized (this.a) {
            this.a.a.a(i);
        }
    }

    public void a(int i, b bVar) {
        synchronized (this.a) {
            this.a.a.a(i, bVar);
        }
    }

    public void a(b bVar) {
        if (com.xiaomi.channel.commonutils.logger.b.a() >= 1 || Thread.currentThread() == this.a) {
            bVar.run();
        } else {
            com.xiaomi.channel.commonutils.logger.b.d("run job outside job job thread");
            throw new RejectedExecutionException("Run job outside job thread");
        }
    }

    public void a(b bVar, long j) {
        if (j >= 0) {
            b(bVar, j);
            return;
        }
        throw new IllegalArgumentException("delay < 0: " + j);
    }

    public boolean a() {
        return this.a.a();
    }

    public boolean a(int i) {
        boolean zA;
        synchronized (this.a) {
            zA = this.a.a.a(i);
        }
        return zA;
    }

    public void b() {
        synchronized (this.a) {
            this.a.a.a();
        }
    }
}
