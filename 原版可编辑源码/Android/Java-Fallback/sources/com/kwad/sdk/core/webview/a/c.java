package com.kwad.sdk.core.webview.a;

public class c extends com.kwad.sdk.core.webview.a.a {
    private com.kwad.sdk.core.webview.a.c.a jX;

    public static class a {
        private com.kwad.sdk.core.webview.KsAdWebView.c MY;
        private com.kwad.sdk.core.report.z.b asH;
        private boolean ays;
        private com.kwad.sdk.core.webview.KsAdWebView.d ayt;
        private com.kwad.sdk.core.webview.KsAdWebView.b ayu;
        private boolean ayv;
        private boolean ayw;
        private boolean ayx;
        private com.kwad.sdk.core.response.model.AdTemplate mAdTemplate;
        private final android.content.Context mContext;

        public a(android.content.Context r2) {
                r1 = this;
                r1.<init>()
                r0 = 1
                r1.ayv = r0
                r1.ayw = r0
                r1.ays = r0
                r1.mContext = r2
                return
        }

        public final boolean Ea() {
                r1 = this;
                boolean r0 = r1.ayw
                return r0
        }

        public final boolean Eb() {
                r1 = this;
                boolean r0 = r1.ays
                return r0
        }

        public final boolean Ec() {
                r1 = this;
                boolean r0 = r1.ayv
                return r0
        }

        public final boolean Ed() {
                r1 = this;
                boolean r0 = r1.ayx
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a a(com.kwad.sdk.core.webview.KsAdWebView.b r1) {
                r0 = this;
                r0.ayu = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a b(com.kwad.sdk.core.report.z.b r1) {
                r0 = this;
                r0.asH = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a b(com.kwad.sdk.core.webview.KsAdWebView.d r1) {
                r0 = this;
                r0.ayt = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a bk(boolean r1) {
                r0 = this;
                r0.ayw = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a bl(boolean r1) {
                r0 = this;
                r0.ayv = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a bm(boolean r1) {
                r0 = this;
                r1 = 1
                r0.ayx = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a c(com.kwad.sdk.core.webview.KsAdWebView.c r1) {
                r0 = this;
                r0.MY = r1
                return r0
        }

        public final com.kwad.sdk.core.webview.a.c.a cy(com.kwad.sdk.core.response.model.AdTemplate r1) {
                r0 = this;
                r0.mAdTemplate = r1
                return r0
        }

        public final com.kwad.sdk.core.response.model.AdTemplate getAdTemplate() {
                r1 = this;
                com.kwad.sdk.core.response.model.AdTemplate r0 = r1.mAdTemplate
                return r0
        }

        public final com.kwad.sdk.core.report.z.b getClientParams() {
                r1 = this;
                com.kwad.sdk.core.report.z$b r0 = r1.asH
                return r0
        }

        public final android.content.Context getContext() {
                r1 = this;
                android.content.Context r0 = r1.mContext
                return r0
        }

        public final com.kwad.sdk.core.webview.KsAdWebView.d getWebListener() {
                r1 = this;
                com.kwad.sdk.core.webview.KsAdWebView$d r0 = r1.ayt
                return r0
        }

        public final com.kwad.sdk.core.webview.KsAdWebView.b lT() {
                r1 = this;
                com.kwad.sdk.core.webview.KsAdWebView$b r0 = r1.ayu
                return r0
        }

        public final com.kwad.sdk.core.webview.KsAdWebView.c oR() {
                r1 = this;
                com.kwad.sdk.core.webview.KsAdWebView$c r0 = r1.MY
                return r0
        }
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void dX(java.lang.String r1) {
            r0 = this;
            r0.mUniqueId = r1
            return
    }

    public final com.kwad.sdk.core.webview.a.c.a getClientConfig() {
            r1 = this;
            com.kwad.sdk.core.webview.a.c$a r0 = r1.jX
            return r0
    }

    @Override
    public void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
            r0 = this;
            super.onPageFinished(r1, r2)
            java.lang.String r1 = r0.mUniqueId
            java.lang.String r2 = "onPageFinished"
            com.kwad.sdk.core.webview.b.c.b.ab(r1, r2)
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r1.getWebListener()
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r1.getWebListener()
            r1.onPageFinished()
        L1d:
            return
    }

    @Override
    public void onPageStarted(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3) {
            r0 = this;
            super.onPageStarted(r1, r2, r3)
            java.lang.String r1 = r0.mUniqueId
            java.lang.String r2 = "onPageStart"
            com.kwad.sdk.core.webview.b.c.b.ab(r1, r2)
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r1.getWebListener()
            if (r1 == 0) goto L1d
            com.kwad.sdk.core.webview.a.c$a r1 = r0.jX
            com.kwad.sdk.core.webview.KsAdWebView$d r1 = r1.getWebListener()
            r1.onPageStart()
        L1d:
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            super.onReceivedError(r2, r3, r4, r5)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r0 = "onReceivedError "
            r2.<init>(r0)
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.String r0 = "KsAdWebViewClient"
            com.kwad.sdk.core.e.c.d(r0, r2)
            com.kwad.sdk.core.webview.a.c$a r2 = r1.jX
            if (r2 == 0) goto L29
            com.kwad.sdk.core.webview.KsAdWebView$d r2 = r2.getWebListener()
            if (r2 == 0) goto L29
            com.kwad.sdk.core.webview.a.c$a r2 = r1.jX
            com.kwad.sdk.core.webview.KsAdWebView$d r2 = r2.getWebListener()
            r2.onReceivedHttpError(r3, r4, r5)
        L29:
            com.kwad.sdk.core.webview.b.c.b.ad(r5, r4)
            return
    }

    @Override
    public boolean onRenderProcessGone(android.webkit.WebView r5, android.webkit.RenderProcessGoneDetail r6) {
            r4 = this;
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 1
            r2 = 0
            r3 = 26
            if (r0 < r3) goto L12
            if (r6 == 0) goto L12
            boolean r0 = r6.didCrash()
            if (r0 == 0) goto L12
            r0 = r1
            goto L13
        L12:
            r0 = r2
        L13:
            if (r0 != 0) goto L1d
            boolean r5 = super.onRenderProcessGone(r5, r6)
            if (r5 == 0) goto L1c
            goto L1d
        L1c:
            return r2
        L1d:
            return r1
    }

    public final void setClientConfig(com.kwad.sdk.core.webview.a.c.a r1) {
            r0 = this;
            r0.jX = r1
            boolean r1 = r1.Eb()
            r0.setNeedHybridLoad(r1)
            return
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r5, java.lang.String r6) {
            r4 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "shouldOverrideUrlLoading url="
            r0.<init>(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "KsAdWebViewClient"
            com.kwad.sdk.core.e.c.w(r1, r0)
            java.lang.String r0 = r4.mUniqueId
            java.lang.String r1 = "shouldOverrideUrlLoading"
            com.kwad.sdk.core.webview.b.c.b.ab(r0, r1)
            r0 = 1
            java.lang.String r1 = "http"
            boolean r1 = r6.startsWith(r1)     // Catch: java.lang.Exception -> Lb9
            if (r1 != 0) goto Lb4
            java.lang.String r1 = "https"
            boolean r1 = r6.startsWith(r1)     // Catch: java.lang.Exception -> Lb9
            if (r1 == 0) goto L2d
            goto Lb4
        L2d:
            java.lang.String r5 = "tel:"
            boolean r5 = r6.startsWith(r5)     // Catch: java.lang.Exception -> Lb9
            if (r5 != 0) goto L9b
            java.lang.String r5 = "sms:"
            boolean r5 = r6.startsWith(r5)     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto L3e
            goto L9b
        L3e:
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto Lbd
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            boolean r5 = r5.Ea()     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto Lbd
            java.lang.Class<com.kwad.sdk.service.a.a> r5 = com.kwad.sdk.service.a.a.class
            java.lang.Object r5 = com.kwad.sdk.service.ServiceProvider.get(r5)     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.service.a.a r5 = (com.kwad.sdk.service.a.a) r5     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.a.c$a r1 = r4.jX     // Catch: java.lang.Exception -> Lb9
            android.content.Context r1 = r1.getContext()     // Catch: java.lang.Exception -> Lb9
            int r5 = r5.j(r1, r6)     // Catch: java.lang.Exception -> Lb9
            r6 = 0
            r1 = 2
            java.lang.String r2 = ""
            if (r5 != r0) goto L7d
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.KsAdWebView$b r5 = r5.lT()     // Catch: java.lang.Exception -> Lb9
            if (r5 == 0) goto L73
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.KsAdWebView$b r5 = r5.lT()     // Catch: java.lang.Exception -> Lb9
            r5.onSuccess()     // Catch: java.lang.Exception -> Lb9
        L73:
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.getAdTemplate()     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.report.a.a(r5, r2, r1, r6)     // Catch: java.lang.Exception -> Lb9
            return r0
        L7d:
            com.kwad.sdk.core.webview.a.c$a r3 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.KsAdWebView$b r3 = r3.lT()     // Catch: java.lang.Exception -> Lb9
            if (r3 == 0) goto L8e
            com.kwad.sdk.core.webview.a.c$a r3 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.KsAdWebView$b r3 = r3.lT()     // Catch: java.lang.Exception -> Lb9
            r3.onFailed()     // Catch: java.lang.Exception -> Lb9
        L8e:
            r3 = -1
            if (r5 != r3) goto Lbd
            com.kwad.sdk.core.webview.a.c$a r5 = r4.jX     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.response.model.AdTemplate r5 = r5.getAdTemplate()     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.report.a.b(r5, r2, r1, r6)     // Catch: java.lang.Exception -> Lb9
            goto Lbd
        L9b:
            android.content.Intent r5 = new android.content.Intent     // Catch: java.lang.Exception -> Lb9
            java.lang.String r1 = "android.intent.action.VIEW"
            android.net.Uri r6 = android.net.Uri.parse(r6)     // Catch: java.lang.Exception -> Lb9
            r5.<init>(r1, r6)     // Catch: java.lang.Exception -> Lb9
            com.kwad.sdk.core.webview.a.c$a r6 = r4.jX     // Catch: java.lang.Exception -> Lb9
            if (r6 == 0) goto Lb3
            com.kwad.sdk.core.webview.a.c$a r6 = r4.jX     // Catch: java.lang.Exception -> Lb9
            android.content.Context r6 = r6.getContext()     // Catch: java.lang.Exception -> Lb9
            r6.startActivity(r5)     // Catch: java.lang.Exception -> Lb9
        Lb3:
            return r0
        Lb4:
            boolean r5 = super.shouldOverrideUrlLoading(r5, r6)     // Catch: java.lang.Exception -> Lb9
            return r5
        Lb9:
            r5 = move-exception
            com.kwad.sdk.core.e.c.printStackTrace(r5)
        Lbd:
            return r0
    }
}
