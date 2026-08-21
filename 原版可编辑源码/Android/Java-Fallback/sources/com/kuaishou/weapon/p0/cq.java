package com.kuaishou.weapon.p0;

public class cq {
    private static volatile boolean a = false;
    private static volatile boolean b = true;

    static {
            java.lang.String r0 = "dalvik.system.VMRuntime"
            r1 = 0
            java.lang.Class r2 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "is64Bit"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L31
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L31
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L31
            java.lang.String r3 = "getRuntime"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L31
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r3, r4)     // Catch: java.lang.Exception -> L31
            r3 = 0
            java.lang.Object[] r4 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L31
            java.lang.Object r0 = r0.invoke(r3, r4)     // Catch: java.lang.Exception -> L31
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L31
            java.lang.Object r0 = r2.invoke(r0, r3)     // Catch: java.lang.Exception -> L31
            java.lang.Boolean r0 = (java.lang.Boolean) r0     // Catch: java.lang.Exception -> L31
            boolean r0 = r0.booleanValue()     // Catch: java.lang.Exception -> L31
            com.kuaishou.weapon.p0.cq.a = r0     // Catch: java.lang.Exception -> L31
            goto L33
        L31:
            com.kuaishou.weapon.p0.cq.a = r1
        L33:
            java.lang.String r0 = "java.vm.version"
            java.lang.String r0 = java.lang.System.getProperty(r0)
            java.lang.String r1 = "2"
            boolean r0 = r0.startsWith(r1)
            com.kuaishou.weapon.p0.cq.b = r0
            return
    }

    public cq() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a() {
            boolean r0 = com.kuaishou.weapon.p0.cq.a
            return r0
    }

    public static boolean b() {
            boolean r0 = com.kuaishou.weapon.p0.cq.b
            return r0
    }
}
