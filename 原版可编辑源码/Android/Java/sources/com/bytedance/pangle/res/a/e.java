package com.bytedance.pangle.res.a;

import java.io.InputStream;

public final class e extends j {
    private long a;

    public e(InputStream inputStream) {
        super(inputStream);
    }

    @Override
    public final synchronized long skip(long j) {
        long jSkip;
        jSkip = super.skip(j);
        this.a += jSkip;
        return jSkip;
    }

    @Override
    protected final synchronized void a(int i) {
        if (i != -1) {
            this.a += (long) i;
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
        return this.a;
    }
}
