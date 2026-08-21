package com.tkay.expressad.exoplayer.b;

public interface f {
    public static final java.nio.ByteBuffer a = null;

    public static final class a extends java.lang.Exception {
        public a(int r3, int r4, int r5) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "Unhandled format: "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r3 = " Hz, "
                r0.append(r3)
                r0.append(r4)
                java.lang.String r3 = " channels in encoding "
                r0.append(r3)
                r0.append(r5)
                java.lang.String r3 = r0.toString()
                r2.<init>(r3)
                return
        }
    }

    static {
            r0 = 0
            java.nio.ByteBuffer r0 = java.nio.ByteBuffer.allocateDirect(r0)
            java.nio.ByteOrder r1 = java.nio.ByteOrder.nativeOrder()
            java.nio.ByteBuffer r0 = r0.order(r1)
            com.tkay.expressad.exoplayer.b.f.a = r0
            return
    }

    void a(java.nio.ByteBuffer r1);

    boolean a();

    boolean a(int r1, int r2, int r3);

    int b();

    int c();

    int d();

    void e();

    java.nio.ByteBuffer f();

    boolean g();

    void h();

    void i();
}
