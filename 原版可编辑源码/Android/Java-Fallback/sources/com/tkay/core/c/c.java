package com.tkay.core.c;

public final class c {
    private static java.lang.String m = "ofm_logger";
    private static java.lang.String n = "ofm_tk_sw";
    private static java.lang.String o = "ofm_da_sw";
    private static java.lang.String p = "tk_address";
    private static java.lang.String q = "tk_max_amount";
    private static java.lang.String r = "tk_interval";
    private static java.lang.String s = "da_rt_keys_ft";
    private static java.lang.String t = "tk_no_t_ft";
    private static java.lang.String u = "da_not_keys_ft";
    private static java.lang.String v = "ofm_system";
    private static java.lang.String w = "ofm_tid";
    private static java.lang.String x = "ofm_firm_info";
    private static java.lang.String y = "ofm_st_vt";
    java.lang.String a;
    public java.util.Map<java.lang.String, java.lang.Object> b;
    private boolean c;
    private int d;
    private int e;
    private long f;
    private int g;
    private int h;
    private java.lang.String i;
    private int j;
    private long k;
    private java.util.Map<java.lang.String, java.lang.String> l;

    static {
            return
    }

    public c() {
            r1 = this;
            r1.<init>()
            int r0 = r1.hashCode()
            java.lang.String r0 = java.lang.String.valueOf(r0)
            r1.a = r0
            return
    }

    public static com.tkay.core.c.c a(java.lang.String r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            r1 = 0
            if (r0 == 0) goto L8
            return r1
        L8:
            com.tkay.core.c.c r0 = new com.tkay.core.c.c     // Catch: java.lang.Throwable -> L91
            r0.<init>()     // Catch: java.lang.Throwable -> L91
            org.json.JSONObject r2 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L91
            r2.<init>(r5)     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = com.tkay.core.c.c.v     // Catch: java.lang.Throwable -> L91
            int r5 = r2.optInt(r5)     // Catch: java.lang.Throwable -> L91
            r0.d = r5     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = com.tkay.core.c.c.w     // Catch: java.lang.Throwable -> L91
            int r5 = r2.optInt(r5)     // Catch: java.lang.Throwable -> L91
            r0.e = r5     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = com.tkay.core.c.c.y     // Catch: java.lang.Throwable -> L91
            long r3 = r2.optLong(r5)     // Catch: java.lang.Throwable -> L91
            r0.f = r3     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = com.tkay.core.c.c.x     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = r2.optString(r5)     // Catch: java.lang.Throwable -> L91
            java.util.Map r5 = com.tkay.core.common.l.h.c(r5)     // Catch: java.lang.Throwable -> L91
            r0.b = r5     // Catch: java.lang.Throwable -> L91
            java.lang.String r5 = com.tkay.core.c.c.m     // Catch: java.lang.Throwable -> L91
            org.json.JSONObject r5 = r2.optJSONObject(r5)     // Catch: java.lang.Throwable -> L91
            if (r5 == 0) goto L90
            java.lang.String r2 = com.tkay.core.c.c.n     // Catch: java.lang.Throwable -> L91
            int r2 = r5.optInt(r2)     // Catch: java.lang.Throwable -> L91
            r0.g = r2     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = com.tkay.core.c.c.o     // Catch: java.lang.Throwable -> L91
            int r2 = r5.optInt(r2)     // Catch: java.lang.Throwable -> L91
            r0.h = r2     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = com.tkay.core.c.c.p     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = r5.optString(r2)     // Catch: java.lang.Throwable -> L91
            r0.i = r2     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = com.tkay.core.c.c.q     // Catch: java.lang.Throwable -> L91
            int r2 = r5.optInt(r2)     // Catch: java.lang.Throwable -> L91
            r0.j = r2     // Catch: java.lang.Throwable -> L91
            java.lang.String r2 = com.tkay.core.c.c.r     // Catch: java.lang.Throwable -> L91
            long r2 = r5.optLong(r2)     // Catch: java.lang.Throwable -> L91
            r0.k = r2     // Catch: java.lang.Throwable -> L91
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = com.tkay.core.c.c.t     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r5.optString(r2)     // Catch: java.lang.Throwable -> L90
            r1.<init>(r5)     // Catch: java.lang.Throwable -> L90
            java.util.Iterator r5 = r1.keys()     // Catch: java.lang.Throwable -> L90
            java.util.HashMap r2 = new java.util.HashMap     // Catch: java.lang.Throwable -> L90
            r2.<init>()     // Catch: java.lang.Throwable -> L90
        L7a:
            boolean r3 = r5.hasNext()     // Catch: java.lang.Throwable -> L90
            if (r3 == 0) goto L8e
            java.lang.Object r3 = r5.next()     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = r1.optString(r3)     // Catch: java.lang.Throwable -> L90
            r2.put(r3, r4)     // Catch: java.lang.Throwable -> L90
            goto L7a
        L8e:
            r0.l = r2     // Catch: java.lang.Throwable -> L90
        L90:
            return r0
        L91:
            return r1
    }

    private int b() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    private java.util.Map<java.lang.String, java.lang.Object> b(java.lang.String r2) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> L13
            if (r0 == 0) goto L17
            java.util.Map<java.lang.String, java.lang.Object> r0 = r1.b     // Catch: java.lang.Throwable -> L13
            java.lang.Object r2 = r0.get(r2)     // Catch: java.lang.Throwable -> L13
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Throwable -> L13
            java.util.Map r2 = com.tkay.core.common.l.h.c(r2)     // Catch: java.lang.Throwable -> L13
            return r2
        L13:
            r2 = move-exception
            r2.printStackTrace()
        L17:
            r2 = 0
            return r2
    }

    private int c() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    private static com.tkay.core.c.c c(java.lang.String r3) {
            com.tkay.core.c.c r0 = new com.tkay.core.c.c     // Catch: java.lang.Throwable -> L26
            r0.<init>()     // Catch: java.lang.Throwable -> L26
            org.json.JSONObject r1 = new org.json.JSONObject     // Catch: java.lang.Throwable -> L26
            r1.<init>(r3)     // Catch: java.lang.Throwable -> L26
            r3 = 1
            r0.c = r3     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = com.tkay.core.c.c.v     // Catch: java.lang.Throwable -> L26
            int r2 = r1.optInt(r2)     // Catch: java.lang.Throwable -> L26
            r0.d = r2     // Catch: java.lang.Throwable -> L26
            java.lang.String r2 = com.tkay.core.c.c.x     // Catch: java.lang.Throwable -> L26
            java.lang.String r1 = r1.optString(r2)     // Catch: java.lang.Throwable -> L26
            java.util.Map r1 = com.tkay.core.common.l.h.c(r1)     // Catch: java.lang.Throwable -> L26
            r0.b = r1     // Catch: java.lang.Throwable -> L26
            r0.g = r3     // Catch: java.lang.Throwable -> L26
            r0.h = r3     // Catch: java.lang.Throwable -> L26
            return r0
        L26:
            r3 = 0
            return r3
    }

    private int d() {
            r1 = this;
            int r0 = r1.g
            return r0
    }

    private int e() {
            r1 = this;
            int r0 = r1.h
            return r0
    }

    private java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.i
            return r0
    }

    private int g() {
            r1 = this;
            int r0 = r1.j
            return r0
    }

    private long h() {
            r2 = this;
            long r0 = r2.k
            return r0
    }

    private java.util.Map<java.lang.String, java.lang.String> i() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.l
            return r0
    }

    private java.lang.String j() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    private boolean k() {
            r1 = this;
            boolean r0 = r1.c
            return r0
    }

    public final long a() {
            r2 = this;
            long r0 = r2.f
            return r0
    }
}
