package com.kwad.components.core.i;

public final class c {
    private java.lang.Object KS;
    private com.kwad.sdk.core.response.model.AdTemplate KT;

    public c(com.kwad.sdk.core.response.model.AdTemplate r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.KS = r0
            com.kwad.components.core.i.b r0 = new com.kwad.components.core.i.b     // Catch: java.lang.Throwable -> Le
            r0.<init>(r2, r3)     // Catch: java.lang.Throwable -> Le
            r1.KS = r0     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r1.KT = r2
            return
    }

    public static java.util.List<com.kwad.sdk.core.response.model.AdTemplate> j(java.util.List<com.kwad.components.core.i.c> r2) {
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            java.util.Iterator r2 = r2.iterator()
        L9:
            boolean r1 = r2.hasNext()
            if (r1 == 0) goto L1d
            java.lang.Object r1 = r2.next()
            com.kwad.components.core.i.c r1 = (com.kwad.components.core.i.c) r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            r0.add(r1)
            goto L9
        L1d:
            return r0
    }

    public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
            r1 = this;
            java.lang.Object r0 = r1.KS
            if (r0 == 0) goto Lb
            com.kwad.components.core.i.b r0 = (com.kwad.components.core.i.b) r0     // Catch: java.lang.Exception -> Lb
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.getAdTemplate()     // Catch: java.lang.Exception -> Lb
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 != 0) goto L10
            com.kwad.sdk.core.response.model.AdTemplate r0 = r1.KT
        L10:
            return r0
    }

    public final java.lang.Object getHost() {
            r1 = this;
            java.lang.Object r0 = r1.KS
            return r0
    }
}
