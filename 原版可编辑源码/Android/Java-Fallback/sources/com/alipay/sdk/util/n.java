package com.alipay.sdk.util;

public class n {
    static final java.lang.String a = "com.alipay.android.app";
    public static final java.lang.String b = "com.eg.android.AlipayGphone";
    public static final int c = 99;
    public static final int d = 73;
    public static final java.lang.String[] e = null;
    public static final int f = 125;
    private static final java.lang.String g = "com.eg.android.AlipayGphoneRC";
    private static final java.lang.String h = ".alipay.wallet";
    private static final char[] i = null;

    public static final class a {
        public final android.content.pm.PackageInfo a;
        public final int b;
        public final java.lang.String c;

        public a(android.content.pm.PackageInfo r1, int r2, java.lang.String r3) {
                r0 = this;
                r0.<init>()
                r0.a = r1
                r0.b = r2
                r0.c = r3
                return
        }

        public boolean a() {
                r7 = this;
                android.content.pm.PackageInfo r0 = r7.a
                android.content.pm.Signature[] r0 = r0.signatures
                r1 = 0
                if (r0 == 0) goto L3f
                int r2 = r0.length
                if (r2 != 0) goto Lb
                goto L3f
            Lb:
                int r2 = r0.length
                r3 = 0
            Ld:
                r4 = 1
                if (r3 >= r2) goto L3f
                r5 = r0[r3]
                byte[] r5 = r5.toByteArray()
                java.lang.String r5 = com.alipay.sdk.util.n.a(r5)
                if (r5 == 0) goto L3c
                java.lang.String r6 = r7.c
                boolean r6 = android.text.TextUtils.equals(r5, r6)
                if (r6 != 0) goto L3c
                r0 = 2
                java.lang.Object[] r0 = new java.lang.Object[r0]
                r0[r1] = r5
                java.lang.String r1 = r7.c
                r0[r4] = r1
                java.lang.String r1 = "Got %s, expected %s"
                java.lang.String r0 = java.lang.String.format(r1, r0)
                java.lang.String r1 = "biz"
                java.lang.String r2 = "PublicKeyUnmatch"
                com.alipay.sdk.app.statistic.a.a(r1, r2, r0)
                r1 = 1
                goto L3f
            L3c:
                int r3 = r3 + 1
                goto Ld
            L3f:
                return r1
        }

        public boolean b() {
                r2 = this;
                android.content.pm.PackageInfo r0 = r2.a
                int r0 = r0.versionCode
                int r1 = r2.b
                if (r0 >= r1) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }
    }

    static {
            r0 = 2
            java.lang.String[] r0 = new java.lang.String[r0]
            r1 = 0
            java.lang.String r2 = "10.1.5.1013151"
            r0[r1] = r2
            r1 = 1
            java.lang.String r2 = "10.1.5.1013148"
            r0[r1] = r2
            com.alipay.sdk.util.n.e = r0
            java.lang.String r0 = "0123456789ABCDEF"
            char[] r0 = r0.toCharArray()
            com.alipay.sdk.util.n.i = r0
            return
    }

    public n() {
            r0 = this;
            r0.<init>()
            return
    }

    public static android.webkit.WebView a(android.app.Activity r8, java.lang.String r9, java.lang.String r10) {
            java.lang.String r0 = "accessibilityTraversal"
            java.lang.String r1 = "accessibility"
            java.lang.String r2 = "searchBoxJavaBridge_"
            android.content.Context r3 = r8.getApplicationContext()
            boolean r4 = android.text.TextUtils.isEmpty(r10)
            if (r4 != 0) goto L25
            android.webkit.CookieSyncManager r4 = android.webkit.CookieSyncManager.createInstance(r3)
            r4.sync()
            android.webkit.CookieManager r4 = android.webkit.CookieManager.getInstance()
            r4.setCookie(r9, r10)
            android.webkit.CookieSyncManager r10 = android.webkit.CookieSyncManager.getInstance()
            r10.sync()
        L25:
            android.widget.LinearLayout r10 = new android.widget.LinearLayout
            r10.<init>(r3)
            android.widget.LinearLayout$LayoutParams r4 = new android.widget.LinearLayout$LayoutParams
            r5 = -1
            r4.<init>(r5, r5)
            r5 = 1
            r10.setOrientation(r5)
            r8.setContentView(r10, r4)
            android.webkit.WebView r8 = new android.webkit.WebView
            r8.<init>(r3)
            r6 = 1065353216(0x3f800000, float:1.0)
            r4.weight = r6
            r6 = 0
            r8.setVisibility(r6)
            r10.addView(r8, r4)
            android.webkit.WebSettings r10 = r8.getSettings()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r7 = r10.getUserAgentString()
            r4.append(r7)
            java.lang.String r7 = c(r3)
            r4.append(r7)
            java.lang.String r4 = r4.toString()
            r10.setUserAgentString(r4)
            android.webkit.WebSettings$RenderPriority r4 = android.webkit.WebSettings.RenderPriority.HIGH
            r10.setRenderPriority(r4)
            r10.setSupportMultipleWindows(r5)
            r10.setJavaScriptEnabled(r5)
            r10.setSavePassword(r6)
            r10.setJavaScriptCanOpenWindowsAutomatically(r5)
            int r4 = r10.getMinimumFontSize()
            int r4 = r4 + 8
            r10.setMinimumFontSize(r4)
            r10.setAllowFileAccess(r6)
            r10.setAllowFileAccessFromFileURLs(r6)
            r10.setAllowUniversalAccessFromFileURLs(r6)
            r10.setAllowContentAccess(r6)
            android.webkit.WebSettings$TextSize r4 = android.webkit.WebSettings.TextSize.NORMAL
            r10.setTextSize(r4)
            r8.setVerticalScrollbarOverlay(r5)
            com.alipay.sdk.util.o r10 = new com.alipay.sdk.util.o
            r10.<init>(r3)
            r8.setDownloadListener(r10)
            int r10 = android.os.Build.VERSION.SDK_INT
            r3 = 7
            if (r10 < r3) goto Lc5
            android.webkit.WebSettings r10 = r8.getSettings()     // Catch: java.lang.Exception -> Lc5
            java.lang.Class r10 = r10.getClass()     // Catch: java.lang.Exception -> Lc5
            java.lang.String r3 = "setDomStorageEnabled"
            java.lang.Class[] r4 = new java.lang.Class[r5]     // Catch: java.lang.Exception -> Lc5
            java.lang.Class r7 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> Lc5
            r4[r6] = r7     // Catch: java.lang.Exception -> Lc5
            java.lang.reflect.Method r10 = r10.getMethod(r3, r4)     // Catch: java.lang.Exception -> Lc5
            if (r10 == 0) goto Lc5
            android.webkit.WebSettings r3 = r8.getSettings()     // Catch: java.lang.Exception -> Lc5
            java.lang.Object[] r4 = new java.lang.Object[r5]     // Catch: java.lang.Exception -> Lc5
            java.lang.Boolean r7 = java.lang.Boolean.valueOf(r5)     // Catch: java.lang.Exception -> Lc5
            r4[r6] = r7     // Catch: java.lang.Exception -> Lc5
            r10.invoke(r3, r4)     // Catch: java.lang.Exception -> Lc5
        Lc5:
            r8.removeJavascriptInterface(r2)     // Catch: java.lang.Throwable -> Lcf
            r8.removeJavascriptInterface(r1)     // Catch: java.lang.Throwable -> Lcf
            r8.removeJavascriptInterface(r0)     // Catch: java.lang.Throwable -> Lcf
            goto Lf4
        Lcf:
            java.lang.Class r10 = r8.getClass()     // Catch: java.lang.Throwable -> Lf3
            java.lang.String r3 = "removeJavascriptInterface"
            java.lang.Class[] r4 = new java.lang.Class[r6]     // Catch: java.lang.Throwable -> Lf3
            java.lang.reflect.Method r10 = r10.getMethod(r3, r4)     // Catch: java.lang.Throwable -> Lf3
            if (r10 == 0) goto Lf4
            java.lang.Object[] r3 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lf3
            r3[r6] = r2     // Catch: java.lang.Throwable -> Lf3
            r10.invoke(r8, r3)     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object[] r2 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lf3
            r2[r6] = r1     // Catch: java.lang.Throwable -> Lf3
            r10.invoke(r8, r2)     // Catch: java.lang.Throwable -> Lf3
            java.lang.Object[] r1 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> Lf3
            r1[r6] = r0     // Catch: java.lang.Throwable -> Lf3
            r10.invoke(r8, r1)     // Catch: java.lang.Throwable -> Lf3
            goto Lf4
        Lf3:
        Lf4:
            int r10 = android.os.Build.VERSION.SDK_INT
            r0 = 19
            if (r10 < r0) goto L102
            android.webkit.WebSettings r10 = r8.getSettings()
            r0 = 2
            r10.setCacheMode(r0)
        L102:
            r8.loadUrl(r9)
            return r8
    }

    private static com.alipay.sdk.util.n.a a(android.content.Context r2, java.lang.String r3, int r4, java.lang.String r5) {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L10
            java.lang.String r0 = "com.eg.android.AlipayGphone"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L10
            java.lang.String r3 = "com.eg.android.AlipayGphoneRC"
        L10:
            r0 = 0
            android.content.pm.PackageInfo r2 = d(r2, r3)     // Catch: java.lang.Throwable -> L16
            goto L1f
        L16:
            r2 = move-exception
            java.lang.String r3 = "auth"
            java.lang.String r1 = "GetPackageInfoEx"
            com.alipay.sdk.app.statistic.a.a(r3, r1, r2)
            r2 = r0
        L1f:
            boolean r3 = b(r2)
            if (r3 != 0) goto L26
            return r0
        L26:
            com.alipay.sdk.util.n$a r2 = a(r2, r4, r5)
            return r2
    }

    public static com.alipay.sdk.util.n.a a(android.content.Context r4, java.util.List<com.alipay.sdk.data.a.a> r5) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            java.util.Iterator r5 = r5.iterator()
        L8:
            boolean r1 = r5.hasNext()
            if (r1 == 0) goto L30
            java.lang.Object r1 = r5.next()
            com.alipay.sdk.data.a$a r1 = (com.alipay.sdk.data.a.a) r1
            if (r1 != 0) goto L17
            goto L8
        L17:
            java.lang.String r2 = r1.a
            int r3 = r1.b
            java.lang.String r1 = r1.c
            com.alipay.sdk.util.n$a r1 = a(r4, r2, r3, r1)
            if (r1 == 0) goto L8
            boolean r2 = r1.a()
            if (r2 != 0) goto L8
            boolean r2 = r1.b()
            if (r2 != 0) goto L8
            return r1
        L30:
            return r0
    }

    private static com.alipay.sdk.util.n.a a(android.content.pm.PackageInfo r1, int r2, java.lang.String r3) {
            if (r1 != 0) goto L4
            r1 = 0
            return r1
        L4:
            com.alipay.sdk.util.n$a r0 = new com.alipay.sdk.util.n$a
            r0.<init>(r1, r2, r3)
            return r0
    }

    public static java.lang.String a() {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L9
            java.lang.String r0 = "com.eg.android.AlipayGphoneRC"
            return r0
        L9:
            java.util.List<com.alipay.sdk.data.a$a> r0 = com.alipay.sdk.app.i.a     // Catch: java.lang.Throwable -> L15
            r1 = 0
            java.lang.Object r0 = r0.get(r1)     // Catch: java.lang.Throwable -> L15
            com.alipay.sdk.data.a$a r0 = (com.alipay.sdk.data.a.a) r0     // Catch: java.lang.Throwable -> L15
            java.lang.String r0 = r0.a     // Catch: java.lang.Throwable -> L15
            return r0
        L15:
            java.lang.String r0 = "com.eg.android.AlipayGphone"
            return r0
    }

    public static java.lang.String a(int r8) {
            java.util.Random r0 = new java.util.Random
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r2 = 0
        Lb:
            if (r2 >= r8) goto L66
            r3 = 3
            int r3 = r0.nextInt(r3)
            r4 = 4627730092099895296(0x4039000000000000, double:25.0)
            if (r3 == 0) goto L4a
            r6 = 1
            if (r3 == r6) goto L30
            r4 = 2
            if (r3 == r4) goto L1d
            goto L63
        L1d:
            java.util.Random r3 = new java.util.Random
            r3.<init>()
            r4 = 10
            int r3 = r3.nextInt(r4)
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
            goto L63
        L30:
            double r6 = java.lang.Math.random()
            double r6 = r6 * r4
            r3 = 4636526185122103296(0x4058400000000000, double:97.0)
            double r6 = r6 + r3
            long r3 = java.lang.Math.round(r6)
            int r4 = (int) r3
            char r3 = (char) r4
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
            goto L63
        L4a:
            double r6 = java.lang.Math.random()
            double r6 = r6 * r4
            r3 = 4634274385308418048(0x4050400000000000, double:65.0)
            double r6 = r6 + r3
            long r3 = java.lang.Math.round(r6)
            int r4 = (int) r3
            char r3 = (char) r4
            java.lang.String r3 = java.lang.String.valueOf(r3)
            r1.append(r3)
        L63:
            int r2 = r2 + 1
            goto Lb
        L66:
            java.lang.String r8 = r1.toString()
            return r8
    }

    public static java.lang.String a(android.content.Context r6, java.lang.String r7) {
            java.lang.String r0 = ":"
            java.lang.String r1 = ""
            android.content.Context r6 = r6.getApplicationContext()     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "activity"
            java.lang.Object r6 = r6.getSystemService(r2)     // Catch: java.lang.Throwable -> L82
            android.app.ActivityManager r6 = (android.app.ActivityManager) r6     // Catch: java.lang.Throwable -> L82
            java.util.List r6 = r6.getRunningAppProcesses()     // Catch: java.lang.Throwable -> L82
            java.util.Iterator r6 = r6.iterator()     // Catch: java.lang.Throwable -> L82
            r2 = r1
        L19:
            boolean r3 = r6.hasNext()     // Catch: java.lang.Throwable -> L82
            if (r3 == 0) goto L80
            java.lang.Object r3 = r6.next()     // Catch: java.lang.Throwable -> L82
            android.app.ActivityManager$RunningAppProcessInfo r3 = (android.app.ActivityManager.RunningAppProcessInfo) r3     // Catch: java.lang.Throwable -> L82
            java.lang.String r4 = r3.processName     // Catch: java.lang.Throwable -> L82
            boolean r4 = r4.equals(r7)     // Catch: java.lang.Throwable -> L82
            if (r4 == 0) goto L3f
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r3.<init>()     // Catch: java.lang.Throwable -> L82
            r3.append(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "#M"
            r3.append(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r3.toString()     // Catch: java.lang.Throwable -> L82
            goto L19
        L3f:
            java.lang.String r4 = r3.processName     // Catch: java.lang.Throwable -> L82
            java.lang.StringBuilder r5 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r5.<init>()     // Catch: java.lang.Throwable -> L82
            r5.append(r7)     // Catch: java.lang.Throwable -> L82
            r5.append(r0)     // Catch: java.lang.Throwable -> L82
            java.lang.String r5 = r5.toString()     // Catch: java.lang.Throwable -> L82
            boolean r4 = r4.startsWith(r5)     // Catch: java.lang.Throwable -> L82
            if (r4 == 0) goto L19
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r4.<init>()     // Catch: java.lang.Throwable -> L82
            r4.append(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = "#"
            r4.append(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r3.processName     // Catch: java.lang.Throwable -> L82
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L82
            r3.<init>()     // Catch: java.lang.Throwable -> L82
            r3.append(r7)     // Catch: java.lang.Throwable -> L82
            r3.append(r0)     // Catch: java.lang.Throwable -> L82
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r2.replace(r3, r1)     // Catch: java.lang.Throwable -> L82
            r4.append(r2)     // Catch: java.lang.Throwable -> L82
            java.lang.String r2 = r4.toString()     // Catch: java.lang.Throwable -> L82
            goto L19
        L80:
            r1 = r2
            goto L83
        L82:
        L83:
            int r6 = r1.length()
            if (r6 <= 0) goto L8e
            r6 = 1
            java.lang.String r1 = r1.substring(r6)
        L8e:
            int r6 = r1.length()
            if (r6 != 0) goto L96
            java.lang.String r1 = "N"
        L96:
            return r1
    }

    public static java.lang.String a(android.content.pm.Signature r2) {
            java.lang.String r0 = "SHA-256"
            java.security.MessageDigest r0 = java.security.MessageDigest.getInstance(r0)     // Catch: java.lang.Throwable -> L13
            byte[] r2 = r2.toByteArray()     // Catch: java.lang.Throwable -> L13
            byte[] r2 = r0.digest(r2)     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = b(r2)     // Catch: java.lang.Throwable -> L13
            goto L1d
        L13:
            r2 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "CheckClientSignEx"
            com.alipay.sdk.app.statistic.a.a(r0, r1, r2)
            java.lang.String r2 = ""
        L1d:
            return r2
    }

    public static java.lang.String a(java.lang.String r1) {
            boolean r0 = com.alipay.sdk.app.EnvUtils.isSandBox()
            if (r0 == 0) goto L11
            java.lang.String r0 = "com.eg.android.AlipayGphoneRC"
            boolean r1 = android.text.TextUtils.equals(r1, r0)
            if (r1 == 0) goto L11
            java.lang.String r1 = "com.eg.android.AlipayGphoneRC.IAlixPay"
            return r1
        L11:
            java.lang.String r1 = "com.eg.android.AlipayGphone.IAlixPay"
            return r1
    }

    public static java.lang.String a(java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            java.lang.String r0 = ""
            int r1 = r5.indexOf(r3)     // Catch: java.lang.Throwable -> L2a
            int r2 = r3.length()     // Catch: java.lang.Throwable -> L2a
            int r1 = r1 + r2
            int r3 = r3.length()     // Catch: java.lang.Throwable -> L2a
            if (r1 > r3) goto L12
            return r0
        L12:
            r3 = 0
            boolean r2 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L2a
            if (r2 != 0) goto L1d
            int r3 = r5.indexOf(r4, r1)     // Catch: java.lang.Throwable -> L2a
        L1d:
            r4 = 1
            if (r3 >= r4) goto L25
            java.lang.String r3 = r5.substring(r1)     // Catch: java.lang.Throwable -> L2a
            return r3
        L25:
            java.lang.String r3 = r5.substring(r1, r3)     // Catch: java.lang.Throwable -> L2a
            return r3
        L2a:
            return r0
    }

    public static java.lang.String a(byte[] r2) {
            java.lang.String r0 = "X.509"
            java.security.cert.CertificateFactory r0 = java.security.cert.CertificateFactory.getInstance(r0)     // Catch: java.lang.Exception -> L28
            java.io.ByteArrayInputStream r1 = new java.io.ByteArrayInputStream     // Catch: java.lang.Exception -> L28
            r1.<init>(r2)     // Catch: java.lang.Exception -> L28
            java.security.cert.Certificate r2 = r0.generateCertificate(r1)     // Catch: java.lang.Exception -> L28
            java.security.cert.X509Certificate r2 = (java.security.cert.X509Certificate) r2     // Catch: java.lang.Exception -> L28
            java.security.PublicKey r2 = r2.getPublicKey()     // Catch: java.lang.Exception -> L28
            boolean r0 = r2 instanceof java.security.interfaces.RSAPublicKey     // Catch: java.lang.Exception -> L28
            if (r0 == 0) goto L30
            java.security.interfaces.RSAPublicKey r2 = (java.security.interfaces.RSAPublicKey) r2     // Catch: java.lang.Exception -> L28
            java.math.BigInteger r2 = r2.getModulus()     // Catch: java.lang.Exception -> L28
            if (r2 == 0) goto L30
            r0 = 16
            java.lang.String r2 = r2.toString(r0)     // Catch: java.lang.Exception -> L28
            return r2
        L28:
            r2 = move-exception
            java.lang.String r0 = "auth"
            java.lang.String r1 = "GetPublicKeyFromSignEx"
            com.alipay.sdk.app.statistic.a.a(r0, r1, r2)
        L30:
            r2 = 0
            return r2
    }

    public static boolean a(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            java.lang.String r1 = "com.alipay.android.app"
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L12
            if (r3 != 0) goto L10
            return r0
        L10:
            r3 = 1
            return r3
        L12:
            return r0
    }

    public static boolean a(android.content.pm.PackageInfo r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            java.lang.String r3 = r3.versionName     // Catch: java.lang.Throwable -> L1e
            java.lang.String[] r1 = com.alipay.sdk.util.n.e     // Catch: java.lang.Throwable -> L1e
            r1 = r1[r0]     // Catch: java.lang.Throwable -> L1e
            boolean r1 = android.text.TextUtils.equals(r3, r1)     // Catch: java.lang.Throwable -> L1e
            r2 = 1
            if (r1 != 0) goto L1d
            java.lang.String[] r1 = com.alipay.sdk.util.n.e     // Catch: java.lang.Throwable -> L1e
            r1 = r1[r2]     // Catch: java.lang.Throwable -> L1e
            boolean r3 = android.text.TextUtils.equals(r3, r1)     // Catch: java.lang.Throwable -> L1e
            if (r3 == 0) goto L1c
            goto L1d
        L1c:
            return r0
        L1d:
            return r2
        L1e:
            return r0
    }

    public static boolean a(android.webkit.WebView r8, java.lang.String r9, android.app.Activity r10) {
            java.lang.String r8 = "&"
            java.lang.String r0 = "&return_url="
            java.lang.String r1 = "&end_code="
            boolean r2 = android.text.TextUtils.isEmpty(r9)
            r3 = 1
            if (r2 == 0) goto Le
            return r3
        Le:
            r2 = 0
            if (r10 != 0) goto L12
            return r2
        L12:
            java.lang.String r4 = r9.toLowerCase()
            java.lang.String r5 = "alipays://platformapi/startApp?"
            java.lang.String r6 = r5.toLowerCase()
            boolean r4 = r4.startsWith(r6)
            if (r4 != 0) goto L122
            java.lang.String r4 = r9.toLowerCase()
            java.lang.String r6 = "intent://platformapi/startapp?"
            java.lang.String r6 = r6.toLowerCase()
            boolean r4 = r4.startsWith(r6)
            if (r4 == 0) goto L34
            goto L122
        L34:
            java.lang.String r4 = "sdklite://h5quit"
            boolean r4 = android.text.TextUtils.equals(r9, r4)
            if (r4 != 0) goto L117
            java.lang.String r4 = "http://m.alipay.com/?action=h5quit"
            boolean r4 = android.text.TextUtils.equals(r9, r4)
            if (r4 == 0) goto L46
            goto L117
        L46:
            java.lang.String r4 = "sdklite://h5quit?result="
            boolean r5 = r9.startsWith(r4)
            if (r5 == 0) goto L116
            int r5 = r9.indexOf(r4)     // Catch: java.lang.Exception -> L106
            int r5 = r5 + 24
            java.lang.String r5 = r9.substring(r5)     // Catch: java.lang.Exception -> L106
            int r6 = r5.lastIndexOf(r1)     // Catch: java.lang.Exception -> L106
            int r6 = r6 + 10
            java.lang.String r5 = r5.substring(r6)     // Catch: java.lang.Exception -> L106
            int r5 = java.lang.Integer.parseInt(r5)     // Catch: java.lang.Exception -> L106
            com.alipay.sdk.app.k r6 = com.alipay.sdk.app.k.a     // Catch: java.lang.Exception -> L106
            int r6 = r6.a()     // Catch: java.lang.Exception -> L106
            if (r5 == r6) goto L94
            com.alipay.sdk.app.k r6 = com.alipay.sdk.app.k.g     // Catch: java.lang.Exception -> L106
            int r6 = r6.a()     // Catch: java.lang.Exception -> L106
            if (r5 != r6) goto L77
            goto L94
        L77:
            com.alipay.sdk.app.k r8 = com.alipay.sdk.app.k.b     // Catch: java.lang.Exception -> L106
            int r8 = r8.a()     // Catch: java.lang.Exception -> L106
            com.alipay.sdk.app.k r8 = com.alipay.sdk.app.k.b(r8)     // Catch: java.lang.Exception -> L106
            int r9 = r8.a()     // Catch: java.lang.Exception -> L106
            java.lang.String r8 = r8.b()     // Catch: java.lang.Exception -> L106
            java.lang.String r0 = ""
            java.lang.String r8 = com.alipay.sdk.app.j.a(r9, r8, r0)     // Catch: java.lang.Exception -> L106
            com.alipay.sdk.app.j.a(r8)     // Catch: java.lang.Exception -> L106
            goto L10d
        L94:
            boolean r6 = com.alipay.sdk.cons.a.s     // Catch: java.lang.Exception -> L106
            if (r6 == 0) goto Le0
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L106
            r6.<init>()     // Catch: java.lang.Exception -> L106
            java.lang.String r9 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L106
            java.lang.String r7 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L106
            int r4 = r7.indexOf(r4)     // Catch: java.lang.Exception -> L106
            int r4 = r4 + 24
            int r1 = r7.lastIndexOf(r1)     // Catch: java.lang.Exception -> L106
            java.lang.String r1 = r7.substring(r4, r1)     // Catch: java.lang.Exception -> L106
            java.lang.String[] r1 = r1.split(r0)     // Catch: java.lang.Exception -> L106
            r1 = r1[r2]     // Catch: java.lang.Exception -> L106
            int r2 = r9.indexOf(r0)     // Catch: java.lang.Exception -> L106
            int r2 = r2 + 12
            r6.append(r1)     // Catch: java.lang.Exception -> L106
            r6.append(r0)     // Catch: java.lang.Exception -> L106
            int r0 = r9.indexOf(r8, r2)     // Catch: java.lang.Exception -> L106
            java.lang.String r0 = r9.substring(r2, r0)     // Catch: java.lang.Exception -> L106
            r6.append(r0)     // Catch: java.lang.Exception -> L106
            int r8 = r9.indexOf(r8, r2)     // Catch: java.lang.Exception -> L106
            java.lang.String r8 = r9.substring(r8)     // Catch: java.lang.Exception -> L106
            r6.append(r8)     // Catch: java.lang.Exception -> L106
            java.lang.String r8 = r6.toString()     // Catch: java.lang.Exception -> L106
            goto Lf2
        Le0:
            java.lang.String r8 = java.net.URLDecoder.decode(r9)     // Catch: java.lang.Exception -> L106
            int r9 = r8.indexOf(r4)     // Catch: java.lang.Exception -> L106
            int r9 = r9 + 24
            int r0 = r8.lastIndexOf(r1)     // Catch: java.lang.Exception -> L106
            java.lang.String r8 = r8.substring(r9, r0)     // Catch: java.lang.Exception -> L106
        Lf2:
            com.alipay.sdk.app.k r9 = com.alipay.sdk.app.k.b(r5)     // Catch: java.lang.Exception -> L106
            int r0 = r9.a()     // Catch: java.lang.Exception -> L106
            java.lang.String r9 = r9.b()     // Catch: java.lang.Exception -> L106
            java.lang.String r8 = com.alipay.sdk.app.j.a(r0, r9, r8)     // Catch: java.lang.Exception -> L106
            com.alipay.sdk.app.j.a(r8)     // Catch: java.lang.Exception -> L106
            goto L10d
        L106:
            java.lang.String r8 = com.alipay.sdk.app.j.e()
            com.alipay.sdk.app.j.a(r8)
        L10d:
            com.alipay.sdk.util.p r8 = new com.alipay.sdk.util.p
            r8.<init>(r10)
            r10.runOnUiThread(r8)
            return r3
        L116:
            return r2
        L117:
            java.lang.String r8 = com.alipay.sdk.app.j.c()
            com.alipay.sdk.app.j.a(r8)
            r10.finish()
            return r3
        L122:
            java.util.List<com.alipay.sdk.data.a$a> r8 = com.alipay.sdk.app.i.a     // Catch: java.lang.Throwable -> L154
            com.alipay.sdk.util.n$a r8 = a(r10, r8)     // Catch: java.lang.Throwable -> L154
            if (r8 == 0) goto L154
            boolean r0 = r8.b()     // Catch: java.lang.Throwable -> L154
            if (r0 != 0) goto L154
            boolean r8 = r8.a()     // Catch: java.lang.Throwable -> L154
            if (r8 == 0) goto L137
            goto L154
        L137:
            java.lang.String r8 = "intent://platformapi/startapp"
            boolean r8 = r9.startsWith(r8)     // Catch: java.lang.Throwable -> L154
            if (r8 == 0) goto L145
            java.lang.String r8 = "intent://platformapi/startapp\\?"
            java.lang.String r9 = r9.replaceFirst(r8, r5)     // Catch: java.lang.Throwable -> L154
        L145:
            android.content.Intent r8 = new android.content.Intent     // Catch: java.lang.Throwable -> L154
            java.lang.String r0 = "android.intent.action.VIEW"
            android.net.Uri r9 = android.net.Uri.parse(r9)     // Catch: java.lang.Throwable -> L154
            r8.<init>(r0, r9)     // Catch: java.lang.Throwable -> L154
            r10.startActivity(r8)     // Catch: java.lang.Throwable -> L154
        L154:
            return r3
    }

    public static java.lang.String b() {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Android "
            r0.append(r1)
            java.lang.String r1 = android.os.Build.VERSION.RELEASE
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> Ld
            java.lang.String r1 = r1.versionName     // Catch: java.lang.Throwable -> Ld
            goto L17
        Ld:
            r1 = move-exception
            java.lang.String r2 = "biz"
            java.lang.String r0 = "GetPackageInfoEx"
            com.alipay.sdk.app.statistic.a.a(r2, r0, r1)
            java.lang.String r1 = ""
        L17:
            return r1
    }

    private static java.lang.String b(byte[] r6) {
            java.lang.StringBuffer r0 = new java.lang.StringBuffer
            int r1 = r6.length
            int r1 = r1 * 3
            int r1 = r1 + (-1)
            r0.<init>(r1)
            int r1 = r6.length
            int r1 = r1 + (-1)
            r2 = 0
        Le:
            if (r2 > r1) goto L30
            r3 = r6[r2]
            char[] r4 = com.alipay.sdk.util.n.i
            r5 = r3 & 240(0xf0, float:3.36E-43)
            int r5 = r5 >> 4
            char r4 = r4[r5]
            r0.append(r4)
            char[] r4 = com.alipay.sdk.util.n.i
            r3 = r3 & 15
            char r3 = r4[r3]
            r0.append(r3)
            if (r2 >= r1) goto L2d
            r3 = 58
            r0.append(r3)
        L2d:
            int r2 = r2 + 1
            goto Le
        L30:
            java.lang.String r6 = r0.toString()
            return r6
    }

    public static java.util.Map<java.lang.String, java.lang.String> b(java.lang.String r7) {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = "&"
            java.lang.String[] r7 = r7.split(r1)
            int r1 = r7.length
            r2 = 0
            r3 = 0
        Le:
            if (r3 >= r1) goto L31
            r4 = r7[r3]
            r5 = 1
            java.lang.String r6 = "="
            int r5 = r4.indexOf(r6, r5)
            r6 = -1
            if (r6 != r5) goto L1d
            goto L2e
        L1d:
            java.lang.String r6 = r4.substring(r2, r5)
            int r5 = r5 + 1
            java.lang.String r4 = r4.substring(r5)
            java.lang.String r4 = java.net.URLDecoder.decode(r4)
            r0.put(r6, r4)
        L2e:
            int r3 = r3 + 1
            goto Le
        L31:
            return r0
    }

    public static boolean b(android.content.Context r3) {
            r0 = 0
            android.content.pm.PackageManager r3 = r3.getPackageManager()     // Catch: java.lang.Throwable -> L1b
            java.lang.String r1 = a()     // Catch: java.lang.Throwable -> L1b
            r2 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r3 = r3.getPackageInfo(r1, r2)     // Catch: java.lang.Throwable -> L1b
            if (r3 != 0) goto L12
            return r0
        L12:
            int r3 = r3.versionCode     // Catch: java.lang.Throwable -> L1b
            r1 = 99
            if (r3 >= r1) goto L1a
            r3 = 1
            return r3
        L1a:
            return r0
        L1b:
            r3 = move-exception
            com.alipay.sdk.util.c.a(r3)
            return r0
    }

    public static boolean b(android.content.Context r4, java.util.List<com.alipay.sdk.data.a.a> r5) {
            r0 = 0
            java.util.Iterator r5 = r5.iterator()     // Catch: java.lang.Throwable -> L35
        L5:
            boolean r1 = r5.hasNext()     // Catch: java.lang.Throwable -> L35
            if (r1 == 0) goto L34
            java.lang.Object r1 = r5.next()     // Catch: java.lang.Throwable -> L35
            com.alipay.sdk.data.a$a r1 = (com.alipay.sdk.data.a.a) r1     // Catch: java.lang.Throwable -> L35
            if (r1 != 0) goto L14
            goto L5
        L14:
            java.lang.String r1 = r1.a     // Catch: java.lang.Throwable -> L35
            boolean r2 = com.alipay.sdk.app.EnvUtils.isSandBox()     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L26
            java.lang.String r2 = "com.eg.android.AlipayGphone"
            boolean r2 = r2.equals(r1)     // Catch: java.lang.Throwable -> L35
            if (r2 == 0) goto L26
            java.lang.String r1 = "com.eg.android.AlipayGphoneRC"
        L26:
            android.content.pm.PackageManager r2 = r4.getPackageManager()     // Catch: java.lang.Throwable -> L35
            r3 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r1 = r2.getPackageInfo(r1, r3)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L5 java.lang.Throwable -> L35
            if (r1 == 0) goto L5
            r4 = 1
            return r4
        L34:
            return r0
        L35:
            r4 = move-exception
            java.lang.String r5 = "biz"
            java.lang.String r1 = "CheckLaunchAppExistEx"
            com.alipay.sdk.app.statistic.a.a(r5, r1, r4)
            return r0
    }

    private static boolean b(android.content.pm.PackageInfo r3) {
            java.lang.String r0 = ""
            r1 = 0
            if (r3 != 0) goto L17
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "info == null"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            goto L45
        L17:
            android.content.pm.Signature[] r2 = r3.signatures
            if (r2 != 0) goto L2d
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "info.signatures == null"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            goto L45
        L2d:
            android.content.pm.Signature[] r3 = r3.signatures
            int r3 = r3.length
            if (r3 > 0) goto L44
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            r3.append(r0)
            java.lang.String r0 = "info.signatures.length <= 0"
            r3.append(r0)
            java.lang.String r0 = r3.toString()
            goto L45
        L44:
            r1 = 1
        L45:
            if (r1 != 0) goto L4e
            java.lang.String r3 = "auth"
            java.lang.String r2 = "NotIncludeSignatures"
            com.alipay.sdk.app.statistic.a.a(r3, r2, r0)
        L4e:
            return r1
    }

    public static int c(android.content.Context r1, java.lang.String r2) {
            android.content.pm.PackageManager r1 = r1.getPackageManager()     // Catch: java.lang.Throwable -> Ld
            r0 = 128(0x80, float:1.8E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)     // Catch: java.lang.Throwable -> Ld
            int r1 = r1.versionCode     // Catch: java.lang.Throwable -> Ld
            goto L16
        Ld:
            r1 = move-exception
            java.lang.String r2 = "biz"
            java.lang.String r0 = "GetPackageInfoEx"
            com.alipay.sdk.app.statistic.a.a(r2, r0, r1)
            r1 = -1
        L16:
            return r1
    }

    public static java.lang.String c() {
            java.lang.String r0 = d()
            java.lang.String r1 = "-"
            int r1 = r0.indexOf(r1)
            r2 = 0
            r3 = -1
            if (r1 == r3) goto L12
            java.lang.String r0 = r0.substring(r2, r1)
        L12:
            java.lang.String r1 = "\n"
            int r1 = r0.indexOf(r1)
            if (r1 == r3) goto L1e
            java.lang.String r0 = r0.substring(r2, r1)
        L1e:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Linux "
            r1.append(r2)
            r1.append(r0)
            java.lang.String r0 = r1.toString()
            return r0
    }

    public static java.lang.String c(android.content.Context r5) {
            java.lang.String r0 = b()
            java.lang.String r1 = c()
            java.lang.String r2 = d(r5)
            java.lang.String r5 = e(r5)
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = " ("
            r3.append(r4)
            r3.append(r0)
            java.lang.String r0 = ";"
            r3.append(r0)
            r3.append(r1)
            r3.append(r0)
            r3.append(r2)
            r3.append(r0)
            r3.append(r0)
            r3.append(r5)
            java.lang.String r5 = ")"
            r3.append(r5)
            java.lang.String r5 = "(sdk android)"
            r3.append(r5)
            java.lang.String r5 = r3.toString()
            return r5
    }

    public static java.util.Map<java.lang.String, java.lang.String> c(java.lang.String r9) {
            java.util.HashMap r0 = new java.util.HashMap
            r1 = 4
            r0.<init>(r1)
            r1 = 63
            int r1 = r9.indexOf(r1)
            r2 = -1
            if (r1 == r2) goto L4d
            int r3 = r9.length()
            r4 = 1
            int r3 = r3 - r4
            if (r1 >= r3) goto L4d
            int r1 = r1 + r4
            java.lang.String r9 = r9.substring(r1)
            java.lang.String r1 = "&"
            java.lang.String[] r9 = r9.split(r1)
            int r1 = r9.length
            r3 = 0
            r5 = 0
        L25:
            if (r5 >= r1) goto L4d
            r6 = r9[r5]
            r7 = 61
            int r7 = r6.indexOf(r7, r4)
            if (r7 == r2) goto L4a
            int r8 = r6.length()
            int r8 = r8 - r4
            if (r7 < r8) goto L39
            goto L4a
        L39:
            java.lang.String r8 = r6.substring(r3, r7)
            int r7 = r7 + 1
            java.lang.String r6 = r6.substring(r7)
            java.lang.String r6 = e(r6)
            r0.put(r8, r6)
        L4a:
            int r5 = r5 + 1
            goto L25
        L4d:
            return r0
    }

    private static boolean c(android.content.pm.PackageInfo r1) {
            android.content.pm.ApplicationInfo r1 = r1.applicationInfo
            int r1 = r1.flags
            r0 = r1 & 1
            if (r0 != 0) goto Le
            r1 = r1 & 128(0x80, float:1.8E-43)
            if (r1 != 0) goto Le
            r1 = 1
            goto Lf
        Le:
            r1 = 0
        Lf:
            return r1
    }

    private static android.content.pm.PackageInfo d(android.content.Context r1, java.lang.String r2) throws android.content.pm.PackageManager.NameNotFoundException {
            android.content.pm.PackageManager r1 = r1.getPackageManager()
            r0 = 192(0xc0, float:2.69E-43)
            android.content.pm.PackageInfo r1 = r1.getPackageInfo(r2, r0)
            return r1
    }

    public static java.lang.String d() {
            java.lang.String r0 = "\n"
            java.lang.String r1 = "Unavailable"
            java.io.BufferedReader r2 = new java.io.BufferedReader     // Catch: java.io.IOException -> L68
            java.io.FileReader r3 = new java.io.FileReader     // Catch: java.io.IOException -> L68
            java.lang.String r4 = "/proc/version"
            r3.<init>(r4)     // Catch: java.io.IOException -> L68
            r4 = 256(0x100, float:3.59E-43)
            r2.<init>(r3, r4)     // Catch: java.io.IOException -> L68
            java.lang.String r3 = r2.readLine()     // Catch: java.lang.Throwable -> L63
            r2.close()     // Catch: java.io.IOException -> L68
            java.lang.String r2 = "\\w+\\s+\\w+\\s+([^\\s]+)\\s+\\(([^\\s@]+(?:@[^\\s.]+)?)[^)]*\\)\\s+\\((?:[^(]*\\([^)]*\\))?[^)]*\\)\\s+([^\\s]+)\\s+(?:PREEMPT\\s+)?(.+)"
            java.util.regex.Pattern r2 = java.util.regex.Pattern.compile(r2)     // Catch: java.io.IOException -> L68
            java.util.regex.Matcher r2 = r2.matcher(r3)     // Catch: java.io.IOException -> L68
            boolean r3 = r2.matches()     // Catch: java.io.IOException -> L68
            if (r3 != 0) goto L2a
            return r1
        L2a:
            int r3 = r2.groupCount()     // Catch: java.io.IOException -> L68
            r4 = 4
            if (r3 >= r4) goto L32
            return r1
        L32:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.io.IOException -> L68
            r5 = 1
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.<init>(r5)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            r5 = 2
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.append(r5)     // Catch: java.io.IOException -> L68
            java.lang.String r5 = " "
            r3.append(r5)     // Catch: java.io.IOException -> L68
            r5 = 3
            java.lang.String r5 = r2.group(r5)     // Catch: java.io.IOException -> L68
            r3.append(r5)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            java.lang.String r0 = r2.group(r4)     // Catch: java.io.IOException -> L68
            r3.append(r0)     // Catch: java.io.IOException -> L68
            java.lang.String r0 = r3.toString()     // Catch: java.io.IOException -> L68
            return r0
        L63:
            r0 = move-exception
            r2.close()     // Catch: java.io.IOException -> L68
            throw r0     // Catch: java.io.IOException -> L68
        L68:
            return r1
    }

    public static java.lang.String d(android.content.Context r0) {
            android.content.res.Resources r0 = r0.getResources()
            android.content.res.Configuration r0 = r0.getConfiguration()
            java.util.Locale r0 = r0.locale
            java.lang.String r0 = r0.toString()
            return r0
    }

    public static org.json.JSONObject d(java.lang.String r1) {
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L6
            r0.<init>(r1)     // Catch: java.lang.Throwable -> L6
            goto Lb
        L6:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
        Lb:
            return r0
    }

    public static java.lang.String e(android.content.Context r2) {
            android.util.DisplayMetrics r2 = f(r2)
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            int r1 = r2.widthPixels
            r0.append(r1)
            java.lang.String r1 = "*"
            r0.append(r1)
            int r2 = r2.heightPixels
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.String e(java.lang.String r2) {
            java.lang.String r0 = "utf-8"
            java.lang.String r2 = java.net.URLDecoder.decode(r2, r0)     // Catch: java.io.UnsupportedEncodingException -> L7
            return r2
        L7:
            r2 = move-exception
            java.lang.String r0 = "biz"
            java.lang.String r1 = "H5PayDataAnalysisError"
            com.alipay.sdk.app.statistic.a.a(r0, r1, r2)
            java.lang.String r2 = ""
            return r2
    }

    public static android.util.DisplayMetrics f(android.content.Context r2) {
            android.util.DisplayMetrics r0 = new android.util.DisplayMetrics
            r0.<init>()
            android.content.Context r2 = r2.getApplicationContext()
            java.lang.String r1 = "window"
            java.lang.Object r2 = r2.getSystemService(r1)
            android.view.WindowManager r2 = (android.view.WindowManager) r2
            android.view.Display r2 = r2.getDefaultDisplay()
            r2.getMetrics(r0)
            return r0
    }

    public static boolean f(java.lang.String r1) {
            java.lang.String r0 = "^http(s)?://([a-z0-9_\\-]+\\.)*(alipaydev|alipay|taobao)\\.(com|net)(:\\d+)?(/.*)?$"
            java.util.regex.Pattern r0 = java.util.regex.Pattern.compile(r0)
            java.util.regex.Matcher r1 = r0.matcher(r1)
            boolean r1 = r1.matches()
            return r1
    }

    public static java.lang.String g(android.content.Context r2) {
            java.lang.String r2 = com.alipay.sdk.util.m.a(r2)
            java.lang.String r0 = "://"
            int r0 = r2.indexOf(r0)
            r1 = 0
            java.lang.String r2 = r2.substring(r1, r0)
            return r2
    }

    public static java.lang.String h(android.content.Context r0) {
            java.lang.String r0 = "-1;-1"
            return r0
    }

    public static java.lang.String i(android.content.Context r1) {
            java.lang.String r0 = r1.getPackageName()
            java.lang.String r1 = b(r1, r0)
            return r1
    }

    public static int j(android.content.Context r1) {
            java.lang.String r0 = r1.getPackageName()
            int r1 = c(r1, r0)
            return r1
    }
}
