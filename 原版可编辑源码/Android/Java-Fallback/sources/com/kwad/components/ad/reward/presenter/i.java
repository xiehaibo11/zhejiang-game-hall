package com.kwad.components.ad.reward.presenter;

public final class i extends com.kwad.components.ad.reward.presenter.a {


    public i() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.reward.j r0 = r2.qx     // Catch: java.lang.Throwable -> Lb
            com.kwad.components.ad.reward.l.d r0 = r0.oV     // Catch: java.lang.Throwable -> Lb
            r0.jN()     // Catch: java.lang.Throwable -> Lb
            return
        Lb:
            r0 = move-exception
            com.kwad.components.ad.reward.presenter.i$1 r1 = new com.kwad.components.ad.reward.presenter.i$1
            r1.<init>(r2, r0)
            com.kwad.sdk.utils.bj.postOnUiThread(r1)
            return
    }
}
