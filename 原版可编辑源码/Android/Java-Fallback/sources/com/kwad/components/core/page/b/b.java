package com.kwad.components.core.page.b;

public final class b extends com.kwad.sdk.mvp.Presenter {
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.components.core.webview.jshandler.ah.b cK;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;


    public b() {
            r1 = this;
            r1.<init>()
            com.kwad.components.core.page.b.b$1 r0 = new com.kwad.components.core.page.b.b$1
            r0.<init>(r1)
            r1.cK = r0
            return
    }

    private void a(com.kwad.components.core.webview.a r4) {
            r3 = this;
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r3.cE
            r0.<init>(r1)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r3.cE
            r0.<init>(r1)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r3.cK
            com.kwad.sdk.core.response.model.AdTemplate r2 = r3.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
            java.lang.String r2 = com.kwad.sdk.core.response.b.a.aK(r2)
            r0.<init>(r1, r2)
            r4.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r3.cE
            r0.<init>(r1)
            r4.a(r0)
            return
    }

    private void av() {
            r2 = this;
            com.kwad.sdk.core.webview.b r0 = new com.kwad.sdk.core.webview.b
            r0.<init>()
            r2.cE = r0
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.setAdTemplate(r1)
            com.kwad.sdk.core.webview.b r0 = r2.cE
            r1 = 0
            r0.mScreenOrientation = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.mAdWebView
            r0.Ms = r1
            return
    }

    private void ax() {
            r3 = this;
            r3.ay()
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            com.kwad.sdk.core.webview.KsAdWebView r1 = r3.mAdWebView
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r3.mAdWebView
            com.kwad.components.core.webview.a r1 = r3.cD
            java.lang.String r2 = "KwaiAd"
            r0.addJavascriptInterface(r1, r2)
            return
    }

    private void ay() {
            r1 = this;
            com.kwad.components.core.webview.a r0 = r1.cD
            if (r0 == 0) goto La
            r0.destroy()
            r0 = 0
            r1.cD = r0
        La:
            return
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            java.lang.Object r0 = r2.Gk()
            com.kwad.components.core.page.recycle.e r0 = (com.kwad.components.core.page.recycle.e) r0
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.adTemplate
            r2.mAdTemplate = r0
            android.view.View r0 = r2.getRootView()
            int r1 = com.kwad.sdk.R.id.ksad_video_webView
            android.view.View r0 = r0.findViewById(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r2.mAdWebView = r0
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r1 = 1
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bm(r1)
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.mAdWebView
            r1.setClientConfig(r0)
            r2.av()
            r2.ax()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            java.lang.String r1 = com.kwad.sdk.core.response.b.a.aK(r1)
            r0.loadUrl(r1)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            r0.onActivityCreate()
            return
    }

    @Override
    public final void onDestroy() {
            r1 = this;
            super.onDestroy()
            r1.ay()
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.mAdWebView
            if (r0 == 0) goto L10
            r0.onActivityDestroy()
            r0 = 0
            r1.mAdWebView = r0
        L10:
            return
    }
}
