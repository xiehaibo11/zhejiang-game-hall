package com.kwad.components.ad.splashscreen.c.a;

public final class f extends com.kwad.components.ad.splashscreen.c.e {
    com.kwad.components.ad.splashscreen.f Ey;


    public f() {
            r1 = this;
            r1.<init>()
            com.kwad.components.ad.splashscreen.c.a.f$1 r0 = new com.kwad.components.ad.splashscreen.c.a.f$1
            r0.<init>(r1)
            r1.Ey = r0
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.f r1 = r2.Ey
            r0.a(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r2 = this;
            super.onUnbind()
            com.kwad.components.ad.splashscreen.h r0 = r2.CM
            com.kwad.components.ad.splashscreen.f r1 = r2.Ey
            r0.b(r1)
            return
    }
}
