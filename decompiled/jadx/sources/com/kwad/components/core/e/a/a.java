package com.kwad.components.core.e.a;

import com.kwad.components.core.webview.jshandler.am;

/* JADX INFO: loaded from: classes2.dex */
public final class a extends com.kwad.sdk.mvp.a {
    public g IS;
    public com.kwad.components.core.widget.a.b IT;
    public d IU;
    public am cG;

    public final void bt() {
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rz();
            this.cG.rA();
        }
    }

    public final void mK() {
        am amVar = this.cG;
        if (amVar != null) {
            amVar.rB();
            this.cG.rC();
        }
    }

    @Override // com.kwad.sdk.mvp.a
    public final void release() {
    }
}
