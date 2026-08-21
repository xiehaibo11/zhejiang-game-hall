package com.bianfeng.ymnsdk.ymndatalib;

public class e {
    public java.lang.String a;
    public com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils b;
    public java.lang.String c;

    public e(com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r1, java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, java.lang.String r6) {
            r0 = this;
            r0.<init>()
            java.lang.String r3 = ""
            r0.a = r3
            r0.b = r1
            r0.a = r2
            r0.c = r6
            return
    }

    public com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils a() {
            r1 = this;
            com.bianfeng.ymnsdk.ymndatalib.utils.ResponseDataUtils r0 = r1.b
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 == 0) goto Lc
            java.lang.String r0 = ""
            r1.c = r0
        Lc:
            java.lang.String r0 = r1.c
            return r0
    }

    public java.lang.String c() {
            r1 = this;
            java.lang.String r0 = r1.a
            return r0
    }
}
