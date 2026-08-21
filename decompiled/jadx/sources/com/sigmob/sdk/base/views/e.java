package com.sigmob.sdk.base.views;

import android.content.Context;
import android.os.Build;
import android.util.Base64;
import android.view.WindowManager;
import android.webkit.CookieManager;
import android.webkit.JavascriptInterface;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.ValueCallback;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.nativead.APKStatusBroadcastReceiver;
import cz.msebera.android.httpclient.HttpHeaders;
import java.lang.ref.WeakReference;
import java.util.HashMap;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
public class e extends WebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static boolean f4950a;
    private APKStatusBroadcastReceiver b;
    private WeakReference<m.a> c;
    private BaseAdUnit d;
    private WebViewClient e;
    private Map<String, String> f;

    private class a {
        public a() {
        }

        @JavascriptInterface
        public int getApKDownloadProcess() {
            e.this.a();
            if (e.this.getContext() == null || e.this.d == null) {
                return -1;
            }
            long[] jArrA = com.sigmob.sdk.base.common.n.a(e.this.getContext(), e.this.d.getDownloadId());
            int i = (int) jArrA[2];
            if (i == 1) {
                return 0;
            }
            if (i != 2) {
                return i != 8 ? -1 : 100;
            }
            return (int) ((jArrA[0] * 100) / jArrA[1]);
        }
    }

    public e(Context context) {
        super(context);
        this.f = new HashMap();
        a(getSettings());
        if (!f4950a) {
            a(getContext());
            f4950a = true;
        }
        resumeTimers();
    }

    private void a(Context context) {
        if (Build.VERSION.SDK_INT == 19) {
            WebView webView = new WebView(context.getApplicationContext());
            webView.setBackgroundColor(0);
            webView.loadDataWithBaseURL(null, "", "text/html", "UTF-8", null);
            WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams();
            layoutParams.width = 1;
            layoutParams.height = 1;
            layoutParams.type = 2005;
            layoutParams.flags = 16777240;
            layoutParams.format = -2;
            layoutParams.gravity = 8388659;
            WindowManager windowManager = (WindowManager) context.getSystemService("window");
            if (windowManager != null) {
                windowManager.addView(webView, layoutParams);
            }
        }
    }

    private void a(WebSettings webSettings) {
        try {
            ReflectionUtil.MethodBuilder methodBuilder = new ReflectionUtil.MethodBuilder(webSettings, new String(Base64.decode(com.sigmob.sdk.base.h.C, 2)));
            methodBuilder.addParam(Boolean.TYPE, true);
            methodBuilder.execute();
        } catch (Exception e) {
            e.printStackTrace();
        }
        try {
            ReflectionUtil.MethodBuilder methodBuilder2 = new ReflectionUtil.MethodBuilder(webSettings, new String(Base64.decode(com.sigmob.sdk.base.h.D, 2)));
            methodBuilder2.addParam(Boolean.TYPE, true);
            methodBuilder2.execute();
        } catch (Exception e2) {
            e2.printStackTrace();
        }
        webSettings.setDomStorageEnabled(true);
        webSettings.setUseWideViewPort(true);
        webSettings.setBuiltInZoomControls(true);
        webSettings.setLoadWithOverviewMode(true);
        webSettings.setSupportZoom(true);
        webSettings.setDefaultTextEncodingName("UTF-8");
        webSettings.setCacheMode(2);
        webSettings.setPluginState(WebSettings.PluginState.ON);
        webSettings.setBlockNetworkImage(false);
        webSettings.setBlockNetworkLoads(false);
        if (Build.VERSION.SDK_INT >= 17) {
            webSettings.setMediaPlaybackRequiresUserGesture(false);
        }
        webSettings.setLoadsImagesAutomatically(true);
        webSettings.setAllowContentAccess(true);
        if (Build.VERSION.SDK_INT < 16) {
            webSettings.setAllowUniversalAccessFromFileURLs(false);
        }
        if (Build.VERSION.SDK_INT >= 26) {
            webSettings.setSafeBrowsingEnabled(false);
        }
        if (Build.VERSION.SDK_INT >= 21) {
            webSettings.setMixedContentMode(0);
        }
        addJavascriptInterface(new a(), "sigandroidapk");
    }

    public static void a(WebView webView) {
        CookieManager cookieManager = CookieManager.getInstance();
        if (Build.VERSION.SDK_INT >= 21) {
            cookieManager.setAcceptThirdPartyCookies(webView, com.sigmob.sdk.base.c.a().i());
        }
    }

    public static void c() {
        CookieManager cookieManager = CookieManager.getInstance();
        if (com.sigmob.sdk.base.c.a().i()) {
            cookieManager.setAcceptCookie(true);
            CookieManager.setAcceptFileSchemeCookies(true);
            return;
        }
        cookieManager.setAcceptCookie(false);
        CookieManager.setAcceptFileSchemeCookies(false);
        if (Build.VERSION.SDK_INT < 21) {
            cookieManager.removeSessionCookie();
            cookieManager.removeAllCookie();
        } else {
            cookieManager.removeSessionCookies(null);
            cookieManager.removeAllCookies(null);
            cookieManager.flush();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public m.a getListener() {
        WeakReference<m.a> weakReference = this.c;
        if (weakReference != null) {
            return weakReference.get();
        }
        return null;
    }

    public void a() {
        if (this.d == null || this.b != null) {
            return;
        }
        APKStatusBroadcastReceiver aPKStatusBroadcastReceiver = new APKStatusBroadcastReceiver(new m.a() { // from class: com.sigmob.sdk.base.views.e.1
            @Override // com.sigmob.sdk.base.common.m.a
            public void a(boolean z) {
                m.a listener = e.this.getListener();
                if (listener != null) {
                    listener.a(z);
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void a(boolean z, long j) {
                m.a listener = e.this.getListener();
                if (listener != null) {
                    listener.b(z, j);
                } else if (z) {
                    e.this.d();
                } else {
                    e.this.e();
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void b(boolean z) {
                m.a listener = e.this.getListener();
                if (listener != null) {
                    listener.b(z);
                } else if (z) {
                    e.this.g();
                } else {
                    e.this.e();
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void b(boolean z, long j) {
                m.a listener = e.this.getListener();
                if (listener != null) {
                    listener.b(z, j);
                } else if (z) {
                    e.this.f();
                } else {
                    e.this.e();
                }
            }
        }, this.d.getUuid());
        this.b = aPKStatusBroadcastReceiver;
        aPKStatusBroadcastReceiver.a(aPKStatusBroadcastReceiver);
    }

    public void a(m.a aVar) {
        this.c = new WeakReference<>(aVar);
    }

    void a(String str, ValueCallback valueCallback) {
        SigmobLog.d("Injecting Javascript into MRAID WebView:\n\t" + str);
        if (Build.VERSION.SDK_INT >= 19) {
            evaluateJavascript(str, valueCallback);
            return;
        }
        loadUrl(BridgeUtil.JAVASCRIPT_STR + str);
    }

    public void a(boolean z) {
        WebSettings settings;
        WebSettings.PluginState pluginState;
        if (Build.VERSION.SDK_INT >= 18) {
            return;
        }
        if (z) {
            settings = getSettings();
            pluginState = WebSettings.PluginState.ON;
        } else {
            settings = getSettings();
            pluginState = WebSettings.PluginState.OFF;
        }
        settings.setPluginState(pluginState);
    }

    public void b() {
        setWebChromeClient(new WebChromeClient() { // from class: com.sigmob.sdk.base.views.e.2
            @Override // android.webkit.WebChromeClient
            public boolean onJsAlert(WebView webView, String str, String str2, JsResult jsResult) {
                SigmobLog.i(str2);
                jsResult.confirm();
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public boolean onJsBeforeUnload(WebView webView, String str, String str2, JsResult jsResult) {
                SigmobLog.i(str2);
                jsResult.confirm();
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public boolean onJsConfirm(WebView webView, String str, String str2, JsResult jsResult) {
                SigmobLog.i(str2);
                jsResult.confirm();
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public boolean onJsPrompt(WebView webView, String str, String str2, String str3, JsPromptResult jsPromptResult) {
                SigmobLog.i(str2);
                jsPromptResult.confirm();
                return true;
            }
        });
    }

    public void b(boolean z) {
        if (z) {
            stopLoading();
            loadUrl("");
        }
        onPause();
    }

    void d() {
        a("sigmob.notifyApkDownloadStartEvent();", null);
    }

    /* JADX WARN: Type inference fix 'apply assigned field type' failed
    java.lang.UnsupportedOperationException: ArgType.getObject(), call class: class jadx.core.dex.instructions.args.ArgType$UnknownArg
    	at jadx.core.dex.instructions.args.ArgType.getObject(ArgType.java:593)
    	at jadx.core.dex.attributes.nodes.ClassTypeVarsAttr.getTypeVarsMapFor(ClassTypeVarsAttr.java:35)
    	at jadx.core.dex.nodes.utils.TypeUtils.replaceClassGenerics(TypeUtils.java:177)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.insertExplicitUseCast(FixTypesVisitor.java:397)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.tryFieldTypeWithNewCasts(FixTypesVisitor.java:359)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.applyFieldType(FixTypesVisitor.java:309)
    	at jadx.core.dex.visitors.typeinference.FixTypesVisitor.visit(FixTypesVisitor.java:94)
     */
    @Override // android.webkit.WebView
    public void destroy() {
        SigmobLog.d(" BaseWebView destroy called ");
        ViewUtil.removeFromParent(this);
        APKStatusBroadcastReceiver aPKStatusBroadcastReceiver = this.b;
        if (aPKStatusBroadcastReceiver != null) {
            aPKStatusBroadcastReceiver.b(aPKStatusBroadcastReceiver);
            this.b = null;
        }
        removeAllViews();
        super.destroy();
    }

    void e() {
        a("sigmob.notifyApkDownloadFailEvent();", null);
    }

    void f() {
        a("sigmob.notifyApkDownloadEndEvent();", null);
    }

    void g() {
        a("sigmob.notifyApkDownloadInstalledEvent();", null);
    }

    @Override // android.webkit.WebView
    public void loadUrl(String str) {
        this.f.put(HttpHeaders.REFERER, "");
        BaseAdUnit baseAdUnit = this.d;
        if (baseAdUnit != null && baseAdUnit.isDisablexRequestWith()) {
            this.f.put("X-Requested-With", "");
        }
        loadUrl(str, this.f);
    }

    @Override // android.webkit.WebView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    public void setAdUnit(BaseAdUnit baseAdUnit) {
        this.d = baseAdUnit;
    }

    @Override // android.webkit.WebView
    public void setWebViewClient(WebViewClient webViewClient) {
        this.e = webViewClient;
        super.setWebViewClient(webViewClient);
    }
}
