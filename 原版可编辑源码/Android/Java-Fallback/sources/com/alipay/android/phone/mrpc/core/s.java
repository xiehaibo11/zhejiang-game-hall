package com.alipay.android.phone.mrpc.core;

public final class s {
    public static java.lang.Boolean a;

    static {
            return
    }

    public static final boolean a(android.content.Context r2) {
            java.lang.Boolean r0 = com.alipay.android.phone.mrpc.core.s.a
            if (r0 == 0) goto L9
            boolean r2 = r0.booleanValue()
            return r2
        L9:
            r0 = 0
            android.content.pm.PackageManager r1 = r2.getPackageManager()     // Catch: java.lang.Exception -> L2a
            java.lang.String r2 = r2.getPackageName()     // Catch: java.lang.Exception -> L2a
            android.content.pm.ApplicationInfo r2 = r1.getApplicationInfo(r2, r0)     // Catch: java.lang.Exception -> L2a
            int r2 = r2.flags     // Catch: java.lang.Exception -> L2a
            r2 = r2 & 2
            if (r2 == 0) goto L1e
            r2 = 1
            goto L1f
        L1e:
            r2 = 0
        L1f:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r2)     // Catch: java.lang.Exception -> L2a
            com.alipay.android.phone.mrpc.core.s.a = r2     // Catch: java.lang.Exception -> L2a
            boolean r2 = r2.booleanValue()     // Catch: java.lang.Exception -> L2a
            return r2
        L2a:
            return r0
    }
}
