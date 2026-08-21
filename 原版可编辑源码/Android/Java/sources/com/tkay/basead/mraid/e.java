package com.tkay.basead.mraid;

import android.graphics.Bitmap;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.ValueCallback;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;

public final class e extends com.tkay.expressad.atsignalcommon.base.b {
    final String a = getClass().getSimpleName();
    String b;
    b c;

    public e(String str) {
        this.b = str;
    }

    private void a(b bVar) {
        this.c = bVar;
    }

    @Override
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        try {
            StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
            com.tkay.expressad.d.b.a.a();
            sb.append(com.tkay.expressad.d.b.a.b());
            if (Build.VERSION.SDK_INT <= 19) {
                webView.loadUrl(sb.toString());
            } else {
                webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() {
                    private static void a() {
                    }

                    @Override
                    public final void onReceiveValue(String str2) {
                    }
                });
            }
        } catch (Throwable unused) {
        }
    }

    @Override
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return super.shouldOverrideUrlLoading(webView, webResourceRequest);
    }

    @Override
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
