package com.bytedance.pangle.b.b;

public final class a {
    private static java.lang.reflect.Method a;
    private static java.lang.reflect.Method b;
    private static java.lang.reflect.Method c;
    private static java.lang.reflect.Method d;

    static {
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "getDeclaredField"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L48
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L48
            com.bytedance.pangle.b.b.a.a = r0     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "getDeclaredMethod"
            r3 = 2
            java.lang.Class[] r3 = new java.lang.Class[r3]     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.String> r4 = java.lang.String.class
            r3[r5] = r4     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
            r3[r2] = r4     // Catch: java.lang.Throwable -> L48
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L48
            com.bytedance.pangle.b.b.a.b = r0     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "getDeclaredConstructor"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.Class[]> r4 = java.lang.Class[].class
            r3[r5] = r4     // Catch: java.lang.Throwable -> L48
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r3)     // Catch: java.lang.Throwable -> L48
            com.bytedance.pangle.b.b.a.c = r0     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.Class> r0 = java.lang.Class.class
            java.lang.String r1 = "forName"
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L48
            java.lang.Class<java.lang.String> r3 = java.lang.String.class
            r2[r5] = r3     // Catch: java.lang.Throwable -> L48
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)     // Catch: java.lang.Throwable -> L48
            com.bytedance.pangle.b.b.a.d = r0     // Catch: java.lang.Throwable -> L48
            return
        L48:
            r0 = move-exception
            java.lang.String r1 = "Zeus/init_pangle"
            java.lang.String r2 = "DoubleReflectorinit failed"
            com.bytedance.pangle.log.ZeusLogger.errReport(r1, r2, r0)
            return
    }

    public static java.lang.reflect.Constructor a(java.lang.Class<?> r6, java.lang.Class<?>... r7) {
            java.lang.reflect.Method r0 = com.bytedance.pangle.b.b.a.c
            if (r0 == 0) goto L3a
            r1 = 0
            r2 = 1
            java.lang.Object[] r3 = new java.lang.Object[r2]     // Catch: java.lang.Throwable -> L11
            r3[r1] = r7     // Catch: java.lang.Throwable -> L11
            java.lang.Object r0 = r0.invoke(r6, r3)     // Catch: java.lang.Throwable -> L11
            java.lang.reflect.Constructor r0 = (java.lang.reflect.Constructor) r0     // Catch: java.lang.Throwable -> L11
            goto L3b
        L11:
            r0 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "DoubleReflector"
            r3.<init>(r4)
            r4 = 2
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.String r5 = r6.getName()
            r4[r1] = r5
            java.lang.Integer r1 = java.lang.Integer.valueOf(r2)
            r4[r2] = r1
            java.lang.String r1 = "getConstructor %s<init>%s failed !!!"
            java.lang.String r1 = java.lang.String.format(r1, r4)
            r3.append(r1)
            java.lang.String r1 = r3.toString()
            java.lang.String r2 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r2, r1, r0)
        L3a:
            r0 = 0
        L3b:
            if (r0 == 0) goto L3e
            return r0
        L3e:
            java.lang.reflect.Constructor r6 = com.bytedance.pangle.b.a.a.a(r6, r7)
            return r6
    }

    public static java.lang.reflect.Field a(java.lang.Class<?> r8, java.lang.String r9) {
            java.lang.reflect.Method r0 = com.bytedance.pangle.b.b.a.a
            r1 = 0
            if (r0 == 0) goto L42
            r2 = 0
            r3 = 1
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L19
            r4[r2] = r9     // Catch: java.lang.Throwable -> L19
            java.lang.Object r0 = r0.invoke(r8, r4)     // Catch: java.lang.Throwable -> L19
            java.lang.reflect.Field r0 = (java.lang.reflect.Field) r0     // Catch: java.lang.Throwable -> L19
            if (r0 == 0) goto L41
            r0.setAccessible(r3)     // Catch: java.lang.Throwable -> L17
            goto L41
        L17:
            r1 = move-exception
            goto L1d
        L19:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
        L1d:
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "DoubleReflector"
            r4.<init>(r5)
            r5 = 2
            java.lang.Object[] r5 = new java.lang.Object[r5]
            java.lang.String r6 = r8.getName()
            r5[r2] = r6
            r5[r3] = r9
            java.lang.String r2 = "getField %s#%s failed !!!"
            java.lang.String r2 = java.lang.String.format(r2, r5)
            r4.append(r2)
            java.lang.String r2 = r4.toString()
            java.lang.String r3 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r3, r2, r1)
        L41:
            r1 = r0
        L42:
            if (r1 == 0) goto L45
            return r1
        L45:
            java.lang.reflect.Field r8 = com.bytedance.pangle.b.a.a.a(r8, r9)
            return r8
    }

    public static java.lang.reflect.Method a(java.lang.Class<?> r8, java.lang.String r9, java.lang.Class<?>... r10) {
            java.lang.reflect.Method r0 = com.bytedance.pangle.b.b.a.b
            r1 = 0
            if (r0 == 0) goto L44
            r2 = 0
            r3 = 2
            r4 = 1
            java.lang.Object[] r5 = new java.lang.Object[r3]     // Catch: java.lang.Throwable -> L1c
            r5[r2] = r9     // Catch: java.lang.Throwable -> L1c
            r5[r4] = r10     // Catch: java.lang.Throwable -> L1c
            java.lang.Object r0 = r0.invoke(r8, r5)     // Catch: java.lang.Throwable -> L1c
            java.lang.reflect.Method r0 = (java.lang.reflect.Method) r0     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L43
            r0.setAccessible(r4)     // Catch: java.lang.Throwable -> L1a
            goto L43
        L1a:
            r1 = move-exception
            goto L20
        L1c:
            r0 = move-exception
            r7 = r1
            r1 = r0
            r0 = r7
        L20:
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            java.lang.String r6 = "DoubleReflector"
            r5.<init>(r6)
            java.lang.Object[] r3 = new java.lang.Object[r3]
            java.lang.String r6 = r8.getName()
            r3[r2] = r6
            r3[r4] = r9
            java.lang.String r2 = "getMethod %s#%s failed !!!"
            java.lang.String r2 = java.lang.String.format(r2, r3)
            r5.append(r2)
            java.lang.String r2 = r5.toString()
            java.lang.String r3 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r3, r2, r1)
        L43:
            r1 = r0
        L44:
            if (r1 == 0) goto L47
            return r1
        L47:
            java.lang.reflect.Method r8 = com.bytedance.pangle.b.a.a.a(r8, r9, r10)
            return r8
    }
}
