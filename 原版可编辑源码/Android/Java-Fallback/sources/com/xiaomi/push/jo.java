package com.xiaomi.push;

public final class jo extends com.xiaomi.push.jp {
    private int a;
    private byte[] a;
    private int b;

    public jo() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    @Override
    public int a(byte[] r3, int r4, int r5) {
            r2 = this;
            int r0 = r2.b()
            if (r5 <= r0) goto L7
            r5 = r0
        L7:
            if (r5 <= 0) goto L13
            byte[] r0 = r2.a
            int r1 = r2.a
            java.lang.System.arraycopy(r0, r1, r3, r4, r5)
            r2.a(r5)
        L13:
            return r5
    }

    @Override
    public void a(int r2) {
            r1 = this;
            int r0 = r1.a
            int r0 = r0 + r2
            r1.a = r0
            return
    }

    public void a(byte[] r3) {
            r2 = this;
            int r0 = r3.length
            r1 = 0
            r2.b(r3, r1, r0)
            return
    }

    @Override
    public void a(byte[] r1, int r2, int r3) {
            r0 = this;
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.String r2 = "No writing allowed!"
            r1.<init>(r2)
            throw r1
    }

    @Override
    public byte[] a() {
            r1 = this;
            byte[] r0 = r1.a
            return r0
    }

    @Override
    public int b() {
            r2 = this;
            int r0 = r2.b
            int r1 = r2.a
            int r0 = r0 - r1
            return r0
    }

    public void b(byte[] r1, int r2, int r3) {
            r0 = this;
            r0.a = r1
            r0.a = r2
            int r2 = r2 + r3
            r0.b = r2
            return
    }
}
