package com.kwad.sdk.core.network;

public class r {
    private static volatile com.kwad.sdk.core.network.r apL;
    private final java.util.Map<java.lang.String, java.lang.String> aou;

    private r() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.ConcurrentHashMap r0 = new java.util.concurrent.ConcurrentHashMap
            r0.<init>()
            r1.aou = r0
            return
    }

    public static com.kwad.sdk.core.network.r Bk() {
            com.kwad.sdk.core.network.r r0 = com.kwad.sdk.core.network.r.apL
            if (r0 != 0) goto L17
            java.lang.Class<com.kwad.sdk.core.network.r> r0 = com.kwad.sdk.core.network.r.class
            monitor-enter(r0)
            com.kwad.sdk.core.network.r r1 = com.kwad.sdk.core.network.r.apL     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.kwad.sdk.core.network.r r1 = new com.kwad.sdk.core.network.r     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.kwad.sdk.core.network.r.apL = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.kwad.sdk.core.network.r r0 = com.kwad.sdk.core.network.r.apL
            return r0
    }

    public final void N(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 != 0) goto L12
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Ld
            goto L12
        Ld:
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.aou
            r0.put(r2, r3)
        L12:
            return
    }

    public final java.lang.String cZ(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.aou
            java.lang.Object r2 = r0.get(r2)
            java.lang.String r2 = (java.lang.String) r2
            return r2
    }
}
