package com.tkay.expressad.exoplayer.h.a;

public final class c extends com.tkay.expressad.exoplayer.h.f<com.tkay.expressad.exoplayer.h.s.a> {
    private static final java.lang.String a = "AdsMediaSource";
    private final com.tkay.expressad.exoplayer.h.s b;
    private final com.tkay.expressad.exoplayer.h.a.c.e c;
    private final com.tkay.expressad.exoplayer.h.a.b d;
    private final android.view.ViewGroup e;
    private final android.os.Handler f;
    private final com.tkay.expressad.exoplayer.h.a.c.d g;
    private final android.os.Handler h;
    private final java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> i;
    private final com.tkay.expressad.exoplayer.ae.a j;
    private com.tkay.expressad.exoplayer.h.a.c.c k;
    private com.tkay.expressad.exoplayer.ae l;
    private java.lang.Object m;
    private com.tkay.expressad.exoplayer.h.a.a n;
    private com.tkay.expressad.exoplayer.h.s[][] o;
    private long[][] p;



    public static final class a extends java.io.IOException {
        public static final int a = 0;
        public static final int b = 1;
        public static final int c = 2;
        public static final int d = 3;
        public final int e;

        @java.lang.annotation.Retention(java.lang.annotation.RetentionPolicy.SOURCE)
        public @interface a {
        }

        private a(int r1, java.lang.Exception r2) {
                r0 = this;
                r0.<init>(r2)
                r0.e = r1
                return
        }

        public static com.tkay.expressad.exoplayer.h.a.c.a a(java.lang.Exception r2) {
                com.tkay.expressad.exoplayer.h.a.c$a r0 = new com.tkay.expressad.exoplayer.h.a.c$a
                r1 = 0
                r0.<init>(r1, r2)
                return r0
        }

        private static com.tkay.expressad.exoplayer.h.a.c.a a(java.lang.Exception r3, int r4) {
                com.tkay.expressad.exoplayer.h.a.c$a r0 = new com.tkay.expressad.exoplayer.h.a.c$a
                java.io.IOException r1 = new java.io.IOException
                java.lang.String r4 = java.lang.String.valueOf(r4)
                java.lang.String r2 = "Failed to load ad group "
                java.lang.String r4 = r2.concat(r4)
                r1.<init>(r4, r3)
                r3 = 1
                r0.<init>(r3, r1)
                return r0
        }

        private static com.tkay.expressad.exoplayer.h.a.c.a a(java.lang.RuntimeException r2) {
                com.tkay.expressad.exoplayer.h.a.c$a r0 = new com.tkay.expressad.exoplayer.h.a.c$a
                r1 = 3
                r0.<init>(r1, r2)
                return r0
        }

        private java.lang.RuntimeException a() {
                r2 = this;
                int r0 = r2.e
                r1 = 3
                if (r0 != r1) goto L7
                r0 = 1
                goto L8
            L7:
                r0 = 0
            L8:
                com.tkay.expressad.exoplayer.k.a.b(r0)
                java.lang.Throwable r0 = r2.getCause()
                java.lang.RuntimeException r0 = (java.lang.RuntimeException) r0
                return r0
        }

        private static com.tkay.expressad.exoplayer.h.a.c.a b(java.lang.Exception r2) {
                com.tkay.expressad.exoplayer.h.a.c$a r0 = new com.tkay.expressad.exoplayer.h.a.c$a
                r1 = 2
                r0.<init>(r1, r2)
                return r0
        }
    }

    private final class b implements com.tkay.expressad.exoplayer.h.l.a {
        final com.tkay.expressad.exoplayer.h.a.c a;
        private final android.net.Uri b;
        private final int c;
        private final int d;


        public b(com.tkay.expressad.exoplayer.h.a.c r1, android.net.Uri r2, int r3, int r4) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r0.b = r2
                r0.c = r3
                r0.d = r4
                return
        }

        static int a(com.tkay.expressad.exoplayer.h.a.c.b r0) {
                int r0 = r0.c
                return r0
        }

        static int b(com.tkay.expressad.exoplayer.h.a.c.b r0) {
                int r0 = r0.d
                return r0
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.h.s.a r3, java.io.IOException r4) {
                r2 = this;
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                com.tkay.expressad.exoplayer.h.t$a r3 = com.tkay.expressad.exoplayer.h.a.c.b(r0, r3)
                com.tkay.expressad.exoplayer.j.k r0 = new com.tkay.expressad.exoplayer.j.k
                android.net.Uri r1 = r2.b
                r0.<init>(r1)
                com.tkay.expressad.exoplayer.h.a.c$a r1 = com.tkay.expressad.exoplayer.h.a.c.a.a(r4)
                r3.a(r0, r1)
                com.tkay.expressad.exoplayer.h.a.c r3 = r2.a
                android.os.Handler r3 = com.tkay.expressad.exoplayer.h.a.c.e(r3)
                com.tkay.expressad.exoplayer.h.a.c$b$1 r0 = new com.tkay.expressad.exoplayer.h.a.c$b$1
                r0.<init>(r2, r4)
                r3.post(r0)
                return
        }
    }

    private final class c implements com.tkay.expressad.exoplayer.h.a.b.a {
        final com.tkay.expressad.exoplayer.h.a.c a;
        private final android.os.Handler b;
        private volatile boolean c;





        public c(com.tkay.expressad.exoplayer.h.a.c r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                android.os.Handler r1 = new android.os.Handler
                r1.<init>()
                r0.b = r1
                return
        }

        static boolean a(com.tkay.expressad.exoplayer.h.a.c.c r0) {
                boolean r0 = r0.c
                return r0
        }

        @Override
        public final void a() {
                r2 = this;
                boolean r0 = r2.c
                if (r0 == 0) goto L5
                return
            L5:
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                android.os.Handler r0 = com.tkay.expressad.exoplayer.h.a.c.c(r0)
                if (r0 == 0) goto L23
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                com.tkay.expressad.exoplayer.h.a.c$d r0 = com.tkay.expressad.exoplayer.h.a.c.d(r0)
                if (r0 == 0) goto L23
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                android.os.Handler r0 = com.tkay.expressad.exoplayer.h.a.c.c(r0)
                com.tkay.expressad.exoplayer.h.a.c$c$2 r1 = new com.tkay.expressad.exoplayer.h.a.c$c$2
                r1.<init>(r2)
                r0.post(r1)
            L23:
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.h.a.a r3) {
                r2 = this;
                boolean r0 = r2.c
                if (r0 == 0) goto L5
                return
            L5:
                android.os.Handler r0 = r2.b
                com.tkay.expressad.exoplayer.h.a.c$c$1 r1 = new com.tkay.expressad.exoplayer.h.a.c$c$1
                r1.<init>(r2, r3)
                r0.post(r1)
                return
        }

        @Override
        public final void a(com.tkay.expressad.exoplayer.h.a.c.a r3, com.tkay.expressad.exoplayer.j.k r4) {
                r2 = this;
                boolean r0 = r2.c
                if (r0 == 0) goto L5
                return
            L5:
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                r1 = 0
                com.tkay.expressad.exoplayer.h.t$a r0 = com.tkay.expressad.exoplayer.h.a.c.a(r0, r1)
                r0.a(r4, r3)
                com.tkay.expressad.exoplayer.h.a.c r4 = r2.a
                android.os.Handler r4 = com.tkay.expressad.exoplayer.h.a.c.c(r4)
                if (r4 == 0) goto L2d
                com.tkay.expressad.exoplayer.h.a.c r4 = r2.a
                com.tkay.expressad.exoplayer.h.a.c$d r4 = com.tkay.expressad.exoplayer.h.a.c.d(r4)
                if (r4 == 0) goto L2d
                com.tkay.expressad.exoplayer.h.a.c r4 = r2.a
                android.os.Handler r4 = com.tkay.expressad.exoplayer.h.a.c.c(r4)
                com.tkay.expressad.exoplayer.h.a.c$c$4 r0 = new com.tkay.expressad.exoplayer.h.a.c$c$4
                r0.<init>(r2, r3)
                r4.post(r0)
            L2d:
                return
        }

        @Override
        public final void b() {
                r2 = this;
                boolean r0 = r2.c
                if (r0 == 0) goto L5
                return
            L5:
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                android.os.Handler r0 = com.tkay.expressad.exoplayer.h.a.c.c(r0)
                if (r0 == 0) goto L23
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                com.tkay.expressad.exoplayer.h.a.c$d r0 = com.tkay.expressad.exoplayer.h.a.c.d(r0)
                if (r0 == 0) goto L23
                com.tkay.expressad.exoplayer.h.a.c r0 = r2.a
                android.os.Handler r0 = com.tkay.expressad.exoplayer.h.a.c.c(r0)
                com.tkay.expressad.exoplayer.h.a.c$c$3 r1 = new com.tkay.expressad.exoplayer.h.a.c$c$3
                r1.<init>(r2)
                r0.post(r1)
            L23:
                return
        }

        public final void c() {
                r2 = this;
                r0 = 1
                r2.c = r0
                android.os.Handler r0 = r2.b
                r1 = 0
                r0.removeCallbacksAndMessages(r1)
                return
        }
    }

    @java.lang.Deprecated
    public interface d {
        void a();

        void b();

        void c();

        void d();
    }

    public interface e {
        int[] a();

        com.tkay.expressad.exoplayer.h.s b(android.net.Uri r1);
    }

    private c(com.tkay.expressad.exoplayer.h.s r8, com.tkay.expressad.exoplayer.h.a.c.e r9, com.tkay.expressad.exoplayer.h.a.b r10, android.view.ViewGroup r11) {
            r7 = this;
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r2 = r9
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    @java.lang.Deprecated
    private c(com.tkay.expressad.exoplayer.h.s r1, com.tkay.expressad.exoplayer.h.a.c.e r2, com.tkay.expressad.exoplayer.h.a.b r3, android.view.ViewGroup r4, android.os.Handler r5, com.tkay.expressad.exoplayer.h.a.c.d r6) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.c = r2
            r0.d = r3
            r0.e = r4
            r0.f = r5
            r0.g = r6
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r0.h = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            r0.i = r1
            com.tkay.expressad.exoplayer.ae$a r1 = new com.tkay.expressad.exoplayer.ae$a
            r1.<init>()
            r0.j = r1
            r1 = 0
            com.tkay.expressad.exoplayer.h.s[][] r2 = new com.tkay.expressad.exoplayer.h.s[r1][]
            r0.o = r2
            long[][] r1 = new long[r1][]
            r0.p = r1
            return
    }

    private c(com.tkay.expressad.exoplayer.h.s r8, com.tkay.expressad.exoplayer.j.h.a r9, com.tkay.expressad.exoplayer.h.a.b r10, android.view.ViewGroup r11) {
            r7 = this;
            com.tkay.expressad.exoplayer.h.o$c r2 = new com.tkay.expressad.exoplayer.h.o$c
            r2.<init>(r9)
            r5 = 0
            r6 = 0
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    @java.lang.Deprecated
    private c(com.tkay.expressad.exoplayer.h.s r8, com.tkay.expressad.exoplayer.j.h.a r9, com.tkay.expressad.exoplayer.h.a.b r10, android.view.ViewGroup r11, android.os.Handler r12, com.tkay.expressad.exoplayer.h.a.c.d r13) {
            r7 = this;
            com.tkay.expressad.exoplayer.h.o$c r2 = new com.tkay.expressad.exoplayer.h.o$c
            r2.<init>(r9)
            r0 = r7
            r1 = r8
            r3 = r10
            r4 = r11
            r5 = r12
            r6 = r13
            r0.<init>(r1, r2, r3, r4, r5, r6)
            return
    }

    static android.view.ViewGroup a(com.tkay.expressad.exoplayer.h.a.c r0) {
            android.view.ViewGroup r0 = r0.e
            return r0
    }

    private static com.tkay.expressad.exoplayer.h.s.a a(com.tkay.expressad.exoplayer.h.s.a r1, com.tkay.expressad.exoplayer.h.s.a r2) {
            boolean r0 = r1.a()
            if (r0 == 0) goto L7
            return r1
        L7:
            return r2
    }

    static com.tkay.expressad.exoplayer.h.t.a a(com.tkay.expressad.exoplayer.h.a.c r0, com.tkay.expressad.exoplayer.h.s.a r1) {
            com.tkay.expressad.exoplayer.h.t$a r0 = r0.a(r1)
            return r0
    }

    private void a(com.tkay.expressad.exoplayer.h.a.a r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.a.a r0 = r3.n
            if (r0 != 0) goto L1b
            int r0 = r4.g
            com.tkay.expressad.exoplayer.h.s[][] r0 = new com.tkay.expressad.exoplayer.h.s[r0][]
            r3.o = r0
            r1 = 0
            com.tkay.expressad.exoplayer.h.s[] r2 = new com.tkay.expressad.exoplayer.h.s[r1]
            java.util.Arrays.fill(r0, r2)
            int r0 = r4.g
            long[][] r0 = new long[r0][]
            r3.p = r0
            long[] r1 = new long[r1]
            java.util.Arrays.fill(r0, r1)
        L1b:
            r3.n = r4
            r3.c()
            return
    }

    static void a(com.tkay.expressad.exoplayer.h.a.c r3, com.tkay.expressad.exoplayer.h.a.a r4) {
            com.tkay.expressad.exoplayer.h.a.a r0 = r3.n
            if (r0 != 0) goto L1b
            int r0 = r4.g
            com.tkay.expressad.exoplayer.h.s[][] r0 = new com.tkay.expressad.exoplayer.h.s[r0][]
            r3.o = r0
            r1 = 0
            com.tkay.expressad.exoplayer.h.s[] r2 = new com.tkay.expressad.exoplayer.h.s[r1]
            java.util.Arrays.fill(r0, r2)
            int r0 = r4.g
            long[][] r0 = new long[r0][]
            r3.p = r0
            long[] r1 = new long[r1]
            java.util.Arrays.fill(r0, r1)
        L1b:
            r3.n = r4
            r3.c()
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.s.a r4, com.tkay.expressad.exoplayer.h.s r5, com.tkay.expressad.exoplayer.ae r6, java.lang.Object r7) {
            r3 = this;
            boolean r0 = r4.a()
            if (r0 == 0) goto L50
            int r7 = r4.b
            int r4 = r4.c
            int r0 = r6.c()
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L13
            goto L14
        L13:
            r1 = r2
        L14:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            long[][] r0 = r3.p
            r7 = r0[r7]
            com.tkay.expressad.exoplayer.ae$a r0 = r3.j
            com.tkay.expressad.exoplayer.ae$a r6 = r6.a(r2, r0, r2)
            long r0 = r6.d
            r7[r4] = r0
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            boolean r4 = r4.containsKey(r5)
            if (r4 == 0) goto L4c
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            java.lang.Object r4 = r4.get(r5)
            java.util.List r4 = (java.util.List) r4
        L35:
            int r6 = r4.size()
            if (r2 >= r6) goto L47
            java.lang.Object r6 = r4.get(r2)
            com.tkay.expressad.exoplayer.h.l r6 = (com.tkay.expressad.exoplayer.h.l) r6
            r6.f()
            int r2 = r2 + 1
            goto L35
        L47:
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            r4.remove(r5)
        L4c:
            r3.c()
            return
        L50:
            r3.l = r6
            r3.m = r7
            r3.c()
            return
    }

    private void a(com.tkay.expressad.exoplayer.h.s r4, int r5, int r6, com.tkay.expressad.exoplayer.ae r7) {
            r3 = this;
            int r0 = r7.c()
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L9
            goto La
        L9:
            r1 = r2
        La:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            long[][] r0 = r3.p
            r5 = r0[r5]
            com.tkay.expressad.exoplayer.ae$a r0 = r3.j
            com.tkay.expressad.exoplayer.ae$a r7 = r7.a(r2, r0, r2)
            long r0 = r7.d
            r5[r6] = r0
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r5 = r3.i
            boolean r5 = r5.containsKey(r4)
            if (r5 == 0) goto L42
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r5 = r3.i
            java.lang.Object r5 = r5.get(r4)
            java.util.List r5 = (java.util.List) r5
        L2b:
            int r6 = r5.size()
            if (r2 >= r6) goto L3d
            java.lang.Object r6 = r5.get(r2)
            com.tkay.expressad.exoplayer.h.l r6 = (com.tkay.expressad.exoplayer.h.l) r6
            r6.f()
            int r2 = r2 + 1
            goto L2b
        L3d:
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r5 = r3.i
            r5.remove(r4)
        L42:
            r3.c()
            return
    }

    static com.tkay.expressad.exoplayer.h.a.b b(com.tkay.expressad.exoplayer.h.a.c r0) {
            com.tkay.expressad.exoplayer.h.a.b r0 = r0.d
            return r0
    }

    static com.tkay.expressad.exoplayer.h.t.a b(com.tkay.expressad.exoplayer.h.a.c r0, com.tkay.expressad.exoplayer.h.s.a r1) {
            com.tkay.expressad.exoplayer.h.t$a r0 = r0.a(r1)
            return r0
    }

    private void b(com.tkay.expressad.exoplayer.ae r1, java.lang.Object r2) {
            r0 = this;
            r0.l = r1
            r0.m = r2
            r0.c()
            return
    }

    static android.os.Handler c(com.tkay.expressad.exoplayer.h.a.c r0) {
            android.os.Handler r0 = r0.f
            return r0
    }

    private void c() {
            r3 = this;
            com.tkay.expressad.exoplayer.h.a.a r0 = r3.n
            if (r0 == 0) goto L25
            com.tkay.expressad.exoplayer.ae r1 = r3.l
            if (r1 == 0) goto L25
            long[][] r1 = r3.p
            com.tkay.expressad.exoplayer.h.a.a r0 = r0.a(r1)
            r3.n = r0
            int r0 = r0.g
            if (r0 != 0) goto L17
            com.tkay.expressad.exoplayer.ae r0 = r3.l
            goto L20
        L17:
            com.tkay.expressad.exoplayer.h.a.d r0 = new com.tkay.expressad.exoplayer.h.a.d
            com.tkay.expressad.exoplayer.ae r1 = r3.l
            com.tkay.expressad.exoplayer.h.a.a r2 = r3.n
            r0.<init>(r1, r2)
        L20:
            java.lang.Object r1 = r3.m
            r3.a(r0, r1)
        L25:
            return
    }

    static com.tkay.expressad.exoplayer.h.a.c.d d(com.tkay.expressad.exoplayer.h.a.c r0) {
            com.tkay.expressad.exoplayer.h.a.c$d r0 = r0.g
            return r0
    }

    static android.os.Handler e(com.tkay.expressad.exoplayer.h.a.c r0) {
            android.os.Handler r0 = r0.h
            return r0
    }

    @Override
    public final com.tkay.expressad.exoplayer.h.r a(com.tkay.expressad.exoplayer.h.s.a r10, com.tkay.expressad.exoplayer.j.b r11) {
            r9 = this;
            com.tkay.expressad.exoplayer.h.a.a r0 = r9.n
            int r0 = r0.g
            if (r0 <= 0) goto L90
            boolean r0 = r10.a()
            if (r0 == 0) goto L90
            int r0 = r10.b
            int r1 = r10.c
            com.tkay.expressad.exoplayer.h.a.a r2 = r9.n
            com.tkay.expressad.exoplayer.h.a.a$a[] r2 = r2.i
            r2 = r2[r0]
            android.net.Uri[] r2 = r2.b
            r2 = r2[r1]
            com.tkay.expressad.exoplayer.h.s[][] r3 = r9.o
            r3 = r3[r0]
            int r3 = r3.length
            if (r3 > r1) goto L63
            com.tkay.expressad.exoplayer.h.a.c$e r3 = r9.c
            com.tkay.expressad.exoplayer.h.s r3 = r3.b(r2)
            com.tkay.expressad.exoplayer.h.s[][] r4 = r9.o
            r5 = r4[r0]
            int r5 = r5.length
            if (r1 < r5) goto L50
            int r6 = r1 + 1
            r7 = r4[r0]
            java.lang.Object[] r7 = java.util.Arrays.copyOf(r7, r6)
            com.tkay.expressad.exoplayer.h.s[] r7 = (com.tkay.expressad.exoplayer.h.s[]) r7
            r4[r0] = r7
            long[][] r4 = r9.p
            r7 = r4[r0]
            long[] r7 = java.util.Arrays.copyOf(r7, r6)
            r4[r0] = r7
            long[][] r4 = r9.p
            r4 = r4[r0]
            r7 = -9223372036854775807(0x8000000000000001, double:-4.9E-324)
            java.util.Arrays.fill(r4, r5, r6, r7)
        L50:
            com.tkay.expressad.exoplayer.h.s[][] r4 = r9.o
            r4 = r4[r0]
            r4[r1] = r3
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r9.i
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            r4.put(r3, r5)
            r9.a(r10, r3)
        L63:
            com.tkay.expressad.exoplayer.h.s[][] r3 = r9.o
            r3 = r3[r0]
            r3 = r3[r1]
            com.tkay.expressad.exoplayer.h.l r4 = new com.tkay.expressad.exoplayer.h.l
            com.tkay.expressad.exoplayer.h.s$a r5 = new com.tkay.expressad.exoplayer.h.s$a
            r6 = 0
            long r7 = r10.d
            r5.<init>(r6, r7)
            r4.<init>(r3, r5, r11)
            com.tkay.expressad.exoplayer.h.a.c$b r10 = new com.tkay.expressad.exoplayer.h.a.c$b
            r10.<init>(r9, r2, r0, r1)
            r4.a(r10)
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r10 = r9.i
            java.lang.Object r10 = r10.get(r3)
            java.util.List r10 = (java.util.List) r10
            if (r10 != 0) goto L8c
            r4.f()
            goto L8f
        L8c:
            r10.add(r4)
        L8f:
            return r4
        L90:
            com.tkay.expressad.exoplayer.h.l r0 = new com.tkay.expressad.exoplayer.h.l
            com.tkay.expressad.exoplayer.h.s r1 = r9.b
            r0.<init>(r1, r10, r11)
            r0.f()
            return r0
    }

    @Override
    protected final com.tkay.expressad.exoplayer.h.s.a a(com.tkay.expressad.exoplayer.h.s.a r2, com.tkay.expressad.exoplayer.h.s.a r3) {
            r1 = this;
            com.tkay.expressad.exoplayer.h.s$a r2 = (com.tkay.expressad.exoplayer.h.s.a) r2
            boolean r0 = r2.a()
            if (r0 == 0) goto L9
            return r2
        L9:
            return r3
    }

    @Override
    public final void a() {
            r2 = this;
            super.a()
            com.tkay.expressad.exoplayer.h.a.c$c r0 = r2.k
            r0.c()
            r0 = 0
            r2.k = r0
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r1 = r2.i
            r1.clear()
            r2.l = r0
            r2.m = r0
            r2.n = r0
            r0 = 0
            com.tkay.expressad.exoplayer.h.s[][] r1 = new com.tkay.expressad.exoplayer.h.s[r0][]
            r2.o = r1
            long[][] r0 = new long[r0][]
            r2.p = r0
            android.os.Handler r0 = r2.h
            com.tkay.expressad.exoplayer.h.a.c$2 r1 = new com.tkay.expressad.exoplayer.h.a.c$2
            r1.<init>(r2)
            r0.post(r1)
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h.r r3) {
            r2 = this;
            com.tkay.expressad.exoplayer.h.l r3 = (com.tkay.expressad.exoplayer.h.l) r3
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r0 = r2.i
            com.tkay.expressad.exoplayer.h.s r1 = r3.a
            java.lang.Object r0 = r0.get(r1)
            java.util.List r0 = (java.util.List) r0
            if (r0 == 0) goto L11
            r0.remove(r3)
        L11:
            r3.g()
            return
    }

    @Override
    public final void a(com.tkay.expressad.exoplayer.h r3, boolean r4) {
            r2 = this;
            super.a(r3, r4)
            com.tkay.expressad.exoplayer.k.a.a(r4)
            com.tkay.expressad.exoplayer.h.a.c$c r4 = new com.tkay.expressad.exoplayer.h.a.c$c
            r4.<init>(r2)
            r2.k = r4
            com.tkay.expressad.exoplayer.h.s$a r0 = new com.tkay.expressad.exoplayer.h.s$a
            r1 = 0
            r0.<init>(r1)
            com.tkay.expressad.exoplayer.h.s r1 = r2.b
            r2.a(r0, r1)
            android.os.Handler r0 = r2.h
            com.tkay.expressad.exoplayer.h.a.c$1 r1 = new com.tkay.expressad.exoplayer.h.a.c$1
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    @Override
    protected final void a(com.tkay.expressad.exoplayer.h.s.a r4, com.tkay.expressad.exoplayer.h.s r5, com.tkay.expressad.exoplayer.ae r6, java.lang.Object r7) {
            r3 = this;
            com.tkay.expressad.exoplayer.h.s$a r4 = (com.tkay.expressad.exoplayer.h.s.a) r4
            boolean r0 = r4.a()
            if (r0 == 0) goto L52
            int r7 = r4.b
            int r4 = r4.c
            int r0 = r6.c()
            r1 = 1
            r2 = 0
            if (r0 != r1) goto L15
            goto L16
        L15:
            r1 = r2
        L16:
            com.tkay.expressad.exoplayer.k.a.a(r1)
            long[][] r0 = r3.p
            r7 = r0[r7]
            com.tkay.expressad.exoplayer.ae$a r0 = r3.j
            com.tkay.expressad.exoplayer.ae$a r6 = r6.a(r2, r0, r2)
            long r0 = r6.d
            r7[r4] = r0
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            boolean r4 = r4.containsKey(r5)
            if (r4 == 0) goto L4e
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            java.lang.Object r4 = r4.get(r5)
            java.util.List r4 = (java.util.List) r4
        L37:
            int r6 = r4.size()
            if (r2 >= r6) goto L49
            java.lang.Object r6 = r4.get(r2)
            com.tkay.expressad.exoplayer.h.l r6 = (com.tkay.expressad.exoplayer.h.l) r6
            r6.f()
            int r2 = r2 + 1
            goto L37
        L49:
            java.util.Map<com.tkay.expressad.exoplayer.h.s, java.util.List<com.tkay.expressad.exoplayer.h.l>> r4 = r3.i
            r4.remove(r5)
        L4e:
            r3.c()
            return
        L52:
            r3.l = r6
            r3.m = r7
            r3.c()
            return
    }
}
