package com.huawei.hms.hatool;

public class m {
    public com.huawei.hms.hatool.k a;
    public com.huawei.hms.hatool.k b;
    public com.huawei.hms.hatool.k c;
    public com.huawei.hms.hatool.k d;

    public m(java.lang.String r1) {
            r0 = this;
            r0.<init>()
            return
    }

    public com.huawei.hms.hatool.k a() {
            r1 = this;
            com.huawei.hms.hatool.k r0 = r1.c
            return r0
    }

    public com.huawei.hms.hatool.k a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "oper"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Ld
            com.huawei.hms.hatool.k r3 = r2.c()
            return r3
        Ld:
            java.lang.String r0 = "maint"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1a
            com.huawei.hms.hatool.k r3 = r2.b()
            return r3
        L1a:
            java.lang.String r0 = "diffprivacy"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L27
            com.huawei.hms.hatool.k r3 = r2.a()
            return r3
        L27:
            java.lang.String r0 = "preins"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L34
            com.huawei.hms.hatool.k r3 = r2.d()
            return r3
        L34:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "HiAnalyticsInstData.getConfig(type): wrong type: "
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = r0.toString()
            java.lang.String r0 = "hmsSdk"
            com.huawei.hms.hatool.y.f(r0, r3)
            r3 = 0
            return r3
    }

    public void a(com.huawei.hms.hatool.k r1) {
            r0 = this;
            r0.a = r1
            return
    }

    public com.huawei.hms.hatool.k b() {
            r1 = this;
            com.huawei.hms.hatool.k r0 = r1.a
            return r0
    }

    public void b(com.huawei.hms.hatool.k r1) {
            r0 = this;
            r0.b = r1
            return
    }

    public com.huawei.hms.hatool.k c() {
            r1 = this;
            com.huawei.hms.hatool.k r0 = r1.b
            return r0
    }

    public com.huawei.hms.hatool.k d() {
            r1 = this;
            com.huawei.hms.hatool.k r0 = r1.d
            return r0
    }
}
