package com.yxcorp.kuaishou.addfp.android.b;

class c {
    boolean a;
    int b;
    boolean c;
    java.lang.String d;

    c(java.lang.String r5) {
            r4 = this;
            r4.<init>()
            r0 = 1
            r4.a = r0
            boolean r1 = android.text.TextUtils.isEmpty(r5)
            r2 = 0
            if (r1 == 0) goto Lf
            r4.a = r2
        Lf:
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L30
            r1.<init>(r5)     // Catch: org.json.JSONException -> L30
            java.lang.String r5 = "errorCode"
            r3 = 2
            int r5 = r1.optInt(r5, r3)     // Catch: org.json.JSONException -> L30
            r4.b = r5     // Catch: org.json.JSONException -> L30
            java.lang.String r5 = "userSet"
            boolean r5 = r1.optBoolean(r5, r0)     // Catch: org.json.JSONException -> L30
            r4.c = r5     // Catch: org.json.JSONException -> L30
            java.lang.String r5 = "value"
            java.lang.String r0 = "KWE_OTHER"
            java.lang.String r5 = r1.optString(r5, r0)     // Catch: org.json.JSONException -> L30
            r4.d = r5     // Catch: org.json.JSONException -> L30
            return
        L30:
            r5 = move-exception
            r4.a = r2
            r5.printStackTrace()
            return
    }

    public java.lang.String a(boolean r3) {
            r2 = this;
            boolean r0 = r2.a
            java.lang.String r1 = "KWE_OTHER"
            if (r0 != 0) goto L7
            return r1
        L7:
            boolean r0 = r2.c
            if (r3 == r0) goto Le
            java.lang.String r3 = "KWE_NPN"
            return r3
        Le:
            int r3 = r2.b
            if (r3 == 0) goto L28
            r0 = 1
            if (r3 == r0) goto L25
            r0 = 2
            if (r3 == r0) goto L22
            r0 = 3
            if (r3 == r0) goto L33
            r0 = 4
            if (r3 == r0) goto L1f
            return r1
        L1f:
            java.lang.String r3 = "KWE_NS"
            return r3
        L22:
            java.lang.String r3 = "KWE_PE"
            return r3
        L25:
            java.lang.String r3 = "KWE_PN"
            return r3
        L28:
            java.lang.String r3 = r2.d
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 != 0) goto L33
            java.lang.String r3 = r2.d
            return r3
        L33:
            java.lang.String r3 = "KWE_N"
            return r3
    }
}
