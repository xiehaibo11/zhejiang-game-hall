package com.tkay.expressad.foundation.d;

public final class p implements com.tkay.expressad.e.a, java.io.Serializable {
    public static final java.lang.String a = "amount_max";
    public static final java.lang.String b = "callback_rule";
    public static final java.lang.String c = "virtual_currency";
    public static final java.lang.String d = "amount";
    public static final java.lang.String e = "icon";
    public static final java.lang.String f = "currency_id";
    public static final java.lang.String g = "name";
    private int h;
    private int i;
    private java.lang.String j;
    private int k;
    private java.lang.String l;
    private int m;
    private java.lang.String n;

    public p() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.h = r0
            r0 = 1
            r2.i = r0
            java.lang.String r1 = ""
            r2.j = r1
            r2.k = r0
            r2.l = r1
            r2.m = r0
            java.lang.String r0 = "Virtual Item"
            r2.n = r0
            return
    }

    public static com.tkay.expressad.foundation.d.p a(java.lang.String r6) {
            java.lang.String r0 = "name"
            java.lang.String r1 = "amount"
            java.lang.String r2 = ""
            boolean r3 = android.text.TextUtils.isEmpty(r6)     // Catch: org.json.JSONException -> L5b
            if (r3 != 0) goto L5f
            org.json.JSONObject r3 = new org.json.JSONObject     // Catch: org.json.JSONException -> L5b
            r3.<init>(r6)     // Catch: org.json.JSONException -> L5b
            com.tkay.expressad.foundation.d.p r6 = new com.tkay.expressad.foundation.d.p     // Catch: org.json.JSONException -> L5b
            r6.<init>()     // Catch: org.json.JSONException -> L5b
            java.lang.String r4 = "amount_max"
            r5 = 0
            int r4 = r3.optInt(r4, r5)     // Catch: org.json.JSONException -> L5b
            r6.h = r4     // Catch: org.json.JSONException -> L5b
            java.lang.String r4 = "callback_rule"
            r5 = 1
            int r4 = r3.optInt(r4, r5)     // Catch: org.json.JSONException -> L5b
            r6.i = r4     // Catch: org.json.JSONException -> L5b
            java.lang.String r4 = "virtual_currency"
            java.lang.String r4 = r3.optString(r4, r2)     // Catch: org.json.JSONException -> L5b
            r6.j = r4     // Catch: org.json.JSONException -> L5b
            java.lang.String r4 = "icon"
            java.lang.String r2 = r3.optString(r4, r2)     // Catch: org.json.JSONException -> L5b
            r6.l = r2     // Catch: org.json.JSONException -> L5b
            java.lang.String r2 = "currency_id"
            int r2 = r3.optInt(r2, r5)     // Catch: org.json.JSONException -> L5b
            r6.m = r2     // Catch: org.json.JSONException -> L5b
            boolean r2 = r3.has(r1)     // Catch: org.json.JSONException -> L5b
            if (r2 == 0) goto L4c
            int r1 = r3.optInt(r1, r5)     // Catch: org.json.JSONException -> L5b
            r6.k = r1     // Catch: org.json.JSONException -> L5b
        L4c:
            boolean r1 = r3.has(r0)     // Catch: org.json.JSONException -> L5b
            if (r1 == 0) goto L5a
            java.lang.String r1 = "Virtual Item"
            java.lang.String r0 = r3.optString(r0, r1)     // Catch: org.json.JSONException -> L5b
            r6.n = r0     // Catch: org.json.JSONException -> L5b
        L5a:
            return r6
        L5b:
            r6 = move-exception
            r6.printStackTrace()
        L5f:
            r6 = 0
            return r6
    }

    private static com.tkay.expressad.foundation.d.p a(org.json.JSONObject r4) {
            com.tkay.expressad.foundation.d.p r0 = new com.tkay.expressad.foundation.d.p
            r0.<init>()
            java.lang.String r1 = "amount_max"
            r2 = 0
            int r1 = r4.optInt(r1, r2)
            r0.h = r1
            r1 = 1
            java.lang.String r2 = "callback_rule"
            int r2 = r4.optInt(r2, r1)
            r0.i = r2
            java.lang.String r2 = ""
            java.lang.String r3 = "virtual_currency"
            java.lang.String r3 = r4.optString(r3, r2)
            r0.j = r3
            java.lang.String r3 = "icon"
            java.lang.String r2 = r4.optString(r3, r2)
            r0.l = r2
            java.lang.String r2 = "currency_id"
            int r2 = r4.optInt(r2, r1)
            r0.m = r2
            java.lang.String r2 = "amount"
            boolean r3 = r4.has(r2)
            if (r3 == 0) goto L3f
            int r1 = r4.optInt(r2, r1)
            r0.k = r1
        L3f:
            java.lang.String r1 = "name"
            boolean r2 = r4.has(r1)
            if (r2 == 0) goto L4f
            java.lang.String r2 = "Virtual Item"
            java.lang.String r4 = r4.optString(r1, r2)
            r0.n = r4
        L4f:
            return r0
    }

    private void a(int r1) {
            r0 = this;
            r0.h = r1
            return
    }

    private void b(int r1) {
            r0 = this;
            r0.i = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private void c(int r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private int d() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    private void d(int r1) {
            r0 = this;
            r0.m = r1
            return
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private int e() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    private java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    private java.lang.String g() {
            r1 = this;
            java.lang.String r0 = r1.l
            return r0
    }

    private int h() {
            r1 = this;
            int r0 = r1.m
            return r0
    }

    public final int a() {
            r1 = this;
            int r0 = r1.k
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.n
            return r0
    }

    public final org.json.JSONObject c() {
            r3 = this;
            org.json.JSONObject r0 = new org.json.JSONObject
            r0.<init>()
            java.lang.String r1 = "amount_max"
            int r2 = r3.h     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "callback_rule"
            int r2 = r3.i     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "virtual_currency"
            java.lang.String r2 = r3.j     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "amount"
            int r2 = r3.k     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "icon"
            java.lang.String r2 = r3.l     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "currency_id"
            int r2 = r3.m     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            java.lang.String r1 = "name"
            java.lang.String r2 = r3.n     // Catch: org.json.JSONException -> L37
            r0.put(r1, r2)     // Catch: org.json.JSONException -> L37
            goto L3b
        L37:
            r1 = move-exception
            r1.printStackTrace()
        L3b:
            return r0
    }
}
