package com.xiaomi.push;

public class u {
    public static java.lang.String a(java.lang.String r8, java.lang.String r9) {
            java.lang.String r0 = "android.os.SystemProperties"
            r1 = 0
            java.lang.Class r0 = com.xiaomi.push.v.a(r1, r0)     // Catch: java.lang.Exception -> L27
            java.lang.String r2 = "get"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L27
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L27
            java.lang.reflect.Method r0 = r0.getMethod(r2, r4)     // Catch: java.lang.Exception -> L27
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L27
            r2[r6] = r8     // Catch: java.lang.Exception -> L27
            r2[r7] = r9     // Catch: java.lang.Exception -> L27
            java.lang.Object r8 = r0.invoke(r1, r2)     // Catch: java.lang.Exception -> L27
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Exception -> L27
            return r8
        L27:
            r8 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "SystemProperties.get: "
            r0.append(r1)
            r0.append(r8)
            java.lang.String r8 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r8)
            return r9
    }
}
