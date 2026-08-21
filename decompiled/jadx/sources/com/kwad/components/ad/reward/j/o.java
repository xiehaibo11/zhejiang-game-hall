package com.kwad.components.ad.reward.j;

import com.kwad.components.core.webview.b.a.v;
import com.kwad.components.core.webview.jshandler.ah;

/* JADX INFO: loaded from: classes2.dex */
public final class o extends v implements ah.b {
    private com.kwad.components.core.playable.a oX;

    public o(com.kwad.components.ad.reward.j jVar) {
        com.kwad.components.core.playable.a aVar = jVar.oX;
        this.oX = aVar;
        if (aVar != null) {
            aVar.a(this);
        }
    }

    @Override // com.kwad.components.core.webview.jshandler.ah.b
    public final void a(ah.a aVar) {
        b(aVar);
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerPlayableStatusListener";
    }

    @Override // com.kwad.components.core.webview.b.a.v, com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        super.onDestroy();
        com.kwad.components.core.playable.a aVar = this.oX;
        if (aVar != null) {
            aVar.b(this);
            this.oX = null;
        }
    }
}
