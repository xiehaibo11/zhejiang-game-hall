package com.kwad.sdk.core.webview.a;

import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.kwad.sdk.core.config.d;

public class a extends WebViewClient {
    private boolean ays = true;
    protected String mUniqueId = "";

    public final void setNeedHybridLoad(boolean z) {
        this.ays = z;
    }

    @Override
    public WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        if (!this.ays || !d.zF()) {
            return super.shouldInterceptRequest(webView, webResourceRequest);
        }
        String string = webResourceRequest.getUrl().toString();
        com.kwad.sdk.core.e.c.d("HybridWebViewClient", "shouldInterceptRequestAPI 21: " + string);
        WebResourceResponse webResourceResponseX = com.kwad.sdk.core.webview.b.a.Ee().X(string, this.mUniqueId);
        return webResourceResponseX == null ? super.shouldInterceptRequest(webView, webResourceRequest) : webResourceResponseX;
    }

    @Override
    public WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        if (!this.ays || !d.zF()) {
            return super.shouldInterceptRequest(webView, str);
        }
        com.kwad.sdk.core.e.c.d("HybridWebViewClient", "shouldInterceptRequest: " + str);
        WebResourceResponse webResourceResponseX = com.kwad.sdk.core.webview.b.a.Ee().X(str, this.mUniqueId);
        return webResourceResponseX == null ? super.shouldInterceptRequest(webView, str) : webResourceResponseX;
    }
}
