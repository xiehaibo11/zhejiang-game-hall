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

public class b extends WebViewClient {
    private Activity a;
    private boolean b;
    private Handler c;
    private com.alipay.sdk.widget.a d;
    private boolean e;

    public b(Activity activity) {
        this.a = activity;
        this.c = new Handler(this.a.getMainLooper());
    }

    @Override
    public void onReceivedError(WebView webView, int i, String str, String str2) {
        this.e = true;
        super.onReceivedError(webView, i, str, str2);
    }

    @Override
    public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
        Activity activity = this.a;
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

    @Override
    public boolean shouldOverrideUrlLoading(WebView webView, String str) {
        return n.a(webView, str, this.a);
    }

    @Override
    public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
        Activity activity = this.a;
        if (this.c != null && activity != null && !activity.isFinishing()) {
            c();
            this.c.postDelayed(new a(this), 30000L);
        }
        super.onPageStarted(webView, str, bitmap);
    }

    @Override
    public void onPageFinished(WebView webView, String str) {
        Activity activity = this.a;
        if (this.c == null || activity == null || activity.isFinishing()) {
            return;
        }
        d();
        this.c.removeCallbacksAndMessages(null);
    }

    private void c() {
        Activity activity = this.a;
        if (activity == null) {
            return;
        }
        if (this.d == null) {
            this.d = new com.alipay.sdk.widget.a(activity, "正在加载");
            this.d.a(true);
        }
        this.d.b();
    }

    private void d() {
        com.alipay.sdk.widget.a aVar = this.d;
        if (aVar != null) {
            aVar.c();
        }
        this.d = null;
    }

    private static final class a implements Runnable {
        private final WeakReference<b> a;

        a(b bVar) {
            this.a = new WeakReference<>(bVar);
        }

        @Override
        public void run() {
            b bVar = this.a.get();
            if (bVar != null) {
                bVar.d();
            }
        }
    }

    public void a() {
        this.c = null;
        this.a = null;
    }

    public boolean b() {
        return this.e;
    }
}
