package com.kwad.components.core.page.b;

public final class f extends com.kwad.components.core.page.b.c {
    private int MS;
    private android.view.ViewGroup MT;
    private final com.kwad.components.core.page.b.f.a MU;
    private android.webkit.WebView Ms;
    private com.kwad.components.core.webview.a cD;
    private com.kwad.sdk.core.webview.b cE;
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private final boolean mIsRewardLandPage;



    public interface a {
        void ax(int r1);
    }

    public f(com.kwad.components.core.page.b.f.a r2, boolean r3) {
            r1 = this;
            r1.<init>()
            r0 = -1
            r1.MS = r0
            r1.MU = r2
            r1.mIsRewardLandPage = r3
            return
    }

    static int a(com.kwad.components.core.page.b.f r0, int r1) {
            r0.MS = r1
            return r1
    }

    static com.kwad.components.core.page.b.f.a a(com.kwad.components.core.page.b.f r0) {
            com.kwad.components.core.page.b.f$a r0 = r0.MU
            return r0
    }

    private void a(com.kwad.components.core.webview.a r9) {
            r8 = this;
            java.lang.String r0 = "LandPageWebViewPresenter"
            java.lang.String r1 = "registerWebCardHandler"
            com.kwad.sdk.core.e.c.d(r0, r1)
            com.kwad.components.core.e.d.c r4 = new com.kwad.components.core.e.d.c
            com.kwad.components.core.page.b.d r0 = r8.MQ
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r4.<init>(r0)
            com.kwad.components.core.webview.jshandler.u r0 = new com.kwad.components.core.webview.jshandler.u
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r0.<init>(r1)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.x r0 = new com.kwad.components.core.webview.jshandler.x
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r0.<init>(r1)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.ap r0 = new com.kwad.components.core.webview.jshandler.ap
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r0.<init>(r1, r4)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.t r0 = new com.kwad.components.core.webview.jshandler.t
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r0.<init>(r1)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.am r0 = new com.kwad.components.core.webview.jshandler.am
            r0.<init>()
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.ah r0 = new com.kwad.components.core.webview.jshandler.ah
            com.kwad.components.core.webview.jshandler.ah$b r1 = r8.oI()
            com.kwad.sdk.core.response.model.AdTemplate r2 = r8.mAdTemplate
            java.lang.String r2 = com.kwad.sdk.core.response.b.b.bh(r2)
            r0.<init>(r1, r2)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.ab r0 = new com.kwad.components.core.webview.jshandler.ab
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r0.<init>(r1)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.af r0 = new com.kwad.components.core.webview.jshandler.af
            com.kwad.components.core.webview.jshandler.af$a r1 = r8.getOpenNewPageListener()
            r0.<init>(r1)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.r r0 = new com.kwad.components.core.webview.jshandler.r
            com.kwad.sdk.core.webview.b r1 = r8.cE
            r2 = 0
            r0.<init>(r1, r4, r2)
            r9.a(r0)
            com.kwad.components.core.webview.jshandler.o r0 = new com.kwad.components.core.webview.jshandler.o
            com.kwad.sdk.core.webview.b r3 = r8.cE
            boolean r7 = r8.mIsRewardLandPage
            r5 = 0
            r6 = 2
            r2 = r0
            r2.<init>(r3, r4, r5, r6, r7)
            r9.a(r0)
            return
    }

    private void as(java.lang.String r2) {
            r1 = this;
            r1.ax()
            android.webkit.WebView r0 = r1.Ms
            r0.loadUrl(r2)
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
            android.view.ViewGroup r1 = r2.MT
            r0.MT = r1
            com.kwad.sdk.core.webview.b r0 = r2.cE
            android.webkit.WebView r1 = r2.Ms
            r0.Ms = r1
            return
    }

    private void ax() {
            r3 = this;
            r3.ay()
            com.kwad.components.core.webview.a r0 = new com.kwad.components.core.webview.a
            android.webkit.WebView r1 = r3.Ms
            r0.<init>(r1)
            r3.cD = r0
            r3.a(r0)
            android.webkit.WebView r0 = r3.Ms
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

    static android.view.ViewGroup b(com.kwad.components.core.page.b.f r0) {
            android.view.ViewGroup r0 = r0.MT
            return r0
    }

    static android.webkit.WebView c(com.kwad.components.core.page.b.f r0) {
            android.webkit.WebView r0 = r0.Ms
            return r0
    }

    static com.kwad.sdk.core.response.model.AdTemplate d(com.kwad.components.core.page.b.f r0) {
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            return r0
    }

    private com.kwad.components.core.webview.jshandler.af.a getOpenNewPageListener() {
            r1 = this;
            com.kwad.components.core.page.b.f$2 r0 = new com.kwad.components.core.page.b.f$2
            r0.<init>(r1)
            return r0
    }

    private com.kwad.components.core.webview.jshandler.ah.b oI() {
            r1 = this;
            com.kwad.components.core.page.b.f$1 r0 = new com.kwad.components.core.page.b.f$1
            r0.<init>(r1)
            return r0
    }

    @Override
    public final void ah() {
            r2 = this;
            super.ah()
            com.kwad.components.core.page.b.d r0 = r2.MQ
            com.kwad.sdk.core.response.model.AdTemplate r0 = r0.mAdTemplate
            r2.mAdTemplate = r0
            java.lang.String r0 = com.kwad.sdk.core.response.b.b.bh(r0)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L1a
            r2.av()
            r2.as(r0)
            return
        L1a:
            com.kwad.components.core.page.b.f$a r0 = r2.MU
            if (r0 == 0) goto L23
            int r1 = r2.MS
            r0.ax(r1)
        L23:
            return
    }

    @Override
    public final void onCreate() {
            r2 = this;
            super.onCreate()
            int r0 = com.kwad.sdk.R.id.ksad_landing_page_webview
            android.view.View r0 = r2.findViewById(r0)
            android.webkit.WebView r0 = (android.webkit.WebView) r0
            r2.Ms = r0
            int r0 = com.kwad.sdk.R.id.ksad_web_card_container
            android.view.View r0 = r2.findViewById(r0)
            android.view.ViewGroup r0 = (android.view.ViewGroup) r0
            r2.MT = r0
            android.webkit.WebView r0 = r2.Ms
            r1 = 0
            r0.setBackgroundColor(r1)
            return
    }

    @Override
    public final void onUnbind() {
            r0 = this;
            super.onUnbind()
            r0.ay()
            return
    }
}
