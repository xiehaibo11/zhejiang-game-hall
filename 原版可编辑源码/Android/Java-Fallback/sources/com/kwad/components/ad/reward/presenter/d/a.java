package com.kwad.components.ad.reward.presenter.d;

public class a extends com.kwad.components.ad.reward.presenter.a implements com.kwad.components.ad.reward.e.f, com.kwad.components.ad.reward.e.h {
    private com.kwad.components.core.webview.b.e.e gt;


    public a() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.reward.presenter.d.a$1 r0 = new com.kwad.components.ad.reward.presenter.d.a$1
            r0.<init>(r1)
            r1.gt = r0
            r1.cb()
            return
    }

    private int a(com.kwad.components.ad.reward.e.f r2) {
            r1 = this;
            int r0 = r1.getPriority()
            int r2 = r2.getPriority()
            int r0 = r0 - r2
            return r0
    }

    static com.kwad.components.ad.reward.j a(com.kwad.components.ad.reward.presenter.d.a r0) {
            com.kwad.components.ad.reward.j r0 = r0.qx
            return r0
    }

    static void b(com.kwad.components.ad.reward.presenter.d.a r0) {
            r0.bU()
            return
    }

    private void bU() {
            r1 = this;
            com.kwad.components.ad.reward.j r0 = r1.qx
            r0.b(r1)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.a(r1)
            return
    }

    private void es() {
            r3 = this;
            java.util.List r0 = r3.Gj()
            if (r0 != 0) goto L7
            return
        L7:
            java.util.Iterator r0 = r0.iterator()
        Lb:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L21
            java.lang.Object r1 = r0.next()
            com.kwad.sdk.mvp.Presenter r1 = (com.kwad.sdk.mvp.Presenter) r1
            boolean r2 = r1 instanceof com.kwad.components.ad.reward.presenter.d.b.c
            if (r2 == 0) goto Lb
            com.kwad.components.ad.reward.presenter.d.b.c r1 = (com.kwad.components.ad.reward.presenter.d.b.c) r1
            r1.iJ()
            goto Lb
        L21:
            return
    }

    @Override
    public final void a(com.kwad.components.core.playable.PlayableSource r1, com.kwad.components.ad.reward.e.l r2) {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx
            boolean r0 = com.kwad.components.ad.reward.j.b(r0)
            if (r0 == 0) goto L15
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.a(r1)
            return
        L15:
            r2.bU()
            return
    }

    @Override
    public final void bD() {
            r0 = this;
            r0.es()
            return
    }

    @Override
    public final void bS() {
            r0 = this;
            return
    }

    @Override
    public final void bT() {
            r0 = this;
            r0.es()
            return
    }

    protected void cb() {
            r1 = this;
            com.kwad.components.ad.reward.presenter.d.b.d r0 = new com.kwad.components.ad.reward.presenter.d.b.d
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.d.b.a r0 = new com.kwad.components.ad.reward.presenter.d.b.a
            r0.<init>()
            r1.a(r0)
            com.kwad.components.ad.reward.presenter.d.b.b r0 = new com.kwad.components.ad.reward.presenter.d.b.b
            r0.<init>()
            r1.a(r0)
            return
    }

    @Override
    public int compareTo(com.kwad.components.ad.reward.e.f r1) {
            r0 = this;
            com.kwad.components.ad.reward.e.f r1 = (com.kwad.components.ad.reward.e.f) r1
            int r1 = r0.a(r1)
            return r1
    }

    @Override
    public final int getPriority() {
            r1 = this;
            r0 = 0
            return r0
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.core.webview.b.d.b r0 = com.kwad.components.core.webview.b.d.b.sf()
            com.kwad.components.core.webview.b.e.e r1 = r2.gt
            r0.b(r1)
            com.kwad.components.ad.reward.j r0 = r2.qx
            r0.c(r2)
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            r0.b(r2)
            return
    }
}
