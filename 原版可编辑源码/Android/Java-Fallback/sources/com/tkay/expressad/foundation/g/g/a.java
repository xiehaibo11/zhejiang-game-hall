package com.tkay.expressad.foundation.g.g;

public abstract class a implements java.lang.Runnable {
    public static long b;
    public com.tkay.expressad.foundation.g.g.a.a c;
    public com.tkay.expressad.foundation.g.g.a.b d;

    public enum a extends java.lang.Enum<com.tkay.expressad.foundation.g.g.a.a> {
        public static final com.tkay.expressad.foundation.g.g.a.a a = null;
        public static final com.tkay.expressad.foundation.g.g.a.a b = null;
        public static final com.tkay.expressad.foundation.g.g.a.a c = null;
        public static final com.tkay.expressad.foundation.g.g.a.a d = null;
        public static final com.tkay.expressad.foundation.g.g.a.a e = null;
        private static final com.tkay.expressad.foundation.g.g.a.a[] f = null;

        static {
                com.tkay.expressad.foundation.g.g.a$a r0 = new com.tkay.expressad.foundation.g.g.a$a
                r1 = 0
                java.lang.String r2 = "READY"
                r0.<init>(r2, r1)
                com.tkay.expressad.foundation.g.g.a.a.a = r0
                com.tkay.expressad.foundation.g.g.a$a r0 = new com.tkay.expressad.foundation.g.g.a$a
                r2 = 1
                java.lang.String r3 = "RUNNING"
                r0.<init>(r3, r2)
                com.tkay.expressad.foundation.g.g.a.a.b = r0
                com.tkay.expressad.foundation.g.g.a$a r0 = new com.tkay.expressad.foundation.g.g.a$a
                r3 = 2
                java.lang.String r4 = "PAUSE"
                r0.<init>(r4, r3)
                com.tkay.expressad.foundation.g.g.a.a.c = r0
                com.tkay.expressad.foundation.g.g.a$a r0 = new com.tkay.expressad.foundation.g.g.a$a
                r4 = 3
                java.lang.String r5 = "CANCEL"
                r0.<init>(r5, r4)
                com.tkay.expressad.foundation.g.g.a.a.d = r0
                com.tkay.expressad.foundation.g.g.a$a r0 = new com.tkay.expressad.foundation.g.g.a$a
                r5 = 4
                java.lang.String r6 = "FINISH"
                r0.<init>(r6, r5)
                com.tkay.expressad.foundation.g.g.a.a.e = r0
                r6 = 5
                com.tkay.expressad.foundation.g.g.a$a[] r6 = new com.tkay.expressad.foundation.g.g.a.a[r6]
                com.tkay.expressad.foundation.g.g.a$a r7 = com.tkay.expressad.foundation.g.g.a.a.a
                r6[r1] = r7
                com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.b
                r6[r2] = r1
                com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.c
                r6[r3] = r1
                com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.d
                r6[r4] = r1
                r6[r5] = r0
                com.tkay.expressad.foundation.g.g.a.a.f = r6
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.tkay.expressad.foundation.g.g.a.a valueOf(java.lang.String r1) {
                java.lang.Class<com.tkay.expressad.foundation.g.g.a$a> r0 = com.tkay.expressad.foundation.g.g.a.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.tkay.expressad.foundation.g.g.a$a r1 = (com.tkay.expressad.foundation.g.g.a.a) r1
                return r1
        }

        public static com.tkay.expressad.foundation.g.g.a.a[] values() {
                com.tkay.expressad.foundation.g.g.a$a[] r0 = com.tkay.expressad.foundation.g.g.a.a.f
                java.lang.Object r0 = r0.clone()
                com.tkay.expressad.foundation.g.g.a$a[] r0 = (com.tkay.expressad.foundation.g.g.a.a[]) r0
                return r0
        }
    }

    public interface b {
        void a(com.tkay.expressad.foundation.g.g.a.a r1);
    }

    public a() {
            r4 = this;
            r4.<init>()
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.a
            r4.c = r0
            long r0 = com.tkay.expressad.foundation.g.g.a.b
            r2 = 1
            long r0 = r0 + r2
            com.tkay.expressad.foundation.g.g.a.b = r0
            return
    }

    private void a(com.tkay.expressad.foundation.g.g.a.a r2) {
            r1 = this;
            r1.c = r2
            com.tkay.expressad.foundation.g.g.a$b r0 = r1.d
            if (r0 == 0) goto L9
            r0.a(r2)
        L9:
            return
    }

    private void a(com.tkay.expressad.foundation.g.g.a.b r1) {
            r0 = this;
            r0.d = r1
            return
    }

    private com.tkay.expressad.foundation.g.g.a.a d() {
            r1 = this;
            com.tkay.expressad.foundation.g.g.a$a r0 = r1.c
            return r0
    }

    public static long e() {
            long r0 = com.tkay.expressad.foundation.g.g.a.b
            return r0
    }

    public abstract void a();

    public abstract void b();

    public abstract void c();

    public final void f() {
            r2 = this;
            com.tkay.expressad.foundation.g.g.a$a r0 = r2.c
            com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.d
            if (r0 == r1) goto Lb
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.d
            r2.a(r0)
        Lb:
            return
    }

    public final void g() {
            r2 = this;
            com.tkay.expressad.foundation.g.g.a$a r0 = r2.c
            com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.c
            if (r0 == r1) goto L18
            com.tkay.expressad.foundation.g.g.a$a r0 = r2.c
            com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.d
            if (r0 == r1) goto L18
            com.tkay.expressad.foundation.g.g.a$a r0 = r2.c
            com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.e
            if (r0 != r1) goto L13
            goto L18
        L13:
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.b
            r2.a(r0)
        L18:
            return
    }

    @Override
    public final void run() {
            r2 = this;
            com.tkay.expressad.foundation.g.g.a$a r0 = r2.c     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.foundation.g.g.a$a r1 = com.tkay.expressad.foundation.g.g.a.a.a     // Catch: java.lang.Throwable -> L14
            if (r0 != r1) goto L13
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.b     // Catch: java.lang.Throwable -> L14
            r2.a(r0)     // Catch: java.lang.Throwable -> L14
            r2.a()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.e     // Catch: java.lang.Throwable -> L14
            r2.a(r0)     // Catch: java.lang.Throwable -> L14
        L13:
            return
        L14:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
