package com.sigmob.sdk.mraid2;

import android.content.Context;
import android.os.Build;
import android.util.Base64;
import android.util.Log;
import android.view.WindowManager;
import android.webkit.JavascriptInterface;
import android.webkit.ValueCallback;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.czhj.sdk.common.utils.ReflectionUtil;
import com.czhj.sdk.common.utils.ViewUtil;
import com.czhj.sdk.logger.SigmobLog;
import com.github.lzyzsd.jsbridge.BridgeUtil;
import com.sigmob.sdk.base.common.m;
import com.sigmob.sdk.base.common.n;
import com.sigmob.sdk.base.models.BaseAdUnit;
import com.sigmob.sdk.base.mta.PointCategory;
import com.sigmob.sdk.nativead.APKStatusBroadcastReceiver;
import cz.msebera.android.httpclient.HttpHeaders;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;

/* JADX INFO: loaded from: classes3.dex */
abstract class a extends WebView {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static HashMap<String, com.sigmob.sdk.mraid.i> f5042a = new LinkedHashMap();
    private static String b = "BaseWebView2";
    private static boolean c;
    private Map<String, APKStatusBroadcastReceiver> d;
    private Map<String, String> e;

    /* JADX INFO: renamed from: com.sigmob.sdk.mraid2.a$a, reason: collision with other inner class name */
    private class C0339a {
        public C0339a() {
        }

        @JavascriptInterface
        public int getApKDownloadProcessId(String str) {
            BaseAdUnit baseAdUnit;
            if (a.this.getAdUnitList() == null || a.this.getAdUnitList().size() <= 0) {
                baseAdUnit = null;
            } else {
                for (int i = 0; i < a.this.getAdUnitList().size(); i++) {
                    baseAdUnit = a.this.getAdUnitList().get(i);
                    if (baseAdUnit.getAd().vid.equals(str)) {
                        break;
                    }
                }
                baseAdUnit = null;
            }
            Log.d(a.b, baseAdUnit + "-----------getApKDownloadProcessId---------" + str);
            if (baseAdUnit == null) {
                baseAdUnit = a.this.getAdUnitList().get(0);
            }
            if (a.this.getContext() == null || baseAdUnit == null) {
                return -1;
            }
            long[] jArrA = n.a(a.this.getContext(), baseAdUnit.getDownloadId());
            int i2 = (int) jArrA[2];
            if (i2 == 1) {
                return 0;
            }
            if (i2 != 2) {
                return i2 != 8 ? -1 : 100;
            }
            return (int) ((jArrA[0] * 100) / jArrA[1]);
        }

        @JavascriptInterface
        public void registerDownloadEvent(String str) {
            BaseAdUnit baseAdUnit;
            if (a.this.getAdUnitList() == null || a.this.getAdUnitList().size() <= 0) {
                baseAdUnit = null;
            } else {
                for (int i = 0; i < a.this.getAdUnitList().size(); i++) {
                    baseAdUnit = a.this.getAdUnitList().get(i);
                    if (baseAdUnit.getAd().vid.equals(str)) {
                        break;
                    }
                }
                baseAdUnit = null;
            }
            Log.d(a.b, baseAdUnit + "-----------registerDownloadEvent---------" + str);
            if (baseAdUnit == null) {
                baseAdUnit = a.this.getAdUnitList().get(0);
            }
            a.this.a(baseAdUnit);
        }
    }

    public a(Context context) {
        super(context);
        this.d = new HashMap();
        this.e = new HashMap();
        a(getSettings());
        if (c) {
            return;
        }
        a(getContext());
        c = true;
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
        addJavascriptInterface(new C0339a(), "sigandroidapk");
    }

    void a() {
        a(PointCategory.DOWNLOAD_START);
    }

    public void a(BaseAdUnit baseAdUnit) {
        if (baseAdUnit == null || this.d.get(baseAdUnit.getUuid()) != null) {
            return;
        }
        APKStatusBroadcastReceiver aPKStatusBroadcastReceiver = new APKStatusBroadcastReceiver(new m.a() { // from class: com.sigmob.sdk.mraid2.a.1
            @Override // com.sigmob.sdk.base.common.m.a
            public void a(boolean z) {
                if (z) {
                    a.this.d();
                } else {
                    a.this.b();
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void a(boolean z, long j) {
                if (z) {
                    a.this.a();
                } else {
                    a.this.b();
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void b(boolean z) {
                if (z) {
                    a.this.e();
                } else {
                    a.this.b();
                }
            }

            @Override // com.sigmob.sdk.base.common.m.a
            public void b(boolean z, long j) {
                if (z) {
                    a.this.c();
                } else {
                    a.this.b();
                }
            }
        }, baseAdUnit.getUuid());
        aPKStatusBroadcastReceiver.a(aPKStatusBroadcastReceiver);
        this.d.put(baseAdUnit.getUuid(), aPKStatusBroadcastReceiver);
    }

    void a(final String str) {
        post(new Runnable() { // from class: com.sigmob.sdk.mraid2.a.2
            @Override // java.lang.Runnable
            public void run() {
                a.this.a("mraidbridge.notifyApkDownloadStateEvent(\"" + str + "\");", null);
            }
        });
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

    void b() {
        a("download_fail");
    }

    public void b(boolean z) {
        if (z) {
            stopLoading();
            loadUrl("");
        }
        onPause();
    }

    void c() {
        a(PointCategory.DOWNLOAD_END);
    }

    void d() {
        a("install_start");
    }

    @Override // android.webkit.WebView
    public void destroy() {
        SigmobLog.d(" BaseWebView destroy called ");
        ViewUtil.removeFromParent(this);
        Map<String, APKStatusBroadcastReceiver> map = this.d;
        if (map != null && map.size() > 0) {
            for (APKStatusBroadcastReceiver aPKStatusBroadcastReceiver : this.d.values()) {
                aPKStatusBroadcastReceiver.b(aPKStatusBroadcastReceiver);
            }
            this.d.clear();
        }
        HashMap<String, com.sigmob.sdk.mraid.i> map2 = f5042a;
        if (map2 != null && map2.size() > 0) {
            for (com.sigmob.sdk.mraid.i iVar : f5042a.values()) {
                if (iVar != null) {
                    iVar.c();
                }
            }
            f5042a.clear();
        }
        removeAllViews();
        super.destroy();
    }

    void e() {
        a("install_end");
    }

    abstract List<BaseAdUnit> getAdUnitList();

    @Override // android.webkit.WebView
    public void loadUrl(String str) {
        this.e.put(HttpHeaders.REFERER, "");
        if (getAdUnitList() != null && getAdUnitList().get(0) != null && getAdUnitList().get(0).isDisablexRequestWith()) {
            this.e.put("X-Requested-With", "");
        }
        loadUrl(str, this.e);
    }

    @Override // android.webkit.WebView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
    }

    @Override // android.webkit.WebView
    public void setWebViewClient(WebViewClient webViewClient) {
        super.setWebViewClient(webViewClient);
    }
}
