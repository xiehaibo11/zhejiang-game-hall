package com.tkay.core.basead.ui.web;

public class BaseWebView extends android.webkit.WebView {
    private static boolean b;
    protected boolean a;

    static {
            return
    }

    public BaseWebView(android.content.Context r11) {
            r10 = this;
            android.content.Context r11 = r11.getApplicationContext()
            r10.<init>(r11)
            android.webkit.WebSettings r11 = r10.getSettings()
            r0 = 0
            r11.setAllowFileAccess(r0)
            android.webkit.WebSettings r11 = r10.getSettings()
            r11.setAllowContentAccess(r0)
            int r11 = android.os.Build.VERSION.SDK_INT
            r1 = 16
            if (r11 < r1) goto L2a
            android.webkit.WebSettings r11 = r10.getSettings()
            r11.setAllowFileAccessFromFileURLs(r0)
            android.webkit.WebSettings r11 = r10.getSettings()
            r11.setAllowUniversalAccessFromFileURLs(r0)
        L2a:
            com.tkay.core.basead.ui.a.a.a(r10)
            com.tkay.core.common.l.g.a(r10)
            boolean r11 = com.tkay.core.basead.ui.web.BaseWebView.b
            if (r11 != 0) goto L7e
            android.content.Context r11 = r10.getContext()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 19
            r3 = 1
            if (r1 != r2) goto L7c
            android.webkit.WebView r1 = new android.webkit.WebView
            android.content.Context r2 = r11.getApplicationContext()
            r1.<init>(r2)
            r1.setBackgroundColor(r0)
            r5 = 0
            r9 = 0
            java.lang.String r6 = ""
            java.lang.String r7 = "text/html"
            java.lang.String r8 = "UTF-8"
            r4 = r1
            r4.loadDataWithBaseURL(r5, r6, r7, r8, r9)
            android.view.WindowManager$LayoutParams r0 = new android.view.WindowManager$LayoutParams
            r0.<init>()
            r0.width = r3
            r0.height = r3
            r2 = 2005(0x7d5, float:2.81E-42)
            r0.type = r2
            r2 = 16777240(0x1000018, float:2.3509954E-38)
            r0.flags = r2
            r2 = -2
            r0.format = r2
            r2 = 8388659(0x800033, float:1.1755015E-38)
            r0.gravity = r2
            java.lang.String r2 = "window"
            java.lang.Object r11 = r11.getSystemService(r2)
            android.view.WindowManager r11 = (android.view.WindowManager) r11
            r11.addView(r1, r0)
        L7c:
            com.tkay.core.basead.ui.web.BaseWebView.b = r3
        L7e:
            return
    }

    private void a() {
            r2 = this;
            android.webkit.WebSettings r0 = r2.getSettings()
            r1 = 1
            r0.setJavaScriptEnabled(r1)
            android.webkit.WebSettings r0 = r2.getSettings()
            r0.setDomStorageEnabled(r1)
            android.webkit.WebSettings r0 = r2.getSettings()
            r0.setAppCacheEnabled(r1)
            android.webkit.WebSettings r0 = r2.getSettings()
            android.content.Context r1 = r2.getContext()
            java.io.File r1 = r1.getCacheDir()
            java.lang.String r1 = r1.getAbsolutePath()
            r0.setAppCachePath(r1)
            return
    }

    private static void a(android.content.Context r8) {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 19
            if (r0 != r1) goto L45
            android.webkit.WebView r0 = new android.webkit.WebView
            android.content.Context r1 = r8.getApplicationContext()
            r0.<init>(r1)
            r1 = 0
            r0.setBackgroundColor(r1)
            r3 = 0
            r7 = 0
            java.lang.String r4 = ""
            java.lang.String r5 = "text/html"
            java.lang.String r6 = "UTF-8"
            r2 = r0
            r2.loadDataWithBaseURL(r3, r4, r5, r6, r7)
            android.view.WindowManager$LayoutParams r1 = new android.view.WindowManager$LayoutParams
            r1.<init>()
            r2 = 1
            r1.width = r2
            r1.height = r2
            r2 = 2005(0x7d5, float:2.81E-42)
            r1.type = r2
            r2 = 16777240(0x1000018, float:2.3509954E-38)
            r1.flags = r2
            r2 = -2
            r1.format = r2
            r2 = 8388659(0x800033, float:1.1755015E-38)
            r1.gravity = r2
            java.lang.String r2 = "window"
            java.lang.Object r8 = r8.getSystemService(r2)
            android.view.WindowManager r8 = (android.view.WindowManager) r8
            r8.addView(r0, r1)
        L45:
            return
    }

    private void b() {
            r3 = this;
            android.webkit.WebSettings r0 = r3.getSettings()
            r1 = 0
            r0.setAllowFileAccess(r1)
            android.webkit.WebSettings r0 = r3.getSettings()
            r0.setAllowContentAccess(r1)
            int r0 = android.os.Build.VERSION.SDK_INT
            r2 = 16
            if (r0 < r2) goto L23
            android.webkit.WebSettings r0 = r3.getSettings()
            r0.setAllowFileAccessFromFileURLs(r1)
            android.webkit.WebSettings r0 = r3.getSettings()
            r0.setAllowUniversalAccessFromFileURLs(r1)
        L23:
            return
    }

    @Override
    public void destroy() {
            r1 = this;
            boolean r0 = r1.a
            if (r0 == 0) goto L5
            return
        L5:
            r0 = 1
            r1.a = r0
            com.tkay.core.common.l.u.a(r1)
            r1.removeAllViews()
            super.destroy()
            return
    }

    @Override
    protected void onAttachedToWindow() {
            r3 = this;
            super.onAttachedToWindow()
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L1c
            android.content.Context r1 = r3.getContext()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            r0.setAcceptThirdPartyCookies(r3, r1)
        L1c:
            return
    }
}
