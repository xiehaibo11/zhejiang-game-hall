package com.tkay.expressad.atsignalcommon.a;

import android.graphics.Bitmap;
import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;

public class a implements com.tkay.expressad.atsignalcommon.windvane.c {
    protected static final String a = "RVWindVaneWebView";

    @Override
    public String a(String str) {
        return "{}";
    }

    @Override
    public void a(Object obj) {
    }

    @Override
    public void a(Object obj, String str) {
    }

    @Override
    public void a(String str, int i, int i2) {
    }

    @Override
    public void loadingResourceStatus(WebView webView, int i) {
    }

    @Override
    public void onPageFinished(WebView webView, String str) {
    }

    @Override
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
    }

    @Override
    public void onProgressChanged(WebView webView, int i) {
    }

    @Override
    public void onReceivedError(WebView webView, int i, String str, String str2) {
    }

    @Override
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
    }

    @Override
    public void readyState(WebView webView, int i) {
    }

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return true;
    }
}
