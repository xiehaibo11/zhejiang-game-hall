package com.kwad.components.core.c;

public class f {
    private static volatile com.kwad.components.core.c.f IJ;
    private java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.Object>> II;

    public f() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.II = r0
            return
    }

    private static java.lang.String K(com.kwad.sdk.core.response.model.AdTemplate r4) {
            long r0 = com.kwad.sdk.core.response.b.d.bZ(r4)
            long r2 = com.kwad.sdk.core.response.b.d.cq(r4)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            r4.append(r0)
            java.lang.String r0 = "-"
            r4.append(r0)
            r4.append(r2)
            java.lang.String r4 = r4.toString()
            return r4
    }

    private static java.lang.String b(com.kwad.components.core.c.g r2) {
            java.lang.String r0 = r2.mv()
            java.lang.String r2 = r2.mB()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = "-"
            r1.append(r0)
            r1.append(r2)
            java.lang.String r2 = r1.toString()
            return r2
    }

    public static com.kwad.components.core.c.f mu() {
            com.kwad.components.core.c.f r0 = com.kwad.components.core.c.f.IJ
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.components.core.c.f> r0 = com.kwad.components.core.c.f.class
            monitor-enter(r0)
            com.kwad.components.core.c.f r1 = com.kwad.components.core.c.f.IJ     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.components.core.c.f r1 = new com.kwad.components.core.c.f     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.components.core.c.f.IJ = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.components.core.c.f r0 = com.kwad.components.core.c.f.IJ
            return r0
    }

    public final void J(com.kwad.sdk.core.response.model.AdTemplate r2) {
            r1 = this;
            java.lang.String r2 = K(r2)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.Object>> r0 = r1.II
            r0.remove(r2)
            return
    }

    public final boolean a(com.kwad.components.core.c.g r5) {
            r4 = this;
            java.lang.String r5 = b(r5)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "contains key: "
            r0.<init>(r1)
            r0.append(r5)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "AdMemCachePool"
            com.kwad.sdk.core.e.c.d(r1, r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.Object>> r0 = r4.II
            boolean r0 = r0.containsKey(r5)
            r2 = 0
            if (r0 != 0) goto L21
            return r2
        L21:
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.Object>> r0 = r4.II
            java.lang.Object r5 = r0.get(r5)
            java.lang.ref.WeakReference r5 = (java.lang.ref.WeakReference) r5
            if (r5 == 0) goto L32
            java.lang.Object r0 = r5.get()
            if (r0 == 0) goto L32
            r2 = 1
        L32:
            if (r2 == 0) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r3 = "contains ad: "
            r0.<init>(r3)
            java.lang.Object r5 = r5.get()
            r0.append(r5)
            java.lang.String r5 = r0.toString()
            com.kwad.sdk.core.e.c.d(r1, r5)
        L49:
            return r2
    }

    public final void add(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.kwad.components.core.internal.api.a
            if (r0 == 0) goto L19
            r0 = r4
            com.kwad.components.core.internal.api.a r0 = (com.kwad.components.core.internal.api.a) r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()
            java.lang.String r0 = K(r0)
            java.util.concurrent.ConcurrentHashMap<java.lang.String, java.lang.ref.WeakReference<java.lang.Object>> r1 = r3.II
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r4)
            r1.put(r0, r2)
        L19:
            return
    }
}
