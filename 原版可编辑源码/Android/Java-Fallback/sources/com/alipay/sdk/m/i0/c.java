package com.alipay.sdk.m.i0;

public class c {
    public java.lang.String a;
    public java.lang.Boolean b;

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public void a(boolean r1) {
            r0 = this;
            java.lang.Boolean r1 = java.lang.Boolean.valueOf(r1)
            r0.b = r1
            return
    }

    public boolean a() {
            r1 = this;
            java.lang.Boolean r0 = r1.b
            if (r0 == 0) goto L6
            r0 = 1
            return r0
        L6:
            r0 = 0
            return r0
    }

    public boolean a(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)
            if (r0 == 0) goto L8
            r2 = 0
            return r2
        L8:
            java.lang.String r0 = r1.a
            boolean r2 = android.text.TextUtils.equals(r0, r2)
            return r2
    }

    public void b(java.lang.String r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public boolean b() {
            r1 = this;
            java.lang.Boolean r0 = r1.b
            if (r0 == 0) goto L9
            boolean r0 = r0.booleanValue()
            return r0
        L9:
            r0 = 0
            return r0
    }
}
