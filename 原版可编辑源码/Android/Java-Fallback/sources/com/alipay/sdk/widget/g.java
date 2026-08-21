package com.alipay.sdk.widget;

public abstract class g extends android.widget.FrameLayout {
    protected android.app.Activity a;

    public g(android.app.Activity r1) {
            r0 = this;
            r0.<init>(r1)
            r0.a = r1
            return
    }

    public abstract void a();

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

    public abstract boolean b();
}
