package com.tkay.expressad.foundation.webview;

import android.content.Context;
import android.graphics.Bitmap;
import android.os.Build;
import android.os.Handler;
import android.text.TextUtils;
import android.util.AttributeSet;
import android.view.View;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.LinearLayout;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.k;
import com.tkay.expressad.foundation.h.t;
import java.lang.reflect.Method;

public class BrowserView extends LinearLayout {
    private static final String a = "BrowserView";
    private String b;
    private ProgressBar c;
    private WebView d;
    private ToolBar e;
    private a f;
    private c g;

    public interface a {
        void a();

        boolean a(WebView webView, String str);

        void b();
    }

    public BrowserView(Context context, c cVar) {
        super(context);
        this.g = cVar;
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
        this.f = aVar;
    }

    public void loadUrl(String str) {
        WebView webView = this.d;
        if (webView != null) {
            webView.loadUrl(str);
        }
    }

    public void setWebView(WebView webView) {
        this.d = webView;
    }

    public void init() {
        setOrientation(1);
        setGravity(17);
        ProgressBar progressBar = new ProgressBar(getContext());
        this.c = progressBar;
        progressBar.setLayoutParams(new LinearLayout.LayoutParams(-1, 4));
        try {
            if (this.d == null) {
                this.d = b();
            }
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
            layoutParams.weight = 1.0f;
            this.d.setLayoutParams(layoutParams);
        } catch (Throwable unused) {
        }
        this.e = new ToolBar(getContext());
        this.e.setLayoutParams(new LinearLayout.LayoutParams(-1, t.b(getContext(), 40.0f)));
        this.e.setBackgroundColor(-1);
        addView(this.c);
        WebView webView = this.d;
        if (webView != null) {
            addView(webView);
        }
        addView(this.e);
        this.c.initResource(true);
        this.e.getItem("backward").setEnabled(false);
        this.e.getItem("forward").setEnabled(false);
        this.e.setOnItemClickListener(new View.OnClickListener() {
            @Override
            public final void onClick(View view) {
                if (BrowserView.this.d != null) {
                    BrowserView.this.d.stopLoading();
                }
                String str = (String) view.getTag();
                boolean z = false;
                if (TextUtils.equals(str, "backward")) {
                    BrowserView.this.e.getItem("forward").setEnabled(true);
                    if (BrowserView.this.d != null && BrowserView.this.d.canGoBack()) {
                        BrowserView.this.d.goBack();
                    }
                    View item = BrowserView.this.e.getItem("backward");
                    if (BrowserView.this.d != null && BrowserView.this.d.canGoBack()) {
                        z = true;
                    }
                    item.setEnabled(z);
                    return;
                }
                if (TextUtils.equals(str, "forward")) {
                    BrowserView.this.e.getItem("backward").setEnabled(true);
                    if (BrowserView.this.d != null && BrowserView.this.d.canGoForward()) {
                        BrowserView.this.d.goForward();
                    }
                    View item2 = BrowserView.this.e.getItem("forward");
                    if (BrowserView.this.d != null && BrowserView.this.d.canGoForward()) {
                        z = true;
                    }
                    item2.setEnabled(z);
                    return;
                }
                if (TextUtils.equals(str, "refresh")) {
                    BrowserView.this.e.getItem("backward").setEnabled(BrowserView.this.d != null && BrowserView.this.d.canGoBack());
                    View item3 = BrowserView.this.e.getItem("forward");
                    if (BrowserView.this.d != null && BrowserView.this.d.canGoForward()) {
                        z = true;
                    }
                    item3.setEnabled(z);
                    if (BrowserView.this.d != null) {
                        BrowserView.this.d.loadUrl(BrowserView.this.b);
                        return;
                    }
                    return;
                }
                if (!TextUtils.equals(str, "exits") || BrowserView.this.f == null) {
                    return;
                }
                BrowserView.this.f.a();
            }
        });
    }

    private void a() {
        ProgressBar progressBar = new ProgressBar(getContext());
        this.c = progressBar;
        progressBar.setLayoutParams(new LinearLayout.LayoutParams(-1, 4));
        try {
            if (this.d == null) {
                this.d = b();
            }
            LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
            layoutParams.weight = 1.0f;
            this.d.setLayoutParams(layoutParams);
        } catch (Throwable unused) {
        }
        this.e = new ToolBar(getContext());
        this.e.setLayoutParams(new LinearLayout.LayoutParams(-1, t.b(getContext(), 40.0f)));
        this.e.setBackgroundColor(-1);
        addView(this.c);
        WebView webView = this.d;
        if (webView != null) {
            addView(webView);
        }
        addView(this.e);
    }

    private WebView b() {
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
                    th.getMessage();
                }
            }
            if (Build.VERSION.SDK_INT >= 17) {
                settings.setMediaPlaybackRequiresUserGesture(false);
            }
            try {
                if (Build.VERSION.SDK_INT >= 16) {
                    settings.setAllowUniversalAccessFromFileURLs(false);
                }
            } catch (Throwable th2) {
                th2.getMessage();
            }
            try {
                if (Build.VERSION.SDK_INT >= 21) {
                    settings.setMixedContentMode(0);
                }
            } catch (Exception e) {
                e.getMessage();
            }
            settings.setDatabaseEnabled(true);
            String path = getContext().getDir("database", 0).getPath();
            settings.setDatabasePath(path);
            settings.setGeolocationEnabled(true);
            settings.setGeolocationDatabasePath(path);
            try {
                Method declaredMethod = WebSettings.class.getDeclaredMethod("setDisplayZoomControls", Boolean.TYPE);
                declaredMethod.setAccessible(true);
                declaredMethod.invoke(settings, Boolean.FALSE);
            } catch (Exception e2) {
                e2.getMessage();
            }
            try {
                Method declaredMethod2 = WebSettings.class.getDeclaredMethod(com.tkay.core.common.l.c.b("c2V0QWxsb3dVbml2ZXJzYWxBY2Nlc3NGcm9tRmlsZVVSTHM="), Boolean.TYPE);
                declaredMethod2.setAccessible(true);
                declaredMethod2.invoke(settings, Boolean.TRUE);
            } catch (Throwable unused) {
            }
        } catch (Throwable th3) {
            th3.getMessage();
        }
        webView.setDownloadListener(new DownloadListener(this.g));
        webView.setWebViewClient(new WebViewClient() {
            @Override
            public final void onPageStarted(WebView webView2, String str, Bitmap bitmap) {
                BrowserView.this.b = str;
                if (BrowserView.this.f != null) {
                    a unused2 = BrowserView.this.f;
                }
                BrowserView.this.c.setVisible(true);
                BrowserView.this.c.setProgressState(5);
            }

            @Override
            public final boolean shouldOverrideUrlLoading(WebView webView2, String str) {
                BrowserView.this.e.getItem("backward").setEnabled(true);
                BrowserView.this.e.getItem("forward").setEnabled(false);
                if (BrowserView.this.f != null) {
                    BrowserView.this.f.a(webView2, str);
                }
                return false;
            }
        });
        if (k.d() <= 10) {
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
                        BrowserView.this.c.setProgressState(7);
                        new Handler().postDelayed(new Runnable() {
                            @Override
                            public final void run() {
                                BrowserView.this.c.setVisible(false);
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
                        BrowserView.this.c.setProgressState(7);
                        new Handler().postDelayed(new Runnable() {
                            @Override
                            public final void run() {
                                BrowserView.this.c.setVisible(false);
                            }
                        }, 200L);
                    }
                }
            };
        }
        webView.setWebChromeClient(webChromeClient);
        return webView;
    }

    public static final class DownloadListener implements android.webkit.DownloadListener {
        private c campaignEx;
        private String title;

        @Override
        public final void onDownloadStart(String str, String str2, String str3, String str4, long j) {
        }

        public DownloadListener(c cVar) {
            this.campaignEx = cVar;
        }

        public DownloadListener() {
        }

        public final void setTitle(String str) {
            this.title = str;
        }
    }

    public void destroy() {
        WebView webView = this.d;
        if (webView != null) {
            webView.stopLoading();
            this.d.setWebViewClient(null);
            this.d.destroy();
            removeAllViews();
        }
    }
}
