package com.mbridge.msdk.click;

import android.content.Context;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Handler;
import android.os.Looper;
import android.text.TextUtils;
import android.webkit.JsPromptResult;
import android.webkit.JsResult;
import android.webkit.SslErrorHandler;
import android.webkit.URLUtil;
import android.webkit.WebChromeClient;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.mbridge.msdk.MBridgeConstans;
import com.mbridge.msdk.foundation.tools.z;
import cz.msebera.android.httpclient.HttpHeaders;
import java.util.HashMap;

/* JADX INFO: compiled from: WebViewSpider.java */
/* JADX INFO: loaded from: classes2.dex */
public class i {
    boolean b;
    boolean c;
    private int e;
    private int f;
    private com.mbridge.msdk.c.a h;
    private a i;
    private String j;
    private String k;
    private WebView l;
    private boolean m;
    private String n;
    private int o;
    private boolean q;
    private static final String d = i.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static long f3159a = 0;
    private boolean p = false;
    private final Runnable r = new Runnable() { // from class: com.mbridge.msdk.click.i.4
        @Override // java.lang.Runnable
        public final void run() {
            i.this.p = true;
            i.this.o = 1;
            z.d(i.d, "js超时！超时上限：" + i.this.f + "ms");
            i.n(i.this);
        }
    };
    private final Runnable s = new Runnable() { // from class: com.mbridge.msdk.click.i.5
        @Override // java.lang.Runnable
        public final void run() {
            i.this.p = true;
            i.this.o = 2;
            z.d(i.d, "http超时！超时上限：" + i.this.e + "ms");
            i.n(i.this);
        }
    };
    private Handler g = new Handler(Looper.getMainLooper());

    /* JADX INFO: compiled from: WebViewSpider.java */
    interface a {
        void a(int i, String str, String str2, String str3);

        void a(String str, boolean z, String str2);

        boolean a(String str);

        boolean b(String str);

        boolean c(String str);
    }

    public i(boolean z) {
        this.e = 15000;
        this.f = 3000;
        com.mbridge.msdk.c.a aVarB = com.mbridge.msdk.c.b.a().b(com.mbridge.msdk.foundation.controller.a.f().k());
        this.h = aVarB;
        if (aVarB == null) {
            this.h = com.mbridge.msdk.c.b.a().b();
        }
        this.m = this.h.af();
        if (z) {
            this.e = (int) this.h.ab();
            this.f = (int) this.h.ab();
        } else {
            this.e = (int) this.h.ac();
            this.f = (int) this.h.ac();
        }
    }

    public final void a(String str, String str2, String str3, Context context, String str4, String str5, a aVar) {
        if (aVar == null) {
            throw new NullPointerException("OverrideUrlLoadingListener can not be null");
        }
        this.k = str5;
        this.j = str4;
        this.i = aVar;
        a(str, str2, str3, context);
    }

    public final void a(String str, String str2, String str3, Context context, String str4, a aVar) {
        if (aVar == null) {
            throw new NullPointerException("OverrideUrlLoadingListener can not be null");
        }
        this.j = str4;
        this.i = aVar;
        a(str, str2, str3, context);
    }

    private void a(final String str, final String str2, final String str3, final Context context) {
        if (Thread.currentThread() == Looper.getMainLooper().getThread()) {
            a(str, str2, str3, context, this.j);
        } else {
            this.g.post(new Runnable() { // from class: com.mbridge.msdk.click.i.1
                @Override // java.lang.Runnable
                public final void run() {
                    i iVar = i.this;
                    iVar.a(str, str2, str3, context, iVar.j);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2, String str3, Context context, String str4) {
        try {
            a(context, str, str2, str3);
            if (!TextUtils.isEmpty(this.k)) {
                this.l.getSettings().setDefaultTextEncodingName("utf-8");
                this.f = 2000;
                this.e = 2000;
                z.b(d, this.k);
                this.l.loadDataWithBaseURL(str4, this.k, "*/*", "utf-8", str4);
                return;
            }
            if (this.m) {
                HashMap map = new HashMap();
                if (this.l.getUrl() != null) {
                    map.put(HttpHeaders.REFERER, this.l.getUrl());
                }
                this.l.loadUrl(str4, map);
                return;
            }
            this.l.loadUrl(str4);
        } catch (Throwable th) {
            try {
                if (this.i != null) {
                    this.i.a(0, this.j, th.getMessage(), this.n);
                }
            } catch (Exception unused) {
            }
        }
    }

    private void a(final Context context, final String str, final String str2, final String str3) {
        WebView webView = new WebView(context);
        this.l = webView;
        webView.getSettings().setJavaScriptEnabled(true);
        this.l.getSettings().setCacheMode(2);
        this.l.getSettings().setLoadsImagesAutomatically(false);
        this.l.setWebViewClient(new WebViewClient() { // from class: com.mbridge.msdk.click.i.2
            @Override // android.webkit.WebViewClient
            public final void onPageStarted(WebView webView2, String str4, Bitmap bitmap) {
                try {
                    webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                    if (i.this.q) {
                        i.this.o = 0;
                        i.c(i.this);
                        return;
                    }
                    i.this.c = false;
                    if (webView2.getTag() == null) {
                        webView2.setTag("has_first_started");
                    } else {
                        i.this.b = true;
                    }
                    synchronized (i.d) {
                        String str5 = i.this.b || i.this.c ? "加载页面-开始：（重定向）" : "加载页面-开始：";
                        if (URLUtil.isHttpsUrl(str4)) {
                            z.d(i.d, str5 + str4);
                        } else {
                            z.b(i.d, str5 + str4);
                        }
                        i.this.j = str4;
                        if (i.this.i != null && i.this.i.a(str4)) {
                            i.this.q = true;
                            i.c(i.this);
                        } else {
                            i.e(i.this);
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

            @Override // android.webkit.WebViewClient
            public final boolean shouldOverrideUrlLoading(WebView webView2, String str4) {
                synchronized (i.d) {
                    z.a(i.d, "override js跳转：" + str4);
                    i.this.c = true;
                    i.this.d();
                    if (i.this.q) {
                        i.this.c();
                        i.c(i.this);
                        return true;
                    }
                    i.this.j = str4;
                    if (i.this.i == null || !i.this.i.b(str4)) {
                        if (!i.this.m) {
                            i.this.l.loadUrl(str4);
                        } else {
                            HashMap map = new HashMap();
                            if (i.this.l.getUrl() != null) {
                                map.put(HttpHeaders.REFERER, i.this.l.getUrl());
                            }
                            i.this.l.loadUrl(str4, map);
                        }
                        return true;
                    }
                    i.this.q = true;
                    i.this.c();
                    i.c(i.this);
                    return true;
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onReceivedError(WebView webView2, int i, String str4, String str5) {
                z.b(i.d, "onReceivedError: errno = " + i + ", url: " + webView2.getUrl() + ",\n onReceivedError：, description: " + str4 + ", failingUrl: " + str5);
                synchronized (i.d) {
                    i.this.q = true;
                    i.this.b();
                    i.c(i.this);
                }
                if (i.this.i != null) {
                    i.this.i.a(i, webView2.getUrl(), str4, i.this.n);
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onReceivedSslError(WebView webView2, SslErrorHandler sslErrorHandler, SslError sslError) {
                try {
                    z.a(i.d, "onReceivedSslError IS_SP_CBT_CF:" + MBridgeConstans.IS_SP_CBT_CF);
                    if (MBridgeConstans.IS_SP_CBT_CF && sslErrorHandler != null) {
                        sslErrorHandler.cancel();
                    }
                    if (TextUtils.isEmpty(str3) || TextUtils.isEmpty(str2)) {
                        return;
                    }
                    new com.mbridge.msdk.foundation.same.report.d(context).a(str, str2, str3, webView2.getUrl());
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onPageFinished(WebView webView2, String str4) {
                super.onPageFinished(webView2, str4);
                try {
                    webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        this.l.setWebChromeClient(new WebChromeClient() { // from class: com.mbridge.msdk.click.i.3
            @Override // android.webkit.WebChromeClient
            public final boolean onJsAlert(WebView webView2, String str4, String str5, JsResult jsResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final boolean onJsConfirm(WebView webView2, String str4, String str5, JsResult jsResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final boolean onJsPrompt(WebView webView2, String str4, String str5, String str6, JsPromptResult jsPromptResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final void onProgressChanged(WebView webView2, int i) {
                if (i == 100) {
                    try {
                        z.b(i.d, "加载页面-进度完成：" + webView2.getUrl());
                        webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                        if (!i.this.q && !i.this.c) {
                            i.l(i.this);
                        }
                        if (i.this.i != null) {
                            i.this.i.c(webView2.getUrl());
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        d();
        c();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void c() {
        this.g.removeCallbacks(this.s);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        this.g.removeCallbacks(this.r);
    }

    static /* synthetic */ void c(i iVar) {
        synchronized (d) {
            try {
                iVar.b();
            } catch (Exception unused) {
                z.d(d, "webview colse to failed");
            } catch (Throwable unused2) {
                z.d(d, "webview colse to failed");
            }
            if (iVar.i != null) {
                iVar.i.a(iVar.j, iVar.p, iVar.n);
            }
        }
    }

    static /* synthetic */ void e(i iVar) {
        iVar.c();
        boolean z = iVar.b;
        iVar.g.postDelayed(iVar.s, iVar.e);
    }

    static /* synthetic */ void l(i iVar) {
        iVar.d();
        boolean z = iVar.b;
        iVar.g.postDelayed(iVar.r, iVar.f);
    }

    static /* synthetic */ void n(i iVar) {
        synchronized (d) {
            try {
                iVar.b();
                iVar.l.destroy();
            } catch (Exception unused) {
                z.d(d, "webview colse to failed");
            } catch (Throwable unused2) {
                z.d(d, "webview colse to failed");
            }
            if (iVar.i != null) {
                iVar.i.a(iVar.j, iVar.p, iVar.n);
            }
        }
    }
}
