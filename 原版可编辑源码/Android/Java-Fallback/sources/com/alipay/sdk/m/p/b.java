package com.alipay.sdk.m.p;

public final class b {
    public final java.lang.String a;
    public final java.lang.String b;

    public b(java.lang.String r1, java.lang.String r2) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public org.json.JSONObject c() {
            r3 = this;
            java.lang.String r0 = r3.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 0
            if (r0 == 0) goto La
            return r1
        La:
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: java.lang.Exception -> L13
            java.lang.String r2 = r3.b     // Catch: java.lang.Exception -> L13
            r0.<init>(r2)     // Catch: java.lang.Exception -> L13
            r1 = r0
            goto L17
        L13:
            r0 = move-exception
            com.alipay.sdk.m.u.e.a(r0)
        L17:
            return r1
    }

    public java.lang.String toString() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = r3.a
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = r3.b
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "<Letter envelop=%s body=%s>"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }
}
