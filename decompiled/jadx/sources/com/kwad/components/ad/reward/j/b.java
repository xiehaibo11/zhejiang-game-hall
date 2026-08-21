package com.kwad.components.ad.reward.j;

/* JADX INFO: loaded from: classes2.dex */
public class b implements com.kwad.sdk.core.webview.c.a {
    private a xs;

    public interface a {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        jd();
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "callButtonImpressionWhenFinish";
    }

    public void jd() {
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.xs = null;
    }
}
