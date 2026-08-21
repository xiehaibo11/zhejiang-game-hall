package com.kwad.components.ad.reward.presenter;

import com.kwad.sdk.mvp.Presenter;

public class a extends Presenter {
    public com.kwad.components.ad.reward.j qx;

    @Override
    public void ah() {
        super.ah();
        this.qx = (com.kwad.components.ad.reward.j) Gk();
    }

    protected final void hw() {
        this.qx.hw();
    }

    protected final boolean hx() {
        return com.kwad.sdk.core.response.b.a.aV(com.kwad.sdk.core.response.b.d.cg(this.qx.mAdTemplate));
    }
}
