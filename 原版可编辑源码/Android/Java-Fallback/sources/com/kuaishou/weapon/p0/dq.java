package com.kuaishou.weapon.p0;

public class dq {
    public dq() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.reflect.Field a(java.lang.Object r3, java.lang.String r4) {
            java.lang.Class r0 = r3.getClass()
        L4:
            if (r0 == 0) goto L1a
            java.lang.reflect.Field r1 = r0.getDeclaredField(r4)     // Catch: java.lang.Exception -> L15
            boolean r2 = r1.isAccessible()     // Catch: java.lang.Exception -> L15
            if (r2 != 0) goto L14
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.Exception -> L15
        L14:
            return r1
        L15:
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L1a:
            java.lang.NoSuchFieldException r0 = new java.lang.NoSuchFieldException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Field "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " not found in "
            r1.append(r4)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static java.lang.reflect.Method a(java.lang.Object r3, java.lang.String r4, java.lang.Class<?>... r5) {
            java.lang.Class r0 = r3.getClass()
        L4:
            if (r0 == 0) goto L1a
            java.lang.reflect.Method r1 = r0.getDeclaredMethod(r4, r5)     // Catch: java.lang.NoSuchMethodException -> L15
            boolean r2 = r1.isAccessible()     // Catch: java.lang.NoSuchMethodException -> L15
            if (r2 != 0) goto L14
            r2 = 1
            r1.setAccessible(r2)     // Catch: java.lang.NoSuchMethodException -> L15
        L14:
            return r1
        L15:
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L1a:
            java.lang.NoSuchMethodException r0 = new java.lang.NoSuchMethodException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Method "
            r1.<init>(r2)
            r1.append(r4)
            java.lang.String r4 = " with parameters "
            r1.append(r4)
            java.util.List r4 = java.util.Arrays.asList(r5)
            r1.append(r4)
            java.lang.String r4 = " not found in "
            r1.append(r4)
            java.lang.Class r3 = r3.getClass()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public static java.lang.reflect.Field b(java.lang.Object r5, java.lang.String r6) {
            java.lang.Class r0 = r5.getClass()
        L4:
            if (r0 == 0) goto L2e
            java.lang.reflect.Field r1 = r0.getDeclaredField(r6)     // Catch: java.lang.Exception -> L29
            java.lang.Class<java.lang.reflect.Field> r2 = java.lang.reflect.Field.class
            java.lang.String r3 = "modifiers"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.Exception -> L29
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Exception -> L29
            int r4 = r1.getModifiers()     // Catch: java.lang.Exception -> L29
            r4 = r4 & (-17)
            r2.setInt(r1, r4)     // Catch: java.lang.Exception -> L29
            boolean r2 = r1.isAccessible()     // Catch: java.lang.Exception -> L29
            if (r2 != 0) goto L28
            r1.setAccessible(r3)     // Catch: java.lang.Exception -> L29
        L28:
            return r1
        L29:
            java.lang.Class r0 = r0.getSuperclass()
            goto L4
        L2e:
            java.lang.NoSuchFieldException r0 = new java.lang.NoSuchFieldException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "Field "
            r1.<init>(r2)
            r1.append(r6)
            java.lang.String r6 = " not found in "
            r1.append(r6)
            java.lang.Class r5 = r5.getClass()
            r1.append(r5)
            java.lang.String r5 = r1.toString()
            r0.<init>(r5)
            throw r0
    }
}
