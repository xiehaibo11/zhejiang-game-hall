package com.tkay.expressad.exoplayer.h;

public final class i extends com.tkay.expressad.exoplayer.h.f<com.tkay.expressad.exoplayer.h.i.e> implements com.tkay.expressad.exoplayer.x.b {
    private static final int a = 0;
    private static final int b = 1;
    private static final int c = 2;
    private static final int d = 3;
    private static final int e = 4;
    private static final int f = 5;
    private static final int g = 6;
    private final java.util.List<com.tkay.expressad.exoplayer.h.i.e> h;
    private final java.util.List<com.tkay.expressad.exoplayer.h.i.e> i;
    private final com.tkay.expressad.exoplayer.h.i.e j;
    private final java.util.Map<com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.i.e> k;
    private final java.util.List<com.tkay.expressad.exoplayer.h.i.d> l;
    private final boolean m;
    private final com.tkay.expressad.exoplayer.ae.b n;
    private com.tkay.expressad.exoplayer.h o;
    private boolean p;
    private com.tkay.expressad.exoplayer.h.aa q;
    private int r;
    private int s;

    static class 1 {
    }

    private static final class a extends com.tkay.expressad.exoplayer.h.a {
        private final int b;
        private final int c;
        private final int[] d;
        private final int[] e;
        private final com.tkay.expressad.exoplayer.ae[] f;
        private final java.lang.Object[] g;
        private final java.util.HashMap<java.lang.Object, java.lang.Integer> h;

        public a(java.util.Collection<com.tkay.expressad.exoplayer.h.i.e> r1, int r2, int r3, com.tkay.expressad.exoplayer.h.aa r4, boolean r5) {
                r0 = this;
                r0.<init>(r5, r4)
                r0.b = r2
                r0.c = r3
                int r2 = r1.size()
                int[] r3 = new int[r2]
                r0.d = r3
                int[] r3 = new int[r2]
                r0.e = r3
                com.tkay.expressad.exoplayer.ae[] r3 = new com.tkay.expressad.exoplayer.ae[r2]
                r0.f = r3
                java.lang.Object[] r2 = new java.lang.Object[r2]
                r0.g = r2
                java.util.HashMap r2 = new java.util.HashMap
                r2.<init>()
                r0.h = r2
                java.util.Iterator r1 = r1.iterator()
                r2 = 0
            L27:
                boolean r3 = r1.hasNext()
                if (r3 == 0) goto L5c
                java.lang.Object r3 = r1.next()
                com.tkay.expressad.exoplayer.h.i$e r3 = (com.tkay.expressad.exoplayer.h.i.e) r3
                com.tkay.expressad.exoplayer.ae[] r4 = r0.f
                com.tkay.expressad.exoplayer.h.i$b r5 = r3.c
                r4[r2] = r5
                int[] r4 = r0.d
                int r5 = r3.f
                r4[r2] = r5
                int[] r4 = r0.e
                int r5 = r3.e
                r4[r2] = r5
                java.lang.Object[] r4 = r0.g
                java.lang.Object r3 = r3.b
                r4[r2] = r3
                java.util.HashMap<java.lang.Object, java.lang.Integer> r3 = r0.h
                java.lang.Object[] r4 = r0.g
                r4 = r4[r2]
                int r5 = r2 + 1
                java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
                r3.put(r4, r2)
                r2 = r5
                goto L27
            L5c:
                return
        }

        @Override
        protected final int a(int r2) {
                r1 = this;
                int[] r0 = r1.d
                int r2 = r2 + 1
                int r2 = com.tkay.expressad.exoplayer.k.af.a(r0, r2)
                return r2
        }

        @Override
        public final int b() {
                r1 = this;
                int r0 = r1.b
                return r0
        }

        @Override
        protected final int b(int r2) {
                r1 = this;
                int[] r0 = r1.e
                int r2 = r2 + 1
                int r2 = com.tkay.expressad.exoplayer.k.af.a(r0, r2)
                return r2
        }

        @Override
        protected final int b(java.lang.Object r2) {
                r1 = this;
                java.util.HashMap<java.lang.Object, java.lang.Integer> r0 = r1.h
                java.lang.Object r2 = r0.get(r2)
                java.lang.Integer r2 = (java.lang.Integer) r2
                if (r2 != 0) goto Lc
                r2 = -1
                return r2
            Lc:
                int r2 = r2.intValue()
                return r2
        }

        @Override
        public final int c() {
                r1 = this;
                int r0 = r1.c
                return r0
        }

        @Override
        protected final com.tkay.expressad.exoplayer.ae c(int r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.ae[] r0 = r1.f
                r2 = r0[r2]
                return r2
        }

        @Override
        protected final int d(int r2) {
                r1 = this;
                int[] r0 = r1.d
                r2 = r0[r2]
                return r2
        }

        @Override
        protected final int e(int r2) {
                r1 = this;
                int[] r0 = r1.e
                r2 = r0[r2]
                return r2
        }

        @Override
        protected final java.lang.Object f(int r2) {
                r1 = this;
                java.lang.Object[] r0 = r1.g
                r2 = r0[r2]
                return r2
        }
    }

    private static final class b extends com.tkay.expressad.exoplayer.h.p {
        private static final java.lang.Object c = null;
        private static final com.tkay.expressad.exoplayer.ae.a d = null;
        private static final com.tkay.expressad.exoplayer.h.i.c e = null;
        private final java.lang.Object f;

        static {
                java.lang.Object r0 = new java.lang.Object
                r0.<init>()
                com.tkay.expressad.exoplayer.h.i.b.c = r0
                com.tkay.expressad.exoplayer.ae$a r0 = new com.tkay.expressad.exoplayer.ae$a
                r0.<init>()
                com.tkay.expressad.exoplayer.h.i.b.d = r0
                com.tkay.expressad.exoplayer.h.i$c r0 = new com.tkay.expressad.exoplayer.h.i$c
                r1 = 0
                r0.<init>(r1)
                com.tkay.expressad.exoplayer.h.i.b.e = r0
                return
        }

        public b() {
                r2 = this;
                com.tkay.expressad.exoplayer.h.i$c r0 = com.tkay.expressad.exoplayer.h.i.b.e
                r1 = 0
                r2.<init>(r0, r1)
                return
        }

        private b(com.tkay.expressad.exoplayer.ae r1, java.lang.Object r2) {
                r0 = this;
                r0.<init>(r1)
                r0.f = r2
                return
        }

        @Override
        public final int a(java.lang.Object r3) {
                r2 = this;
                com.tkay.expressad.exoplayer.ae r0 = r2.b
                java.lang.Object r1 = com.tkay.expressad.exoplayer.h.i.b.c
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto Lc
                java.lang.Object r3 = r2.f
            Lc:
                int r3 = r0.a(r3)
                return r3
        }

        @Override
        public final com.tkay.expressad.exoplayer.ae.a a(int r2, com.tkay.expressad.exoplayer.ae.a r3, boolean r4) {
                r1 = this;
                com.tkay.expressad.exoplayer.ae r0 = r1.b
                r0.a(r2, r3, r4)
                java.lang.Object r2 = r3.b
                java.lang.Object r4 = r1.f
                boolean r2 = com.tkay.expressad.exoplayer.k.af.a(r2, r4)
                if (r2 == 0) goto L13
                java.lang.Object r2 = com.tkay.expressad.exoplayer.h.i.b.c
                r3.b = r2
            L13:
                return r3
        }

        public final com.tkay.expressad.exoplayer.h.i.b a(com.tkay.expressad.exoplayer.ae r5) {
                r4 = this;
                com.tkay.expressad.exoplayer.h.i$b r0 = new com.tkay.expressad.exoplayer.h.i$b
                java.lang.Object r1 = r4.f
                if (r1 != 0) goto L17
                int r1 = r5.c()
                if (r1 <= 0) goto L17
                r1 = 0
                com.tkay.expressad.exoplayer.ae$a r2 = com.tkay.expressad.exoplayer.h.i.b.d
                r3 = 1
                com.tkay.expressad.exoplayer.ae$a r1 = r5.a(r1, r2, r3)
                java.lang.Object r1 = r1.b
                goto L19
            L17:
                java.lang.Object r1 = r4.f
            L19:
                r0.<init>(r5, r1)
                return r0
        }

        public final com.tkay.expressad.exoplayer.ae d() {
                r1 = this;
                com.tkay.expressad.exoplayer.ae r0 = r1.b
                return r0
        }
    }

    private static final class c extends com.tkay.expressad.exoplayer.ae {
        private c() {
                r0 = this;
                r0.<init>()
                return
        }

        c(byte r1) {
                r0 = this;
                r0.<init>()
                return
        }

        @Override
        public final int a(java.lang.Object r1) {
                r0 = this;
                if (r1 != 0) goto L4
                r1 = 0
                return r1
            L4:
                r1 = -1
                return r1
        }

        @Override
        public final com.tkay.expressad.exoplayer.ae.a a(int r8, com.tkay.expressad.exoplayer.ae.a r9, boolean r10) {
                r7 = this;
                r1 = 0
                r2 = 0
                r3 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r5 = 0
                r0 = r9
                com.tkay.expressad.exoplayer.ae$a r8 = r0.a(r1, r2, r3, r5)
                return r8
        }

        @Override
        public final com.tkay.expressad.exoplayer.ae.b a(int r17, com.tkay.expressad.exoplayer.ae.b r18, boolean r19, long r20) {
                r16 = this;
                r0 = 0
                int r2 = (r20 > r0 ? 1 : (r20 == r0 ? 0 : -1))
                if (r2 <= 0) goto Lb
                r0 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            Lb:
                r10 = r0
                r12 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r14 = 0
                r3 = 0
                r4 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r6 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
                r8 = 0
                r9 = 1
                r2 = r18
                com.tkay.expressad.exoplayer.ae$b r0 = r2.a(r3, r4, r6, r8, r9, r10, r12, r14)
                return r0
        }

        @Override
        public final int b() {
                r1 = this;
                r0 = 1
                return r0
        }

        @Override
        public final int c() {
                r1 = this;
                r0 = 1
                return r0
        }
    }

    private static final class d {
        public final android.os.Handler a;
        public final java.lang.Runnable b;

        public d(java.lang.Runnable r2) {
                r1 = this;
                r1.<init>()
                r1.b = r2
                android.os.Handler r2 = new android.os.Handler
                android.os.Looper r0 = android.os.Looper.myLooper()
                if (r0 == 0) goto L12
                android.os.Looper r0 = android.os.Looper.myLooper()
                goto L16
            L12:
                android.os.Looper r0 = android.os.Looper.getMainLooper()
            L16:
                r2.<init>(r0)
                r1.a = r2
                return
        }

        private void a() {
                r2 = this;
                android.os.Handler r0 = r2.a
                java.lang.Runnable r1 = r2.b
                r0.post(r1)
                return
        }
    }

    static final class e implements java.lang.Comparable<com.tkay.expressad.exoplayer.h.i.e> {
        public final com.tkay.expressad.exoplayer.h.s a;
        public final java.lang.Object b;
        public com.tkay.expressad.exoplayer.h.i.b c;
        public int d;
        public int e;
        public int f;
        public boolean g;
        public boolean h;
        public java.util.List<com.tkay.expressad.exoplayer.h.l> i;

        public e(com.tkay.expressad.exoplayer.h.s r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                com.tkay.expressad.exoplayer.h.i$b r1 = new com.tkay.expressad.exoplayer.h.i$b
                r1.<init>()
                r0.c = r1
                java.util.ArrayList r1 = new java.util.ArrayList
                r1.<init>()
                r0.i = r1
                java.lang.Object r1 = new java.lang.Object
                r1.<init>()
                r0.b = r1
                return
        }

        private int a(com.tkay.expressad.exoplayer.h.i.e r2) {
                r1 = this;
                int r0 = r1.f
                int r2 = r2.f
                int r0 = r0 - r2
                return r0
        }

        public final void a(int r1, int r2, int r3) {
                r0 = this;
                r0.d = r1
                r0.e = r2
                r0.f = r3
                r1 = 0
                r0.g = r1
                r0.h = r1
                java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r0.i
                r1.clear()
                return
        }

        @Override
        public final int compareTo(com.tkay.expressad.exoplayer.h.i.e r2) {
                r1 = this;
                com.tkay.expressad.exoplayer.h.i$e r2 = (com.tkay.expressad.exoplayer.h.i.e) r2
                int r0 = r1.f
                int r2 = r2.f
                int r0 = r0 - r2
                return r0
        }
    }

    private static final class f<T> {
        public final int a;
        public final T b;
        public final com.tkay.expressad.exoplayer.h.i.d c;

        public f(int r1, T r2, java.lang.Runnable r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                if (r3 == 0) goto Ld
                com.tkay.expressad.exoplayer.h.i$d r1 = new com.tkay.expressad.exoplayer.h.i$d
                r1.<init>(r3)
                goto Le
            Ld:
                r1 = 0
            Le:
                r0.c = r1
                r0.b = r2
                return
        }
    }

    public i() {
            r2 = this;
            com.tkay.expressad.exoplayer.h.aa$a r0 = new com.tkay.expressad.exoplayer.h.aa$a
            r0.<init>()
            r1 = 0
            r2.<init>(r1, r0)
            return
    }

    private i(boolean r2) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.aa$a r0 = new com.tkay.expressad.exoplayer.h.aa$a
            r0.<init>()
            r1.<init>(r2, r0)
            return
    }

    private i(boolean r2, com.tkay.expressad.exoplayer.h.aa r3) {
            r1 = this;
            r0 = 0
            com.tkay.expressad.exoplayer.h.s[] r0 = new com.tkay.expressad.exoplayer.h.s[r0]
            r1.<init>(r2, r3, r0)
            return
    }

    private i(boolean r4, com.tkay.expressad.exoplayer.h.aa r5, com.tkay.expressad.exoplayer.h.s... r6) {
            r3 = this;
            r3.<init>()
            int r0 = r6.length
            r1 = 0
        L5:
            if (r1 >= r0) goto Lf
            r2 = r6[r1]
            com.tkay.expressad.exoplayer.k.a.a(r2)
            int r1 = r1 + 1
            goto L5
        Lf:
            int r0 = r5.a()
            if (r0 <= 0) goto L19
            com.tkay.expressad.exoplayer.h.aa r5 = r5.d()
        L19:
            r3.q = r5
            java.util.IdentityHashMap r5 = new java.util.IdentityHashMap
            r5.<init>()
            r3.k = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.h = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.i = r5
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r3.l = r5
            com.tkay.expressad.exoplayer.h.i$e r5 = new com.tkay.expressad.exoplayer.h.i$e
            r0 = 0
            r5.<init>(r0)
            r3.j = r5
            r3.m = r4
            com.tkay.expressad.exoplayer.ae$b r4 = new com.tkay.expressad.exoplayer.ae$b
            r4.<init>()
            r3.n = r4
            java.util.List r4 = java.util.Arrays.asList(r6)
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r5 = r3.h
            int r5 = r5.size()
            r3.a(r5, r4, r0)
            return
    }

    private i(com.tkay.expressad.exoplayer.h.s... r2) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r0)
            return
    }

    private i(com.tkay.expressad.exoplayer.h.s[] r2, byte r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.aa$a r3 = new com.tkay.expressad.exoplayer.h.aa$a
            r3.<init>()
            r0 = 0
            r1.<init>(r0, r3, r2)
            return
    }

    private static int a(com.tkay.expressad.exoplayer.h.i.e r0, int r1) {
            int r0 = r0.e
            int r1 = r1 + r0
            return r1
    }

    private static com.tkay.expressad.exoplayer.h.s.a a(com.tkay.expressad.exoplayer.h.i.e r5, com.tkay.expressad.exoplayer.h.s.a r6) {
            r0 = 0
        L1:
            java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r5.i
            int r1 = r1.size()
            if (r0 >= r1) goto L28
            java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r5.i
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.h.l r1 = (com.tkay.expressad.exoplayer.h.l) r1
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.b
            long r1 = r1.d
            long r3 = r6.d
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L25
            int r0 = r6.a
            int r5 = r5.f
            int r0 = r0 + r5
            com.tkay.expressad.exoplayer.h.s$a r5 = r6.a(r0)
            return r5
        L25:
            int r0 = r0 + 1
            goto L1
        L28:
            r5 = 0
            return r5
    }

    private void a(int r4) {
            r3 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.h
            r0.remove(r4)
            com.tkay.expressad.exoplayer.h r0 = r3.o
            if (r0 == 0) goto L1f
            com.tkay.expressad.exoplayer.x r0 = r0.a(r3)
            r1 = 2
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            r2 = 0
            r1.<init>(r4, r2, r2)
            com.tkay.expressad.exoplayer.x r4 = r0.a(r1)
            r4.i()
        L1f:
            return
    }

    private void a(int r4, int r5) {
            r3 = this;
            if (r4 == r5) goto L2b
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.h
            java.lang.Object r1 = r0.remove(r4)
            com.tkay.expressad.exoplayer.h.i$e r1 = (com.tkay.expressad.exoplayer.h.i.e) r1
            r0.add(r5, r1)
            com.tkay.expressad.exoplayer.h r0 = r3.o
            if (r0 == 0) goto L2b
            com.tkay.expressad.exoplayer.x r0 = r0.a(r3)
            r1 = 3
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            java.lang.Integer r5 = java.lang.Integer.valueOf(r5)
            r2 = 0
            r1.<init>(r4, r5, r2)
            com.tkay.expressad.exoplayer.x r4 = r0.a(r1)
            r4.i()
        L2b:
            return
    }

    private void a(int r3, int r4, int r5, int r6) {
            r2 = this;
            int r0 = r2.r
            int r0 = r0 + r5
            r2.r = r0
            int r0 = r2.s
            int r0 = r0 + r6
            r2.s = r0
        La:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.i
            int r0 = r0.size()
            if (r3 >= r0) goto L3c
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.i
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r0.d
            int r1 = r1 + r4
            r0.d = r1
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.i
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r0.e
            int r1 = r1 + r5
            r0.e = r1
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.i
            java.lang.Object r0 = r0.get(r3)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r0.f
            int r1 = r1 + r6
            r0.f = r1
            int r3 = r3 + 1
            goto La
        L3c:
            return
    }

    private void a(int r3, int r4, java.lang.Runnable r5) {
            r2 = this;
            if (r3 != r4) goto L3
            return
        L3:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.h
            java.lang.Object r1 = r0.remove(r3)
            com.tkay.expressad.exoplayer.h.i$e r1 = (com.tkay.expressad.exoplayer.h.i.e) r1
            r0.add(r4, r1)
            com.tkay.expressad.exoplayer.h r0 = r2.o
            if (r0 == 0) goto L2c
            com.tkay.expressad.exoplayer.x r0 = r0.a(r2)
            r1 = 3
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)
            r1.<init>(r3, r4, r5)
            com.tkay.expressad.exoplayer.x r3 = r0.a(r1)
            r3.i()
            return
        L2c:
            if (r5 == 0) goto L31
            r5.run()
        L31:
            return
    }

    private void a(int r4, com.tkay.expressad.exoplayer.h.i.e r5) {
            r3 = this;
            if (r4 <= 0) goto L22
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.i
            int r1 = r4 + (-1)
            java.lang.Object r0 = r0.get(r1)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r0.e
            com.tkay.expressad.exoplayer.h.i$b r2 = r0.c
            int r2 = r2.b()
            int r1 = r1 + r2
            int r2 = r0.f
            com.tkay.expressad.exoplayer.h.i$b r0 = r0.c
            int r0 = r0.c()
            int r2 = r2 + r0
            r5.a(r4, r1, r2)
            goto L26
        L22:
            r0 = 0
            r5.a(r4, r0, r0)
        L26:
            com.tkay.expressad.exoplayer.h.i$b r0 = r5.c
            int r0 = r0.b()
            com.tkay.expressad.exoplayer.h.i$b r1 = r5.c
            int r1 = r1.c()
            r2 = 1
            r3.a(r4, r2, r0, r1)
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.i
            r0.add(r4, r5)
            com.tkay.expressad.exoplayer.h.s r4 = r5.a
            r3.a(r5, r4)
            return
    }

    private void a(int r2, com.tkay.expressad.exoplayer.h.s r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    private void a(int r3, com.tkay.expressad.exoplayer.h.s r4, java.lang.Runnable r5) {
            r2 = this;
            com.tkay.expressad.exoplayer.k.a.a(r4)
            com.tkay.expressad.exoplayer.h.i$e r0 = new com.tkay.expressad.exoplayer.h.i$e
            r0.<init>(r4)
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r4 = r2.h
            r4.add(r3, r0)
            com.tkay.expressad.exoplayer.h r4 = r2.o
            if (r4 == 0) goto L27
            com.tkay.expressad.exoplayer.x r4 = r4.a(r2)
            r1 = 0
            com.tkay.expressad.exoplayer.x r4 = r4.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            r1.<init>(r3, r0, r5)
            com.tkay.expressad.exoplayer.x r3 = r4.a(r1)
            r3.i()
            return
        L27:
            if (r5 == 0) goto L2c
            r5.run()
        L2c:
            return
    }

    private void a(int r4, java.lang.Runnable r5) {
            r3 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.h
            r0.remove(r4)
            com.tkay.expressad.exoplayer.h r0 = r3.o
            if (r0 == 0) goto L20
            com.tkay.expressad.exoplayer.x r0 = r0.a(r3)
            r1 = 2
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            r2 = 0
            r1.<init>(r4, r2, r5)
            com.tkay.expressad.exoplayer.x r4 = r0.a(r1)
            r4.i()
            return
        L20:
            if (r5 == 0) goto L25
            r5.run()
        L25:
            return
    }

    private void a(int r2, java.util.Collection<com.tkay.expressad.exoplayer.h.s> r3) {
            r1 = this;
            r0 = 0
            r1.a(r2, r3, r0)
            return
    }

    private void a(int r5, java.util.Collection<com.tkay.expressad.exoplayer.h.s> r6, java.lang.Runnable r7) {
            r4 = this;
            java.util.Iterator r0 = r6.iterator()
        L4:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L14
            java.lang.Object r1 = r0.next()
            com.tkay.expressad.exoplayer.h.s r1 = (com.tkay.expressad.exoplayer.h.s) r1
            com.tkay.expressad.exoplayer.k.a.a(r1)
            goto L4
        L14:
            java.util.ArrayList r0 = new java.util.ArrayList
            int r1 = r6.size()
            r0.<init>(r1)
            java.util.Iterator r1 = r6.iterator()
        L21:
            boolean r2 = r1.hasNext()
            if (r2 == 0) goto L36
            java.lang.Object r2 = r1.next()
            com.tkay.expressad.exoplayer.h.s r2 = (com.tkay.expressad.exoplayer.h.s) r2
            com.tkay.expressad.exoplayer.h.i$e r3 = new com.tkay.expressad.exoplayer.h.i$e
            r3.<init>(r2)
            r0.add(r3)
            goto L21
        L36:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r1 = r4.h
            r1.addAll(r5, r0)
            com.tkay.expressad.exoplayer.h r1 = r4.o
            if (r1 == 0) goto L5d
            boolean r6 = r6.isEmpty()
            if (r6 != 0) goto L5d
            com.tkay.expressad.exoplayer.h r6 = r4.o
            com.tkay.expressad.exoplayer.x r6 = r6.a(r4)
            r1 = 1
            com.tkay.expressad.exoplayer.x r6 = r6.a(r1)
            com.tkay.expressad.exoplayer.h.i$f r1 = new com.tkay.expressad.exoplayer.h.i$f
            r1.<init>(r5, r0, r7)
            com.tkay.expressad.exoplayer.x r5 = r6.a(r1)
            r5.i()
            return
        L5d:
            if (r7 == 0) goto L62
            r7.run()
        L62:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.i.d r3) {
            r2 = this;
            boolean r0 = r2.p
            if (r0 != 0) goto L15
            com.tkay.expressad.exoplayer.h r0 = r2.o
            com.tkay.expressad.exoplayer.x r0 = r0.a(r2)
            r1 = 5
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            r0.i()
            r0 = 1
            r2.p = r0
        L15:
            if (r3 == 0) goto L1c
            java.util.List<com.tkay.expressad.exoplayer.h.i$d> r0 = r2.l
            r0.add(r3)
        L1c:
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.i.e r8, com.tkay.expressad.exoplayer.ae r9) {
            r7 = this;
            if (r8 == 0) goto L66
            com.tkay.expressad.exoplayer.h.i$b r0 = r8.c
            com.tkay.expressad.exoplayer.ae r1 = r0.d()
            if (r1 == r9) goto L65
            int r1 = r9.b()
            int r2 = r0.b()
            int r1 = r1 - r2
            int r2 = r9.c()
            int r3 = r0.c()
            int r2 = r2 - r3
            r3 = 1
            r4 = 0
            if (r1 != 0) goto L22
            if (r2 == 0) goto L28
        L22:
            int r5 = r8.d
            int r5 = r5 + r3
            r7.a(r5, r4, r1, r2)
        L28:
            com.tkay.expressad.exoplayer.h.i$b r0 = r0.a(r9)
            r8.c = r0
            boolean r0 = r8.g
            if (r0 != 0) goto L61
            boolean r0 = r9.a()
            if (r0 != 0) goto L61
            com.tkay.expressad.exoplayer.ae$b r0 = r7.n
            r9.a(r4, r0, r4)
            com.tkay.expressad.exoplayer.ae$b r9 = r7.n
            long r0 = r9.j
            com.tkay.expressad.exoplayer.ae$b r9 = r7.n
            long r5 = r9.h
            long r0 = r0 + r5
        L46:
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r8.i
            int r9 = r9.size()
            if (r4 >= r9) goto L5f
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r8.i
            java.lang.Object r9 = r9.get(r4)
            com.tkay.expressad.exoplayer.h.l r9 = (com.tkay.expressad.exoplayer.h.l) r9
            r9.d(r0)
            r9.f()
            int r4 = r4 + 1
            goto L46
        L5f:
            r8.g = r3
        L61:
            r8 = 0
            r7.a(r8)
        L65:
            return
        L66:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
    }

    private void a(com.tkay.expressad.exoplayer.h.s r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.h
            int r0 = r0.size()
            r1 = 0
            r2.a(r0, r3, r1)
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.s r2, java.lang.Runnable r3) {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.h
            int r0 = r0.size()
            r1.a(r0, r2, r3)
            return
    }

    private void a(java.lang.Runnable r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.h
            r0.clear()
            com.tkay.expressad.exoplayer.h r0 = r2.o
            if (r0 == 0) goto L23
            com.tkay.expressad.exoplayer.x r0 = r0.a(r2)
            r1 = 4
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            if (r3 == 0) goto L1a
            com.tkay.expressad.exoplayer.h.i$d r1 = new com.tkay.expressad.exoplayer.h.i$d
            r1.<init>(r3)
            goto L1b
        L1a:
            r1 = 0
        L1b:
            com.tkay.expressad.exoplayer.x r3 = r0.a(r1)
            r3.i()
            return
        L23:
            if (r3 == 0) goto L28
            r3.run()
        L28:
            return
    }

    private void a(java.util.Collection<com.tkay.expressad.exoplayer.h.s> r3) {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.h
            int r0 = r0.size()
            r1 = 0
            r2.a(r0, r3, r1)
            return
    }

    private void a(java.util.Collection<com.tkay.expressad.exoplayer.h.s> r2, java.lang.Runnable r3) {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.h
            int r0 = r0.size()
            r1.a(r0, r2, r3)
            return
    }

    private com.tkay.expressad.exoplayer.h.s b(int r2) {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.h
            java.lang.Object r2 = r0.get(r2)
            com.tkay.expressad.exoplayer.h.i$e r2 = (com.tkay.expressad.exoplayer.h.i.e) r2
            com.tkay.expressad.exoplayer.h.s r2 = r2.a
            return r2
    }

    private void b(int r6, int r7) {
            r5 = this;
            int r0 = java.lang.Math.min(r6, r7)
            int r1 = java.lang.Math.max(r6, r7)
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r2 = r5.i
            java.lang.Object r2 = r2.get(r0)
            com.tkay.expressad.exoplayer.h.i$e r2 = (com.tkay.expressad.exoplayer.h.i.e) r2
            int r2 = r2.e
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r3 = r5.i
            java.lang.Object r3 = r3.get(r0)
            com.tkay.expressad.exoplayer.h.i$e r3 = (com.tkay.expressad.exoplayer.h.i.e) r3
            int r3 = r3.f
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r4 = r5.i
            java.lang.Object r6 = r4.remove(r6)
            com.tkay.expressad.exoplayer.h.i$e r6 = (com.tkay.expressad.exoplayer.h.i.e) r6
            r4.add(r7, r6)
        L27:
            if (r0 > r1) goto L46
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r6 = r5.i
            java.lang.Object r6 = r6.get(r0)
            com.tkay.expressad.exoplayer.h.i$e r6 = (com.tkay.expressad.exoplayer.h.i.e) r6
            r6.e = r2
            r6.f = r3
            com.tkay.expressad.exoplayer.h.i$b r7 = r6.c
            int r7 = r7.b()
            int r2 = r2 + r7
            com.tkay.expressad.exoplayer.h.i$b r6 = r6.c
            int r6 = r6.c()
            int r3 = r3 + r6
            int r0 = r0 + 1
            goto L27
        L46:
            return
    }

    private void b(int r3, java.util.Collection<com.tkay.expressad.exoplayer.h.i.e> r4) {
            r2 = this;
            java.util.Iterator r4 = r4.iterator()
        L4:
            boolean r0 = r4.hasNext()
            if (r0 == 0) goto L17
            java.lang.Object r0 = r4.next()
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r3 + 1
            r2.a(r3, r0)
            r3 = r1
            goto L4
        L17:
            return
    }

    private void b(com.tkay.expressad.exoplayer.h.i.e r8, com.tkay.expressad.exoplayer.ae r9) {
            r7 = this;
            if (r8 == 0) goto L67
            com.tkay.expressad.exoplayer.h.i$b r0 = r8.c
            com.tkay.expressad.exoplayer.ae r1 = r0.d()
            if (r1 != r9) goto Lb
            return
        Lb:
            int r1 = r9.b()
            int r2 = r0.b()
            int r1 = r1 - r2
            int r2 = r9.c()
            int r3 = r0.c()
            int r2 = r2 - r3
            r3 = 1
            r4 = 0
            if (r1 != 0) goto L23
            if (r2 == 0) goto L29
        L23:
            int r5 = r8.d
            int r5 = r5 + r3
            r7.a(r5, r4, r1, r2)
        L29:
            com.tkay.expressad.exoplayer.h.i$b r0 = r0.a(r9)
            r8.c = r0
            boolean r0 = r8.g
            if (r0 != 0) goto L62
            boolean r0 = r9.a()
            if (r0 != 0) goto L62
            com.tkay.expressad.exoplayer.ae$b r0 = r7.n
            r9.a(r4, r0, r4)
            com.tkay.expressad.exoplayer.ae$b r9 = r7.n
            long r0 = r9.j
            com.tkay.expressad.exoplayer.ae$b r9 = r7.n
            long r5 = r9.h
            long r0 = r0 + r5
        L47:
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r8.i
            int r9 = r9.size()
            if (r4 >= r9) goto L60
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r8.i
            java.lang.Object r9 = r9.get(r4)
            com.tkay.expressad.exoplayer.h.l r9 = (com.tkay.expressad.exoplayer.h.l) r9
            r9.d(r0)
            r9.f()
            int r4 = r4 + 1
            goto L47
        L60:
            r8.g = r3
        L62:
            r8 = 0
            r7.a(r8)
            return
        L67:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            r8.<init>()
            throw r8
    }

    private void c() {
            r2 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r2.h
            r0.clear()
            com.tkay.expressad.exoplayer.h r0 = r2.o
            if (r0 == 0) goto L1a
            com.tkay.expressad.exoplayer.x r0 = r0.a(r2)
            r1 = 4
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            r1 = 0
            com.tkay.expressad.exoplayer.x r0 = r0.a(r1)
            r0.i()
        L1a:
            return
    }

    private void c(int r5) {
            r4 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r4.i
            java.lang.Object r0 = r0.remove(r5)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            com.tkay.expressad.exoplayer.h.i$b r1 = r0.c
            int r2 = r1.b()
            int r2 = -r2
            int r1 = r1.c()
            int r1 = -r1
            r3 = -1
            r4.a(r5, r3, r2, r1)
            r5 = 1
            r0.h = r5
            java.util.List<com.tkay.expressad.exoplayer.h.l> r5 = r0.i
            boolean r5 = r5.isEmpty()
            if (r5 == 0) goto L26
            r4.a(r0)
        L26:
            return
    }

    private int d() {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.h
            int r0 = r0.size()
            return r0
    }

    private int d(int r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.i$e r0 = r3.j
            r0.f = r4
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r3.i
            com.tkay.expressad.exoplayer.h.i$e r1 = r3.j
            int r0 = java.util.Collections.binarySearch(r0, r1)
            if (r0 >= 0) goto L12
            int r4 = -r0
            int r4 = r4 + (-2)
            return r4
        L12:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r1 = r3.i
            int r1 = r1.size()
            int r1 = r1 + (-1)
            if (r0 >= r1) goto L2c
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r1 = r3.i
            int r2 = r0 + 1
            java.lang.Object r1 = r1.get(r2)
            com.tkay.expressad.exoplayer.h.i$e r1 = (com.tkay.expressad.exoplayer.h.i.e) r1
            int r1 = r1.f
            if (r1 != r4) goto L2c
            r0 = r2
            goto L12
        L2c:
            return r0
    }

    private void e() {
            r8 = this;
            r0 = 0
            r8.p = r0
            java.util.List<com.tkay.expressad.exoplayer.h.i$d> r0 = r8.l
            boolean r0 = r0.isEmpty()
            if (r0 == 0) goto L10
            java.util.List r0 = java.util.Collections.emptyList()
            goto L17
        L10:
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.tkay.expressad.exoplayer.h.i$d> r1 = r8.l
            r0.<init>(r1)
        L17:
            java.util.List<com.tkay.expressad.exoplayer.h.i$d> r1 = r8.l
            r1.clear()
            com.tkay.expressad.exoplayer.h.i$a r1 = new com.tkay.expressad.exoplayer.h.i$a
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r3 = r8.i
            int r4 = r8.r
            int r5 = r8.s
            com.tkay.expressad.exoplayer.h.aa r6 = r8.q
            boolean r7 = r8.m
            r2 = r1
            r2.<init>(r3, r4, r5, r6, r7)
            r2 = 0
            r8.a(r1, r2)
            boolean r1 = r0.isEmpty()
            if (r1 != 0) goto L48
            com.tkay.expressad.exoplayer.h r1 = r8.o
            com.tkay.expressad.exoplayer.x r1 = r1.a(r8)
            r2 = 6
            com.tkay.expressad.exoplayer.x r1 = r1.a(r2)
            com.tkay.expressad.exoplayer.x r0 = r1.a(r0)
            r0.i()
        L48:
            return
    }

    private void f() {
            r1 = this;
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.i
            int r0 = r0.size()
            int r0 = r0 + (-1)
        L8:
            if (r0 < 0) goto L10
            r1.c(r0)
            int r0 = r0 + (-1)
            goto L8
        L10:
            return
    }

    @Override
    protected final int a(com.tkay.expressad.exoplayer.h.i.e r1, int r2) {
            r0 = this;
            com.tkay.expressad.exoplayer.h.i$e r1 = (com.tkay.expressad.exoplayer.h.i.e) r1
            int r1 = r1.e
            int r2 = r2 + r1
            return r2
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r5, com.tkay.expressad.exoplayer.j.b r6) {
            r4 = this;
            int r0 = r5.a
            com.tkay.expressad.exoplayer.h.i$e r1 = r4.j
            r1.f = r0
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r1 = r4.i
            com.tkay.expressad.exoplayer.h.i$e r2 = r4.j
            int r1 = java.util.Collections.binarySearch(r1, r2)
            if (r1 >= 0) goto L14
            int r0 = -r1
            int r0 = r0 + (-2)
            goto L2f
        L14:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r2 = r4.i
            int r2 = r2.size()
            int r2 = r2 + (-1)
            if (r1 >= r2) goto L2e
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r2 = r4.i
            int r3 = r1 + 1
            java.lang.Object r2 = r2.get(r3)
            com.tkay.expressad.exoplayer.h.i$e r2 = (com.tkay.expressad.exoplayer.h.i.e) r2
            int r2 = r2.f
            if (r2 != r0) goto L2e
            r1 = r3
            goto L14
        L2e:
            r0 = r1
        L2f:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r1 = r4.i
            java.lang.Object r0 = r1.get(r0)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            int r1 = r5.a
            int r2 = r0.f
            int r1 = r1 - r2
            com.tkay.expressad.exoplayer.h.s$a r5 = r5.a(r1)
            com.tkay.expressad.exoplayer.h.l r1 = new com.tkay.expressad.exoplayer.h.l
            com.tkay.expressad.exoplayer.h.s r2 = r0.a
            r1.<init>(r2, r5, r6)
            java.util.Map<com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.i$e> r5 = r4.k
            r5.put(r1, r0)
            java.util.List<com.tkay.expressad.exoplayer.h.l> r5 = r0.i
            r5.add(r1)
            boolean r5 = r0.g
            if (r5 == 0) goto L58
            r1.f()
        L58:
            return r1
    }

    @Override
    protected final com.tkay.expressad.exoplayer.h.s.a a(com.tkay.expressad.exoplayer.h.i.e r6, com.tkay.expressad.exoplayer.h.s.a r7) {
            r5 = this;
            com.tkay.expressad.exoplayer.h.i$e r6 = (com.tkay.expressad.exoplayer.h.i.e) r6
            r0 = 0
        L3:
            java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r6.i
            int r1 = r1.size()
            if (r0 >= r1) goto L2a
            java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r6.i
            java.lang.Object r1 = r1.get(r0)
            com.tkay.expressad.exoplayer.h.l r1 = (com.tkay.expressad.exoplayer.h.l) r1
            com.tkay.expressad.exoplayer.h.s$a r1 = r1.b
            long r1 = r1.d
            long r3 = r7.d
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 != 0) goto L27
            int r0 = r7.a
            int r6 = r6.f
            int r0 = r0 + r6
            com.tkay.expressad.exoplayer.h.s$a r6 = r7.a(r0)
            return r6
        L27:
            int r0 = r0 + 1
            goto L3
        L2a:
            r6 = 0
            return r6
    }

    @Override
    public final void a() {
            r1 = this;
            super.a()
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r0 = r1.i
            r0.clear()
            r0 = 0
            r1.o = r0
            com.tkay.expressad.exoplayer.h.aa r0 = r1.q
            com.tkay.expressad.exoplayer.h.aa r0 = r0.d()
            r1.q = r0
            r0 = 0
            r1.r = r0
            r1.s = r0
            return
    }

    @Override
    public final void a(int r7, java.lang.Object r8) {
            r6 = this;
            r0 = 1
            switch(r7) {
                case 0: goto Le7;
                case 1: goto Lc4;
                case 2: goto Lad;
                case 3: goto L3d;
                case 4: goto L28;
                case 5: goto L24;
                case 6: goto La;
                default: goto L4;
            }
        L4:
            java.lang.IllegalStateException r7 = new java.lang.IllegalStateException
            r7.<init>()
            throw r7
        La:
            java.util.List r8 = (java.util.List) r8
            r7 = 0
        Ld:
            int r0 = r8.size()
            if (r7 >= r0) goto L23
            java.lang.Object r0 = r8.get(r7)
            com.tkay.expressad.exoplayer.h.i$d r0 = (com.tkay.expressad.exoplayer.h.i.d) r0
            android.os.Handler r1 = r0.a
            java.lang.Runnable r0 = r0.b
            r1.post(r0)
            int r7 = r7 + 1
            goto Ld
        L23:
            return
        L24:
            r6.e()
            return
        L28:
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r7 = r6.i
            int r7 = r7.size()
            int r7 = r7 - r0
        L2f:
            if (r7 < 0) goto L37
            r6.c(r7)
            int r7 = r7 + (-1)
            goto L2f
        L37:
            com.tkay.expressad.exoplayer.h.i$d r8 = (com.tkay.expressad.exoplayer.h.i.d) r8
            r6.a(r8)
            return
        L3d:
            com.tkay.expressad.exoplayer.h.i$f r8 = (com.tkay.expressad.exoplayer.h.i.f) r8
            com.tkay.expressad.exoplayer.h.aa r7 = r6.q
            int r1 = r8.a
            com.tkay.expressad.exoplayer.h.aa r7 = r7.c(r1)
            r6.q = r7
            T r1 = r8.b
            java.lang.Integer r1 = (java.lang.Integer) r1
            int r1 = r1.intValue()
            com.tkay.expressad.exoplayer.h.aa r7 = r7.a(r1, r0)
            r6.q = r7
            int r7 = r8.a
            T r0 = r8.b
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            int r1 = java.lang.Math.min(r7, r0)
            int r2 = java.lang.Math.max(r7, r0)
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r3 = r6.i
            java.lang.Object r3 = r3.get(r1)
            com.tkay.expressad.exoplayer.h.i$e r3 = (com.tkay.expressad.exoplayer.h.i.e) r3
            int r3 = r3.e
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r4 = r6.i
            java.lang.Object r4 = r4.get(r1)
            com.tkay.expressad.exoplayer.h.i$e r4 = (com.tkay.expressad.exoplayer.h.i.e) r4
            int r4 = r4.f
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r5 = r6.i
            java.lang.Object r7 = r5.remove(r7)
            com.tkay.expressad.exoplayer.h.i$e r7 = (com.tkay.expressad.exoplayer.h.i.e) r7
            r5.add(r0, r7)
        L88:
            if (r1 > r2) goto La7
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r7 = r6.i
            java.lang.Object r7 = r7.get(r1)
            com.tkay.expressad.exoplayer.h.i$e r7 = (com.tkay.expressad.exoplayer.h.i.e) r7
            r7.e = r3
            r7.f = r4
            com.tkay.expressad.exoplayer.h.i$b r0 = r7.c
            int r0 = r0.b()
            int r3 = r3 + r0
            com.tkay.expressad.exoplayer.h.i$b r7 = r7.c
            int r7 = r7.c()
            int r4 = r4 + r7
            int r1 = r1 + 1
            goto L88
        La7:
            com.tkay.expressad.exoplayer.h.i$d r7 = r8.c
            r6.a(r7)
            return
        Lad:
            com.tkay.expressad.exoplayer.h.i$f r8 = (com.tkay.expressad.exoplayer.h.i.f) r8
            com.tkay.expressad.exoplayer.h.aa r7 = r6.q
            int r0 = r8.a
            com.tkay.expressad.exoplayer.h.aa r7 = r7.c(r0)
            r6.q = r7
            int r7 = r8.a
            r6.c(r7)
            com.tkay.expressad.exoplayer.h.i$d r7 = r8.c
            r6.a(r7)
            return
        Lc4:
            com.tkay.expressad.exoplayer.h.i$f r8 = (com.tkay.expressad.exoplayer.h.i.f) r8
            com.tkay.expressad.exoplayer.h.aa r7 = r6.q
            int r0 = r8.a
            T r1 = r8.b
            java.util.Collection r1 = (java.util.Collection) r1
            int r1 = r1.size()
            com.tkay.expressad.exoplayer.h.aa r7 = r7.a(r0, r1)
            r6.q = r7
            int r7 = r8.a
            T r0 = r8.b
            java.util.Collection r0 = (java.util.Collection) r0
            r6.b(r7, r0)
            com.tkay.expressad.exoplayer.h.i$d r7 = r8.c
            r6.a(r7)
            return
        Le7:
            com.tkay.expressad.exoplayer.h.i$f r8 = (com.tkay.expressad.exoplayer.h.i.f) r8
            com.tkay.expressad.exoplayer.h.aa r7 = r6.q
            int r1 = r8.a
            com.tkay.expressad.exoplayer.h.aa r7 = r7.a(r1, r0)
            r6.q = r7
            int r7 = r8.a
            T r0 = r8.b
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            r6.a(r7, r0)
            com.tkay.expressad.exoplayer.h.i$d r7 = r8.c
            r6.a(r7)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r3) {
            r2 = this;
            java.util.Map<com.tkay.expressad.exoplayer.h.r, com.tkay.expressad.exoplayer.h.i$e> r0 = r2.k
            java.lang.Object r0 = r0.remove(r3)
            com.tkay.expressad.exoplayer.h.i$e r0 = (com.tkay.expressad.exoplayer.h.i.e) r0
            r1 = r3
            com.tkay.expressad.exoplayer.h.l r1 = (com.tkay.expressad.exoplayer.h.l) r1
            r1.g()
            java.util.List<com.tkay.expressad.exoplayer.h.l> r1 = r0.i
            r1.remove(r3)
            java.util.List<com.tkay.expressad.exoplayer.h.l> r3 = r0.i
            boolean r3 = r3.isEmpty()
            if (r3 == 0) goto L22
            boolean r3 = r0.h
            if (r3 == 0) goto L22
            r2.a(r0)
        L22:
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r2, boolean r3) {
            r1 = this;
            super.a(r2, r3)
            r1.o = r2
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r2 = r1.h
            boolean r2 = r2.isEmpty()
            if (r2 == 0) goto L11
            r1.e()
            return
        L11:
            com.tkay.expressad.exoplayer.h.aa r2 = r1.q
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r3 = r1.h
            int r3 = r3.size()
            r0 = 0
            com.tkay.expressad.exoplayer.h.aa r2 = r2.a(r0, r3)
            r1.q = r2
            java.util.List<com.tkay.expressad.exoplayer.h.i$e> r2 = r1.h
            r1.b(r0, r2)
            r2 = 0
            r1.a(r2)
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.h.i.e r6, com.tkay.expressad.exoplayer.h.s r7, com.tkay.expressad.exoplayer.ae r8, java.lang.Object r9) {
            r5 = this;
            com.tkay.expressad.exoplayer.h.i$e r6 = (com.tkay.expressad.exoplayer.h.i.e) r6
            if (r6 == 0) goto L68
            com.tkay.expressad.exoplayer.h.i$b r7 = r6.c
            com.tkay.expressad.exoplayer.ae r9 = r7.d()
            if (r9 == r8) goto L67
            int r9 = r8.b()
            int r0 = r7.b()
            int r9 = r9 - r0
            int r0 = r8.c()
            int r1 = r7.c()
            int r0 = r0 - r1
            r1 = 1
            r2 = 0
            if (r9 != 0) goto L24
            if (r0 == 0) goto L2a
        L24:
            int r3 = r6.d
            int r3 = r3 + r1
            r5.a(r3, r2, r9, r0)
        L2a:
            com.tkay.expressad.exoplayer.h.i$b r7 = r7.a(r8)
            r6.c = r7
            boolean r7 = r6.g
            if (r7 != 0) goto L63
            boolean r7 = r8.a()
            if (r7 != 0) goto L63
            com.tkay.expressad.exoplayer.ae$b r7 = r5.n
            r8.a(r2, r7, r2)
            com.tkay.expressad.exoplayer.ae$b r7 = r5.n
            long r7 = r7.j
            com.tkay.expressad.exoplayer.ae$b r9 = r5.n
            long r3 = r9.h
            long r7 = r7 + r3
        L48:
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r6.i
            int r9 = r9.size()
            if (r2 >= r9) goto L61
            java.util.List<com.tkay.expressad.exoplayer.h.l> r9 = r6.i
            java.lang.Object r9 = r9.get(r2)
            com.tkay.expressad.exoplayer.h.l r9 = (com.tkay.expressad.exoplayer.h.l) r9
            r9.d(r7)
            r9.f()
            int r2 = r2 + 1
            goto L48
        L61:
            r6.g = r1
        L63:
            r6 = 0
            r5.a(r6)
        L67:
            return
        L68:
            java.lang.IllegalArgumentException r6 = new java.lang.IllegalArgumentException
            r6.<init>()
            throw r6
    }
}
