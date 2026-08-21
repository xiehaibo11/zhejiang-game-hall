package com.ta.utdid2.a.a;

public class g {
    public static java.lang.String get(java.lang.String r7, java.lang.String r8) {
            java.lang.String r0 = "android.os.SystemProperties"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L2a
            java.lang.String r1 = "get"
            r2 = 2
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L2a
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L2a
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r6 = 1
            r3[r6] = r4     // Catch: java.lang.Exception -> L2a
            java.lang.reflect.Method r1 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L2a
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L2a
            java.lang.Object[] r2 = new java.lang.Object[r2]     // Catch: java.lang.Exception -> L2a
            r2[r5] = r7     // Catch: java.lang.Exception -> L2a
            r2[r6] = r8     // Catch: java.lang.Exception -> L2a
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L2a
            goto L2c
        L2a:
            java.lang.String r7 = ""
        L2c:
            return r7
    }
}
