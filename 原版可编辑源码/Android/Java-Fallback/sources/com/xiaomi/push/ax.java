package com.xiaomi.push;

class ax {
    private static volatile boolean a;

    static {
            return
    }

    private static void a(java.lang.Class<?> r5, android.content.Context r6) {
            boolean r0 = com.xiaomi.push.ax.a
            if (r0 != 0) goto L31
            r0 = 1
            com.xiaomi.push.ax.a = r0     // Catch: java.lang.Throwable -> L1c
            java.lang.String r1 = "InitEntry"
            java.lang.Class[] r2 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L1c
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Throwable -> L1c
            java.lang.reflect.Method r1 = r5.getDeclaredMethod(r1, r2)     // Catch: java.lang.Throwable -> L1c
            java.lang.Object[] r0 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L1c
            r0[r4] = r6     // Catch: java.lang.Throwable -> L1c
            r1.invoke(r5, r0)     // Catch: java.lang.Throwable -> L1c
            goto L31
        L1c:
            r5 = move-exception
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = "mdid:load lib error "
            r6.append(r0)
            r6.append(r5)
            java.lang.String r5 = r6.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r5)
        L31:
            return
    }

    public static boolean a(android.content.Context r2) {
            java.lang.String r0 = "com.bun.miitmdid.core.JLibrary"
            java.lang.Class r0 = com.xiaomi.push.v.a(r2, r0)     // Catch: java.lang.Throwable -> Ld
            if (r0 == 0) goto L22
            a(r0, r2)     // Catch: java.lang.Throwable -> Ld
            r2 = 1
            return r2
        Ld:
            r2 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mdid:check error "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
        L22:
            r2 = 0
            return r2
    }
}
