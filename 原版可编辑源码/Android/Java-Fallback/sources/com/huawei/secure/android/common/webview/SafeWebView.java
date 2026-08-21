package com.huawei.secure.android.common.webview;

public class SafeWebView extends android.webkit.WebView {
    private static final java.lang.String f = "SafeWebView";
    private java.lang.String a;
    private java.lang.String[] b;
    private java.lang.String[] c;
    private java.lang.String[] d;
    private com.huawei.secure.android.common.webview.WebViewLoadCallBack e;

    static class a {
    }

    private static class b implements android.content.DialogInterface.OnClickListener {
        private final android.webkit.SslErrorHandler a;

        b(android.webkit.SslErrorHandler r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                android.webkit.SslErrorHandler r1 = r0.a
                r1.cancel()
                return
        }
    }

    private static class c implements android.content.DialogInterface.OnClickListener {
        private final android.webkit.SslErrorHandler a;

        c(android.webkit.SslErrorHandler r1) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                return
        }

        @Override
        public void onClick(android.content.DialogInterface r1, int r2) {
                r0 = this;
                android.webkit.SslErrorHandler r1 = r0.a
                r1.proceed()
                return
        }
    }

    private final class d extends android.webkit.WebViewClient {
        private android.webkit.WebViewClient a;
        private boolean b;
        final com.huawei.secure.android.common.webview.SafeWebView c;

        private d(com.huawei.secure.android.common.webview.SafeWebView r1, android.webkit.WebViewClient r2, boolean r3) {
                r0 = this;
                r0.c = r1
                r0.<init>()
                r0.a = r2
                r0.b = r3
                return
        }

        d(com.huawei.secure.android.common.webview.SafeWebView r1, android.webkit.WebViewClient r2, boolean r3, com.huawei.secure.android.common.webview.SafeWebView.a r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                return
        }

        @Override
        public void doUpdateVisitedHistory(android.webkit.WebView r2, java.lang.String r3, boolean r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.doUpdateVisitedHistory(r2, r3, r4)
                goto Lb
            L8:
                super.doUpdateVisitedHistory(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onFormResubmission(android.webkit.WebView r2, android.os.Message r3, android.os.Message r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onFormResubmission(r2, r3, r4)
                goto Lb
            L8:
                super.onFormResubmission(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onLoadResource(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onLoadResource(r2, r3)
                goto Lb
            L8:
                super.onLoadResource(r2, r3)
            Lb:
                return
        }

        @Override
        public void onPageCommitVisible(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onPageCommitVisible(r2, r3)
                goto Lb
            L8:
                super.onPageCommitVisible(r2, r3)
            Lb:
                return
        }

        @Override
        public void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onPageFinished(r2, r3)
                goto Lb
            L8:
                super.onPageFinished(r2, r3)
            Lb:
                return
        }

        @Override
        public void onPageStarted(android.webkit.WebView r3, java.lang.String r4, android.graphics.Bitmap r5) {
                r2 = this;
                android.webkit.WebViewClient r0 = r2.a
                if (r0 == 0) goto Lc
                boolean r1 = r2.b
                if (r1 != 0) goto Lc
                r0.onPageStarted(r3, r4, r5)
                return
            Lc:
                com.huawei.secure.android.common.webview.SafeWebView r0 = r2.c
                boolean r0 = r0.isWhiteListUrl(r4)
                if (r0 != 0) goto L1a
                com.huawei.secure.android.common.webview.SafeWebView r5 = r2.c
                r5.onCheckError(r3, r4)
                return
            L1a:
                super.onPageStarted(r3, r4, r5)
                return
        }

        @Override
        public void onReceivedClientCertRequest(android.webkit.WebView r2, android.webkit.ClientCertRequest r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedClientCertRequest(r2, r3)
                goto Lb
            L8:
                super.onReceivedClientCertRequest(r2, r3)
            Lb:
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedError(r2, r3, r4, r5)
                goto Lb
            L8:
                super.onReceivedError(r2, r3, r4, r5)
            Lb:
                return
        }

        @Override
        public void onReceivedError(android.webkit.WebView r2, android.webkit.WebResourceRequest r3, android.webkit.WebResourceError r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedError(r2, r3, r4)
                goto Lb
            L8:
                super.onReceivedError(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onReceivedHttpAuthRequest(android.webkit.WebView r2, android.webkit.HttpAuthHandler r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedHttpAuthRequest(r2, r3, r4, r5)
                goto Lb
            L8:
                super.onReceivedHttpAuthRequest(r2, r3, r4, r5)
            Lb:
                return
        }

        @Override
        public void onReceivedHttpError(android.webkit.WebView r2, android.webkit.WebResourceRequest r3, android.webkit.WebResourceResponse r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedHttpError(r2, r3, r4)
                goto Lb
            L8:
                super.onReceivedHttpError(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onReceivedLoginRequest(android.webkit.WebView r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedLoginRequest(r2, r3, r4, r5)
                goto Lb
            L8:
                super.onReceivedLoginRequest(r2, r3, r4, r5)
            Lb:
                return
        }

        @Override
        public void onReceivedSslError(android.webkit.WebView r2, android.webkit.SslErrorHandler r3, android.net.http.SslError r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onReceivedSslError(r2, r3, r4)
                goto Lb
            L8:
                super.onReceivedSslError(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public boolean onRenderProcessGone(android.webkit.WebView r2, android.webkit.RenderProcessGoneDetail r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                boolean r2 = r0.onRenderProcessGone(r2, r3)
                return r2
            L9:
                boolean r2 = super.onRenderProcessGone(r2, r3)
                return r2
        }

        @Override
        public void onSafeBrowsingHit(android.webkit.WebView r2, android.webkit.WebResourceRequest r3, int r4, android.webkit.SafeBrowsingResponse r5) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onSafeBrowsingHit(r2, r3, r4, r5)
                goto Lb
            L8:
                super.onSafeBrowsingHit(r2, r3, r4, r5)
            Lb:
                return
        }

        @Override
        public void onScaleChanged(android.webkit.WebView r2, float r3, float r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onScaleChanged(r2, r3, r4)
                goto Lb
            L8:
                super.onScaleChanged(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onTooManyRedirects(android.webkit.WebView r2, android.os.Message r3, android.os.Message r4) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onTooManyRedirects(r2, r3, r4)
                goto Lb
            L8:
                super.onTooManyRedirects(r2, r3, r4)
            Lb:
                return
        }

        @Override
        public void onUnhandledKeyEvent(android.webkit.WebView r2, android.view.KeyEvent r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L8
                r0.onUnhandledKeyEvent(r2, r3)
                goto Lb
            L8:
                super.onUnhandledKeyEvent(r2, r3)
            Lb:
                return
        }

        @Override
        public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r2, android.webkit.WebResourceRequest r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                android.webkit.WebResourceResponse r2 = r0.shouldInterceptRequest(r2, r3)
                return r2
            L9:
                android.webkit.WebResourceResponse r2 = super.shouldInterceptRequest(r2, r3)
                return r2
        }

        @Override
        public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                android.webkit.WebResourceResponse r2 = r0.shouldInterceptRequest(r2, r3)
                return r2
            L9:
                android.webkit.WebResourceResponse r2 = super.shouldInterceptRequest(r2, r3)
                return r2
        }

        @Override
        public boolean shouldOverrideKeyEvent(android.webkit.WebView r2, android.view.KeyEvent r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                boolean r2 = r0.shouldOverrideKeyEvent(r2, r3)
                return r2
            L9:
                boolean r2 = super.shouldOverrideKeyEvent(r2, r3)
                return r2
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r2, android.webkit.WebResourceRequest r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                boolean r2 = r0.shouldOverrideUrlLoading(r2, r3)
                return r2
            L9:
                boolean r2 = super.shouldOverrideUrlLoading(r2, r3)
                return r2
        }

        @Override
        public boolean shouldOverrideUrlLoading(android.webkit.WebView r2, java.lang.String r3) {
                r1 = this;
                android.webkit.WebViewClient r0 = r1.a
                if (r0 == 0) goto L9
                boolean r2 = r0.shouldOverrideUrlLoading(r2, r3)
                return r2
            L9:
                boolean r2 = super.shouldOverrideUrlLoading(r2, r3)
                return r2
        }
    }

    public SafeWebView(android.content.Context r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a()
            return
    }

    public SafeWebView(android.content.Context r1, android.util.AttributeSet r2) {
            r0 = this;
            r0.<init>(r1, r2)
            r0.a()
            return
    }

    public SafeWebView(android.content.Context r1, android.util.AttributeSet r2, int r3) {
            r0 = this;
            r0.<init>(r1, r2, r3)
            r0.a()
            return
    }

    public SafeWebView(android.content.Context r1, android.util.AttributeSet r2, int r3, int r4) {
            r0 = this;
            r0.<init>(r1, r2, r3, r4)
            r0.a()
            return
    }

    private void a() {
            r1 = this;
            com.huawei.secure.android.common.webview.SafeWebSettings.initWebviewAndSettings(r1)
            r0 = 0
            r1.setWebViewClient(r0)
            return
    }

    private boolean a(java.lang.String r1) {
            r0 = this;
            boolean r1 = android.webkit.URLUtil.isHttpUrl(r1)
            return r1
    }

    public java.lang.String getDefaultErrorPage() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public com.huawei.secure.android.common.webview.WebViewLoadCallBack getWebViewLoadCallBack() {
            r1 = this;
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r0 = r1.e
            return r0
    }

    @java.lang.Deprecated
    public java.lang.String[] getWhitelist() {
            r2 = this;
            java.lang.String[] r0 = r2.b
            if (r0 != 0) goto L6
            r0 = 0
            goto Ld
        L6:
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String[] r0 = (java.lang.String[]) r0
        Ld:
            return r0
    }

    public java.lang.String[] getWhitelistNotMathcSubDomain() {
            r2 = this;
            java.lang.String[] r0 = r2.c
            if (r0 != 0) goto L6
            r0 = 0
            goto Ld
        L6:
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String[] r0 = (java.lang.String[]) r0
        Ld:
            return r0
    }

    public java.lang.String[] getWhitelistWithPath() {
            r2 = this;
            java.lang.String[] r0 = r2.d
            if (r0 != 0) goto L6
            r0 = 0
            goto Ld
        L6:
            int r1 = r0.length
            java.lang.Object[] r0 = java.util.Arrays.copyOf(r0, r1)
            java.lang.String[] r0 = (java.lang.String[]) r0
        Ld:
            return r0
    }

    public boolean isWhiteListUrl(java.lang.String r5) {
            r4 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 == 0) goto Lf
            java.lang.String r5 = "SafeWebView"
            java.lang.String r0 = "url is null"
            com.huawei.secure.android.common.util.LogsUtil.e(r5, r0)
            r5 = 0
            return r5
        Lf:
            boolean r0 = android.webkit.URLUtil.isNetworkUrl(r5)
            if (r0 != 0) goto L17
            r5 = 1
            return r5
        L17:
            java.lang.String[] r0 = r4.getWhitelistWithPath()
            java.lang.String[] r1 = r4.getWhitelistNotMathcSubDomain()
            java.lang.String[] r2 = r4.getWhitelist()
            if (r0 == 0) goto L2d
            int r3 = r0.length
            if (r3 == 0) goto L2d
            boolean r5 = com.huawei.secure.android.common.webview.UriUtil.isUrlHostAndPathInWhitelist(r5, r0)
            return r5
        L2d:
            if (r1 == 0) goto L37
            int r0 = r1.length
            if (r0 == 0) goto L37
            boolean r5 = com.huawei.secure.android.common.webview.UriUtil.isUrlHostSameWhitelist(r5, r1)
            return r5
        L37:
            boolean r5 = com.huawei.secure.android.common.webview.UriUtil.isUrlHostInWhitelist(r5, r2)
            return r5
    }

    @Override
    public void loadDataWithBaseURL(java.lang.String r9, java.lang.String r10, java.lang.String r11, java.lang.String r12, java.lang.String r13) {
            r8 = this;
            boolean r0 = r8.a(r9)
            if (r0 == 0) goto L35
            java.lang.String r0 = "SafeWebView"
            java.lang.String r1 = "loadDataWithBaseURL: http url , not safe"
            android.util.Log.e(r0, r1)
            java.lang.String r1 = r8.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L20
            java.lang.String r3 = r8.a
            r2 = r8
            r4 = r10
            r5 = r11
            r6 = r12
            r7 = r13
            super.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            goto L34
        L20:
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r10 = r8.getWebViewLoadCallBack()
            if (r10 == 0) goto L34
            java.lang.String r10 = "WebViewLoadCallBack"
            android.util.Log.e(r0, r10)
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r10 = r8.getWebViewLoadCallBack()
            com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r11 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL
            r10.onCheckError(r9, r11)
        L34:
            return
        L35:
            super.loadDataWithBaseURL(r9, r10, r11, r12, r13)
            return
    }

    @Override
    public void loadUrl(java.lang.String r3) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 == 0) goto L30
            java.lang.String r0 = "SafeWebView"
            java.lang.String r1 = "loadUrl: http url , not safe"
            android.util.Log.e(r0, r1)
            java.lang.String r1 = r2.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            java.lang.String r3 = r2.a
            super.loadUrl(r3)
            goto L2f
        L1b:
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r1 = r2.getWebViewLoadCallBack()
            if (r1 == 0) goto L2f
            java.lang.String r1 = "WebViewLoadCallBack"
            android.util.Log.e(r0, r1)
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r0 = r2.getWebViewLoadCallBack()
            com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r1 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL
            r0.onCheckError(r3, r1)
        L2f:
            return
        L30:
            super.loadUrl(r3)
            return
    }

    @Override
    public void loadUrl(java.lang.String r3, java.util.Map<java.lang.String, java.lang.String> r4) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 == 0) goto L30
            java.lang.String r0 = "SafeWebView"
            java.lang.String r1 = "loadUrl: http url , not safe"
            android.util.Log.e(r0, r1)
            java.lang.String r1 = r2.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            java.lang.String r3 = r2.a
            super.loadUrl(r3, r4)
            goto L2f
        L1b:
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r2.getWebViewLoadCallBack()
            if (r4 == 0) goto L2f
            java.lang.String r4 = "WebViewLoadCallBack"
            android.util.Log.e(r0, r4)
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r2.getWebViewLoadCallBack()
            com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL
            r4.onCheckError(r3, r0)
        L2f:
            return
        L30:
            super.loadUrl(r3, r4)
            return
    }

    public final void onCheckError(android.webkit.WebView r4, java.lang.String r5) {
            r3 = this;
            java.lang.String r0 = "SafeWebView"
            java.lang.String r1 = "onCheckError url is not in white list "
            com.huawei.secure.android.common.util.LogsUtil.e(r0, r1, r5)
            r4.stopLoading()
            java.lang.String r1 = r3.getDefaultErrorPage()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L18
            r4.loadUrl(r1)
            goto L2c
        L18:
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r3.getWebViewLoadCallBack()
            if (r4 == 0) goto L2c
            java.lang.String r4 = "onPageStarted WebViewLoadCallBack"
            android.util.Log.e(r0, r4)
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r3.getWebViewLoadCallBack()
            com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.URL_NOT_IN_WHITE_LIST
            r4.onCheckError(r5, r0)
        L2c:
            return
    }

    @Override
    public void postUrl(java.lang.String r3, byte[] r4) {
            r2 = this;
            boolean r0 = r2.a(r3)
            if (r0 == 0) goto L30
            java.lang.String r0 = "SafeWebView"
            java.lang.String r1 = "postUrl: http url , not safe"
            android.util.Log.e(r0, r1)
            java.lang.String r1 = r2.a
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 != 0) goto L1b
            java.lang.String r3 = r2.a
            super.postUrl(r3, r4)
            goto L2f
        L1b:
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r2.getWebViewLoadCallBack()
            if (r4 == 0) goto L2f
            java.lang.String r4 = "WebViewLoadCallBack"
            android.util.Log.e(r0, r4)
            com.huawei.secure.android.common.webview.WebViewLoadCallBack r4 = r2.getWebViewLoadCallBack()
            com.huawei.secure.android.common.webview.WebViewLoadCallBack$ErrorCode r0 = com.huawei.secure.android.common.webview.WebViewLoadCallBack.ErrorCode.HTTP_URL
            r4.onCheckError(r3, r0)
        L2f:
            return
        L30:
            super.postUrl(r3, r4)
            return
    }

    public void setDefaultErrorPage(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    @Override
    public void setWebViewClient(android.webkit.WebViewClient r4) {
            r3 = this;
            com.huawei.secure.android.common.webview.SafeWebView$d r0 = new com.huawei.secure.android.common.webview.SafeWebView$d
            r1 = 1
            r2 = 0
            r0.<init>(r3, r4, r1, r2)
            super.setWebViewClient(r0)
            return
    }

    public void setWebViewClient(android.webkit.WebViewClient r3, boolean r4) {
            r2 = this;
            com.huawei.secure.android.common.webview.SafeWebView$d r0 = new com.huawei.secure.android.common.webview.SafeWebView$d
            r1 = 0
            r0.<init>(r2, r3, r4, r1)
            super.setWebViewClient(r0)
            return
    }

    public void setWebViewLoadCallBack(com.huawei.secure.android.common.webview.WebViewLoadCallBack r1) {
            r0 = this;
            r0.e = r1
            return
    }

    @java.lang.Deprecated
    public void setWhitelist(java.lang.String[] r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            goto Lb
        L4:
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.lang.String[] r2 = (java.lang.String[]) r2
        Lb:
            r1.b = r2
            return
    }

    public void setWhitelistNotMathcSubDomain(java.lang.String[] r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            goto Lb
        L4:
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.lang.String[] r2 = (java.lang.String[]) r2
        Lb:
            r1.c = r2
            return
    }

    public void setWhitelistWithPath(java.lang.String[] r2) {
            r1 = this;
            if (r2 != 0) goto L4
            r2 = 0
            goto Lb
        L4:
            int r0 = r2.length
            java.lang.Object[] r2 = java.util.Arrays.copyOf(r2, r0)
            java.lang.String[] r2 = (java.lang.String[]) r2
        Lb:
            r1.d = r2
            return
    }

    @java.lang.Deprecated
    protected final void showNoticeWhenSSLErrorOccurred(java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, android.webkit.SslErrorHandler r7) {
            r2 = this;
            android.app.AlertDialog$Builder r0 = new android.app.AlertDialog$Builder
            android.content.Context r1 = r2.getContext()
            r0.<init>(r1)
            boolean r1 = android.text.TextUtils.isEmpty(r3)
            if (r1 != 0) goto L12
            r0.setTitle(r3)
        L12:
            com.huawei.secure.android.common.webview.SafeWebView$c r3 = new com.huawei.secure.android.common.webview.SafeWebView$c
            r3.<init>(r7)
            com.huawei.secure.android.common.webview.SafeWebView$b r1 = new com.huawei.secure.android.common.webview.SafeWebView$b
            r1.<init>(r7)
            r0.setMessage(r4)
            r0.setPositiveButton(r5, r3)
            r0.setNegativeButton(r6, r1)
            android.app.AlertDialog r3 = r0.create()
            r3.show()
            return
    }
}
