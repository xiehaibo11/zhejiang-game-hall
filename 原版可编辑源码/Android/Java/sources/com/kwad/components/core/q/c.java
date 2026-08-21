package com.kwad.components.core.q;

import java.io.IOException;
import java.io.InputStream;

public final class c extends InputStream {
    private InputStream QA;
    private int QB;
    private volatile float QD;
    private volatile long QE;
    private int Qx = -1;
    private int Qy = 10000;
    private long Qz = -1;
    private long QC = -1;
    private int QF = 20480;

    c(InputStream inputStream, int i) {
        i = i < 20480 ? 20480 : i;
        this.QA = inputStream;
        this.QD = i / 1000.0f;
    }

    private static void A(long j) {
        try {
            Thread.sleep(j);
        } catch (InterruptedException e) {
            e.printStackTrace();
        }
    }

    private static long e(long j, long j2) {
        if (j <= 0) {
            return 0L;
        }
        if (j2 <= 0) {
            return -1L;
        }
        return j / j2;
    }

    private void pQ() {
        this.Qx = 0;
        this.Qz = System.currentTimeMillis();
    }

    private void pR() {
        if (this.Qx < this.Qy) {
            return;
        }
        long jCurrentTimeMillis = System.currentTimeMillis();
        long j = jCurrentTimeMillis - this.Qz;
        float f = this.Qx / this.QD;
        this.QE = e(this.QB, jCurrentTimeMillis - this.QC);
        float f2 = j;
        if (f > f2) {
            A((long) (f - f2));
        }
        pQ();
    }

    @Override
    public final int available() {
        return this.QA.available();
    }

    @Override
    public final void close() throws IOException {
        this.QA.close();
        b.a(this);
        this.QC = -1L;
    }

    @Override
    public final synchronized void mark(int i) {
        this.QA.mark(i);
    }

    @Override
    public final boolean markSupported() {
        return this.QA.markSupported();
    }

    public final long pP() {
        return this.QE;
    }

    @Override
    public final int read() throws IOException {
        if (this.QC <= 0) {
            this.QC = System.currentTimeMillis();
        }
        this.QB++;
        if (!(b.Qv && b.Qu)) {
            return this.QA.read();
        }
        if (this.Qx < 0) {
            pQ();
        }
        int i = this.QA.read();
        this.Qx++;
        pR();
        return i;
    }

    @Override
    public final synchronized void reset() {
        this.QA.reset();
    }

    @Override
    public final long skip(long j) {
        return this.QA.skip(j);
    }
}
