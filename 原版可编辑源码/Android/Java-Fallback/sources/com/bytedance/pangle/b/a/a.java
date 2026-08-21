package com.bytedance.pangle.b.a;

public final class a {
    private static java.util.Map<java.lang.String, java.lang.reflect.Field> a;
    private static java.util.Map<java.lang.String, java.lang.reflect.Method> b;
    private static java.util.Map<java.lang.String, java.lang.reflect.Constructor> c;
    private static java.util.Map<java.lang.String, java.lang.Class> d;

    static {
            java.lang.String r0 = "Zeus/init_pangle"
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.bytedance.pangle.b.a.a.a = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.bytedance.pangle.b.a.a.b = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.bytedance.pangle.b.a.a.c = r1
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.bytedance.pangle.b.a.a.d = r1
            java.lang.Class<com.bytedance.pangle.b.a.b> r1 = com.bytedance.pangle.b.a.b.class
            java.lang.String r2 = "classLoader"
            r3 = 0
            com.bytedance.pangle.util.FieldUtils.writeField(r1, r2, r3)     // Catch: java.lang.Exception -> L2c
            java.lang.String r1 = "HackHelper HackHelperImpl use BootClassLoader"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r1)     // Catch: java.lang.Exception -> L2c
            return
        L2c:
            r1 = move-exception
            java.lang.String r2 = "HackHelperinit failed"
            com.bytedance.pangle.log.ZeusLogger.errReport(r0, r2, r1)
            return
    }

    public static java.lang.reflect.Constructor a(java.lang.Class<?> r4, java.lang.Class<?>... r5) {
            java.lang.String r0 = "clinit"
            java.lang.String r0 = b(r4, r0, r5)
            java.util.Map<java.lang.String, java.lang.reflect.Constructor> r1 = com.bytedance.pangle.b.a.a.c
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Constructor> r2 = com.bytedance.pangle.b.a.a.c     // Catch: java.lang.Throwable -> L58
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L58
            java.lang.reflect.Constructor r2 = (java.lang.reflect.Constructor) r2     // Catch: java.lang.Throwable -> L58
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L58
            r1 = 1
            if (r2 == 0) goto L1f
            boolean r4 = r2.isAccessible()
            if (r4 != 0) goto L1e
            r2.setAccessible(r1)
        L1e:
            return r2
        L1f:
            java.lang.reflect.Constructor r5 = com.bytedance.pangle.b.a.b.a(r4, r5)     // Catch: java.lang.Throwable -> L33
            if (r5 == 0) goto L32
            java.util.Map<java.lang.String, java.lang.reflect.Constructor> r2 = com.bytedance.pangle.b.a.a.c     // Catch: java.lang.Throwable -> L33
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L33
            java.util.Map<java.lang.String, java.lang.reflect.Constructor> r3 = com.bytedance.pangle.b.a.a.c     // Catch: java.lang.Throwable -> L2f
            r3.put(r0, r5)     // Catch: java.lang.Throwable -> L2f
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            goto L32
        L2f:
            r5 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2f
            throw r5     // Catch: java.lang.Throwable -> L33
        L32:
            return r5
        L33:
            r5 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "HackHelper"
            r0.<init>(r2)
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.String r4 = r4.getName()
            r1[r2] = r4
            java.lang.String r4 = "getConstructor %s failed !!!"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r0 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r0, r4, r5)
            r4 = 0
            return r4
        L58:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L58
            throw r4
    }

    public static java.lang.reflect.Field a(java.lang.Class<?> r5, java.lang.String r6) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r5.getName()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            r0.append(r6)
            java.lang.String r0 = r0.toString()
            java.util.Map<java.lang.String, java.lang.reflect.Field> r1 = com.bytedance.pangle.b.a.a.a
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Field> r2 = com.bytedance.pangle.b.a.a.a     // Catch: java.lang.Throwable -> L6d
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L6d
            java.lang.reflect.Field r2 = (java.lang.reflect.Field) r2     // Catch: java.lang.Throwable -> L6d
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            r1 = 1
            if (r2 == 0) goto L31
            boolean r5 = r2.isAccessible()
            if (r5 != 0) goto L30
            r2.setAccessible(r1)
        L30:
            return r2
        L31:
            java.lang.reflect.Field r2 = com.bytedance.pangle.b.a.b.a(r5, r6)     // Catch: java.lang.Throwable -> L45
            if (r2 == 0) goto L44
            java.util.Map<java.lang.String, java.lang.reflect.Field> r3 = com.bytedance.pangle.b.a.a.a     // Catch: java.lang.Throwable -> L45
            monitor-enter(r3)     // Catch: java.lang.Throwable -> L45
            java.util.Map<java.lang.String, java.lang.reflect.Field> r4 = com.bytedance.pangle.b.a.a.a     // Catch: java.lang.Throwable -> L41
            r4.put(r0, r2)     // Catch: java.lang.Throwable -> L41
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L41
            goto L44
        L41:
            r0 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L41
            throw r0     // Catch: java.lang.Throwable -> L45
        L44:
            return r2
        L45:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            java.lang.String r3 = "HackHelper"
            r2.<init>(r3)
            r3 = 2
            java.lang.Object[] r3 = new java.lang.Object[r3]
            r4 = 0
            java.lang.String r5 = r5.getName()
            r3[r4] = r5
            r3[r1] = r6
            java.lang.String r5 = "getField %s#%s failed !!!"
            java.lang.String r5 = java.lang.String.format(r5, r3)
            r2.append(r5)
            java.lang.String r5 = r2.toString()
            java.lang.String r6 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r6, r5, r0)
            r5 = 0
            return r5
        L6d:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L6d
            throw r5
    }

    public static java.lang.reflect.Method a(java.lang.Class<?> r4, java.lang.String r5, java.lang.Class<?>... r6) {
            java.lang.String r0 = b(r4, r5, r6)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r1 = com.bytedance.pangle.b.a.a.b
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r2 = com.bytedance.pangle.b.a.a.b     // Catch: java.lang.Throwable -> L59
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L59
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2     // Catch: java.lang.Throwable -> L59
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L59
            r1 = 1
            if (r2 == 0) goto L1d
            boolean r4 = r2.isAccessible()
            if (r4 != 0) goto L1c
            r2.setAccessible(r1)
        L1c:
            return r2
        L1d:
            java.lang.reflect.Method r6 = com.bytedance.pangle.b.a.b.a(r4, r5, r6)     // Catch: java.lang.Throwable -> L31
            if (r6 == 0) goto L30
            java.util.Map<java.lang.String, java.lang.reflect.Method> r2 = com.bytedance.pangle.b.a.a.b     // Catch: java.lang.Throwable -> L31
            monitor-enter(r2)     // Catch: java.lang.Throwable -> L31
            java.util.Map<java.lang.String, java.lang.reflect.Method> r3 = com.bytedance.pangle.b.a.a.b     // Catch: java.lang.Throwable -> L2d
            r3.put(r0, r6)     // Catch: java.lang.Throwable -> L2d
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            goto L30
        L2d:
            r6 = move-exception
            monitor-exit(r2)     // Catch: java.lang.Throwable -> L2d
            throw r6     // Catch: java.lang.Throwable -> L31
        L30:
            return r6
        L31:
            r6 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            java.lang.String r2 = "HackHelper"
            r0.<init>(r2)
            r2 = 2
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r3 = 0
            java.lang.String r4 = r4.getName()
            r2[r3] = r4
            r2[r1] = r5
            java.lang.String r4 = "getMethod %s#%s failed !!!"
            java.lang.String r4 = java.lang.String.format(r4, r2)
            r0.append(r4)
            java.lang.String r4 = r0.toString()
            java.lang.String r5 = "Zeus_pangle"
            com.bytedance.pangle.log.ZeusLogger.w(r5, r4, r6)
            r4 = 0
            return r4
        L59:
            r4 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L59
            throw r4
    }

    private static java.lang.String b(java.lang.Class<?> r3, java.lang.String r4, java.lang.Class<?>... r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = r3.getName()
            r0.append(r3)
            java.lang.String r3 = "#"
            r0.append(r3)
            r0.append(r4)
            if (r5 == 0) goto L2c
            int r4 = r5.length
            if (r4 <= 0) goto L2c
            int r4 = r5.length
            r1 = 0
        L1b:
            if (r1 >= r4) goto L35
            r2 = r5[r1]
            java.lang.String r2 = r2.getName()
            r0.append(r2)
            r0.append(r3)
            int r1 = r1 + 1
            goto L1b
        L2c:
            java.lang.Class<java.lang.Void> r3 = java.lang.Void.class
            java.lang.String r3 = r3.getName()
            r0.append(r3)
        L35:
            java.lang.String r3 = r0.toString()
            return r3
    }
}
