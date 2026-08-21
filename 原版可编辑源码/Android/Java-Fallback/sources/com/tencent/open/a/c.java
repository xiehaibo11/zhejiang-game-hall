package com.tencent.open.a;

class c implements com.tencent.open.a.g {
    private java.lang.String a;
    private int b;
    private int c;
    private int d;
    private java.lang.String e;
    private java.util.Map<java.lang.String, java.util.List<java.lang.String>> f;

    public c(java.net.HttpURLConnection r3, java.lang.String r4, int r5, int r6, int r7, java.lang.String r8) {
            r2 = this;
            r2.<init>()
            java.lang.String r0 = ""
            r2.a = r0
            r1 = 0
            r2.b = r1
            r2.c = r1
            r2.d = r1
            r2.e = r0
            r2.a = r4
            r2.b = r5
            r2.c = r6
            r2.d = r7
            r2.e = r8
            java.util.HashMap r4 = new java.util.HashMap
            r4.<init>()
            r2.f = r4
            if (r3 == 0) goto L2e
            java.util.Map r3 = r3.getHeaderFields()
            if (r3 == 0) goto L2e
            java.util.Map<java.lang.String, java.util.List<java.lang.String>> r4 = r2.f
            r4.putAll(r3)
        L2e:
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    @Override
    public int b() {
            r1 = this;
            int r0 = r1.b
            return r0
    }

    @Override
    public int c() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    @Override
    public int d() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.Class r1 = r3.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.<init>(r1)
            r1 = 64
            r0.append(r1)
            int r1 = r3.hashCode()
            r0.append(r1)
            r1 = 10
            r0.append(r1)
            java.lang.String r2 = "content = ["
            r0.append(r2)
            java.lang.String r2 = r3.a
            r0.append(r2)
            r2 = 93
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "responseSize = "
            r0.append(r2)
            int r2 = r3.b
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "requestSize = "
            r0.append(r2)
            int r2 = r3.c
            r0.append(r2)
            r0.append(r1)
            java.lang.String r2 = "resultCode = "
            r0.append(r2)
            int r2 = r3.d
            r0.append(r2)
            r0.append(r1)
            java.lang.String r1 = "errorMsg = "
            r0.append(r1)
            java.lang.String r1 = r3.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
