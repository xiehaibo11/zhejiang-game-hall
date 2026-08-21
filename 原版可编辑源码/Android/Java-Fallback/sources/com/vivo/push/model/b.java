package com.vivo.push.model;

public final class b {
    private java.lang.String a;
    private long b;
    private int c;
    private java.lang.String d;
    private boolean e;
    private boolean f;

    public b(java.lang.String r3) {
            r2 = this;
            r2.<init>()
            r0 = -1
            r2.b = r0
            r0 = -1
            r2.c = r0
            r0 = 0
            r2.e = r0
            r2.f = r0
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L18
            r2.a = r3
            return
        L18:
            java.lang.IllegalAccessError r3 = new java.lang.IllegalAccessError
            java.lang.String r0 = "PushPackageInfo need a non-null pkgName."
            r3.<init>(r0)
            throw r3
    }

    public final java.lang.String a() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }

    public final void a(int r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public final void a(long r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public final void a(java.lang.String r1) {
            r0 = this;
            r0.d = r1
            return
    }

    public final void a(boolean r1) {
            r0 = this;
            r0.e = r1
            return
    }

    public final long b() {
            r2 = this;
            long r0 = r2.b
            return r0
    }

    public final void b(boolean r1) {
            r0 = this;
            r0.f = r1
            return
    }

    public final boolean c() {
            r1 = this;
            boolean r0 = r1.e
            return r0
    }

    public final boolean d() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    public final java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = "PushPackageInfo{mPackageName="
            r0.<init>(r1)
            java.lang.String r1 = r3.a
            r0.append(r1)
            java.lang.String r1 = ", mPushVersion="
            r0.append(r1)
            long r1 = r3.b
            r0.append(r1)
            java.lang.String r1 = ", mPackageVersion="
            r0.append(r1)
            int r1 = r3.c
            r0.append(r1)
            java.lang.String r1 = ", mInBlackList="
            r0.append(r1)
            boolean r1 = r3.e
            r0.append(r1)
            java.lang.String r1 = ", mPushEnable="
            r0.append(r1)
            boolean r1 = r3.f
            r0.append(r1)
            java.lang.String r1 = "}"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
