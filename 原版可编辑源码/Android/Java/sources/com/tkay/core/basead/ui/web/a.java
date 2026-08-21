package com.tkay.core.basead.ui.web;

import android.graphics.Bitmap;
import android.text.TextUtils;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.tkay.core.common.f.an;
import com.tkay.core.common.res.d;
import org.json.JSONArray;

final class a extends WebViewClient {
    private WebLandPageActivity a;

    @Override
    public final void onReceivedError(WebView webView, int i, String str, String str2) {
    }

    public a(WebLandPageActivity webLandPageActivity) {
        this.a = webLandPageActivity;
    }

    @Override
    public final boolean shouldOverrideUrlLoading(WebView webView, String str) {
        if (!TextUtils.isEmpty(str) && !d.a.equals(str)) {
            WebLandPageActivity webLandPageActivity = this.a;
            if (webLandPageActivity != null) {
                if (webLandPageActivity.b == null) {
                    webLandPageActivity.b = new JSONArray();
                }
                webLandPageActivity.b.put(str);
            }
            an anVarA = com.tkay.core.basead.a.a.a(webView.getContext(), str);
            if (anVarA.m) {
                WebLandPageActivity webLandPageActivity2 = this.a;
                if (webLandPageActivity2 != null) {
                    webLandPageActivity2.a(anVarA);
                }
                return true;
            }
            WebLandPageActivity webLandPageActivity3 = this.a;
            if (webLandPageActivity3 != null) {
                webLandPageActivity3.a(anVarA);
            }
            an anVarA2 = com.tkay.core.basead.a.a.a(str);
            WebLandPageActivity webLandPageActivity4 = this.a;
            if (webLandPageActivity4 != null) {
                webLandPageActivity4.a(anVarA2);
            }
            if (!TextUtils.equals(anVarA2.o, str)) {
                webView.loadUrl(anVarA2.o);
                return true;
            }
        }
        return false;
    }

    @Override
    public final void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        WebProgressBarView webProgressBarViewA = this.a.a();
        if (webProgressBarViewA != null) {
            webProgressBarViewA.setVisibility(0);
            webProgressBarViewA.setProgress(0);
        }
    }

    @Override
    public final void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        this.a.a(webView, str);
    }

    @Override
    public final boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
        this.a.finish();
        return true;
    }
}
