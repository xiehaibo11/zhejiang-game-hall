package com.bianfeng.ymnsdk.gongxiang;

public class k {
    private int a;
    private java.lang.String b;

    public k() {
            r0 = this;
            r0.<init>()
            return
    }

    public int a() {
            r1 = this;
            int r0 = r1.a
            return r0
    }

    public java.lang.String b() {
            r1 = this;
            java.lang.String r0 = r1.b
            return r0
    }

    public boolean c() {
            r1 = this;
            int r0 = r1.a()
            if (r0 != 0) goto L8
            r0 = 1
            goto L9
        L8:
            r0 = 0
        L9:
            return r0
    }

    public java.lang.String toString() {
            r1 = this;
            java.lang.String r0 = com.bianfeng.ymnsdk.util.thridsdk.YmnGsonUtil.toJson(r1)
            return r0
    }
}
