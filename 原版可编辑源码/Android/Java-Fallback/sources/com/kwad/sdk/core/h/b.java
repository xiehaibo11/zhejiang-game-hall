package com.kwad.sdk.core.h;

public abstract class b implements com.kwad.sdk.core.h.c {
    private boolean KW;
    private boolean KX;
    private boolean ayd;

    public b() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.ayd = r0
            r1.KW = r0
            r1.KX = r0
            return
    }

    @Override
    public final void aK() {
            r2 = this;
            r0 = 1
            r2.ayd = r0
            boolean r1 = r2.KX
            if (r1 != 0) goto Lc
            r2.af()
            r2.KX = r0
        Lc:
            return
    }

    @Override
    public final void aL() {
            r1 = this;
            boolean r0 = r1.ayd
            if (r0 != 0) goto L5
            return
        L5:
            boolean r0 = r1.KW
            if (r0 != 0) goto Lf
            r1.ag()
            r0 = 1
            r1.KW = r0
        Lf:
            return
    }

    protected abstract void af();

    protected abstract void ag();
}
