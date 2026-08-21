package com.kwad.sdk.core.diskcache.b;

public final class a {
    private com.kwad.sdk.core.diskcache.a.a any;

    static final class a {
        static final com.kwad.sdk.core.diskcache.b.a anz = null;

        static {
                com.kwad.sdk.core.diskcache.b.a r0 = new com.kwad.sdk.core.diskcache.b.a
                r1 = 0
                r0.<init>(r1)
                com.kwad.sdk.core.diskcache.b.a.a.anz = r0
                return
        }
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    a(byte r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.sdk.core.diskcache.b.a Au() {
            com.kwad.sdk.core.diskcache.b.a r0 = com.kwad.sdk.core.diskcache.b.a.a.anz
            return r0
    }

    private boolean Av() {
            r1 = this;
            java.lang.Class<com.kwad.sdk.service.a.e> r0 = com.kwad.sdk.service.a.e.class
            java.lang.Object r0 = com.kwad.sdk.service.ServiceProvider.get(r0)
            com.kwad.sdk.service.a.e r0 = (com.kwad.sdk.service.a.e) r0
            android.content.Context r0 = r0.getContext()
            r1.init(r0)
            com.kwad.sdk.core.diskcache.a.a r0 = r1.any
            if (r0 != 0) goto L15
            r0 = 1
            return r0
        L15:
            r0 = 0
            return r0
    }

    private java.io.File cE(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.Av()
            if (r0 != 0) goto L14
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L14
        Ld:
            com.kwad.sdk.core.diskcache.a.a r0 = r1.any
            java.io.File r2 = com.kwad.sdk.core.diskcache.b.b.a(r0, r2)
            return r2
        L14:
            r2 = 0
            return r2
    }

    private synchronized void init(android.content.Context r4) {
            r3 = this;
            monitor-enter(r3)
            com.kwad.sdk.core.diskcache.a.a r0 = r3.any     // Catch: java.lang.Throwable -> L1c
            if (r0 != 0) goto L1a
            if (r4 != 0) goto L8
            goto L1a
        L8:
            java.io.File r4 = com.kwad.sdk.utils.av.cJ(r4)     // Catch: java.lang.Throwable -> L18
            r0 = 209715200(0xc800000, double:1.036130757E-315)
            r2 = 1
            com.kwad.sdk.core.diskcache.a.a r4 = com.kwad.sdk.core.diskcache.a.a.a(r4, r2, r2, r0)     // Catch: java.lang.Throwable -> L18
            r3.any = r4     // Catch: java.lang.Throwable -> L18
            monitor-exit(r3)
            return
        L18:
            monitor-exit(r3)
            return
        L1a:
            monitor-exit(r3)
            return
        L1c:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final boolean a(java.lang.String r4, com.kwad.sdk.core.network.a.a.a r5) {
            r3 = this;
            boolean r0 = r3.Av()
            r1 = 0
            if (r0 != 0) goto L28
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto Le
            goto L28
        Le:
            java.lang.String r0 = com.kwad.sdk.core.diskcache.b.c.cF(r4)
            com.kwad.sdk.core.diskcache.a.a r2 = r3.any
            boolean r4 = com.kwad.sdk.core.diskcache.b.b.a(r2, r4, r0, r5)
            if (r4 == 0) goto L28
            java.io.File r4 = r3.cE(r0)
            if (r4 == 0) goto L28
            boolean r4 = r4.exists()
            if (r4 == 0) goto L28
            r4 = 1
            return r4
        L28:
            return r1
    }

    public final boolean b(java.lang.String r3, java.lang.String r4, com.kwad.sdk.core.network.a.a.a r5) {
            r2 = this;
            boolean r0 = r2.Av()
            r1 = 0
            if (r0 != 0) goto L28
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Le
            goto L28
        Le:
            java.lang.String r4 = com.kwad.sdk.core.diskcache.b.c.cF(r4)
            com.kwad.sdk.core.diskcache.a.a r0 = r2.any
            boolean r3 = com.kwad.sdk.core.diskcache.b.b.a(r0, r3, r4, r5)
            if (r3 == 0) goto L28
            java.io.File r3 = r2.cE(r4)
            if (r3 == 0) goto L28
            boolean r3 = r3.exists()
            if (r3 == 0) goto L28
            r3 = 1
            return r3
        L28:
            return r1
    }

    public final java.io.File bR(java.lang.String r2) {
            r1 = this;
            boolean r0 = r1.Av()
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            java.lang.String r2 = com.kwad.sdk.core.diskcache.b.c.cF(r2)
            java.io.File r2 = r1.cE(r2)
            return r2
        L16:
            r2 = 0
            return r2
    }

    public final void cD(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.Av()
            if (r0 != 0) goto L16
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L16
        Ld:
            com.kwad.sdk.core.diskcache.a.a r0 = r2.any
            java.lang.String r1 = com.kwad.sdk.core.diskcache.b.c.cF(r3)
            com.kwad.sdk.core.diskcache.b.b.a(r0, r3, r1)
        L16:
            return
    }

    public final void delete() {
            r1 = this;
            boolean r0 = r1.Av()
            if (r0 == 0) goto L7
            return
        L7:
            com.kwad.sdk.core.diskcache.a.a r0 = r1.any     // Catch: java.io.IOException -> Lc
            r0.delete()     // Catch: java.io.IOException -> Lc
        Lc:
            return
    }

    public final boolean remove(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.Av()
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            java.lang.String r0 = "cacheKey is not allowed empty"
            com.kwad.sdk.utils.ao.au(r3, r0)     // Catch: java.io.IOException -> L18
            com.kwad.sdk.core.diskcache.a.a r0 = r2.any     // Catch: java.io.IOException -> L18
            java.lang.String r3 = com.kwad.sdk.core.diskcache.b.c.cF(r3)     // Catch: java.io.IOException -> L18
            boolean r3 = r0.remove(r3)     // Catch: java.io.IOException -> L18
            return r3
        L18:
            return r1
    }
}
