package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.b.a.v;
import com.kwad.components.core.webview.jshandler.ah;

public final class o extends v implements ah.b {
    private com.kwad.components.core.playable.a oX;

    public o(com.kwad.components.ad.reward.j jVar) {
        com.kwad.components.core.playable.a aVar = jVar.oX;
        this.oX = aVar;
        if (aVar != null) {
            aVar.a(this);
        }
    }

    @Override
    public final void a(ah.a aVar) {
        b(aVar);
    }

    @Override
    public final String getKey() {
        return "registerPlayableStatusListener";
    }

    @Override
    public final void onDestroy() {
        super.onDestroy();
        com.kwad.components.core.playable.a aVar = this.oX;
        if (aVar != null) {
            aVar.b(this);
            this.oX = null;
        }
    }
}
