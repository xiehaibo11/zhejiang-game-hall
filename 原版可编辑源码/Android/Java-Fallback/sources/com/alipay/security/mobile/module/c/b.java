package com.alipay.security.mobile.module.c;

public final class b {
    public static java.lang.String a(java.lang.String r2) {
            java.lang.String r0 = com.alipay.security.mobile.module.c.f.a(r2)     // Catch: java.lang.Throwable -> L5
            goto L7
        L5:
            java.lang.String r0 = ""
        L7:
            boolean r1 = com.alipay.security.mobile.module.a.a.a(r0)
            if (r1 == 0) goto L24
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r1 = ".SystemConfig"
            r0.<init>(r1)
            java.lang.String r1 = java.io.File.separator
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = com.alipay.security.mobile.module.c.c.a(r2)
        L24:
            return r0
    }
}
