package com.kwad.sdk.core.webview.a;

public class a extends android.webkit.WebViewClient {
    private boolean ays;
    protected java.lang.String mUniqueId;

    public a() {
            r1 = this;
            r1.<init>()
            r0 = 1
            r1.ays = r0
            java.lang.String r0 = ""
            r1.mUniqueId = r0
            return
    }

    public final void setNeedHybridLoad(boolean r1) {
            r0 = this;
            r0.ays = r1
            return
    }

    @Override
    public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r4, android.webkit.WebResourceRequest r5) {
            r3 = this;
            boolean r0 = r3.ays
            if (r0 == 0) goto L38
            boolean r0 = com.kwad.sdk.core.config.d.zF()
            if (r0 != 0) goto Lb
            goto L38
        Lb:
            android.net.Uri r0 = r5.getUrl()
            java.lang.String r0 = r0.toString()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "shouldInterceptRequestAPI 21: "
            r1.<init>(r2)
            r1.append(r0)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "HybridWebViewClient"
            com.kwad.sdk.core.e.c.d(r2, r1)
            com.kwad.sdk.core.webview.b.a r1 = com.kwad.sdk.core.webview.b.a.Ee()
            java.lang.String r2 = r3.mUniqueId
            android.webkit.WebResourceResponse r0 = r1.X(r0, r2)
            if (r0 != 0) goto L37
            android.webkit.WebResourceResponse r4 = super.shouldInterceptRequest(r4, r5)
            return r4
        L37:
            return r0
        L38:
            android.webkit.WebResourceResponse r4 = super.shouldInterceptRequest(r4, r5)
            return r4
    }

    @Override
    public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = r2.ays
            if (r0 == 0) goto L30
            boolean r0 = com.kwad.sdk.core.config.d.zF()
            if (r0 != 0) goto Lb
            goto L30
        Lb:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "shouldInterceptRequest: "
            r0.<init>(r1)
            r0.append(r4)
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = "HybridWebViewClient"
            com.kwad.sdk.core.e.c.d(r1, r0)
            com.kwad.sdk.core.webview.b.a r0 = com.kwad.sdk.core.webview.b.a.Ee()
            java.lang.String r1 = r2.mUniqueId
            android.webkit.WebResourceResponse r0 = r0.X(r4, r1)
            if (r0 != 0) goto L2f
            android.webkit.WebResourceResponse r3 = super.shouldInterceptRequest(r3, r4)
            return r3
        L2f:
            return r0
        L30:
            android.webkit.WebResourceResponse r3 = super.shouldInterceptRequest(r3, r4)
            return r3
    }
}
