package com.kwad.components.core.offline.init.d;

import android.content.Context;
import android.os.Build;
import android.webkit.CookieManager;
import android.webkit.WebView;
import android.widget.FrameLayout;
import com.kwad.components.offline.api.core.webview.BaseKsWebView;
import com.kwad.sdk.core.response.model.AdTemplate;
import com.kwad.sdk.core.webview.KsAdWebView;
import com.kwad.sdk.utils.bp;

public final class a extends BaseKsWebView {
    private KsAdWebView Mp;
    private boolean enableScroll;

    public a(Context context) {
        super(context);
        init(context);
    }

    private void init(Context context) {
        setBackgroundColor(0);
        this.Mp = new KsAdWebView(context);
        this.Mp.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        this.Mp.setBackgroundColor(0);
        this.Mp.setClientConfig(this.Mp.getClientConfig().b(new KsAdWebView.d() {
            @Override
            public final void onPageFinished() {
                if (a.this.mWebLoadListener != null) {
                    a.this.mWebLoadListener.onPageFinished();
                }
            }

            @Override
            public final void onPageStart() {
                if (a.this.mWebLoadListener != null) {
                    a.this.mWebLoadListener.onPageStart();
                }
            }

            @Override
            public final void onReceivedHttpError(int i, String str, String str2) {
                if (a.this.mWebLoadListener != null) {
                    a.this.mWebLoadListener.onReceivedHttpError(i, str, str2);
                }
            }
        }).a(new KsAdWebView.b() {
            @Override
            public final void onFailed() {
                if (a.this.mDeeplinkListener != null) {
                    a.this.mDeeplinkListener.onFailed();
                }
            }

            @Override
            public final void onSuccess() {
                if (a.this.mDeeplinkListener != null) {
                    a.this.mDeeplinkListener.onSuccess();
                }
            }
        }));
        addView(this.Mp);
    }

    @Override
    public final void addJavascriptInterface(Object obj, String str) {
        this.Mp.addJavascriptInterface(obj, str);
    }

    @Override
    public final void callJs(String str) {
        bp.a(this.Mp, str, (String) null);
    }

    @Override
    public final void callJs(String str, String str2) {
        bp.a(this.Mp, str, str2);
    }

    @Override
    public final void destroy() {
        this.Mp.destroy();
    }

    @Override
    public final void loadUrl(String str) {
        this.Mp.loadUrl(str);
    }

    @Override
    public final void scrollBy(int i, int i2) {
        if (this.enableScroll) {
            this.Mp.scrollBy(i, i2);
        }
    }

    @Override
    public final void scrollTo(int i, int i2) {
        if (this.enableScroll) {
            this.Mp.scrollTo(i, i2);
        }
    }

    @Override
    public final void setAcceptThirdPartyCookies(boolean z) {
        if (Build.VERSION.SDK_INT >= 21) {
            CookieManager.getInstance().setAcceptThirdPartyCookies(this.Mp, z);
        }
    }

    @Override
    public final void setAllowContentAccess(boolean z) {
        this.Mp.getSettings().setAllowContentAccess(z);
    }

    @Override
    public final void setAllowFileAccess(boolean z) {
        this.Mp.getSettings().setAllowFileAccess(z);
    }

    @Override
    public final void setAllowFileAccessFromFileURLs(boolean z) {
        this.Mp.getSettings().setAllowFileAccessFromFileURLs(z);
    }

    @Override
    public final void setAllowUniversalAccessFromFileURLs(boolean z) {
        this.Mp.getSettings().setAllowUniversalAccessFromFileURLs(z);
    }

    @Override
    public final void setCacheMode(int i) {
        this.Mp.getSettings().setCacheMode(i);
    }

    @Override
    public final void setContextUniqId(int i) {
        AdTemplate adTemplateAu = com.kwad.components.core.offline.api.b.a.a.au(i);
        if (adTemplateAu != null) {
            this.Mp.getClientConfig().cy(adTemplateAu);
        }
    }

    @Override
    public final void setDebugEnabled(boolean z) {
        if (Build.VERSION.SDK_INT >= 19) {
            WebView.setWebContentsDebuggingEnabled(z);
        }
    }

    @Override
    public final void setDeeplinkEnabled(boolean z) {
        this.Mp.getClientConfig().bk(z);
    }

    @Override
    public final void setEnableScroll(boolean z) {
        this.enableScroll = z;
    }

    @Override
    public final void setEnableWebCache(boolean z) {
        this.Mp.setNeedHybridLoad(z);
    }

    @Override
    public final void setInnerDownloadEnabled(boolean z) {
        this.Mp.getClientConfig().bl(z);
    }

    @Override
    public final void setJavaScriptEnabled(boolean z) {
        this.Mp.getSettings().setJavaScriptEnabled(z);
    }

    @Override
    public final void setMixedContentMode(int i) {
        if (Build.VERSION.SDK_INT >= 21) {
            this.Mp.getSettings().setMixedContentMode(i);
        }
    }

    @Override
    public final void setSavePassword(boolean z) {
        this.Mp.getSettings().setSavePassword(z);
    }

    @Override
    public final void setTextZoom(int i) {
        this.Mp.getSettings().setTextZoom(i);
    }
}
