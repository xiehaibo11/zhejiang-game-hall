package com.mbridge.msdk.splash.view;

import android.graphics.Bitmap;
import android.os.Build;
import android.webkit.ValueCallback;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.base.b;
import com.mbridge.msdk.mbjscommon.windvane.WindVaneWebView;

/* JADX INFO: compiled from: SplashWebViewClient.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a extends b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f4054a;
    com.mbridge.msdk.splash.d.a b;
    private final String c = "SplashWebViewClient";

    public a(String str, com.mbridge.msdk.splash.d.a aVar) {
        this.f4054a = str;
        this.b = aVar;
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        try {
            StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
            sb.append(com.mbridge.msdk.c.b.b.a().b());
            if (Build.VERSION.SDK_INT <= 19) {
                webView.loadUrl(sb.toString());
            } else {
                webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() { // from class: com.mbridge.msdk.splash.view.a.1
                    @Override // android.webkit.ValueCallback
                    public final /* bridge */ /* synthetic */ void onReceiveValue(String str2) {
                    }
                });
            }
        } catch (Throwable th) {
            z.c("SplashWebViewClient", "onPageStarted", th);
        }
    }

    @Override // com.mbridge.msdk.mbjscommon.base.b, android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        try {
            WindVaneWebView windVaneWebView = (WindVaneWebView) webView;
            if (System.currentTimeMillis() - windVaneWebView.lastTouchTime > com.mbridge.msdk.click.b.a.c && com.mbridge.msdk.click.b.a.a(((com.mbridge.msdk.splash.js.b) windVaneWebView.getObject()).b().get(0), windVaneWebView.getUrl(), com.mbridge.msdk.click.b.a.b)) {
                return false;
            }
            z.d("SplashWebViewClient", "Use html to open url.");
            if (this.b == null) {
                return true;
            }
            this.b.a(false, str);
            return true;
        } catch (Throwable th) {
            z.c("SplashWebViewClient", "shouldOverrideUrlLoading", th);
            return false;
        }
    }
}
