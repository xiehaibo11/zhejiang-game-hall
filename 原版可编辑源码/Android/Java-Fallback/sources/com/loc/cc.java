package com.loc;

public final class cc extends com.loc.ci {
    java.io.ByteArrayOutputStream a;

    public cc() {
            r1 = this;
            r1.<init>()
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.a = r0
            return
    }

    public cc(com.loc.ci r1) {
            r0 = this;
            r0.<init>(r1)
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
            r0.a = r1
            return
    }

    @Override
    protected final byte[] a(byte[] r2) {
            r1 = this;
            java.io.ByteArrayOutputStream r2 = r1.a
            byte[] r2 = r2.toByteArray()
            java.io.ByteArrayOutputStream r0 = r1.a     // Catch: java.io.IOException -> Lc
            r0.close()     // Catch: java.io.IOException -> Lc
            goto L10
        Lc:
            r0 = move-exception
            r0.printStackTrace()
        L10:
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            r1.a = r0
            return r2
    }

    @Override
    public final void b(byte[] r2) {
            r1 = this;
            java.io.ByteArrayOutputStream r0 = r1.a     // Catch: java.lang.Throwable -> L6
            r0.write(r2)     // Catch: java.lang.Throwable -> L6
            return
        L6:
            r2 = move-exception
            r2.printStackTrace()
            return
    }
}
