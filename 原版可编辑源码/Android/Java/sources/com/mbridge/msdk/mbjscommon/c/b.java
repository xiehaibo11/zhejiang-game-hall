package com.mbridge.msdk.mbjscommon.c;

import android.graphics.Bitmap;
import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.windvane.d;

public class b implements d {
    @Override
    public final void a(WebView webView, String str, Bitmap bitmap) {
        z.a("WindVaneWebView", "onPageStarted");
    }

    @Override
    public final boolean b(WebView webView, String str) {
        z.a("WindVaneWebView", "shouldOverrideUrlLoading");
        return true;
    }

    @Override
    public void a(WebView webView, int i, String str, String str2) {
        z.a("WindVaneWebView", "onReceivedError");
    }

    @Override
    public void a(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        z.a("WindVaneWebView", "onReceivedSslError");
    }

    @Override
    public void a(WebView webView, String str) {
        z.a("WindVaneWebView", "onPageFinished");
    }

    @Override
    public final void b(WebView webView, int i) {
        z.a("WindVaneWebView", "onProgressChanged");
    }

    @Override
    public void a(WebView webView, int i) {
        z.a("WindVaneWebView", "readyState");
    }

    @Override
    public void c(WebView webView, int i) {
        z.a("WindVaneWebView", "loadingResourceStatus");
    }
}
