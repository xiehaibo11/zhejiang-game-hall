package com.tkay.expressad.exoplayer.d;

public interface c {

    public static final class a {
        private final java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c.a.a> a;





        private static final class a {
            public final android.os.Handler a;
            public final com.tkay.expressad.exoplayer.d.c b;

            public a(android.os.Handler r1, com.tkay.expressad.exoplayer.d.c r2) {
                    r0 = this;
                    r0.<init>()
                    r0.a = r1
                    r0.b = r2
                    return
            }
        }

        public a() {
                r1 = this;
                r1.<init>()
                java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
                r0.<init>()
                r1.a = r0
                return
        }

        public final void a() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r4.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.d.c$a$a r1 = (com.tkay.expressad.exoplayer.d.c.a.a) r1
                com.tkay.expressad.exoplayer.d.c r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.d.c$a$1 r3 = new com.tkay.expressad.exoplayer.d.c$a$1
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void a(android.os.Handler r3, com.tkay.expressad.exoplayer.d.c r4) {
                r2 = this;
                if (r3 == 0) goto L6
                if (r4 == 0) goto L6
                r0 = 1
                goto L7
            L6:
                r0 = 0
            L7:
                com.tkay.expressad.exoplayer.k.a.a(r0)
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r2.a
                com.tkay.expressad.exoplayer.d.c$a$a r1 = new com.tkay.expressad.exoplayer.d.c$a$a
                r1.<init>(r3, r4)
                r0.add(r1)
                return
        }

        public final void a(com.tkay.expressad.exoplayer.d.c r4) {
                r3 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r3.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1c
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.d.c$a$a r1 = (com.tkay.expressad.exoplayer.d.c.a.a) r1
                com.tkay.expressad.exoplayer.d.c r2 = r1.b
                if (r2 != r4) goto L6
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r2 = r3.a
                r2.remove(r1)
                goto L6
            L1c:
                return
        }

        public final void a(java.lang.Exception r5) {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r4.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.d.c$a$a r1 = (com.tkay.expressad.exoplayer.d.c.a.a) r1
                com.tkay.expressad.exoplayer.d.c r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.d.c$a$2 r3 = new com.tkay.expressad.exoplayer.d.c$a$2
                r3.<init>(r4, r2, r5)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void b() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r4.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.d.c$a$a r1 = (com.tkay.expressad.exoplayer.d.c.a.a) r1
                com.tkay.expressad.exoplayer.d.c r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.d.c$a$3 r3 = new com.tkay.expressad.exoplayer.d.c$a$3
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }

        public final void c() {
                r4 = this;
                java.util.concurrent.CopyOnWriteArrayList<com.tkay.expressad.exoplayer.d.c$a$a> r0 = r4.a
                java.util.Iterator r0 = r0.iterator()
            L6:
                boolean r1 = r0.hasNext()
                if (r1 == 0) goto L1f
                java.lang.Object r1 = r0.next()
                com.tkay.expressad.exoplayer.d.c$a$a r1 = (com.tkay.expressad.exoplayer.d.c.a.a) r1
                com.tkay.expressad.exoplayer.d.c r2 = r1.b
                android.os.Handler r1 = r1.a
                com.tkay.expressad.exoplayer.d.c$a$4 r3 = new com.tkay.expressad.exoplayer.d.c$a$4
                r3.<init>(r4, r2)
                r1.post(r3)
                goto L6
            L1f:
                return
        }
    }

    void a(java.lang.Exception r1);

    void d();

    void e();

    void f();
}
