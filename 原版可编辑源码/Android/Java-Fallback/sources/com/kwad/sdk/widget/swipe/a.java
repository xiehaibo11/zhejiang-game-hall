package com.kwad.sdk.widget.swipe;

public abstract class a {
    private boolean aMv;

    protected abstract boolean KK();

    protected abstract boolean KL();

    public final boolean b(android.view.View r1, android.view.MotionEvent r2) {
            r0 = this;
            boolean r1 = r0.aMv
            if (r1 != 0) goto Lc
            boolean r1 = r0.KK()
            if (r1 == 0) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }

    public final boolean c(android.view.View r1, android.view.MotionEvent r2) {
            r0 = this;
            boolean r1 = r0.aMv
            if (r1 != 0) goto Lc
            boolean r1 = r0.KL()
            if (r1 == 0) goto Lc
            r1 = 1
            return r1
        Lc:
            r1 = 0
            return r1
    }
}
