package com.kwad.components.ad.splashscreen.f;

public final class d extends com.kwad.components.core.widget.a.b {
    public d(android.view.View r1, int r2) {
            r0 = this;
            r0.<init>(r1, r2)
            return
    }

    @Override
    public final boolean ep() {
            r1 = this;
            com.kwad.sdk.core.c.b.AU()
            boolean r0 = com.kwad.sdk.core.c.b.isEnable()
            if (r0 == 0) goto L1c
            com.kwad.sdk.core.c.b.AU()
            boolean r0 = com.kwad.sdk.core.c.b.isAppOnForeground()
            if (r0 == 0) goto L1a
            boolean r0 = super.ep()
            if (r0 == 0) goto L1a
            r0 = 1
            return r0
        L1a:
            r0 = 0
            return r0
        L1c:
            boolean r0 = super.ep()
            return r0
    }
}
