package com.kwad.components.ad.reward.j;

public class c implements com.kwad.sdk.core.webview.c.a {
    private a xt;

    public interface a {
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        jd();
    }

    @Override
    public final String getKey() {
        return "callButtonImpressionWhenPlay";
    }

    public void jd() {
    }

    @Override
    public final void onDestroy() {
        this.xt = null;
    }
}
