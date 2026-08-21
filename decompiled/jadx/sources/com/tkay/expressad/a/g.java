package com.tkay.expressad.a;

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
import cz.msebera.android.httpclient.HttpHeaders;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class g {
    private static final int p = 1;
    private static final int q = 2;
    private static final int r = 0;
    boolean b;
    boolean c;
    private int e;
    private int f;
    private com.tkay.expressad.d.a h;
    private a i;
    private String j;
    private String k;
    private WebView l;
    private boolean m;
    private String n;
    private int o;
    private boolean t;
    private static final String d = g.class.getSimpleName();

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    public static long f6342a = 0;
    private boolean s = false;
    private final Runnable u = new Runnable() { // from class: com.tkay.expressad.a.g.4
        @Override // java.lang.Runnable
        public final void run() {
            g.n(g.this);
            g.this.o = 1;
            String unused = g.d;
            StringBuilder sb = new StringBuilder("js timeout!timeout limit:");
            sb.append(g.this.f);
            sb.append("ms");
            g.p(g.this);
        }
    };
    private final Runnable v = new Runnable() { // from class: com.tkay.expressad.a.g.5
        @Override // java.lang.Runnable
        public final void run() {
            g.n(g.this);
            g.this.o = 2;
            String unused = g.d;
            StringBuilder sb = new StringBuilder("http timeout!timeout limit:");
            sb.append(g.this.e);
            sb.append("ms");
            g.p(g.this);
        }
    };
    private Handler g = new Handler(Looper.getMainLooper());

    interface a {
        void a(String str, String str2);

        void a(String str, String str2, String str3);

        boolean a();

        boolean a(String str);

        boolean b(String str);
    }

    static /* synthetic */ boolean e(g gVar) {
        gVar.t = true;
        return true;
    }

    static /* synthetic */ boolean n(g gVar) {
        gVar.s = true;
        return true;
    }

    public g(boolean z) {
        this.e = 15000;
        this.f = 3000;
        com.tkay.expressad.d.b.a();
        com.tkay.expressad.foundation.b.b.b().e();
        com.tkay.expressad.d.a aVarB = com.tkay.expressad.d.b.b();
        this.h = aVarB;
        if (aVarB == null) {
            com.tkay.expressad.d.b.a();
            this.h = com.tkay.expressad.d.b.c();
        }
        this.m = this.h.v();
        if (z) {
            this.e = (int) this.h.q();
            this.f = (int) this.h.q();
        } else {
            this.e = (int) this.h.r();
            this.f = (int) this.h.r();
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
            a(str2, str3, context, this.j);
        } else {
            this.g.post(new Runnable() { // from class: com.tkay.expressad.a.g.1
                @Override // java.lang.Runnable
                public final void run() {
                    g gVar = g.this;
                    gVar.a(str2, str3, context, gVar.j);
                }
            });
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(String str, String str2, Context context, String str3) {
        try {
            a(context, str, str2);
            if (!TextUtils.isEmpty(this.k)) {
                this.l.getSettings().setDefaultTextEncodingName("utf-8");
                this.f = 2000;
                this.e = 2000;
                this.l.loadDataWithBaseURL(str3, this.k, "*/*", "utf-8", str3);
                return;
            }
            if (this.m) {
                HashMap map = new HashMap();
                if (this.l.getUrl() != null) {
                    map.put(HttpHeaders.REFERER, this.l.getUrl());
                }
                this.l.loadUrl(str3, map);
                return;
            }
            this.l.loadUrl(str3);
        } catch (Throwable th) {
            try {
                if (this.i != null) {
                    this.i.a(this.j, th.getMessage(), this.n);
                }
            } catch (Exception unused) {
            }
        }
    }

    private void a(Context context, final String str, final String str2) {
        WebView webView = new WebView(context);
        this.l = webView;
        webView.getSettings().setJavaScriptEnabled(true);
        this.l.getSettings().setCacheMode(2);
        this.l.getSettings().setLoadsImagesAutomatically(false);
        this.l.setWebViewClient(new WebViewClient() { // from class: com.tkay.expressad.a.g.2
            private boolean a() {
                return g.this.b || g.this.c;
            }

            @Override // android.webkit.WebViewClient
            public final void onPageStarted(WebView webView2, String str3, Bitmap bitmap) {
                try {
                    webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                    if (g.this.t) {
                        g.this.o = 0;
                        g.c(g.this);
                        return;
                    }
                    g.this.c = false;
                    if (webView2.getTag() == null) {
                        webView2.setTag("has_first_started");
                    } else {
                        g.this.b = true;
                    }
                    synchronized (g.d) {
                        String str4 = g.this.b || g.this.c ? "load page-start:(redirect)" : "load page-start:";
                        if (URLUtil.isHttpsUrl(str3)) {
                            String unused = g.d;
                            StringBuilder sb = new StringBuilder();
                            sb.append(str4);
                            sb.append(str3);
                        } else {
                            String unused2 = g.d;
                            StringBuilder sb2 = new StringBuilder();
                            sb2.append(str4);
                            sb2.append(str3);
                        }
                        g.this.j = str3;
                        if (g.this.i != null && g.this.i.a(str3)) {
                            g.e(g.this);
                            g.c(g.this);
                        } else {
                            g.f(g.this);
                        }
                    }
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

            @Override // android.webkit.WebViewClient
            public final boolean shouldOverrideUrlLoading(WebView webView2, String str3) {
                synchronized (g.d) {
                    String unused = g.d;
                    g.this.c = true;
                    g.this.j();
                    if (g.this.t) {
                        g.this.h();
                        g.c(g.this);
                        return true;
                    }
                    g.this.j = str3;
                    if (g.this.i == null || !g.this.i.b(str3)) {
                        if (!g.this.m) {
                            g.this.l.loadUrl(str3);
                        } else {
                            HashMap map = new HashMap();
                            if (g.this.l.getUrl() != null) {
                                map.put(HttpHeaders.REFERER, g.this.l.getUrl());
                            }
                            g.this.l.loadUrl(str3, map);
                        }
                        return true;
                    }
                    g.e(g.this);
                    g.this.h();
                    g.c(g.this);
                    return true;
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onReceivedError(WebView webView2, int i, String str3, String str4) {
                String unused = g.d;
                StringBuilder sb = new StringBuilder("onReceivedError: errno = ");
                sb.append(i);
                sb.append(", url: ");
                sb.append(webView2.getUrl());
                sb.append(",\n onReceivedError:, description: ");
                sb.append(str3);
                sb.append(", failingUrl: ");
                sb.append(str4);
                synchronized (g.d) {
                    g.e(g.this);
                    g.this.f();
                    g.c(g.this);
                }
                if (g.this.i != null) {
                    g.this.i.a(webView2.getUrl(), str3, g.this.n);
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onReceivedSslError(WebView webView2, SslErrorHandler sslErrorHandler, SslError sslError) {
                try {
                    String unused = g.d;
                    new StringBuilder("onReceivedSslError IS_SP_CBT_CF:").append(com.tkay.expressad.b.q);
                    if (com.tkay.expressad.b.q && sslErrorHandler != null) {
                        sslErrorHandler.cancel();
                    }
                    if (TextUtils.isEmpty(str2)) {
                        return;
                    }
                    TextUtils.isEmpty(str);
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }

            @Override // android.webkit.WebViewClient
            public final void onPageFinished(WebView webView2, String str3) {
                super.onPageFinished(webView2, str3);
                try {
                    webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                } catch (Exception e) {
                    e.printStackTrace();
                }
            }
        });
        this.l.setWebChromeClient(new WebChromeClient() { // from class: com.tkay.expressad.a.g.3
            @Override // android.webkit.WebChromeClient
            public final boolean onJsAlert(WebView webView2, String str3, String str4, JsResult jsResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final boolean onJsConfirm(WebView webView2, String str3, String str4, JsResult jsResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final boolean onJsPrompt(WebView webView2, String str3, String str4, String str5, JsPromptResult jsPromptResult) {
                return true;
            }

            @Override // android.webkit.WebChromeClient
            public final void onProgressChanged(WebView webView2, int i) {
                if (i == 100) {
                    try {
                        String unused = g.d;
                        new StringBuilder("LoadPage-State Complete:").append(webView2.getUrl());
                        webView2.loadUrl("javascript:window.navigator.vibrate([]);");
                        if (!g.this.t && !g.this.c) {
                            g.m(g.this);
                        }
                        if (g.this.i != null) {
                            a aVar = g.this.i;
                            webView2.getUrl();
                            aVar.a();
                        }
                    } catch (Exception e) {
                        e.printStackTrace();
                    }
                }
            }
        });
    }

    private void b() {
        synchronized (d) {
            try {
                f();
                if (this.i != null) {
                    this.i.a(this.j, this.n);
                }
            } catch (Throwable unused) {
            }
        }
    }

    private void c() {
        synchronized (d) {
            try {
                f();
                this.l.destroy();
                if (this.i != null) {
                    this.i.a(this.j, this.n);
                }
            } catch (Throwable unused) {
            }
        }
    }

    private void d() {
        h();
        this.g.postDelayed(this.v, this.e);
    }

    private void e() {
        j();
        this.g.postDelayed(this.u, this.f);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void f() {
        j();
        h();
    }

    private void g() {
        this.g.postDelayed(this.v, this.e);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void h() {
        this.g.removeCallbacks(this.v);
    }

    private void i() {
        this.g.postDelayed(this.u, this.f);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void j() {
        this.g.removeCallbacks(this.u);
    }

    static /* synthetic */ void c(g gVar) {
        synchronized (d) {
            try {
                gVar.f();
                if (gVar.i != null) {
                    gVar.i.a(gVar.j, gVar.n);
                }
            } catch (Throwable unused) {
            }
        }
    }

    static /* synthetic */ void f(g gVar) {
        gVar.h();
        gVar.g.postDelayed(gVar.v, gVar.e);
    }

    static /* synthetic */ void m(g gVar) {
        gVar.j();
        gVar.g.postDelayed(gVar.u, gVar.f);
    }

    static /* synthetic */ void p(g gVar) {
        synchronized (d) {
            try {
                gVar.f();
                gVar.l.destroy();
                if (gVar.i != null) {
                    gVar.i.a(gVar.j, gVar.n);
                }
            } catch (Throwable unused) {
            }
        }
    }
}
