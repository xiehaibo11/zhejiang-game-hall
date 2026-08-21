package com.tkay.core.basead.ui.a;

public final class a {


    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            com.tkay.core.common.b.m r1 = com.tkay.core.common.b.m.a()
            android.content.Context r1 = r1.f()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            if (r1 == 0) goto L1e
            r1 = 1
            r0.setAcceptCookie(r1)
            android.webkit.CookieManager.setAcceptFileSchemeCookies(r1)
            return
        L1e:
            r1 = 0
            r0.setAcceptCookie(r1)
            android.webkit.CookieManager.setAcceptFileSchemeCookies(r1)
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L36
            r1 = 0
            r0.removeSessionCookies(r1)
            r0.removeAllCookies(r1)
            r0.flush()
            return
        L36:
            r0.removeSessionCookie()
            r0.removeAllCookie()
            return
    }

    public static void a(android.webkit.WebView r1) {
            com.tkay.core.basead.ui.a.a$1 r0 = new com.tkay.core.basead.ui.a.a$1
            r0.<init>()
            r1.setWebChromeClient(r0)
            return
    }

    private static void a(android.webkit.WebView r0, boolean r1) {
            if (r1 == 0) goto La
            r0.stopLoading()
            java.lang.String r1 = ""
            r0.loadUrl(r1)
        La:
            r0.onPause()
            return
    }

    private static void b(android.webkit.WebView r3) {
            android.webkit.CookieManager r0 = android.webkit.CookieManager.getInstance()
            int r1 = android.os.Build.VERSION.SDK_INT
            r2 = 21
            if (r1 < r2) goto L19
            android.content.Context r1 = r3.getContext()
            com.tkay.core.common.b.p r1 = com.tkay.core.common.b.p.a(r1)
            boolean r1 = r1.b()
            r0.setAcceptThirdPartyCookies(r3, r1)
        L19:
            return
    }
}
