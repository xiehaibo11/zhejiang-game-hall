package com.kwad.components.core.webview.jshandler;

/* JADX INFO: loaded from: classes2.dex */
public final class aq implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private a Vw = new a();

    public static final class a extends com.kwad.sdk.core.response.a.a implements com.kwad.sdk.core.b {
        public int status;
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
    }

    public final void aO(int i) {
        if (this.Tv != null) {
            this.Vw.status = i;
            this.Tv.a(this.Vw);
        }
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final String getKey() {
        return "registerVideoListener";
    }

    @Override // com.kwad.sdk.core.webview.c.a
    public final void onDestroy() {
        this.Tv = null;
    }
}
