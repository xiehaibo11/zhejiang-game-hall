package com.huawei.hms.framework.network.grs.a;

public class c {
    private static final java.lang.String a = "c";
    private com.huawei.hms.framework.common.PLSharedPreferences b;

    public c(android.content.Context r5, java.lang.String r6) {
            r4 = this;
            r4.<init>()
            r0 = 0
            r4.b = r0
            java.lang.String r0 = r5.getPackageName()
            java.lang.String r1 = com.huawei.hms.framework.network.grs.a.c.a
            r2 = 1
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r0
            java.lang.String r3 = "get pkgname from context is{%s}"
            com.huawei.hms.framework.common.Logger.d(r1, r3, r2)
            com.huawei.hms.framework.common.PLSharedPreferences r1 = new com.huawei.hms.framework.common.PLSharedPreferences
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r6)
            r2.append(r0)
            java.lang.String r6 = r2.toString()
            r1.<init>(r5, r6)
            r4.b = r1
            r4.a(r5)
            return
    }

    private void a(android.content.Context r6) {
            r5 = this;
            android.content.pm.PackageManager r0 = r6.getPackageManager()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            java.lang.String r6 = r6.getPackageName()     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            r1 = 16384(0x4000, float:2.2959E-41)
            android.content.pm.PackageInfo r6 = r0.getPackageInfo(r6, r1)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            int r6 = r6.versionCode     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            long r0 = (long) r6     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            java.lang.String r6 = java.lang.Long.toString(r0)     // Catch: android.content.pm.PackageManager.NameNotFoundException -> L3a
            java.lang.String r0 = "version"
            java.lang.String r1 = ""
            java.lang.String r1 = r5.a(r0, r1)
            boolean r2 = r6.equals(r1)
            if (r2 != 0) goto L39
            java.lang.String r2 = com.huawei.hms.framework.network.grs.a.c.a
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            r3[r4] = r1
            r1 = 1
            r3[r1] = r6
            java.lang.String r1 = "app version changed! old version{%s} and new version{%s}"
            com.huawei.hms.framework.common.Logger.i(r2, r1, r3)
            r5.c()
            r5.b(r0, r6)
        L39:
            return
        L3a:
            java.lang.String r6 = com.huawei.hms.framework.network.grs.a.c.a
            java.lang.String r0 = "get app version failed and catch NameNotFoundException"
            com.huawei.hms.framework.common.Logger.w(r6, r0)
            return
    }

    public java.lang.String a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.framework.common.PLSharedPreferences r0 = r1.b
            java.lang.String r2 = r0.getString(r2, r3)
            return r2
    }

    public java.util.Map<java.lang.String, ?> a() {
            r1 = this;
            com.huawei.hms.framework.common.PLSharedPreferences r0 = r1.b
            java.util.Map r0 = r0.getAll()
            return r0
    }

    public void a(java.lang.String r2) {
            r1 = this;
            com.huawei.hms.framework.common.PLSharedPreferences r0 = r1.b
            r0.remove(r2)
            return
    }

    public java.lang.String b() {
            r2 = this;
            java.lang.String r0 = "cp"
            java.lang.String r1 = ""
            java.lang.String r0 = r2.a(r0, r1)
            return r0
    }

    public void b(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.huawei.hms.framework.common.PLSharedPreferences r0 = r1.b
            r0.putString(r2, r3)
            return
    }

    public void c() {
            r1 = this;
            com.huawei.hms.framework.common.PLSharedPreferences r0 = r1.b
            r0.clear()
            return
    }
}
