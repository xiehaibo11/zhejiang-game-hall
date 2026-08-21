package com.kwad.components.ad.reward;

public final class l extends com.kwad.components.ad.k.b {
    private com.kwad.components.ad.reward.c.d qp;
    private java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> qq;



    public l(com.kwad.components.ad.reward.j r1, org.json.JSONObject r2, java.lang.String r3) {
            r0 = this;
            r3 = 0
            r0.<init>(r2, r3)
            java.lang.ref.WeakReference r2 = new java.lang.ref.WeakReference
            r2.<init>(r1)
            r0.qq = r2
            return
    }

    static com.kwad.components.ad.reward.c.d a(com.kwad.components.ad.reward.l r0) {
            com.kwad.components.ad.reward.c.d r0 = r0.qp
            return r0
    }

    public final void a(com.kwad.components.ad.reward.c.d r1) {
            r0 = this;
            r0.qp = r1
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.a r8) {
            r7 = this;
            super.a(r8)
            com.kwad.components.ad.reward.h.b r0 = new com.kwad.components.ad.reward.h.b
            com.kwad.sdk.core.webview.KsAdWebView r1 = r7.cB
            android.content.Context r1 = r1.getContext()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r7.mAdTemplate
            com.kwad.components.core.playable.PlayableSource r3 = com.kwad.components.core.playable.PlayableSource.ENDCARD_CLICK
            r0.<init>(r1, r2, r3)
            r8.a(r0)
            com.kwad.components.ad.reward.c.f r0 = new com.kwad.components.ad.reward.c.f
            com.kwad.components.ad.reward.l$1 r1 = new com.kwad.components.ad.reward.l$1
            r1.<init>(r7)
            r0.<init>(r1)
            r8.a(r0)
            com.kwad.components.core.webview.jshandler.e r0 = new com.kwad.components.core.webview.jshandler.e
            com.kwad.components.ad.reward.l$2 r1 = new com.kwad.components.ad.reward.l$2
            r1.<init>(r7)
            r0.<init>(r1)
            r8.a(r0)
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r7.qq
            if (r0 == 0) goto L3a
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto L3b
        L3a:
            r0 = 0
        L3b:
            r2 = r0
            com.kwad.components.ad.reward.j.p r0 = new com.kwad.components.ad.reward.j.p
            r4 = -1
            com.kwad.sdk.core.webview.b r6 = r7.cE
            java.lang.String r3 = "native_id"
            r1 = r0
            r1.<init>(r2, r3, r4, r6)
            r8.b(r0)
            return
    }

    @Override
    public final void fD() {
            r2 = this;
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r2.qq
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            java.lang.String r1 = "end_card"
            com.kwad.components.ad.reward.monitor.a.a(r0, r1)
            return
    }

    @Override
    public final void fE() {
            r3 = this;
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r3.qq
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r3.mAdTemplate
            java.lang.String r1 = r3.o(r1)
            java.lang.String r2 = "end_card"
            com.kwad.components.ad.reward.monitor.a.a(r0, r2, r1)
            return
    }

    @Override
    public final void fF() {
            r6 = this;
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r6.qq
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            goto Lc
        Lb:
            r0 = 0
        Lc:
            if (r0 == 0) goto L10
            r0 = 1
            goto L11
        L10:
            r0 = 0
        L11:
            com.kwad.sdk.core.response.model.AdTemplate r1 = r6.mAdTemplate
            java.lang.String r1 = r6.o(r1)
            long r2 = java.lang.System.currentTimeMillis()
            long r4 = r6.getLoadTime()
            long r2 = r2 - r4
            java.lang.String r4 = "end_card"
            com.kwad.components.ad.reward.monitor.a.a(r0, r4, r1, r2)
            return
    }
}
