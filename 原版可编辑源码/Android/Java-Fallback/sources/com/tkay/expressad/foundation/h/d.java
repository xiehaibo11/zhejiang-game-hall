package com.tkay.expressad.foundation.h;

public class d {
    public d() {
            r0 = this;
            r0.<init>()
            return
    }

    private static void a() {
            return
    }

    public static void a(android.content.Context r7) {
            if (r7 != 0) goto L3
            return
        L3:
            java.lang.String r0 = "com.tkay.expressad.atsignalcommon.webEnvCheck.WebEnvCheckEntry"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L23
            java.lang.Object r1 = r0.newInstance()     // Catch: java.lang.Throwable -> L23
            java.lang.String r2 = "check"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L23
            java.lang.Class<android.content.Context> r5 = android.content.Context.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Throwable -> L23
            java.lang.reflect.Method r0 = r0.getMethod(r2, r4)     // Catch: java.lang.Throwable -> L23
            java.lang.Object[] r2 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L23
            r2[r6] = r7     // Catch: java.lang.Throwable -> L23
            r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L23
            return
        L23:
            r7 = move-exception
            r7.printStackTrace()
            return
    }
}
