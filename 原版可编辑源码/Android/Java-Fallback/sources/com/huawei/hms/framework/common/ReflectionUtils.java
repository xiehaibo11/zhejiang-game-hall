package com.huawei.hms.framework.common;

public class ReflectionUtils {
    private static final java.lang.String TAG = "ReflectionUtils";



    public ReflectionUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean checkCompatible(java.lang.String r1) {
            tryLoadClass(r1)     // Catch: java.lang.Exception -> L5
            r1 = 1
            return r1
        L5:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "ClassNotFoundException"
            r0.append(r1)
            java.lang.String r1 = r0.toString()
            java.lang.String r0 = "ReflectionUtils"
            com.huawei.hms.framework.common.Logger.w(r0, r1)
            r1 = 0
            return r1
    }

    private static java.lang.Class<?> getClass(java.lang.String r1) {
            r0 = 0
            if (r1 != 0) goto L4
            return r0
        L4:
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.ClassNotFoundException -> L9
            return r1
        L9:
            return r0
    }

    public static java.lang.Object getFieldObj(java.lang.Object r3, java.lang.String r4) {
            java.lang.String r0 = "ReflectionUtils"
            r1 = 0
            if (r3 == 0) goto L33
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto Lc
            goto L33
        Lc:
            java.lang.Class r2 = r3.getClass()
            java.lang.reflect.Field r4 = r2.getDeclaredField(r4)     // Catch: java.lang.SecurityException -> L21 java.lang.NoSuchFieldException -> L25 java.lang.IllegalArgumentException -> L29 java.lang.IllegalAccessException -> L2d
            com.huawei.hms.framework.common.ReflectionUtils$1 r2 = new com.huawei.hms.framework.common.ReflectionUtils$1     // Catch: java.lang.SecurityException -> L21 java.lang.NoSuchFieldException -> L25 java.lang.IllegalArgumentException -> L29 java.lang.IllegalAccessException -> L2d
            r2.<init>(r4)     // Catch: java.lang.SecurityException -> L21 java.lang.NoSuchFieldException -> L25 java.lang.IllegalArgumentException -> L29 java.lang.IllegalAccessException -> L2d
            java.security.AccessController.doPrivileged(r2)     // Catch: java.lang.SecurityException -> L21 java.lang.NoSuchFieldException -> L25 java.lang.IllegalArgumentException -> L29 java.lang.IllegalAccessException -> L2d
            java.lang.Object r1 = r4.get(r3)     // Catch: java.lang.SecurityException -> L21 java.lang.NoSuchFieldException -> L25 java.lang.IllegalArgumentException -> L29 java.lang.IllegalAccessException -> L2d
            goto L33
        L21:
            r3 = move-exception
            java.lang.String r4 = "not security int method getStaticFieldObj,SecurityException:"
            goto L30
        L25:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: NoSuchFieldException:"
            goto L30
        L29:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: IllegalArgumentException:"
            goto L30
        L2d:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: IllegalAccessException:"
        L30:
            com.huawei.hms.framework.common.Logger.e(r0, r4, r3)
        L33:
            return r1
    }

    private static java.lang.reflect.Method getMethod(java.lang.Class<?> r2, java.lang.String r3, java.lang.Class<?>... r4) {
            r0 = 0
            java.lang.String r1 = "ReflectionUtils"
            if (r2 == 0) goto L18
            if (r3 != 0) goto L8
            goto L18
        L8:
            java.lang.reflect.Method r2 = r2.getDeclaredMethod(r3, r4)     // Catch: java.lang.NoSuchMethodException -> Ld java.lang.SecurityException -> L11
            return r2
        Ld:
            r2 = move-exception
            java.lang.String r3 = "NoSuchMethodException:"
            goto L14
        L11:
            r2 = move-exception
            java.lang.String r3 = "SecurityException:"
        L14:
            com.huawei.hms.framework.common.Logger.e(r1, r3, r2)
            return r0
        L18:
            java.lang.String r2 = "targetClass is  null pr name is null:"
            com.huawei.hms.framework.common.Logger.w(r1, r2)
            return r0
    }

    public static java.lang.Object getStaticFieldObj(java.lang.String r3, java.lang.String r4) {
            java.lang.String r0 = "ReflectionUtils"
            r1 = 0
            if (r3 != 0) goto L6
            return r1
        L6:
            java.lang.Class r3 = getClass(r3)
            if (r3 == 0) goto L36
            boolean r2 = android.text.TextUtils.isEmpty(r4)
            if (r2 == 0) goto L13
            goto L36
        L13:
            java.lang.reflect.Field r4 = r3.getDeclaredField(r4)     // Catch: java.lang.SecurityException -> L24 java.lang.NoSuchFieldException -> L28 java.lang.IllegalArgumentException -> L2c java.lang.IllegalAccessException -> L30
            com.huawei.hms.framework.common.ReflectionUtils$2 r2 = new com.huawei.hms.framework.common.ReflectionUtils$2     // Catch: java.lang.SecurityException -> L24 java.lang.NoSuchFieldException -> L28 java.lang.IllegalArgumentException -> L2c java.lang.IllegalAccessException -> L30
            r2.<init>(r4)     // Catch: java.lang.SecurityException -> L24 java.lang.NoSuchFieldException -> L28 java.lang.IllegalArgumentException -> L2c java.lang.IllegalAccessException -> L30
            java.security.AccessController.doPrivileged(r2)     // Catch: java.lang.SecurityException -> L24 java.lang.NoSuchFieldException -> L28 java.lang.IllegalArgumentException -> L2c java.lang.IllegalAccessException -> L30
            java.lang.Object r1 = r4.get(r3)     // Catch: java.lang.SecurityException -> L24 java.lang.NoSuchFieldException -> L28 java.lang.IllegalArgumentException -> L2c java.lang.IllegalAccessException -> L30
            goto L36
        L24:
            r3 = move-exception
            java.lang.String r4 = "not security int method getStaticFieldObj,SecurityException:"
            goto L33
        L28:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: NoSuchFieldException:"
            goto L33
        L2c:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: IllegalArgumentException:"
            goto L33
        L30:
            r3 = move-exception
            java.lang.String r4 = "Exception in getFieldObj :: IllegalAccessException:"
        L33:
            com.huawei.hms.framework.common.Logger.e(r0, r4, r3)
        L36:
            return r1
    }

    private static java.lang.Object invoke(java.lang.Object r2, java.lang.reflect.Method r3, java.lang.Object... r4) {
            java.lang.String r0 = "ReflectionUtils"
            r1 = 0
            if (r3 != 0) goto L6
            return r1
        L6:
            java.lang.Object r2 = r3.invoke(r2, r4)     // Catch: java.lang.Exception -> Lb java.lang.RuntimeException -> Lf
            return r2
        Lb:
            r2 = move-exception
            java.lang.String r3 = "Exception in invoke:"
            goto L12
        Lf:
            r2 = move-exception
            java.lang.String r3 = "RuntimeException in invoke:"
        L12:
            com.huawei.hms.framework.common.Logger.e(r0, r3, r2)
            return r1
    }

    public static java.lang.Object invokeStaticMethod(java.lang.String r0, java.lang.String r1, java.lang.Class<?>[] r2, java.lang.Object... r3) {
            java.lang.Class r0 = getClass(r0)
            java.lang.reflect.Method r0 = getMethod(r0, r1, r2)
            r1 = 0
            if (r0 != 0) goto Lc
            return r1
        Lc:
            java.lang.Object r0 = invoke(r1, r0, r3)
            return r0
    }

    public static java.lang.Object invokeStaticMethod(java.lang.String r5, java.lang.String r6, java.lang.Object... r7) {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            if (r7 == 0) goto L14
            int r1 = r7.length
            java.lang.Class[] r2 = new java.lang.Class[r1]
            r3 = 0
        La:
            if (r3 >= r1) goto L15
            r4 = r7[r3]
            setClassType(r2, r4, r3)
            int r3 = r3 + 1
            goto La
        L14:
            r2 = r0
        L15:
            java.lang.Class r5 = getClass(r5)
            java.lang.reflect.Method r5 = getMethod(r5, r6, r2)
            if (r5 != 0) goto L20
            return r0
        L20:
            java.lang.Object r5 = invoke(r0, r5, r7)
            return r5
    }

    private static void setClassType(java.lang.Class<?>[] r1, java.lang.Object r2, int r3) {
            boolean r0 = r2 instanceof java.lang.Integer
            if (r0 == 0) goto L9
            java.lang.Class r2 = java.lang.Integer.TYPE
            r1[r3] = r2
            goto L57
        L9:
            boolean r0 = r2 instanceof java.lang.Long
            if (r0 == 0) goto L12
            java.lang.Class r2 = java.lang.Long.TYPE
            r1[r3] = r2
            goto L57
        L12:
            boolean r0 = r2 instanceof java.lang.Double
            if (r0 == 0) goto L1b
            java.lang.Class r2 = java.lang.Double.TYPE
            r1[r3] = r2
            goto L57
        L1b:
            boolean r0 = r2 instanceof java.lang.Float
            if (r0 == 0) goto L24
            java.lang.Class r2 = java.lang.Float.TYPE
            r1[r3] = r2
            goto L57
        L24:
            boolean r0 = r2 instanceof java.lang.Boolean
            if (r0 == 0) goto L2d
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r1[r3] = r2
            goto L57
        L2d:
            boolean r0 = r2 instanceof java.lang.Character
            if (r0 == 0) goto L36
            java.lang.Class r2 = java.lang.Character.TYPE
            r1[r3] = r2
            goto L57
        L36:
            boolean r0 = r2 instanceof java.lang.Byte
            if (r0 == 0) goto L3f
            java.lang.Class r2 = java.lang.Byte.TYPE
            r1[r3] = r2
            goto L57
        L3f:
            boolean r0 = r2 instanceof java.lang.Void
            if (r0 == 0) goto L48
            java.lang.Class r2 = java.lang.Void.TYPE
            r1[r3] = r2
            goto L57
        L48:
            boolean r0 = r2 instanceof java.lang.Short
            if (r0 == 0) goto L51
            java.lang.Class r2 = java.lang.Short.TYPE
            r1[r3] = r2
            goto L57
        L51:
            java.lang.Class r2 = r2.getClass()
            r1[r3] = r2
        L57:
            return
    }

    private static void tryLoadClass(java.lang.String r1) {
            java.lang.Class<com.huawei.hms.framework.common.ReflectionUtils> r0 = com.huawei.hms.framework.common.ReflectionUtils.class
            java.lang.ClassLoader r0 = r0.getClassLoader()
            if (r0 == 0) goto Lc
            r0.loadClass(r1)
            return
        Lc:
            java.lang.ClassNotFoundException r1 = new java.lang.ClassNotFoundException
            java.lang.String r0 = "not found classloader"
            r1.<init>(r0)
            throw r1
    }
}
