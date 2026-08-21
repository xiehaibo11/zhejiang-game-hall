package com.mbridge.msdk.mbjscommon.c;

import android.graphics.Bitmap;
import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.c;

/* JADX INFO: compiled from: DefaultRVWebViewListener.java */
/* JADX INFO: loaded from: classes2.dex */
public class a implements c {
    public void a(Object obj) {
        z.a("RVWindVaneWebView", "getEndScreenInfo");
    }

    public void a(WebView webView, String str, String str2, int i, int i2) {
        z.a("RVWindVaneWebView", "loadAds");
    }

    public void a(Object obj, String str) {
        z.a("RVWindVaneWebView", "operateComponent");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public final void a(WebView webView, String str, Bitmap bitmap) {
        z.a("RVWindVaneWebView", "onPageStarted");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public final boolean b(WebView webView, String str) {
        z.a("RVWindVaneWebView", "shouldOverrideUrlLoading");
        return true;
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public void a(WebView webView, int i, String str, String str2) {
        z.a("RVWindVaneWebView", "onReceivedError");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        z.a("RVWindVaneWebView", "onReceivedSslError");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public void a(WebView webView, String str) {
        z.a("RVWindVaneWebView", "onPageFinished");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public final void b(WebView webView, int i) {
        z.a("RVWindVaneWebView", "onProgressChanged");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public void a(WebView webView, int i) {
        z.a("RVWindVaneWebView", "readyState");
    }

    @Override // com.mbridge.msdk.mbjscommon.windvane.d
    public final void c(WebView webView, int i) {
        z.a("RVWindVaneWebView", "loadingResourceStatus");
    }
}
