package com.huawei.updatesdk.b.c;

public abstract class c {
    private java.lang.String a;
    private java.lang.String b;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract java.lang.String a();

    public abstract int b();

    abstract java.lang.String c();

    abstract java.lang.String d();

    public java.lang.String e() {
            r1 = this;
            java.lang.String r0 = r1.b
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.b
            return r0
        Lb:
            java.lang.String r0 = r1.c()
            r1.b = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = android.os.Build.MANUFACTURER
            r1.b = r0
        L1b:
            java.lang.String r0 = r1.b
            return r0
    }

    public java.lang.String f() {
            r1 = this;
            java.lang.String r0 = r1.a
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lb
            java.lang.String r0 = r1.a
            return r0
        Lb:
            java.lang.String r0 = r1.d()
            r1.a = r0
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto L1b
            java.lang.String r0 = android.os.Build.MODEL
            r1.a = r0
        L1b:
            java.lang.String r0 = r1.a
            return r0
    }

    public abstract java.util.List<java.lang.String> g();
}
