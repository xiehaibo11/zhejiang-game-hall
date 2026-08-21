package com.kwad.sdk.core.network;

public class e {
    private static volatile com.kwad.sdk.core.network.e aoN;
    private java.lang.String aoO;

    private e() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = Bg()
            r1.aoO = r0
            return
    }

    public static com.kwad.sdk.core.network.e Be() {
            com.kwad.sdk.core.network.e r0 = com.kwad.sdk.core.network.e.aoN
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.network.e> r0 = com.kwad.sdk.core.network.e.class
            monitor-enter(r0)
            com.kwad.sdk.core.network.e r1 = com.kwad.sdk.core.network.e.aoN     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.network.e r1 = new com.kwad.sdk.core.network.e     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.network.e.aoN = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.network.e r0 = com.kwad.sdk.core.network.e.aoN
            return r0
    }

    private static java.lang.String Bg() {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L20
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1     // Catch: java.lang.Exception -> L20
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = com.kwad.sdk.utils.av.cO(r1)     // Catch: java.lang.Exception -> L20
            r0.<init>(r1)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)     // Catch: java.lang.Exception -> L20
            java.lang.String r0 = com.kwad.sdk.utils.q.a(r0, r1)     // Catch: java.lang.Exception -> L20
            return r0
        L20:
            r0 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r0)
            r0 = 0
            return r0
    }

    private static void cY(java.lang.String r3) {
            java.io.File r0 = new java.io.File     // Catch: java.lang.Exception -> L20
            java.lang.Class<com.kwad.sdk.service.a.e> r1 = com.kwad.sdk.service.a.e.class
            java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)     // Catch: java.lang.Exception -> L20
            com.kwad.sdk.service.a.e r1 = (com.kwad.sdk.service.a.e) r1     // Catch: java.lang.Exception -> L20
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = com.kwad.sdk.utils.av.cO(r1)     // Catch: java.lang.Exception -> L20
            r0.<init>(r1)     // Catch: java.lang.Exception -> L20
            java.lang.String r1 = "UTF-8"
            java.nio.charset.Charset r1 = java.nio.charset.Charset.forName(r1)     // Catch: java.lang.Exception -> L20
            r2 = 0
            com.kwad.sdk.utils.q.a(r0, r3, r1, r2)     // Catch: java.lang.Exception -> L20
            return
        L20:
            r3 = move-exception
            com.kwad.sdk.core.e.c.printStackTraceOnly(r3)
            return
    }

    public final java.lang.String Bf() {
            r1 = this;
            java.lang.String r0 = r1.aoO
            return r0
    }

    public final void cX(java.lang.String r2) {
            r1 = this;
            java.lang.String r0 = r1.aoO
            boolean r0 = com.kwad.sdk.utils.bc.isEquals(r0, r2)
            if (r0 != 0) goto Ld
            r1.aoO = r2
            cY(r2)
        Ld:
            return
    }
}
