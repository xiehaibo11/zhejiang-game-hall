package com.alipay.sdk.authjs;

public class d {
    private com.alipay.sdk.authjs.c a;
    private android.content.Context b;

    public d(android.content.Context r1, com.alipay.sdk.authjs.c r2) {
            r0 = this;
            r0.<init>()
            r0.b = r1
            r0.a = r2
            return
    }

    static com.alipay.sdk.authjs.a.a a(com.alipay.sdk.authjs.d r0, com.alipay.sdk.authjs.a r1) {
            com.alipay.sdk.authjs.a$a r0 = r0.b(r1)
            return r0
    }

    static com.alipay.sdk.authjs.c a(com.alipay.sdk.authjs.d r0) {
            com.alipay.sdk.authjs.c r0 = r0.a
            return r0
    }

    static void a(com.alipay.sdk.authjs.d r0, java.lang.String r1, com.alipay.sdk.authjs.a.a r2, boolean r3) throws org.json.JSONException {
            r0.a(r1, r2, r3)
            return
    }

    private static void a(java.lang.Runnable r2) {
            if (r2 != 0) goto L3
            return
        L3:
            android.os.Looper r0 = android.os.Looper.getMainLooper()
            android.os.Looper r1 = android.os.Looper.myLooper()
            if (r0 != r1) goto Lf
            r0 = 1
            goto L10
        Lf:
            r0 = 0
        L10:
            if (r0 == 0) goto L16
            r2.run()
            goto L22
        L16:
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            r0.post(r2)
        L22:
            return
    }

    private void a(java.lang.String r3, com.alipay.sdk.authjs.a.a r4, boolean r5) throws org.json.JSONException {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto L7
            return
        L7:
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            int r4 = r4.ordinal()
            java.lang.String r1 = "error"
            r0.put(r1, r4)
            com.alipay.sdk.authjs.a r4 = new com.alipay.sdk.authjs.a
            java.lang.String r1 = "callback"
            r4.<init>(r1)
            r4.a(r0)
            r4.a(r3)
            if (r5 == 0) goto L2a
            com.alipay.sdk.authjs.c r3 = r2.a
            r3.a(r4)
            goto L2d
        L2a:
            r2.a(r4)
        L2d:
            return
    }

    private com.alipay.sdk.authjs.a.a b(com.alipay.sdk.authjs.a r3) {
            r2 = this;
            if (r3 == 0) goto L11
            java.lang.String r0 = r3.d()
            java.lang.String r1 = "toast"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L11
            r2.c(r3)
        L11:
            com.alipay.sdk.authjs.a$a r3 = com.alipay.sdk.authjs.a.a.a
            return r3
    }

    private void c(com.alipay.sdk.authjs.a r6) {
            r5 = this;
            org.json.JSONObject r0 = r6.f()
            java.lang.String r1 = "content"
            java.lang.String r1 = r0.optString(r1)
            java.lang.String r2 = "duration"
            int r0 = r0.optInt(r2)
            r2 = 2500(0x9c4, float:3.503E-42)
            if (r0 >= r2) goto L16
            r0 = 0
            goto L17
        L16:
            r0 = 1
        L17:
            android.content.Context r2 = r5.b
            android.widget.Toast r1 = android.widget.Toast.makeText(r2, r1, r0)
            r1.show()
            java.util.Timer r1 = new java.util.Timer
            r1.<init>()
            com.alipay.sdk.authjs.f r2 = new com.alipay.sdk.authjs.f
            r2.<init>(r5, r6)
            long r3 = (long) r0
            r1.schedule(r2, r3)
            return
    }

    public void a(com.alipay.sdk.authjs.a r3) throws org.json.JSONException {
            r2 = this;
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r0 = r3.d()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L18
            java.lang.String r3 = r3.b()
            com.alipay.sdk.authjs.a$a r0 = com.alipay.sdk.authjs.a.a.c
            r1 = 1
            r2.a(r3, r0, r1)
            return
        L18:
            com.alipay.sdk.authjs.e r0 = new com.alipay.sdk.authjs.e
            r0.<init>(r2, r3)
            a(r0)
            return
    }

    public void a(java.lang.String r6) {
            r5 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Exception -> L45
            r1.<init>(r6)     // Catch: java.lang.Exception -> L45
            java.lang.String r6 = "clientId"
            java.lang.String r6 = r1.getString(r6)     // Catch: java.lang.Exception -> L45
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Exception -> L43
            if (r2 == 0) goto L13
            return
        L13:
            java.lang.String r2 = "param"
            org.json.JSONObject r2 = r1.getJSONObject(r2)     // Catch: java.lang.Exception -> L43
            boolean r3 = r2 instanceof org.json.JSONObject     // Catch: java.lang.Exception -> L43
            if (r3 == 0) goto L20
            r0 = r2
            org.json.JSONObject r0 = (org.json.JSONObject) r0     // Catch: java.lang.Exception -> L43
        L20:
            java.lang.String r2 = "func"
            java.lang.String r2 = r1.getString(r2)     // Catch: java.lang.Exception -> L43
            java.lang.String r3 = "bundleName"
            java.lang.String r1 = r1.getString(r3)     // Catch: java.lang.Exception -> L43
            com.alipay.sdk.authjs.a r3 = new com.alipay.sdk.authjs.a     // Catch: java.lang.Exception -> L43
            java.lang.String r4 = "call"
            r3.<init>(r4)     // Catch: java.lang.Exception -> L43
            r3.b(r1)     // Catch: java.lang.Exception -> L43
            r3.c(r2)     // Catch: java.lang.Exception -> L43
            r3.a(r0)     // Catch: java.lang.Exception -> L43
            r3.a(r6)     // Catch: java.lang.Exception -> L43
            r5.a(r3)     // Catch: java.lang.Exception -> L43
            return
        L43:
            goto L46
        L45:
            r6 = r0
        L46:
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto L52
            com.alipay.sdk.authjs.a$a r0 = com.alipay.sdk.authjs.a.a.d     // Catch: org.json.JSONException -> L52
            r1 = 1
            r5.a(r6, r0, r1)     // Catch: org.json.JSONException -> L52
        L52:
            return
    }
}
