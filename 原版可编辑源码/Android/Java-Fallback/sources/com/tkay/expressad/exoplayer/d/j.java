package com.tkay.expressad.exoplayer.d;

import com.tkay.expressad.exoplayer.d.i;

public interface j<T extends com.tkay.expressad.exoplayer.d.i> {
    public static final int a = 2;
    public static final int b = 3;
    public static final int c = 1;
    public static final int d = 1;
    public static final int e = 2;
    public static final int f = 3;

    public static final class a implements com.tkay.expressad.exoplayer.d.j.d {
        private final byte[] a;
        private final java.lang.String b;

        public a(byte[] r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final byte[] a() {
                r1 = this;
                byte[] r0 = r1.a
                return r0
        }

        @Override
        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    public static final class b implements com.tkay.expressad.exoplayer.d.j.e {
        private final int a;
        private final byte[] b;

        b(int r1, byte[] r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final int a() {
                r1 = this;
                int r0 = r1.a
                return r0
        }

        @Override
        public final byte[] b() {
                r1 = this;
                byte[] r0 = r1.b
                return r0
        }
    }

    public static final class c implements com.tkay.expressad.exoplayer.d.j.h {
        private final byte[] a;
        private final java.lang.String b;

        public c(byte[] r1, java.lang.String r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        @Override
        public final byte[] a() {
                r1 = this;
                byte[] r0 = r1.a
                return r0
        }

        @Override
        public final java.lang.String b() {
                r1 = this;
                java.lang.String r0 = r1.b
                return r0
        }
    }

    public interface d {
        byte[] a();

        java.lang.String b();
    }

    public interface e {
        int a();

        byte[] b();
    }

    public interface f<T extends com.tkay.expressad.exoplayer.d.i> {
        void a(byte[] r1, int r2);
    }

    public interface g<T extends com.tkay.expressad.exoplayer.d.i> {
        void a();
    }

    public interface h {
        byte[] a();

        java.lang.String b();
    }

    com.tkay.expressad.exoplayer.d.j.d a(byte[] r1, byte[] r2, java.lang.String r3, int r4, java.util.HashMap<java.lang.String, java.lang.String> r5);

    java.lang.String a(java.lang.String r1);

    void a(com.tkay.expressad.exoplayer.d.j.f<? super T> r1);

    void a(com.tkay.expressad.exoplayer.d.j.g<? super T> r1);

    void a(java.lang.String r1, java.lang.String r2);

    void a(java.lang.String r1, byte[] r2);

    void a(byte[] r1);

    byte[] a();

    byte[] a(byte[] r1, byte[] r2);

    com.tkay.expressad.exoplayer.d.j.h b();

    void b(byte[] r1);

    void b(byte[] r1, byte[] r2);

    byte[] b(java.lang.String r1);

    java.util.Map<java.lang.String, java.lang.String> c(byte[] r1);

    void c();

    T d(byte[] r1);
}
