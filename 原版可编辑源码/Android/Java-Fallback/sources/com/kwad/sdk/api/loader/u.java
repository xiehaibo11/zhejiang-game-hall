package com.kwad.sdk.api.loader;

public final class u {
    private static final java.util.concurrent.atomic.AtomicBoolean ajo = null;


    static {
            java.util.concurrent.atomic.AtomicBoolean r0 = new java.util.concurrent.atomic.AtomicBoolean
            r0.<init>()
            com.kwad.sdk.api.loader.u.ajo = r0
            return
    }

    public static void a(android.content.Context r2, com.kwad.sdk.api.core.IKsAdSDK r3) {
            boolean r0 = com.kwad.sdk.api.c.yl()
            if (r0 != 0) goto L21
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.loader.u.ajo
            boolean r0 = r0.get()
            if (r0 != 0) goto L21
            if (r2 == 0) goto L21
            if (r3 != 0) goto L13
            goto L21
        L13:
            java.util.concurrent.atomic.AtomicBoolean r0 = com.kwad.sdk.api.loader.u.ajo
            r1 = 1
            r0.set(r1)
            com.kwad.sdk.api.loader.u$1 r0 = new com.kwad.sdk.api.loader.u$1
            r0.<init>(r2, r3)
            com.kwad.sdk.api.a.a.submit(r0)
        L21:
            return
    }

    public static void aE(android.content.Context r1) {
            java.lang.String r0 = ""
            com.kwad.sdk.api.loader.g.k(r1, r0)
            return
    }

    static java.lang.String access$000() {
            java.lang.String r0 = yy()
            return r0
    }

    private static java.lang.String yy() {
            java.lang.String r0 = "https://open.e.kuaishou.com/rest/e/v3/open/sdk2"
            java.lang.String r1 = com.kwad.sdk.api.c.bU(r0)
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto Ld
            return r1
        Ld:
            return r0
    }
}
