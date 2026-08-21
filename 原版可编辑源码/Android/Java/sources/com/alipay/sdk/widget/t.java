package com.alipay.sdk.widget;

import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;

class t extends WebViewClient {
    final WebViewWindow a;

    t(WebViewWindow webViewWindow) {
        this.a = webViewWindow;
    }

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        if (this.a.h.b(this.a, str)) {
            return true;
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override
    public void onPageFinished(WebView webView, String str) {
        if (this.a.h.c(this.a, str)) {
            return;
        }
        super.onPageFinished(webView, str);
    }

    @Override
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        if (this.a.h.a(this.a, i, str, str2)) {
            return;
        }
        super.onReceivedError(webView, i, str, str2);
    }

    @Override
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        if (this.a.h.a(this.a, sslErrorHandler, sslError)) {
            return;
        }
        super.onReceivedSslError(webView, sslErrorHandler, sslError);
    }
}
