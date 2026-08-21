package com.kuaishou.weapon.p0;

public class dh {
    public dh() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.Object a(java.lang.Class<?> r0, java.lang.Object r1, java.lang.String r2) {
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)
            r2 = 1
            r0.setAccessible(r2)
            java.lang.Object r0 = r0.get(r1)
            return r0
    }

    private static java.lang.Object a(java.lang.Class<?> r3, java.lang.Object r4, java.lang.String r5, java.lang.Object... r6) {
            if (r6 == 0) goto L14
            int r0 = r6.length
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
        L6:
            int r2 = r6.length
            if (r1 >= r2) goto L15
            r2 = r6[r1]
            java.lang.Class r2 = r2.getClass()
            r0[r1] = r2
            int r1 = r1 + 1
            goto L6
        L14:
            r0 = 0
        L15:
            java.lang.reflect.Method r3 = r3.getDeclaredMethod(r5, r0)
            r5 = 1
            r3.setAccessible(r5)
            java.lang.Object r3 = r3.invoke(r4, r6)
            return r3
    }

    public static java.lang.Object a(java.lang.String r0, java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.Object r0 = a(r0, r1, r2, r3)
            return r0
    }

    public static java.lang.Object a(java.lang.String r1, java.lang.String r2) {
            java.lang.Class r1 = java.lang.Class.forName(r1)
            r0 = 0
            java.lang.Object r1 = a(r1, r0, r2)
            return r1
    }

    public static java.lang.reflect.Method a(java.lang.Class r4, java.lang.String r5, java.lang.Object... r6) {
            r0 = 0
            if (r6 == 0) goto L15
            int r1 = r6.length     // Catch: java.lang.Exception -> L1b
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1b
            r2 = 0
        L7:
            int r3 = r6.length     // Catch: java.lang.Exception -> L1b
            if (r2 >= r3) goto L16
            r3 = r6[r2]     // Catch: java.lang.Exception -> L1b
            java.lang.Class r3 = r3.getClass()     // Catch: java.lang.Exception -> L1b
            r1[r2] = r3     // Catch: java.lang.Exception -> L1b
            int r2 = r2 + 1
            goto L7
        L15:
            r1 = r0
        L16:
            java.lang.reflect.Method r4 = r4.getDeclaredMethod(r5, r1)     // Catch: java.lang.Exception -> L1b
            return r4
        L1b:
            return r0
    }
}
