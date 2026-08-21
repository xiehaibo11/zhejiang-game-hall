package com.huawei.hms.hatool;

public abstract class g {
    public static java.lang.String a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = com.huawei.hms.hatool.a.a(r3, r4)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r2 = com.huawei.hms.hatool.a.a(r3, r4)
            return r2
        Lf:
            java.lang.String r0 = "hmsSdk"
            java.lang.String r1 = "getAndroidId(): to getConfigByType()"
            com.huawei.hms.hatool.y.c(r0, r1)
            java.lang.String r2 = c(r2, r3, r4)
            return r2
    }

    public static java.lang.String b(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = "oper"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto Ld
            java.lang.String r1 = d(r1, r2, r3)
            return r1
        Ld:
            java.lang.String r0 = "maint"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1a
            java.lang.String r1 = d(r1, r2, r3)
            return r1
        L1a:
            java.lang.String r0 = "diffprivacy"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L27
            java.lang.String r1 = d(r1, r2, r3)
            return r1
        L27:
            java.lang.String r0 = "preins"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L34
            java.lang.String r1 = d(r1, r2, r3)
            return r1
        L34:
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "getChannel(): Invalid type: "
            r1.append(r2)
            r1.append(r3)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "hmsSdk"
            com.huawei.hms.hatool.y.f(r2, r1)
            java.lang.String r1 = ""
            return r1
    }

    public static java.lang.String c(android.content.Context r0, java.lang.String r1, java.lang.String r2) {
            boolean r1 = com.huawei.hms.hatool.a.b(r1, r2)
            if (r1 == 0) goto L24
            java.lang.String r1 = com.huawei.hms.hatool.b.b()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L1f
            java.lang.String r0 = com.huawei.hms.hatool.f.a(r0)
            com.huawei.hms.hatool.i r1 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r1 = r1.b()
            r1.b(r0)
        L1f:
            java.lang.String r0 = com.huawei.hms.hatool.b.b()
            return r0
        L24:
            java.lang.String r0 = ""
            return r0
    }

    public static java.lang.String d(android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            java.lang.String r0 = com.huawei.hms.hatool.c.d(r2, r3)
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto Lf
            java.lang.String r1 = com.huawei.hms.hatool.c.d(r2, r3)
            return r1
        Lf:
            com.huawei.hms.hatool.i r2 = com.huawei.hms.hatool.i.c()
            com.huawei.hms.hatool.l r2 = r2.b()
            java.lang.String r3 = r2.g()
            boolean r3 = android.text.TextUtils.isEmpty(r3)
            if (r3 == 0) goto L34
            java.lang.String r1 = com.huawei.hms.hatool.f.b(r1)
            r3 = 256(0x100, float:3.59E-43)
            java.lang.String r0 = "channel"
            boolean r3 = com.huawei.hms.hatool.q0.a(r0, r1, r3)
            if (r3 != 0) goto L31
            java.lang.String r1 = ""
        L31:
            r2.d(r1)
        L34:
            java.lang.String r1 = r2.g()
            return r1
    }
}
