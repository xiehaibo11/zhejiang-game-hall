package com.kwad.sdk.core.webview;

import android.content.Context;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.util.AttributeSet;
import android.view.accessibility.AccessibilityManager;
import android.webkit.DownloadListener;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.kwad.sdk.core.report.KSLoggerReporter;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.a.c;
import com.kwad.sdk.m.l;
import com.kwad.sdk.service.ServiceProvider;
import com.kwad.sdk.utils.bo;
import com.kwad.sdk.utils.k;
import com.kwad.sdk.utils.s;
import com.sigmob.sdk.base.mta.PointCategory;

/* JADX INFO: loaded from: classes2.dex */
public class KsAdWebView extends com.kwad.sdk.core.webview.c {
    private com.kwad.sdk.core.webview.a.c ayl;
    private String aym;
    private long ayn;
    private com.kwad.sdk.core.webview.d ayo;
    private c.a jX;
    private String mUniqueId;

    class a implements DownloadListener {
        private a() {
        }

        /* synthetic */ a(KsAdWebView ksAdWebView, byte b) {
            this();
        }

        @Override // android.webkit.DownloadListener
        public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
            if (KsAdWebView.this.jX == null || KsAdWebView.this.jX.getAdTemplate() == null || !KsAdWebView.this.jX.Ec()) {
                try {
                    KsAdWebView.this.getContext().startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                    return;
                } catch (Exception e) {
                    com.kwad.sdk.core.e.c.printStackTrace(e);
                    return;
                }
            }
            com.kwad.sdk.core.response.b.d.cg(KsAdWebView.this.jX.getAdTemplate()).adConversionInfo.appDownloadUrl = str;
            KsAdWebView.this.jX.getAdTemplate().isWebViewDownload = true;
            c.a readyClientConfig = KsAdWebView.this.getReadyClientConfig();
            if (readyClientConfig != null) {
                readyClientConfig.cy(KsAdWebView.this.jX.getAdTemplate());
            }
            ((com.kwad.sdk.service.a.a) ServiceProvider.get(com.kwad.sdk.service.a.a.class)).g(l.wrapContextIfNeed(KsAdWebView.this.getContext()), KsAdWebView.this.jX.getAdTemplate());
        }
    }

    public interface b {
        void onFailed();

        void onSuccess();
    }

    public interface c {
        void oS();
    }

    public interface d {
        void onPageFinished();

        void onPageStart();

        void onReceivedHttpError(int i, String str, String str2);
    }

    public KsAdWebView(Context context) {
        super(context);
        init(context);
    }

    public KsAdWebView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        init(context);
    }

    public KsAdWebView(Context context, AttributeSet attributeSet, int i) {
        super(context, attributeSet, i);
        init(context);
    }

    public KsAdWebView(Context context, AttributeSet attributeSet, int i, boolean z) {
        super(context, attributeSet, i, z);
        init(context);
    }

    private String DZ() {
        return "KSADSDK_V3.3.42_" + getContext().getPackageName() + "_" + k.bQ(getContext());
    }

    /* JADX INFO: Access modifiers changed from: private */
    public c.a getReadyClientConfig() {
        com.kwad.sdk.core.webview.a.c cVar = this.ayl;
        if (cVar == null || cVar.getClientConfig() == null) {
            return null;
        }
        return this.ayl.getClientConfig();
    }

    private void init(Context context) {
        com.kwad.sdk.core.e.c.i("KsAdWebView", PointCategory.INIT);
        setAccessibilityStateDisable(context);
        WebSettings webSettingsA = bo.a(this);
        webSettingsA.setUseWideViewPort(true);
        webSettingsA.setDomStorageEnabled(true);
        setVerticalScrollBarEnabled(false);
        com.kwad.sdk.core.webview.a.c cVar = new com.kwad.sdk.core.webview.a.c() { // from class: com.kwad.sdk.core.webview.KsAdWebView.1
            @Override // com.kwad.sdk.core.webview.a.c, android.webkit.WebViewClient
            public final void onPageFinished(WebView webView, String str) {
                super.onPageFinished(webView, str);
                if (KsAdWebView.this.ayo != null) {
                    KsAdWebView.this.ayo.c(KsAdWebView.this.jX);
                }
                AdTemplate adTemplate = KsAdWebView.this.jX.getAdTemplate();
                KSLoggerReporter.ReportClient.CONVERT_H5WEB.buildMethodCheck(adTemplate != null ? adTemplate.getBusinessType() : null, "h5WebLoadFinish").report();
            }

            @Override // com.kwad.sdk.core.webview.a.c, android.webkit.WebViewClient
            public final void onReceivedError(WebView webView, int i, String str, String str2) {
                super.onReceivedError(webView, i, str, str2);
                if (KsAdWebView.this.ayo != null) {
                    com.kwad.sdk.core.webview.d unused = KsAdWebView.this.ayo;
                    com.kwad.sdk.core.webview.d.d(KsAdWebView.this.jX);
                }
            }
        };
        this.ayl = cVar;
        cVar.dX(this.mUniqueId);
        setWebViewClient(this.ayl);
        setWebChromeClient(new com.kwad.sdk.core.webview.a.b());
        setDownloadListener(new a(this, (byte) 0));
        webSettingsA.setUserAgentString(webSettingsA.getUserAgentString() + DZ());
        c.a aVar = new c.a(getContext());
        this.jX = aVar;
        if (aVar.Ed()) {
            this.ayo = new com.kwad.sdk.core.webview.d();
        }
    }

    private void setAccessibilityStateDisable(Context context) {
        if (Build.VERSION.SDK_INT != 17 || context == null) {
            return;
        }
        try {
            AccessibilityManager accessibilityManager = (AccessibilityManager) context.getSystemService("accessibility");
            if (accessibilityManager != null && accessibilityManager.isEnabled()) {
                s.f(accessibilityManager, "setState", 0);
            }
        } catch (Throwable unused) {
        }
    }

    public c.a getClientConfig() {
        return this.jX;
    }

    public long getLoadTime() {
        return this.ayn;
    }

    public String getLoadUrl() {
        return this.aym;
    }

    public String getUniqueId() {
        return this.mUniqueId;
    }

    @Override // android.webkit.WebView
    public void loadUrl(String str) {
        com.kwad.sdk.core.webview.b.c.b.ei(this.mUniqueId);
        this.aym = str;
        this.ayn = System.currentTimeMillis();
        super.loadUrl(str);
        AdTemplate adTemplate = this.jX.getAdTemplate();
        KSLoggerReporter.ReportClient.CONVERT_H5WEB.buildMethodCheck(adTemplate != null ? adTemplate.getBusinessType() : null, "h5WebLoadStart").report();
    }

    public final void onActivityCreate() {
        com.kwad.sdk.core.webview.d dVar = this.ayo;
        if (dVar != null) {
            dVar.a(this.jX);
        }
    }

    public final void onActivityDestroy() {
        release();
        com.kwad.sdk.core.webview.d dVar = this.ayo;
        if (dVar != null) {
            dVar.b(this.jX);
        }
    }

    @Override // android.webkit.WebView, android.view.View
    protected void onScrollChanged(int i, int i2, int i3, int i4) {
        super.onScrollChanged(i, i2, i3, i4);
        c.a aVar = this.jX;
        if (aVar == null || aVar.oR() == null) {
            return;
        }
        this.jX.oR().oS();
    }

    public void setClientConfig(c.a aVar) {
        this.ayl.setClientConfig(aVar);
    }

    @Override // android.webkit.WebView
    public void setWebChromeClient(WebChromeClient webChromeClient) {
        if (com.kwad.framework.a.a.ml.booleanValue() && !(webChromeClient instanceof com.kwad.sdk.core.webview.a.b)) {
            throw new IllegalArgumentException("client is not instanceof KSWebChromeClient");
        }
        super.setWebChromeClient(webChromeClient);
    }

    @Override // android.webkit.WebView
    public void setWebViewClient(WebViewClient webViewClient) {
        if (com.kwad.framework.a.a.ml.booleanValue() && !(webViewClient instanceof com.kwad.sdk.core.webview.a.a)) {
            throw new IllegalArgumentException("Not supported set webViewClient, please check it");
        }
        super.setWebViewClient(webViewClient);
    }
}
