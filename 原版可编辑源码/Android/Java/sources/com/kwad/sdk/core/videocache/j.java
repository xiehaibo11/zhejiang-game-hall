package com.kwad.sdk.core.videocache;

import com.kwad.sdk.utils.ao;
import java.lang.Thread;
import java.util.concurrent.atomic.AtomicInteger;

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

        a(j jVar, byte b) {
            this();
        }

        @Override
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

    /* JADX WARN: Code restructure failed: missing block: B:15:0x0039, code lost:
    
        r2 = r2 + ((long) r5);
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    private void DO() {
        long length = -1;
        long jDB = 0;
        try {
            jDB = this.awO.DB();
            this.awN.ai(jDB);
            length = this.awN.length();
            byte[] bArr = new byte[8192];
            while (true) {
                int i = this.awN.read(bArr);
                if (i == -1) {
                    tryComplete();
                    DP();
                    break;
                } else {
                    synchronized (this.awQ) {
                        if (isStopped()) {
                            break;
                        } else {
                            this.awO.d(bArr, i);
                        }
                    }
                }
                h(jDB, length);
            }
        } finally {
            try {
            } finally {
            }
        }
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
