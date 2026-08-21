package com.kwad.sdk;

public final class g {
    private static com.kwad.sdk.export.proxy.AdHttpProxy agW;

    public static com.kwad.sdk.export.proxy.AdHttpProxy wX() {
            com.kwad.sdk.export.proxy.AdHttpProxy r0 = com.kwad.sdk.g.agW
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L12
            com.kwad.sdk.export.proxy.AdHttpProxy r0 = wY()
            return r0
        L12:
            okhttp3.OkHttpClient r0 = com.kwad.sdk.core.network.a.c.Bm()     // Catch: java.lang.Throwable -> L26
            if (r0 == 0) goto L20
            com.kwad.sdk.core.network.c.b r0 = new com.kwad.sdk.core.network.c.b     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
        L1d:
            com.kwad.sdk.g.agW = r0     // Catch: java.lang.Throwable -> L26
            goto L2d
        L20:
            com.kwad.sdk.core.network.c.a r0 = new com.kwad.sdk.core.network.c.a     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            goto L1d
        L26:
            com.kwad.sdk.core.network.c.a r0 = new com.kwad.sdk.core.network.c.a
            r0.<init>()
            com.kwad.sdk.g.agW = r0
        L2d:
            com.kwad.sdk.export.proxy.AdHttpProxy r0 = com.kwad.sdk.g.agW
            return r0
    }

    private static com.kwad.sdk.export.proxy.AdHttpProxy wY() {
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            r1 = 5
            int r0 = r0.nextInt(r1)
            if (r0 == 0) goto L17
            com.kwad.sdk.core.network.c.b r0 = new com.kwad.sdk.core.network.c.b
            r0.<init>()
            return r0
        L17:
            com.kwad.sdk.core.network.c.a r0 = new com.kwad.sdk.core.network.c.a
            r0.<init>()
            return r0
    }
}
