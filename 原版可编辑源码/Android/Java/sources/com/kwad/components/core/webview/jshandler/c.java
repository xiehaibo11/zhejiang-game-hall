package com.kwad.components.core.webview.jshandler;

public final class c implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;
    private int mB;
    private int mC;

    public static class a extends com.kwad.sdk.core.response.a.a {
        public int showLiveStatus;
        public int showLiveStyle;
    }

    public c(int i, int i2) {
        this.mB = i;
        this.mC = i2;
    }

    private void o(int i, int i2) {
        if (this.Tv == null) {
            return;
        }
        a aVar = new a();
        aVar.showLiveStatus = i;
        aVar.showLiveStyle = i2;
        this.Tv.a(aVar);
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        this.Tv = cVar;
        o(this.mB, this.mC);
    }

    @Override
    public final String getKey() {
        return "getLiveInfo";
    }

    @Override
    public final void onDestroy() {
        this.Tv = null;
    }
}
