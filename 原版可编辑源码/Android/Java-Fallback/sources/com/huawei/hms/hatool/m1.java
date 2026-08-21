package com.huawei.hms.hatool;

public class m1 {
    public static com.huawei.hms.hatool.m1 b;
    public com.huawei.hms.hatool.h1 a;

    static {
            com.huawei.hms.hatool.m1 r0 = new com.huawei.hms.hatool.m1
            r0.<init>()
            com.huawei.hms.hatool.m1.b = r0
            return
    }

    public m1() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            return
    }

    public static com.huawei.hms.hatool.m1 c() {
            com.huawei.hms.hatool.m1 r0 = com.huawei.hms.hatool.m1.b
            return r0
    }

    public void a(com.huawei.hms.hatool.h1 r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public boolean a() {
            r1 = this;
            com.huawei.hms.hatool.h1 r0 = r1.a
            if (r0 == 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            return r0
    }

    public com.huawei.hms.hatool.h1 b() {
            r1 = this;
            com.huawei.hms.hatool.h1 r0 = r1.a
            return r0
    }
}
