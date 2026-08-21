package com.huawei.updatesdk.b.a.b;

class c {

    static class a {
        android.util.ArrayMap<java.lang.String, android.util.ArraySet<java.security.PublicKey>> a;
        android.util.ArraySet<java.lang.String> b;

        a() {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.a = r0
                r1.b = r0
                return
        }
    }

    static com.huawei.updatesdk.b.a.b.c.a a(java.io.File r3) {
            com.huawei.updatesdk.b.a.b.c$a r0 = new com.huawei.updatesdk.b.a.b.c$a
            r0.<init>()
            java.lang.Object r3 = b(r3)
            if (r3 == 0) goto L27
            java.lang.String r1 = "mKeySetMapping"
            java.lang.Object r1 = a(r3, r1)
            boolean r2 = r1 instanceof android.util.ArrayMap
            if (r2 == 0) goto L19
            android.util.ArrayMap r1 = (android.util.ArrayMap) r1
            r0.a = r1
        L19:
            java.lang.String r1 = "mUpgradeKeySets"
            java.lang.Object r3 = a(r3, r1)
            boolean r1 = r3 instanceof android.util.ArraySet
            if (r1 == 0) goto L27
            android.util.ArraySet r3 = (android.util.ArraySet) r3
            r0.b = r3
        L27:
            return r0
    }

    private static java.lang.Object a(java.lang.Object r2, java.lang.String r3) {
            java.lang.String r0 = "KeySetsUtils"
            java.lang.String r1 = "android.content.pm.PackageParser$Package"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.NoSuchFieldError -> L11 java.lang.IllegalAccessException -> L14 java.lang.NoSuchFieldException -> L17 java.lang.ClassNotFoundException -> L1a
            java.lang.reflect.Field r3 = r1.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldError -> L11 java.lang.IllegalAccessException -> L14 java.lang.NoSuchFieldException -> L17 java.lang.ClassNotFoundException -> L1a
            java.lang.Object r2 = r3.get(r2)     // Catch: java.lang.NoSuchFieldError -> L11 java.lang.IllegalAccessException -> L14 java.lang.NoSuchFieldException -> L17 java.lang.ClassNotFoundException -> L1a
            goto L20
        L11:
            java.lang.String r2 = "can not find field,NoSuchFieldError"
            goto L1c
        L14:
            java.lang.String r2 = "can not find field,IllegalAccessException"
            goto L1c
        L17:
            java.lang.String r2 = "can not find field,NoSuchFieldException"
            goto L1c
        L1a:
            java.lang.String r2 = "can not find class,ClassNotFoundException"
        L1c:
            com.huawei.updatesdk.a.a.c.a.a.a.c(r0, r2)
            r2 = 0
        L20:
            return r2
    }

    private static java.lang.Object b(java.io.File r8) {
            java.lang.String r0 = "KeySetsUtils"
            java.lang.String r1 = "android.content.pm.PackageParser"
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.String r2 = "parsePackage"
            r3 = 2
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Class<java.io.File> r5 = java.io.File.class
            r6 = 0
            r4[r6] = r5     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Class r5 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            r7 = 1
            r4[r7] = r5     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.reflect.Method r2 = r1.getDeclaredMethod(r2, r4)     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Object r1 = r1.newInstance()     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Object[] r3 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            r3[r6] = r8     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Integer r8 = java.lang.Integer.valueOf(r6)     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            r3[r7] = r8     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            java.lang.Object r8 = r2.invoke(r1, r3)     // Catch: java.lang.Exception -> L2e java.lang.reflect.InvocationTargetException -> L45 java.lang.IllegalAccessException -> L48 java.lang.InstantiationException -> L4b java.lang.NoSuchMethodException -> L4e java.lang.ClassNotFoundException -> L51
            goto L57
        L2e:
            r8 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "can not get PackageParser,"
            r1.append(r2)
            java.lang.String r8 = r8.getMessage()
            r1.append(r8)
            java.lang.String r8 = r1.toString()
            goto L53
        L45:
            java.lang.String r8 = "can not get PackageParser,InvocationTargetException"
            goto L53
        L48:
            java.lang.String r8 = "can not get PackageParser,IllegalAccessException"
            goto L53
        L4b:
            java.lang.String r8 = "can not get PackageParser,InstantiationException"
            goto L53
        L4e:
            java.lang.String r8 = "can not get PackageParser,NoSuchMethodException"
            goto L53
        L51:
            java.lang.String r8 = "can not get PackageParser,ClassNotFoundException"
        L53:
            com.huawei.updatesdk.a.a.c.a.a.a.c(r0, r8)
            r8 = 0
        L57:
            return r8
    }
}
