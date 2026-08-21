package com.alipay.sdk.auth;

import android.app.Activity;
import android.content.Intent;
import android.content.res.Configuration;
import android.graphics.Bitmap;
import android.net.Uri;
import android.net.http.SslError;
import android.os.Build;
import android.os.Bundle;
import android.os.Handler;
import android.text.TextUtils;
import android.webkit.ConsoleMessage;
import android.webkit.SslErrorHandler;
import android.webkit.WebChromeClient;
import android.webkit.WebSettings;
import android.webkit.WebView;
import android.webkit.WebViewClient;
import android.widget.LinearLayout;
import com.alipay.sdk.app.i;
import com.alipay.sdk.util.n;
import java.lang.ref.WeakReference;
import java.lang.reflect.Method;
import org.json.JSONException;

/* JADX INFO: loaded from: classes.dex */
public class AuthActivity extends Activity {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    static final String f1119a = "params";
    static final String b = "redirectUri";
    private WebView c;
    private String d;
    private com.alipay.sdk.widget.a e;
    private Handler f;
    private boolean g;
    private boolean h;

    @Override // android.app.Activity
    protected void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            Bundle extras = getIntent().getExtras();
            if (extras == null) {
                finish();
                return;
            }
            try {
                this.d = extras.getString(b);
                String string = extras.getString("params");
                if (!n.f(string)) {
                    finish();
                    return;
                }
                super.requestWindowFeature(1);
                this.f = new Handler(getMainLooper());
                LinearLayout linearLayout = new LinearLayout(this);
                LinearLayout.LayoutParams layoutParams = new LinearLayout.LayoutParams(-1, -1);
                linearLayout.setOrientation(1);
                setContentView(linearLayout, layoutParams);
                this.c = new WebView(this);
                layoutParams.weight = 1.0f;
                this.c.setVisibility(0);
                linearLayout.addView(this.c, layoutParams);
                WebSettings settings = this.c.getSettings();
                settings.setUserAgentString(settings.getUserAgentString() + n.c(getApplicationContext()));
                settings.setRenderPriority(WebSettings.RenderPriority.HIGH);
                settings.setSupportMultipleWindows(true);
                settings.setJavaScriptEnabled(true);
                settings.setSavePassword(false);
                settings.setJavaScriptCanOpenWindowsAutomatically(true);
                settings.setMinimumFontSize(settings.getMinimumFontSize() + 8);
                settings.setAllowFileAccess(false);
                settings.setAllowFileAccessFromFileURLs(false);
                settings.setAllowUniversalAccessFromFileURLs(false);
                settings.setAllowContentAccess(false);
                settings.setTextSize(WebSettings.TextSize.NORMAL);
                this.c.setVerticalScrollbarOverlay(true);
                com.alipay.sdk.auth.a aVar = null;
                this.c.setWebViewClient(new c(this, aVar));
                this.c.setWebChromeClient(new b(this, aVar));
                this.c.setDownloadListener(new com.alipay.sdk.auth.a(this));
                this.c.loadUrl(string);
                if (Build.VERSION.SDK_INT >= 7) {
                    try {
                        Method method = this.c.getSettings().getClass().getMethod("setDomStorageEnabled", Boolean.TYPE);
                        if (method != null) {
                            method.invoke(this.c.getSettings(), true);
                        }
                    } catch (Exception unused) {
                    }
                }
                try {
                    try {
                        this.c.removeJavascriptInterface("searchBoxJavaBridge_");
                        this.c.removeJavascriptInterface("accessibility");
                        this.c.removeJavascriptInterface("accessibilityTraversal");
                    } catch (Throwable unused2) {
                    }
                } catch (Throwable unused3) {
                    Method method2 = this.c.getClass().getMethod("removeJavascriptInterface", new Class[0]);
                    if (method2 != null) {
                        method2.invoke(this.c, "searchBoxJavaBridge_");
                        method2.invoke(this.c, "accessibility");
                        method2.invoke(this.c, "accessibilityTraversal");
                    }
                }
                if (Build.VERSION.SDK_INT >= 19) {
                    this.c.getSettings().setCacheMode(1);
                }
            } catch (Exception unused4) {
                finish();
            }
        } catch (Exception unused5) {
            finish();
        }
    }

    @Override // android.app.Activity
    public void onBackPressed() {
        if (this.c.canGoBack()) {
            if (this.h) {
                g.a(this, this.d + "?resultCode=150");
                finish();
                return;
            }
            return;
        }
        g.a(this, this.d + "?resultCode=150");
        finish();
    }

    /* JADX INFO: Access modifiers changed from: private */
    class c extends WebViewClient {
        private c() {
        }

        /* synthetic */ c(AuthActivity authActivity, com.alipay.sdk.auth.a aVar) {
            this();
        }

        @Override // android.webkit.WebViewClient
        public void onReceivedError(WebView webView, int i, String str, String str2) {
            AuthActivity.this.h = true;
            super.onReceivedError(webView, i, str, str2);
        }

        @Override // android.webkit.WebViewClient
        public void onReceivedSslError(WebView webView, SslErrorHandler sslErrorHandler, SslError sslError) {
            if (AuthActivity.this.g) {
                sslErrorHandler.proceed();
                AuthActivity.this.g = false;
            } else {
                AuthActivity.this.runOnUiThread(new d(this, sslErrorHandler));
            }
        }

        @Override // android.webkit.WebViewClient
        public boolean shouldOverrideUrlLoading(WebView webView, String str) {
            if (!str.toLowerCase().startsWith("alipays://platformapi/startApp?".toLowerCase()) && !str.toLowerCase().startsWith("intent://platformapi/startapp?".toLowerCase())) {
                if (AuthActivity.this.a(str)) {
                    webView.stopLoading();
                    return true;
                }
                return super.shouldOverrideUrlLoading(webView, str);
            }
            try {
                n.a aVarA = n.a(AuthActivity.this, i.f1112a);
                if (aVarA != null && !aVarA.a() && !aVarA.b()) {
                    if (str.startsWith("intent://platformapi/startapp")) {
                        str = str.replaceFirst("intent://platformapi/startapp?", "alipays://platformapi/startApp?");
                    }
                    AuthActivity.this.startActivity(new Intent("android.intent.action.VIEW", Uri.parse(str)));
                }
            } catch (Throwable unused) {
            }
            return true;
        }

        @Override // android.webkit.WebViewClient
        public void onPageStarted(WebView webView, String str, Bitmap bitmap) {
            AuthActivity.this.a();
            AuthActivity.this.f.postDelayed(new a(AuthActivity.this, null), 30000L);
            super.onPageStarted(webView, str, bitmap);
        }

        @Override // android.webkit.WebViewClient
        public void onPageFinished(WebView webView, String str) {
            AuthActivity.this.b();
            AuthActivity.this.f.removeCallbacksAndMessages(null);
        }
    }

    private class b extends WebChromeClient {
        private b() {
        }

        /* synthetic */ b(AuthActivity authActivity, com.alipay.sdk.auth.a aVar) {
            this();
        }

        @Override // android.webkit.WebChromeClient
        public boolean onConsoleMessage(ConsoleMessage consoleMessage) {
            String strMessage = consoleMessage.message();
            if (TextUtils.isEmpty(strMessage)) {
                return super.onConsoleMessage(consoleMessage);
            }
            String strReplaceFirst = strMessage.startsWith("h5container.message: ") ? strMessage.replaceFirst("h5container.message: ", "") : null;
            if (!TextUtils.isEmpty(strReplaceFirst)) {
                AuthActivity.this.b(strReplaceFirst);
                return super.onConsoleMessage(consoleMessage);
            }
            return super.onConsoleMessage(consoleMessage);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(String str) {
        if (TextUtils.isEmpty(str) || str.startsWith("http://") || str.startsWith("https://")) {
            return false;
        }
        if (!"SDKLite://h5quit".equalsIgnoreCase(str)) {
            if (TextUtils.equals(str, this.d)) {
                str = str + "?resultCode=150";
            }
            g.a(this, str);
        }
        finish();
        return true;
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b(String str) {
        new com.alipay.sdk.authjs.d(getApplicationContext(), new com.alipay.sdk.auth.b(this)).a(str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a(com.alipay.sdk.authjs.a aVar) {
        if (this.c == null || aVar == null) {
            return;
        }
        try {
            runOnUiThread(new com.alipay.sdk.auth.c(this, String.format("AlipayJSBridge._invokeJS(%s)", aVar.g())));
        } catch (JSONException e) {
            com.alipay.sdk.util.c.a(com.alipay.sdk.m.o.a.f1226a, e);
        }
    }

    private static final class a implements Runnable {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private final WeakReference<AuthActivity> f1120a;

        /* synthetic */ a(AuthActivity authActivity, com.alipay.sdk.auth.a aVar) {
            this(authActivity);
        }

        private a(AuthActivity authActivity) {
            this.f1120a = new WeakReference<>(authActivity);
        }

        @Override // java.lang.Runnable
        public void run() {
            AuthActivity authActivity = this.f1120a.get();
            if (authActivity != null) {
                authActivity.b();
            }
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void a() {
        try {
            if (this.e == null) {
                this.e = new com.alipay.sdk.widget.a(this, "正在加载");
            }
            this.e.b();
        } catch (Exception unused) {
            this.e = null;
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public void b() {
        com.alipay.sdk.widget.a aVar = this.e;
        if (aVar != null) {
            aVar.c();
        }
        this.e = null;
    }

    @Override // android.app.Activity, android.content.ComponentCallbacks
    public void onConfigurationChanged(Configuration configuration) {
        super.onConfigurationChanged(configuration);
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        WebView webView = this.c;
        if (webView != null) {
            webView.removeAllViews();
            try {
                this.c.destroy();
            } catch (Throwable unused) {
            }
            this.c = null;
        }
    }
}
