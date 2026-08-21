package com.kwad.components.core.webview.jshandler;

public final class WebCardRegisterLiveShopListener implements com.kwad.sdk.core.webview.c.a {
    private com.kwad.sdk.core.webview.c.c Tv;

    public static class AdLiveItemShopInfo extends com.kwad.sdk.core.response.a.a implements java.io.Serializable {
        private static final long serialVersionUID = -7621721959722008440L;
        public java.lang.String price;
        public int status;
        public java.lang.String title;
        public java.lang.String url;

        public AdLiveItemShopInfo() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    public WebCardRegisterLiveShopListener() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.kwad.components.offline.api.core.adlive.model.AdLiveShopInfo r3) {
            r2 = this;
            com.kwad.sdk.core.webview.c.c r0 = r2.Tv
            if (r0 != 0) goto L5
            return
        L5:
            com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener$AdLiveItemShopInfo r0 = new com.kwad.components.core.webview.jshandler.WebCardRegisterLiveShopListener$AdLiveItemShopInfo
            r0.<init>()
            int r1 = r3.status
            r0.status = r1
            java.lang.String r1 = r3.title
            r0.title = r1
            java.lang.String r1 = r3.url
            r0.url = r1
            java.lang.String r3 = r3.price
            r0.price = r3
            com.kwad.sdk.core.webview.c.c r3 = r2.Tv
            r3.a(r0)
            return
    }

    @Override
    public final void a(java.lang.String r1, com.kwad.sdk.core.webview.c.c r2) {
            r0 = this;
            r0.Tv = r2
            return
    }

    @Override
    public final java.lang.String getKey() {
            r1 = this;
            java.lang.String r0 = "registerLiveShopListener"
            return r0
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            r0 = 0
            r1.Tv = r0
            return
    }
}
