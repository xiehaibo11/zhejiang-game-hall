package com.kwad.components.ad.reward.j;

public final class q extends com.kwad.components.core.webview.jshandler.o {
    private long vy;
    private java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> xF;

    public q(com.kwad.sdk.core.webview.b r1, com.kwad.components.core.e.d.c r2, com.kwad.components.ad.reward.j r3, long r4, com.kwad.sdk.core.webview.d.a.a r6, android.content.DialogInterface.OnDismissListener r7) {
            r0 = this;
            r0.<init>(r1, r2, r6, r7)
            r1 = -1
            r0.vy = r1
            r0.vy = r4
            if (r3 == 0) goto L12
            java.lang.ref.WeakReference r1 = new java.lang.ref.WeakReference
            r1.<init>(r3)
            r0.xF = r1
        L12:
            return
    }

    @Override
    public final com.kwad.sdk.core.report.z.b a(com.kwad.sdk.core.webview.d.b.a r5, com.kwad.sdk.core.response.model.AdTemplate r6) {
            r4 = this;
            com.kwad.sdk.core.report.z$b r5 = super.a(r5, r6)
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r6 = r4.xF
            if (r6 == 0) goto L1d
            java.lang.Object r6 = r6.get()
            if (r6 == 0) goto L1d
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j> r6 = r4.xF
            java.lang.Object r6 = r6.get()
            com.kwad.components.ad.reward.j r6 = (com.kwad.components.ad.reward.j) r6
            com.kwad.components.ad.reward.l.d r6 = r6.oV
            long r0 = r6.getPlayDuration()
            goto L25
        L1d:
            long r0 = r4.vy
            r2 = 0
            int r6 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r6 <= 0) goto L27
        L25:
            r5.vy = r0
        L27:
            return r5
    }

    @Override
    public final void jn() {
            r3 = this;
            super.jn()
            com.kwad.sdk.core.webview.b r0 = r3.TL
            if (r0 == 0) goto L16
            com.kwad.components.ad.reward.c.a r0 = com.kwad.components.ad.reward.c.a.gW()
            com.kwad.sdk.core.webview.b r1 = r3.TL
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
            int r2 = com.kwad.components.ad.reward.c.b.STATUS_NONE
            r0.d(r1, r2)
        L16:
            return
    }
}
