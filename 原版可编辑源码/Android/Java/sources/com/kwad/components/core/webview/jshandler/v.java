package com.kwad.components.core.webview.jshandler;

public final class v implements com.kwad.sdk.core.webview.c.a {
    private final com.kwad.sdk.core.webview.b TL;

    public static final class a extends com.kwad.sdk.core.response.a.a {
        public String playableExtraData;
    }

    public v(com.kwad.sdk.core.webview.b bVar) {
        this.TL = bVar;
    }

    @Override
    public final void a(String str, com.kwad.sdk.core.webview.c.c cVar) {
        if (this.TL.DY()) {
            cVar.onError(-1, "native adTemplate is null");
            return;
        }
        a aVar = new a();
        try {
            aVar.playableExtraData = this.TL.getAdTemplate().adInfoList.get(0).adStyleInfo.playableExtraData;
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTraceOnly(e);
        }
        cVar.a(aVar);
    }

    @Override
    public final String getKey() {
        return "getKsPlayableAdData";
    }

    @Override
    public final void onDestroy() {
    }
}
