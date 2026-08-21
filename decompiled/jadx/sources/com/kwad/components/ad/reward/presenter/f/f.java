package com.kwad.components.ad.reward.presenter.f;

import com.kwad.components.ad.reward.j;
import com.kwad.components.core.webview.jshandler.am;

/* JADX INFO: loaded from: classes2.dex */
public final class f implements j.a {
    private am wH;
    private boolean wI;
    private boolean wJ;

    private void jg() {
        am amVar = this.wH;
        if (amVar == null || !this.wJ) {
            return;
        }
        if (this.wI) {
            amVar.rD();
            return;
        }
        amVar.rz();
        this.wH.rA();
        this.wI = true;
    }

    public final void B(com.kwad.components.ad.reward.j jVar) {
        jVar.a(this);
    }

    public final void C(com.kwad.components.ad.reward.j jVar) {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
        jVar.b(this);
    }

    public final void b(am amVar) {
        this.wH = amVar;
    }

    public final void cc() {
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rB();
            this.wH.rC();
        }
    }

    public final void eh() {
        jg();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gj() {
        this.wJ = true;
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gk() {
        this.wJ = true;
        jg();
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gl() {
        this.wJ = false;
        am amVar = this.wH;
        if (amVar != null) {
            amVar.rE();
        }
    }

    @Override // com.kwad.components.ad.reward.j.a
    public final void gm() {
        this.wJ = false;
    }

    public final boolean iS() {
        return this.wJ;
    }
}
