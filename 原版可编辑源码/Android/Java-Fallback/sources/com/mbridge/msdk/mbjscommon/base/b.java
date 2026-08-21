package com.mbridge.msdk.mbjscommon.base;

public class b extends android.webkit.WebViewClient {
    private com.mbridge.msdk.mbjscommon.base.a a;
    private com.mbridge.msdk.mbjscommon.windvane.d b;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public final void a(com.mbridge.msdk.mbjscommon.base.a r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public final void a(com.mbridge.msdk.mbjscommon.windvane.d r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final com.mbridge.msdk.mbjscommon.base.a b() {
            r1 = this;
            com.mbridge.msdk.mbjscommon.base.a r0 = r1.a
            return r0
    }

    @Override
    public void onPageFinished(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            super.onPageFinished(r2, r3)
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.b
            if (r0 == 0) goto La
            r0.a(r2, r3)
        La:
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            super.onReceivedError(r2, r3, r4, r5)
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.b
            if (r0 == 0) goto La
            r0.a(r2, r3, r4, r5)
        La:
            return
    }

    @Override
    public void onReceivedSslError(android.webkit.WebView r2, android.webkit.SslErrorHandler r3, android.net.http.SslError r4) {
            r1 = this;
            super.onReceivedSslError(r2, r3, r4)
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.b
            if (r0 == 0) goto La
            r0.a(r2, r3, r4)
        La:
            return
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            com.mbridge.msdk.mbjscommon.base.a r0 = r1.a
            if (r0 == 0) goto Lc
            boolean r0 = r0.a(r3)
            if (r0 == 0) goto Lc
            r2 = 1
            return r2
        Lc:
            com.mbridge.msdk.mbjscommon.windvane.d r0 = r1.b
            if (r0 == 0) goto L13
            r0.b(r2, r3)
        L13:
            boolean r2 = super.shouldOverrideUrlLoading(r2, r3)
            return r2
    }
}
