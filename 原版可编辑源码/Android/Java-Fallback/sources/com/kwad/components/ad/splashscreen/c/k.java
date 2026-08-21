package com.kwad.components.ad.splashscreen.c;

public final class k extends com.kwad.components.ad.splashscreen.c.e implements com.kwad.sdk.core.h.c {
    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            android.content.Context r1 = r2.getContext()
            r0.S(r1)
            return
    }

    @Override
    public final void aL() {
            r0 = this;
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.a(r2)
            com.kwad.components.ad.splashscreen.monitor.a.kN()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.components.ad.splashscreen.monitor.a.E(r0)
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r0 = com.kwad.sdk.core.response.b.d.cg(r0)
            boolean r0 = com.kwad.sdk.core.response.b.a.ck(r0)
            if (r0 == 0) goto L2b
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            android.content.Context r1 = r2.getContext()
            r0.S(r1)
        L2b:
            return
    }

    @Override
    public final void onCreate() {
            r0 = this;
            super.onCreate()
            return
    }

    @Override
    public final void onUnbind() {
            r1 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r1.CM
            com.kwad.sdk.core.h.a r0 = r0.Ce
            r0.b(r1)
            return
    }
}
