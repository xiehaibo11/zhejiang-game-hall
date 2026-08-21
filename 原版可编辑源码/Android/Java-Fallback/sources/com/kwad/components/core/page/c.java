package com.kwad.components.core.page;

public final class c extends com.kwad.components.core.l.c<com.kwad.components.core.page.b.a.b> {
    private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
    private com.kwad.sdk.core.webview.KsAdWebView mAdWebView;
    private boolean mAutoShow;
    private android.content.Context mContext;
    private com.kwad.components.core.page.a.a mLandPageViewListener;
    private java.lang.String mPageTitle;
    private java.lang.String mPageUrl;
    private boolean mShowPermission;
    private com.kwad.sdk.core.webview.d.a.b mWebCardCloseListener;

    private c(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public static com.kwad.components.core.page.c b(android.content.Context r1, com.kwad.components.core.page.AdWebViewActivityProxy.a r2) {
            com.kwad.components.core.page.c r0 = new com.kwad.components.core.page.c
            r0.<init>(r1)
            r0.c(r1, r2)
            return r0
    }

    private void c(android.content.Context r1, com.kwad.components.core.page.AdWebViewActivityProxy.a r2) {
            r0 = this;
            r0.mContext = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.getAdTemplate()
            r0.mAdTemplate = r1
            java.lang.String r1 = r2.ox()
            r0.mPageUrl = r1
            java.lang.String r1 = r2.ow()
            r0.mPageTitle = r1
            boolean r1 = r2.oy()
            r0.mShowPermission = r1
            boolean r1 = r2.oz()
            r0.mAutoShow = r1
            return
    }

    private com.kwad.components.core.page.b.a.b oB() {
            r2 = this;
            com.kwad.components.core.page.b.a.b r0 = new com.kwad.components.core.page.b.a.b
            r0.<init>()
            android.content.Context r1 = r2.mContext
            r0.mContext = r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r2.mAdTemplate
            r0.mAdTemplate = r1
            java.lang.String r1 = r2.mPageTitle
            r0.mPageTitle = r1
            java.lang.String r1 = r2.mPageUrl
            r0.mPageUrl = r1
            boolean r1 = r2.mAutoShow
            r0.mAutoShow = r1
            boolean r1 = r2.mShowPermission
            r0.mShowPermission = r1
            com.kwad.components.core.page.a.a r1 = r2.mLandPageViewListener
            r0.MX = r1
            com.kwad.sdk.core.webview.d.a.b r1 = r2.mWebCardCloseListener
            r0.setWebCardCloseListener(r1)
            android.view.ViewGroup r1 = r2.lJ
            r0.gg = r1
            return r0
    }

    public final boolean getCanInterceptBackClick() {
            r1 = this;
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            java.lang.Object r0 = r0.Gk()
            com.kwad.components.core.page.b.a.b r0 = (com.kwad.components.core.page.b.a.b) r0
            boolean r0 = r0.oJ()
            return r0
    }

    @Override
    public final int getLayoutId() {
            r1 = this;
            int r0 = com.kwad.sdk.R.layout.ksad_activity_ad_webview
            return r0
    }

    @Override
    public final void initData() {
            r0 = this;
            return
    }

    @Override
    public final void kv() {
            r1 = this;
            int r0 = com.kwad.sdk.R.id.ksad_video_webview
            android.view.View r0 = r1.findViewById(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = (com.kwad.sdk.core.webview.KsAdWebView) r0
            r1.mAdWebView = r0
            return
    }

    @Override
    public final com.kwad.sdk.mvp.a kw() {
            r1 = this;
            com.kwad.components.core.page.b.a.b r0 = r1.oB()
            return r0
    }

    public final void oC() {
            r1 = this;
            com.kwad.sdk.mvp.Presenter r0 = r1.mPresenter
            java.lang.Object r0 = r0.Gk()
            com.kwad.components.core.page.b.a.b r0 = (com.kwad.components.core.page.b.a.b) r0
            r0.oC()
            return
    }

    public final void oD() {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r1 = 1
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bm(r1)
            T extends com.kwad.sdk.mvp.a r1 = r2.Li
            com.kwad.components.core.page.b.a.b r1 = (com.kwad.components.core.page.b.a.b) r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.webview.a.c$a r0 = r0.cy(r1)
            T extends com.kwad.sdk.mvp.a r1 = r2.Li
            com.kwad.components.core.page.b.a.b r1 = (com.kwad.components.core.page.b.a.b) r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            boolean r1 = r1.converted
            com.kwad.sdk.core.webview.a.c$a r0 = r0.bk(r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.mAdWebView
            r1.setClientConfig(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.mAdWebView
            r0.reload()
            return
    }

    @Override
    public final com.kwad.sdk.mvp.Presenter onCreatePresenter() {
            r3 = this;
            com.kwad.sdk.mvp.Presenter r0 = new com.kwad.sdk.mvp.Presenter
            r0.<init>()
            com.kwad.components.core.page.b.a.f r1 = new com.kwad.components.core.page.b.a.f
            r1.<init>()
            r0.a(r1)
            com.kwad.components.core.page.b.a.e r1 = new com.kwad.components.core.page.b.a.e
            r1.<init>()
            r0.a(r1)
            T extends com.kwad.sdk.mvp.a r1 = r3.Li
            com.kwad.components.core.page.b.a.b r1 = (com.kwad.components.core.page.b.a.b) r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            boolean r1 = com.kwad.sdk.core.response.b.d.s(r1)
            if (r1 == 0) goto L29
            com.kwad.components.core.page.b.a.c r1 = new com.kwad.components.core.page.b.a.c
            r1.<init>()
            r0.a(r1)
        L29:
            T extends com.kwad.sdk.mvp.a r1 = r3.Li
            com.kwad.components.core.page.b.a.b r1 = (com.kwad.components.core.page.b.a.b) r1
            com.kwad.sdk.core.response.model.AdTemplate r1 = r1.mAdTemplate
            com.kwad.sdk.core.response.model.AdInfo r1 = com.kwad.sdk.core.response.b.d.cg(r1)
            boolean r1 = com.kwad.sdk.core.response.b.a.aG(r1)
            if (r1 == 0) goto L56
            com.kwad.components.core.r.a r1 = com.kwad.components.core.r.a.pS()
            boolean r1 = r1.pY()
            if (r1 == 0) goto L56
            com.kwad.components.core.r.a r1 = com.kwad.components.core.r.a.pS()
            int r1 = r1.pT()
            r2 = 1
            if (r1 != r2) goto L56
            com.kwad.components.core.page.b.a.d r1 = new com.kwad.components.core.page.b.a.d
            r1.<init>()
            r0.a(r1)
        L56:
            com.kwad.components.core.page.b.a.g r1 = new com.kwad.components.core.page.b.a.g
            r1.<init>()
            r0.a(r1)
            return r0
    }

    public final void setLandPageViewListener(com.kwad.components.core.page.a.a r1) {
            r0 = this;
            r0.mLandPageViewListener = r1
            return
    }

    public final void setWebCardCloseListener(com.kwad.sdk.core.webview.d.a.b r2) {
            r1 = this;
            r1.mWebCardCloseListener = r2
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.mAdWebView
            if (r0 != 0) goto Lc
            if (r2 == 0) goto Lc
            r0 = 0
            r2.a(r0)
        Lc:
            return
    }
}
