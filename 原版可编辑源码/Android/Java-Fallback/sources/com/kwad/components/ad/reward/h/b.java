package com.kwad.components.ad.reward.h;

public final class b extends com.kwad.components.core.webview.jshandler.av implements com.kwad.components.core.webview.jshandler.av.a {
    private com.kwad.components.core.playable.PlayableSource rX;

    public b(android.content.Context r1, com.kwad.sdk.core.response.model.AdTemplate r2, com.kwad.components.core.playable.PlayableSource r3) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.rX = r3
            r0.a(r0)
            return
    }

    @Override
    public final boolean dw() {
            r4 = this;
            com.kwad.components.ad.reward.b r0 = com.kwad.components.ad.reward.b.fp()
            com.kwad.components.core.playable.PlayableSource r1 = r4.rX
            com.kwad.components.ad.reward.h.a r2 = new com.kwad.components.ad.reward.h.a
            android.content.Context r3 = r4.mContext
            r2.<init>(r3)
            r0.c(r1, r2)
            r0 = 0
            return r0
    }
}
