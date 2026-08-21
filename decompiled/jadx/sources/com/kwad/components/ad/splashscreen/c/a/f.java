package com.kwad.components.ad.splashscreen.c.a;

/* JADX INFO: loaded from: classes2.dex */
public final class f extends com.kwad.components.ad.splashscreen.c.e {
    com.kwad.components.ad.splashscreen.f Ey = new com.kwad.components.ad.splashscreen.f() { // from class: com.kwad.components.ad.splashscreen.c.a.f.1
        @Override // com.kwad.components.ad.splashscreen.f
        public final void kz() {
            f.this.a(new e(), true);
            f.this.a(new g(), true);
        }
    };

    @Override // com.kwad.components.ad.splashscreen.c.e, com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.CM.a(this.Ey);
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onUnbind() {
        super.onUnbind();
        this.CM.b(this.Ey);
    }
}
