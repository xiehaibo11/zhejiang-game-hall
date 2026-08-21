package com.huawei.hms.hatool;

public abstract class y0 {
    public y0() {
            r0 = this;
            r0.<init>()
            return
    }

    public final com.huawei.hms.hatool.v0 a(int r3, android.content.Context r4) {
            r2 = this;
            if (r3 == 0) goto L14
            java.lang.String r0 = r2.f()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L16
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r4 = com.huawei.hms.hatool.w0.b
            r3.<init>(r4, r0)
            return r3
        L14:
            java.lang.String r0 = ""
        L16:
            r1 = r3 & 2
            if (r1 == 0) goto L2c
            java.lang.String r0 = r2.b(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L2c
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r4 = com.huawei.hms.hatool.w0.a
            r3.<init>(r4, r0)
            return r3
        L2c:
            r3 = r3 & 1
            if (r3 == 0) goto L3c
            java.lang.String r3 = r2.c(r4)
            com.huawei.hms.hatool.v0 r4 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r0 = com.huawei.hms.hatool.w0.c
            r4.<init>(r0, r3)
            return r4
        L3c:
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r4 = com.huawei.hms.hatool.w0.d
            r3.<init>(r4, r0)
            return r3
    }

    public com.huawei.hms.hatool.v0 a(android.content.Context r4) {
            r3 = this;
            java.lang.String r0 = r3.c()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L12
            com.huawei.hms.hatool.v0 r4 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r1 = com.huawei.hms.hatool.w0.b
            r4.<init>(r1, r0)
            return r4
        L12:
            java.lang.String r0 = r3.a()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L24
            com.huawei.hms.hatool.v0 r4 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r1 = com.huawei.hms.hatool.w0.a
            r4.<init>(r1, r0)
            return r4
        L24:
            boolean r0 = r3.e()
            java.lang.String r1 = r3.b()
            boolean r2 = android.text.TextUtils.isEmpty(r1)
            if (r2 != 0) goto L46
            com.huawei.hms.hatool.v0 r4 = new com.huawei.hms.hatool.v0
            if (r0 == 0) goto L3c
            com.huawei.hms.hatool.w0 r0 = com.huawei.hms.hatool.w0.c
            r4.<init>(r0, r1)
            return r4
        L3c:
            com.huawei.hms.hatool.w0 r0 = com.huawei.hms.hatool.w0.b
            java.lang.String r1 = r3.a(r1)
            r4.<init>(r0, r1)
            return r4
        L46:
            if (r0 == 0) goto L51
            int r0 = r3.d()
            com.huawei.hms.hatool.v0 r4 = r3.a(r0, r4)
            return r4
        L51:
            int r0 = r3.d()
            com.huawei.hms.hatool.v0 r4 = r3.b(r0, r4)
            return r4
    }

    public abstract java.lang.String a();

    public abstract java.lang.String a(java.lang.String r1);

    public final com.huawei.hms.hatool.v0 b(int r3, android.content.Context r4) {
            r2 = this;
            r0 = r3 & 4
            if (r0 == 0) goto L18
            r0 = r3 & 1
            if (r0 == 0) goto L18
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r0 = com.huawei.hms.hatool.w0.b
            java.lang.String r4 = r2.c(r4)
            java.lang.String r4 = r2.a(r4)
            r3.<init>(r0, r4)
            return r3
        L18:
            r0 = r3 & 1
            if (r0 == 0) goto L2e
            java.lang.String r0 = r2.c(r4)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L30
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r4 = com.huawei.hms.hatool.w0.c
            r3.<init>(r4, r0)
            return r3
        L2e:
            java.lang.String r0 = ""
        L30:
            r3 = r3 & 2
            if (r3 == 0) goto L40
            java.lang.String r3 = r2.b(r4)
            com.huawei.hms.hatool.v0 r4 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r0 = com.huawei.hms.hatool.w0.a
            r4.<init>(r0, r3)
            return r4
        L40:
            com.huawei.hms.hatool.v0 r3 = new com.huawei.hms.hatool.v0
            com.huawei.hms.hatool.w0 r4 = com.huawei.hms.hatool.w0.d
            r3.<init>(r4, r0)
            return r3
    }

    public abstract java.lang.String b();

    public final java.lang.String b(android.content.Context r3) {
            r2 = this;
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            java.lang.String r1 = r0.m()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            java.lang.String r3 = com.huawei.hms.hatool.z0.f(r3)
            r0.h(r3)
        L19:
            java.lang.String r3 = r0.m()
            return r3
    }

    public abstract java.lang.String c();

    public final java.lang.String c(android.content.Context r3) {
            r2 = this;
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            java.lang.String r1 = r0.a()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            java.lang.String r3 = com.huawei.hms.hatool.z0.h(r3)
            r0.l(r3)
        L19:
            java.lang.String r3 = r0.a()
            return r3
    }

    public abstract int d();

    public final boolean e() {
            r2 = this;
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            java.lang.String r1 = r0.i()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            java.lang.String r1 = com.huawei.hms.hatool.f.a()
            r0.e(r1)
        L19:
            java.lang.String r0 = r0.i()
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r0 = r0 ^ 1
            return r0
    }

    public final java.lang.String f() {
            r2 = this;
            com.huawei.hms.hatool.i r0 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r0 = r0.b()
            java.lang.String r1 = r0.c()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L19
            java.lang.String r1 = com.huawei.hms.hatool.z0.c()
            r0.m(r1)
        L19:
            java.lang.String r0 = r0.c()
            return r0
    }
}
