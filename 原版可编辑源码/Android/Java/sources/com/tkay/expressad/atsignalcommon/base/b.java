package com.tkay.expressad.atsignalcommon.base;

import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;

public class b extends WebViewClient {
    private a a;
    private com.tkay.expressad.atsignalcommon.windvane.e b;

    public final void a(a aVar) {
        this.a = aVar;
    }

    public final a b() {
        return this.a;
    }

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        a aVar = this.a;
        if (aVar != null && aVar.a(str)) {
            return true;
        }
        com.tkay.expressad.atsignalcommon.windvane.e eVar = this.b;
        if (eVar != null) {
            eVar.shouldOverrideUrlLoading(webView, str);
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        super.onReceivedError(webView, i, str, str2);
        com.tkay.expressad.atsignalcommon.windvane.e eVar = this.b;
        if (eVar != null) {
            eVar.onReceivedError(webView, i, str, str2);
        }
    }

    @Override
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        super.onReceivedSslError(webView, sslErrorHandler, sslError);
        com.tkay.expressad.atsignalcommon.windvane.e eVar = this.b;
        if (eVar != null) {
            eVar.onReceivedSslError(webView, sslErrorHandler, sslError);
        }
    }

    @Override
    public void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        com.tkay.expressad.atsignalcommon.windvane.e eVar = this.b;
        if (eVar != null) {
            eVar.onPageFinished(webView, str);
        }
    }

    public final void a(com.tkay.expressad.atsignalcommon.windvane.e eVar) {
        this.b = eVar;
    }
}
