package com.huawei.secure.android.common.webview;

public class SafeGetUrl {
    private static final java.lang.String c = "SafeGetUrl";
    private static final long d = 200;
    private java.lang.String a;
    private android.webkit.WebView b;

    class a implements java.lang.Runnable {
        final java.util.concurrent.CountDownLatch a;
        final com.huawei.secure.android.common.webview.SafeGetUrl b;

        a(com.huawei.secure.android.common.webview.SafeGetUrl r1, java.util.concurrent.CountDownLatch r2) {
                r0 = this;
                r0.b = r1
                r0.a = r2
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r2 = this;
                com.huawei.secure.android.common.webview.SafeGetUrl r0 = r2.b
                android.webkit.WebView r1 = com.huawei.secure.android.common.webview.SafeGetUrl.a(r0)
                java.lang.String r1 = r1.getUrl()
                r0.setUrl(r1)
                java.util.concurrent.CountDownLatch r0 = r2.a
                r0.countDown()
                return
        }
    }

    public SafeGetUrl() {
            r0 = this;
            r0.<init>()
            return
    }

    public SafeGetUrl(android.webkit.WebView r1) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            return
    }

    static android.webkit.WebView a(com.huawei.secure.android.common.webview.SafeGetUrl r0) {
            android.webkit.WebView r0 = r0.b
            return r0
    }

    public java.lang.String getUrlMethod() {
            r3 = this;
            android.webkit.WebView r0 = r3.b
            if (r0 != 0) goto L7
            java.lang.String r0 = ""
            return r0
        L7:
            boolean r0 = com.huawei.secure.android.common.util.b.a()
            if (r0 == 0) goto L14
            android.webkit.WebView r0 = r3.b
            java.lang.String r0 = r0.getUrl()
            return r0
        L14:
            java.util.concurrent.CountDownLatch r0 = new java.util.concurrent.CountDownLatch
            r1 = 1
            r0.<init>(r1)
            com.huawei.secure.android.common.webview.SafeGetUrl$a r1 = new com.huawei.secure.android.common.webview.SafeGetUrl$a
            r1.<init>(r3, r0)
            com.huawei.secure.android.common.util.c.a(r1)
            r0.await()     // Catch: java.lang.InterruptedException -> L26
            goto L41
        L26:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getUrlMethod: InterruptedException "
            r1.append(r2)
            java.lang.String r2 = r0.getMessage()
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "SafeGetUrl"
            android.util.Log.e(r2, r1, r0)
        L41:
            java.lang.String r0 = r3.a
            return r0
    }

    public android.webkit.WebView getWebView() {
            r1 = this;
            android.webkit.WebView r0 = r1.b
            return r0
    }

    public void setUrl(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public void setWebView(android.webkit.WebView r1) {
            r0 = this;
            r0.b = r1
            return
    }
}
