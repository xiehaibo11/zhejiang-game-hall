package com.tkay.expressad.mbbanner.view;

import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.webkit.ValueCallback;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.tkay.core.common.b.m;
import com.tkay.expressad.atsignalcommon.base.BaseWebView;
import com.tkay.expressad.atsignalcommon.base.b;
import com.tkay.expressad.foundation.d.c;
import java.util.List;

public final class a extends b {
    String a;
    List<c> b;
    com.tkay.expressad.mbbanner.a.c.a c;
    private final String d = "BannerWebViewClient";

    public a(String str, List<c> list, com.tkay.expressad.mbbanner.a.c.a aVar) {
        this.a = str;
        this.b = list;
        this.c = aVar;
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
            BaseWebView baseWebView = (BaseWebView) webView;
            if (System.currentTimeMillis() - baseWebView.lastTouchTime > com.tkay.expressad.a.b.a.c) {
                c cVar = this.b.get(0);
                baseWebView.getUrl();
                int i = com.tkay.expressad.a.b.a.b;
                if (com.tkay.expressad.a.b.a.a(cVar)) {
                    return false;
                }
            }
            if (this.b.size() > 1) {
                m.a().f().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                str = null;
            }
            if (this.c != null) {
                this.c.a(false, str);
            }
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }
}
