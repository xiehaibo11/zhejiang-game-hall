package com.tkay.expressad.exoplayer.j;

public interface s extends com.tkay.expressad.exoplayer.j.h {
    public static final com.tkay.expressad.exoplayer.k.u<java.lang.String> c = null;


    public static abstract class a implements com.tkay.expressad.exoplayer.j.s.b {
        private final com.tkay.expressad.exoplayer.j.s.f a;

        public a() {
                r1 = this;
                r1.<init>()
                com.tkay.expressad.exoplayer.j.s$f r0 = new com.tkay.expressad.exoplayer.j.s$f
                r0.<init>()
                r1.a = r0
                return
        }

        @Override
        public final com.tkay.expressad.exoplayer.j.h a() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s r0 = r1.b()
                return r0
        }

        protected abstract com.tkay.expressad.exoplayer.j.s a(com.tkay.expressad.exoplayer.j.s.f r1);

        @Override
        @java.lang.Deprecated
        public final void a(java.lang.String r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s$f r0 = r1.a
                r0.a(r2)
                return
        }

        @Override
        @java.lang.Deprecated
        public final void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s$f r0 = r1.a
                r0.a(r2, r3)
                return
        }

        @Override
        public final com.tkay.expressad.exoplayer.j.s b() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s$f r0 = r1.a
                com.tkay.expressad.exoplayer.j.s r0 = r1.a(r0)
                return r0
        }

        @Override
        public final com.tkay.expressad.exoplayer.j.s.f c() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s$f r0 = r1.a
                return r0
        }

        @Override
        @java.lang.Deprecated
        public final void d() {
                r1 = this;
                com.tkay.expressad.exoplayer.j.s$f r0 = r1.a
                r0.a()
                return
        }
    }

    public interface b extends com.tkay.expressad.exoplayer.j.h.a {

        public final class -CC {
            public static com.tkay.expressad.exoplayer.j.h $default$a(com.tkay.expressad.exoplayer.j.s.b r1) {
                    com.tkay.expressad.exoplayer.j.s r0 = r1.b()
                    return r0
            }
        }

        @Override
        com.tkay.expressad.exoplayer.j.h a();

        @java.lang.Deprecated
        void a(java.lang.String r1);

        @java.lang.Deprecated
        void a(java.lang.String r1, java.lang.String r2);

        com.tkay.expressad.exoplayer.j.s b();

        com.tkay.expressad.exoplayer.j.s.f c();

        @java.lang.Deprecated
        void d();
    }

    public static class c extends java.io.IOException {
        public static final int a = 1;
        public static final int b = 2;
        public static final int c = 3;
        public final int d;
        public final com.tkay.expressad.exoplayer.j.k e;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface a {
        }

        private c(com.tkay.expressad.exoplayer.j.k r1, int r2) {
                r0 = this;
                r0.<init>()
                r0.e = r1
                r0.d = r2
                return
        }

        public c(java.io.IOException r1, com.tkay.expressad.exoplayer.j.k r2, int r3) {
                r0 = this;
                r0.<init>(r1)
                r0.e = r2
                r0.d = r3
                return
        }

        public c(java.lang.String r1, com.tkay.expressad.exoplayer.j.k r2) {
                r0 = this;
                r0.<init>(r1)
                r0.e = r2
                r1 = 1
                r0.d = r1
                return
        }

        public c(java.lang.String r1, java.io.IOException r2, com.tkay.expressad.exoplayer.j.k r3) {
                r0 = this;
                r0.<init>(r1, r2)
                r0.e = r3
                r1 = 1
                r0.d = r1
                return
        }
    }

    public static final class d extends com.tkay.expressad.exoplayer.j.s.c {
        public final java.lang.String f;

        public d(java.lang.String r3, com.tkay.expressad.exoplayer.j.k r4) {
                r2 = this;
                java.lang.String r0 = java.lang.String.valueOf(r3)
                java.lang.String r1 = "Invalid content type: "
                java.lang.String r0 = r1.concat(r0)
                r2.<init>(r0, r4)
                r2.f = r3
                return
        }
    }

    public static final class e extends com.tkay.expressad.exoplayer.j.s.c {
        public final int f;
        public final java.util.Map<java.lang.String, java.util.List<java.lang.String>> g;

        public e(int r3, java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4, com.tkay.expressad.exoplayer.j.k r5) {
                r2 = this;
                java.lang.String r0 = java.lang.String.valueOf(r3)
                java.lang.String r1 = "Response code: "
                java.lang.String r0 = r1.concat(r0)
                r2.<init>(r0, r5)
                r2.f = r3
                r2.g = r4
                return
        }
    }

    public static final class f {
        private final java.util.Map<java.lang.String, java.lang.String> a;
        private java.util.Map<java.lang.String, java.lang.String> b;

        public f() {
                r1 = this;
                r1.<init>()
                java.util.HashMap r0 = new java.util.HashMap
                r0.<init>()
                r1.a = r0
                return
        }

        private synchronized void a(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.b = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> Lb
                r0.putAll(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        private synchronized void b(java.util.Map<java.lang.String, java.lang.String> r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.b = r0     // Catch: java.lang.Throwable -> L10
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> L10
                r0.clear()     // Catch: java.lang.Throwable -> L10
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> L10
                r0.putAll(r2)     // Catch: java.lang.Throwable -> L10
                monitor-exit(r1)
                return
            L10:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized void a() {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.b = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> Lb
                r0.clear()     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public final synchronized void a(java.lang.String r2) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.b = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> Lb
                r0.remove(r2)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized void a(java.lang.String r2, java.lang.String r3) {
                r1 = this;
                monitor-enter(r1)
                r0 = 0
                r1.b = r0     // Catch: java.lang.Throwable -> Lb
                java.util.Map<java.lang.String, java.lang.String> r0 = r1.a     // Catch: java.lang.Throwable -> Lb
                r0.put(r2, r3)     // Catch: java.lang.Throwable -> Lb
                monitor-exit(r1)
                return
            Lb:
                r2 = move-exception
                monitor-exit(r1)
                throw r2
        }

        public final synchronized java.util.Map<java.lang.String, java.lang.String> b() {
                r2 = this;
                monitor-enter(r2)
                java.util.Map<java.lang.String, java.lang.String> r0 = r2.b     // Catch: java.lang.Throwable -> L16
                if (r0 != 0) goto L12
                java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> L16
                java.util.Map<java.lang.String, java.lang.String> r1 = r2.a     // Catch: java.lang.Throwable -> L16
                r0.<init>(r1)     // Catch: java.lang.Throwable -> L16
                java.util.Map r0 = java.util.Collections.unmodifiableMap(r0)     // Catch: java.lang.Throwable -> L16
                r2.b = r0     // Catch: java.lang.Throwable -> L16
            L12:
                java.util.Map<java.lang.String, java.lang.String> r0 = r2.b     // Catch: java.lang.Throwable -> L16
                monitor-exit(r2)
                return r0
            L16:
                r0 = move-exception
                monitor-exit(r2)
                throw r0
        }
    }

    static {
            com.tkay.expressad.exoplayer.j.s$1 r0 = new com.tkay.expressad.exoplayer.j.s$1
            r0.<init>()
            com.tkay.expressad.exoplayer.j.s.c = r0
            return
    }

    @Override
    int a(byte[] r1, int r2, int r3);

    @Override
    long a(com.tkay.expressad.exoplayer.j.k r1);

    void a(java.lang.String r1);

    void a(java.lang.String r1, java.lang.String r2);

    @Override
    void b();

    java.util.Map<java.lang.String, java.util.List<java.lang.String>> c();

    void d();
}
