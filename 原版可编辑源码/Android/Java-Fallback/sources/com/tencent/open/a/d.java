package com.tencent.open.a;

class d implements com.tencent.open.a.g {
    private okhttp3.Response a;
    private java.lang.String b;
    private int c;
    private int d;
    private int e;

    d(okhttp3.Response r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.b = r0
            r1.a = r2
            r1.d = r3
            int r2 = r2.code()
            r1.c = r2
            okhttp3.Response r2 = r1.a
            okhttp3.ResponseBody r2 = r2.body()
            if (r2 == 0) goto L20
            long r2 = r2.contentLength()
            int r3 = (int) r2
            r1.e = r3
            goto L23
        L20:
            r2 = 0
            r1.e = r2
        L23:
            return
    }

    @Override
    public java.lang.String a() throws java.io.IOException {
            r1 = this;
            java.lang.String r0 = r1.b
            if (r0 != 0) goto L1a
            okhttp3.Response r0 = r1.a
            okhttp3.ResponseBody r0 = r0.body()
            if (r0 == 0) goto L12
            java.lang.String r0 = r0.string()
            r1.b = r0
        L12:
            java.lang.String r0 = r1.b
            if (r0 != 0) goto L1a
            java.lang.String r0 = ""
            r1.b = r0
        L1a:
            java.lang.String r0 = r1.b
            return r0
    }

    @Override
    public int b() {
            r1 = this;
            int r0 = r1.e
            return r0
    }

    @Override
    public int c() {
            r1 = this;
            int r0 = r1.d
            return r0
    }

    @Override
    public int d() {
            r1 = this;
            int r0 = r1.c
            return r0
    }

    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.Class r1 = r2.getClass()
            java.lang.String r1 = r1.getSimpleName()
            r0.<init>(r1)
            r1 = 64
            r0.append(r1)
            int r1 = r2.hashCode()
            r0.append(r1)
            java.lang.String r1 = r2.b
            r0.append(r1)
            int r1 = r2.c
            r0.append(r1)
            int r1 = r2.d
            r0.append(r1)
            int r1 = r2.e
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
