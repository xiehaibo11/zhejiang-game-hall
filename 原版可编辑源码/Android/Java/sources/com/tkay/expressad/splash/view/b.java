package com.tkay.expressad.splash.view;

import android.graphics.Bitmap;
import android.os.Build;
import android.webkit.ValueCallback;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.splash.js.SplashJSBridgeImpl;

public final class b extends com.tkay.expressad.atsignalcommon.base.b {
    String a;
    com.tkay.expressad.splash.d.a b;
    private final String c = "SplashWebViewClient";

    public b(String str, com.tkay.expressad.splash.d.a aVar) {
        this.a = str;
        this.b = aVar;
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
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        try {
            WindVaneWebView windVaneWebView = (WindVaneWebView) webView;
            if (System.currentTimeMillis() - windVaneWebView.lastTouchTime > com.tkay.expressad.a.b.a.c) {
                c cVar = ((SplashJSBridgeImpl) windVaneWebView.getObject()).getmCampaignList().get(0);
                windVaneWebView.getUrl();
                int i = com.tkay.expressad.a.b.a.b;
                if (com.tkay.expressad.a.b.a.a(cVar)) {
                    return false;
                }
            }
            if (this.b == null) {
                return true;
            }
            this.b.b(str);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }
}
