package com.xiaomi.push.service;

import android.content.Intent;
import android.os.SystemClock;
import com.xiaomi.push.service.XMPushService;
import java.util.concurrent.RejectedExecutionException;

/* JADX INFO: loaded from: classes4.dex */
public class p {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static long f8381a;
    private static long b;
    private static long c;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final a f1005a;

    /* JADX INFO: renamed from: a, reason: collision with other field name */
    private final c f1006a;

    final class a {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final c f8382a;

        a(c cVar) {
            this.f8382a = cVar;
        }

        protected void finalize() throws Throwable {
            try {
                synchronized (this.f8382a) {
                    this.f8382a.c = true;
                    this.f8382a.notify();
                }
            } finally {
                super.finalize();
            }
        }
    }

    public abstract class b implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected int f8383a;

        public b(int i) {
            this.f8383a = i;
        }
    }

    final class c extends Thread {

        /* JADX INFO: renamed from: b, reason: collision with other field name */
        private boolean f1009b;
        private boolean c;

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private volatile long f8384a = 0;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private volatile boolean f1008a = false;
        private long b = 50;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        private a f1007a = new a();

        final class a {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private int f8385a;

            /* JADX INFO: renamed from: a, reason: collision with other field name */
            private d[] f1010a;
            private int b;
            private int c;

            private a() {
                this.f8385a = 256;
                this.f1010a = new d[256];
                this.b = 0;
                this.c = 0;
            }

            /* JADX INFO: Access modifiers changed from: private */
            public int a(d dVar) {
                int i = 0;
                while (true) {
                    d[] dVarArr = this.f1010a;
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
                if (dVar.f1012a.f8383a == 8) {
                    XMPushService.d dVar2 = (XMPushService.d) dVar.f1012a;
                    if (dVar2.a().f386a != null) {
                        dVar2.a().f386a.f916b = System.currentTimeMillis();
                        dVar2.a().f386a.b = a(dVar);
                        return;
                    }
                    return;
                }
                if (dVar.f1012a.f8383a == 15 && (intentA = ((XMPushService.i) dVar.f1012a).a()) != null && "10".equals(intentA.getStringExtra("ext_chid"))) {
                    intentA.putExtra("enqueue", System.currentTimeMillis());
                    intentA.putExtra(com.tkay.expressad.foundation.d.l.d, a(dVar));
                }
            }

            private void c() {
                int i = this.b - 1;
                int i2 = (i - 1) / 2;
                while (this.f1010a[i].f1011a < this.f1010a[i2].f1011a) {
                    d[] dVarArr = this.f1010a;
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
                    if (i4 < i3 && this.f1010a[i4].f1011a < this.f1010a[i2].f1011a) {
                        i2 = i4;
                    }
                    if (this.f1010a[i].f1011a < this.f1010a[i2].f1011a) {
                        return;
                    }
                    d[] dVarArr = this.f1010a;
                    d dVar = dVarArr[i];
                    dVarArr[i] = dVarArr[i2];
                    dVarArr[i2] = dVar;
                    int i5 = i2;
                    i2 = (i2 * 2) + 1;
                    i = i5;
                }
            }

            public d a() {
                return this.f1010a[0];
            }

            /* JADX INFO: renamed from: a, reason: collision with other method in class */
            public void m689a() {
                this.f1010a = new d[this.f8385a];
                this.b = 0;
            }

            public void a(int i) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.f1010a[i2].f8386a == i) {
                        this.f1010a[i2].a();
                    }
                }
                b();
            }

            public void a(int i, b bVar) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.f1010a[i2].f1012a == bVar) {
                        this.f1010a[i2].a();
                    }
                }
                b();
            }

            /* JADX INFO: renamed from: a, reason: collision with other method in class */
            public void m690a(d dVar) {
                d[] dVarArr = this.f1010a;
                int length = dVarArr.length;
                int i = this.b;
                if (length == i) {
                    d[] dVarArr2 = new d[i * 2];
                    System.arraycopy(dVarArr, 0, dVarArr2, 0, i);
                    this.f1010a = dVarArr2;
                }
                d[] dVarArr3 = this.f1010a;
                int i2 = this.b;
                this.b = i2 + 1;
                dVarArr3[i2] = dVar;
                c();
                b(dVar);
            }

            /* JADX INFO: renamed from: a, reason: collision with other method in class */
            public boolean m691a() {
                return this.b == 0;
            }

            /* JADX INFO: renamed from: a, reason: collision with other method in class */
            public boolean m692a(int i) {
                for (int i2 = 0; i2 < this.b; i2++) {
                    if (this.f1010a[i2].f8386a == i) {
                        return true;
                    }
                }
                return false;
            }

            public void b() {
                int i = 0;
                while (i < this.b) {
                    if (this.f1010a[i].f1014a) {
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
                d[] dVarArr = this.f1010a;
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

        /* JADX INFO: Access modifiers changed from: private */
        public void a(d dVar) {
            this.f1007a.m690a(dVar);
            notify();
        }

        public synchronized void a() {
            this.f1009b = true;
            this.f1007a.m689a();
            notify();
        }

        /* JADX INFO: renamed from: a, reason: collision with other method in class */
        public boolean m688a() {
            return this.f1008a && SystemClock.uptimeMillis() - this.f8384a > 600000;
        }

        /* JADX WARN: Code restructure failed: missing block: B:50:0x0093, code lost:
        
            r10.f8384a = android.os.SystemClock.uptimeMillis();
            r10.f1008a = true;
            r2.f1012a.run();
            r10.f1008a = false;
         */
        /* JADX WARN: Code restructure failed: missing block: B:52:0x00a4, code lost:
        
            r1 = move-exception;
         */
        /* JADX WARN: Code restructure failed: missing block: B:53:0x00a5, code lost:
        
            monitor-enter(r10);
         */
        /* JADX WARN: Code restructure failed: missing block: B:54:0x00a6, code lost:
        
            r10.f1009b = true;
         */
        /* JADX WARN: Code restructure failed: missing block: B:56:0x00a9, code lost:
        
            throw r1;
         */
        @Override // java.lang.Thread, java.lang.Runnable
        /*
            Code decompiled incorrectly, please refer to instructions dump.
            To view partially-correct add '--show-bad-code' argument
        */
        public void run() {
            /*
                r10 = this;
            L0:
                monitor-enter(r10)
                boolean r0 = r10.f1009b     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L7
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                return
            L7:
                com.xiaomi.push.service.p$c$a r0 = r10.f1007a     // Catch: java.lang.Throwable -> Lb3
                boolean r0 = r0.m691a()     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L1a
                boolean r0 = r10.c     // Catch: java.lang.Throwable -> Lb3
                if (r0 == 0) goto L15
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                return
            L15:
                r10.wait()     // Catch: java.lang.InterruptedException -> L18 java.lang.Throwable -> Lb3
            L18:
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                goto L0
            L1a:
                long r0 = com.xiaomi.push.service.p.a()     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$c$a r2 = r10.f1007a     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$d r2 = r2.a()     // Catch: java.lang.Throwable -> Lb3
                java.lang.Object r3 = r2.f1013a     // Catch: java.lang.Throwable -> Lb3
                monitor-enter(r3)     // Catch: java.lang.Throwable -> Lb3
                boolean r4 = r2.f1014a     // Catch: java.lang.Throwable -> Lb0
                r5 = 0
                if (r4 == 0) goto L33
                com.xiaomi.push.service.p$c$a r0 = r10.f1007a     // Catch: java.lang.Throwable -> Lb0
                r0.b(r5)     // Catch: java.lang.Throwable -> Lb0
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                goto L18
            L33:
                long r6 = r2.f1011a     // Catch: java.lang.Throwable -> Lb0
                long r6 = r6 - r0
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                r0 = 0
                int r3 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                r8 = 50
                if (r3 <= 0) goto L58
                long r0 = r10.b     // Catch: java.lang.Throwable -> Lb3
                int r0 = (r6 > r0 ? 1 : (r6 == r0 ? 0 : -1))
                if (r0 <= 0) goto L47
                long r6 = r10.b     // Catch: java.lang.Throwable -> Lb3
            L47:
                long r0 = r10.b     // Catch: java.lang.Throwable -> Lb3
                long r0 = r0 + r8
                r10.b = r0     // Catch: java.lang.Throwable -> Lb3
                r2 = 500(0x1f4, double:2.47E-321)
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 <= 0) goto L54
                r10.b = r2     // Catch: java.lang.Throwable -> Lb3
            L54:
                r10.wait(r6)     // Catch: java.lang.InterruptedException -> L18 java.lang.Throwable -> Lb3
                goto L18
            L58:
                r10.b = r8     // Catch: java.lang.Throwable -> Lb3
                java.lang.Object r3 = r2.f1013a     // Catch: java.lang.Throwable -> Lb3
                monitor-enter(r3)     // Catch: java.lang.Throwable -> Lb3
                com.xiaomi.push.service.p$c$a r4 = r10.f1007a     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$d r4 = r4.a()     // Catch: java.lang.Throwable -> Lad
                long r6 = r4.f1011a     // Catch: java.lang.Throwable -> Lad
                long r8 = r2.f1011a     // Catch: java.lang.Throwable -> Lad
                int r4 = (r6 > r8 ? 1 : (r6 == r8 ? 0 : -1))
                if (r4 == 0) goto L72
                com.xiaomi.push.service.p$c$a r4 = r10.f1007a     // Catch: java.lang.Throwable -> Lad
                int r4 = com.xiaomi.push.service.p.c.a.a(r4, r2)     // Catch: java.lang.Throwable -> Lad
                goto L73
            L72:
                r4 = r5
            L73:
                boolean r6 = r2.f1014a     // Catch: java.lang.Throwable -> Lad
                if (r6 == 0) goto L84
                com.xiaomi.push.service.p$c$a r0 = r10.f1007a     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$c$a r1 = r10.f1007a     // Catch: java.lang.Throwable -> Lad
                int r1 = com.xiaomi.push.service.p.c.a.a(r1, r2)     // Catch: java.lang.Throwable -> Lad
                r0.b(r1)     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                goto L18
            L84:
                long r6 = r2.f1011a     // Catch: java.lang.Throwable -> Lad
                r2.a(r6)     // Catch: java.lang.Throwable -> Lad
                com.xiaomi.push.service.p$c$a r6 = r10.f1007a     // Catch: java.lang.Throwable -> Lad
                r6.b(r4)     // Catch: java.lang.Throwable -> Lad
                r2.f1011a = r0     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                r0 = 1
                long r3 = android.os.SystemClock.uptimeMillis()     // Catch: java.lang.Throwable -> La4
                r10.f8384a = r3     // Catch: java.lang.Throwable -> La4
                r10.f1008a = r0     // Catch: java.lang.Throwable -> La4
                com.xiaomi.push.service.p$b r1 = r2.f1012a     // Catch: java.lang.Throwable -> La4
                r1.run()     // Catch: java.lang.Throwable -> La4
                r10.f1008a = r5     // Catch: java.lang.Throwable -> La4
                goto L0
            La4:
                r1 = move-exception
                monitor-enter(r10)
                r10.f1009b = r0     // Catch: java.lang.Throwable -> Laa
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Laa
                throw r1
            Laa:
                r0 = move-exception
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Laa
                throw r0
            Lad:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lad
                throw r0     // Catch: java.lang.Throwable -> Lb3
            Lb0:
                r0 = move-exception
                monitor-exit(r3)     // Catch: java.lang.Throwable -> Lb0
                throw r0     // Catch: java.lang.Throwable -> Lb3
            Lb3:
                r0 = move-exception
                monitor-exit(r10)     // Catch: java.lang.Throwable -> Lb3
                throw r0
            */
            throw new UnsupportedOperationException("Method not decompiled: com.xiaomi.push.service.p.c.run():void");
        }
    }

    class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        int f8386a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        long f1011a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        b f1012a;

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        final Object f1013a = new Object();

        /* JADX INFO: renamed from: a, reason: collision with other field name */
        boolean f1014a;
        private long b;

        d() {
        }

        void a(long j) {
            synchronized (this.f1013a) {
                this.b = j;
            }
        }

        public boolean a() {
            boolean z;
            synchronized (this.f1013a) {
                z = !this.f1014a && this.f1011a > 0;
                this.f1014a = true;
            }
            return z;
        }
    }

    static {
        long jElapsedRealtime = SystemClock.elapsedRealtime() > 0 ? SystemClock.elapsedRealtime() : 0L;
        f8381a = jElapsedRealtime;
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
        this.f1006a = new c(str, z);
        this.f1005a = new a(this.f1006a);
    }

    public p(boolean z) {
        this("Timer-" + b(), z);
    }

    static synchronized long a() {
        long jElapsedRealtime = SystemClock.elapsedRealtime();
        if (jElapsedRealtime > b) {
            f8381a += jElapsedRealtime - b;
        }
        b = jElapsedRealtime;
        return f8381a;
    }

    private static synchronized long b() {
        long j;
        j = c;
        c = 1 + j;
        return j;
    }

    private void b(b bVar, long j) {
        synchronized (this.f1006a) {
            if (this.f1006a.f1009b) {
                throw new IllegalStateException("Timer was canceled");
            }
            long jA = j + a();
            if (jA < 0) {
                throw new IllegalArgumentException("Illegal delay to start the TimerTask: " + jA);
            }
            d dVar = new d();
            dVar.f8386a = bVar.f8383a;
            dVar.f1012a = bVar;
            dVar.f1011a = jA;
            this.f1006a.a(dVar);
        }
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public void m683a() {
        com.xiaomi.channel.commonutils.logger.b.m43a("quit. finalizer:" + this.f1005a);
        this.f1006a.a();
    }

    public void a(int i) {
        synchronized (this.f1006a) {
            this.f1006a.f1007a.a(i);
        }
    }

    public void a(int i, b bVar) {
        synchronized (this.f1006a) {
            this.f1006a.f1007a.a(i, bVar);
        }
    }

    public void a(b bVar) {
        if (com.xiaomi.channel.commonutils.logger.b.a() >= 1 || Thread.currentThread() == this.f1006a) {
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

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m684a() {
        return this.f1006a.m688a();
    }

    /* JADX INFO: renamed from: a, reason: collision with other method in class */
    public boolean m685a(int i) {
        boolean zM692a;
        synchronized (this.f1006a) {
            zM692a = this.f1006a.f1007a.m692a(i);
        }
        return zM692a;
    }

    /* JADX INFO: renamed from: b, reason: collision with other method in class */
    public void m686b() {
        synchronized (this.f1006a) {
            this.f1006a.f1007a.m689a();
        }
    }
}
