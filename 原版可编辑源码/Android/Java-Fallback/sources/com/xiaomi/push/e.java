package com.xiaomi.push;

public abstract class e {
    public e() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract int a();

    public abstract com.xiaomi.push.e a(com.xiaomi.push.b r1);

    public com.xiaomi.push.e a(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            com.xiaomi.push.e r3 = r2.a(r3, r1, r0)
            return r3
    }

    public com.xiaomi.push.e a(byte[] r1, int r2, int r3) {
            r0 = this;
            com.xiaomi.push.b r1 = com.xiaomi.push.b.a(r1, r2, r3)     // Catch: java.io.IOException -> Lc com.xiaomi.push.d -> L14
            r0.a(r1)     // Catch: java.io.IOException -> Lc com.xiaomi.push.d -> L14
            r2 = 0
            r1.a(r2)     // Catch: java.io.IOException -> Lc com.xiaomi.push.d -> L14
            return r0
        Lc:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Reading from a byte array threw an IOException (should never happen)."
            r1.<init>(r2)
            throw r1
        L14:
            r1 = move-exception
            throw r1
    }

    public abstract void a(com.xiaomi.push.c r1);

    public void a(byte[] r1, int r2, int r3) {
            r0 = this;
            com.xiaomi.push.c r1 = com.xiaomi.push.c.a(r1, r2, r3)     // Catch: java.io.IOException -> Lb
            r0.a(r1)     // Catch: java.io.IOException -> Lb
            r1.b()     // Catch: java.io.IOException -> Lb
            return
        Lb:
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Serializing to a byte array threw an IOException (should never happen)."
            r1.<init>(r2)
            throw r1
    }

    protected boolean a(com.xiaomi.push.b r1, int r2) {
            r0 = this;
            boolean r1 = r1.a(r2)
            return r1
    }

    public byte[] a() {
            r3 = this;
            int r0 = r3.b()
            byte[] r1 = new byte[r0]
            r2 = 0
            r3.a(r1, r2, r0)
            return r1
    }

    public abstract int b();
}
