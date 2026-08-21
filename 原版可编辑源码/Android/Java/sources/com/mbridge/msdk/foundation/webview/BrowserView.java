package com.mbridge.msdk.foundation.webview;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Handler;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.webkit.DownloadListener;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.LinearLayout;
import com.mbridge.msdk.foundation.entity.CampaignEx;
import com.mbridge.msdk.foundation.tools.ad;
import com.mbridge.msdk.foundation.tools.ae;
import com.mbridge.msdk.foundation.tools.v;
import com.mbridge.msdk.foundation.tools.z;
import java.lang.reflect.Method;

public class BrowserView extends LinearLayout {
    private String a;
    private ProgressBar b;
    private WebView c;
    private ToolBar d;
    private a e;
    private CampaignEx f;

    public interface a {
        void a();

        void a(WebView webView, int i, String str, String str2);

        void a(WebView webView, String str);

        void a(WebView webView, String str, Bitmap bitmap);

        boolean b(WebView webView, String str);

        void c(WebView webView, String str);
    }

    public BrowserView(Context context, CampaignEx campaignEx) {
        super(context);
        this.f = campaignEx;
        init();
    }

    public BrowserView(Context context) {
        super(context);
        init();
    }

    public BrowserView(Context context, AttributeSet attributeSet) {
        super(context, attributeSet);
        init();
    }

    public void setListener(a aVar) {
        this.e = aVar;
    }

    public void loadUrl(String str) {
        WebView webView = this.c;
        if (webView != null) {
            webView.loadUrl(str);
        }
    }

    public void setWebView(WebView webView) {
        this.c = webView;
    }

    public void init() {
        setOrientation(1);
        setGravity(17);
        ProgressBar progressBar = new ProgressBar(getContext());
        this.b = progressBar;
        progressBar.setLayoutParams(new LinearLayout.LayoutParams(-1, 4));
        try {
            if (this.c == null) {
                this.c = a();
            }
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
            layoutParams.weight = 1.0f;
            this.c.setLayoutParams(layoutParams);
        } catch (Throwable th) {
            z.c("BrowserView", "webview is error", th);
        }
        this.d = new ToolBar(getContext());
        this.d.setLayoutParams(new LinearLayout.LayoutParams(-1, ae.b(getContext(), 40.0f)));
        this.d.setBackgroundColor(-1);
        addView(this.b);
        WebView webView = this.c;
        if (webView != null) {
            addView(webView);
        }
        addView(this.d);
        this.b.initResource(true);
        this.d.getItem("backward").setEnabled(false);
        this.d.getItem("forward").setEnabled(false);
        this.d.setOnItemClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (BrowserView.this.c != null) {
                    BrowserView.this.c.stopLoading();
                }
                String str = (String) view.getTag();
                boolean z = false;
                if (TextUtils.equals(str, "backward")) {
                    BrowserView.this.d.getItem("forward").setEnabled(true);
                    if (BrowserView.this.c != null && BrowserView.this.c.canGoBack()) {
                        BrowserView.this.c.goBack();
                    }
                    View item = BrowserView.this.d.getItem("backward");
                    if (BrowserView.this.c != null && BrowserView.this.c.canGoBack()) {
                        z = true;
                    }
                    item.setEnabled(z);
                    return;
                }
                if (TextUtils.equals(str, "forward")) {
                    BrowserView.this.d.getItem("backward").setEnabled(true);
                    if (BrowserView.this.c != null && BrowserView.this.c.canGoForward()) {
                        BrowserView.this.c.goForward();
                    }
                    View item2 = BrowserView.this.d.getItem("forward");
                    if (BrowserView.this.c != null && BrowserView.this.c.canGoForward()) {
                        z = true;
                    }
                    item2.setEnabled(z);
                    return;
                }
                if (TextUtils.equals(str, "refresh")) {
                    BrowserView.this.d.getItem("backward").setEnabled(BrowserView.this.c != null && BrowserView.this.c.canGoBack());
                    View item3 = BrowserView.this.d.getItem("forward");
                    if (BrowserView.this.c != null && BrowserView.this.c.canGoForward()) {
                        z = true;
                    }
                    item3.setEnabled(z);
                    if (BrowserView.this.c != null) {
                        BrowserView.this.c.loadUrl(BrowserView.this.a);
                        return;
                    }
                    return;
                }
                if (!TextUtils.equals(str, "exits") || BrowserView.this.e == null) {
                    return;
                }
                BrowserView.this.e.a();
            }
        });
    }

    private WebView a() {
        WebChromeClient webChromeClient;
        WebView webView = new WebView(getContext());
        try {
            WebSettings settings = webView.getSettings();
            settings.setJavaScriptEnabled(true);
            settings.setAppCacheEnabled(true);
            settings.setAppCacheMaxSize(5242880L);
            settings.setAllowFileAccess(true);
            settings.setBuiltInZoomControls(true);
            settings.setJavaScriptCanOpenWindowsAutomatically(true);
            settings.setDomStorageEnabled(true);
            settings.setSupportZoom(false);
            settings.setSavePassword(false);
            settings.setDatabaseEnabled(true);
            settings.setUseWideViewPort(true);
            settings.setLoadWithOverviewMode(true);
            settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
            if (Build.VERSION.SDK_INT >= 26) {
                try {
                    settings.setSafeBrowsingEnabled(false);
                } catch (Throwable th) {
                    z.d("BrowserView", th.getMessage());
                }
            }
            if (Build.VERSION.SDK_INT >= 17) {
                settings.setMediaPlaybackRequiresUserGesture(false);
            }
            try {
                settings.setAllowUniversalAccessFromFileURLs(true);
            } catch (Throwable th2) {
                z.d("BrowserView", th2.getMessage());
            }
            try {
                if (Build.VERSION.SDK_INT >= 21) {
                    settings.setMixedContentMode(0);
                }
            } catch (Exception e) {
                z.d("BrowserView", e.getMessage());
            }
            settings.setDatabaseEnabled(true);
            String path = getContext().getDir("database", 0).getPath();
            settings.setDatabasePath(path);
            settings.setGeolocationEnabled(true);
            settings.setGeolocationDatabasePath(path);
            try {
                Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(settings, false);
            } catch (Exception e2) {
                z.d("BrowserView", e2.getMessage());
            }
        } catch (Throwable th3) {
            z.d("BrowserView", th3.getMessage());
        }
        webView.setDownloadListener(new MBDownloadListener(this.f));
        webView.setWebViewClient(new WebViewClient() {
            @Override
            public final void onLoadResource(WebView webView2, String str) {
                super.onLoadResource(webView2, str);
                z.b("BrowserView", "onLoadResource 开始! = " + str);
                if (BrowserView.this.e != null) {
                    BrowserView.this.e.a(webView2, str);
                }
            }

            @Override
            public final void onPageStarted(WebView webView2, String str, Bitmap bitmap) {
                z.b("BrowserView", "开始! = " + str);
                BrowserView.this.a = str;
                if (BrowserView.this.e != null) {
                    BrowserView.this.e.a(webView2, str, bitmap);
                }
                BrowserView.this.b.setVisible(true);
                BrowserView.this.b.setProgressState(5);
            }

            @Override
            public final void onPageFinished(WebView webView2, String str) {
                if (BrowserView.this.e != null) {
                    BrowserView.this.e.c(webView2, str);
                }
            }

            @Override
            public final void onReceivedError(WebView webView2, int i, String str, String str2) {
                if (BrowserView.this.e != null) {
                    BrowserView.this.e.a(webView2, i, str, str2);
                }
            }

            @Override
            public final boolean shouldOverrideUrlLoading(WebView webView2, String str) {
                z.b("BrowserView", "js大跳! = " + str);
                BrowserView.this.d.getItem("backward").setEnabled(true);
                BrowserView.this.d.getItem("forward").setEnabled(false);
                if (BrowserView.this.e != null) {
                    BrowserView.this.e.b(webView2, str);
                }
                return false;
            }
        });
        if (v.D() <= 10) {
            webChromeClient = new WebChromeClient() {
                @Override
                public final boolean onJsAlert(WebView webView2, String str, String str2, JsResult jsResult) {
                    return true;
                }

                @Override
                public final boolean onJsConfirm(WebView webView2, String str, String str2, JsResult jsResult) {
                    return true;
                }

                @Override
                public final boolean onJsPrompt(WebView webView2, String str, String str2, String str3, JsPromptResult jsPromptResult) {
                    return true;
                }

                @Override
                public final void onProgressChanged(WebView webView2, int i) {
                    if (i == 100) {
                        BrowserView.this.b.setProgressState(7);
                        new Handler().postDelayed(new Runnable() {
                            @Override
                            public final void run() {
                                BrowserView.this.b.setVisible(false);
                            }
                        }, 200L);
                    }
                }
            };
        } else {
            webChromeClient = new WebChromeClient() {
                @Override
                public final void onProgressChanged(WebView webView2, int i) {
                    if (i == 100) {
                        BrowserView.this.b.setProgressState(7);
                        new Handler().postDelayed(new Runnable() {
                            @Override
                            public final void run() {
                                BrowserView.this.b.setVisible(false);
                            }
                        }, 200L);
                    }
                }
            };
        }
        webView.setWebChromeClient(webChromeClient);
        return webView;
    }

    public static final class MBDownloadListener implements DownloadListener {
        private CampaignEx campaignEx;
        private String title;

        public MBDownloadListener(CampaignEx campaignEx) {
            this.campaignEx = campaignEx;
        }

        public MBDownloadListener() {
        }

        public final void setTitle(String str) {
            this.title = str;
        }

        @Override
        public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
            ad.a(this.title, str, this.campaignEx, true);
        }
    }

    public void destroy() {
        WebView webView = this.c;
        if (webView != null) {
            webView.stopLoading();
            this.c.setWebViewClient(null);
            this.c.destroy();
            this.c = null;
            removeAllViews();
        }
    }
}
