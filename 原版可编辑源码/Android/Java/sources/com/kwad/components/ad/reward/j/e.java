package com.kwad.components.ad.reward.j;

public final class e implements com.kwad.sdk.core.webview.c.a {
    private a xv;

    public interface a {
        void jc();
    }

    public final void a(a aVar) {
        this.xv = aVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        a aVar = this.xv;
        if (aVar != null) {
            aVar.jc();
        }
    }

    @Override
    public final String getKey() {
        return "clickGift";
    }

    @Override
    public final void onDestroy() {
        this.xv = null;
    }
}
