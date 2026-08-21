package com.tkay.core.common.k;

public class a extends com.tkay.core.common.o<com.tkay.core.common.f.e> {
    private static volatile com.tkay.core.common.k.a f;


    private a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static com.tkay.core.common.f.e a(com.tkay.core.common.k.a r6, int r7, com.tkay.core.common.f.ai r8, com.tkay.core.common.f.aj r9, long r10) {
            r0 = 0
            r1 = 13
            if (r7 != r1) goto L12
            if (r9 == 0) goto Lc
            com.tkay.core.common.f.l r1 = r9.M()
            goto Ld
        Lc:
            r1 = r0
        Ld:
            if (r1 == 0) goto L12
            r1.a(r9)
        L12:
            r1 = 4
            if (r7 != r1) goto L31
            if (r9 == 0) goto L1c
            com.tkay.core.common.f.l r2 = r9.M()
            goto L1d
        L1c:
            r2 = r0
        L1d:
            if (r2 == 0) goto L27
            double r3 = r2.getSortPrice()
            r5 = 1
            r2.a(r5, r3, r5)
        L27:
            boolean r2 = r8 instanceof com.tkay.core.common.f.d
            if (r2 == 0) goto L31
            r2 = r8
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2
            r6.a(r2, r9)
        L31:
            com.tkay.core.common.b.m r6 = com.tkay.core.common.b.m.a()
            android.content.Context r6 = r6.f()
            com.tkay.core.c.b r6 = com.tkay.core.c.b.a(r6)
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            java.lang.String r9 = r9.o()
            com.tkay.core.c.a r6 = r6.b(r9)
            com.tkay.core.common.f.e r9 = new com.tkay.core.common.f.e
            r9.<init>()
            r9.a = r7
            r9.b = r8
            r2 = 0
            int r2 = (r10 > r2 ? 1 : (r10 == r2 ? 0 : -1))
            if (r2 <= 0) goto L59
            goto L5d
        L59:
            long r10 = java.lang.System.currentTimeMillis()
        L5d:
            r9.c = r10
            com.tkay.core.common.b.m r10 = com.tkay.core.common.b.m.a()
            android.content.Context r10 = r10.f()
            com.tkay.core.common.r r10 = com.tkay.core.common.r.a(r10)
            r10.a(r7, r9, r6)
            boolean r6 = a(r7, r8, r6)
            if (r6 == 0) goto L75
            return r0
        L75:
            if (r1 != r7) goto L83
            boolean r6 = r8 instanceof com.tkay.core.common.f.d
            if (r6 == 0) goto L83
            com.tkay.core.common.q.a()
            com.tkay.core.common.f.d r8 = (com.tkay.core.common.f.d) r8
            com.tkay.core.common.q.a(r8)
        L83:
            return r9
    }

    public static com.tkay.core.common.k.a a(android.content.Context r2) {
            com.tkay.core.common.k.a r0 = com.tkay.core.common.k.a.f
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.common.k.a> r0 = com.tkay.core.common.k.a.class
            monitor-enter(r0)
            com.tkay.core.common.k.a r1 = com.tkay.core.common.k.a.f     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.common.k.a r1 = new com.tkay.core.common.k.a     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.common.k.a.f = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.common.k.a r2 = com.tkay.core.common.k.a.f
            return r2
    }

    private static void a(int r1, com.tkay.core.common.f.aj r2) {
            r0 = 13
            if (r1 != r0) goto L11
            if (r2 == 0) goto Lb
            com.tkay.core.common.f.l r1 = r2.M()
            goto Lc
        Lb:
            r1 = 0
        Lc:
            if (r1 == 0) goto L11
            r1.a(r2)
        L11:
            return
    }

    private void a(com.tkay.core.common.f.d r8, com.tkay.core.common.f.aj r9) {
            r7 = this;
            java.lang.String r8 = r8.W()
            android.content.Context r0 = r7.e
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r0 = r0.a(r8)
            if (r0 != 0) goto L11
            return
        L11:
            java.util.List r1 = r0.x()
            if (r1 == 0) goto L73
            int r2 = r1.size()
            if (r2 != 0) goto L1e
            goto L73
        L1e:
            java.util.List r0 = r0.H()
            if (r0 == 0) goto L73
            int r2 = r0.size()
            if (r2 != 0) goto L2b
            goto L73
        L2b:
            java.util.Iterator r0 = r0.iterator()
        L2f:
            boolean r2 = r0.hasNext()
            if (r2 == 0) goto L73
            java.lang.Object r2 = r0.next()
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            int r3 = r2.c()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r3 = java.lang.String.valueOf(r3)     // Catch: java.lang.Throwable -> L6e
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L6e
            if (r3 == 0) goto L2f
            com.tkay.core.common.a r3 = com.tkay.core.common.a.a()     // Catch: java.lang.Throwable -> L6e
            com.tkay.core.common.f.a r2 = r3.a(r8, r2)     // Catch: java.lang.Throwable -> L6e
            if (r2 == 0) goto L2f
            com.tkay.core.api.TYBaseAdAdapter r2 = r2.e()     // Catch: java.lang.Throwable -> L6e
            com.tkay.core.common.f.aj r2 = r2.getUnitGroupInfo()     // Catch: java.lang.Throwable -> L6e
            com.tkay.core.common.f.l r2 = r2.M()     // Catch: java.lang.Throwable -> L6e
            if (r2 == 0) goto L2f
            r3 = 0
            double r4 = com.tkay.core.common.l.g.a(r9)     // Catch: java.lang.Throwable -> L6e
            boolean r6 = r9.j()     // Catch: java.lang.Throwable -> L6e
            r2.a(r3, r4, r6)     // Catch: java.lang.Throwable -> L6e
            goto L2f
        L6e:
            r2 = move-exception
            r2.printStackTrace()
            goto L2f
        L73:
            return
    }

    static void a(com.tkay.core.common.k.a r0, com.tkay.core.common.f.p r1, boolean r2) {
            super.a(r1, r2)
            return
    }

    private static boolean a(int r7, com.tkay.core.common.f.ai r8, com.tkay.core.c.a r9) {
            java.lang.String r0 = r9.ak()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            r2 = 0
            r3 = 1
            if (r1 != 0) goto L35
            boolean r1 = r8 instanceof com.tkay.core.common.f.d
            if (r1 == 0) goto L35
            org.json.JSONArray r1 = new org.json.JSONArray     // Catch: java.lang.Throwable -> L35
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L35
            int r0 = r1.length()     // Catch: java.lang.Throwable -> L35
            r4 = r8
            com.tkay.core.common.f.d r4 = (com.tkay.core.common.f.d) r4     // Catch: java.lang.Throwable -> L35
            int r4 = r4.H()     // Catch: java.lang.Throwable -> L35
            java.lang.String r4 = java.lang.String.valueOf(r4)     // Catch: java.lang.Throwable -> L35
            r5 = r2
        L25:
            if (r5 >= r0) goto L35
            java.lang.String r6 = r1.optString(r5)     // Catch: java.lang.Throwable -> L35
            boolean r6 = android.text.TextUtils.equals(r4, r6)     // Catch: java.lang.Throwable -> L35
            if (r6 == 0) goto L32
            return r3
        L32:
            int r5 = r5 + 1
            goto L25
        L35:
            java.util.Map r9 = r9.ai()
            if (r9 == 0) goto L60
            java.lang.String r0 = java.lang.String.valueOf(r7)
            boolean r0 = r9.containsKey(r0)
            if (r0 == 0) goto L60
            java.lang.String r7 = java.lang.String.valueOf(r7)
            java.lang.Object r7 = r9.get(r7)
            java.lang.String r7 = (java.lang.String) r7
            boolean r9 = android.text.TextUtils.isEmpty(r7)
            if (r9 != 0) goto L60
            java.lang.String r8 = r8.Y()
            boolean r7 = r7.contains(r8)
            if (r7 == 0) goto L60
            return r3
        L60:
            return r2
    }

    private com.tkay.core.common.f.e b(int r7, com.tkay.core.common.f.ai r8, com.tkay.core.common.f.aj r9, long r10) {
            r6 = this;
            r0 = 0
            r1 = 13
            if (r7 != r1) goto L12
            if (r9 == 0) goto Lc
            com.tkay.core.common.f.l r1 = r9.M()
            goto Ld
        Lc:
            r1 = r0
        Ld:
            if (r1 == 0) goto L12
            r1.a(r9)
        L12:
            r1 = 4
            if (r7 != r1) goto L31
            if (r9 == 0) goto L1c
            com.tkay.core.common.f.l r2 = r9.M()
            goto L1d
        L1c:
            r2 = r0
        L1d:
            if (r2 == 0) goto L27
            double r3 = r2.getSortPrice()
            r5 = 1
            r2.a(r5, r3, r5)
        L27:
            boolean r2 = r8 instanceof com.tkay.core.common.f.d
            if (r2 == 0) goto L31
            r2 = r8
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2
            r6.a(r2, r9)
        L31:
            com.tkay.core.common.b.m r9 = com.tkay.core.common.b.m.a()
            android.content.Context r9 = r9.f()
            com.tkay.core.c.b r9 = com.tkay.core.c.b.a(r9)
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            java.lang.String r2 = r2.o()
            com.tkay.core.c.a r9 = r9.b(r2)
            com.tkay.core.common.f.e r2 = new com.tkay.core.common.f.e
            r2.<init>()
            r2.a = r7
            r2.b = r8
            r3 = 0
            int r3 = (r10 > r3 ? 1 : (r10 == r3 ? 0 : -1))
            if (r3 <= 0) goto L59
            goto L5d
        L59:
            long r10 = java.lang.System.currentTimeMillis()
        L5d:
            r2.c = r10
            com.tkay.core.common.b.m r10 = com.tkay.core.common.b.m.a()
            android.content.Context r10 = r10.f()
            com.tkay.core.common.r r10 = com.tkay.core.common.r.a(r10)
            r10.a(r7, r2, r9)
            boolean r9 = a(r7, r8, r9)
            if (r9 == 0) goto L75
            return r0
        L75:
            if (r1 != r7) goto L83
            boolean r7 = r8 instanceof com.tkay.core.common.f.d
            if (r7 == 0) goto L83
            com.tkay.core.common.q.a()
            com.tkay.core.common.f.d r8 = (com.tkay.core.common.f.d) r8
            com.tkay.core.common.q.a(r8)
        L83:
            return r2
    }

    private void b(int r4, com.tkay.core.common.f.ai r5, com.tkay.core.common.f.aj r6) {
            r3 = this;
            r0 = 4
            if (r4 != r0) goto L1e
            if (r6 == 0) goto La
            com.tkay.core.common.f.l r4 = r6.M()
            goto Lb
        La:
            r4 = 0
        Lb:
            if (r4 == 0) goto L15
            double r0 = r4.getSortPrice()
            r2 = 1
            r4.a(r2, r0, r2)
        L15:
            boolean r4 = r5 instanceof com.tkay.core.common.f.d
            if (r4 == 0) goto L1e
            com.tkay.core.common.f.d r5 = (com.tkay.core.common.f.d) r5
            r3.a(r5, r6)
        L1e:
            return
    }

    static boolean b(int r5, com.tkay.core.common.f.ai r6) {
            boolean r0 = r6 instanceof com.tkay.core.common.f.d
            r1 = 0
            if (r0 == 0) goto L8e
            r0 = r6
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0
            int r2 = r0.H()
            r3 = 67
            r4 = 1
            if (r2 != r3) goto L12
            return r4
        L12:
            int r2 = r0.H()
            if (r2 == 0) goto L8e
            java.lang.String r2 = r6.Y()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L23
            goto L8e
        L23:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.c.b r2 = com.tkay.core.c.b.a(r2)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.o()
            com.tkay.core.c.a r2 = r2.b(r3)
            java.util.Map r5 = r2.a(r5)
            if (r5 == 0) goto L8e
            java.lang.String r2 = "0"
            boolean r3 = r5.containsKey(r2)
            if (r3 == 0) goto L61
            java.lang.Object r5 = r5.get(r2)
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L60
            java.lang.String r6 = r6.Y()
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L60
            return r4
        L60:
            return r1
        L61:
            int r2 = r0.H()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            boolean r2 = r5.containsKey(r2)
            if (r2 == 0) goto L8e
            int r0 = r0.H()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L8e
            java.lang.String r6 = r6.Y()
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L8e
            return r4
        L8e:
            return r1
    }

    private static boolean c(int r5, com.tkay.core.common.f.ai r6) {
            boolean r0 = r6 instanceof com.tkay.core.common.f.d
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            r0 = r6
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0
            int r2 = r0.H()
            r3 = 67
            r4 = 1
            if (r2 != r3) goto L13
            return r4
        L13:
            int r2 = r0.H()
            if (r2 == 0) goto L8f
            java.lang.String r2 = r6.Y()
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 == 0) goto L24
            goto L8f
        L24:
            com.tkay.core.common.b.m r2 = com.tkay.core.common.b.m.a()
            android.content.Context r2 = r2.f()
            com.tkay.core.c.b r2 = com.tkay.core.c.b.a(r2)
            com.tkay.core.common.b.m r3 = com.tkay.core.common.b.m.a()
            java.lang.String r3 = r3.o()
            com.tkay.core.c.a r2 = r2.b(r3)
            java.util.Map r5 = r2.a(r5)
            if (r5 == 0) goto L8f
            java.lang.String r2 = "0"
            boolean r3 = r5.containsKey(r2)
            if (r3 == 0) goto L62
            java.lang.Object r5 = r5.get(r2)
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L61
            java.lang.String r6 = r6.Y()
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L61
            return r4
        L61:
            return r1
        L62:
            int r2 = r0.H()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            boolean r2 = r5.containsKey(r2)
            if (r2 == 0) goto L8f
            int r0 = r0.H()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            java.lang.Object r5 = r5.get(r0)
            java.lang.String r5 = (java.lang.String) r5
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto L8f
            java.lang.String r6 = r6.Y()
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto L8f
            return r4
        L8f:
            return r1
    }

    private static void d(int r1, com.tkay.core.common.f.ai r2) {
            r0 = 4
            if (r0 != r1) goto Lf
            boolean r1 = r2 instanceof com.tkay.core.common.f.d
            if (r1 == 0) goto Lf
            com.tkay.core.common.q.a()
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2
            com.tkay.core.common.q.a(r2)
        Lf:
            return
    }

    private static void e(int r1, com.tkay.core.common.f.ai r2) {
            boolean r0 = r2 instanceof com.tkay.core.common.f.d
            if (r0 == 0) goto L22
            r0 = 4
            if (r1 == r0) goto L1d
            r0 = 6
            if (r1 == r0) goto L17
            r2 = 21
            if (r1 == r2) goto Lf
            goto L22
        Lf:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            r1.L()
            goto L22
        L17:
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2
            r2.d()
            return
        L1d:
            com.tkay.core.common.f.d r2 = (com.tkay.core.common.f.d) r2
            r2.c()
        L22:
            return
    }

    public final synchronized void a(int r7, com.tkay.core.common.f.ai r8) {
            r6 = this;
            monitor-enter(r6)
            r3 = 0
            r4 = -1
            r0 = r6
            r1 = r7
            r2 = r8
            r0.a(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r6)
            return
        Lc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a(int r7, com.tkay.core.common.f.ai r8, com.tkay.core.common.f.aj r9) {
            r6 = this;
            monitor-enter(r6)
            r4 = -1
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r0.a(r1, r2, r3, r4)     // Catch: java.lang.Throwable -> Lc
            monitor-exit(r6)
            return
        Lc:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public final synchronized void a(int r10, com.tkay.core.common.f.ai r11, com.tkay.core.common.f.aj r12, long r13) {
            r9 = this;
            monitor-enter(r9)
            boolean r0 = r11 instanceof com.tkay.core.common.f.d     // Catch: java.lang.Throwable -> L39
            if (r0 == 0) goto L25
            r0 = 4
            if (r10 == r0) goto L1f
            r0 = 6
            if (r10 == r0) goto L18
            r0 = 21
            if (r10 == r0) goto L10
            goto L25
        L10:
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Throwable -> L39
            r0.L()     // Catch: java.lang.Throwable -> L39
            goto L25
        L18:
            r0 = r11
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0     // Catch: java.lang.Throwable -> L39
            r0.d()     // Catch: java.lang.Throwable -> L39
            goto L25
        L1f:
            r0 = r11
            com.tkay.core.common.f.d r0 = (com.tkay.core.common.f.d) r0     // Catch: java.lang.Throwable -> L39
            r0.c()     // Catch: java.lang.Throwable -> L39
        L25:
            com.tkay.core.common.l.b.a r0 = com.tkay.core.common.l.b.a.a()     // Catch: java.lang.Throwable -> L39
            com.tkay.core.common.k.a$1 r8 = new com.tkay.core.common.k.a$1     // Catch: java.lang.Throwable -> L39
            r1 = r8
            r2 = r9
            r3 = r11
            r4 = r10
            r5 = r12
            r6 = r13
            r1.<init>(r2, r3, r4, r5, r6)     // Catch: java.lang.Throwable -> L39
            r0.a(r8)     // Catch: java.lang.Throwable -> L39
            monitor-exit(r9)
            return
        L39:
            r10 = move-exception
            monitor-exit(r9)
            throw r10
    }

    @Override
    protected final void a(java.util.List<com.tkay.core.common.f.e> r8) {
            r7 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            com.tkay.core.c.b r0 = com.tkay.core.c.b.a(r0)
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r1.o()
            com.tkay.core.c.a r0 = r0.b(r1)
            r1 = 0
            r2 = 0
            if (r0 == 0) goto L63
            int r3 = r0.u()
            r4 = 1
            if (r3 == r4) goto L53
            r4 = 2
            if (r3 == r4) goto L35
            com.tkay.core.common.h.o r3 = new com.tkay.core.common.h.o
            android.content.Context r4 = r7.e
            int r0 = r0.u()
            r3.<init>(r4, r0, r8)
            r3.a(r1, r2)
            return
        L35:
            com.tkay.core.common.h.o r3 = new com.tkay.core.common.h.o
            android.content.Context r5 = r7.e
            int r6 = r0.u()
            r3.<init>(r5, r6, r8)
            r3.a(r1, r2)
            com.tkay.core.common.h.a.e r1 = new com.tkay.core.common.h.a.e
            r1.<init>(r8)
            java.lang.String r8 = r0.t()
            r1.a(r4, r8)
            r1.a(r2)
            return
        L53:
            com.tkay.core.common.h.a.e r1 = new com.tkay.core.common.h.a.e
            r1.<init>(r8)
            java.lang.String r8 = r0.t()
            r1.a(r4, r8)
            r1.a(r2)
            return
        L63:
            com.tkay.core.common.h.o r0 = new com.tkay.core.common.h.o
            android.content.Context r3 = r7.e
            r0.<init>(r3, r1, r8)
            r0.a(r1, r2)
            return
    }
}
