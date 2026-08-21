package com.tkay.expressad.exoplayer.j;

import java.io.InputStream;
import kotlin.UByte;

/* JADX INFO: loaded from: classes3.dex */
public final class j extends InputStream {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private final h f6723a;
    private final k b;
    private long f;
    private boolean d = false;
    private boolean e = false;
    private final byte[] c = new byte[1];

    public j(h hVar, k kVar) {
        this.f6723a = hVar;
        this.b = kVar;
    }

    public final long a() {
        return this.f;
    }

    public final void b() {
        c();
    }

    @Override // java.io.InputStream
    public final int read() {
        if (read(this.c) == -1) {
            return -1;
        }
        return this.c[0] & UByte.MAX_VALUE;
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr) {
        return read(bArr, 0, bArr.length);
    }

    @Override // java.io.InputStream
    public final int read(byte[] bArr, int i, int i2) {
        com.tkay.expressad.exoplayer.k.a.b(!this.e);
        c();
        int iA = this.f6723a.a(bArr, i, i2);
        if (iA == -1) {
            return -1;
        }
        this.f += (long) iA;
        return iA;
    }

    @Override // java.io.InputStream, java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        if (this.e) {
            return;
        }
        this.f6723a.b();
        this.e = true;
    }

    private void c() {
        if (this.d) {
            return;
        }
        this.f6723a.a(this.b);
        this.d = true;
    }
}
