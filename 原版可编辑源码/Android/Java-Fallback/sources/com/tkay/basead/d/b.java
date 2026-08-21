package com.tkay.basead.d;

public abstract class b {
    private com.tkay.basead.d.b.a a;
    protected android.content.Context b;
    protected com.tkay.core.common.f.i c;
    protected com.tkay.basead.d.c d;
    protected com.tkay.core.common.f.z e;
    protected com.tkay.core.common.a.g f;
    protected com.tkay.basead.a.c g;
    protected com.tkay.basead.e.a h;
    protected java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> i;
    protected java.lang.String j;
    private boolean k;

    final class 1 implements com.tkay.basead.d.a.a.a {
        final com.tkay.basead.e.c a;
        final com.tkay.basead.d.b b;


        1(com.tkay.basead.d.b r1, com.tkay.basead.e.c r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.f r2) {
                r1 = this;
                com.tkay.basead.d.b r0 = r1.b
                r0.a(r2)
                com.tkay.basead.e.c r2 = r1.a
                if (r2 == 0) goto Lc
                r2.onAdDataLoaded()
            Lc:
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.f r4, com.tkay.basead.c.e r5) {
                r3 = this;
                com.tkay.basead.d.b r0 = r3.b
                com.tkay.basead.e.c r1 = r3.a
                r2 = 1
                com.tkay.basead.d.b.a(r0, r4, r5, r1, r2)
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.f r5, com.tkay.core.common.a.g r6) {
                r4 = this;
                com.tkay.basead.d.b r0 = r4.b
                r0.e = r5
                com.tkay.basead.d.b r0 = r4.b
                r0.f = r6
                com.tkay.basead.d.b r6 = r4.b
                com.tkay.basead.a.c r0 = new com.tkay.basead.a.c
                android.content.Context r1 = r6.b
                com.tkay.basead.d.b r2 = r4.b
                com.tkay.core.common.f.i r2 = r2.c
                com.tkay.basead.d.b r3 = r4.b
                com.tkay.core.common.f.z r3 = r3.e
                r0.<init>(r1, r2, r3)
                r6.g = r0
                com.tkay.basead.d.b r6 = r4.b
                com.tkay.basead.a.c r6 = r6.g
                com.tkay.basead.d.b$1$1 r0 = new com.tkay.basead.d.b$1$1
                r0.<init>(r4)
                r6.a(r0)
                com.tkay.basead.c.i r6 = new com.tkay.basead.c.i
                com.tkay.basead.d.b r0 = r4.b
                com.tkay.core.common.f.i r0 = r0.c
                java.lang.String r0 = r0.d
                java.lang.String r1 = ""
                r6.<init>(r0, r1)
                r0 = 33
                com.tkay.basead.a.b.a(r0, r5, r6)
                com.tkay.basead.d.b r5 = r4.b
                com.tkay.basead.d.b.a(r5)
                com.tkay.basead.e.c r5 = r4.a
                if (r5 == 0) goto L45
                r5.onAdCacheLoaded()
            L45:
                return
        }
    }

    final class 2 implements com.tkay.basead.d.b.a.a {
        final com.tkay.basead.e.c a;
        final com.tkay.basead.d.b b;

        2(com.tkay.basead.d.b r1, com.tkay.basead.e.c r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public final void a() {
                r1 = this;
                com.tkay.basead.e.c r0 = r1.a
                if (r0 == 0) goto L7
                r0.onAdDataLoaded()
            L7:
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.y r3) {
                r2 = this;
                com.tkay.basead.d.b r0 = r2.b
                r0.e = r3
                com.tkay.basead.c.i r3 = new com.tkay.basead.c.i
                com.tkay.basead.d.b r0 = r2.b
                com.tkay.core.common.f.i r0 = r0.c
                java.lang.String r0 = r0.d
                java.lang.String r1 = ""
                r3.<init>(r0, r1)
                com.tkay.basead.d.b r0 = r2.b
                com.tkay.core.common.f.z r0 = r0.e
                r1 = 33
                com.tkay.basead.a.b.a(r1, r0, r3)
                com.tkay.basead.d.b r3 = r2.b
                com.tkay.basead.d.b.a(r3)
                com.tkay.basead.e.c r3 = r2.a
                if (r3 == 0) goto L26
                r3.onAdCacheLoaded()
            L26:
                return
        }

        @Override
        public final void a(com.tkay.core.common.f.y r4, com.tkay.basead.c.e r5) {
                r3 = this;
                com.tkay.basead.d.b r0 = r3.b
                com.tkay.basead.e.c r1 = r3.a
                r2 = 0
                com.tkay.basead.d.b.a(r0, r4, r5, r1, r2)
                return
        }
    }


    static class 4 {
        static final int[] a = null;

        static {
                com.tkay.basead.d.b$a[] r0 = com.tkay.basead.d.b.a.values()
                int r0 = r0.length
                int[] r0 = new int[r0]
                com.tkay.basead.d.b.4.a = r0
                com.tkay.basead.d.b$a r1 = com.tkay.basead.d.b.a.a     // Catch: java.lang.NoSuchFieldError -> L12
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L12
                r2 = 1
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L12
            L12:
                int[] r0 = com.tkay.basead.d.b.4.a     // Catch: java.lang.NoSuchFieldError -> L1d
                com.tkay.basead.d.b$a r1 = com.tkay.basead.d.b.a.b     // Catch: java.lang.NoSuchFieldError -> L1d
                int r1 = r1.ordinal()     // Catch: java.lang.NoSuchFieldError -> L1d
                r2 = 2
                r0[r1] = r2     // Catch: java.lang.NoSuchFieldError -> L1d
            L1d:
                return
        }
    }

    public enum a extends java.lang.Enum<com.tkay.basead.d.b.a> {
        public static final com.tkay.basead.d.b.a a = null;
        public static final com.tkay.basead.d.b.a b = null;
        private static final com.tkay.basead.d.b.a[] c = null;

        static {
                com.tkay.basead.d.b$a r0 = new com.tkay.basead.d.b$a
                r1 = 0
                java.lang.String r2 = "ADX_OFFER_REQUEST_TYPE"
                r0.<init>(r2, r1)
                com.tkay.basead.d.b.a.a = r0
                com.tkay.basead.d.b$a r0 = new com.tkay.basead.d.b$a
                r2 = 1
                java.lang.String r3 = "ONLINE_API_OFFER_REQUEST_TYPE"
                r0.<init>(r3, r2)
                com.tkay.basead.d.b.a.b = r0
                r3 = 2
                com.tkay.basead.d.b$a[] r3 = new com.tkay.basead.d.b.a[r3]
                com.tkay.basead.d.b$a r4 = com.tkay.basead.d.b.a.a
                r3[r1] = r4
                r3[r2] = r0
                com.tkay.basead.d.b.a.c = r3
                return
        }

        a(java.lang.String r1, int r2) {
                r0 = this;
                r0.<init>(r1, r2)
                return
        }

        public static com.tkay.basead.d.b.a valueOf(java.lang.String r1) {
                java.lang.Class<com.tkay.basead.d.b$a> r0 = com.tkay.basead.d.b.a.class
                java.lang.Enum r1 = java.lang.Enum.valueOf(r0, r1)
                com.tkay.basead.d.b$a r1 = (com.tkay.basead.d.b.a) r1
                return r1
        }

        public static com.tkay.basead.d.b.a[] values() {
                com.tkay.basead.d.b$a[] r0 = com.tkay.basead.d.b.a.c
                java.lang.Object r0 = r0.clone()
                com.tkay.basead.d.b$a[] r0 = (com.tkay.basead.d.b.a[]) r0
                return r0
        }
    }

    public b(android.content.Context r2, com.tkay.basead.d.b.a r3, com.tkay.core.common.f.i r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.k = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.b = r2
            r1.a = r3
            r1.c = r4
            return
    }

    static void a(com.tkay.basead.d.b r3, com.tkay.core.common.f.h r4, com.tkay.basead.c.e r5, com.tkay.basead.e.c r6, boolean r7) {
            if (r4 == 0) goto L12
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.d
            java.lang.String r2 = ""
            r0.<init>(r1, r2)
            r1 = 34
            com.tkay.basead.a.b.a(r1, r4, r0)
        L12:
            boolean r4 = r4 instanceof com.tkay.core.common.f.y
            if (r4 == 0) goto L2d
            com.tkay.core.basead.b.a()
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r4.f()
            com.tkay.core.basead.b.a()
            com.tkay.core.common.f.i r0 = r3.c
            java.lang.String r0 = com.tkay.core.basead.b.a(r0)
            com.tkay.core.basead.b.b(r4, r0)
        L2d:
            if (r7 == 0) goto L57
            com.tkay.core.b.c r4 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r7 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r7 = r7.c     // Catch: java.lang.Throwable -> L57
            r4.a(r7)     // Catch: java.lang.Throwable -> L57
            com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r4 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r4 = r4.c     // Catch: java.lang.Throwable -> L57
            com.tkay.core.b.c.b(r4)     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.a.a r4 = com.tkay.core.common.a.a.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L57
            android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r3 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r3 = r3.a     // Catch: java.lang.Throwable -> L57
            r4.b(r7, r3)     // Catch: java.lang.Throwable -> L57
        L57:
            if (r6 == 0) goto L5c
            r6.onAdLoadFailed(r5)
        L5c:
            return
    }

    private void a(com.tkay.core.common.f.h r4, com.tkay.basead.c.e r5, com.tkay.basead.e.c r6, boolean r7) {
            r3 = this;
            if (r4 == 0) goto L12
            com.tkay.basead.c.i r0 = new com.tkay.basead.c.i
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.d
            java.lang.String r2 = ""
            r0.<init>(r1, r2)
            r1 = 34
            com.tkay.basead.a.b.a(r1, r4, r0)
        L12:
            boolean r4 = r4 instanceof com.tkay.core.common.f.y
            if (r4 == 0) goto L2d
            com.tkay.core.basead.b.a()
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            android.content.Context r4 = r4.f()
            com.tkay.core.basead.b.a()
            com.tkay.core.common.f.i r0 = r3.c
            java.lang.String r0 = com.tkay.core.basead.b.a(r0)
            com.tkay.core.basead.b.b(r4, r0)
        L2d:
            if (r7 == 0) goto L57
            com.tkay.core.b.c r4 = com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r7 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r7 = r7.c     // Catch: java.lang.Throwable -> L57
            r4.a(r7)     // Catch: java.lang.Throwable -> L57
            com.tkay.core.b.c.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r4 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r4 = r4.c     // Catch: java.lang.Throwable -> L57
            com.tkay.core.b.c.b(r4)     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.a.a r4 = com.tkay.core.common.a.a.a()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.b.m r7 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L57
            android.content.Context r7 = r7.f()     // Catch: java.lang.Throwable -> L57
            com.tkay.core.common.f.i r0 = r3.c     // Catch: java.lang.Throwable -> L57
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L57
            r4.b(r7, r0)     // Catch: java.lang.Throwable -> L57
        L57:
            if (r6 == 0) goto L5c
            r6.onAdLoadFailed(r5)
        L5c:
            return
    }

    static boolean a(com.tkay.basead.d.b r1) {
            r0 = 1
            r1.k = r0
            return r0
    }

    private void b(com.tkay.basead.e.c r4) {
            r3 = this;
            com.tkay.core.common.f.i r0 = r3.c     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L2a
            com.tkay.core.common.f.i r0 = r3.c     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.b     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 != 0) goto L2a
            com.tkay.core.common.f.i r0 = r3.c     // Catch: java.lang.Throwable -> L38
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L38
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L38
            if (r0 == 0) goto L19
            goto L2a
        L19:
            android.content.Context r0 = r3.b     // Catch: java.lang.Throwable -> L38
            com.tkay.basead.d.a.a r0 = com.tkay.basead.d.a.a.a(r0)     // Catch: java.lang.Throwable -> L38
            com.tkay.core.common.f.i r1 = r3.c     // Catch: java.lang.Throwable -> L38
            com.tkay.basead.d.b$1 r2 = new com.tkay.basead.d.b$1     // Catch: java.lang.Throwable -> L38
            r2.<init>(r3, r4)     // Catch: java.lang.Throwable -> L38
            r0.a(r1, r2)     // Catch: java.lang.Throwable -> L38
            return
        L2a:
            if (r4 == 0) goto L37
            java.lang.String r0 = "30001"
            java.lang.String r1 = "bidid、placementid can not be null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)     // Catch: java.lang.Throwable -> L38
            r4.onAdLoadFailed(r0)     // Catch: java.lang.Throwable -> L38
        L37:
            return
        L38:
            r0 = move-exception
            r0.printStackTrace()
            if (r4 == 0) goto L4b
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "-9999"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)
            r4.onAdLoadFailed(r0)
        L4b:
            return
    }

    private void c(com.tkay.basead.e.c r5) {
            r4 = this;
            android.content.Context r0 = r4.b     // Catch: java.lang.Throwable -> L13
            com.tkay.basead.d.b.a r0 = com.tkay.basead.d.b.a.a(r0)     // Catch: java.lang.Throwable -> L13
            com.tkay.core.common.f.i r1 = r4.c     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r4.j     // Catch: java.lang.Throwable -> L13
            com.tkay.basead.d.b$2 r3 = new com.tkay.basead.d.b$2     // Catch: java.lang.Throwable -> L13
            r3.<init>(r4, r5)     // Catch: java.lang.Throwable -> L13
            r0.a(r1, r2, r3)     // Catch: java.lang.Throwable -> L13
            return
        L13:
            r0 = move-exception
            r0.printStackTrace()
            if (r5 == 0) goto L26
            java.lang.String r0 = r0.getMessage()
            java.lang.String r1 = "-9999"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r1, r0)
            r5.onAdLoadFailed(r0)
        L26:
            return
    }

    protected final java.lang.String a(com.tkay.core.common.f.z r4) {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.b
            r0.append(r1)
            com.tkay.core.common.f.i r1 = r3.c
            java.lang.String r1 = r1.c
            r0.append(r1)
            com.tkay.core.common.f.i r1 = r3.c
            int r1 = r1.f
            r0.append(r1)
            java.lang.String r4 = r4.p()
            r0.append(r4)
            long r1 = java.lang.System.currentTimeMillis()
            r0.append(r1)
            java.lang.String r4 = r0.toString()
            return r4
    }

    public final void a(com.tkay.basead.d.c r4) {
            r3 = this;
            r3.d = r4
            com.tkay.core.common.f.i r4 = r3.c
            com.tkay.core.common.f.j r4 = r4.m
            boolean r4 = r4 instanceof com.tkay.core.common.f.aa
            if (r4 == 0) goto L5f
            com.tkay.core.common.f.i r4 = r3.c
            com.tkay.core.common.f.j r4 = r4.m
            com.tkay.core.common.f.aa r4 = (com.tkay.core.common.f.aa) r4
            com.tkay.basead.d.c r0 = r3.d
            if (r4 == 0) goto L5f
            if (r0 != 0) goto L17
            goto L5f
        L17:
            int r1 = r0.a()
            r4.v(r1)
            int r1 = r0.b()
            r4.w(r1)
            java.lang.String r1 = r0.d()
            r4.a(r1)
            int r1 = r0.c()
            r4.p(r1)
            int r1 = r0.e()
            r4.o(r1)
            int r1 = r0.f()
            long r1 = (long) r1
            r4.b(r1)
            int r1 = r0.g()
            r4.n(r1)
            int r1 = r0.h()
            r4.a(r1)
            int r1 = r0.i()
            r4.b(r1)
            java.lang.String r0 = r0.j()
            r4.b(r0)
        L5f:
            return
    }

    public final void a(com.tkay.basead.e.a r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public final void a(com.tkay.basead.e.c r6) {
            r5 = this;
            int[] r0 = com.tkay.basead.d.b.4.a
            com.tkay.basead.d.b$a r1 = r5.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 1
            java.lang.String r2 = "-9999"
            if (r0 == r1) goto L36
            r1 = 2
            if (r0 == r1) goto L13
            goto L35
        L13:
            android.content.Context r0 = r5.b     // Catch: java.lang.Throwable -> L26
            com.tkay.basead.d.b.a r0 = com.tkay.basead.d.b.a.a(r0)     // Catch: java.lang.Throwable -> L26
            com.tkay.core.common.f.i r1 = r5.c     // Catch: java.lang.Throwable -> L26
            java.lang.String r3 = r5.j     // Catch: java.lang.Throwable -> L26
            com.tkay.basead.d.b$2 r4 = new com.tkay.basead.d.b$2     // Catch: java.lang.Throwable -> L26
            r4.<init>(r5, r6)     // Catch: java.lang.Throwable -> L26
            r0.a(r1, r3, r4)     // Catch: java.lang.Throwable -> L26
            return
        L26:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r2, r0)
            r6.onAdLoadFailed(r0)
        L35:
            return
        L36:
            com.tkay.core.common.f.i r0 = r5.c     // Catch: java.lang.Throwable -> L6c
            if (r0 == 0) goto L60
            com.tkay.core.common.f.i r0 = r5.c     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r0.b     // Catch: java.lang.Throwable -> L6c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6c
            if (r0 != 0) goto L60
            com.tkay.core.common.f.i r0 = r5.c     // Catch: java.lang.Throwable -> L6c
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L6c
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> L6c
            if (r0 == 0) goto L4f
            goto L60
        L4f:
            android.content.Context r0 = r5.b     // Catch: java.lang.Throwable -> L6c
            com.tkay.basead.d.a.a r0 = com.tkay.basead.d.a.a.a(r0)     // Catch: java.lang.Throwable -> L6c
            com.tkay.core.common.f.i r1 = r5.c     // Catch: java.lang.Throwable -> L6c
            com.tkay.basead.d.b$1 r3 = new com.tkay.basead.d.b$1     // Catch: java.lang.Throwable -> L6c
            r3.<init>(r5, r6)     // Catch: java.lang.Throwable -> L6c
            r0.a(r1, r3)     // Catch: java.lang.Throwable -> L6c
            return
        L60:
            java.lang.String r0 = "30001"
            java.lang.String r1 = "bidid、placementid can not be null!"
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r0, r1)     // Catch: java.lang.Throwable -> L6c
            r6.onAdLoadFailed(r0)     // Catch: java.lang.Throwable -> L6c
            return
        L6c:
            r0 = move-exception
            r0.printStackTrace()
            java.lang.String r0 = r0.getMessage()
            com.tkay.basead.c.e r0 = com.tkay.basead.c.f.a(r2, r0)
            r6.onAdLoadFailed(r0)
            return
    }

    protected final void a(com.tkay.core.common.f.f r4) {
            r3 = this;
            int r0 = r4.c()
            r1 = 1
            if (r0 != r1) goto L5b
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.a()
            r0.b()
            android.content.Context r0 = r3.b
            java.lang.String r1 = r4.B()
            boolean r0 = com.tkay.core.common.l.h.a(r0, r1)
            java.lang.String r1 = ",packagename:"
            if (r0 == 0) goto L3c
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "check offer installed(onAdDataLoaded):ture,dsp offerid:"
            r0.<init>(r2)
            java.lang.String r2 = r4.U()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r4.B()
            r0.append(r1)
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.a()
            r0.c(r4)
            return
        L3c:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "check offer installed(onAdDataLoaded):false,need record show,dsp offerid:"
            r0.<init>(r2)
            java.lang.String r2 = r4.U()
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = r4.B()
            r0.append(r1)
            com.tkay.core.common.a.b r0 = com.tkay.core.common.a.b.a()
            r0.a(r4)
        L5b:
            return
    }

    protected final synchronized void a(com.tkay.expressad.foundation.d.c r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            com.tkay.basead.a.c r0 = r2.g     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L7
            monitor-exit(r2)
            return
        L7:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r0 = r2.i     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L13
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L4f
            r1 = 2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L4f
            r2.i = r0     // Catch: java.lang.Throwable -> L4f
        L13:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r0 = r2.i     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = r3.aZ()     // Catch: java.lang.Throwable -> L4f
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L4f
            com.tkay.basead.a.c r0 = (com.tkay.basead.a.c) r0     // Catch: java.lang.Throwable -> L4f
            if (r0 != 0) goto L30
            com.tkay.basead.a.c r0 = r2.g     // Catch: java.lang.Throwable -> L4f
            com.tkay.basead.a.c r0 = com.tkay.basead.d.a.b.a(r0, r3)     // Catch: java.lang.Throwable -> L4f
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r1 = r2.i     // Catch: java.lang.Throwable -> L4f
            java.lang.String r3 = r3.aZ()     // Catch: java.lang.Throwable -> L4f
            r1.put(r3, r0)     // Catch: java.lang.Throwable -> L4f
        L30:
            if (r0 == 0) goto L4d
            com.tkay.basead.c.i r3 = new com.tkay.basead.c.i     // Catch: java.lang.Throwable -> L4f
            com.tkay.core.common.f.i r1 = r2.c     // Catch: java.lang.Throwable -> L4f
            java.lang.String r1 = r1.d     // Catch: java.lang.Throwable -> L4f
            r3.<init>(r1, r4)     // Catch: java.lang.Throwable -> L4f
            com.tkay.basead.c.a r4 = new com.tkay.basead.c.a     // Catch: java.lang.Throwable -> L4f
            r4.<init>()     // Catch: java.lang.Throwable -> L4f
            r3.g = r4     // Catch: java.lang.Throwable -> L4f
            com.tkay.basead.d.b$3 r4 = new com.tkay.basead.d.b$3     // Catch: java.lang.Throwable -> L4f
            r4.<init>(r2)     // Catch: java.lang.Throwable -> L4f
            r0.a(r4)     // Catch: java.lang.Throwable -> L4f
            r0.a(r3)     // Catch: java.lang.Throwable -> L4f
        L4d:
            monitor-exit(r2)
            return
        L4f:
            r3 = move-exception
            r3.printStackTrace()     // Catch: java.lang.Throwable -> L55
            monitor-exit(r2)
            return
        L55:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    public void b() {
            r1 = this;
            r0 = 0
            r1.e = r0
            return
    }

    public final boolean c() {
            r4 = this;
            int[] r0 = com.tkay.basead.d.b.4.a
            com.tkay.basead.d.b$a r1 = r4.a
            int r1 = r1.ordinal()
            r0 = r0[r1]
            r1 = 0
            r2 = 1
            if (r0 == r2) goto L47
            r3 = 2
            if (r0 == r3) goto L12
            return r1
        L12:
            com.tkay.core.common.f.z r0 = r4.e
            if (r0 != 0) goto L24
            android.content.Context r0 = r4.b
            com.tkay.basead.d.b.a r0 = com.tkay.basead.d.b.a.a(r0)
            com.tkay.core.common.f.i r3 = r4.c
            com.tkay.core.common.f.y r0 = r0.a(r3)
            r4.e = r0
        L24:
            boolean r0 = r4.k
            if (r0 == 0) goto L29
            return r2
        L29:
            com.tkay.core.common.f.z r0 = r4.e
            if (r0 == 0) goto L46
            boolean r3 = r0 instanceof com.tkay.core.common.f.y
            if (r3 == 0) goto L46
            com.tkay.core.common.f.y r0 = (com.tkay.core.common.f.y) r0
            boolean r0 = r0.N()
            if (r0 != 0) goto L46
            com.tkay.core.common.f.z r0 = r4.e
            com.tkay.core.common.f.i r3 = r4.c
            boolean r0 = com.tkay.basead.a.b.c.a(r0, r3)
            if (r0 == 0) goto L46
            r4.k = r2
            return r2
        L46:
            return r1
        L47:
            com.tkay.core.common.f.z r0 = r4.e
            if (r0 != 0) goto L59
            android.content.Context r0 = r4.b
            com.tkay.basead.d.a.a r0 = com.tkay.basead.d.a.a.a(r0)
            com.tkay.core.common.f.i r3 = r4.c
            com.tkay.core.common.f.f r0 = r0.a(r3)
            r4.e = r0
        L59:
            com.tkay.core.common.a.g r0 = r4.f
            if (r0 == 0) goto L62
            boolean r0 = r0.isReady()
            return r0
        L62:
            boolean r0 = r4.k
            if (r0 == 0) goto L67
            return r2
        L67:
            com.tkay.core.common.f.z r0 = r4.e
            if (r0 == 0) goto L76
            com.tkay.core.common.f.i r3 = r4.c
            boolean r0 = com.tkay.basead.a.b.c.a(r0, r3)
            if (r0 == 0) goto L76
            r4.k = r2
            return r2
        L76:
            return r1
    }

    protected final synchronized void d() {
            r2 = this;
            monitor-enter(r2)
            com.tkay.basead.a.c r0 = r2.g     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto Ld
            com.tkay.basead.a.c r0 = r2.g     // Catch: java.lang.Throwable -> L40
            r0.d()     // Catch: java.lang.Throwable -> L40
            r0 = 0
            r2.g = r0     // Catch: java.lang.Throwable -> L40
        Ld:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r0 = r2.i     // Catch: java.lang.Throwable -> L40
            if (r0 == 0) goto L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r0 = r2.i     // Catch: java.lang.Throwable -> L40
            int r0 = r0.size()     // Catch: java.lang.Throwable -> L40
            if (r0 <= 0) goto L3e
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.basead.a.c> r0 = r2.i     // Catch: java.lang.Throwable -> L40
            java.util.Set r0 = r0.entrySet()     // Catch: java.lang.Throwable -> L40
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L40
        L23:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L3e
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L40
            java.util.Map$Entry r1 = (java.util.Map.Entry) r1     // Catch: java.lang.Throwable -> L40
            java.lang.Object r1 = r1.getValue()     // Catch: java.lang.Throwable -> L40
            com.tkay.basead.a.c r1 = (com.tkay.basead.a.c) r1     // Catch: java.lang.Throwable -> L40
            if (r1 == 0) goto L23
            r1.d()     // Catch: java.lang.Throwable -> L40
            r0.remove()     // Catch: java.lang.Throwable -> L40
            goto L23
        L3e:
            monitor-exit(r2)
            return
        L40:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }

    public final com.tkay.core.common.f.h e() {
            r1 = this;
            com.tkay.core.common.f.z r0 = r1.e
            return r0
    }
}
