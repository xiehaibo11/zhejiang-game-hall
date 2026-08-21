package com.kwad.components.ad.reward.m;

public abstract class s extends com.kwad.components.ad.reward.m.d {
    protected android.view.ViewGroup sw;

    public s() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(android.view.ViewGroup r2, int r3, int r4) {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            if (r0 == 0) goto L5
            return
        L5:
            android.view.View r3 = r2.findViewById(r3)
            android.view.ViewStub r3 = (android.view.ViewStub) r3
            if (r3 == 0) goto L16
            android.view.View r2 = r3.inflate()
        L11:
            android.view.ViewGroup r2 = (android.view.ViewGroup) r2
            r1.sw = r2
            return
        L16:
            android.view.View r2 = r2.findViewById(r4)
            goto L11
    }

    @Override
    public android.view.ViewGroup gQ() {
            r1 = this;
            android.view.ViewGroup r0 = r1.sw
            return r0
    }
}
