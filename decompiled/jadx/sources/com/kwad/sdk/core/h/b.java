package com.kwad.sdk.core.h;

/* JADX INFO: loaded from: classes2.dex */
public abstract class b implements c {
    private boolean ayd = false;
    private boolean KW = false;
    private boolean KX = false;

    @Override // com.kwad.sdk.core.h.c
    public final void aK() {
        this.ayd = true;
        if (this.KX) {
            return;
        }
        af();
        this.KX = true;
    }

    @Override // com.kwad.sdk.core.h.c
    public final void aL() {
        if (this.ayd && !this.KW) {
            ag();
            this.KW = true;
        }
    }

    protected abstract void af();

    protected abstract void ag();
}
