package com.kwad.components.ad.reward.j.a;

public final class c extends com.kwad.components.core.webview.b.c.c implements com.kwad.components.ad.reward.j.a.e {
    private com.kwad.components.ad.reward.j.a.a xK;



    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.ad.reward.c.b r2) {
            r1 = this;
            com.kwad.components.ad.reward.j.a.a r0 = r1.xK
            if (r0 == 0) goto L7
            r0.b(r2)
        L7:
            return
    }

    @Override
    public final void a(com.kwad.sdk.components.l r2, com.kwad.sdk.core.webview.b r3) {
            r1 = this;
            super.a(r2, r3)
            com.kwad.components.ad.reward.c.f r3 = new com.kwad.components.ad.reward.c.f
            com.kwad.components.ad.reward.j.a.c$1 r0 = new com.kwad.components.ad.reward.j.a.c$1
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            com.kwad.components.core.webview.jshandler.e r3 = new com.kwad.components.core.webview.jshandler.e
            com.kwad.components.ad.reward.j.a.c$2 r0 = new com.kwad.components.ad.reward.j.a.c$2
            r0.<init>(r1)
            r3.<init>(r0)
            r2.c(r3)
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.webview.d.b.a r1) {
            r0 = this;
            super.a(r1)
            com.kwad.components.ad.reward.j.a.a r1 = r0.xK
            if (r1 == 0) goto L18
            com.kwad.components.ad.reward.j r1 = r1.jo()
            if (r1 == 0) goto L18
            com.kwad.components.ad.reward.j.a.a r1 = r0.xK
            com.kwad.components.ad.reward.j r1 = r1.jo()
            com.kwad.components.ad.reward.e.b r1 = r1.mAdOpenInteractionListener
            r1.bE()
        L18:
            return
    }

    @Override
    public final com.kwad.components.core.webview.b.h hU() {
            r5 = this;
            com.kwad.components.core.webview.b.c.b r0 = r5.Xl
            com.kwad.components.ad.reward.j.a.a r0 = (com.kwad.components.ad.reward.j.a.a) r0
            r5.xK = r0
            com.kwad.components.ad.reward.j.a.d r0 = new com.kwad.components.ad.reward.j.a.d
            com.kwad.components.ad.reward.j.a.a r1 = r5.xK
            com.kwad.components.ad.reward.j r1 = r1.jo()
            com.kwad.components.ad.reward.j.a.a r2 = r5.xK
            long r2 = r2.xI
            android.content.Context r4 = r5.getContext()
            r0.<init>(r1, r2, r4)
            return r0
    }
}
