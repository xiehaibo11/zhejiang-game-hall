package com.tkay.expressad.activity;

public class DomainTYCommonActivity extends android.app.Activity {
    private static final java.lang.String b = "TYCommonActivity";
    java.lang.String a;
    private com.tkay.expressad.foundation.d.c c;
    private com.tkay.expressad.foundation.webview.BrowserView d;
    private com.tkay.expressad.foundation.webview.BrowserView.a e;


    public DomainTYCommonActivity() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.a = r0
            com.tkay.expressad.activity.DomainTYCommonActivity$1 r0 = new com.tkay.expressad.activity.DomainTYCommonActivity$1
            r0.<init>(r1)
            r1.e = r0
            return
    }

    private void a() {
            r2 = this;
            android.content.Intent r0 = r2.getIntent()
            java.lang.String r1 = "url"
            java.lang.String r0 = r0.getStringExtra(r1)
            r2.a = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L3d
            android.content.Intent r0 = r2.getIntent()
            java.lang.String r1 = "mvcommon"
            java.io.Serializable r0 = r0.getSerializableExtra(r1)
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0
            r2.c = r0
            com.tkay.expressad.foundation.webview.BrowserView r0 = new com.tkay.expressad.foundation.webview.BrowserView
            com.tkay.expressad.foundation.d.c r1 = r2.c
            r0.<init>(r2, r1)
            r2.d = r0
            com.tkay.expressad.foundation.webview.BrowserView$a r1 = r2.e
            r0.setListener(r1)
            com.tkay.expressad.foundation.webview.BrowserView r0 = r2.d
            java.lang.String r1 = r2.a
            r0.loadUrl(r1)
            com.tkay.expressad.foundation.webview.BrowserView r0 = r2.d
            if (r0 == 0) goto L47
            r2.setContentView(r0)
            return
        L3d:
            r0 = 0
            java.lang.String r1 = "Error: no data"
            android.widget.Toast r0 = android.widget.Toast.makeText(r2, r1, r0)
            r0.show()
        L47:
            return
    }

    private boolean a(android.webkit.WebView r9, java.lang.String r10) {
            r8 = this;
            java.lang.String r0 = "http"
            r1 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r10)     // Catch: java.lang.Throwable -> La3
            if (r2 == 0) goto La
            return r1
        La:
            android.net.Uri r2 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = r2.getScheme()     // Catch: java.lang.Throwable -> La3
            boolean r3 = r3.equals(r0)     // Catch: java.lang.Throwable -> La3
            java.lang.String r4 = "https"
            r5 = 1
            if (r3 != 0) goto L28
            java.lang.String r3 = r2.getScheme()     // Catch: java.lang.Throwable -> La3
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> La3
            if (r3 == 0) goto L26
            goto L28
        L26:
            r3 = r1
            goto L29
        L28:
            r3 = r5
        L29:
            if (r3 == 0) goto L2c
            return r1
        L2c:
            java.lang.String r2 = r2.getScheme()     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = "intent"
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Throwable -> La3
            if (r2 == 0) goto La2
            android.content.Intent r2 = android.content.Intent.parseUri(r10, r5)     // Catch: java.lang.Throwable -> La3
            java.lang.String r3 = r2.getPackage()     // Catch: java.lang.Throwable -> L6e
            boolean r6 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L6e
            if (r6 != 0) goto L72
            android.content.pm.PackageManager r6 = r8.getPackageManager()     // Catch: java.lang.Throwable -> L6e
            android.content.Intent r3 = r6.getLaunchIntentForPackage(r3)     // Catch: java.lang.Throwable -> L6e
            if (r3 == 0) goto L72
            java.lang.String r3 = "android.intent.category.BROWSABLE"
            r2.addCategory(r3)     // Catch: java.lang.Throwable -> L6e
            r3 = 0
            r2.setComponent(r3)     // Catch: java.lang.Throwable -> L6e
            int r6 = android.os.Build.VERSION.SDK_INT     // Catch: java.lang.Throwable -> L6e
            r7 = 15
            if (r6 < r7) goto L62
            r2.setSelector(r3)     // Catch: java.lang.Throwable -> L6e
        L62:
            r3 = 268435456(0x10000000, float:2.524355E-29)
            r2.setFlags(r3)     // Catch: java.lang.Throwable -> L6e
            r8.startActivityForResult(r2, r1)     // Catch: java.lang.Throwable -> L6e
            r8.finish()     // Catch: java.lang.Throwable -> L6e
            return r5
        L6e:
            r3 = move-exception
            r3.getMessage()     // Catch: java.lang.Throwable -> La3
        L72:
            java.lang.String r3 = "browser_fallback_url"
            java.lang.String r2 = r2.getStringExtra(r3)     // Catch: java.lang.Throwable -> L9e
            boolean r3 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L9e
            if (r3 != 0) goto La2
            android.net.Uri r10 = android.net.Uri.parse(r10)     // Catch: java.lang.Throwable -> L9e
            java.lang.String r3 = r10.getScheme()     // Catch: java.lang.Throwable -> L9e
            boolean r0 = r3.equals(r0)     // Catch: java.lang.Throwable -> L9e
            if (r0 != 0) goto L98
            java.lang.String r10 = r10.getScheme()     // Catch: java.lang.Throwable -> L9e
            boolean r10 = r10.equals(r4)     // Catch: java.lang.Throwable -> L9e
            if (r10 == 0) goto L97
            goto L98
        L97:
            r5 = r1
        L98:
            if (r5 == 0) goto La2
            r9.loadUrl(r2)     // Catch: java.lang.Throwable -> L9e
            return r1
        L9e:
            r9 = move-exception
            r9.getMessage()     // Catch: java.lang.Throwable -> La3
        La2:
            return r1
        La3:
            r9 = move-exception
            r9.getMessage()
            return r1
    }

    static boolean a(com.tkay.expressad.activity.DomainTYCommonActivity r0, android.webkit.WebView r1, java.lang.String r2) {
            boolean r0 = r0.a(r1, r2)
            return r0
    }

    @Override
    public void onCreate(android.os.Bundle r2) {
            r1 = this;
            super.onCreate(r2)
            r2 = 1
            r1.requestWindowFeature(r2)     // Catch: java.lang.Throwable -> L8
            goto Lc
        L8:
            r2 = move-exception
            r2.getMessage()
        Lc:
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r2 = r2.d()
            if (r2 != 0) goto L21
            com.tkay.expressad.foundation.b.b r2 = com.tkay.expressad.foundation.b.b.b()
            android.content.Context r0 = r1.getApplicationContext()
            r2.a(r0)
        L21:
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r0 = "url"
            java.lang.String r2 = r2.getStringExtra(r0)
            r1.a = r2
            boolean r2 = android.text.TextUtils.isEmpty(r2)
            if (r2 != 0) goto L5e
            android.content.Intent r2 = r1.getIntent()
            java.lang.String r0 = "mvcommon"
            java.io.Serializable r2 = r2.getSerializableExtra(r0)
            com.tkay.expressad.foundation.d.c r2 = (com.tkay.expressad.foundation.d.c) r2
            r1.c = r2
            com.tkay.expressad.foundation.webview.BrowserView r2 = new com.tkay.expressad.foundation.webview.BrowserView
            com.tkay.expressad.foundation.d.c r0 = r1.c
            r2.<init>(r1, r0)
            r1.d = r2
            com.tkay.expressad.foundation.webview.BrowserView$a r0 = r1.e
            r2.setListener(r0)
            com.tkay.expressad.foundation.webview.BrowserView r2 = r1.d
            java.lang.String r0 = r1.a
            r2.loadUrl(r0)
            com.tkay.expressad.foundation.webview.BrowserView r2 = r1.d
            if (r2 == 0) goto L68
            r1.setContentView(r2)
            return
        L5e:
            r2 = 0
            java.lang.String r0 = "Error: no data"
            android.widget.Toast r2 = android.widget.Toast.makeText(r1, r0, r2)
            r2.show()
        L68:
            return
    }

    @Override
    protected void onDestroy() {
            r1 = this;
            super.onDestroy()
            com.tkay.expressad.foundation.webview.BrowserView r0 = r1.d
            if (r0 == 0) goto La
            r0.destroy()
        La:
            return
    }
}
