package com.tkay.expressad.foundation.d;

public final class a implements com.tkay.expressad.e.a, java.io.Serializable {
    private static final java.lang.String a = "https://img.toponad.com/sdk/app-permissions.html?key=";
    private static java.lang.String b = "app_name";
    private static java.lang.String c = "perm_desc";
    private static java.lang.String d = "ori_perm_desc";
    private static java.lang.String e = "ori_perm_all";
    private static java.lang.String f = "pri_url";
    private static java.lang.String g = "upd_time";
    private static java.lang.String h = "app_ver";
    private static java.lang.String i = "dev_name";
    private java.lang.String j;
    private java.lang.String k;
    private java.util.ArrayList<java.lang.String> l;
    private java.util.ArrayList<java.lang.String> m;
    private java.util.ArrayList<java.lang.String> n;
    private java.lang.String o;
    private java.lang.String p;
    private java.lang.String q;
    private java.lang.String r;
    private java.lang.String s;

    static {
            return
    }

    public a() {
            r2 = this;
            r2.<init>()
            java.util.ArrayList r0 = new java.util.ArrayList
            r1 = 3
            r0.<init>(r1)
            r2.l = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            r2.m = r0
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>(r1)
            r2.n = r0
            return
    }

    private static com.tkay.expressad.foundation.d.a a(com.tkay.expressad.foundation.d.a r0) {
            if (r0 != 0) goto L7
            com.tkay.expressad.foundation.d.a r0 = new com.tkay.expressad.foundation.d.a
            r0.<init>()
        L7:
            return r0
    }

    public static com.tkay.expressad.foundation.d.a a(java.lang.String r1) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)     // Catch: org.json.JSONException -> L10
            if (r0 != 0) goto L14
            org.json.JSONObject r0 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            r0.<init>(r1)     // Catch: org.json.JSONException -> L10
            com.tkay.expressad.foundation.d.a r1 = a(r0)     // Catch: org.json.JSONException -> L10
            return r1
        L10:
            r1 = move-exception
            r1.printStackTrace()
        L14:
            r1 = 0
            return r1
    }

    private static com.tkay.expressad.foundation.d.a a(org.json.JSONObject r7) {
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.b
            boolean r0 = r7.has(r0)
            r1 = 0
            if (r0 == 0) goto L15
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.b
            java.lang.String r0 = r7.optString(r0)
            r1.k = r0
        L15:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.c
            boolean r0 = r7.has(r0)
            r2 = 0
            if (r0 == 0) goto L7d
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.c
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            if (r0 == 0) goto L7d
            java.util.ArrayList r3 = a(r0)
            r1.l = r3
            java.util.ArrayList<java.lang.String> r3 = r1.n
            java.lang.String r4 = "https://img.toponad.com/sdk/app-permissions.html?key="
            r5 = r2
        L35:
            int r6 = r0.length()     // Catch: org.json.JSONException -> L77
            if (r5 >= r6) goto L74
            java.lang.Object r6 = r0.get(r5)     // Catch: org.json.JSONException -> L77
            boolean r6 = r6 instanceof java.lang.String     // Catch: org.json.JSONException -> L77
            if (r6 == 0) goto L71
            if (r5 != 0) goto L59
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L77
            r6.<init>()     // Catch: org.json.JSONException -> L77
            r6.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = r0.optString(r5)     // Catch: org.json.JSONException -> L77
            r6.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = r6.toString()     // Catch: org.json.JSONException -> L77
            goto L71
        L59:
            java.lang.StringBuilder r6 = new java.lang.StringBuilder     // Catch: org.json.JSONException -> L77
            r6.<init>()     // Catch: org.json.JSONException -> L77
            r6.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = ","
            r6.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = r0.optString(r5)     // Catch: org.json.JSONException -> L77
            r6.append(r4)     // Catch: org.json.JSONException -> L77
            java.lang.String r4 = r6.toString()     // Catch: org.json.JSONException -> L77
        L71:
            int r5 = r5 + 1
            goto L35
        L74:
            r1.o = r4     // Catch: org.json.JSONException -> L77
            goto L7b
        L77:
            r0 = move-exception
            r0.printStackTrace()
        L7b:
            r1.n = r3
        L7d:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.d
            boolean r0 = r7.has(r0)
            if (r0 == 0) goto Lb5
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.d
            org.json.JSONArray r0 = r7.optJSONArray(r0)
            if (r0 == 0) goto Lb5
            java.util.ArrayList r3 = a(r0)
            r1.m = r3
            java.util.ArrayList<java.lang.String> r3 = r1.n
        L99:
            int r4 = r0.length()     // Catch: org.json.JSONException -> Laf
            if (r2 >= r4) goto Lb3
            java.lang.Object r4 = r0.get(r2)     // Catch: org.json.JSONException -> Laf
            boolean r5 = r4 instanceof java.lang.String     // Catch: org.json.JSONException -> Laf
            if (r5 == 0) goto Lac
            java.lang.String r4 = (java.lang.String) r4     // Catch: org.json.JSONException -> Laf
            r3.add(r4)     // Catch: org.json.JSONException -> Laf
        Lac:
            int r2 = r2 + 1
            goto L99
        Laf:
            r0 = move-exception
            r0.printStackTrace()
        Lb3:
            r1.n = r3
        Lb5:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.f
            boolean r0 = r7.has(r0)
            if (r0 == 0) goto Lc9
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.f
            java.lang.String r0 = r7.optString(r0)
            r1.p = r0
        Lc9:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.g
            boolean r0 = r7.has(r0)
            if (r0 == 0) goto Ldd
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.g
            java.lang.String r0 = r7.optString(r0)
            r1.q = r0
        Ldd:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.h
            boolean r0 = r7.has(r0)
            if (r0 == 0) goto Lf1
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.h
            java.lang.String r0 = r7.optString(r0)
            r1.r = r0
        Lf1:
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.i
            boolean r0 = r7.has(r0)
            if (r0 == 0) goto L105
            com.tkay.expressad.foundation.d.a r1 = a(r1)
            java.lang.String r0 = com.tkay.expressad.foundation.d.a.i
            java.lang.String r0 = r7.optString(r0)
            r1.s = r0
        L105:
            if (r1 == 0) goto L10d
            java.lang.String r7 = r7.toString()
            r1.j = r7
        L10d:
            return r1
    }

    private static java.util.ArrayList<java.lang.String> a(org.json.JSONArray r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.length()
            if (r0 <= 0) goto L1f
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r3.length()
            if (r1 >= r2) goto L1e
            java.lang.String r2 = r3.optString(r1)
            r0.add(r2)
            int r1 = r1 + 1
            goto Le
        L1e:
            return r0
        L1f:
            r3 = 0
            return r3
    }

    private void a(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void b(java.lang.String r1) {
            r0 = this;
            r0.j = r1
            return
    }

    private void b(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.m = r1
            return
    }

    private void c(java.lang.String r1) {
            r0 = this;
            r0.o = r1
            return
    }

    private void c(java.util.ArrayList<java.lang.String> r1) {
            r0 = this;
            r0.n = r1
            return
    }

    private static org.json.JSONArray d(java.util.ArrayList<java.lang.String> r3) {
            if (r3 == 0) goto L1f
            int r0 = r3.size()
            if (r0 <= 0) goto L1f
            org.json.JSONArray r0 = new org.json.JSONArray
            r0.<init>()
            r1 = 0
        Le:
            int r2 = r3.size()
            if (r1 >= r2) goto L1e
            java.lang.Object r2 = r3.get(r1)
            r0.put(r2)
            int r1 = r1 + 1
            goto Le
        L1e:
            return r0
        L1f:
            r3 = 0
            return r3
    }

    private void d(java.lang.String r1) {
            r0 = this;
            r0.k = r1
            return
    }

    private void e(java.lang.String r1) {
            r0 = this;
            r0.p = r1
            return
    }

    private void f(java.lang.String r1) {
            r0 = this;
            r0.q = r1
            return
    }

    private void g(java.lang.String r1) {
            r0 = this;
            r0.r = r1
            return
    }

    private java.lang.String h() {
            r1 = this;
            java.lang.String r0 = r1.j
            return r0
    }

    private void h(java.lang.String r1) {
            r0 = this;
            r0.s = r1
            return
    }

    private java.util.ArrayList<java.lang.String> i() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.l
            return r0
    }

    private java.util.ArrayList<java.lang.String> j() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.m
            return r0
    }

    private java.util.ArrayList<java.lang.String> k() {
            r1 = this;
            java.util.ArrayList<java.lang.String> r0 = r1.n
            return r0
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.o
            return r0
    }

    public final java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.k
            return r0
    }

    public final java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.p
            return r0
    }

    public final java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.q
            return r0
    }

    public final java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.r
            return r0
    }

    public final java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.s
            return r0
    }

    public final org.json.JSONObject g() {
            r3 = this;
            r0 = 0
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: org.json.JSONException -> L10
            java.lang.String r2 = r3.j     // Catch: org.json.JSONException -> L10
            r1.<init>(r2)     // Catch: org.json.JSONException -> L10
            int r2 = r1.length()     // Catch: org.json.JSONException -> L10
            if (r2 <= 0) goto Lf
            return r1
        Lf:
            return r0
        L10:
            r1 = move-exception
            r1.printStackTrace()
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "ApkDisplayInfo{appName='"
            r0.<init>(r1)
            java.lang.String r1 = r3.k
            r0.append(r1)
            r1 = 39
            r0.append(r1)
            java.lang.String r2 = ", permDescJArray="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.l
            r0.append(r2)
            java.lang.String r2 = ", permDescOriJArray="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.m
            r0.append(r2)
            java.lang.String r2 = ", permDescAll="
            r0.append(r2)
            java.util.ArrayList<java.lang.String> r2 = r3.n
            r0.append(r2)
            java.lang.String r2 = ", priUrl='"
            r0.append(r2)
            java.lang.String r2 = r3.p
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", updateTime='"
            r0.append(r2)
            java.lang.String r2 = r3.q
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", appVersion='"
            r0.append(r2)
            java.lang.String r2 = r3.r
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = ", devName='"
            r0.append(r2)
            java.lang.String r2 = r3.s
            r0.append(r2)
            r0.append(r1)
            r1 = 125(0x7d, float:1.75E-43)
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
