package com.kwad.sdk.utils;

public final class af {
    private java.util.Map<java.lang.String, com.kwad.sdk.core.webview.a> aIP;
    private java.util.Map<java.lang.String, com.kwad.sdk.core.webview.c.c> aIQ;

    public final void a(java.lang.String r2, com.kwad.sdk.core.webview.a r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.a> r0 = r1.aIP
            r0.put(r2, r3)
            return
    }

    public final void b(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.c.c> r0 = r1.aIQ
            r0.put(r2, r3)
            return
    }

    public final com.kwad.sdk.core.webview.a fy(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.a> r0 = r1.aIP
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.core.webview.a r2 = (com.kwad.sdk.core.webview.a) r2
            return r2
    }

    public final com.kwad.sdk.core.webview.c.c fz(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.c.c> r0 = r1.aIQ
            java.lang.Object r2 = r0.get(r2)
            com.kwad.sdk.core.webview.c.c r2 = (com.kwad.sdk.core.webview.c.c) r2
            return r2
    }

    public final void release() {
            r2 = this;
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.a> r0 = r2.aIP
            java.util.Collection r0 = r0.values()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L1a
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.core.webview.a r1 = (com.kwad.sdk.core.webview.a) r1
            r1.nL()
            goto La
        L1a:
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.a> r0 = r2.aIP
            r0.clear()
            java.util.Map<java.lang.String, com.kwad.sdk.core.webview.c.c> r0 = r2.aIQ
            r0.clear()
            return
    }
}
