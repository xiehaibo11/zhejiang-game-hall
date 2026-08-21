package com.tkay.expressad.exoplayer.j;

import java.io.InputStream;
import kotlin.UByte;

public final class j extends InputStream {
    private final h a;
    private final k b;
    private long f;
    private boolean d = false;
    private boolean e = false;
    private final byte[] c = new byte[1];

    public j(h hVar, k kVar) {
        this.a = hVar;
        this.b = kVar;
    }

    public final long a() {
        return this.f;
    }

    public final void b() {
        c();
    }

    @Override
    public final int read() {
        if (read(this.c) == -1) {
            return -1;
        }
        return this.c[0] & UByte.MAX_VALUE;
    }

    @Override
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override
    public final int read(byte[] bArr, int i, int i2) {
        com.tkay.expressad.exoplayer.k.a.b(!this.e);
        c();
        int iA = this.a.a(bArr, i, i2);
        if (iA == -1) {
            return -1;
        }
        this.f += (long) iA;
        return iA;
    }

    @Override
    public final void close() {
        if (this.e) {
            return;
        }
        this.a.b();
        this.e = true;
    }

    private void c() {
        if (this.d) {
            return;
        }
        this.a.a(this.b);
        this.d = true;
    }
}
