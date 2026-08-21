package com.kwad.components.ad.reward.j;

public final class p extends com.kwad.components.core.webview.jshandler.ab {
    private java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> qq;
    private long xC;
    private java.lang.String xD;


    public p(com.kwad.components.ad.reward.j r3, java.lang.String r4, long r5, com.kwad.sdk.core.webview.b r7) {
            r2 = this;
            r2.<init>(r7)
            r0 = -1
            r2.xC = r0
            r2.xD = r4
            r2.xC = r5
            if (r3 == 0) goto L14
            java.lang.ref.WeakReference r4 = new java.lang.ref.WeakReference
            r4.<init>(r3)
            r2.qq = r4
        L14:
            return
    }

    private static boolean U(java.lang.String r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L11
            r0.<init>(r1)     // Catch: java.lang.Exception -> L11
            java.lang.String r1 = "elementType"
            int r1 = r0.optInt(r1)     // Catch: java.lang.Exception -> L11
            r0 = 18
            if (r1 != r0) goto L11
            r1 = 1
            return r1
        L11:
            r1 = 0
            return r1
    }

    static java.lang.String a(com.kwad.components.ad.reward.j.p r0) {
            java.lang.String r0 = r0.xD
            return r0
    }

    private boolean b(com.kwad.components.core.webview.jshandler.ab.b r4) {
            r3 = this;
            int r0 = r4.getActionType()
            r1 = 140(0x8c, float:1.96E-43)
            if (r0 != r1) goto L36
            boolean r0 = com.kwad.sdk.core.config.d.xN()
            if (r0 == 0) goto L36
            java.lang.String r4 = r4.rw()
            boolean r4 = U(r4)
            if (r4 == 0) goto L36
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r4 = r3.qq
            if (r4 == 0) goto L36
            java.lang.Object r4 = r4.get()
            if (r4 == 0) goto L36
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r4 = r3.qq
            java.lang.Object r4 = r4.get()
            com.kwad.components.ad.reward.j r4 = (com.kwad.components.ad.reward.j) r4
            com.kwad.components.ad.reward.j.p$1 r0 = new com.kwad.components.ad.reward.j.p$1
            r0.<init>(r3, r4)
            r1 = 1500(0x5dc, double:7.41E-321)
            com.kwad.sdk.utils.bj.runOnUiThreadDelay(r0, r1)
            r4 = 1
            return r4
        L36:
            r4 = 0
            return r4
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ab.b r2) {
            r1 = this;
            boolean r0 = r1.b(r2)
            if (r0 != 0) goto L9
            super.a(r2)
        L9:
            return
    }

    @Override
    public final void a(com.kwad.sdk.core.report.j r5) {
            r4 = this;
            super.a(r5)
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r4.qq
            if (r0 == 0) goto L1f
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto L1f
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r0 = r4.qq
            java.lang.Object r0 = r0.get()
            com.kwad.components.ad.reward.j r0 = (com.kwad.components.ad.reward.j) r0
            com.kwad.components.ad.reward.l.d r0 = r0.oV
            long r0 = r0.getPlayDuration()
            r5.af(r0)
            return
        L1f:
            long r0 = r4.xC
            r2 = 0
            int r2 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r2 <= 0) goto L2a
            r5.af(r0)
        L2a:
            return
    }
}
