package com.tkay.expressad.advanced.view;

import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.text.TextUtils;
import android.webkit.ValueCallback;
import android.webkit.WebResourceRequest;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.tkay.expressad.advanced.d.c;
import com.tkay.expressad.advanced.js.NativeAdvancedJSBridgeImpl;
import com.tkay.expressad.atsignalcommon.base.b;
import com.tkay.expressad.atsignalcommon.windvane.WindVaneWebView;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.net.URLDecoder;

public final class a extends b {
    String a;
    com.tkay.expressad.advanced.d.a b;
    private final String c = "NativeAdvancedWebViewClient";
    private c d;

    public a(String str, com.tkay.expressad.advanced.d.a aVar, c cVar) {
        this.a = str;
        this.b = aVar;
        this.d = cVar;
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
            try {
                WindVaneWebView windVaneWebView = (WindVaneWebView) webView;
                if (System.currentTimeMillis() - windVaneWebView.lastTouchTime > com.tkay.expressad.a.b.a.c) {
                    com.tkay.expressad.foundation.d.c cVar = ((NativeAdvancedJSBridgeImpl) windVaneWebView.getObject()).getmCampaignList().get(0);
                    windVaneWebView.getUrl();
                    int i = com.tkay.expressad.a.b.a.b;
                    if (com.tkay.expressad.a.b.a.a(cVar)) {
                        return false;
                    }
                }
            } catch (Exception e) {
                e.printStackTrace();
            }
            if (this.b == null) {
                return true;
            }
            this.b.a(str);
            return true;
        } catch (Throwable unused) {
            return false;
        }
    }

    @Override
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        return a(str);
    }

    @Override
    public final WebResourceResponse shouldInterceptRequest(WebView webView, WebResourceRequest webResourceRequest) {
        return a(Build.VERSION.SDK_INT >= 21 ? webResourceRequest.getUrl().toString() : "");
    }

    private WebResourceResponse a(String str) {
        Uri uri;
        if (TextUtils.isEmpty(str)) {
            return null;
        }
        boolean z = false;
        if (!TextUtils.isEmpty(str) && (uri = Uri.parse(str)) != null && "mb-h5".equals(uri.getScheme())) {
            z = true;
        }
        if (!z || this.d == null) {
            return null;
        }
        String strA = this.d.a(URLDecoder.decode(Uri.parse(str).getQueryParameter("uri")));
        try {
            if (TextUtils.isEmpty(strA) || strA.contains("127.0.0.1") || strA.startsWith("http")) {
                return null;
            }
            return new WebResourceResponse("video/mp4", "utf-8", new FileInputStream(strA));
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            return null;
        }
    }

    private static boolean b(String str) {
        Uri uri;
        return (TextUtils.isEmpty(str) || (uri = Uri.parse(str)) == null || !"mb-h5".equals(uri.getScheme())) ? false : true;
    }

    public final void a() {
        if (this.d != null) {
            this.d = null;
        }
    }
}
