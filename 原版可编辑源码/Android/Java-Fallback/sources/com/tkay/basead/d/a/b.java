package com.tkay.basead.d.a;

public class b {
    private static volatile com.tkay.basead.d.a.b c;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> a;
    private final java.lang.String b;

    final class 1 implements java.lang.Runnable {
        final com.tkay.core.common.f.f a;
        final com.tkay.core.common.f.i b;
        final com.tkay.expressad.foundation.d.d c;
        final com.tkay.basead.d.a.b.a d;
        final com.tkay.basead.d.a.b e;


        1(com.tkay.basead.d.a.b r1, com.tkay.core.common.f.f r2, com.tkay.core.common.f.i r3, com.tkay.expressad.foundation.d.d r4, com.tkay.basead.d.a.b.a r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r11 = this;
                com.tkay.expressad.splash.d.c r0 = new com.tkay.expressad.splash.d.c
                com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
                android.content.Context r1 = r1.f()
                com.tkay.core.common.f.f r2 = r11.a
                java.lang.String r2 = r2.S()
                boolean r2 = android.text.TextUtils.isEmpty(r2)
                if (r2 == 0) goto L1b
                com.tkay.core.common.f.i r2 = r11.b
                java.lang.String r2 = r2.c
                goto L21
            L1b:
                com.tkay.core.common.f.f r2 = r11.a
                java.lang.String r2 = r2.S()
            L21:
                java.lang.String r3 = ""
                r0.<init>(r1, r3, r2)
                com.tkay.core.common.f.i r1 = r11.b
                com.tkay.core.common.f.j r1 = r1.m
                int r1 = r1.p()
                r2 = 0
                r3 = 1
                if (r1 != 0) goto L34
                r1 = r3
                goto L35
            L34:
                r1 = r2
            L35:
                r0.b(r1)
                com.tkay.core.common.f.i r1 = r11.b
                com.tkay.core.common.f.j r1 = r1.m
                long r4 = r1.n()
                int r1 = (int) r4
                int r1 = r1 / 1000
                r4 = 2
                if (r1 > r4) goto L4a
                r0.a(r4)
                goto L55
            L4a:
                r4 = 10
                if (r1 < r4) goto L52
                r0.a(r4)
                goto L55
            L52:
                r0.a(r1)
            L55:
                com.tkay.core.common.f.i r1 = r11.b
                com.tkay.core.common.f.j r1 = r1.m
                int r1 = r1.x()
                if (r1 != 0) goto L61
                r1 = r3
                goto L62
            L61:
                r1 = r2
            L62:
                r0.a(r1)
                r0.f()
                com.tkay.expressad.foundation.d.d r1 = r11.c
                java.util.ArrayList<com.tkay.expressad.foundation.d.c> r1 = r1.J
                if (r1 == 0) goto Ldf
                int r4 = r1.size()
                if (r4 <= 0) goto Ldf
                java.util.Iterator r1 = r1.iterator()
            L78:
                boolean r4 = r1.hasNext()
                if (r4 == 0) goto Ldf
                java.lang.Object r4 = r1.next()
                com.tkay.expressad.foundation.d.c r4 = (com.tkay.expressad.foundation.d.c) r4
                if (r4 == 0) goto L78
                java.lang.String r5 = r4.c()
                boolean r6 = android.text.TextUtils.isEmpty(r5)
                if (r6 != 0) goto Ldb
                com.tkay.core.common.f.i r6 = r11.b
                com.tkay.core.common.f.j r6 = r6.m
                int r6 = r6.x()
                if (r6 != 0) goto L9c
                r6 = r3
                goto L9d
            L9c:
                r6 = r2
            L9d:
                com.tkay.expressad.shake.a r7 = com.tkay.expressad.shake.a.a()
                boolean r7 = r7.b()
                if (r7 == 0) goto Lb3
                com.tkay.core.common.f.i r7 = r11.b
                com.tkay.core.common.f.j r7 = r7.m
                int r7 = r7.M()
                if (r7 != r3) goto Lb3
                r7 = r3
                goto Lb4
            Lb3:
                r7 = r2
            Lb4:
                java.lang.String r5 = com.tkay.basead.d.a.b.a(r5, r6)
                com.tkay.core.common.f.i r8 = r11.b
                com.tkay.core.common.f.j r8 = r8.m
                int r8 = r8.N()
                com.tkay.core.common.f.i r9 = r11.b
                com.tkay.core.common.f.j r9 = r9.m
                long r9 = r9.O()
                java.lang.String r5 = com.tkay.basead.d.a.b.a(r5, r7, r8, r9)
                if (r7 != 0) goto Ld5
                if (r6 != 0) goto Ld5
                java.lang.String r5 = com.tkay.basead.d.a.b.b(r5, r3)
                goto Ldb
            Ld5:
                if (r7 == 0) goto Ldb
                java.lang.String r5 = com.tkay.basead.d.a.b.b(r5, r2)
            Ldb:
                r4.a(r5)
                goto L78
            Ldf:
                com.tkay.basead.d.a.b$1$1 r1 = new com.tkay.basead.d.a.b$1$1
                r1.<init>(r11)
                r0.a(r1)
                com.tkay.basead.d.a.b r1 = r11.e
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r1 = r1.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.core.common.f.i r3 = r11.b
                java.lang.String r3 = r3.b
                r2.append(r3)
                com.tkay.core.common.f.i r3 = r11.b
                java.lang.String r3 = r3.a
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                r1.put(r2, r0)
                com.tkay.expressad.foundation.d.d r1 = r11.c
                r0.a(r1)
                return
        }
    }

    final class 2 implements com.tkay.expressad.out.b {
        final com.tkay.core.common.f.i a;
        final com.tkay.basead.d.a.b.a b;
        final com.tkay.basead.d.a.b c;

        2(com.tkay.basead.d.a.b r1, com.tkay.core.common.f.i r2, com.tkay.basead.d.a.b.a r3) {
                r0 = this;
                r0.c = r1
                r0.a = r2
                r0.b = r3
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r3 = this;
                com.tkay.basead.d.a.b r0 = r3.c
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r0 = r0.a
                java.lang.StringBuilder r1 = new java.lang.StringBuilder
                r1.<init>()
                com.tkay.core.common.f.i r2 = r3.a
                java.lang.String r2 = r2.b
                r1.append(r2)
                com.tkay.core.common.f.i r2 = r3.a
                java.lang.String r2 = r2.a
                r1.append(r2)
                java.lang.String r1 = r1.toString()
                java.lang.Object r0 = r0.remove(r1)
                com.tkay.expressad.out.TemplateBannerView r0 = (com.tkay.expressad.out.TemplateBannerView) r0
                if (r0 == 0) goto L2b
                com.tkay.basead.d.a.b$a r1 = r3.b
                if (r1 == 0) goto L3c
                r1.a(r0)
                return
            L2b:
                com.tkay.basead.d.a.b$a r0 = r3.b
                if (r0 == 0) goto L3c
                java.lang.String r0 = "30003"
                java.lang.String r1 = "Resource download fail."
                com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)
                com.tkay.basead.d.a.b$a r1 = r3.b
                r1.a(r0)
            L3c:
                return
        }

        @Override
        public final void a(com.tkay.expressad.foundation.d.c r1) {
                r0 = this;
                return
        }

        @Override
        public final void a(java.lang.String r4) {
                r3 = this;
                com.tkay.basead.d.a.b r0 = r3.c
                com.tkay.core.common.f.i r1 = r3.a
                com.tkay.basead.d.a.b$a r2 = r3.b
                com.tkay.basead.d.a.b.a(r0, r4, r1, r2)
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }

        @Override
        public final void d() {
                r0 = this;
                return
        }

        @Override
        public final void e() {
                r0 = this;
                return
        }

        @Override
        public final void f() {
                r0 = this;
                return
        }
    }


    final class 4 implements java.lang.Runnable {
        final com.tkay.core.common.f.f a;
        final com.tkay.core.common.f.i b;
        final com.tkay.basead.d.a.b.a c;
        final com.tkay.expressad.foundation.d.d d;
        final com.tkay.basead.d.a.b e;


        4(com.tkay.basead.d.a.b r1, com.tkay.core.common.f.f r2, com.tkay.core.common.f.i r3, com.tkay.basead.d.a.b.a r4, com.tkay.expressad.foundation.d.d r5) {
                r0 = this;
                r0.e = r1
                r0.a = r2
                r0.b = r3
                r0.c = r4
                r0.d = r5
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r4 = this;
                com.tkay.core.common.f.f r0 = r4.a
                java.lang.String r0 = r0.S()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L11
                com.tkay.core.common.f.i r0 = r4.b
                java.lang.String r0 = r0.c
                goto L17
            L11:
                com.tkay.core.common.f.f r0 = r4.a
                java.lang.String r0 = r0.S()
            L17:
                com.tkay.expressad.advanced.d.c r1 = new com.tkay.expressad.advanced.d.c
                com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
                android.content.Context r2 = r2.f()
                java.lang.String r3 = ""
                r1.<init>(r3, r0, r2)
                com.tkay.basead.d.a.b$4$1 r0 = new com.tkay.basead.d.a.b$4$1
                r0.<init>(r4)
                r1.a(r0)
                com.tkay.basead.d.a.b r0 = r4.e
                java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r0 = r0.a
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                com.tkay.core.common.f.i r3 = r4.b
                java.lang.String r3 = r3.b
                r2.append(r3)
                com.tkay.core.common.f.i r3 = r4.b
                java.lang.String r3 = r3.a
                r2.append(r3)
                java.lang.String r2 = r2.toString()
                r0.put(r2, r1)
                com.tkay.expressad.foundation.d.d r0 = r4.d
                r1.a(r0)
                return
        }
    }

    protected interface a {
        void a(com.tkay.basead.c.e r1);

        void a(com.tkay.core.common.a.g r1);
    }

    private b() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 2
            r0.<init>(r1)
            r2.a = r0
            return
    }

    public static com.tkay.basead.a.c a(com.tkay.basead.a.c r6, com.tkay.expressad.foundation.d.c r7) {
            com.tkay.core.common.f.h r0 = r6.b()
            com.tkay.core.common.f.j r0 = r0.k()
            com.tkay.core.common.f.h r1 = r6.b()
            java.lang.String r1 = r1.p()
            java.lang.String r2 = r7.aZ()
            boolean r1 = r1.equals(r2)
            if (r1 == 0) goto L22
            com.tkay.core.common.f.h r0 = r6.b()
            a(r0, r7)
            return r6
        L22:
            com.tkay.core.common.f.f r1 = new com.tkay.core.common.f.f
            r1.<init>()
            a(r1, r7)
            java.lang.String r2 = r7.aZ()
            r1.j(r2)
            int r2 = r7.Q()
            r3 = 2
            if (r2 == 0) goto L64
            r4 = 1
            if (r2 == r4) goto L60
            if (r2 == r3) goto L60
            r4 = 4
            r5 = 3
            if (r2 == r5) goto L5c
            if (r2 == r4) goto L58
            r4 = 5
            if (r2 == r4) goto L64
            r4 = 8
            if (r2 == r4) goto L58
            r4 = 9
            if (r2 == r4) goto L64
            r3 = 12
            if (r2 == r3) goto L53
            goto L67
        L53:
            r2 = 6
            r1.e(r2)
            goto L67
        L58:
            r1.e(r5)
            goto L67
        L5c:
            r1.e(r4)
            goto L67
        L60:
            r1.e(r4)
            goto L67
        L64:
            r1.e(r3)
        L67:
            com.tkay.expressad.foundation.d.a r7 = r7.aG()
            if (r7 == 0) goto L90
            java.lang.String r2 = r7.b()
            r1.N(r2)
            java.lang.String r2 = r7.f()
            r1.y(r2)
            java.lang.String r2 = r7.e()
            r1.z(r2)
            java.lang.String r2 = r7.c()
            r1.A(r2)
            java.lang.String r7 = r7.a()
            r1.B(r7)
        L90:
            com.tkay.core.common.f.i r6 = r6.c()
            com.tkay.basead.a.c r7 = new com.tkay.basead.a.c
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r7.<init>(r2, r6, r1)
            r1.a(r0)
            return r7
    }

    public static com.tkay.basead.d.a.b a() {
            com.tkay.basead.d.a.b r0 = com.tkay.basead.d.a.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.basead.d.a.b> r0 = com.tkay.basead.d.a.b.class
            monitor-enter(r0)
            com.tkay.basead.d.a.b r1 = com.tkay.basead.d.a.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.basead.d.a.b r1 = new com.tkay.basead.d.a.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.basead.d.a.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.basead.d.a.b r0 = com.tkay.basead.d.a.b.c
            return r0
    }

    static java.lang.String a(java.lang.String r0, boolean r1) {
            java.lang.String r0 = c(r0, r1)
            return r0
    }

    static java.lang.String a(java.lang.String r0, boolean r1, int r2, long r3) {
            java.lang.String r0 = b(r0, r1, r2, r3)
            return r0
    }

    static void a(com.tkay.basead.d.a.b r2, java.lang.String r3, com.tkay.core.common.f.i r4, com.tkay.basead.d.a.b.a r5) {
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r2 = r2.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r4.b
            r0.append(r1)
            java.lang.String r4 = r4.a
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            r2.remove(r4)
            if (r5 == 0) goto L23
            java.lang.String r2 = "30003"
            com.tkay.basead.c.e r2 = com.tkay.basead.c.f.a(r2, r3)
            r5.a(r2)
        L23:
            return
    }

    public static void a(com.tkay.core.common.f.f r3, com.tkay.expressad.foundation.d.c r4) {
            java.lang.String r0 = r4.ba()
            r3.w(r0)
            java.lang.String r0 = r4.bd()
            r3.n(r0)
            java.lang.String r0 = r4.bb()
            r3.l(r0)
            java.lang.String r0 = r4.bc()
            r3.m(r0)
            java.lang.String r0 = r4.ad()
            r3.v(r0)
            java.lang.String r0 = r4.af()
            r3.u(r0)
            com.tkay.core.common.f.ab r0 = r3.X()
            if (r0 != 0) goto L38
            com.tkay.core.common.f.ab r0 = new com.tkay.core.common.f.ab
            r0.<init>()
            r3.a(r0)
        L38:
            com.tkay.expressad.foundation.d.n r1 = r4.L()
            if (r1 == 0) goto L53
            java.lang.String[] r2 = r1.a()
            r0.b(r2)
            java.lang.String[] r2 = r1.b()
            r0.c(r2)
            java.lang.String[] r1 = r1.c()
            r0.d(r1)
        L53:
            a(r3, r4)
            return
    }

    public static void a(com.tkay.core.common.f.f r2, java.util.List<com.tkay.expressad.foundation.d.c> r3) {
            if (r3 == 0) goto L20
            int r0 = r3.size()
            if (r0 <= 0) goto L20
            java.util.Iterator r3 = r3.iterator()
        Lc:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L20
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            java.lang.String r1 = r2.v()
            r0.t(r1)
            goto Lc
        L20:
            return
    }

    public static void a(com.tkay.core.common.f.h r4, com.tkay.expressad.foundation.d.c r5) {
            boolean r0 = r4 instanceof com.tkay.core.common.f.f
            if (r0 == 0) goto L8
            r0 = r4
            com.tkay.core.common.f.f r0 = (com.tkay.core.common.f.f) r0
            goto L9
        L8:
            r0 = 0
        L9:
            if (r4 == 0) goto L75
            if (r5 != 0) goto Le
            goto L75
        Le:
            java.lang.String r1 = r5.ad()
            r4.v(r1)
            java.lang.String r1 = r5.aO()
            r4.d(r1)
            java.lang.String r1 = r5.aN()
            r4.c(r1)
            java.util.ArrayList r4 = new java.util.ArrayList
            r4.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.ah()
            r1.append(r2)
            java.lang.String r2 = "&opdptype={opdptype}&apk_ptype={apk_ptype}"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r4.add(r1)
            com.tkay.expressad.foundation.d.n r5 = r5.L()
            if (r5 == 0) goto L58
            java.lang.String[] r5 = r5.l()
            if (r5 == 0) goto L58
            int r1 = r5.length
            r2 = 0
        L4e:
            if (r2 >= r1) goto L58
            r3 = r5[r2]
            r4.add(r3)
            int r2 = r2 + 1
            goto L4e
        L58:
            com.tkay.core.common.f.ab r5 = r0.X()
            if (r5 != 0) goto L66
            com.tkay.core.common.f.ab r5 = new com.tkay.core.common.f.ab
            r5.<init>()
            r0.a(r5)
        L66:
            int r0 = r4.size()
            java.lang.String[] r0 = new java.lang.String[r0]
            java.lang.Object[] r4 = r4.toArray(r0)
            java.lang.String[] r4 = (java.lang.String[]) r4
            r5.a(r4)
        L75:
            return
    }

    public static void a(com.tkay.core.common.f.i r2, java.util.List<com.tkay.expressad.foundation.d.c> r3) {
            int r0 = r2.j
            r1 = 1
            if (r0 == r1) goto La
            int r0 = r2.j
            r1 = 3
            if (r0 != r1) goto L1a
        La:
            r0 = 0
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.foundation.d.c r3 = (com.tkay.expressad.foundation.d.c) r3
            com.tkay.core.common.f.j r2 = r2.m
            int r2 = r2.z()
            r3.a(r2)
        L1a:
            return
    }

    private void a(java.lang.String r4, com.tkay.core.common.f.i r5, com.tkay.basead.d.a.b.a r6) {
            r3 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r0 = r3.a
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = r5.b
            r1.append(r2)
            java.lang.String r5 = r5.a
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.remove(r5)
            if (r6 == 0) goto L23
            java.lang.String r5 = "30003"
            com.tkay.basead.c.e r4 = com.tkay.basead.c.f.a(r5, r4)
            r6.a(r4)
        L23:
            return
    }

    static java.lang.String b(java.lang.String r3, boolean r4) {
            java.lang.String r0 = "hdbtn=1"
            java.lang.String r1 = "hdbtn=0"
            java.lang.String r2 = "hdbtn"
            if (r4 == 0) goto L25
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L13
            java.lang.String r3 = r3.replace(r0, r1)
            goto L41
        L13:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&hdbtn=0"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L41
        L25:
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L30
            java.lang.String r3 = r3.replace(r1, r0)
            goto L41
        L30:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&hdbtn=1"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L41:
            return r3
    }

    private static java.lang.String b(java.lang.String r3, boolean r4, int r5, long r6) {
            java.lang.String r0 = "shake_show=0"
            java.lang.String r1 = "shake_show=1"
            java.lang.String r2 = "shake_show"
            if (r4 == 0) goto L25
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L13
            java.lang.String r3 = r3.replace(r0, r1)
            goto L41
        L13:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&shake_show=1"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L41
        L25:
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L30
            java.lang.String r3 = r3.replace(r1, r0)
            goto L41
        L30:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&shake_show=0"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L41:
            java.lang.String r4 = "shake_time"
            boolean r4 = r3.contains(r4)
            r0 = 1000(0x3e8, double:4.94E-321)
            if (r4 == 0) goto L61
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r2 = "shake_time="
            r4.<init>(r2)
            long r6 = r6 / r0
            r4.append(r6)
            java.lang.String r4 = r4.toString()
            java.lang.String r6 = "(shake_time=[^&]*)"
            java.lang.String r3 = r3.replaceAll(r6, r4)
            goto L76
        L61:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&shake_time="
            r4.append(r3)
            long r6 = r6 / r0
            r4.append(r6)
            java.lang.String r3 = r4.toString()
        L76:
            java.lang.String r4 = "shake_strength"
            boolean r4 = r3.contains(r4)
            if (r4 == 0) goto L8f
            java.lang.String r4 = java.lang.String.valueOf(r5)
            java.lang.String r5 = "shake_strength="
            java.lang.String r4 = r5.concat(r4)
            java.lang.String r5 = "(shake_strength=[^&]*)"
            java.lang.String r3 = r3.replaceAll(r5, r4)
            goto La3
        L8f:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&shake_strength="
            r4.append(r3)
            r4.append(r5)
            java.lang.String r3 = r4.toString()
        La3:
            return r3
    }

    private void b(com.tkay.core.common.f.f r9, com.tkay.core.common.f.i r10, com.tkay.expressad.foundation.d.d r11, com.tkay.basead.d.a.b.a r12) {
            r8 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.d.a.b$1 r7 = new com.tkay.basead.d.a.b$1
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r11
            r6 = r12
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
    }

    private static java.lang.String c(java.lang.String r3, boolean r4) {
            java.lang.String r0 = "alecfc=0"
            java.lang.String r1 = "alecfc=1"
            java.lang.String r2 = "alecfc"
            if (r4 == 0) goto L25
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L13
            java.lang.String r3 = r3.replace(r0, r1)
            goto L41
        L13:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&alecfc=1"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L41
        L25:
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L30
            java.lang.String r3 = r3.replace(r1, r0)
            goto L41
        L30:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&alecfc=0"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L41:
            return r3
    }

    private void c(com.tkay.core.common.f.f r10, com.tkay.core.common.f.i r11, com.tkay.expressad.foundation.d.d r12, com.tkay.basead.d.a.b.a r13) {
            r9 = this;
            com.tkay.core.common.f.j r0 = r11.m
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1112014848(0x42480000, float:50.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            int r2 = r0.b()
            r3 = 0
            r4 = -1
            r5 = 2
            r6 = 1
            if (r2 <= 0) goto L21
            r5 = 5
            int r1 = r0.b()
            goto L81
        L21:
            if (r0 == 0) goto L80
            java.lang.String r2 = r0.r()
            int r7 = r2.hashCode()
            r8 = -559799608(0xffffffffdea222c8, float:-5.84156E18)
            if (r7 == r8) goto L4f
            r8 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r7 == r8) goto L45
            r8 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r7 == r8) goto L3b
            goto L59
        L3b:
            java.lang.String r7 = "728x90"
            boolean r2 = r2.equals(r7)
            if (r2 == 0) goto L59
            r2 = r6
            goto L5a
        L45:
            java.lang.String r7 = "320x90"
            boolean r2 = r2.equals(r7)
            if (r2 == 0) goto L59
            r2 = r3
            goto L5a
        L4f:
            java.lang.String r7 = "300x250"
            boolean r2 = r2.equals(r7)
            if (r2 == 0) goto L59
            r2 = r5
            goto L5a
        L59:
            r2 = r4
        L5a:
            if (r2 == 0) goto L70
            if (r2 == r6) goto L70
            if (r2 == r5) goto L61
            goto L80
        L61:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1132068864(0x437a0000, float:250.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            goto L81
        L70:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1119092736(0x42b40000, float:90.0)
            int r1 = com.tkay.core.common.l.h.a(r1, r2)
            r5 = r6
            goto L81
        L80:
            r5 = 4
        L81:
            com.tkay.expressad.out.TemplateBannerView r2 = new com.tkay.expressad.out.TemplateBannerView
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()
            android.content.Context r7 = r7.f()
            r2.<init>(r7)
            com.tkay.expressad.out.c r7 = new com.tkay.expressad.out.c
            int r8 = r0.b()
            r7.<init>(r5, r8)
            java.lang.String r5 = r10.S()
            boolean r5 = android.text.TextUtils.isEmpty(r5)
            if (r5 == 0) goto La4
            java.lang.String r10 = r11.c
            goto La8
        La4:
            java.lang.String r10 = r10.S()
        La8:
            java.lang.String r5 = ""
            r2.init(r7, r5, r10)
            int r10 = r0.s()
            if (r10 != 0) goto Lb4
            r3 = r6
        Lb4:
            r2.setAllowShowCloseBtn(r3)
            if (r1 <= 0) goto Lc1
            android.view.ViewGroup$LayoutParams r10 = new android.view.ViewGroup$LayoutParams
            r10.<init>(r4, r1)
            r2.setLayoutParams(r10)
        Lc1:
            com.tkay.basead.d.a.b$2 r10 = new com.tkay.basead.d.a.b$2
            r10.<init>(r9, r11, r13)
            r2.setBannerAdListener(r10)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r10 = r9.a
            java.lang.StringBuilder r13 = new java.lang.StringBuilder
            r13.<init>()
            java.lang.String r0 = r11.b
            r13.append(r0)
            java.lang.String r11 = r11.a
            r13.append(r11)
            java.lang.String r11 = r13.toString()
            r10.put(r11, r2)
            r2.load(r12)
            return
    }

    private static java.lang.String d(java.lang.String r3, boolean r4) {
            java.lang.String r0 = "hdbtn=1"
            java.lang.String r1 = "hdbtn=0"
            java.lang.String r2 = "hdbtn"
            if (r4 == 0) goto L25
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L13
            java.lang.String r3 = r3.replace(r0, r1)
            goto L41
        L13:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&hdbtn=0"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
            goto L41
        L25:
            boolean r4 = r3.contains(r2)
            if (r4 == 0) goto L30
            java.lang.String r3 = r3.replace(r1, r0)
            goto L41
        L30:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r3)
            java.lang.String r3 = "&hdbtn=1"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L41:
            return r3
    }

    private void d(com.tkay.core.common.f.f r11, com.tkay.core.common.f.i r12, com.tkay.expressad.foundation.d.d r13, com.tkay.basead.d.a.b.a r14) {
            r10 = this;
            com.tkay.expressad.reward.b.a r0 = new com.tkay.expressad.reward.b.a
            r0.<init>()
            java.lang.String r1 = r11.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L12
            java.lang.String r11 = r12.c
            goto L16
        L12:
            java.lang.String r11 = r11.S()
        L16:
            int r1 = r12.j
            r2 = 0
            r3 = 1
            if (r1 != r3) goto L2f
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.e()
            r1.a(r4, r11, r2)
            r0.a(r2)
            goto L46
        L2f:
            int r1 = r12.j
            r4 = 3
            if (r1 != r4) goto L46
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.e()
            r1.a(r4, r11, r3)
            r0.a(r3)
        L46:
            com.tkay.core.common.f.j r1 = r12.m
            int r1 = r1.y()
            if (r1 != 0) goto L50
            r1 = r3
            goto L51
        L50:
            r1 = 2
        L51:
            r0.a(r1)
            java.lang.String r1 = ""
            r0.a(r1, r11)
            com.tkay.expressad.videocommon.e.c r1 = com.tkay.expressad.videocommon.e.c.a()
            com.tkay.expressad.foundation.b.b r4 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r4 = r4.e()
            com.tkay.expressad.videocommon.e.d r11 = r1.a(r4, r11, r2)
            com.tkay.core.common.f.j r1 = r12.m
            int r1 = r1.z()
            if (r1 < 0) goto L7a
            com.tkay.core.common.f.j r1 = r12.m
            int r1 = r1.z()
            r11.a(r1)
        L7a:
            int r1 = r12.j
            if (r1 != r3) goto L81
            r11.l()
        L81:
            java.util.ArrayList<com.tkay.expressad.foundation.d.c> r11 = r13.J
            if (r11 == 0) goto L123
            int r1 = r11.size()
            if (r1 <= 0) goto L123
            java.util.Iterator r11 = r11.iterator()
        L8f:
            boolean r1 = r11.hasNext()
            if (r1 == 0) goto L123
            java.lang.Object r1 = r11.next()
            com.tkay.expressad.foundation.d.c r1 = (com.tkay.expressad.foundation.d.c) r1
            if (r1 == 0) goto L8f
            com.tkay.expressad.shake.a r4 = com.tkay.expressad.shake.a.a()
            boolean r4 = r4.b()
            if (r4 == 0) goto Lb1
            com.tkay.core.common.f.j r4 = r12.m
            int r4 = r4.M()
            if (r4 != r3) goto Lb1
            r4 = r3
            goto Lb2
        Lb1:
            r4 = r2
        Lb2:
            com.tkay.core.common.f.j r5 = r12.m
            int r5 = r5.x()
            if (r5 != 0) goto Lbc
            r5 = r3
            goto Lbd
        Lbc:
            r5 = r2
        Lbd:
            java.lang.String r6 = r1.I()
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto Lde
            java.lang.String r6 = c(r6, r5)
            com.tkay.core.common.f.j r7 = r12.m
            int r7 = r7.N()
            com.tkay.core.common.f.j r8 = r12.m
            long r8 = r8.O()
            java.lang.String r6 = b(r6, r4, r7, r8)
            r1.k(r6)
        Lde:
            java.lang.String r6 = r1.P()
            boolean r7 = android.text.TextUtils.isEmpty(r6)
            if (r7 != 0) goto Lff
            java.lang.String r5 = c(r6, r5)
            com.tkay.core.common.f.j r6 = r12.m
            int r6 = r6.N()
            com.tkay.core.common.f.j r7 = r12.m
            long r7 = r7.O()
            java.lang.String r4 = b(r5, r4, r6, r7)
            r1.n(r4)
        Lff:
            com.tkay.expressad.foundation.d.c$c r1 = r1.M()
            com.tkay.core.common.f.j r4 = r12.m
            int r4 = r4.u()
            if (r4 != r3) goto L10d
            r4 = r3
            goto L10e
        L10d:
            r4 = r2
        L10e:
            if (r1 == 0) goto L8f
            java.lang.String r5 = r1.e()
            boolean r6 = android.text.TextUtils.isEmpty(r5)
            if (r6 != 0) goto L8f
            java.lang.String r4 = c(r5, r4)
            r1.a(r4)
            goto L8f
        L123:
            com.tkay.basead.d.a.b$3 r11 = new com.tkay.basead.d.a.b$3
            r11.<init>(r10, r12, r14)
            r0.a(r11)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r11 = r10.a
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r1 = r12.b
            r14.append(r1)
            java.lang.String r12 = r12.a
            r14.append(r12)
            java.lang.String r12 = r14.toString()
            r11.put(r12, r0)
            r0.a(r13)
            return
    }

    private void e(com.tkay.core.common.f.f r9, com.tkay.core.common.f.i r10, com.tkay.expressad.foundation.d.d r11, com.tkay.basead.d.a.b.a r12) {
            r8 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.d.a.b$4 r7 = new com.tkay.basead.d.a.b$4
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r5 = r12
            r6 = r11
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
    }

    public final void a(com.tkay.core.common.f.f r11, com.tkay.core.common.f.i r12, com.tkay.expressad.foundation.d.d r13, com.tkay.basead.d.a.b.a r14) {
            r10 = this;
            java.lang.String r0 = r11.l()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L10
            java.lang.String r0 = r11.l()
            com.tkay.expressad.out.n.a = r0
        L10:
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r0.d()
            if (r0 != 0) goto L50
            com.tkay.expressad.foundation.b.b r0 = com.tkay.expressad.foundation.b.b.b()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r0.a(r1)
            com.tkay.expressad.e.b r0 = com.tkay.expressad.out.r.a()
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 3
            r1.<init>(r2)
            java.lang.String r2 = r11.Q()
            java.lang.String r3 = "dsp_tkay_appid"
            r1.put(r3, r2)
            java.lang.String r2 = r11.R()
            java.lang.String r3 = "dsp_tkay_appkey"
            r1.put(r3, r2)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r0.a(r1, r2)
        L50:
            int r0 = r12.j
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "0"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L71
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.d.a.b$4 r7 = new com.tkay.basead.d.a.b$4
            r1 = r7
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r14
            r6 = r13
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
        L71:
            int r0 = r12.j
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "2"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L164
            com.tkay.core.common.f.j r0 = r12.m
            r1 = 4
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            r3 = 1112014848(0x42480000, float:50.0)
            int r2 = com.tkay.core.common.l.h.a(r2, r3)
            int r3 = r0.b()
            r4 = 0
            r5 = -1
            r6 = 2
            r7 = 1
            if (r3 <= 0) goto La1
            r1 = 5
            int r2 = r0.b()
            goto L100
        La1:
            if (r0 == 0) goto L100
            java.lang.String r3 = r0.r()
            int r8 = r3.hashCode()
            r9 = -559799608(0xffffffffdea222c8, float:-5.84156E18)
            if (r8 == r9) goto Lcf
            r9 = 1507809854(0x59df5a3e, float:7.858518E15)
            if (r8 == r9) goto Lc5
            r9 = 1622564786(0x60b65fb2, float:1.0513134E20)
            if (r8 == r9) goto Lbb
            goto Ld9
        Lbb:
            java.lang.String r8 = "728x90"
            boolean r3 = r3.equals(r8)
            if (r3 == 0) goto Ld9
            r3 = r7
            goto Lda
        Lc5:
            java.lang.String r8 = "320x90"
            boolean r3 = r3.equals(r8)
            if (r3 == 0) goto Ld9
            r3 = r4
            goto Lda
        Lcf:
            java.lang.String r8 = "300x250"
            boolean r3 = r3.equals(r8)
            if (r3 == 0) goto Ld9
            r3 = r6
            goto Lda
        Ld9:
            r3 = r5
        Lda:
            if (r3 == 0) goto Lf1
            if (r3 == r7) goto Lf1
            if (r3 == r6) goto Le1
            goto L100
        Le1:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1132068864(0x437a0000, float:250.0)
            int r2 = com.tkay.core.common.l.h.a(r1, r2)
            r1 = r6
            goto L100
        Lf1:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            r2 = 1119092736(0x42b40000, float:90.0)
            int r2 = com.tkay.core.common.l.h.a(r1, r2)
            r1 = r7
        L100:
            com.tkay.expressad.out.TemplateBannerView r3 = new com.tkay.expressad.out.TemplateBannerView
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            r3.<init>(r6)
            com.tkay.expressad.out.c r6 = new com.tkay.expressad.out.c
            int r8 = r0.b()
            r6.<init>(r1, r8)
            java.lang.String r1 = r11.S()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L123
            java.lang.String r11 = r12.c
            goto L127
        L123:
            java.lang.String r11 = r11.S()
        L127:
            java.lang.String r1 = ""
            r3.init(r6, r1, r11)
            int r11 = r0.s()
            if (r11 != 0) goto L133
            r4 = r7
        L133:
            r3.setAllowShowCloseBtn(r4)
            if (r2 <= 0) goto L140
            android.view.ViewGroup$LayoutParams r11 = new android.view.ViewGroup$LayoutParams
            r11.<init>(r5, r2)
            r3.setLayoutParams(r11)
        L140:
            com.tkay.basead.d.a.b$2 r11 = new com.tkay.basead.d.a.b$2
            r11.<init>(r10, r12, r14)
            r3.setBannerAdListener(r11)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.a.g> r11 = r10.a
            java.lang.StringBuilder r14 = new java.lang.StringBuilder
            r14.<init>()
            java.lang.String r0 = r12.b
            r14.append(r0)
            java.lang.String r12 = r12.a
            r14.append(r12)
            java.lang.String r12 = r14.toString()
            r11.put(r12, r3)
            r3.load(r13)
            return
        L164:
            int r0 = r12.j
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.String r1 = "4"
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L185
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            com.tkay.basead.d.a.b$1 r7 = new com.tkay.basead.d.a.b$1
            r1 = r7
            r2 = r10
            r3 = r11
            r4 = r12
            r5 = r13
            r6 = r14
            r1.<init>(r2, r3, r4, r5, r6)
            r0.a(r7)
            return
        L185:
            r10.d(r11, r12, r13, r14)
            return
    }
}
