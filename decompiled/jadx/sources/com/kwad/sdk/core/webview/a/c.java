package com.kwad.sdk.core.webview.a;

import android.content.Context;
import android.content.Intent;
import android.graphics.Bitmap;
import android.net.Uri;
import android.os.Build;
import android.webkit.RenderProcessGoneDetail;
import android.webkit.WebView;
import com.kwad.sdk.core.report.z;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.service.ServiceProvider;

/* JADX INFO: loaded from: classes2.dex */
public class c extends com.kwad.sdk.core.webview.a.a {
    private a jX;

    public static class a {
        private KsAdWebView.c MY;
        private z.b asH;
        private KsAdWebView.d ayt;
        private KsAdWebView.b ayu;
        private boolean ayx;
        private AdTemplate mAdTemplate;
        private final Context mContext;
        private boolean ayv = true;
        private boolean ayw = true;
        private boolean ays = true;

        public a(Context context) {
            this.mContext = context;
        }

        public final boolean Ea() {
            return this.ayw;
        }

        public final boolean Eb() {
            return this.ays;
        }

        public final boolean Ec() {
            return this.ayv;
        }

        public final boolean Ed() {
            return this.ayx;
        }

        public final a a(KsAdWebView.b bVar) {
            this.ayu = bVar;
            return this;
        }

        public final a b(z.b bVar) {
            this.asH = bVar;
            return this;
        }

        public final a b(KsAdWebView.d dVar) {
            this.ayt = dVar;
            return this;
        }

        public final a bk(boolean z) {
            this.ayw = z;
            return this;
        }

        public final a bl(boolean z) {
            this.ayv = z;
            return this;
        }

        public final a bm(boolean z) {
            this.ayx = true;
            return this;
        }

        public final a c(KsAdWebView.c cVar) {
            this.MY = cVar;
            return this;
        }

        public final a cy(AdTemplate adTemplate) {
            this.mAdTemplate = adTemplate;
            return this;
        }

        public final AdTemplate getAdTemplate() {
            return this.mAdTemplate;
        }

        public final z.b getClientParams() {
            return this.asH;
        }

        public final Context getContext() {
            return this.mContext;
        }

        public final KsAdWebView.d getWebListener() {
            return this.ayt;
        }

        public final KsAdWebView.b lT() {
            return this.ayu;
        }

        public final KsAdWebView.c oR() {
            return this.MY;
        }
    }

    public final void dX(String str) {
        this.mUniqueId = str;
    }

    public final a getClientConfig() {
        return this.jX;
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        super.onPageFinished(webView, str);
        com.kwad.sdk.core.webview.b.c.b.ab(this.mUniqueId, "onPageFinished");
        a aVar = this.jX;
        if (aVar == null || aVar.getWebListener() == null) {
            return;
        }
        this.jX.getWebListener().onPageFinished();
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        super.onPageStarted(webView, str, bitmap);
        com.kwad.sdk.core.webview.b.c.b.ab(this.mUniqueId, "onPageStart");
        a aVar = this.jX;
        if (aVar == null || aVar.getWebListener() == null) {
            return;
        }
        this.jX.getWebListener().onPageStart();
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        super.onReceivedError(webView, i, str, str2);
        com.kwad.sdk.core.e.c.d("KsAdWebViewClient", "onReceivedError " + i);
        a aVar = this.jX;
        if (aVar != null && aVar.getWebListener() != null) {
            this.jX.getWebListener().onReceivedHttpError(i, str, str2);
        }
        com.kwad.sdk.core.webview.b.c.b.ad(str2, str);
    }

    @Override // android.webkit.WebViewClient
    public boolean onRenderProcessGone(WebView webView, RenderProcessGoneDetail renderProcessGoneDetail) {
        return (Build.VERSION.SDK_INT >= 26 && renderProcessGoneDetail != null && renderProcessGoneDetail.didCrash()) || super.onRenderProcessGone(webView, renderProcessGoneDetail);
    }

    public final void setClientConfig(a aVar) {
        this.jX = aVar;
        setNeedHybridLoad(aVar.Eb());
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        com.kwad.sdk.core.e.c.w("KsAdWebViewClient", "shouldOverrideUrlLoading url=" + str);
        com.kwad.sdk.core.webview.b.c.b.ab(this.mUniqueId, "shouldOverrideUrlLoading");
        try {
        } catch (Exception e) {
            com.kwad.sdk.core.e.c.printStackTrace(e);
        }
        if (!str.startsWith("http") && !str.startsWith("https")) {
            if (!str.startsWith("tel:") && !str.startsWith("sms:")) {
                if (this.jX != null && this.jX.Ea()) {
                    int iJ = ((com.kwad.sdk.service.a.a) ServiceProvider.get(com.kwad.sdk.service.a.a.class)).j(this.jX.getContext(), str);
                    if (iJ == 1) {
                        if (this.jX.lT() != null) {
                            this.jX.lT().onSuccess();
                        }
                        com.kwad.sdk.core.report.a.a(this.jX.getAdTemplate(), "", 2, (z.b) null);
                        return true;
                    }
                    if (this.jX.lT() != null) {
                        this.jX.lT().onFailed();
                    }
                    if (iJ == -1) {
                        com.kwad.sdk.core.report.a.b(this.jX.getAdTemplate(), "", 2, (z.b) null);
                    }
                }
                return true;
            }
            Intent intent = new Intent("android.intent.action.VIEW", Uri.parse(str));
            if (this.jX != null) {
                this.jX.getContext().startActivity(intent);
            }
            return true;
        }
        return super.shouldOverrideUrlLoading(webView, str);
    }
}
