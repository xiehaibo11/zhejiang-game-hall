package com.alipay.sdk.app;

public class b extends android.webkit.WebViewClient {
    private android.app.Activity a;
    private boolean b;
    private android.os.Handler c;
    private com.alipay.sdk.widget.a d;
    private boolean e;

    private static final class a implements java.lang.Runnable {
        private final java.lang.ref.WeakReference<com.alipay.sdk.app.b> a;

        a(com.alipay.sdk.app.b r2) {
                r1 = this;
                r1.<init>()
                java.lang.ref.WeakReference r0 = new java.lang.ref.WeakReference
                r0.<init>(r2)
                r1.a = r0
                return
        }

        @Override
        public void run() {
                r1 = this;
                java.lang.ref.WeakReference<com.alipay.sdk.app.b> r0 = r1.a
                java.lang.Object r0 = r0.get()
                com.alipay.sdk.app.b r0 = (com.alipay.sdk.app.b) r0
                if (r0 == 0) goto Ld
                com.alipay.sdk.app.b.a(r0)
            Ld:
                return
        }
    }

    public b(android.app.Activity r2) {
            r1 = this;
            r1.<init>()
            r1.a = r2
            android.os.Handler r2 = new android.os.Handler
            android.app.Activity r0 = r1.a
            android.os.Looper r0 = r0.getMainLooper()
            r2.<init>(r0)
            r1.c = r2
            return
    }

    static void a(com.alipay.sdk.app.b r0) {
            r0.d()
            return
    }

    static boolean a(com.alipay.sdk.app.b r0, boolean r1) {
            r0.b = r1
            return r1
    }

    private void c() {
            r3 = this;
            android.app.Activity r0 = r3.a
            if (r0 != 0) goto L5
            return
        L5:
            com.alipay.sdk.widget.a r1 = r3.d
            if (r1 != 0) goto L18
            com.alipay.sdk.widget.a r1 = new com.alipay.sdk.widget.a
            java.lang.String r2 = "正在加载"
            r1.<init>(r0, r2)
            r3.d = r1
            com.alipay.sdk.widget.a r0 = r3.d
            r1 = 1
            r0.a(r1)
        L18:
            com.alipay.sdk.widget.a r0 = r3.d
            r0.b()
            return
    }

    private void d() {
            r1 = this;
            com.alipay.sdk.widget.a r0 = r1.d
            if (r0 == 0) goto L7
            r0.c()
        L7:
            r0 = 0
            r1.d = r0
            return
    }

    public void a() {
            r1 = this;
            r0 = 0
            r1.c = r0
            r1.a = r0
            return
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    @Override
    public void onPageFinished(android.webkit.WebView r1, java.lang.String r2) {
            r0 = this;
            android.app.Activity r1 = r0.a
            android.os.Handler r2 = r0.c
            if (r2 == 0) goto L17
            if (r1 == 0) goto L17
            boolean r1 = r1.isFinishing()
            if (r1 != 0) goto L17
            r0.d()
            android.os.Handler r1 = r0.c
            r2 = 0
            r1.removeCallbacksAndMessages(r2)
        L17:
            return
    }

    @Override
    public void onPageStarted(android.webkit.WebView r5, java.lang.String r6, android.graphics.Bitmap r7) {
            r4 = this;
            android.app.Activity r0 = r4.a
            android.os.Handler r1 = r4.c
            if (r1 == 0) goto L1d
            if (r0 == 0) goto L1d
            boolean r0 = r0.isFinishing()
            if (r0 != 0) goto L1d
            r4.c()
            android.os.Handler r0 = r4.c
            com.alipay.sdk.app.b$a r1 = new com.alipay.sdk.app.b$a
            r1.<init>(r4)
            r2 = 30000(0x7530, double:1.4822E-319)
            r0.postDelayed(r1, r2)
        L1d:
            super.onPageStarted(r5, r6, r7)
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r2, int r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r0 = 1
            r1.e = r0
            super.onReceivedError(r2, r3, r4, r5)
            return
    }

    @Override
    public void onReceivedSslError(android.webkit.WebView r3, android.webkit.SslErrorHandler r4, android.net.http.SslError r5) {
            r2 = this;
            android.app.Activity r3 = r2.a
            if (r3 != 0) goto L5
            return
        L5:
            java.lang.String r5 = "net"
            java.lang.String r0 = "SSLError"
            java.lang.String r1 = "证书错误"
            com.alipay.sdk.app.statistic.a.a(r5, r0, r1)
            boolean r5 = r2.b
            if (r5 == 0) goto L19
            r4.proceed()
            r3 = 0
            r2.b = r3
            return
        L19:
            com.alipay.sdk.app.c r5 = new com.alipay.sdk.app.c
            r5.<init>(r2, r3, r4)
            r3.runOnUiThread(r5)
            return
    }

    @Override
    public boolean shouldOverrideUrlLoading(android.webkit.WebView r2, java.lang.String r3) {
            r1 = this;
            android.app.Activity r0 = r1.a
            boolean r2 = com.alipay.sdk.util.n.a(r2, r3, r0)
            return r2
    }
}
