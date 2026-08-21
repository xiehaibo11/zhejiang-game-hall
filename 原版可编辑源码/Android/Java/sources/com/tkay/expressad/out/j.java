package com.tkay.expressad.out;

public final class j {

    public interface a {
        void a();
    }

    public interface b {
        void a();

        void b();

        void c();

        void d();

        void e();
    }

    public interface c {
        void a(com.tkay.expressad.foundation.d.c cVar, String str);

        void a(com.tkay.expressad.out.d dVar);

        void a(com.tkay.expressad.out.d dVar, String str);

        boolean a();

        void b();

        void b(com.tkay.expressad.out.d dVar);

        void b(com.tkay.expressad.out.d dVar, String str);

        void c(com.tkay.expressad.out.d dVar);

        void d(com.tkay.expressad.out.d dVar);
    }

    public interface e extends c {
        void c();
    }

    public static class d {
        private int a;
        private int b;

        private d(int i, int i2) {
            this.a = i;
            this.b = i2;
        }

        private int a() {
            return this.a;
        }

        private void a(int i) {
            this.a = i;
        }

        private int b() {
            return this.b;
        }

        private void b(int i) {
            this.b = i;
        }
    }
}
