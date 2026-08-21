package com.tkay.basead.mraid;

import android.graphics.Bitmap;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.ValueCallback;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;

/* JADX INFO: loaded from: classes3.dex */
public final class e extends com.tkay.expressad.atsignalcommon.base.b {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    final String f5715a = getClass().getSimpleName();
    String b;
    b c;

    public e(String str) {
        this.b = str;
    }

    private void a(b bVar) {
        this.c = bVar;
    }

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        try {
            StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
            com.tkay.expressad.d.b.a.a();
            sb.append(com.tkay.expressad.d.b.a.b());
            if (Build.VERSION.SDK_INT <= 19) {
                webView.loadUrl(sb.toString());
            } else {
                webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() { // from class: com.tkay.basead.mraid.e.1
                    private static void a() {
                    }

                    @Override // android.webkit.ValueCallback
                    public final /* bridge */ /* synthetic */ void onReceiveValue(String str2) {
                    }
                });
            }
        } catch (Throwable unused) {
        }
    }

    @Override // android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return super.shouldOverrideUrlLoading(webView, webResourceRequest);
    }

    @Override // com.tkay.expressad.atsignalcommon.base.b, android.webkit.WebViewClient
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        try {
            if (!TextUtils.equals(str, this.b) && this.c != null) {
                this.c.open(str);
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }
}
