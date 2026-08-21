package com.kwad.components.core.offline.init.d;

public final class a extends com.kwad.components.offline.api.core.webview.BaseKsWebView {
    private com.kwad.sdk.core.webview.KsAdWebView Mp;
    private boolean enableScroll;



    public a(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.init(r1)
            return
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener a(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$DeepLinkListener r0 = r0.mDeeplinkListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener b(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$DeepLinkListener r0 = r0.mDeeplinkListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener c(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$DeepLinkListener r0 = r0.mDeeplinkListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.DeepLinkListener d(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$DeepLinkListener r0 = r0.mDeeplinkListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener e(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener f(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener g(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener h(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener i(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    private void init(android.content.Context r3) {
            r2 = this;
            r0 = 0
            r2.setBackgroundColor(r0)
            com.kwad.sdk.core.webview.KsAdWebView r1 = new com.kwad.sdk.core.webview.KsAdWebView
            r1.<init>(r3)
            r2.Mp = r1
            android.widget.FrameLayout$LayoutParams r3 = new android.widget.FrameLayout$LayoutParams
            r1 = -1
            r3.<init>(r1, r1)
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.Mp
            r1.setLayoutParams(r3)
            com.kwad.sdk.core.webview.KsAdWebView r3 = r2.Mp
            r3.setBackgroundColor(r0)
            com.kwad.sdk.core.webview.KsAdWebView r3 = r2.Mp
            com.kwad.sdk.core.webview.a.c$a r3 = r3.getClientConfig()
            com.kwad.components.core.offline.init.d.a$2 r0 = new com.kwad.components.core.offline.init.d.a$2
            r0.<init>(r2)
            com.kwad.sdk.core.webview.a.c$a r3 = r3.b(r0)
            com.kwad.components.core.offline.init.d.a$1 r0 = new com.kwad.components.core.offline.init.d.a$1
            r0.<init>(r2)
            com.kwad.sdk.core.webview.a.c$a r3 = r3.a(r0)
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Mp
            r0.setClientConfig(r3)
            com.kwad.sdk.core.webview.KsAdWebView r3 = r2.Mp
            r2.addView(r3)
            return
    }

    static com.kwad.components.offline.api.core.webview.BaseKsWebView.WebLoadListener j(com.kwad.components.core.offline.init.d.a r0) {
            com.kwad.components.offline.api.core.webview.BaseKsWebView$WebLoadListener r0 = r0.mWebLoadListener
            return r0
    }

    @Override
    public final void addJavascriptInterface(java.lang.Object r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.addJavascriptInterface(r2, r3)
            return
    }

    @Override
    public final void callJs(java.lang.String r3) {
            r2 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Mp
            r1 = 0
            com.kwad.sdk.utils.bp.a(r0, r3, r1)
            return
    }

    @Override
    public final void callJs(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            com.kwad.sdk.utils.bp.a(r0, r2, r3)
            return
    }

    @Override
    public final void destroy() {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.destroy()
            return
    }

    @Override
    public final void loadUrl(java.lang.String r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.loadUrl(r2)
            return
    }

    @Override
    public final void scrollBy(int r2, int r3) {
            r1 = this;
            boolean r0 = r1.enableScroll
            if (r0 == 0) goto L9
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.scrollBy(r2, r3)
        L9:
            return
    }

    @Override
    public final void scrollTo(int r2, int r3) {
            r1 = this;
            boolean r0 = r1.enableScroll
            if (r0 == 0) goto L9
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.scrollTo(r2, r3)
        L9:
            return
    }

    @Override
    public final void setAcceptThirdPartyCookies(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            com.kwad.sdk.core.webview.KsAdWebView r1 = r2.Mp
            r0.setAcceptThirdPartyCookies(r1, r3)
        Lf:
            return
    }

    @Override
    public final void setAllowContentAccess(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setAllowContentAccess(r2)
            return
    }

    @Override
    public final void setAllowFileAccess(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setAllowFileAccess(r2)
            return
    }

    @Override
    public final void setAllowFileAccessFromFileURLs(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setAllowFileAccessFromFileURLs(r2)
            return
    }

    @Override
    public final void setAllowUniversalAccessFromFileURLs(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setAllowUniversalAccessFromFileURLs(r2)
            return
    }

    @Override
    public final void setCacheMode(int r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setCacheMode(r2)
            return
    }

    @Override
    public final void setContextUniqId(int r2) {
            r1 = this;
            com.kwad.sdk.core.response.model.AdTemplate r2 = com.kwad.components.core.offline.api.b.a.a.au(r2)
            if (r2 == 0) goto Lf
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r0.cy(r2)
        Lf:
            return
    }

    @Override
    public final void setDebugEnabled(boolean r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 < r1) goto L9
            android.webkit.WebView.setWebContentsDebuggingEnabled(r3)
        L9:
            return
    }

    @Override
    public final void setDeeplinkEnabled(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r0.bk(r2)
            return
    }

    @Override
    public final void setEnableScroll(boolean r1) {
            r0 = this;
            r0.enableScroll = r1
            return
    }

    @Override
    public final void setEnableWebCache(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            r0.setNeedHybridLoad(r2)
            return
    }

    @Override
    public final void setInnerDownloadEnabled(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            r0.bl(r2)
            return
    }

    @Override
    public final void setJavaScriptEnabled(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setJavaScriptEnabled(r2)
            return
    }

    @Override
    public final void setMixedContentMode(int r3) {
            r2 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 21
            if (r0 < r1) goto Lf
            com.kwad.sdk.core.webview.KsAdWebView r0 = r2.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setMixedContentMode(r3)
        Lf:
            return
    }

    @Override
    public final void setSavePassword(boolean r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setSavePassword(r2)
            return
    }

    @Override
    public final void setTextZoom(int r2) {
            r1 = this;
            com.kwad.sdk.core.webview.KsAdWebView r0 = r1.Mp
            android.webkit.WebSettings r0 = r0.getSettings()
            r0.setTextZoom(r2)
            return
    }
}
