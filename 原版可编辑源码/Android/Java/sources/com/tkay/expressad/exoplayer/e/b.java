package com.tkay.expressad.exoplayer.e;

import com.tkay.expressad.exoplayer.k.af;
import java.io.EOFException;
import java.util.Arrays;

public final class b implements f {
    private static final int a = 65536;
    private static final int b = 524288;
    private static final int c = 4096;
    private final com.tkay.expressad.exoplayer.j.h e;
    private final long f;
    private long g;
    private int i;
    private int j;
    private byte[] h = new byte[65536];
    private final byte[] d = new byte[4096];

    public b(com.tkay.expressad.exoplayer.j.h hVar, long j, long j2) {
        this.e = hVar;
        this.g = j;
        this.f = j2;
    }

    @Override
    public final int a(byte[] bArr, int i, int i2) throws InterruptedException, EOFException {
        int iE = e(bArr, i, i2);
        if (iE == 0) {
            iE = a(bArr, i, i2, 0, true);
        }
        i(iE);
        return iE;
    }

    @Override
    public final boolean a(byte[] bArr, int i, int i2, boolean z) throws InterruptedException, EOFException {
        int iE = e(bArr, i, i2);
        while (iE < i2 && iE != -1) {
            iE = a(bArr, i, i2, iE, z);
        }
        i(iE);
        return iE != -1;
    }

    @Override
    public final void b(byte[] bArr, int i, int i2) throws InterruptedException, EOFException {
        a(bArr, i, i2, false);
    }

    @Override
    public final int a(int i) throws InterruptedException, EOFException {
        int iG = g(i);
        if (iG == 0) {
            byte[] bArr = this.d;
            iG = a(bArr, 0, Math.min(i, bArr.length), 0, true);
        }
        i(iG);
        return iG;
    }

    @Override
    public final boolean b(int i) throws InterruptedException, EOFException {
        int iG = g(i);
        while (iG < i && iG != -1) {
            iG = a(this.d, -iG, Math.min(i, this.d.length + iG), iG, false);
        }
        i(iG);
        return iG != -1;
    }

    @Override
    public final boolean c(byte[] bArr, int i, int i2) {
        if (!d(i2)) {
            return false;
        }
        System.arraycopy(this.h, this.i - i2, bArr, i, i2);
        return true;
    }

    @Override
    public final boolean d(int i) throws InterruptedException, EOFException {
        f(i);
        int iMin = Math.min(this.j - this.i, i);
        while (iMin < i) {
            iMin = a(this.h, this.i, i, iMin, false);
            if (iMin == -1) {
                return false;
            }
        }
        int i2 = this.i + i;
        this.i = i2;
        this.j = Math.max(this.j, i2);
        return true;
    }

    @Override
    public final void e(int i) throws InterruptedException, EOFException {
        d(i);
    }

    @Override
    public final void a() {
        this.i = 0;
    }

    @Override
    public final long b() {
        return this.g + ((long) this.i);
    }

    @Override
    public final long c() {
        return this.g;
    }

    @Override
    public final long d() {
        return this.f;
    }

    @Override
    public final <E extends Throwable> void a(long j, E e) throws E {
        com.tkay.expressad.exoplayer.k.a.a(j >= 0);
        this.g = j;
        throw e;
    }

    private void f(int i) {
        int i2 = this.i + i;
        byte[] bArr = this.h;
        if (i2 > bArr.length) {
            this.h = Arrays.copyOf(this.h, af.a(bArr.length * 2, 65536 + i2, i2 + 524288));
        }
    }

    private int g(int i) {
        int iMin = Math.min(this.j, i);
        h(iMin);
        return iMin;
    }

    private int e(byte[] bArr, int i, int i2) {
        int i3 = this.j;
        if (i3 == 0) {
            return 0;
        }
        int iMin = Math.min(i3, i2);
        System.arraycopy(this.h, 0, bArr, i, iMin);
        h(iMin);
        return iMin;
    }

    private void h(int i) {
        int i2 = this.j - i;
        this.j = i2;
        this.i = 0;
        byte[] bArr = this.h;
        if (i2 < bArr.length - 524288) {
            bArr = new byte[i2 + 65536];
        }
        System.arraycopy(this.h, i, bArr, 0, this.j);
        this.h = bArr;
    }

    private int a(byte[] bArr, int i, int i2, int i3, boolean z) throws InterruptedException, EOFException {
        if (Thread.interrupted()) {
            throw new InterruptedException();
        }
        int iA = this.e.a(bArr, i + i3, i2 - i3);
        if (iA != -1) {
            return i3 + iA;
        }
        if (i3 == 0 && z) {
            return -1;
        }
        throw new EOFException();
    }

    private void i(int i) {
        if (i != -1) {
            this.g += (long) i;
        }
    }

    @Override
    public final void c(int i) throws InterruptedException, EOFException {
        int iG = g(i);
        while (iG < i && iG != -1) {
            iG = a(this.d, -iG, Math.min(i, this.d.length + iG), iG, false);
        }
        i(iG);
    }

    @Override
    public final void d(byte[] bArr, int i, int i2) {
        if (d(i2)) {
            System.arraycopy(this.h, this.i - i2, bArr, i, i2);
        }
    }
}
