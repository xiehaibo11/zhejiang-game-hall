package com.kwad.components.ad.splashscreen.c.a;

import com.kwad.components.core.webview.b.j;

public final class e extends com.kwad.components.ad.splashscreen.c.e {
    private com.kwad.components.core.webview.b.e.e gt = new com.kwad.components.core.webview.b.e.e() {
        @Override
        public final void q(String str) {
            if (j.b("ksad-splash-end-card", e.this.CM.mAdTemplate).equals(str)) {
                e.this.a(new d(), true);
                e.this.a(new a(), true);
                e.this.a(new b(), true);
                e.this.a(new c(), true);
            }
        }
    };

    @Override
    public final void ah() {
        super.ah();
        com.kwad.components.core.webview.b.d.b.sf().a(this.gt);
    }

    @Override
    public final void onCreate() {
        super.onCreate();
    }

    @Override
    public final void onUnbind() {
        super.onUnbind();
        com.kwad.components.core.webview.b.d.b.sf().b(this.gt);
    }
}
