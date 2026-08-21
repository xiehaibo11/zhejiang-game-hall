package com.alipay.sdk.m.x;

public abstract class c extends android.widget.FrameLayout {
    public static final java.lang.String c = "v1";
    public static final java.lang.String d = "v2";
    public android.app.Activity a;
    public final java.lang.String b;

    public c(android.app.Activity r1, java.lang.String r2) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r1
            r0.b = r2
            return
    }

    public static void a(android.webkit.WebView r0) {
            if (r0 == 0) goto L5
            r0.resumeTimers()     // Catch: java.lang.Throwable -> L5
        L5:
            return
    }

    public abstract void a(java.lang.String r1);

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L21
            android.app.Activity r0 = r1.a
            android.content.Context r0 = r0.getApplicationContext()
            android.webkit.CookieSyncManager r0 = android.webkit.CookieSyncManager.createInstance(r0)
            r0.sync()
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            r0.setCookie(r2, r3)
            android.webkit.CookieSyncManager r2 = android.webkit.CookieSyncManager.getInstance()
            r2.sync()
        L21:
            return
    }

    public boolean a() {
            r2 = this;
            java.lang.String r0 = r2.b
            java.lang.String r1 = "v1"
            boolean r0 = r1.equals(r0)
            return r0
    }

    public abstract boolean b();

    public abstract void c();
}
