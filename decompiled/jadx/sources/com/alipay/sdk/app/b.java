package com.alipay.sdk.app;

import android.app.Activity;
import android.graphics.Bitmap;
import android.net.http.SslError;
import android.os.Handler;
import android.webkit.SslErrorHandler;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import com.alipay.sdk.util.n;
import java.lang.ref.WeakReference;

/* JADX INFO: loaded from: classes.dex */
public class b extends WebViewClient {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private Activity f1104a;
    private boolean b;
    private Handler c;
    private com.alipay.sdk.widget.a d;
    private boolean e;

    public b(Activity activity) {
        this.f1104a = activity;
        this.c = new Handler(this.f1104a.getMainLooper());
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        this.e = true;
        super.onReceivedError(webView, i, str, str2);
    }

    @Override // android.webkit.WebViewClient
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        Activity activity = this.f1104a;
        if (activity == null) {
            return;
        }
        com.alipay.sdk.app.statistic.a.a("net", "SSLError", "证书错误");
        if (this.b) {
            sslErrorHandler.proceed();
            this.b = false;
        } else {
            activity.runOnUiThread(new c(this, activity, sslErrorHandler));
        }
    }

    @Override // android.webkit.WebViewClient
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return n.a(webView, str, this.f1104a);
    }

    @Override // android.webkit.WebViewClient
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        Activity activity = this.f1104a;
        if (this.c != null && activity != null && !activity.isFinishing()) {
            c();
            this.c.postDelayed(new a(this), 30000L);
        }
        super.onPageStarted(webView, str, bitmap);
    }

    @Override // android.webkit.WebViewClient
    public void onPageFinished(WebView webView, String str) {
        Activity activity = this.f1104a;
        if (this.c == null || activity == null || activity.isFinishing()) {
            return;
        }
        d();
        this.c.removeCallbacksAndMessages(null);
    }

    private void c() {
        Activity activity = this.f1104a;
        if (activity == null) {
            return;
        }
        if (this.d == null) {
            this.d = new com.alipay.sdk.widget.a(activity, "正在加载");
            this.d.a(true);
        }
        this.d.b();
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void d() {
        com.alipay.sdk.widget.a aVar = this.d;
        if (aVar != null) {
            aVar.c();
        }
        this.d = null;
    }

    private static final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final WeakReference<b> f1105a;

        a(b bVar) {
            this.f1105a = new WeakReference<>(bVar);
        }

        @Override // java.lang.Runnable
        public void run() {
            b bVar = this.f1105a.get();
            if (bVar != null) {
                bVar.d();
            }
        }
    }

    public void a() {
        this.c = null;
        this.f1104a = null;
    }

    public boolean b() {
        return this.e;
    }
}
