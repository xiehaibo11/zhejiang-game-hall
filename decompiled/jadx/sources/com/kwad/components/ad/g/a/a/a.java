package com.kwad.components.ad.g.a.a;

import com.kwad.sdk.core.webview.c.c;

/* JADX INFO: loaded from: classes2.dex */
public final class a implements com.kwad.sdk.core.webview.c.a {
    private c nA;

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, c cVar) {
        this.nA = cVar;
    }

    public final void eW() {
        c cVar = this.nA;
        if (cVar != null) {
            cVar.a(null);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerPlayStateResetListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.nA = null;
    }
}
