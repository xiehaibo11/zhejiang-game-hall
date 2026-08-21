package com.alipay.sdk.widget;

import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;

/* JADX INFO: loaded from: classes.dex */
class t extends WebViewClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final /* synthetic */ WebViewWindow f1347a;

    t(WebViewWindow webViewWindow) {
        this.f1347a = webViewWindow;
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        if (this.f1347a.h.b(this.f1347a, str)) {
            return true;
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        if (this.f1347a.h.c(this.f1347a, str)) {
            return;
        }
        super.onPageFinished(webView, str);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        if (this.f1347a.h.a(this.f1347a, i, str, str2)) {
            return;
        }
        super.onReceivedError(webView, i, str, str2);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        if (this.f1347a.h.a(this.f1347a, sslErrorHandler, sslError)) {
            return;
        }
        super.onReceivedSslError(webView, sslErrorHandler, sslError);
    }
}
