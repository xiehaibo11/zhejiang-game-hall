package com.kwad.components.ad.h;

public class b implements com.kwad.components.core.internal.api.b {
    private static final java.lang.Object nN = null;
    private static volatile com.kwad.components.ad.h.b nO;
    private java.util.Set<java.lang.Integer> nP;
    private java.util.List<com.kwad.components.ad.h.c> nQ;
    private java.util.Map<com.kwad.components.core.internal.api.a, java.lang.Object> nR;
    private java.util.Map<com.kwad.components.core.n.c, java.lang.Object> nS;
    private com.kwad.components.core.n.i nT;


    static {
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            com.kwad.components.ad.h.b.nN = r0
            return
    }

    private b() {
            r2 = this;
            r2.<init>()
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            r2.nP = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r2.nQ = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.nR = r0
            java.util.WeakHashMap r0 = new java.util.WeakHashMap
            r0.<init>()
            r2.nS = r0
            com.kwad.components.ad.h.b$1 r0 = new com.kwad.components.ad.h.b$1
            r0.<init>(r2)
            r2.nT = r0
            com.kwad.components.core.n.h r0 = com.kwad.components.core.n.h.py()
            com.kwad.components.core.n.i r1 = r2.nT
            r0.a(r1)
            java.util.Set<java.lang.Integer> r0 = r2.nP
            r1 = 2
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            java.util.Set<java.lang.Integer> r0 = r2.nP
            r1 = 3
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            java.util.Set<java.lang.Integer> r0 = r2.nP
            r1 = 13
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            java.util.Set<java.lang.Integer> r0 = r2.nP
            r1 = 6
            java.lang.Integer r1 = java.lang.Integer.valueOf(r1)
            r0.add(r1)
            return
    }

    static java.util.Map a(com.kwad.components.ad.h.b r0) {
            java.util.Map<com.kwad.components.core.n.c, java.lang.Object> r0 = r0.nS
            return r0
    }

    static void b(com.kwad.components.ad.h.b r0) {
            r0.fb()
            return
    }

    private void e(com.kwad.components.core.internal.api.a r3) {
            r2 = this;
            java.util.Map<com.kwad.components.core.internal.api.a, java.lang.Object> r0 = r2.nR
            java.lang.Object r1 = com.kwad.components.ad.h.b.nN
            r0.put(r3, r1)
            boolean r0 = g(r3)
            if (r0 == 0) goto L1a
            com.kwad.components.ad.h.c r0 = new com.kwad.components.ad.h.c
            r0.<init>(r3)
            r0.fe()
            java.util.List<com.kwad.components.ad.h.c> r3 = r2.nQ
            r3.add(r0)
        L1a:
            return
    }

    private void f(com.kwad.components.core.internal.api.a r3) {
            r2 = this;
            java.util.Map<com.kwad.components.core.internal.api.a, java.lang.Object> r0 = r2.nR
            r0.remove(r3)
            java.util.List<com.kwad.components.ad.h.c> r0 = r2.nQ
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1b
            java.lang.Object r1 = r0.next()
            com.kwad.components.ad.h.c r1 = (com.kwad.components.ad.h.c) r1
            r1.d(r3)
            goto Lb
        L1b:
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()
            boolean r3 = r2.n(r3)
            if (r3 == 0) goto L28
            r2.fb()
        L28:
            return
    }

    public static com.kwad.components.ad.h.b fa() {
            com.kwad.components.ad.h.b r0 = com.kwad.components.ad.h.b.nO
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.ad.h.b> r0 = com.kwad.components.ad.h.b.class
            monitor-enter(r0)
            com.kwad.components.ad.h.b r1 = com.kwad.components.ad.h.b.nO     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.ad.h.b r1 = new com.kwad.components.ad.h.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.ad.h.b.nO = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.ad.h.b r0 = com.kwad.components.ad.h.b.nO
            return r0
    }

    private synchronized void fb() {
            r4 = this;
            monitor-enter(r4)
            boolean r0 = r4.fc()     // Catch: java.lang.Throwable -> L32
            java.lang.String r1 = "KsAdGlobalWatcher"
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L32
            java.lang.String r3 = "checkCurrentPage noSDKPage: "
            r2.<init>(r3)     // Catch: java.lang.Throwable -> L32
            r2.append(r0)     // Catch: java.lang.Throwable -> L32
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L32
            com.kwad.sdk.core.e.c.d(r1, r2)     // Catch: java.lang.Throwable -> L32
            if (r0 == 0) goto L30
            java.util.List<com.kwad.components.ad.h.c> r0 = r4.nQ     // Catch: java.lang.Throwable -> L32
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L32
        L20:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L32
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L32
            com.kwad.components.ad.h.c r1 = (com.kwad.components.ad.h.c) r1     // Catch: java.lang.Throwable -> L32
            r1.fg()     // Catch: java.lang.Throwable -> L32
            goto L20
        L30:
            monitor-exit(r4)
            return
        L32:
            r0 = move-exception
            monitor-exit(r4)
            throw r0
    }

    static java.lang.Object fd() {
            java.lang.Object r0 = com.kwad.components.ad.h.b.nN
            return r0
    }

    private static boolean g(com.kwad.components.core.internal.api.a r1) {
            boolean r0 = r1.ae()
            if (r0 != 0) goto L8
            r1 = 0
            return r1
        L8:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.cD(r1)
            return r1
    }

    private boolean n(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            return r2
        L4:
            int r2 = r2.adStyle
            java.util.Set<java.lang.Integer> r0 = r1.nP
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            boolean r2 = r0.contains(r2)
            return r2
    }

    public final void a(com.kwad.components.ad.h.c r2) {
            r1 = this;
            if (r2 == 0) goto L7
            java.util.List<com.kwad.components.ad.h.c> r0 = r1.nQ
            r0.remove(r2)
        L7:
            return
    }

    public final void a(com.kwad.components.core.internal.api.a r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.a(r0)
        L5:
            return
    }

    public final void b(com.kwad.components.core.internal.api.a r1) {
            r0 = this;
            if (r1 == 0) goto L5
            r1.b(r0)
        L5:
            return
    }

    @Override
    public final void c(com.kwad.components.core.internal.api.a r1) {
            r0 = this;
            r0.e(r1)
            return
    }

    @Override
    public final void d(com.kwad.components.core.internal.api.a r1) {
            r0 = this;
            r0.f(r1)
            r0.b(r1)
            return
    }

    public final synchronized boolean fc() {
            r2 = this;
            monitor-enter(r2)
            java.util.Map<com.kwad.components.core.internal.api.a, java.lang.Object> r0 = r2.nR     // Catch: java.lang.Throwable -> L2c
            java.util.Set r0 = r0.keySet()     // Catch: java.lang.Throwable -> L2c
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Throwable -> L2c
        Lb:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto L24
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Throwable -> L2c
            com.kwad.components.core.internal.api.a r1 = (com.kwad.components.core.internal.api.a) r1     // Catch: java.lang.Throwable -> L2c
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()     // Catch: java.lang.Throwable -> L2c
            boolean r1 = r2.n(r1)     // Catch: java.lang.Throwable -> L2c
            if (r1 == 0) goto Lb
            r0 = 0
            monitor-exit(r2)
            return r0
        L24:
            java.util.Map<com.kwad.components.core.n.c, java.lang.Object> r0 = r2.nS     // Catch: java.lang.Throwable -> L2c
            boolean r0 = r0.isEmpty()     // Catch: java.lang.Throwable -> L2c
            monitor-exit(r2)
            return r0
        L2c:
            r0 = move-exception
            monitor-exit(r2)
            throw r0
    }
}
