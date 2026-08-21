package com.kwad.components.ad.reward.presenter.f;

public final class f implements com.kwad.components.ad.reward.j.a {
    private com.kwad.components.core.webview.jshandler.am wH;
    private boolean wI;
    private boolean wJ;

    public f() {
            r0 = this;
            r0.<init>()
            return
    }

    private void jg() {
            r2 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            if (r0 == 0) goto L1b
            boolean r1 = r2.wJ
            if (r1 == 0) goto L1b
            boolean r1 = r2.wI
            if (r1 != 0) goto L18
            r0.rz()
            com.kwad.components.core.webview.jshandler.am r0 = r2.wH
            r0.rA()
            r0 = 1
            r2.wI = r0
            return
        L18:
            r0.rD()
        L1b:
            return
    }

    public final void B(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r1.a(r0)
            return
    }

    public final void C(com.kwad.components.ad.reward.j r2) {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            r0.rC()
        Lc:
            r2.b(r1)
            return
    }

    public final void b(com.kwad.components.core.webview.jshandler.am r1) {
            r0 = this;
            r0.wH = r1
            return
    }

    public final void cc() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto Lc
            r0.rB()
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            r0.rC()
        Lc:
            return
    }

    public final void eh() {
            r0 = this;
            r0.jg()
            return
    }

    @Override
    public final void gj() {
            r1 = this;
            r0 = 1
            r1.wJ = r0
            return
    }

    @Override
    public final void gk() {
            r1 = this;
            r0 = 1
            r1.wJ = r0
            r1.jg()
            return
    }

    @Override
    public final void gl() {
            r1 = this;
            r0 = 0
            r1.wJ = r0
            com.kwad.components.core.webview.jshandler.am r0 = r1.wH
            if (r0 == 0) goto La
            r0.rE()
        La:
            return
    }

    @Override
    public final void gm() {
            r1 = this;
            r0 = 0
            r1.wJ = r0
            return
    }

    public final boolean iS() {
            r1 = this;
            boolean r0 = r1.wJ
            return r0
    }
}
