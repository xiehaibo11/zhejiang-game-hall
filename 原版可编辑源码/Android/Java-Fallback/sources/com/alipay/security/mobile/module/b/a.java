package com.alipay.security.mobile.module.b;

public final class a {
    private static com.alipay.security.mobile.module.b.a a;

    static {
            com.alipay.security.mobile.module.b.a r0 = new com.alipay.security.mobile.module.b.a
            r0.<init>()
            com.alipay.security.mobile.module.b.a.a = r0
            return
    }

    private a() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.alipay.security.mobile.module.b.a a() {
            com.alipay.security.mobile.module.b.a r0 = com.alipay.security.mobile.module.b.a.a
            return r0
    }

    public static java.lang.String a(android.content.Context r2) {
            android.content.pm.PackageManager r0 = r2.getPackageManager()     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L11
            r1 = 16
            android.content.pm.PackageInfo r2 = r0.getPackageInfo(r2, r1)     // Catch: java.lang.Exception -> L11
            java.lang.String r2 = r2.versionName     // Catch: java.lang.Exception -> L11
            return r2
        L11:
            java.lang.String r2 = "0.0.0"
            return r2
    }
}
