package com.huawei.hms.framework.network.grs.b;

public class f {
    private static final java.lang.String a = "f";
    public static final java.util.Set<java.lang.String> b = null;

    static {
            com.huawei.hms.framework.network.grs.b.e r0 = new com.huawei.hms.framework.network.grs.b.e
            r1 = 16
            r0.<init>(r1)
            java.util.Set r0 = java.util.Collections.unmodifiableSet(r0)
            com.huawei.hms.framework.network.grs.b.f.b = r0
            return
    }

    public static java.lang.String a(android.content.Context r1, com.huawei.hms.framework.network.grs.a.a r2, java.lang.String r3, com.huawei.hms.framework.network.grs.GrsBaseInfo r4, boolean r5) {
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 == 0) goto Lf
            java.lang.String r1 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.String r2 = "routeBy must be not empty string or null."
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            r1 = 0
            return r1
        Lf:
            java.lang.String r0 = "no_route"
            boolean r0 = r0.equals(r3)
            if (r0 != 0) goto L25
            java.lang.String r0 = "unconditional"
            boolean r0 = r0.equals(r3)
            if (r0 == 0) goto L20
            goto L25
        L20:
            java.lang.String r1 = b(r1, r2, r3, r4, r5)
            return r1
        L25:
            java.lang.String r1 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.String r2 = "routeBy equals NO_ROUTE_POLICY"
            com.huawei.hms.framework.common.Logger.v(r1, r2)
            java.lang.String r1 = "no_route_country"
            return r1
    }

    private static java.lang.String b(android.content.Context r8, com.huawei.hms.framework.network.grs.a.a r9, java.lang.String r10, com.huawei.hms.framework.network.grs.GrsBaseInfo r11, boolean r12) {
            java.lang.String r0 = r11.getSerCountry()
            java.lang.String r1 = r11.getRegCountry()
            java.lang.String r11 = r11.getIssueCountry()
            java.lang.String r2 = ">"
            java.lang.String[] r10 = r10.split(r2)
            int r2 = r10.length
            r3 = 0
        L14:
            if (r3 >= r2) goto Ldf
            r4 = r10[r3]
            java.util.Set<java.lang.String> r5 = com.huawei.hms.framework.network.grs.b.f.b
            java.lang.String r6 = r4.trim()
            boolean r5 = r5.contains(r6)
            if (r5 == 0) goto Ldb
            java.lang.String r5 = r4.trim()
            java.lang.String r6 = "ser_country"
            boolean r5 = r6.equals(r5)
            java.lang.String r6 = "UNKNOWN"
            if (r5 == 0) goto L56
            boolean r5 = android.text.TextUtils.isEmpty(r0)
            if (r5 != 0) goto L56
            boolean r5 = r6.equals(r0)
            if (r5 != 0) goto L56
            java.lang.String r8 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "current route_by is serCountry and routerCountry is:"
        L47:
            r9.append(r10)
            r9.append(r0)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.framework.common.Logger.i(r8, r9)
            goto Le1
        L56:
            java.lang.String r5 = r4.trim()
            java.lang.String r7 = "reg_country"
            boolean r5 = r7.equals(r5)
            if (r5 == 0) goto L86
            boolean r5 = android.text.TextUtils.isEmpty(r1)
            if (r5 != 0) goto L86
            boolean r5 = r6.equals(r1)
            if (r5 != 0) goto L86
            java.lang.String r8 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "current route_by is regCountry and routerCountry is:"
            r9.append(r10)
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.framework.common.Logger.i(r8, r9)
            r0 = r1
            goto Le1
        L86:
            java.lang.String r5 = r4.trim()
            java.lang.String r7 = "issue_country"
            boolean r5 = r7.equals(r5)
            if (r5 == 0) goto Lb6
            boolean r5 = android.text.TextUtils.isEmpty(r11)
            if (r5 != 0) goto Lb6
            boolean r5 = r6.equals(r11)
            if (r5 != 0) goto Lb6
            java.lang.String r8 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "current route_by is issueCountry and routerCountry is:"
            r9.append(r10)
            r9.append(r11)
            java.lang.String r9 = r9.toString()
            com.huawei.hms.framework.common.Logger.i(r8, r9)
            r0 = r11
            goto Le1
        Lb6:
            java.lang.String r4 = r4.trim()
            java.lang.String r5 = "geo_ip"
            boolean r4 = r5.equals(r4)
            if (r4 == 0) goto Ldb
            com.huawei.hms.framework.network.grs.c.c r10 = new com.huawei.hms.framework.network.grs.c.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r11 = new com.huawei.hms.framework.network.grs.GrsBaseInfo
            r11.<init>()
            r10.<init>(r8, r9, r11)
            java.lang.String r0 = r10.a(r12)
            java.lang.String r8 = com.huawei.hms.framework.network.grs.b.f.a
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r10 = "current route_by is geo_ip and routerCountry is: "
            goto L47
        Ldb:
            int r3 = r3 + 1
            goto L14
        Ldf:
            java.lang.String r0 = ""
        Le1:
            return r0
    }
}
