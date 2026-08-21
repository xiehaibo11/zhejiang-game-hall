package com.huawei.updatesdk.a.a.d;

public abstract class f {
    private static final java.lang.String a = "f";

    public static java.lang.Class a(java.lang.reflect.Field r2) {
            java.lang.Class r0 = r2.getType()
            java.lang.Class<java.util.Map> r1 = java.util.Map.class
            boolean r0 = r1.isAssignableFrom(r0)
            if (r0 == 0) goto L12
            r0 = 1
        Ld:
            java.lang.Class r2 = a(r2, r0)
            goto L21
        L12:
            java.lang.Class r0 = r2.getType()
            java.lang.Class<java.util.List> r1 = java.util.List.class
            boolean r0 = r1.isAssignableFrom(r0)
            if (r0 == 0) goto L20
            r0 = 0
            goto Ld
        L20:
            r2 = 0
        L21:
            return r2
    }

    private static java.lang.Class a(java.lang.reflect.Field r2, int r3) {
            java.lang.reflect.Type r2 = r2.getGenericType()
            boolean r0 = r2 instanceof java.lang.reflect.ParameterizedType
            if (r0 == 0) goto L5d
            java.lang.reflect.ParameterizedType r2 = (java.lang.reflect.ParameterizedType) r2
            java.lang.reflect.Type[] r2 = r2.getActualTypeArguments()
            if (r2 == 0) goto L5d
            int r0 = r2.length
            if (r0 <= r3) goto L5d
            r0 = r2[r3]     // Catch: java.lang.ClassNotFoundException -> L42
            boolean r0 = r0 instanceof java.lang.Class     // Catch: java.lang.ClassNotFoundException -> L42
            if (r0 == 0) goto L1e
            r2 = r2[r3]     // Catch: java.lang.ClassNotFoundException -> L42
            java.lang.Class r2 = (java.lang.Class) r2     // Catch: java.lang.ClassNotFoundException -> L42
            goto L5e
        L1e:
            r2 = r2[r3]     // Catch: java.lang.ClassNotFoundException -> L42
            java.lang.String r2 = r2.toString()     // Catch: java.lang.ClassNotFoundException -> L42
            java.lang.String r3 = "class "
            int r3 = r2.indexOf(r3)     // Catch: java.lang.ClassNotFoundException -> L42
            if (r3 >= 0) goto L2d
            r3 = 0
        L2d:
            java.lang.String r0 = "<"
            int r0 = r2.indexOf(r0)     // Catch: java.lang.ClassNotFoundException -> L42
            if (r0 >= 0) goto L39
            int r0 = r2.length()     // Catch: java.lang.ClassNotFoundException -> L42
        L39:
            java.lang.String r2 = r2.substring(r3, r0)     // Catch: java.lang.ClassNotFoundException -> L42
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.ClassNotFoundException -> L42
            goto L5e
        L42:
            r2 = move-exception
            java.lang.String r3 = com.huawei.updatesdk.a.a.d.f.a
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "getType exception!"
            r0.append(r1)
            java.lang.String r2 = r2.getMessage()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.huawei.updatesdk.a.a.c.a.a.a.b(r3, r2)
        L5d:
            r2 = 0
        L5e:
            return r2
    }

    public static java.lang.reflect.Field[] a(java.lang.Class r6) {
            java.lang.Class r0 = r6.getSuperclass()
            if (r0 == 0) goto Lf
            java.lang.Class r0 = r6.getSuperclass()
            java.lang.reflect.Field[] r0 = a(r0)
            goto L10
        Lf:
            r0 = 0
        L10:
            java.lang.reflect.Field[] r6 = r6.getDeclaredFields()
            r1 = 0
            if (r0 == 0) goto L29
            int r2 = r0.length
            if (r2 <= 0) goto L29
            int r2 = r6.length
            int r3 = r0.length
            int r2 = r2 + r3
            java.lang.reflect.Field[] r2 = new java.lang.reflect.Field[r2]
            int r3 = r0.length
            java.lang.System.arraycopy(r0, r1, r2, r1, r3)
            int r0 = r0.length
            int r3 = r6.length
            java.lang.System.arraycopy(r6, r1, r2, r0, r3)
            r6 = r2
        L29:
            java.util.ArrayList r0 = new java.util.ArrayList
            r0.<init>()
            int r2 = r6.length
        L2f:
            if (r1 >= r2) goto L45
            r3 = r6[r1]
            java.lang.String r4 = r3.getName()
            java.lang.String r5 = "$"
            int r4 = r4.indexOf(r5)
            if (r4 >= 0) goto L42
            r0.add(r3)
        L42:
            int r1 = r1 + 1
            goto L2f
        L45:
            int r1 = r0.size()
            int r2 = r6.length
            if (r1 == r2) goto L55
            int r6 = r0.size()
            java.lang.reflect.Field[] r6 = new java.lang.reflect.Field[r6]
            r0.toArray(r6)
        L55:
            return r6
    }
}
