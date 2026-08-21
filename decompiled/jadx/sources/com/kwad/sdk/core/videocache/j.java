package com.kwad.sdk.core.videocache;

import com.kwad.sdk.utils.ao;
import java.lang.Thread;
import java.util.concurrent.atomic.AtomicInteger;

/* JADX INFO: loaded from: classes2.dex */
class j {
    private final l awN;
    private final com.kwad.sdk.core.videocache.a awO;
    private volatile Thread awS;
    private volatile boolean kU;
    private final Object awP = new Object();
    private final Object awQ = new Object();
    private volatile int awT = -1;
    private final AtomicInteger awR = new AtomicInteger();

    class a implements Runnable {
        private a() {
        }

        /* synthetic */ a(j jVar, byte b) {
            this();
        }

        @Override // java.lang.Runnable
        public final void run() {
            j.this.DO();
        }
    }

    public j(l lVar, com.kwad.sdk.core.videocache.a aVar) {
        this.awN = (l) ao.checkNotNull(lVar);
        this.awO = (com.kwad.sdk.core.videocache.a) ao.checkNotNull(aVar);
    }

    private void DL() throws ProxyCacheException {
        int i = this.awR.get();
        if (i <= 0) {
            return;
        }
        this.awR.set(0);
        throw new ProxyCacheException("Error reading source " + i + " times");
    }

    private synchronized void DM() {
        byte b = 0;
        boolean z = (this.awS == null || this.awS.getState() == Thread.State.TERMINATED) ? false : true;
        if (!this.kU && !this.awO.isCompleted() && !z) {
            this.awS = new Thread(new a(this, b), "Source reader for " + this.awN);
            this.awS.start();
        }
    }

    private void DN() {
        synchronized (this.awP) {
            try {
                try {
                    this.awP.wait(1000L);
                } catch (InterruptedException e) {
                    throw new ProxyCacheException("Waiting source data is interrupted!", e);
                }
            } catch (Throwable th) {
                throw th;
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    /* JADX WARN: Code restructure failed: missing block: B:15:0x0039, code lost:
    
        r2 = r2 + ((long) r5);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
        To view partially-correct add '--show-bad-code' argument
    */
    public void DO() {
        /*
            r8 = this;
            r0 = -1
            r2 = 0
            com.kwad.sdk.core.videocache.a r4 = r8.awO     // Catch: java.lang.Throwable -> L49
            long r2 = r4.DB()     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.videocache.l r4 = r8.awN     // Catch: java.lang.Throwable -> L49
            r4.ai(r2)     // Catch: java.lang.Throwable -> L49
            com.kwad.sdk.core.videocache.l r4 = r8.awN     // Catch: java.lang.Throwable -> L49
            long r0 = r4.length()     // Catch: java.lang.Throwable -> L49
            r4 = 8192(0x2000, float:1.148E-41)
            byte[] r4 = new byte[r4]     // Catch: java.lang.Throwable -> L49
        L19:
            com.kwad.sdk.core.videocache.l r5 = r8.awN     // Catch: java.lang.Throwable -> L49
            int r5 = r5.read(r4)     // Catch: java.lang.Throwable -> L49
            r6 = -1
            if (r5 == r6) goto L42
            java.lang.Object r6 = r8.awQ     // Catch: java.lang.Throwable -> L49
            monitor-enter(r6)     // Catch: java.lang.Throwable -> L49
            boolean r7 = r8.isStopped()     // Catch: java.lang.Throwable -> L3f
            if (r7 == 0) goto L33
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
        L2c:
            r8.DQ()
            r8.h(r2, r0)
            return
        L33:
            com.kwad.sdk.core.videocache.a r7 = r8.awO     // Catch: java.lang.Throwable -> L3f
            r7.d(r4, r5)     // Catch: java.lang.Throwable -> L3f
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
            long r5 = (long) r5
            long r2 = r2 + r5
            r8.h(r2, r0)     // Catch: java.lang.Throwable -> L49
            goto L19
        L3f:
            r4 = move-exception
            monitor-exit(r6)     // Catch: java.lang.Throwable -> L3f
            throw r4     // Catch: java.lang.Throwable -> L49
        L42:
            r8.tryComplete()     // Catch: java.lang.Throwable -> L49
            r8.DP()     // Catch: java.lang.Throwable -> L49
            goto L2c
        L49:
            r4 = move-exception
            java.util.concurrent.atomic.AtomicInteger r5 = r8.awR     // Catch: java.lang.Throwable -> L53
            r5.incrementAndGet()     // Catch: java.lang.Throwable -> L53
            onError(r4)     // Catch: java.lang.Throwable -> L53
            goto L2c
        L53:
            r4 = move-exception
            r8.DQ()
            r8.h(r2, r0)
            throw r4
        */
        throw new UnsupportedOperationException("Method not decompiled: com.kwad.sdk.core.videocache.j.DO():void");
    }

    private void DP() {
        this.awT = 100;
        cz(this.awT);
    }

    private void DQ() {
        try {
            this.awN.close();
        } catch (ProxyCacheException e) {
            onError(new ProxyCacheException("Error closing source " + this.awN, e));
        }
    }

    private void h(long j, long j2) {
        i(j, j2);
        synchronized (this.awP) {
            this.awP.notifyAll();
        }
    }

    private void i(long j, long j2) {
        int i = (j2 > 0L ? 1 : (j2 == 0L ? 0 : -1)) == 0 ? 100 : (int) ((j / j2) * 100.0f);
        boolean z = i != this.awT;
        if ((j2 >= 0) && z) {
            cz(i);
        }
        this.awT = i;
    }

    private boolean isStopped() {
        return Thread.currentThread().isInterrupted() || this.kU;
    }

    private static void onError(Throwable th) {
        if (th instanceof InterruptedProxyCacheException) {
            com.kwad.sdk.core.e.c.d("ProxyCache", "ProxyCache is interrupted");
        } else {
            com.kwad.sdk.core.e.c.e("ProxyCache", "ProxyCache error");
        }
    }

    private void tryComplete() {
        synchronized (this.awQ) {
            if (!isStopped() && this.awO.DB() == this.awN.length()) {
                this.awO.complete();
            }
        }
    }

    public final int a(byte[] bArr, long j, int i) throws ProxyCacheException {
        k.b(bArr, j, 8192);
        while (!this.awO.isCompleted() && this.awO.DB() < 8192 + j && !this.kU) {
            DM();
            DN();
            DL();
        }
        int iA = this.awO.a(bArr, j, 8192);
        if (this.awO.isCompleted() && this.awT != 100) {
            this.awT = 100;
            cz(100);
        }
        return iA;
    }

    protected void cz(int i) {
    }

    public final void shutdown() {
        synchronized (this.awQ) {
            com.kwad.sdk.core.e.c.d("ProxyCache", "Shutdown proxy for " + this.awN);
            try {
                this.kU = true;
                if (this.awS != null) {
                    this.awS.interrupt();
                }
                this.awO.close();
            } catch (ProxyCacheException e) {
                onError(e);
            }
        }
    }
}
