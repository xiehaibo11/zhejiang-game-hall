package com.kwad.sdk.core.h;

public abstract class b implements c {
    private boolean ayd = false;
    private boolean KW = false;
    private boolean KX = false;

    @Override
    public final void aK() {
        this.ayd = true;
        if (this.KX) {
            return;
        }
        af();
        this.KX = true;
    }

    @Override
    public final void aL() {
        if (this.ayd && !this.KW) {
            ag();
            this.KW = true;
        }
    }

    protected abstract void af();

    protected abstract void ag();
}
