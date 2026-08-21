package com.tkay.core.basead.ui.web;

import android.content.Context;
import android.os.Build;
import android.view.WindowManager;
import android.webkit.CookieManager;
import android.webkit.WebView;
import com.tkay.core.common.b.p;
import com.tkay.core.common.l.g;
import com.tkay.core.common.l.u;

/* JADX INFO: loaded from: classes3.dex */
public class BaseWebView extends WebView {
    private static boolean b;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    protected boolean f5984a;

    public BaseWebView(Context context) {
        super(context.getApplicationContext());
        getSettings().setAllowFileAccess(false);
        getSettings().setAllowContentAccess(false);
        if (Build.VERSION.SDK_INT >= 16) {
            getSettings().setAllowFileAccessFromFileURLs(false);
            getSettings().setAllowUniversalAccessFromFileURLs(false);
        }
        com.tkay.core.basead.ui.a.a.a(this);
        g.a(this);
        if (b) {
            return;
        }
        Context context2 = getContext();
        if (Build.VERSION.SDK_INT == 19) {
            WebView webView = new WebView(context2.getApplicationContext());
            webView.setBackgroundColor(0);
            webView.loadDataWithBaseURL(null, "", "text/html", "UTF-8", null);
            WindowManager.LayoutParams layoutParams = new WindowManager.LayoutParams();
            layoutParams.width = 1;
            layoutParams.height = 1;
            layoutParams.type = 2005;
            layoutParams.flags = 16777240;
            layoutParams.format = -2;
            layoutParams.gravity = 8388659;
            ((WindowManager) context2.getSystemService("window")).addView(webView, layoutParams);
        }
        b = true;
    }

    @Override // android.webkit.WebView, android.view.ViewGroup, android.view.View
    protected void onAttachedToWindow() {
        super.onAttachedToWindow();
        CookieManager cookieManager = CookieManager.getInstance();
        if (Build.VERSION.SDK_INT >= 21) {
            cookieManager.setAcceptThirdPartyCookies(this, p.a(getContext()).b());
        }
    }

    @Override // android.webkit.WebView
    public void destroy() {
        if (this.f5984a) {
            return;
        }
        this.f5984a = true;
        u.a(this);
        removeAllViews();
        super.destroy();
    }

    private void a() {
        getSettings().setJavaScriptEnabled(true);
        getSettings().setDomStorageEnabled(true);
        getSettings().setAppCacheEnabled(true);
        getSettings().setAppCachePath(getContext().getCacheDir().getAbsolutePath());
    }

    private void b() {
        getSettings().setAllowFileAccess(false);
        getSettings().setAllowContentAccess(false);
        if (Build.VERSION.SDK_INT >= 16) {
            getSettings().setAllowFileAccessFromFileURLs(false);
            getSettings().setAllowUniversalAccessFromFileURLs(false);
        }
    }

    private static void a(Context context) {
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
            ((WindowManager) context.getSystemService("window")).addView(webView, layoutParams);
        }
    }
}
