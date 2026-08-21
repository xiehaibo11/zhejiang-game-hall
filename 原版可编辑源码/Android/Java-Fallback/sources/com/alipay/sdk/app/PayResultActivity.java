package com.alipay.sdk.app;

public final class PayResultActivity extends android.app.Activity {
    public static final java.lang.String b = "{\"isLogin\":\"false\"}";
    public static final java.util.HashMap<java.lang.String, java.lang.Object> c = null;
    public static final java.lang.String d = "hk.alipay.wallet";
    public static final java.lang.String e = "phonecashier.pay.hash";
    public static final java.lang.String f = "orderSuffix";
    public static final java.lang.String g = "externalPkgName";
    public static final java.lang.String h = "phonecashier.pay.result";
    public static final java.lang.String i = "phonecashier.pay.resultOrderHash";
    public com.alipay.sdk.m.s.a a;

    public static class a implements java.lang.Runnable {
        public final android.app.Activity a;

        public a(android.app.Activity r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public void run() {
                r1 = this;
                android.app.Activity r0 = r1.a
                r0.finish()
                return
        }
    }

    public static final class b {
        public static volatile java.lang.String a;
        public static volatile java.lang.String b;

        public b() {
                r0 = this;
                r0.<init>()
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.alipay.sdk.app.PayResultActivity.c = r0
            return
    }

    public PayResultActivity() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public static void a(android.app.Activity r2, int r3) {
            android.os.Handler r0 = new android.os.Handler
            r0.<init>()
            com.alipay.sdk.app.PayResultActivity$a r1 = new com.alipay.sdk.app.PayResultActivity$a
            r1.<init>(r2)
            long r2 = (long) r3
            r0.postDelayed(r1, r2)
            return
    }

    public static void a(android.app.Activity r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            java.lang.String r0 = "UTF-8"
            boolean r1 = android.text.TextUtils.isEmpty(r6)
            if (r1 != 0) goto L66
            boolean r1 = android.text.TextUtils.isEmpty(r7)
            if (r1 != 0) goto L66
            android.content.Intent r1 = new android.content.Intent
            r1.<init>()
            java.lang.String r2 = "hk.alipay.wallet"
            r1.setPackage(r2)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.io.UnsupportedEncodingException -> L59
            r2.<init>()     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r3 = "alipayhk://platformapi/startApp?appId=20000125&schemePaySession="
            r2.append(r3)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = java.net.URLEncoder.encode(r5, r0)     // Catch: java.io.UnsupportedEncodingException -> L59
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = "&orderSuffix="
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = java.net.URLEncoder.encode(r6, r0)     // Catch: java.io.UnsupportedEncodingException -> L59
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = "&packageName="
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.io.UnsupportedEncodingException -> L59
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = "&externalPkgName="
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = java.net.URLEncoder.encode(r7, r0)     // Catch: java.io.UnsupportedEncodingException -> L59
            r2.append(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            java.lang.String r5 = r2.toString()     // Catch: java.io.UnsupportedEncodingException -> L59
            android.net.Uri r5 = android.net.Uri.parse(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            r1.setData(r5)     // Catch: java.io.UnsupportedEncodingException -> L59
            goto L5d
        L59:
            r5 = move-exception
            com.alipay.sdk.m.u.e.a(r5)
        L5d:
            if (r4 == 0) goto L66
            r4.startActivity(r1)     // Catch: java.lang.Throwable -> L63
            goto L66
        L63:
            r4.finish()
        L66:
            return
    }

    public static void a(java.lang.String r1) {
            java.lang.String r0 = com.alipay.sdk.m.j.b.a()
            com.alipay.sdk.app.PayResultActivity.b.b = r0
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.alipay.sdk.app.PayResultActivity.c
            a(r0, r1)
            return
    }

    public static void a(java.lang.String r0, java.lang.String r1) {
            com.alipay.sdk.app.PayResultActivity.b.b = r0
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = com.alipay.sdk.app.PayResultActivity.c
            a(r0, r1)
            return
    }

    public static boolean a(java.util.HashMap<java.lang.String, java.lang.Object> r1, java.lang.String r2) {
            r0 = 0
            if (r1 == 0) goto L17
            if (r2 != 0) goto L6
            goto L17
        L6:
            java.lang.Object r1 = r1.get(r2)
            if (r1 != 0) goto Ld
            return r0
        Ld:
            monitor-enter(r1)
            r1.notifyAll()     // Catch: java.lang.Throwable -> L14
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            r1 = 1
            return r1
        L14:
            r2 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L14
            throw r2
        L17:
            return r0
    }

    @Override
    public void onCreate(android.os.Bundle r7) {
            r6 = this;
            java.lang.String r0 = "orderSuffix"
            super.onCreate(r7)
            android.content.Intent r7 = r6.getIntent()     // Catch: java.lang.Throwable -> La6
            java.lang.String r1 = r7.getStringExtra(r0)     // Catch: java.lang.Throwable -> La6
            boolean r1 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> La6
            r1 = r1 ^ 1
            r2 = 300(0x12c, float:4.2E-43)
            if (r1 == 0) goto L3d
            java.lang.String r1 = "phonecashier.pay.hash"
            java.lang.String r1 = r7.getStringExtra(r1)     // Catch: java.lang.Throwable -> La6
            com.alipay.sdk.app.PayResultActivity.b.a = r1     // Catch: java.lang.Throwable -> La6
            java.lang.String r0 = r7.getStringExtra(r0)     // Catch: java.lang.Throwable -> La6
            java.lang.String r1 = "externalPkgName"
            java.lang.String r1 = r7.getStringExtra(r1)     // Catch: java.lang.Throwable -> La6
            com.alipay.sdk.m.s.a r7 = com.alipay.sdk.m.s.a.a.a(r7)     // Catch: java.lang.Throwable -> La6
            r6.a = r7     // Catch: java.lang.Throwable -> La6
            if (r7 != 0) goto L34
            r6.finish()     // Catch: java.lang.Throwable -> La6
        L34:
            java.lang.String r7 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            a(r6, r7, r0, r1)     // Catch: java.lang.Throwable -> La6
            a(r6, r2)     // Catch: java.lang.Throwable -> La6
            return
        L3d:
            com.alipay.sdk.m.s.a r0 = r6.a     // Catch: java.lang.Throwable -> La6
            if (r0 != 0) goto L44
            r6.finish()     // Catch: java.lang.Throwable -> La6
        L44:
            java.lang.String r0 = "phonecashier.pay.result"
            java.lang.String r0 = r7.getStringExtra(r0)     // Catch: java.lang.Throwable -> La6
            java.lang.String r1 = "phonecashier.pay.resultOrderHash"
            r3 = 0
            int r7 = r7.getIntExtra(r1, r3)     // Catch: java.lang.Throwable -> La6
            if (r7 == 0) goto L79
            java.lang.String r1 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            java.lang.String r3 = java.lang.String.valueOf(r7)     // Catch: java.lang.Throwable -> La6
            boolean r1 = android.text.TextUtils.equals(r1, r3)     // Catch: java.lang.Throwable -> La6
            if (r1 != 0) goto L60
            goto L79
        L60:
            boolean r7 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> La6
            if (r7 != 0) goto L6c
            java.lang.String r7 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            a(r0, r7)     // Catch: java.lang.Throwable -> La6
            goto L71
        L6c:
            java.lang.String r7 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            a(r7)     // Catch: java.lang.Throwable -> La6
        L71:
            java.lang.String r7 = ""
            com.alipay.sdk.app.PayResultActivity.b.a = r7     // Catch: java.lang.Throwable -> La6
            a(r6, r2)     // Catch: java.lang.Throwable -> La6
            return
        L79:
            com.alipay.sdk.m.s.a r0 = r6.a     // Catch: java.lang.Throwable -> La6
            java.lang.String r1 = "biz"
            java.lang.String r3 = "SchemePayWrongHashEx"
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> La6
            r4.<init>()     // Catch: java.lang.Throwable -> La6
            java.lang.String r5 = "Expected "
            r4.append(r5)     // Catch: java.lang.Throwable -> La6
            java.lang.String r5 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            r4.append(r5)     // Catch: java.lang.Throwable -> La6
            java.lang.String r5 = ", got "
            r4.append(r5)     // Catch: java.lang.Throwable -> La6
            r4.append(r7)     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = r4.toString()     // Catch: java.lang.Throwable -> La6
            com.alipay.sdk.m.k.a.b(r0, r1, r3, r7)     // Catch: java.lang.Throwable -> La6
            java.lang.String r7 = com.alipay.sdk.app.PayResultActivity.b.a     // Catch: java.lang.Throwable -> La6
            a(r7)     // Catch: java.lang.Throwable -> La6
            a(r6, r2)     // Catch: java.lang.Throwable -> La6
            return
        La6:
            r6.finish()
            return
    }
}
