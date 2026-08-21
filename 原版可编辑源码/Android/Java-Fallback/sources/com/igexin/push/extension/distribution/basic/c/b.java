package com.igexin.push.extension.distribution.basic.c;

public class b {
    public static final java.lang.String a = null;

    static {
            java.lang.String r0 = a()
            com.igexin.push.extension.distribution.basic.c.b.a = r0
            return
    }

    private static java.lang.String a() {
            java.lang.String r0 = "com.igexin.sdk.action.doaction"
            java.lang.Class<com.igexin.push.core.CoreConsts> r1 = com.igexin.push.core.CoreConsts.class
            java.lang.reflect.Method[] r2 = r1.getDeclaredMethods()     // Catch: java.lang.Exception -> L32
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L32
            int r3 = r2.length     // Catch: java.lang.Exception -> L32
            r4 = 0
            r5 = r4
        Lf:
            if (r5 >= r3) goto L32
            r6 = r2[r5]     // Catch: java.lang.Exception -> L32
            r7 = 1
            r6.setAccessible(r7)     // Catch: java.lang.Exception -> L32
            java.lang.Class<java.lang.Deprecated> r7 = java.lang.Deprecated.class
            boolean r7 = r6.isAnnotationPresent(r7)     // Catch: java.lang.Exception -> L32
            if (r7 == 0) goto L2f
            java.lang.Class[] r7 = r6.getParameterTypes()     // Catch: java.lang.Exception -> L32
            int r7 = r7.length     // Catch: java.lang.Exception -> L32
            if (r7 != 0) goto L2f
            java.lang.Object[] r7 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L32
            java.lang.Object r6 = r6.invoke(r1, r7)     // Catch: java.lang.Exception -> L32
            java.lang.String r6 = (java.lang.String) r6     // Catch: java.lang.Exception -> L32
            r0 = r6
        L2f:
            int r5 = r5 + 1
            goto Lf
        L32:
            return r0
    }
}
