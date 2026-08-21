package com.tkay.core.b;

public final class c {
    private static com.tkay.core.b.c h;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> a;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.b.j> b;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> c;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.util.List<com.tkay.core.common.f.aj>> d;
    java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> e;
    java.util.List<java.lang.Integer> f;
    private final java.lang.String g;
    private com.tkay.core.api.MediationBidManager i;

    private c() {
            r2 = this;
            r2.<init>()
            java.lang.Class r0 = r2.getClass()
            java.lang.String r0 = r0.getSimpleName()
            r2.g = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 5
            r0.<init>(r1)
            r2.b = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>(r1)
            r2.c = r0
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r2.f = r0
            return
    }

    public static com.tkay.core.b.c a() {
            com.tkay.core.b.c r0 = com.tkay.core.b.c.h
            if (r0 != 0) goto Lb
            com.tkay.core.b.c r0 = new com.tkay.core.b.c
            r0.<init>()
            com.tkay.core.b.c.h = r0
        Lb:
            com.tkay.core.b.c r0 = com.tkay.core.b.c.h
            return r0
    }

    private void a(com.tkay.core.common.f.aj r3, com.tkay.core.common.f.l r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> r0 = r2.a
            java.lang.String r1 = r3.t()
            r0.put(r1, r4)
            int r0 = r3.l()
            r1 = 3
            if (r0 == r1) goto L17
            int r0 = r3.l()
            r1 = 7
            if (r0 != r1) goto L1e
        L17:
            java.lang.String r3 = r3.t()
            a(r3, r4)
        L1e:
            return
    }

    public static void a(java.lang.String r2, com.tkay.core.common.f.l r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r3 = r3.c()
            java.lang.String r1 = "tkay_hb_cache_file"
            com.tkay.core.common.l.p.a(r0, r1, r2, r3)
            return
    }

    public static void b(java.lang.String r2) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            android.content.Context r0 = r0.f()
            java.lang.String r1 = "tkay_hb_cache_file"
            com.tkay.core.common.l.p.a(r0, r1, r2)
            return
    }

    private com.tkay.core.b.j c(com.tkay.core.common.f.aj r2) {
            r1 = this;
            if (r2 == 0) goto L13
            com.tkay.core.common.f.l r0 = r2.M()
            java.lang.String r0 = r0.g
            com.tkay.core.common.f.l r2 = r2.M()
            java.lang.String r2 = r2.k
            com.tkay.core.b.j r2 = r1.b(r0, r2)
            return r2
        L13:
            r2 = 0
            return r2
    }

    private void d(com.tkay.core.common.f.aj r2) {
            r1 = this;
            if (r2 == 0) goto Lf
            com.tkay.core.common.f.l r2 = r2.M()
            if (r2 == 0) goto Lf
            java.lang.String r0 = r2.g
            java.lang.String r2 = r2.k
            r1.c(r0, r2)
        Lf:
            return
    }

    private void d(java.lang.String r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = r2.e
            if (r0 != 0) goto Lb
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r2.e = r0
        Lb:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = r2.e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_c2sfirstStatus"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r1 = 1
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.put(r3, r1)
            return
    }

    private boolean e(java.lang.String r3) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.Integer> r0 = r2.e
            if (r0 == 0) goto L1e
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_c2sfirstStatus"
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.Object r3 = r0.get(r3)
            if (r3 != 0) goto L1c
            goto L1e
        L1c:
            r3 = 0
            return r3
        L1e:
            r3 = 1
            return r3
    }

    public final double a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.b.j> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.b.j r3 = (com.tkay.core.b.j) r3
            if (r3 == 0) goto L21
            double r3 = r3.c
            return r3
        L21:
            r3 = 0
            return r3
    }

    public final com.tkay.core.common.f.l a(com.tkay.core.common.f.aj r6) {
            r5 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> r0 = r5.a
            java.lang.String r1 = r6.t()
            java.lang.Object r0 = r0.get(r1)
            com.tkay.core.common.f.l r0 = (com.tkay.core.common.f.l) r0
            if (r0 != 0) goto L45
            int r1 = r6.l()
            r2 = 3
            if (r1 == r2) goto L1c
            int r1 = r6.l()
            r2 = 7
            if (r1 != r2) goto L45
        L1c:
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            java.lang.String r2 = r6.t()
            java.lang.String r3 = "tkay_hb_cache_file"
            java.lang.String r4 = ""
            java.lang.String r1 = com.tkay.core.common.l.p.b(r1, r3, r2, r4)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L3a
            com.tkay.core.common.f.l r0 = com.tkay.core.common.f.l.a(r1)
        L3a:
            if (r0 == 0) goto L45
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> r1 = r5.a
            java.lang.String r6 = r6.t()
            r1.put(r6, r0)
        L45:
            return r0
    }

    public final void a(int r4) {
            r3 = this;
            java.util.List<java.lang.Integer> r0 = r3.f
            monitor-enter(r0)
            java.util.List<java.lang.Integer> r1 = r3.f     // Catch: java.lang.Throwable -> L1a
            java.lang.Integer r2 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L1a
            boolean r1 = r1.contains(r2)     // Catch: java.lang.Throwable -> L1a
            if (r1 != 0) goto L18
            java.util.List<java.lang.Integer> r1 = r3.f     // Catch: java.lang.Throwable -> L1a
            java.lang.Integer r4 = java.lang.Integer.valueOf(r4)     // Catch: java.lang.Throwable -> L1a
            r1.add(r4)     // Catch: java.lang.Throwable -> L1a
        L18:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r4 = move-exception
            monitor-exit(r0)
            throw r4
    }

    public final void a(com.tkay.core.api.MediationBidManager r1) {
            r0 = this;
            r0.i = r1
            return
    }

    public final void a(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.l> r0 = r1.a
            r0.remove(r2)
            return
    }

    public final void a(java.lang.String r2, com.tkay.core.common.f.aj r3) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.c
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4, com.tkay.core.b.j r5) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.b.j> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.put(r3, r5)
            return
    }

    public final double b(com.tkay.core.common.f.aj r3) {
            r2 = this;
            if (r3 == 0) goto L13
            com.tkay.core.common.f.l r0 = r3.M()
            if (r0 == 0) goto L13
            java.lang.String r0 = r0.g
            java.lang.String r3 = r3.t()
            double r0 = r2.a(r0, r3)
            return r0
        L13:
            r0 = 0
            return r0
    }

    public final com.tkay.core.api.MediationBidManager b() {
            r1 = this;
            com.tkay.core.api.MediationBidManager r0 = r1.i
            return r0
    }

    public final com.tkay.core.b.j b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.b.j> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            java.lang.Object r3 = r0.get(r3)
            com.tkay.core.b.j r3 = (com.tkay.core.b.j) r3
            return r3
    }

    public final boolean b(int r3) {
            r2 = this;
            java.util.List<java.lang.Integer> r0 = r2.f
            monitor-enter(r0)
            java.util.List<java.lang.Integer> r1 = r2.f     // Catch: java.lang.Throwable -> L14
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)     // Catch: java.lang.Throwable -> L14
            boolean r3 = r1.contains(r3)     // Catch: java.lang.Throwable -> L14
            if (r3 != 0) goto L11
            r3 = 1
            goto L12
        L11:
            r3 = 0
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            return r3
        L14:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    public final com.tkay.core.common.f.aj c(java.lang.String r2) {
            r1 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.common.f.aj> r0 = r1.c
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.f.aj r2 = (com.tkay.core.common.f.aj) r2
            return r2
    }

    public final void c(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.concurrent.ConcurrentHashMap<java.lang.String, com.tkay.core.b.j> r0 = r2.b
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r3)
            java.lang.String r3 = "_"
            r1.append(r3)
            r1.append(r4)
            java.lang.String r3 = r1.toString()
            r0.remove(r3)
            return
    }
}
