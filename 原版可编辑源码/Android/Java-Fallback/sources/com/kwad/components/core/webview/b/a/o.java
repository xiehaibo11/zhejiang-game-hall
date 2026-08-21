package com.kwad.components.core.webview.b.a;

public class o extends com.kwad.components.core.webview.b.a.v {
    private com.kwad.components.core.webview.b.a.o.a WF;

    public interface a {
        boolean isMuted();
    }

    public o() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.core.webview.b.a.o.a r1) {
            r0 = this;
            r0.WF = r1
            return
    }

    @Override
    public void a(java.lang.String r2, com.kwad.sdk.core.webview.c.c r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.core.webview.b.a.o$a r2 = r1.WF
            if (r2 == 0) goto L17
            com.kwad.components.core.webview.b.b.m r2 = new com.kwad.components.core.webview.b.b.m
            r2.<init>()
            com.kwad.components.core.webview.b.a.o$a r0 = r1.WF
            boolean r0 = r0.isMuted()
            r2.Xa = r0
            r3.a(r2)
        L17:
            return
    }

    public final void c(com.kwad.components.core.webview.b.b.m r1) {
            r0 = this;
            super.b(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerMuteStateListener"
            return r0
    }
}
