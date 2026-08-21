package com.kwad.components.ad.reward;

public final class g extends com.kwad.components.ad.k.b {
    private java.util.List<com.kwad.sdk.core.response.model.AdTemplate> oN;
    private boolean oO;
    private java.util.List<com.kwad.components.core.e.d.c> oP;
    private com.kwad.components.core.webview.jshandler.n.b oQ;


    public g(java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r2, org.json.JSONObject r3, com.kwad.components.core.webview.jshandler.n.b r4) {
            r1 = this;
            r0 = 0
            r1.<init>(r3, r0)
            r3 = 0
            r1.oO = r3
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>()
            r1.oP = r3
            r1.oN = r2
            r1.oQ = r4
            if (r2 == 0) goto L37
            int r2 = r2.size()
            if (r2 <= 0) goto L37
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r2 = r1.oN
            java.util.Iterator r2 = r2.iterator()
        L20:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L37
            java.lang.Object r3 = r2.next()
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            r4.<init>(r3)
            java.util.List<com.kwad.components.core.e.d.c> r3 = r1.oP
            r3.add(r4)
            goto L20
        L37:
            return
    }

    @Override
    public final void a(android.widget.FrameLayout r7, com.kwad.sdk.core.view.AdBaseFrameLayout r8, com.kwad.sdk.core.response.model.AdTemplate r9, com.kwad.components.core.e.d.c r10, int r11) {
            r6 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3 = r6.oN
            java.util.List<com.kwad.components.core.e.d.c> r4 = r6.oP
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r11
            super.a(r1, r2, r3, r4, r5)
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.a r5) {
            r4 = this;
            super.a(r5)
            java.util.ArrayList r0 = new java.util.ArrayList
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r1 = r4.oN
            int r2 = r1.size()
            r3 = 1
            int r2 = r2 - r3
            java.util.List r1 = r1.subList(r3, r2)
            r0.<init>(r1)
            com.kwad.components.core.webview.jshandler.n r1 = new com.kwad.components.core.webview.jshandler.n
            r1.<init>(r0)
            com.kwad.components.core.webview.jshandler.n$b r0 = r4.oQ
            r1.a(r0)
            r5.a(r1)
            return
    }

    @Override
    public final void b(com.kwad.sdk.core.webview.b r2) {
            r1 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r1.oN
            r2.setAdTemplateList(r0)
            return
    }

    @Override
    public final boolean bv() {
            r1 = this;
            boolean r0 = r1.oO
            if (r0 == 0) goto L7
            boolean r0 = r1.Hd
            return r0
        L7:
            boolean r0 = super.bv()
            return r0
    }

    @Override
    public final void fA() {
            r2 = this;
            super.fA()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.cB
            com.kwad.components.ad.reward.g$1 r1 = new com.kwad.components.ad.reward.g$1
            r1.<init>(r2)
            r0.setOnTouchListener(r1)
            return
    }

    @Override
    public final boolean fB() {
            r1 = this;
            r0 = 0
            return r0
    }

    public final void fC() {
            r1 = this;
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            if (r0 == 0) goto L9
            com.kwad.components.core.webview.jshandler.am r0 = r1.cG
            r0.rA()
        L9:
            return
    }

    @Override
    public final void fD() {
            r2 = this;
            r0 = 1
            java.lang.String r1 = "middle_play_end_card"
            com.kwad.components.ad.reward.monitor.a.a(r0, r1)
            return
    }

    @Override
    public final void fE() {
            r3 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r3.mAdTemplate
            java.lang.String r0 = r3.o(r0)
            r1 = 1
            java.lang.String r2 = "middle_play_end_card"
            com.kwad.components.ad.reward.monitor.a.a(r1, r2, r0)
            return
    }

    @Override
    public final void fF() {
            r5 = this;
            com.kwad.sdk.core.response.model.AdTemplate r0 = r5.mAdTemplate
            java.lang.String r0 = r5.o(r0)
            long r1 = java.lang.System.currentTimeMillis()
            long r3 = r5.getLoadTime()
            long r1 = r1 - r3
            r3 = 1
            java.lang.String r4 = "middle_play_end_card"
            com.kwad.components.ad.reward.monitor.a.a(r3, r4, r0, r1)
            return
    }

    @Override
    public final java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = "MiddlePlayEndCard"
            return r0
    }

    @Override
    public final java.lang.String o(com.kwad.sdk.core.response.model.AdTemplate r3) {
            r2 = this;
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r0 = r2.oN
            if (r0 == 0) goto L24
            int r0 = r0.size()
            r1 = 2
            if (r0 >= r1) goto Lc
            goto L24
        Lc:
            java.util.List<com.kwad.sdk.core.response.model.AdTemplate> r3 = r2.oN
            r0 = 1
            java.lang.Object r3 = r3.get(r0)
            com.kwad.sdk.core.response.model.AdTemplate r3 = (com.kwad.sdk.core.response.model.AdTemplate) r3
            java.lang.String r3 = com.kwad.sdk.core.response.b.b.aZ(r3)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "getUrl: "
            r0.<init>(r1)
            r0.append(r3)
            return r3
        L24:
            java.lang.String r3 = super.o(r3)
            return r3
    }

    public final void z(boolean r1) {
            r0 = this;
            r0.oO = r1
            return
    }
}
