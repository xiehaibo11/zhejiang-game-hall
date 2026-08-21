package com.mbridge.msdk.mbjscommon.windvane;

import android.graphics.Bitmap;
import android.text.TextUtils;
import android.webkit.WebResourceResponse;
import android.webkit.WebView;
import com.mbridge.msdk.foundation.tools.z;
import com.tkay.expressad.atsignalcommon.windvane.p;

/* JADX INFO: compiled from: WindVaneWebViewClient.java */
/* JADX INFO: loaded from: classes2.dex */
public final class m extends com.mbridge.msdk.mbjscommon.base.b {
    public static boolean b = true;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected String f3741a = null;
    private int c = 0;
    private d d;

    @Override // android.webkit.WebViewClient
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        this.f3741a = str;
        d dVar = this.d;
        if (dVar != null) {
            dVar.a(webView, str, bitmap);
        }
    }

    @Override // android.webkit.WebViewClient
    public final WebResourceResponse shouldInterceptRequest(WebView webView, String str) {
        WebResourceResponse webResourceResponseA = a(str);
        if (webResourceResponseA != null) {
            z.b(p.f6448a, "find WebResourceResponse url is " + str);
            return webResourceResponseA;
        }
        return super.shouldInterceptRequest(webView, str);
    }

    private WebResourceResponse a(String str) {
        try {
            if (TextUtils.isEmpty(str) || !k.d(str)) {
                return null;
            }
            z.b(p.f6448a, "is image " + str);
            Bitmap bitmapA = com.mbridge.msdk.foundation.same.c.b.a(com.mbridge.msdk.foundation.controller.a.f().j()).a(str);
            z.b(p.f6448a, "find image from cache " + str);
            if (bitmapA == null || bitmapA.isRecycled()) {
                return null;
            }
            return new WebResourceResponse(k.e(str), "utf-8", com.mbridge.msdk.foundation.same.c.a.a(bitmapA));
        } catch (Throwable unused) {
            return null;
        }
    }
}
