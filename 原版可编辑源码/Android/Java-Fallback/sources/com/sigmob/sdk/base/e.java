package com.sigmob.sdk.base;

public class e extends android.webkit.WebViewClient {
    static final java.lang.String a = "Set-Cookie";
    static final java.lang.String b = "Referer";
    private static final java.lang.String c = "mraid.js";
    private static final java.lang.String d = "Cookie";
    private java.net.CookieManager e;
    private boolean f;
    private java.lang.String g;

    public e() {
            r1 = this;
            r1.<init>()
            java.net.CookieManager r0 = new java.net.CookieManager
            r0.<init>()
            r1.e = r0
            r0 = 0
            r1.f = r0
            return
    }

    public static android.webkit.WebResourceResponse a(android.net.Uri r0) {
            r0 = 0
            return r0
    }

    private android.webkit.WebResourceResponse a(java.lang.String r8, java.lang.String r9, java.util.Map<java.lang.String, java.lang.String> r10) {
            r7 = this;
            java.lang.String r0 = "text/html"
            boolean r1 = android.webkit.URLUtil.isHttpUrl(r8)
            r2 = 0
            if (r1 != 0) goto L10
            boolean r1 = android.webkit.URLUtil.isHttpsUrl(r8)
            if (r1 != 0) goto L10
            return r2
        L10:
            android.net.Uri r1 = android.net.Uri.parse(r8)     // Catch: java.lang.Exception -> Lb3
            java.lang.String r1 = r1.getHost()     // Catch: java.lang.Exception -> Lb3
            if (r1 == 0) goto Lb2
            java.lang.String r3 = "127.0.0.1"
            boolean r1 = r1.equals(r3)     // Catch: java.lang.Exception -> Lb3
            if (r1 == 0) goto L24
            goto Lb2
        L24:
            java.net.URL r1 = new java.net.URL     // Catch: java.lang.Exception -> Lb3
            r1.<init>(r8)     // Catch: java.lang.Exception -> Lb3
            java.net.URLConnection r1 = r1.openConnection()     // Catch: java.lang.Exception -> Lb3
            java.net.HttpURLConnection r1 = (java.net.HttpURLConnection) r1     // Catch: java.lang.Exception -> Lb3
            r1.setRequestMethod(r9)     // Catch: java.lang.Exception -> Lb3
            if (r10 == 0) goto L5e
            int r9 = r10.size()     // Catch: java.lang.Exception -> Lb3
            if (r9 <= 0) goto L5e
            java.util.Set r9 = r10.entrySet()     // Catch: java.lang.Exception -> Lb3
            java.util.Iterator r9 = r9.iterator()     // Catch: java.lang.Exception -> Lb3
        L42:
            boolean r10 = r9.hasNext()     // Catch: java.lang.Exception -> Lb3
            if (r10 == 0) goto L5e
            java.lang.Object r10 = r9.next()     // Catch: java.lang.Exception -> Lb3
            java.util.Map$Entry r10 = (java.util.Map.Entry) r10     // Catch: java.lang.Exception -> Lb3
            java.lang.Object r3 = r10.getKey()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> Lb3
            java.lang.Object r10 = r10.getValue()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r10 = (java.lang.String) r10     // Catch: java.lang.Exception -> Lb3
            r1.setRequestProperty(r3, r10)     // Catch: java.lang.Exception -> Lb3
            goto L42
        L5e:
            android.webkit.CookieManager r9 = android.webkit.CookieManager.getInstance()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r8 = r9.getCookie(r8)     // Catch: java.lang.Exception -> Lb3
            boolean r9 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Exception -> Lb3
            if (r9 != 0) goto L8c
            java.lang.String r9 = ";"
            java.lang.String[] r8 = r8.split(r9)     // Catch: java.lang.Exception -> Lb3
            int r9 = r8.length     // Catch: java.lang.Exception -> Lb3
            r10 = 0
        L74:
            if (r10 >= r9) goto L8c
            r3 = r8[r10]     // Catch: java.lang.Exception -> Lb3
            java.lang.String r4 = "Cookie"
            java.lang.String r4 = r4.toLowerCase()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r5 = " "
            java.lang.String r6 = ""
            java.lang.String r3 = r3.replace(r5, r6)     // Catch: java.lang.Exception -> Lb3
            r1.addRequestProperty(r4, r3)     // Catch: java.lang.Exception -> Lb3
            int r10 = r10 + 1
            goto L74
        L8c:
            r1.connect()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r8 = r1.getContentType()     // Catch: java.lang.Exception -> Lb3
            java.lang.String r9 = r1.getContentEncoding()     // Catch: java.lang.Exception -> Lb3
            java.io.InputStream r10 = r1.getInputStream()     // Catch: java.lang.Exception -> Lb3
            java.net.CookieManager r3 = r7.e     // Catch: java.lang.Exception -> Lb3
            a(r1, r3)     // Catch: java.lang.Exception -> Lb3
            boolean r1 = r8.contains(r0)     // Catch: java.lang.Exception -> Lb3
            if (r1 == 0) goto Lab
            java.io.InputStream r10 = r7.a(r10, r9)     // Catch: java.lang.Exception -> Lb3
            goto Lac
        Lab:
            r0 = r8
        Lac:
            android.webkit.WebResourceResponse r8 = new android.webkit.WebResourceResponse     // Catch: java.lang.Exception -> Lb3
            r8.<init>(r0, r9, r10)     // Catch: java.lang.Exception -> Lb3
            return r8
        Lb2:
            return r2
        Lb3:
            r8 = move-exception
            r8.printStackTrace()
            return r2
    }

    private java.io.InputStream a(java.io.InputStream r5, java.lang.String r6) throws java.io.IOException {
            r4 = this;
            r0 = 1024(0x400, float:1.435E-42)
            byte[] r0 = new byte[r0]
            java.io.ByteArrayOutputStream r1 = new java.io.ByteArrayOutputStream
            r1.<init>()
        L9:
            int r2 = r5.read(r0)
            r3 = -1
            if (r2 != r3) goto L2d
            java.lang.String r5 = new java.lang.String
            byte[] r0 = r1.toByteArray()
            r5.<init>(r0)
            if (r6 != 0) goto L23
            java.nio.charset.Charset r6 = java.nio.charset.Charset.defaultCharset()
            java.lang.String r6 = r6.displayName()
        L23:
            java.io.ByteArrayInputStream r0 = new java.io.ByteArrayInputStream
            byte[] r5 = r5.getBytes(r6)
            r0.<init>(r5)
            return r0
        L2d:
            r3 = 0
            r1.write(r0, r3, r2)
            goto L9
    }

    public static void a(java.net.HttpURLConnection r6, java.net.CookieManager r7) {
            if (r7 == 0) goto Lec
            if (r6 != 0) goto L6
            goto Lec
        L6:
            java.util.Map r7 = r6.getHeaderFields()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "headerFields : "
            r0.append(r1)
            java.lang.String r1 = r7.toString()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.czhj.sdk.logger.SigmobLog.d(r0)
            java.lang.String r0 = "Set-Cookie"
            java.lang.Object r7 = r7.get(r0)
            java.util.List r7 = (java.util.List) r7
            if (r7 == 0) goto Lec
            java.util.Iterator r7 = r7.iterator()
        L30:
            boolean r0 = r7.hasNext()
            if (r0 == 0) goto Ld7
            java.lang.Object r0 = r7.next()
            java.lang.String r0 = (java.lang.String) r0
            r1 = 0
            java.util.List r0 = java.net.HttpCookie.parse(r0)     // Catch: java.lang.NullPointerException -> Lb8
            if (r0 == 0) goto L30
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "{0} -- Reading Cookies from the response :"
            r2.append(r3)
            java.net.URL r4 = r6.getURL()
            java.lang.String r4 = r4.toString()
            r2.append(r4)
            java.lang.String r2 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r2)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r3)
            java.lang.Object r1 = r0.get(r1)
            r2.append(r1)
            java.lang.String r1 = r2.toString()
            com.czhj.sdk.logger.SigmobLog.d(r1)
            java.util.Iterator r0 = r0.iterator()
        L79:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r0.next()
            java.net.HttpCookie r1 = (java.net.HttpCookie) r1
            java.lang.String r2 = r1.toString()
            com.czhj.sdk.logger.SigmobLog.d(r2)
            android.webkit.CookieManager r2 = android.webkit.CookieManager.getInstance()
            java.net.URL r3 = r6.getURL()
            java.lang.String r3 = r3.toString()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = r1.getName()
            r4.append(r5)
            java.lang.String r5 = "="
            r4.append(r5)
            java.lang.String r1 = r1.getValue()
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            r2.setCookie(r3, r1)
            goto L79
        Lb8:
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            java.net.URL r3 = r6.getURL()
            java.lang.String r3 = r3.toString()
            r2[r1] = r3
            r1 = 1
            java.lang.String r0 = r0.toString()
            r2[r1] = r0
            java.lang.String r0 = "{0} -- Null header for the cookie : {1}"
            java.lang.String r0 = java.text.MessageFormat.format(r0, r2)
            com.czhj.sdk.logger.SigmobLog.e(r0)
            goto L30
        Ld7:
            int r6 = android.os.Build.VERSION.SDK_INT
            r7 = 21
            if (r6 < r7) goto Le5
            android.webkit.CookieManager r6 = android.webkit.CookieManager.getInstance()
            r6.flush()
            goto Lec
        Le5:
            android.webkit.CookieSyncManager r6 = android.webkit.CookieSyncManager.getInstance()
            r6.sync()
        Lec:
            return
    }

    public void a(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    boolean a(java.lang.String r2) {
            r1 = this;
            java.util.Locale r0 = java.util.Locale.US
            java.lang.String r2 = r2.toLowerCase(r0)
            android.net.Uri r2 = android.net.Uri.parse(r2)
            java.lang.String r2 = r2.getLastPathSegment()
            java.lang.String r0 = "mraid.js"
            boolean r2 = r0.equals(r2)
            return r2
    }

    public void b(java.lang.String r3) {
            r2 = this;
            android.net.Uri r3 = android.net.Uri.parse(r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L2e
            r0.<init>()     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r3.getScheme()     // Catch: java.lang.Throwable -> L2e
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "://"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = r3.getHost()     // Catch: java.lang.Throwable -> L2e
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r1 = "/"
            r0.append(r1)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r3.getPath()     // Catch: java.lang.Throwable -> L2e
            r0.append(r3)     // Catch: java.lang.Throwable -> L2e
            java.lang.String r3 = r0.toString()     // Catch: java.lang.Throwable -> L2e
            r2.g = r3     // Catch: java.lang.Throwable -> L2e
        L2e:
            return
    }

    @Override
    public void onPageStarted(android.webkit.WebView r1, java.lang.String r2, android.graphics.Bitmap r3) {
            r0 = this;
            super.onPageStarted(r1, r2, r3)
            return
    }

    @Override
    public void onReceivedError(android.webkit.WebView r1, int r2, java.lang.String r3, java.lang.String r4) {
            r0 = this;
            super.onReceivedError(r1, r2, r3, r4)
            return
    }

    @Override
    public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r4, android.webkit.WebResourceRequest r5) {
            r3 = this;
            android.net.Uri r0 = r5.getUrl()     // Catch: java.lang.Throwable -> Lb
            android.webkit.WebResourceResponse r0 = a(r0)     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lb
            return r0
        Lb:
            boolean r0 = r3.f
            if (r0 == 0) goto L34
            android.net.Uri r0 = r5.getUrl()
            java.lang.String r0 = r0.toString()
            boolean r0 = r3.a(r0)
            if (r0 != 0) goto L34
            android.net.Uri r0 = r5.getUrl()
            java.lang.String r0 = r0.toString()
            java.lang.String r1 = r5.getMethod()
            java.util.Map r2 = r5.getRequestHeaders()
            android.webkit.WebResourceResponse r0 = r3.a(r0, r1, r2)
            if (r0 == 0) goto L34
            return r0
        L34:
            android.webkit.WebResourceResponse r4 = super.shouldInterceptRequest(r4, r5)
            return r4
    }

    @Override
    public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView r3, java.lang.String r4) {
            r2 = this;
            android.net.Uri r0 = android.net.Uri.parse(r4)     // Catch: java.lang.Throwable -> Lb
            android.webkit.WebResourceResponse r0 = a(r0)     // Catch: java.lang.Throwable -> Lb
            if (r0 == 0) goto Lb
            return r0
        Lb:
            boolean r0 = r2.f
            if (r0 == 0) goto L1f
            boolean r0 = r2.a(r4)
            if (r0 != 0) goto L1f
            r0 = 0
            java.lang.String r1 = "GET"
            android.webkit.WebResourceResponse r0 = r2.a(r4, r1, r0)
            if (r0 == 0) goto L1f
            return r0
        L1f:
            android.webkit.WebResourceResponse r3 = super.shouldInterceptRequest(r3, r4)
            return r3
    }
}
