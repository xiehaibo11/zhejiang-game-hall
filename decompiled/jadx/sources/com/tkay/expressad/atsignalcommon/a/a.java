package com.tkay.expressad.atsignalcommon.a;

import android.graphics.Bitmap;
import android.net.http.SslError;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;

/* JADX INFO: loaded from: classes3.dex */
public class a implements com.tkay.expressad.atsignalcommon.windvane.c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected static final String f6405a = "RVWindVaneWebView";

    @Override // com.tkay.expressad.atsignalcommon.windvane.c
    public String a(String str) {
        return "{}";
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.c
    public void a(Object obj) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.c
    public void a(Object obj, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.c
    public void a(String str, int i, int i2) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void loadingResourceStatus(WebView webView, int i) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void onPageFinished(WebView webView, String str) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void onProgressChanged(WebView webView, int i) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void onReceivedError(WebView webView, int i, String str, String str2) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public void readyState(WebView webView, int i) {
    }

    @Override // com.tkay.expressad.atsignalcommon.windvane.e
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return true;
    }
}
