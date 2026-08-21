package com.kwad.components.core.webview.b.a;

public class p extends com.kwad.components.core.webview.b.a.v {
    private boolean IH;

    public p() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.IH = r0
            return
    }

    public final void a(com.kwad.components.core.webview.b.b.y r2) {
            r1 = this;
            boolean r0 = r1.IH
            if (r0 == 0) goto L7
            super.b(r2)
        L7:
            return
    }

    @Override
    public void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            super.a(r1, r2)
            return
    }

    public final void aO(boolean r1) {
            r0 = this;
            r1 = 0
            r0.IH = r1
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerVideoProgressListener"
            return r0
    }
}
