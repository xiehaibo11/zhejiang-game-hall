package com.kwad.components.ad.reward.j.a;

public final class b extends com.kwad.components.core.webview.b.c.d {
    private static java.lang.ref.WeakReference<com.kwad.components.ad.reward.j.a.b> xJ;
    private com.kwad.components.ad.reward.j xG;
    private long xI;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.kwad.components.ad.reward.j.a.b a(com.kwad.components.ad.reward.j.a.b r2, android.app.Activity r3, long r4, com.kwad.components.core.webview.b.e.c r6, com.kwad.components.core.webview.b.c.d.a r7) {
            r0 = 0
            if (r3 == 0) goto L2f
            boolean r1 = r3.isFinishing()
            if (r1 == 0) goto La
            goto L2f
        La:
            boolean r1 = jp()
            if (r1 == 0) goto L11
            return r0
        L11:
            r2.QM = r6
            r2.Xp = r7
            android.app.FragmentManager r3 = r3.getFragmentManager()
            java.lang.String r6 = "tkCloseDialog"
            r2.show(r3, r6)
            r6 = 0
            int r3 = (r4 > r6 ? 1 : (r4 == r6 ? 0 : -1))
            if (r3 <= 0) goto L27
            r2.k(r4)
        L27:
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            com.kwad.components.ad.reward.j.a.b.xJ = r3
            return r2
        L2f:
            return r0
    }

    public static com.kwad.components.ad.reward.j.a.b a(com.kwad.components.ad.reward.j r2, android.app.Activity r3, long r4, android.content.DialogInterface.OnDismissListener r6, com.kwad.components.core.webview.b.e.c r7) {
            r0 = 0
            if (r3 == 0) goto L3d
            boolean r1 = r3.isFinishing()
            if (r1 == 0) goto La
            goto L3d
        La:
            boolean r1 = jp()
            if (r1 == 0) goto L11
            return r0
        L11:
            com.kwad.components.core.webview.b.c.d$b r0 = new com.kwad.components.core.webview.b.c.d$b
            r0.<init>()
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            java.lang.String r1 = "ksad-video-secondclick-card"
            r0.aO(r1)
            com.kwad.components.ad.reward.j.a.b r2 = a(r2, r0)
            r2.QM = r7
            r2.d(r6)
            r2.k(r4)
            android.app.FragmentManager r3 = r3.getFragmentManager()
            java.lang.String r4 = "tkExtraReward"
            r2.show(r3, r4)
            java.lang.ref.WeakReference r3 = new java.lang.ref.WeakReference
            r3.<init>(r2)
            com.kwad.components.ad.reward.j.a.b.xJ = r3
            return r2
        L3d:
            return r0
    }

    public static com.kwad.components.ad.reward.j.a.b a(com.kwad.components.ad.reward.j r2, com.kwad.components.core.webview.b.c.d.b r3) {
            com.kwad.components.ad.reward.j.a.b r0 = new com.kwad.components.ad.reward.j.a.b
            r0.<init>()
            r0.xG = r2
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.getAdTemplate()
            r0.mAdTemplate = r2
            java.lang.String r2 = r3.getTemplateId()
            r0.xD = r2
            boolean r2 = r3.rZ()
            r0.Xo = r2
            boolean r2 = r3.sa()
            r0.Xw = r2
            android.os.Bundle r2 = new android.os.Bundle
            r2.<init>()
            java.lang.String r3 = r3.getTemplateId()
            java.lang.String r1 = "templateId"
            r2.putString(r1, r3)
            r0.setArguments(r2)
            return r0
    }

    private static boolean jp() {
            java.lang.ref.WeakReference<com.kwad.components.ad.reward.j.a.b> r0 = com.kwad.components.ad.reward.j.a.b.xJ
            if (r0 == 0) goto Lc
            java.lang.Object r0 = r0.get()
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            r0 = 0
            return r0
    }

    private void k(long r2) {
            r1 = this;
            r1.xI = r2
            com.kwad.components.core.webview.b.c.b r0 = r1.Xl
            if (r0 == 0) goto La
            com.kwad.components.core.webview.b.c.b r0 = r1.Xl
            r0.xI = r2
        La:
            return
    }

    @Override
    public final com.kwad.components.core.webview.b.c.b jq() {
            r2 = this;
            com.kwad.components.ad.reward.j.a.a r0 = new com.kwad.components.ad.reward.j.a.a
            com.kwad.components.ad.reward.j r1 = r2.xG
            r0.<init>(r1)
            return r0
    }

    @Override
    public final com.kwad.components.core.webview.b.c.c jr() {
            r1 = this;
            com.kwad.components.ad.reward.j.a.c r0 = new com.kwad.components.ad.reward.j.a.c
            r0.<init>()
            return r0
    }

    @Override
    public final void js() {
            r3 = this;
            super.js()
            com.kwad.components.core.webview.b.c.b r0 = r3.Xl
            long r1 = r3.xI
            r0.xI = r1
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r0 = 0
            r1.xG = r0
            com.kwad.components.ad.reward.j.a.b.xJ = r0
            return
    }
}
