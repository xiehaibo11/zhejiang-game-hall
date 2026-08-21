package com.kwad.components.core.page.b;

import com.kwad.components.core.webview.jshandler.ab;
import com.kwad.components.core.webview.jshandler.ah;
import com.kwad.components.core.webview.jshandler.u;
import com.kwad.components.core.webview.jshandler.x;
import com.kwad.sdk.R;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.mvp.Presenter;

/* JADX INFO: loaded from: classes2.dex */
public final class b extends Presenter {
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private ah.b cK = new ah.b() { // from class: com.kwad.components.core.page.b.b.1
        @Override // com.kwad.components.core.webview.jshandler.ah.b
        public final void a(ah.a aVar) {
        }
    };
    private AdTemplate mAdTemplate;
    private KsAdWebView mAdWebView;

    private void a(com.kwad.components.core.webview.a aVar) {
        aVar.a(new u(this.cE));
        aVar.a(new x(this.cE));
        aVar.a(new ah(this.cK, com.kwad.sdk.core.response.b.a.aK(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate))));
        aVar.a(new ab(this.cE));
    }

    private void av() {
        com.kwad.sdk.core.webview.b bVar = new com.kwad.sdk.core.webview.b();
        this.cE = bVar;
        bVar.setAdTemplate(this.mAdTemplate);
        this.cE.mScreenOrientation = 0;
        this.cE.Ms = this.mAdWebView;
    }

    private void ax() {
        ay();
        com.kwad.components.core.webview.a aVar = new com.kwad.components.core.webview.a(this.mAdWebView);
        this.cD = aVar;
        a(aVar);
        this.mAdWebView.addJavascriptInterface(this.cD, "KwaiAd");
    }

    private void ay() {
        com.kwad.components.core.webview.a aVar = this.cD;
        if (aVar != null) {
            aVar.destroy();
            this.cD = null;
        }
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void ah() {
        super.ah();
        this.mAdTemplate = ((com.kwad.components.core.page.recycle.e) Gk()).adTemplate;
        KsAdWebView ksAdWebView = (KsAdWebView) getRootView().findViewById(R.id.ksad_video_webView);
        this.mAdWebView = ksAdWebView;
        this.mAdWebView.setClientConfig(ksAdWebView.getClientConfig().bm(true).cy(this.mAdTemplate));
        av();
        ax();
        this.mAdWebView.loadUrl(com.kwad.sdk.core.response.b.a.aK(com.kwad.sdk.core.response.b.d.cg(this.mAdTemplate)));
        this.mAdWebView.onActivityCreate();
    }

    @Override // com.kwad.sdk.mvp.Presenter
    public final void onDestroy() {
        super.onDestroy();
        ay();
        KsAdWebView ksAdWebView = this.mAdWebView;
        if (ksAdWebView != null) {
            ksAdWebView.onActivityDestroy();
            this.mAdWebView = null;
        }
    }
}
