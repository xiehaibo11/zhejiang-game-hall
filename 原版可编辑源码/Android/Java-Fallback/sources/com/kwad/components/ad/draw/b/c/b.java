package com.kwad.components.ad.draw.b.c;

public final class b extends com.kwad.components.ad.draw.a.a {
    private com.kwad.components.ad.k.b bY;
    private com.kwad.sdk.core.webview.d.a.a cH;
    private android.widget.FrameLayout cQ;


    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.draw.b.c.b$1 r0 = new com.kwad.components.ad.draw.b.c.b$1
            r0.<init>(r1)
            r1.cH = r0
            return
    }

    static com.kwad.components.ad.draw.a.b a(com.kwad.components.ad.draw.b.c.b r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    static com.kwad.components.ad.draw.a.b b(com.kwad.components.ad.draw.b.c.b r0) {
            com.kwad.components.ad.draw.a.b r0 = r0.bE
            return r0
    }

    @Override
    public final void ah() {
            r5 = this;
            super.ah()
            com.kwad.components.ad.draw.a.b r0 = r5.bE
            com.kwad.components.ad.k.b r0 = r0.bY
            r5.bY = r0
            if (r0 != 0) goto Lc
            return
        Lc:
            com.kwad.sdk.core.webview.d.a.a r1 = r5.cH
            r0.a(r1)
            com.kwad.components.ad.k.b r0 = r5.bY
            android.widget.FrameLayout r1 = r5.cQ
            com.kwad.components.ad.draw.a.b r2 = r5.bE
            com.kwad.sdk.core.view.AdBaseFrameLayout r2 = r2.mRootContainer
            com.kwad.components.ad.draw.a.b r3 = r5.bE
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.mAdTemplate
            com.kwad.components.ad.draw.a.b r4 = r5.bE
            com.kwad.components.core.e.d.c r4 = r4.mApkDownloadHelper
            r0.a(r1, r2, r3, r4)
            com.kwad.components.ad.k.b r0 = r5.bY
            r1 = 0
            r0.a(r1)
            return
    }

    @Override
    public final void onCreate() {
            r1 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_play_end_web_card_container
            android.view.View r0 = r1.findViewById(r0)
            android.widget.FrameLayout r0 = (android.widget.FrameLayout) r0
            r1.cQ = r0
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.k.b r0 = r1.bY
            if (r0 == 0) goto La
            r0.lI()
        La:
            return
    }
}
