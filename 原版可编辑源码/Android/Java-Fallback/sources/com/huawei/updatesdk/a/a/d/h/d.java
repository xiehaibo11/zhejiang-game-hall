package com.huawei.updatesdk.a.a.d.h;

public class d {
    private static int a = -1;

    public static int a() {
            int r0 = com.huawei.updatesdk.a.a.d.h.d.a
            r1 = -1
            if (r0 != r1) goto L29
            java.lang.String r0 = ""
            java.lang.String r1 = "ro.product.locale.language"
            java.lang.String r1 = com.huawei.updatesdk.a.a.d.h.c.a(r1, r0)
            java.lang.String r2 = "zh"
            boolean r1 = r2.equals(r1)
            if (r1 == 0) goto L26
            java.lang.String r1 = "ro.product.locale.region"
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.a(r1, r0)
            java.lang.String r1 = "CN"
            boolean r0 = r1.equals(r0)
            if (r0 != 0) goto L24
            goto L26
        L24:
            r0 = 0
            goto L27
        L26:
            r0 = 1
        L27:
            com.huawei.updatesdk.a.a.d.h.d.a = r0
        L29:
            int r0 = com.huawei.updatesdk.a.a.d.h.d.a
            return r0
    }
}
