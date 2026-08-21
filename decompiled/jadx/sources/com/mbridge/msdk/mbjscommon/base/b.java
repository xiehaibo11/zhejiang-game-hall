package com.mbridge.msdk.mbjscommon.base;

import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;

/* JADX INFO: compiled from: BaseWebViewClient.java */
/* JADX INFO: loaded from: classes2.dex */
public class b extends WebViewClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private a f3696a;
    private com.mbridge.msdk.mbjscommon.windvane.d b;

    public final void a(a aVar) {
        this.f3696a = aVar;
    }

    public final a b() {
        return this.f3696a;
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        a aVar = this.f3696a;
        if (aVar != null && aVar.a(str)) {
            return true;
        }
        com.mbridge.msdk.mbjscommon.windvane.d dVar = this.b;
        if (dVar != null) {
            dVar.b(webView, str);
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        super.onReceivedError(webView, i, str, str2);
        com.mbridge.msdk.mbjscommon.windvane.d dVar = this.b;
        if (dVar != null) {
            dVar.a(webView, i, str, str2);
        }
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        super.onReceivedSslError(webView, sslErrorHandler, sslError);
        com.mbridge.msdk.mbjscommon.windvane.d dVar = this.b;
        if (dVar != null) {
            dVar.a(webView, sslErrorHandler, sslError);
        }
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        com.mbridge.msdk.mbjscommon.windvane.d dVar = this.b;
        if (dVar != null) {
            dVar.a(webView, str);
        }
    }

    public final void a(com.mbridge.msdk.mbjscommon.windvane.d dVar) {
        this.b = dVar;
    }
}
