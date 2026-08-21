package com.tkay.expressad.exoplayer.a;

public final class a implements com.tkay.expressad.exoplayer.b.g, com.tkay.expressad.exoplayer.d.c, com.tkay.expressad.exoplayer.g.f, com.tkay.expressad.exoplayer.h.t, com.tkay.expressad.exoplayer.j.d.a, com.tkay.expressad.exoplayer.l.h, com.tkay.expressad.exoplayer.w.c {
    private final java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> a;
    private final com.tkay.expressad.exoplayer.k.c b;
    private final com.tkay.expressad.exoplayer.ae.b c;
    private final com.tkay.expressad.exoplayer.a.a.b d;
    private com.tkay.expressad.exoplayer.w e;

    public static class a {
        public a() {
                r0 = this;
                r0.<init>()
                return
        }

        public static com.tkay.expressad.exoplayer.a.a a(com.tkay.expressad.exoplayer.w r1, com.tkay.expressad.exoplayer.k.c r2) {
                com.tkay.expressad.exoplayer.a.a r0 = new com.tkay.expressad.exoplayer.a.a
                r0.<init>(r1, r2)
                return r0
        }
    }

    private static final class b {
        private final java.util.ArrayList<com.tkay.expressad.exoplayer.a.a.c> a;
        private final com.tkay.expressad.exoplayer.ae.a b;
        private com.tkay.expressad.exoplayer.a.a.c c;
        private com.tkay.expressad.exoplayer.a.a.c d;
        private com.tkay.expressad.exoplayer.ae e;
        private boolean f;

        public b() {
                r1 = this;
                r1.<init>()
                java.util.ArrayList r0 = new java.util.ArrayList
                r0.<init>()
                r1.a = r0
                com.tkay.expressad.exoplayer.ae$a r0 = new com.tkay.expressad.exoplayer.ae$a
                r0.<init>()
                r1.b = r0
                com.tkay.expressad.exoplayer.ae r0 = com.tkay.expressad.exoplayer.ae.a
                r1.e = r0
                return
        }

        private com.tkay.expressad.exoplayer.a.a.c a(com.tkay.expressad.exoplayer.a.a.c r5, com.tkay.expressad.exoplayer.ae r6) {
                r4 = this;
                boolean r0 = r6.a()
                if (r0 != 0) goto L3b
                com.tkay.expressad.exoplayer.ae r0 = r4.e
                boolean r0 = r0.a()
                if (r0 == 0) goto Lf
                goto L3b
            Lf:
                com.tkay.expressad.exoplayer.ae r0 = r4.e
                com.tkay.expressad.exoplayer.h.s$a r1 = r5.b
                int r1 = r1.a
                com.tkay.expressad.exoplayer.ae$a r2 = r4.b
                r3 = 1
                com.tkay.expressad.exoplayer.ae$a r0 = r0.a(r1, r2, r3)
                java.lang.Object r0 = r0.b
                int r0 = r6.a(r0)
                r1 = -1
                if (r0 != r1) goto L26
                return r5
            L26:
                com.tkay.expressad.exoplayer.ae$a r1 = r4.b
                r2 = 0
                com.tkay.expressad.exoplayer.ae$a r6 = r6.a(r0, r1, r2)
                int r6 = r6.c
                com.tkay.expressad.exoplayer.a.a$c r1 = new com.tkay.expressad.exoplayer.a.a$c
                com.tkay.expressad.exoplayer.h.s$a r5 = r5.b
                com.tkay.expressad.exoplayer.h.s$a r5 = r5.a(r0)
                r1.<init>(r6, r5)
                return r1
            L3b:
                return r5
        }

        static java.util.ArrayList a(com.tkay.expressad.exoplayer.a.a.b r0) {
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r0.a
                return r0
        }

        private void i() {
                r2 = this;
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L13
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                r1 = 0
                java.lang.Object r0 = r0.get(r1)
                com.tkay.expressad.exoplayer.a.a$c r0 = (com.tkay.expressad.exoplayer.a.a.c) r0
                r2.c = r0
            L13:
                return
        }

        public final com.tkay.expressad.exoplayer.a.a.c a() {
                r2 = this;
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                boolean r0 = r0.isEmpty()
                if (r0 != 0) goto L1f
                com.tkay.expressad.exoplayer.ae r0 = r2.e
                boolean r0 = r0.a()
                if (r0 != 0) goto L1f
                boolean r0 = r2.f
                if (r0 == 0) goto L15
                goto L1f
            L15:
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                r1 = 0
                java.lang.Object r0 = r0.get(r1)
                com.tkay.expressad.exoplayer.a.a$c r0 = (com.tkay.expressad.exoplayer.a.a.c) r0
                return r0
            L1f:
                r0 = 0
                return r0
        }

        public final com.tkay.expressad.exoplayer.h.s.a a(int r10) {
                r9 = this;
                com.tkay.expressad.exoplayer.ae r0 = r9.e
                r1 = 0
                if (r0 == 0) goto L37
                int r0 = r0.c()
                r2 = 0
                r4 = r1
                r3 = r2
            Lc:
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r5 = r9.a
                int r5 = r5.size()
                if (r3 >= r5) goto L36
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r5 = r9.a
                java.lang.Object r5 = r5.get(r3)
                com.tkay.expressad.exoplayer.a.a$c r5 = (com.tkay.expressad.exoplayer.a.a.c) r5
                com.tkay.expressad.exoplayer.h.s$a r6 = r5.b
                int r6 = r6.a
                if (r6 >= r0) goto L33
                com.tkay.expressad.exoplayer.ae r7 = r9.e
                com.tkay.expressad.exoplayer.ae$a r8 = r9.b
                com.tkay.expressad.exoplayer.ae$a r6 = r7.a(r6, r8, r2)
                int r6 = r6.c
                if (r6 != r10) goto L33
                if (r4 == 0) goto L31
                return r1
            L31:
                com.tkay.expressad.exoplayer.h.s$a r4 = r5.b
            L33:
                int r3 = r3 + 1
                goto Lc
            L36:
                r1 = r4
            L37:
                return r1
        }

        public final void a(int r3, com.tkay.expressad.exoplayer.h.s.a r4) {
                r2 = this;
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                com.tkay.expressad.exoplayer.a.a$c r1 = new com.tkay.expressad.exoplayer.a.a$c
                r1.<init>(r3, r4)
                r0.add(r1)
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r3 = r2.a
                int r3 = r3.size()
                r4 = 1
                if (r3 != r4) goto L1e
                com.tkay.expressad.exoplayer.ae r3 = r2.e
                boolean r3 = r3.a()
                if (r3 != 0) goto L1e
                r2.i()
            L1e:
                return
        }

        public final void a(com.tkay.expressad.exoplayer.ae r4) {
                r3 = this;
                r0 = 0
            L1:
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r1 = r3.a
                int r1 = r1.size()
                if (r0 >= r1) goto L1b
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r1 = r3.a
                java.lang.Object r2 = r1.get(r0)
                com.tkay.expressad.exoplayer.a.a$c r2 = (com.tkay.expressad.exoplayer.a.a.c) r2
                com.tkay.expressad.exoplayer.a.a$c r2 = r3.a(r2, r4)
                r1.set(r0, r2)
                int r0 = r0 + 1
                goto L1
            L1b:
                com.tkay.expressad.exoplayer.a.a$c r0 = r3.d
                if (r0 == 0) goto L25
                com.tkay.expressad.exoplayer.a.a$c r0 = r3.a(r0, r4)
                r3.d = r0
            L25:
                r3.e = r4
                r3.i()
                return
        }

        public final com.tkay.expressad.exoplayer.a.a.c b() {
                r1 = this;
                com.tkay.expressad.exoplayer.a.a$c r0 = r1.c
                return r0
        }

        public final void b(int r2, com.tkay.expressad.exoplayer.h.s.a r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.a.a$c r0 = new com.tkay.expressad.exoplayer.a.a$c
                r0.<init>(r2, r3)
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r2 = r1.a
                r2.remove(r0)
                com.tkay.expressad.exoplayer.a.a$c r2 = r1.d
                boolean r2 = r0.equals(r2)
                if (r2 == 0) goto L27
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r2 = r1.a
                boolean r2 = r2.isEmpty()
                if (r2 == 0) goto L1c
                r2 = 0
                goto L25
            L1c:
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r2 = r1.a
                r3 = 0
                java.lang.Object r2 = r2.get(r3)
                com.tkay.expressad.exoplayer.a.a$c r2 = (com.tkay.expressad.exoplayer.a.a.c) r2
            L25:
                r1.d = r2
            L27:
                return
        }

        public final com.tkay.expressad.exoplayer.a.a.c c() {
                r1 = this;
                com.tkay.expressad.exoplayer.a.a$c r0 = r1.d
                return r0
        }

        public final void c(int r2, com.tkay.expressad.exoplayer.h.s.a r3) {
                r1 = this;
                com.tkay.expressad.exoplayer.a.a$c r0 = new com.tkay.expressad.exoplayer.a.a$c
                r0.<init>(r2, r3)
                r1.d = r0
                return
        }

        public final com.tkay.expressad.exoplayer.a.a.c d() {
                r2 = this;
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                boolean r0 = r0.isEmpty()
                if (r0 == 0) goto La
                r0 = 0
                return r0
            La:
                java.util.ArrayList<com.tkay.expressad.exoplayer.a.a$c> r0 = r2.a
                int r1 = r0.size()
                int r1 = r1 + (-1)
                java.lang.Object r0 = r0.get(r1)
                com.tkay.expressad.exoplayer.a.a$c r0 = (com.tkay.expressad.exoplayer.a.a.c) r0
                return r0
        }

        public final boolean e() {
                r1 = this;
                boolean r0 = r1.f
                return r0
        }

        public final void f() {
                r0 = this;
                r0.i()
                return
        }

        public final void g() {
                r1 = this;
                r0 = 1
                r1.f = r0
                return
        }

        public final void h() {
                r1 = this;
                r0 = 0
                r1.f = r0
                r1.i()
                return
        }
    }

    private static final class c {
        public final int a;
        public final com.tkay.expressad.exoplayer.h.s.a b;

        public c(int r1, com.tkay.expressad.exoplayer.h.s.a r2) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                return
        }

        public final boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r4 != r5) goto L4
                return r0
            L4:
                r1 = 0
                if (r5 == 0) goto L25
                java.lang.Class r2 = r4.getClass()
                java.lang.Class r3 = r5.getClass()
                if (r2 == r3) goto L12
                goto L25
            L12:
                com.tkay.expressad.exoplayer.a.a$c r5 = (com.tkay.expressad.exoplayer.a.a.c) r5
                int r2 = r4.a
                int r3 = r5.a
                if (r2 != r3) goto L25
                com.tkay.expressad.exoplayer.h.s$a r2 = r4.b
                com.tkay.expressad.exoplayer.h.s$a r5 = r5.b
                boolean r5 = r2.equals(r5)
                if (r5 == 0) goto L25
                return r0
            L25:
                return r1
        }

        public final int hashCode() {
                r2 = this;
                int r0 = r2.a
                int r0 = r0 * 31
                com.tkay.expressad.exoplayer.h.s$a r1 = r2.b
                int r1 = r1.hashCode()
                int r0 = r0 + r1
                return r0
        }
    }

    protected a(com.tkay.expressad.exoplayer.w r1, com.tkay.expressad.exoplayer.k.c r2) {
            r0 = this;
            r0.<init>()
            r0.e = r1
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.k.c r1 = (com.tkay.expressad.exoplayer.k.c) r1
            r0.b = r1
            java.util.concurrent.CopyOnWriteArraySet r1 = new java.util.concurrent.CopyOnWriteArraySet
            r1.<init>()
            r0.a = r1
            com.tkay.expressad.exoplayer.a.a$b r1 = new com.tkay.expressad.exoplayer.a.a$b
            r1.<init>()
            r0.d = r1
            com.tkay.expressad.exoplayer.ae$b r1 = new com.tkay.expressad.exoplayer.ae$b
            r1.<init>()
            r0.c = r1
            return
    }

    private com.tkay.expressad.exoplayer.a.b.a a(com.tkay.expressad.exoplayer.a.a.c r2) {
            r1 = this;
            if (r2 != 0) goto L19
            com.tkay.expressad.exoplayer.w r2 = r1.e
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.w r2 = (com.tkay.expressad.exoplayer.w) r2
            int r2 = r2.p()
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            com.tkay.expressad.exoplayer.h.s$a r0 = r0.a(r2)
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r0)
            return r2
        L19:
            int r0 = r2.a
            com.tkay.expressad.exoplayer.h.s$a r2 = r2.b
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r0, r2)
            return r2
    }

    private void a(int r4, int r5) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4, r5)
            goto La
        L1a:
            return
    }

    private void a(android.net.NetworkInfo r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    private void a(com.tkay.expressad.exoplayer.w r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.w r0 = r1.e
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            java.lang.Object r2 = com.tkay.expressad.exoplayer.k.a.a(r2)
            com.tkay.expressad.exoplayer.w r2 = (com.tkay.expressad.exoplayer.w) r2
            r1.e = r2
            return
    }

    private com.tkay.expressad.exoplayer.a.b.a d(int r14, com.tkay.expressad.exoplayer.h.s.a r15) {
            r13 = this;
            com.tkay.expressad.exoplayer.w r0 = r13.e
            com.tkay.expressad.exoplayer.k.a.a(r0)
            com.tkay.expressad.exoplayer.k.c r0 = r13.b
            long r2 = r0.a()
            com.tkay.expressad.exoplayer.w r0 = r13.e
            com.tkay.expressad.exoplayer.ae r4 = r0.F()
            com.tkay.expressad.exoplayer.w r0 = r13.e
            int r0 = r0.p()
            r5 = 0
            if (r14 != r0) goto L46
            if (r15 == 0) goto L3e
            boolean r0 = r15.a()
            if (r0 == 0) goto L3e
            com.tkay.expressad.exoplayer.w r0 = r13.e
            int r0 = r0.z()
            int r1 = r15.b
            if (r0 != r1) goto L63
            com.tkay.expressad.exoplayer.w r0 = r13.e
            int r0 = r0.A()
            int r1 = r15.c
            if (r0 != r1) goto L63
            com.tkay.expressad.exoplayer.w r0 = r13.e
            long r5 = r0.t()
            goto L63
        L3e:
            com.tkay.expressad.exoplayer.w r0 = r13.e
            long r0 = r0.B()
        L44:
            r7 = r0
            goto L64
        L46:
            int r0 = r4.b()
            if (r14 >= r0) goto L63
            if (r15 == 0) goto L55
            boolean r0 = r15.a()
            if (r0 == 0) goto L55
            goto L63
        L55:
            com.tkay.expressad.exoplayer.ae$b r0 = r13.c
            r1 = 0
            com.tkay.expressad.exoplayer.ae$b r0 = r4.a(r14, r0, r1)
            long r0 = r0.h
            long r0 = com.tkay.expressad.exoplayer.b.a(r0)
            goto L44
        L63:
            r7 = r5
        L64:
            com.tkay.expressad.exoplayer.w r0 = r13.e
            long r0 = r0.u()
            com.tkay.expressad.exoplayer.w r5 = r13.e
            long r5 = r5.B()
            long r11 = r0 - r5
            com.tkay.expressad.exoplayer.a.b$a r0 = new com.tkay.expressad.exoplayer.a.b$a
            com.tkay.expressad.exoplayer.w r1 = r13.e
            long r9 = r1.t()
            r1 = r0
            r5 = r14
            r6 = r15
            r1.<init>(r2, r4, r5, r6, r7, r9, r11)
            return r0
    }

    private java.util.Set<com.tkay.expressad.exoplayer.a.b> g() {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r1.a
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.a.b.a h() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            com.tkay.expressad.exoplayer.a.a$c r0 = r0.b()
            com.tkay.expressad.exoplayer.a.b$a r0 = r1.a(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.a.b.a i() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            com.tkay.expressad.exoplayer.a.a$c r0 = r0.a()
            com.tkay.expressad.exoplayer.a.b$a r0 = r1.a(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.a.b.a j() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            com.tkay.expressad.exoplayer.a.a$c r0 = r0.c()
            com.tkay.expressad.exoplayer.a.b$a r0 = r1.a(r0)
            return r0
    }

    private com.tkay.expressad.exoplayer.a.b.a k() {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            com.tkay.expressad.exoplayer.a.a$c r0 = r0.d()
            com.tkay.expressad.exoplayer.a.b$a r0 = r1.a(r0)
            return r0
    }

    public final void a() {
            r3 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r3.d
            boolean r0 = r0.e()
            if (r0 != 0) goto L27
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            com.tkay.expressad.exoplayer.a.a$b r1 = r3.d
            r1.g()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0)
            goto L17
        L27:
            return
    }

    @Override
    public final void a(int r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.f(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(int r2, int r3, int r4, float r5) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.b$a r4 = r1.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r5 = r1.a
            java.util.Iterator r5 = r5.iterator()
        La:
            boolean r0 = r5.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r5.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.b(r4, r2, r3)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(int r2, long r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.b$a r3 = r1.h()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r4 = r1.a
            java.util.Iterator r4 = r4.iterator()
        La:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r4.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.g(r3, r2)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(int r10, long r11, long r13) {
            r9 = this;
            com.tkay.expressad.exoplayer.a.b$a r7 = r9.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r9.a
            java.util.Iterator r8 = r0.iterator()
        La:
            boolean r0 = r8.hasNext()
            if (r0 == 0) goto L1e
            java.lang.Object r0 = r8.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r1 = r7
            r2 = r10
            r3 = r11
            r5 = r13
            r0.a(r1, r2, r3, r5)
            goto La
        L1e:
            return
    }

    @Override
    public final void a(int r2, com.tkay.expressad.exoplayer.h.s.a r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            r0.a(r2, r3)
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.c(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
            r0 = this;
            r0.d(r1, r2)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r0.a
            java.util.Iterator r1 = r1.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L13
            r1.next()
            goto L9
        L13:
            return
    }

    @Override
    public final void a(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4, java.io.IOException r5, boolean r6) {
            r0 = this;
            com.tkay.expressad.exoplayer.a.b$a r1 = r0.d(r1, r2)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r2 = r0.a
            java.util.Iterator r2 = r2.iterator()
        La:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L1a
            java.lang.Object r3 = r2.next()
            com.tkay.expressad.exoplayer.a.b r3 = (com.tkay.expressad.exoplayer.a.b) r3
            r3.a(r1, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(int r2, com.tkay.expressad.exoplayer.h.s.a r3, com.tkay.expressad.exoplayer.h.t.c r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.b(r2, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(android.view.Surface r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    public final void a(com.tkay.expressad.exoplayer.a.b r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r1.a
            r0.add(r2)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.c.d r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r4 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.b r1 = (com.tkay.expressad.exoplayer.a.b) r1
            r2 = 2
            r1.d(r4, r2)
            goto La
        L1b:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.g.a r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.m r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r4.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r4.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r3 = 2
            r2.a(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void a(java.lang.Exception r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void a(java.lang.String r1, long r2, long r4) {
            r0 = this;
            com.tkay.expressad.exoplayer.a.b$a r2 = r0.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r0.a
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L1b
            java.lang.Object r4 = r3.next()
            com.tkay.expressad.exoplayer.a.b r4 = (com.tkay.expressad.exoplayer.a.b) r4
            r5 = 2
            r4.a(r2, r5, r1)
            goto La
        L1b:
            return
    }

    public final void b() {
            r3 = this;
            java.util.ArrayList r0 = new java.util.ArrayList
            com.tkay.expressad.exoplayer.a.a$b r1 = r3.d
            java.util.ArrayList r1 = com.tkay.expressad.exoplayer.a.a.b.a(r1)
            r0.<init>(r1)
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L23
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.a$c r1 = (com.tkay.expressad.exoplayer.a.a.c) r1
            int r2 = r1.a
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.b
            r3.b(r2, r1)
            goto Lf
        L23:
            return
    }

    @Override
    public final void b(int r2, com.tkay.expressad.exoplayer.h.s.a r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            r0.b(r2, r3)
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.d(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void b(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
            r0 = this;
            r0.d(r1, r2)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r0.a
            java.util.Iterator r1 = r1.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L13
            r1.next()
            goto L9
        L13:
            return
    }

    @Override
    public final void b(int r2, com.tkay.expressad.exoplayer.h.s.a r3, com.tkay.expressad.exoplayer.h.t.c r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1a
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.a(r2, r4)
            goto La
        L1a:
            return
    }

    public final void b(com.tkay.expressad.exoplayer.a.b r2) {
            r1 = this;
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r1.a
            r0.remove(r2)
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.c.d r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r4 = r3.h()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.b r1 = (com.tkay.expressad.exoplayer.a.b) r1
            r2 = 2
            r1.e(r4, r2)
            goto La
        L1b:
            return
    }

    @Override
    public final void b(com.tkay.expressad.exoplayer.m r5) {
            r4 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r4.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r4.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1b
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r3 = 1
            r2.a(r0, r3, r5)
            goto La
        L1b:
            return
    }

    @Override
    public final void b(java.lang.String r1, long r2, long r4) {
            r0 = this;
            com.tkay.expressad.exoplayer.a.b$a r2 = r0.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r0.a
            java.util.Iterator r3 = r3.iterator()
        La:
            boolean r4 = r3.hasNext()
            if (r4 == 0) goto L1b
            java.lang.Object r4 = r3.next()
            com.tkay.expressad.exoplayer.a.b r4 = (com.tkay.expressad.exoplayer.a.b) r4
            r5 = 1
            r4.a(r2, r5, r1)
            goto La
        L1b:
            return
    }

    @Override
    public final void c() {
            r2 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r2.d
            com.tkay.expressad.exoplayer.a.a$c r0 = r0.d()
            r2.a(r0)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        Lf:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L19
            r0.next()
            goto Lf
        L19:
            return
    }

    @Override
    public final void c(int r2, com.tkay.expressad.exoplayer.h.s.a r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r1.d
            r0.c(r2, r3)
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.d(r2, r3)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.e(r2)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void c(int r1, com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.t.b r3, com.tkay.expressad.exoplayer.h.t.c r4) {
            r0 = this;
            r0.d(r1, r2)
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r0.a
            java.util.Iterator r1 = r1.iterator()
        L9:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L13
            r1.next()
            goto L9
        L13:
            return
    }

    @Override
    public final void c(com.tkay.expressad.exoplayer.c.d r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r4 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.b r1 = (com.tkay.expressad.exoplayer.a.b) r1
            r2 = 1
            r1.d(r4, r2)
            goto La
        L1b:
            return
    }

    @Override
    public final void d() {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.f(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void d(com.tkay.expressad.exoplayer.c.d r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r4 = r3.h()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r3.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.b r1 = (com.tkay.expressad.exoplayer.a.b) r1
            r2 = 1
            r1.e(r4, r2)
            goto La
        L1b:
            return
    }

    @Override
    public final void e() {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.g(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void f() {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.j()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.h(r0)
            goto La
        L1a:
            return
    }

    @Override
    public final void onLoadingChanged(boolean r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.b(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlaybackParametersChanged(com.tkay.expressad.exoplayer.v r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlayerError(com.tkay.expressad.exoplayer.g r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPlayerStateChanged(boolean r4, int r5) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4, r5)
            goto La
        L1a:
            return
    }

    @Override
    public final void onPositionDiscontinuity(int r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r3.d
            r0.f()
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        Lf:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1f
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.b(r0, r4)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onRepeatModeChanged(int r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.c(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onSeekProcessed() {
            r3 = this;
            com.tkay.expressad.exoplayer.a.a$b r0 = r3.d
            boolean r0 = r0.e()
            if (r0 == 0) goto L27
            com.tkay.expressad.exoplayer.a.a$b r0 = r3.d
            r0.h()
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        L17:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L27
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.b(r0)
            goto L17
        L27:
            return
    }

    @Override
    public final void onShuffleModeEnabledChanged(boolean r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.a.b$a r0 = r3.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r1 = r3.a
            java.util.Iterator r1 = r1.iterator()
        La:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L1a
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.a.b r2 = (com.tkay.expressad.exoplayer.a.b) r2
            r2.a(r0, r4)
            goto La
        L1a:
            return
    }

    @Override
    public final void onTimelineChanged(com.tkay.expressad.exoplayer.ae r2, java.lang.Object r3, int r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.a.a$b r3 = r1.d
            r3.a(r2)
            com.tkay.expressad.exoplayer.a.b$a r2 = r1.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r3 = r1.a
            java.util.Iterator r3 = r3.iterator()
        Lf:
            boolean r0 = r3.hasNext()
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r3.next()
            com.tkay.expressad.exoplayer.a.b r0 = (com.tkay.expressad.exoplayer.a.b) r0
            r0.a(r2, r4)
            goto Lf
        L1f:
            return
    }

    @Override
    public final void onTracksChanged(com.tkay.expressad.exoplayer.h.af r3, com.tkay.expressad.exoplayer.i.g r4) {
            r2 = this;
            com.tkay.expressad.exoplayer.a.b$a r3 = r2.i()
            java.util.concurrent.CopyOnWriteArraySet<com.tkay.expressad.exoplayer.a.b> r0 = r2.a
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.a.b r1 = (com.tkay.expressad.exoplayer.a.b) r1
            r1.a(r3, r4)
            goto La
        L1a:
            return
    }
}
