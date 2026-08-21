package com.bytedance.pangle.util;

public class l {
    private static volatile com.bytedance.pangle.util.l b;
    public android.content.SharedPreferences a;

    private l() {
            r3 = this;
            r3.<init>()
            android.app.Application r0 = com.bytedance.pangle.Zeus.getAppApplication()
            java.lang.String r1 = "pangle_meta_data_sp"
            r2 = 0
            android.content.SharedPreferences r0 = r0.getSharedPreferences(r1, r2)
            r3.a = r0
            return
    }

    public static com.bytedance.pangle.util.l a() {
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.b
            if (r0 != 0) goto L17
            java.lang.Class<com.bytedance.pangle.util.l> r0 = com.bytedance.pangle.util.l.class
            monitor-enter(r0)
            com.bytedance.pangle.util.l r1 = com.bytedance.pangle.util.l.b     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.bytedance.pangle.util.l r1 = new com.bytedance.pangle.util.l     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.bytedance.pangle.util.l.b = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            throw r1
        L17:
            com.bytedance.pangle.util.l r0 = com.bytedance.pangle.util.l.b
            return r0
    }

    public final int a(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "PLUGIN_API_VERSION_"
            java.lang.String r1 = r2.concat(r1)
            r2 = 0
            int r0 = r0.getInt(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "ZeusSpUtils getPluginApiVersion pluginPKg = "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ", pluginApiVersion = "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r4)
            return r0
    }

    public final void a(java.lang.String r4, int r5, boolean r6) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            android.content.SharedPreferences$Editor r0 = r0.edit()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "INSTALLED_"
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = "-"
            r1.append(r4)
            r1.append(r5)
            java.lang.String r4 = r1.toString()
            if (r6 == 0) goto L23
            r5 = 1
            r0.putBoolean(r4, r5)
            goto L26
        L23:
            r0.remove(r4)
        L26:
            r0.apply()
            return
    }

    public final boolean a(java.lang.String r5, int r6) {
            r4 = this;
            android.content.SharedPreferences r0 = r4.a
            java.util.Locale r1 = java.util.Locale.getDefault()
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            r2[r3] = r5
            java.lang.Integer r5 = java.lang.Integer.valueOf(r6)
            r6 = 1
            r2[r6] = r5
            java.lang.String r5 = "INSTALLED_%s-%d"
            java.lang.String r5 = java.lang.String.format(r1, r5, r2)
            boolean r5 = r0.getBoolean(r5, r3)
            return r5
    }

    public final java.lang.String b(java.lang.String r4) {
            r3 = this;
            android.content.SharedPreferences r0 = r3.a
            java.lang.String r1 = java.lang.String.valueOf(r4)
            java.lang.String r2 = "HOST_IDENTITY_"
            java.lang.String r1 = r2.concat(r1)
            java.lang.String r2 = ""
            java.lang.String r0 = r0.getString(r1, r2)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "ZeusSpUtils getHostIdentity pluginPKg = "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = ", hostIdentity = "
            r1.append(r4)
            r1.append(r0)
            java.lang.String r4 = r1.toString()
            java.lang.String r1 = "Zeus/init_pangle"
            com.bytedance.pangle.log.ZeusLogger.i(r1, r4)
            return r0
    }
}
