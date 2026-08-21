package com.huawei.hms.framework.network.grs.c;

public class c {
    private android.content.Context a;
    private com.huawei.hms.framework.network.grs.GrsBaseInfo b;
    private com.huawei.hms.framework.network.grs.a.a c;

    public c(android.content.Context r1, com.huawei.hms.framework.network.grs.a.a r2, com.huawei.hms.framework.network.grs.GrsBaseInfo r3) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r3
            r0.c = r2
            return
    }

    public java.lang.String a(boolean r11) {
            r10 = this;
            com.huawei.hms.framework.network.grs.a.a r0 = r10.c
            com.huawei.hms.framework.network.grs.a.c r0 = r0.a()
            java.lang.String r1 = ""
            java.lang.String r2 = "geoipCountryCode"
            java.lang.String r0 = r0.a(r2, r1)
            java.lang.String r2 = "ROOT"
            java.lang.String r3 = "geoip.countrycode"
            java.lang.String r0 = com.huawei.hms.framework.network.grs.a.a(r0, r3, r2)
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "geoIpCountry is: "
            r4.append(r5)
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            java.lang.String r5 = "GeoipCountry"
            com.huawei.hms.framework.common.Logger.i(r5, r4)
            com.huawei.hms.framework.network.grs.a.a r4 = r10.c
            com.huawei.hms.framework.network.grs.a.c r4 = r4.a()
            java.lang.String r6 = "geoipCountryCodetime"
            java.lang.String r7 = "0"
            java.lang.String r4 = r4.a(r6, r7)
            boolean r6 = android.text.TextUtils.isEmpty(r4)
            r7 = 0
            if (r6 != 0) goto L55
            java.lang.String r6 = "\\d+"
            boolean r6 = r4.matches(r6)
            if (r6 == 0) goto L55
            long r7 = java.lang.Long.parseLong(r4)     // Catch: java.lang.NumberFormatException -> L4f
            goto L55
        L4f:
            r4 = move-exception
            java.lang.String r6 = "convert urlParamKey from String to Long catch NumberFormatException."
            com.huawei.hms.framework.common.Logger.w(r5, r6, r4)
        L55:
            boolean r4 = android.text.TextUtils.isEmpty(r0)
            if (r4 != 0) goto L65
            java.lang.Long r4 = java.lang.Long.valueOf(r7)
            boolean r4 = com.huawei.hms.framework.network.grs.d.e.a(r4)
            if (r4 == 0) goto Ld3
        L65:
            com.huawei.hms.framework.network.grs.c.b.c r4 = new com.huawei.hms.framework.network.grs.c.b.c
            com.huawei.hms.framework.network.grs.GrsBaseInfo r6 = r10.b
            android.content.Context r7 = r10.a
            r4.<init>(r6, r7)
            r4.a(r3)
            com.huawei.hms.framework.network.grs.a.a r6 = r10.c
            com.huawei.hms.framework.network.grs.a.c r6 = r6.c()
            r7 = 0
            if (r6 == 0) goto L99
            java.lang.String r8 = "services"
            java.lang.String r1 = r6.a(r8, r1)
            java.lang.String r9 = r4.c()     // Catch: org.json.JSONException -> L89
            java.lang.String r1 = com.huawei.hms.framework.network.grs.c.n.a(r1, r9)     // Catch: org.json.JSONException -> L89
            goto L90
        L89:
            r1 = move-exception
            java.lang.String r9 = "getGeoipCountry merge services occure jsonException."
            com.huawei.hms.framework.common.Logger.w(r5, r9, r1)
            r1 = r7
        L90:
            boolean r9 = android.text.TextUtils.isEmpty(r1)
            if (r9 != 0) goto L99
            r6.b(r8, r1)
        L99:
            if (r11 == 0) goto Lc5
            com.huawei.hms.framework.network.grs.a.a r11 = r10.c
            com.huawei.hms.framework.network.grs.c.m r11 = r11.b()
            com.huawei.hms.framework.network.grs.c.f r11 = r11.a(r4, r3, r6)
            if (r11 == 0) goto Lb0
            java.lang.String r11 = r11.i()
            java.lang.String r11 = com.huawei.hms.framework.network.grs.a.a(r11, r3, r2)
            r0 = r11
        Lb0:
            java.lang.StringBuilder r11 = new java.lang.StringBuilder
            r11.<init>()
            java.lang.String r1 = "sync request to query geoip.countrycode is:"
            r11.append(r1)
            r11.append(r0)
            java.lang.String r11 = r11.toString()
            com.huawei.hms.framework.common.Logger.i(r5, r11)
            goto Ld3
        Lc5:
            java.lang.String r11 = "async request to query geoip.countrycode"
            com.huawei.hms.framework.common.Logger.i(r5, r11)
            com.huawei.hms.framework.network.grs.a.a r11 = r10.c
            com.huawei.hms.framework.network.grs.c.m r11 = r11.b()
            r11.a(r4, r7, r3, r6)
        Ld3:
            return r0
    }
}
