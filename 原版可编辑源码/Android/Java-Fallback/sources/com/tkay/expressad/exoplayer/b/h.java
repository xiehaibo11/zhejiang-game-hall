package com.tkay.expressad.exoplayer.b;

public interface h {
    public static final long a = Long.MIN_VALUE;

    public static final class a extends java.lang.Exception {
        public a(java.lang.String r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        public a(java.lang.Throwable r1) {
                r0 = this;
                r0.<init>(r1)
                return
        }
    }

    public static final class b extends java.lang.Exception {
        public final int a;

        public b(int r3, int r4, int r5, int r6) {
                r2 = this;
                java.lang.StringBuilder r0 = new java.lang.StringBuilder
                java.lang.String r1 = "AudioTrack init failed: "
                r0.<init>(r1)
                r0.append(r3)
                java.lang.String r1 = ", Config("
                r0.append(r1)
                r0.append(r4)
                java.lang.String r4 = ", "
                r0.append(r4)
                r0.append(r5)
                r0.append(r4)
                r0.append(r6)
                java.lang.String r4 = ")"
                r0.append(r4)
                java.lang.String r4 = r0.toString()
                r2.<init>(r4)
                r2.a = r3
                return
        }
    }

    public interface c {
        void a();

        void a(int r1);

        void a(int r1, long r2, long r4);
    }

    public static final class d extends java.lang.Exception {
        public final int a;

        public d(int r3) {
                r2 = this;
                java.lang.String r0 = java.lang.String.valueOf(r3)
                java.lang.String r1 = "AudioTrack write failed: "
                java.lang.String r0 = r1.concat(r0)
                r2.<init>(r0)
                r2.a = r3
                return
        }
    }

    long a(boolean r1);

    com.tkay.expressad.exoplayer.v a(com.tkay.expressad.exoplayer.v r1);

    void a();

    void a(float r1);

    void a(int r1, int r2, int r3, int[] r4, int r5, int r6);

    void a(com.tkay.expressad.exoplayer.b.b r1);

    void a(com.tkay.expressad.exoplayer.b.h.c r1);

    boolean a(int r1);

    boolean a(java.nio.ByteBuffer r1, long r2);

    void b();

    void b(int r1);

    void c();

    void c(int r1);

    boolean d();

    boolean e();

    com.tkay.expressad.exoplayer.v f();

    void g();

    void h();

    void i();

    void j();
}
