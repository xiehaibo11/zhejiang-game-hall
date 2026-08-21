package com.huawei.updatesdk.a.a.d.h;

public class e {
    private static java.lang.String a = "";

    public static boolean a() {
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.e.a
            java.lang.String r1 = "KidWatch"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Lc
            r0 = 1
            return r0
        Lc:
            java.lang.String r0 = "ro.vendor.market.type"
            java.lang.String r2 = ""
            java.lang.String r0 = com.huawei.updatesdk.a.a.d.h.c.a(r0, r2)
            com.huawei.updatesdk.a.a.d.h.e.a = r0
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Children watch property value is "
            r2.append(r3)
            r2.append(r0)
            java.lang.String r2 = r2.toString()
            java.lang.String r3 = "WearDeviceUtil"
            com.huawei.updatesdk.a.a.a.b(r3, r2)
            boolean r2 = android.text.TextUtils.isEmpty(r0)
            if (r2 != 0) goto L37
            boolean r0 = r1.equals(r0)
            return r0
        L37:
            r0 = 0
            return r0
    }
}
