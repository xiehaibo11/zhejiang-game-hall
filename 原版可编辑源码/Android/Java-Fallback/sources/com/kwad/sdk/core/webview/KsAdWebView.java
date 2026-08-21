package com.kwad.sdk.core.webview;

public class KsAdWebView extends com.kwad.sdk.core.webview.c {
    private com.kwad.sdk.core.webview.a.c ayl;
    private java.lang.String aym;
    private long ayn;
    private com.kwad.sdk.core.webview.d ayo;
    private com.kwad.sdk.core.webview.a.c.a jX;
    private java.lang.String mUniqueId;


    class a implements android.webkit.DownloadListener {
        final com.kwad.sdk.core.webview.KsAdWebView ayp;

        private a(com.kwad.sdk.core.webview.KsAdWebView r1) {
                r0 = this;
                r0.ayp = r1
                r0.<init>()
                return
        }

        a(com.kwad.sdk.core.webview.KsAdWebView r1, byte r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        @Override
        public final void onDownloadStart(java.lang.String r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, long r5) {
                r0 = this;
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r2 = com.kwad.sdk.core.webview.KsAdWebView.f(r2)
                if (r2 == 0) goto L74
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r2 = com.kwad.sdk.core.webview.KsAdWebView.f(r2)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
                if (r2 == 0) goto L74
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r2 = com.kwad.sdk.core.webview.KsAdWebView.f(r2)
                boolean r2 = r2.Ec()
                if (r2 == 0) goto L74
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r2 = com.kwad.sdk.core.webview.KsAdWebView.f(r2)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
                com.kwad.sdk.core.response.model.AdInfo r2 = com.kwad.sdk.core.response.b.d.cg(r2)
                com.kwad.sdk.core.response.model.AdInfo$AdConversionInfo r2 = r2.adConversionInfo
                r2.appDownloadUrl = r1
                com.kwad.sdk.core.webview.KsAdWebView r1 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r1 = com.kwad.sdk.core.webview.KsAdWebView.f(r1)
                com.kwad.sdk.core.response.model.AdTemplate r1 = r1.getAdTemplate()
                r2 = 1
                r1.isWebViewDownload = r2
                com.kwad.sdk.core.webview.KsAdWebView r1 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r1 = com.kwad.sdk.core.webview.KsAdWebView.g(r1)
                if (r1 == 0) goto L54
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r2 = com.kwad.sdk.core.webview.KsAdWebView.f(r2)
                com.kwad.sdk.core.response.model.AdTemplate r2 = r2.getAdTemplate()
                r1.cy(r2)
            L54:
                java.lang.Class<com.kwad.sdk.service.a.a> r1 = com.kwad.sdk.service.a.a.class
                java.lang.Object r1 = com.kwad.sdk.service.ServiceProvider.get(r1)
                com.kwad.sdk.service.a.a r1 = (com.kwad.sdk.service.a.a) r1
                com.kwad.sdk.core.webview.KsAdWebView r2 = r0.ayp
                android.content.Context r2 = r2.getContext()
                android.content.Context r2 = com.kwad.sdk.m.l.wrapContextIfNeed(r2)
                com.kwad.sdk.core.webview.KsAdWebView r3 = r0.ayp
                com.kwad.sdk.core.webview.a.c$a r3 = com.kwad.sdk.core.webview.KsAdWebView.f(r3)
                com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()
                r1.g(r2, r3)
                return
            L74:
                android.net.Uri r1 = android.net.Uri.parse(r1)     // Catch: java.lang.Exception -> L89
                android.content.Intent r2 = new android.content.Intent     // Catch: java.lang.Exception -> L89
                java.lang.String r3 = "android.intent.action.VIEW"
                r2.<init>(r3, r1)     // Catch: java.lang.Exception -> L89
                com.kwad.sdk.core.webview.KsAdWebView r1 = r0.ayp     // Catch: java.lang.Exception -> L89
                android.content.Context r1 = r1.getContext()     // Catch: java.lang.Exception -> L89
                r1.startActivity(r2)     // Catch: java.lang.Exception -> L89
                return
            L89:
                r1 = move-exception
                com.kwad.sdk.core.e.c.printStackTrace(r1)
                return
        }
    }

    public interface b {
        void onFailed();

        void onSuccess();
    }

    public interface c {
        void oS();
    }

    public interface d {
        void onPageFinished();

        void onPageStart();

        void onReceivedHttpError(int r1, java.lang.String r2, java.lang.String r3);
    }

    public KsAdWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.init(r1)
            return
    }

    public KsAdWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.init(r1)
            return
    }

    public KsAdWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.init(r1)
            return
    }

    public KsAdWebView(android.content.Context r1, android.util.AttributeSet r2, int r3, boolean r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.init(r1)
            return
    }

    private java.lang.String DZ() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "KSADSDK_V3.3.42_"
            r0.<init>(r1)
            android.content.Context r1 = r2.getContext()
            java.lang.String r1 = r1.getPackageName()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            android.content.Context r1 = r2.getContext()
            java.lang.String r1 = com.kwad.sdk.utils.k.bQ(r1)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    static com.kwad.sdk.core.webview.d e(com.kwad.sdk.core.webview.KsAdWebView r0) {
            com.kwad.sdk.core.webview.d r0 = r0.ayo
            return r0
    }

    static com.kwad.sdk.core.webview.a.c.a f(com.kwad.sdk.core.webview.KsAdWebView r0) {
            com.kwad.sdk.core.webview.a.c$a r0 = r0.jX
            return r0
    }

    static com.kwad.sdk.core.webview.a.c.a g(com.kwad.sdk.core.webview.KsAdWebView r0) {
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getReadyClientConfig()
            return r0
    }

    private com.kwad.sdk.core.webview.a.c.a getReadyClientConfig() {
            r1 = this;
            com.kwad.sdk.core.webview.a.c r0 = r1.ayl
            if (r0 == 0) goto L11
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            if (r0 == 0) goto L11
            com.kwad.sdk.core.webview.a.c r0 = r1.ayl
            com.kwad.sdk.core.webview.a.c$a r0 = r0.getClientConfig()
            return r0
        L11:
            r0 = 0
            return r0
    }

    private void init(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = "KsAdWebView"
            java.lang.String r1 = "init"
            com.kwad.sdk.core.e.c.i(r0, r1)
            r3.setAccessibilityStateDisable(r4)
            android.webkit.WebSettings r4 = com.kwad.sdk.utils.bo.a(r3)
            r0 = 1
            r4.setUseWideViewPort(r0)
            r4.setDomStorageEnabled(r0)
            r0 = 0
            r3.setVerticalScrollBarEnabled(r0)
            com.kwad.sdk.core.webview.KsAdWebView$1 r1 = new com.kwad.sdk.core.webview.KsAdWebView$1
            r1.<init>(r3)
            r3.ayl = r1
            java.lang.String r2 = r3.mUniqueId
            r1.dX(r2)
            com.kwad.sdk.core.webview.a.c r1 = r3.ayl
            r3.setWebViewClient(r1)
            com.kwad.sdk.core.webview.a.b r1 = new com.kwad.sdk.core.webview.a.b
            r1.<init>()
            r3.setWebChromeClient(r1)
            com.kwad.sdk.core.webview.KsAdWebView$a r1 = new com.kwad.sdk.core.webview.KsAdWebView$a
            r1.<init>(r3, r0)
            r3.setDownloadListener(r1)
            java.lang.String r0 = r4.getUserAgentString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r0 = r3.DZ()
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            r4.setUserAgentString(r0)
            com.kwad.sdk.core.webview.a.c$a r4 = new com.kwad.sdk.core.webview.a.c$a
            android.content.Context r0 = r3.getContext()
            r4.<init>(r0)
            r3.jX = r4
            boolean r4 = r4.Ed()
            if (r4 == 0) goto L6c
            com.kwad.sdk.core.webview.d r4 = new com.kwad.sdk.core.webview.d
            r4.<init>()
            r3.ayo = r4
        L6c:
            return
    }

    private void setAccessibilityStateDisable(android.content.Context r5) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 17
            if (r0 != r1) goto L28
            if (r5 == 0) goto L28
            java.lang.String r0 = "accessibility"
            java.lang.Object r5 = r5.getSystemService(r0)     // Catch: java.lang.Throwable -> L28
            android.view.accessibility.AccessibilityManager r5 = (android.view.accessibility.AccessibilityManager) r5     // Catch: java.lang.Throwable -> L28
            if (r5 == 0) goto L28
            boolean r0 = r5.isEnabled()     // Catch: java.lang.Throwable -> L28
            if (r0 != 0) goto L19
            goto L28
        L19:
            java.lang.String r0 = "setState"
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L28
            r2 = 0
            java.lang.Integer r3 = java.lang.Integer.valueOf(r2)     // Catch: java.lang.Throwable -> L28
            r1[r2] = r3     // Catch: java.lang.Throwable -> L28
            com.kwad.sdk.utils.s.f(r5, r0, r1)     // Catch: java.lang.Throwable -> L28
        L28:
            return
    }

    public com.kwad.sdk.core.webview.a.c.a getClientConfig() {
            r1 = this;
            com.kwad.sdk.core.webview.a.c$a r0 = r1.jX
            return r0
    }

    public long getLoadTime() {
            r2 = this;
            long r0 = r2.ayn
            return r0
    }

    public java.lang.String getLoadUrl() {
            r1 = this;
            java.lang.String r0 = r1.aym
            return r0
    }

    public java.lang.String getUniqueId() {
            r1 = this;
            java.lang.String r0 = r1.mUniqueId
            return r0
    }

    @Override
    public void loadUrl(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = r2.mUniqueId
            com.kwad.sdk.core.webview.b.c.b.ei(r0)
            r2.aym = r3
            long r0 = java.lang.System.currentTimeMillis()
            r2.ayn = r0
            super.loadUrl(r3)
            com.kwad.sdk.core.webview.a.c$a r3 = r2.jX
            com.kwad.sdk.core.response.model.AdTemplate r3 = r3.getAdTemplate()
            if (r3 == 0) goto L1d
            com.kwai.adclient.kscommerciallogger.model.BusinessType r3 = r3.getBusinessType()
            goto L1e
        L1d:
            r3 = 0
        L1e:
            com.kwad.sdk.core.report.KSLoggerReporter$ReportClient r0 = com.kwad.sdk.core.report.KSLoggerReporter.ReportClient.CONVERT_H5WEB
            java.lang.String r1 = "h5WebLoadStart"
            com.kwad.sdk.core.report.KSLoggerReporter$b r3 = r0.buildMethodCheck(r3, r1)
            r3.report()
            return
    }

    public final void onActivityCreate() {
            r2 = this;
            com.kwad.sdk.core.webview.d r0 = r2.ayo
            if (r0 == 0) goto L9
            com.kwad.sdk.core.webview.a.c$a r1 = r2.jX
            r0.a(r1)
        L9:
            return
    }

    public final void onActivityDestroy() {
            r2 = this;
            r2.release()
            com.kwad.sdk.core.webview.d r0 = r2.ayo
            if (r0 == 0) goto Lc
            com.kwad.sdk.core.webview.a.c$a r1 = r2.jX
            r0.b(r1)
        Lc:
            return
    }

    @Override
    protected void onScrollChanged(int r1, int r2, int r3, int r4) {
            r0 = this;
            super.onScrollChanged(r1, r2, r3, r4)
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            if (r1 == 0) goto L16
            com.kwad.sdk.core.webview.KsAdWebView$c r1 = r1.oR()
            if (r1 == 0) goto L16
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            com.kwad.sdk.core.webview.KsAdWebView$c r1 = r1.oR()
            r1.oS()
        L16:
            return
    }

    public void setClientConfig(com.kwad.sdk.core.webview.a.c.a r2) {
            r1 = this;
            com.kwad.sdk.core.webview.a.c r0 = r1.ayl
            r0.setClientConfig(r2)
            return
    }

    @Override
    public void setWebChromeClient(android.webkit.WebChromeClient r2) {
            r1 = this;
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L15
            boolean r0 = r2 instanceof com.kwad.sdk.core.webview.a.b
            if (r0 == 0) goto Ld
            goto L15
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "client is not instanceof KSWebChromeClient"
            r2.<init>(r0)
            throw r2
        L15:
            super.setWebChromeClient(r2)
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r2) {
            r1 = this;
            java.lang.Boolean r0 = com.kwad.framework.a.a.ml
            boolean r0 = r0.booleanValue()
            if (r0 == 0) goto L15
            boolean r0 = r2 instanceof com.kwad.sdk.core.webview.a.a
            if (r0 == 0) goto Ld
            goto L15
        Ld:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Not supported set webViewClient, please check it"
            r2.<init>(r0)
            throw r2
        L15:
            super.setWebViewClient(r2)
            return
    }
}
