package com.heytap.mcssdk.utils;

public class a {
    private static final java.lang.String a = "file";
    private static final java.lang.String b = "ro.crypto.type";

    public a() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.lang.String a(java.lang.String r7) {
            r0 = 0
            java.lang.String r1 = "android.os.SystemProperties"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L20
            java.lang.String r2 = "get"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L20
            java.lang.Class<java.lang.String> r5 = java.lang.String.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L20
            java.lang.reflect.Method r1 = r1.getMethod(r2, r4)     // Catch: java.lang.Exception -> L20
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L20
            r2[r6] = r7     // Catch: java.lang.Exception -> L20
            java.lang.Object r7 = r1.invoke(r0, r2)     // Catch: java.lang.Exception -> L20
            java.lang.String r7 = (java.lang.String) r7     // Catch: java.lang.Exception -> L20
            return r7
        L20:
            return r0
    }

    public static boolean a() {
            java.lang.String r0 = "ro.crypto.type"
            java.lang.String r0 = a(r0)
            java.lang.String r1 = "file"
            boolean r0 = r1.equals(r0)
            return r0
    }
}
