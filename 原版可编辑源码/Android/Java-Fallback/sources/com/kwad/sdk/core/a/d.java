package com.kwad.sdk.core.a;

public final class d {
    private static com.kwad.sdk.core.a.f aot;

    public static void a(java.lang.String r1, java.util.Map<java.lang.String, java.lang.String> r2, java.lang.String r3) {
            com.kwad.sdk.core.a.f r0 = nR()
            r0.a(r1, r2, r3)
            return
    }

    public static java.lang.String cQ(java.lang.String r1) {
            com.kwad.sdk.core.a.f r0 = nR()
            java.lang.String r1 = r0.cQ(r1)
            return r1
    }

    public static void e(java.util.Map<java.lang.String, java.lang.String> r1) {
            com.kwad.sdk.core.a.f r0 = nR()
            r0.e(r1)
            return
    }

    public static java.lang.String getResponseData(java.lang.String r1) {
            java.lang.Class<com.kwad.sdk.components.DevelopMangerComponents> r0 = com.kwad.sdk.components.DevelopMangerComponents.class
            com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.core.a.f r0 = nR()
            java.lang.String r1 = r0.getResponseData(r1)
            return r1
    }

    private static com.kwad.sdk.core.a.f nR() {
            com.kwad.sdk.core.a.f r0 = com.kwad.sdk.core.a.d.aot
            if (r0 == 0) goto L5
            return r0
        L5:
            java.lang.Class<com.kwad.sdk.components.f> r0 = com.kwad.sdk.components.f.class
            com.kwad.sdk.components.a r0 = com.kwad.sdk.components.c.f(r0)
            com.kwad.sdk.components.f r0 = (com.kwad.sdk.components.f) r0
            if (r0 == 0) goto L17
            r0.nR()
            com.kwad.sdk.core.a.f r0 = r0.nR()
            goto L1c
        L17:
            com.kwad.sdk.core.a.a r0 = new com.kwad.sdk.core.a.a
            r0.<init>()
        L1c:
            com.kwad.sdk.core.a.d.aot = r0
            com.kwad.sdk.core.a.f r0 = com.kwad.sdk.core.a.d.aot
            return r0
    }
}
