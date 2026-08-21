package com.tkay.core.common.f;

public final class ac {
    final java.lang.Object a;
    private java.util.Map<java.lang.String, java.lang.Object> b;
    private com.tkay.core.common.f.c c;
    private java.util.Map<java.lang.String, java.lang.String> d;
    private java.util.Map<java.lang.String, com.tkay.core.common.f> e;
    private boolean f;
    private java.lang.String g;
    private java.util.Map<java.lang.String, java.lang.String> h;

    public ac() {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.g = r0
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r2.a = r0
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 1
            r0.<init>(r1)
            r2.e = r0
            return
    }

    public final com.tkay.core.common.f a(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f> r0 = r1.e
            java.lang.Object r2 = r0.get(r2)
            com.tkay.core.common.f r2 = (com.tkay.core.common.f) r2
            return r2
    }

    public final java.lang.Object a() {
            r1 = this;
            java.lang.Object r0 = r1.a
            return r0
    }

    public final void a(com.tkay.core.api.TYAdInfo r4) {
            r3 = this;
            if (r4 == 0) goto L16
            com.tkay.core.common.f.c r0 = new com.tkay.core.common.f.c
            java.lang.String r1 = r4.getAdsourceId()
            java.lang.String r2 = r4.getShowId()
            int r4 = r4.getNetworkFirmId()
            r0.<init>(r1, r2, r4)
            r3.c = r0
            return
        L16:
            r4 = 0
            r3.c = r4
            return
    }

    public final void a(java.lang.String r2, com.tkay.core.common.f r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.tkay.core.common.f> r0 = r1.e
            r0.put(r2, r3)
            return
    }

    public final void a(java.lang.String r3, java.lang.Object r4) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.b
            if (r0 != 0) goto Lc
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 2
            r0.<init>(r1)
            r2.b = r0
        Lc:
            java.util.Map<java.lang.String, java.lang.Object> r0 = r2.b
            r0.put(r3, r4)
            return
    }

    public final void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.d     // Catch: java.lang.Throwable -> L14
            if (r0 != 0) goto Ld
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap     // Catch: java.lang.Throwable -> L14
            r1 = 2
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L14
            r2.d = r0     // Catch: java.lang.Throwable -> L14
        Ld:
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L14
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.d
            r0.put(r3, r4)
            return
        L14:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final void a(java.util.Map<java.lang.String, java.lang.Object> r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final void a(java.lang.Object[] r1) {
            r0 = this;
            java.lang.String r1 = com.tkay.core.common.l.h.a(r1)
            r0.g = r1
            return
    }

    public final java.lang.String b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.d
            if (r0 != 0) goto L7
            java.lang.String r2 = ""
            return r2
        L7:
            java.lang.Object r2 = r0.remove(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }

    public final java.util.Map<java.lang.String, java.lang.Object> b() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b
            return r0
    }

    public final void b(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.h
            if (r0 != 0) goto Lc
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r1 = 2
            r0.<init>(r1)
            r2.h = r0
        Lc:
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.h
            r0.put(r3, r4)
            return
    }

    public final com.tkay.core.common.f.c c() {
            r1 = this;
            com.tkay.core.common.f.c r0 = r1.c
            return r0
    }

    public final java.lang.String c(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.h
            if (r0 == 0) goto Lb
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
        Lb:
            r2 = 0
            return r2
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.g
            return r0
    }
}
