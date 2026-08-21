package com.kwad.components.ad.reward.j;

/* JADX INFO: loaded from: classes2.dex */
public class c implements com.kwad.sdk.core.webview.c.a {
    private a xt;

    public interface a {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        jd();
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "callButtonImpressionWhenPlay";
    }

    public void jd() {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.xt = null;
    }
}
