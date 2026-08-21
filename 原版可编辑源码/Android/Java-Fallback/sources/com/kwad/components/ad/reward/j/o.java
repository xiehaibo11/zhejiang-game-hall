package com.kwad.components.ad.reward.j;

public final class o extends com.kwad.components.core.webview.b.a.v implements com.kwad.components.core.webview.jshandler.ah.b {
    private com.kwad.components.core.playable.a oX;

    public o(com.kwad.components.ad.reward.j r1) {
            r0 = this;
            r0.<init>()
            com.kwad.components.core.playable.a r1 = r1.oX
            r0.oX = r1
            if (r1 == 0) goto Lc
            r1.a(r0)
        Lc:
            return
    }

    @Override
    public final void a(com.kwad.components.core.webview.jshandler.ah.a r1) {
            r0 = this;
            r0.b(r1)
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerPlayableStatusListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.kwad.components.core.playable.a r0 = r1.oX
            if (r0 == 0) goto Ld
            r0.b(r1)
            r0 = 0
            r1.oX = r0
        Ld:
            return
    }
}
