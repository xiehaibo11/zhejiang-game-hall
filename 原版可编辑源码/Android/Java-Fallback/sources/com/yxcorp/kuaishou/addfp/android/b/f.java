package com.yxcorp.kuaishou.addfp.android.b;

public class f {
    private static java.lang.Object a;
    private static java.lang.reflect.Method b;
    public static final int c = 0;

    static {
            int r0 = android.os.Build.VERSION.SDK_INT
            r1 = 28
            if (r0 < r1) goto L62
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "forName"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L62
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L62
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L62
            java.lang.Class<java.lang.Class> r1 = java.lang.Class.class
            java.lang.String r3 = "getDeclaredMethod"
            r4 = 2
            java.lang.Class[] r6 = new java.lang.Class[r4]     // Catch: java.lang.Throwable -> L62
            java.lang.Class<java.lang.String> r7 = java.lang.String.class
            r6[r5] = r7     // Catch: java.lang.Throwable -> L62
            java.lang.Class<java.lang.Class[]> r7 = java.lang.Class[].class
            r6[r2] = r7     // Catch: java.lang.Throwable -> L62
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r6)     // Catch: java.lang.Throwable -> L62
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L62
            java.lang.String r6 = "dalvik.system.VMRuntime"
            r3[r5] = r6     // Catch: java.lang.Throwable -> L62
            r6 = 0
            java.lang.Object r0 = r0.invoke(r6, r3)     // Catch: java.lang.Throwable -> L62
            java.lang.Class r0 = (java.lang.Class) r0     // Catch: java.lang.Throwable -> L62
            java.lang.Object[] r3 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L62
            java.lang.String r7 = "getRuntime"
            r3[r5] = r7     // Catch: java.lang.Throwable -> L62
            r3[r2] = r6     // Catch: java.lang.Throwable -> L62
            java.lang.Object r3 = r1.invoke(r0, r3)     // Catch: java.lang.Throwable -> L62
            java.lang.reflect.Method r3 = (java.lang.reflect.Method) r3     // Catch: java.lang.Throwable -> L62
            java.lang.Object[] r4 = new java.lang.Object[r4]     // Catch: java.lang.Throwable -> L62
            java.lang.String r7 = "setHiddenApiExemptions"
            r4[r5] = r7     // Catch: java.lang.Throwable -> L62
            java.lang.Class[] r7 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L62
            java.lang.Class<java.lang.String[]> r8 = java.lang.String[].class
            r7[r5] = r8     // Catch: java.lang.Throwable -> L62
            r4[r2] = r7     // Catch: java.lang.Throwable -> L62
            java.lang.Object r0 = r1.invoke(r0, r4)     // Catch: java.lang.Throwable -> L62
            java.lang.reflect.Method r0 = (java.lang.reflect.Method) r0     // Catch: java.lang.Throwable -> L62
            com.yxcorp.kuaishou.addfp.android.b.f.b = r0     // Catch: java.lang.Throwable -> L62
            java.lang.Object[] r0 = new java.lang.Object[r5]     // Catch: java.lang.Throwable -> L62
            java.lang.Object r0 = r3.invoke(r6, r0)     // Catch: java.lang.Throwable -> L62
            com.yxcorp.kuaishou.addfp.android.b.f.a = r0     // Catch: java.lang.Throwable -> L62
        L62:
            return
    }

    public static boolean a() {
            java.lang.String r0 = "L"
            java.lang.String[] r0 = new java.lang.String[]{r0}
            java.lang.Object r1 = com.yxcorp.kuaishou.addfp.android.b.f.a
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L18
            java.lang.reflect.Method r4 = com.yxcorp.kuaishou.addfp.android.b.f.b
            if (r4 == 0) goto L18
            java.lang.Object[] r5 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L18
            r5[r3] = r0     // Catch: java.lang.Throwable -> L18
            r4.invoke(r1, r5)     // Catch: java.lang.Throwable -> L18
            goto L19
        L18:
            r2 = r3
        L19:
            return r2
    }
}
