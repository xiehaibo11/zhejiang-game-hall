package com.tkay.expressad.activity;

import android.app.Activity;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Bundle;
import android.text.TextUtils;
import android.webkit.WebView;
import android.widget.Toast;
import com.ss.android.socialbase.downloader.utils.DownloadExpSwitchCode;
import com.tkay.expressad.foundation.b.b;
import com.tkay.expressad.foundation.d.c;
import com.tkay.expressad.foundation.h.s;
import com.tkay.expressad.foundation.webview.BrowserView;

/* JADX INFO: loaded from: classes3.dex */
public class DomainTYCommonActivity extends Activity {
    private static final String b = "TYCommonActivity";
    private c c;
    private BrowserView d;

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    String f6352a = "";
    private BrowserView.a e = new BrowserView.a() { // from class: com.tkay.expressad.activity.DomainTYCommonActivity.1
        @Override // com.tkay.expressad.foundation.webview.BrowserView.a
        public final void b() {
        }

        @Override // com.tkay.expressad.foundation.webview.BrowserView.a
        public final void a() {
            DomainTYCommonActivity.this.finish();
        }

        @Override // com.tkay.expressad.foundation.webview.BrowserView.a
        public final boolean a(WebView webView, String str) {
            if (s.a.a(str) && s.a.a(DomainTYCommonActivity.this, str, null)) {
                DomainTYCommonActivity.this.finish();
            }
            return DomainTYCommonActivity.this.a(webView, str);
        }
    };

    @Override // android.app.Activity
    public void onCreate(Bundle bundle) {
        super.onCreate(bundle);
        try {
            requestWindowFeature(1);
        } catch (Throwable th) {
            th.getMessage();
        }
        if (b.b().d() == null) {
            b.b().a(getApplicationContext());
        }
        String stringExtra = getIntent().getStringExtra("url");
        this.f6352a = stringExtra;
        if (!TextUtils.isEmpty(stringExtra)) {
            this.c = (c) getIntent().getSerializableExtra("mvcommon");
            BrowserView browserView = new BrowserView(this, this.c);
            this.d = browserView;
            browserView.setListener(this.e);
            this.d.loadUrl(this.f6352a);
            BrowserView browserView2 = this.d;
            if (browserView2 != null) {
                setContentView(browserView2);
                return;
            }
            return;
        }
        Toast.makeText(this, "Error: no data", 0).show();
    }

    private void a() {
        String stringExtra = getIntent().getStringExtra("url");
        this.f6352a = stringExtra;
        if (!TextUtils.isEmpty(stringExtra)) {
            this.c = (c) getIntent().getSerializableExtra("mvcommon");
            BrowserView browserView = new BrowserView(this, this.c);
            this.d = browserView;
            browserView.setListener(this.e);
            this.d.loadUrl(this.f6352a);
            BrowserView browserView2 = this.d;
            if (browserView2 != null) {
                setContentView(browserView2);
                return;
            }
            return;
        }
        Toast.makeText(this, "Error: no data", 0).show();
    }

    @Override // android.app.Activity
    protected void onDestroy() {
        super.onDestroy();
        BrowserView browserView = this.d;
        if (browserView != null) {
            browserView.destroy();
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public boolean a(WebView webView, String str) {
        String str2;
        try {
        } catch (Throwable th) {
            th.getMessage();
            return false;
        }
        if (TextUtils.isEmpty(str)) {
            return false;
        }
        Uri uri = Uri.parse(str);
        boolean z = true;
        if (!(uri.getScheme().equals("http") || uri.getScheme().equals("https")) && uri.getScheme().equals("intent")) {
            Intent uri2 = Intent.parseUri(str, 1);
            try {
                str2 = uri2.getPackage();
            } catch (Throwable th2) {
                th2.getMessage();
            }
            if (!TextUtils.isEmpty(str2) && getPackageManager().getLaunchIntentForPackage(str2) != null) {
                uri2.addCategory("android.intent.category.BROWSABLE");
                uri2.setComponent(null);
                if (Build.VERSION.SDK_INT >= 15) {
                    uri2.setSelector(null);
                }
                uri2.setFlags(DownloadExpSwitchCode.BUGFIX_GETPACKAGEINFO_BY_UNZIP);
                startActivityForResult(uri2, 0);
                finish();
                return true;
            }
            try {
                String stringExtra = uri2.getStringExtra("browser_fallback_url");
                if (!TextUtils.isEmpty(stringExtra)) {
                    Uri uri3 = Uri.parse(str);
                    if (!uri3.getScheme().equals("http") && !uri3.getScheme().equals("https")) {
                        z = false;
                    }
                    if (z) {
                        webView.loadUrl(stringExtra);
                        return false;
                    }
                }
            } catch (Throwable th3) {
                th3.getMessage();
            }
            th.getMessage();
            return false;
        }
        return false;
    }
}
