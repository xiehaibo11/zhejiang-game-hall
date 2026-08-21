package com.qq.e.comm.managers.plugin;

public class a {
    private static java.lang.reflect.Method a;
    private static boolean b;

    public static void a(java.lang.Throwable r4, java.lang.String r5) {
            r0 = 1
            java.lang.Exception r1 = new java.lang.Exception     // Catch: java.lang.Throwable -> L43
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L43
            r2.<init>()     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "插件错误："
            r2.append(r3)     // Catch: java.lang.Throwable -> L43
            r2.append(r5)     // Catch: java.lang.Throwable -> L43
            java.lang.String r5 = r2.toString()     // Catch: java.lang.Throwable -> L43
            r1.<init>(r5, r4)     // Catch: java.lang.Throwable -> L43
            boolean r4 = com.qq.e.comm.managers.plugin.a.b     // Catch: java.lang.Throwable -> L43
            if (r4 == 0) goto L1c
            goto L45
        L1c:
            java.lang.reflect.Method r4 = com.qq.e.comm.managers.plugin.a.a     // Catch: java.lang.Throwable -> L43
            r5 = 0
            if (r4 != 0) goto L38
            java.lang.String r4 = "com.tencent.bugly.crashreport.CrashReport"
            java.lang.Class r4 = java.lang.Class.forName(r4)     // Catch: java.lang.Throwable -> L43
            java.lang.Class[] r2 = new java.lang.Class[r0]     // Catch: java.lang.Throwable -> L43
            java.lang.Class<java.lang.Throwable> r3 = java.lang.Throwable.class
            r2[r5] = r3     // Catch: java.lang.Throwable -> L43
            java.lang.String r3 = "postCatchedException"
            java.lang.reflect.Method r4 = r4.getDeclaredMethod(r3, r2)     // Catch: java.lang.Throwable -> L43
            com.qq.e.comm.managers.plugin.a.a = r4     // Catch: java.lang.Throwable -> L43
            r4.setAccessible(r0)     // Catch: java.lang.Throwable -> L43
        L38:
            java.lang.reflect.Method r4 = com.qq.e.comm.managers.plugin.a.a     // Catch: java.lang.Throwable -> L43
            java.lang.Object[] r2 = new java.lang.Object[r0]     // Catch: java.lang.Throwable -> L43
            r2[r5] = r1     // Catch: java.lang.Throwable -> L43
            r5 = 0
            r4.invoke(r5, r2)     // Catch: java.lang.Throwable -> L43
            goto L45
        L43:
            com.qq.e.comm.managers.plugin.a.b = r0
        L45:
            return
    }
}
