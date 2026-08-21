package com.bytedance.pangle.res.a;

import java.io.InputStream;

/* JADX INFO: loaded from: classes.dex */
public final class e extends j {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private long f1584a;

    public e(InputStream inputStream) {
        super(inputStream);
    }

    @Override // com.bytedance.pangle.res.a.j, java.io.FilterInputStream, java.io.InputStream
    public final synchronized long skip(long j) {
        long jSkip;
        jSkip = super.skip(j);
        this.f1584a += jSkip;
        return jSkip;
    }

    @Override // com.bytedance.pangle.res.a.j
    protected final synchronized void a(int i) {
        if (i != -1) {
            this.f1584a += (long) i;
        }
    }

    public final int a() {
        long jB = b();
        if (jB <= 2147483647L) {
            return (int) jB;
        }
        throw new ArithmeticException("The byte count " + jB + " is too large to be converted to an int");
    }

    public final synchronized long b() {
        return this.f1584a;
    }
}
