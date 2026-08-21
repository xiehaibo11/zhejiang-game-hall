package com.kwad.components.ad.splashscreen.c.a;

public final class f extends com.kwad.components.ad.splashscreen.c.e {
    com.kwad.components.ad.splashscreen.f Ey = new com.kwad.components.ad.splashscreen.f() {
        @Override
        public final void kz() {
            f.this.a(new e(), true);
            f.this.a(new g(), true);
        }
    };

    @Override
    public final void ah() {
        super.ah();
        this.CM.a(this.Ey);
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        this.CM.b(this.Ey);
    }
}
