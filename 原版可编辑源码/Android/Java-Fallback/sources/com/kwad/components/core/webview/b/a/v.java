package com.kwad.components.core.webview.b.a;

public abstract class v implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c WJ;
    private java.util.concurrent.CopyOnWriteArrayList<com.kwad.sdk.core.b> WK;


    public v() {
            r1 = this;
            r1.<init>()
            java.util.concurrent.CopyOnWriteArrayList r0 = new java.util.concurrent.CopyOnWriteArrayList
            r0.<init>()
            r1.WK = r0
            return
    }

    static com.kwad.sdk.core.webview.c.c a(com.kwad.components.core.webview.b.a.v r0) {
            com.kwad.sdk.core.webview.c.c r0 = r0.WJ
            return r0
    }

    @Override
    public void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            r1.WJ = r3
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.sdk.core.b> r2 = r1.WK
            int r2 = r2.size()
            if (r2 <= 0) goto L25
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.sdk.core.b> r2 = r1.WK
            java.util.Iterator r2 = r2.iterator()
        L10:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L25
            java.lang.Object r3 = r2.next()
            com.kwad.sdk.core.b r3 = (com.kwad.sdk.core.b) r3
            r1.b(r3)
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.sdk.core.b> r0 = r1.WK
            r0.remove(r3)
            goto L10
        L25:
            return
    }

    public final void b(com.kwad.sdk.core.b r2) {
            r1 = this;
            com.kwad.sdk.core.webview.c.c r0 = r1.WJ
            if (r0 == 0) goto Ld
            com.kwad.components.core.webview.b.a.v$1 r0 = new com.kwad.components.core.webview.b.a.v$1
            r0.<init>(r1, r2)
            com.kwad.sdk.utils.bj.runOnUiThread(r0)
            return
        Ld:
            java.util.concurrent.CopyOnWriteArrayList<com.kwad.sdk.core.b> r0 = r1.WK
            r0.add(r2)
            return
    }

    @Override
    public void onDestroy() {
            r1 = this;
            r0 = 0
            r1.WJ = r0
            return
    }
}
