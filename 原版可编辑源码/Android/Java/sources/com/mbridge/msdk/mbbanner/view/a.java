package com.mbridge.msdk.mbbanner.view;

import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.webkit.ValueCallback;
import android.webkit.WebResourceRequest;
import android.webkit.WebView;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.z;
import com.mbridge.msdk.mbjscommon.base.BaseWebView;
import com.mbridge.msdk.mbjscommon.base.b;
import java.util.List;

public final class a extends b {
    String a;
    List<CampaignEx> b;
    com.mbridge.msdk.mbbanner.common.b.a c;
    private final String d = "BannerWebViewClient";

    public a(String str, List<CampaignEx> list, com.mbridge.msdk.mbbanner.common.b.a aVar) {
        this.a = str;
        this.b = list;
        this.c = aVar;
    }

    @Override
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        try {
            StringBuilder sb = new StringBuilder(BridgeUtil.JAVASCRIPT_STR);
            sb.append(com.mbridge.msdk.c.b.b.a().b());
            if (Build.VERSION.SDK_INT <= 19) {
                webView.loadUrl(sb.toString());
            } else {
                webView.evaluateJavascript(sb.toString(), new ValueCallback<String>() {
                    @Override
                    public final void onReceiveValue(String str2) {
                    }
                });
            }
        } catch (Throwable th) {
            z.c("BannerWebViewClient", "onPageStarted", th);
        }
    }

    @Override
    public final boolean shouldOverrideUrlLoading(WebView webView, WebResourceRequest webResourceRequest) {
        return super.shouldOverrideUrlLoading(webView, webResourceRequest);
    }

    @Override
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        try {
            z.d("BannerWebViewClient", "Use html to open url.");
            BaseWebView baseWebView = (BaseWebView) webView;
            if (System.currentTimeMillis() - baseWebView.lastTouchTime > com.mbridge.msdk.click.b.a.c && com.mbridge.msdk.click.b.a.a(this.b.get(0), baseWebView.getUrl(), com.mbridge.msdk.click.b.a.b)) {
                return false;
            }
            if (this.b.size() > 1) {
                com.mbridge.msdk.foundation.controller.a.f().j().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                str = null;
            }
            if (this.c != null) {
                this.c.a(false, str);
            }
            return true;
        } catch (Throwable th) {
            z.c("BannerWebViewClient", "shouldOverrideUrlLoading", th);
            return false;
        }
    }
}
