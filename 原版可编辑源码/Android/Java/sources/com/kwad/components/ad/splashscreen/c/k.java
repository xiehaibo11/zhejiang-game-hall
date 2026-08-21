package com.kwad.components.ad.splashscreen.c;

public final class k extends e implements com.kwad.sdk.core.h.c {
    @Override
    public final void aK() {
        this.CM.S(getContext());
    }

    @Override
    public final void aL() {
    }

    @Override
    public final void ah() {
        super.ah();
        this.CM.Ce.a(this);
        com.kwad.components.ad.splashscreen.monitor.a.kN();
        com.kwad.components.ad.splashscreen.monitor.a.E(this.CM.mAdTemplate);
        if (com.kwad.sdk.core.response.b.a.ck(com.kwad.sdk.core.response.b.d.cg(this.CM.mAdTemplate))) {
            this.CM.S(getContext());
        }
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.CM.Ce.b(this);
    }
}
