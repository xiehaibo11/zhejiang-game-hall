package com.kwad.components.core.t;

public final class h {
    public static boolean d(com.kwad.sdk.core.response.model.AdTemplate r1, boolean r2) {
            r0 = 0
            if (r2 == 0) goto L4
            return r0
        L4:
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.b.cP(r1)
            if (r1 != 0) goto Lf
            return r0
        Lf:
            boolean r1 = com.kwad.sdk.core.config.d.zY()
            return r1
    }

    public static void f(android.content.Context r2, com.kwad.sdk.core.response.model.AdTemplate r3) {
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = new com.kwad.components.core.page.AdWebViewActivityProxy$a$a
            r0.<init>()
            java.lang.String r1 = com.kwad.sdk.core.response.b.b.bm(r3)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r0 = r0.ar(r1)
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r0.S(r3)
            r0 = 1
            com.kwad.components.core.page.AdWebViewActivityProxy$a$a r3 = r3.az(r0)
            com.kwad.components.core.page.AdWebViewActivityProxy$a r3 = r3.oA()
            com.kwad.components.core.page.AdWebViewActivityProxy.launch(r2, r3)
            return
    }
}
