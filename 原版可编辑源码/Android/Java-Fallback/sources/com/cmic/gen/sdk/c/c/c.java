package com.cmic.gen.sdk.c.c;

public class c {
    java.lang.String a;
    private final java.lang.String b;
    private final java.util.Map<java.lang.String, java.lang.String> c;
    private final java.lang.String d;
    private boolean e;
    private final java.lang.String f;
    private android.net.Network g;
    private long h;
    private final java.lang.String i;
    private int j;
    private final com.cmic.gen.sdk.c.b.g k;

    public c(java.lang.String r7, com.cmic.gen.sdk.c.b.g r8, java.lang.String r9, java.lang.String r10) {
            r6 = this;
            r2 = 0
            r0 = r6
            r1 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private c(java.lang.String r2, java.util.Map<java.lang.String, java.lang.String> r3, com.cmic.gen.sdk.c.b.g r4, java.lang.String r5, java.lang.String r6) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            r1.b = r2
            r1.k = r4
            if (r3 != 0) goto L11
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
        L11:
            r1.c = r3
            java.lang.String r2 = ""
            if (r4 != 0) goto L19
            r3 = r2
            goto L21
        L19:
            org.json.JSONObject r3 = r4.b()
            java.lang.String r3 = r3.toString()
        L21:
            r1.a = r3
            r1.d = r5
            r1.f = r6
            if (r4 != 0) goto L2a
            goto L2e
        L2a:
            java.lang.String r2 = r4.a()
        L2e:
            r1.i = r2
            r1.l()
            return
    }

    private void l() {
            r3 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = "sdkVersion"
            java.lang.String r2 = "quick_login_android_5.9.6"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = "Content-Type"
            java.lang.String r2 = "application/json"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = "CMCC-EncryptType"
            java.lang.String r2 = "STD"
            r0.put(r1, r2)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = r3.f
            java.lang.String r2 = "traceId"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = r3.i
            java.lang.String r2 = "appid"
            r0.put(r2, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.c
            java.lang.String r1 = "connection"
            java.lang.String r2 = "Keep-Alive"
            r0.put(r1, r2)
            return
    }

    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    void a(long r1) {
            r0 = this;
            r0.h = r1
            return
    }

    public void a(android.net.Network r1) {
            r0 = this;
            r0.g = r1
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.c
            r0.put(r2, r3)
            return
    }

    void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public boolean b() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    public java.util.Map<java.lang.String, java.lang.String> c() {
            r1 = this;
            java.util.Map<java.lang.String, java.lang.String> r0 = r1.c
            return r0
    }

    public java.lang.String d() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.d
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.f
            return r0
    }

    public boolean g() {
            r2 = this;
            java.lang.String r0 = r2.f
            boolean r0 = com.cmic.gen.sdk.e.e.a(r0)
            if (r0 == 0) goto L1f
            java.lang.String r0 = r2.b
            java.lang.String r1 = "logReport"
            boolean r0 = r0.contains(r1)
            if (r0 != 0) goto L1f
            java.lang.String r0 = r2.b
            java.lang.String r1 = "uniConfig"
            boolean r0 = r0.contains(r1)
            if (r0 == 0) goto L1d
            goto L1f
        L1d:
            r0 = 0
            goto L20
        L1f:
            r0 = 1
        L20:
            return r0
    }

    public android.net.Network h() {
            r1 = this;
            android.net.Network r0 = r1.g
            return r0
    }

    long i() {
            r2 = this;
            long r0 = r2.h
            return r0
    }

    public boolean j() {
            r2 = this;
            int r0 = r2.j
            int r1 = r0 + 1
            r2.j = r1
            r1 = 2
            if (r0 >= r1) goto Lb
            r0 = 1
            goto Lc
        Lb:
            r0 = 0
        Lc:
            return r0
    }

    public com.cmic.gen.sdk.c.b.g k() {
            r1 = this;
            com.cmic.gen.sdk.c.b.g r0 = r1.k
            return r0
    }
}
