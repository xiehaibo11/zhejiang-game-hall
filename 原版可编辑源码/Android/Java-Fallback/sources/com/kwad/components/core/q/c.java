package com.kwad.components.core.q;

public final class c extends java.io.InputStream {
    private java.io.InputStream QA;
    private int QB;
    private long QC;
    private volatile float QD;
    private volatile long QE;
    private int QF;
    private int Qx;
    private int Qy;
    private long Qz;

    c(java.io.InputStream r3, int r4) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.Qx = r0
            r0 = 10000(0x2710, float:1.4013E-41)
            r2.Qy = r0
            r0 = -1
            r2.Qz = r0
            r2.QC = r0
            r0 = 20480(0x5000, float:2.8699E-41)
            r2.QF = r0
            if (r4 >= r0) goto L17
            r4 = r0
        L17:
            r2.QA = r3
            float r3 = (float) r4
            r4 = 1148846080(0x447a0000, float:1000.0)
            float r3 = r3 / r4
            r2.QD = r3
            return
    }

    private static void A(long r0) {
            java.lang.Thread.sleep(r0)     // Catch: java.lang.InterruptedException -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }

    private static long e(long r3, long r5) {
            r0 = 0
            int r2 = (r3 > r0 ? 1 : (r3 == r0 ? 0 : -1))
            if (r2 > 0) goto L7
            return r0
        L7:
            int r0 = (r5 > r0 ? 1 : (r5 == r0 ? 0 : -1))
            if (r0 > 0) goto Le
            r3 = -1
            return r3
        Le:
            long r3 = r3 / r5
            return r3
    }

    private void pQ() {
            r2 = this;
            r0 = 0
            r2.Qx = r0
            long r0 = java.lang.System.currentTimeMillis()
            r2.Qz = r0
            return
    }

    private void pR() {
            r7 = this;
            int r0 = r7.Qx
            int r1 = r7.Qy
            if (r0 >= r1) goto L7
            return
        L7:
            long r0 = java.lang.System.currentTimeMillis()
            long r2 = r7.Qz
            long r2 = r0 - r2
            int r4 = r7.Qx
            float r4 = (float) r4
            float r5 = r7.QD
            float r4 = r4 / r5
            long r5 = r7.QC
            long r0 = r0 - r5
            int r5 = r7.QB
            long r5 = (long) r5
            long r0 = e(r5, r0)
            r7.QE = r0
            float r0 = (float) r2
            int r1 = (r4 > r0 ? 1 : (r4 == r0 ? 0 : -1))
            if (r1 <= 0) goto L2b
            float r4 = r4 - r0
            long r0 = (long) r4
            A(r0)
        L2b:
            r7.pQ()
            return
    }

    @Override
    public final int available() {
            r1 = this;
            java.io.InputStream r0 = r1.QA
            int r0 = r0.available()
            return r0
    }

    @Override
    public final void close() {
            r2 = this;
            java.io.InputStream r0 = r2.QA
            r0.close()
            com.kwad.components.core.q.b.a(r2)
            r0 = -1
            r2.QC = r0
            return
    }

    @Override
    public final synchronized void mark(int r2) {
            r1 = this;
            monitor-enter(r1)
            java.io.InputStream r0 = r1.QA     // Catch: java.lang.Throwable -> L8
            r0.mark(r2)     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r2 = move-exception
            monitor-exit(r1)
            throw r2
    }

    @Override
    public final boolean markSupported() {
            r1 = this;
            java.io.InputStream r0 = r1.QA
            boolean r0 = r0.markSupported()
            return r0
    }

    public final long pP() {
            r2 = this;
            long r0 = r2.QE
            return r0
    }

    @Override
    public final int read() {
            r4 = this;
            long r0 = r4.QC
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 > 0) goto Le
            long r0 = java.lang.System.currentTimeMillis()
            r4.QC = r0
        Le:
            int r0 = r4.QB
            r1 = 1
            int r0 = r0 + r1
            r4.QB = r0
            boolean r0 = com.kwad.components.core.q.b.Qv
            if (r0 == 0) goto L1e
            boolean r0 = com.kwad.components.core.q.b.Qu
            if (r0 == 0) goto L1e
            r0 = r1
            goto L1f
        L1e:
            r0 = 0
        L1f:
            if (r0 != 0) goto L28
            java.io.InputStream r0 = r4.QA
            int r0 = r0.read()
            return r0
        L28:
            int r0 = r4.Qx
            if (r0 >= 0) goto L2f
            r4.pQ()
        L2f:
            java.io.InputStream r0 = r4.QA
            int r0 = r0.read()
            int r2 = r4.Qx
            int r2 = r2 + r1
            r4.Qx = r2
            r4.pR()
            return r0
    }

    @Override
    public final synchronized void reset() {
            r1 = this;
            monitor-enter(r1)
            java.io.InputStream r0 = r1.QA     // Catch: java.lang.Throwable -> L8
            r0.reset()     // Catch: java.lang.Throwable -> L8
            monitor-exit(r1)
            return
        L8:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    @Override
    public final long skip(long r2) {
            r1 = this;
            java.io.InputStream r0 = r1.QA
            long r2 = r0.skip(r2)
            return r2
    }
}
