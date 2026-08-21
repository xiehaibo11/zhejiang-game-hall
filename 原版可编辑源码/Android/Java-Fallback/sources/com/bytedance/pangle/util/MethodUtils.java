package com.bytedance.pangle.util;

public class MethodUtils {
    public static final java.lang.Class<?>[] EMPTY_CLASS_ARRAY = null;
    private static java.util.Map<java.lang.String, java.lang.reflect.Method> sMethodCache;
    private static final java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> sPrimitiveToWrapperMap = null;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.util.MethodUtils.sMethodCache = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap = r0
            java.lang.Class r1 = java.lang.Boolean.TYPE
            java.lang.Class<java.lang.Boolean> r2 = java.lang.Boolean.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Byte.TYPE
            java.lang.Class<java.lang.Byte> r2 = java.lang.Byte.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Character.TYPE
            java.lang.Class<java.lang.Character> r2 = java.lang.Character.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Short.TYPE
            java.lang.Class<java.lang.Short> r2 = java.lang.Short.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Integer.TYPE
            java.lang.Class<java.lang.Integer> r2 = java.lang.Integer.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Long.TYPE
            java.lang.Class<java.lang.Long> r2 = java.lang.Long.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Double.TYPE
            java.lang.Class<java.lang.Double> r2 = java.lang.Double.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Float.TYPE
            java.lang.Class<java.lang.Float> r2 = java.lang.Float.class
            r0.put(r1, r2)
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Class r1 = java.lang.Void.TYPE
            java.lang.Class<java.lang.Void> r2 = java.lang.Void.class
            r0.put(r1, r2)
            r0 = 0
            java.lang.Class[] r0 = new java.lang.Class[r0]
            com.bytedance.pangle.util.MethodUtils.EMPTY_CLASS_ARRAY = r0
            return
    }

    public MethodUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.reflect.Method getAccessibleMethod(java.lang.Class<?> r13, java.lang.String r14, java.lang.Class<?>... r15) {
            java.lang.String r0 = getKey(r13, r14, r15)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r1 = com.bytedance.pangle.util.MethodUtils.sMethodCache
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r2 = com.bytedance.pangle.util.MethodUtils.sMethodCache     // Catch: java.lang.Throwable -> L7a
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L7a
            java.lang.reflect.Method r2 = (java.lang.reflect.Method) r2     // Catch: java.lang.Throwable -> L7a
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7a
            r1 = 1
            if (r2 == 0) goto L1d
            boolean r13 = r2.isAccessible()
            if (r13 != 0) goto L1c
            r2.setAccessible(r1)
        L1c:
            return r2
        L1d:
            if (r13 == 0) goto L78
            java.lang.reflect.Method r2 = r13.getDeclaredMethod(r14, r15)     // Catch: java.lang.NoSuchMethodException -> L23
        L23:
            if (r2 != 0) goto L61
            java.lang.reflect.Method[] r3 = r13.getDeclaredMethods()     // Catch: java.lang.Throwable -> L61
            int r4 = r3.length     // Catch: java.lang.Throwable -> L61
            r5 = 0
            r6 = r5
        L2c:
            if (r6 >= r4) goto L61
            r7 = r3[r6]     // Catch: java.lang.Throwable -> L61
            if (r7 == 0) goto L5e
            java.lang.String r8 = r7.getName()     // Catch: java.lang.Throwable -> L61
            boolean r8 = android.text.TextUtils.equals(r8, r14)     // Catch: java.lang.Throwable -> L61
            if (r8 == 0) goto L5e
            java.lang.Class[] r8 = r7.getParameterTypes()     // Catch: java.lang.Throwable -> L61
            if (r15 == 0) goto L5e
            if (r8 == 0) goto L5e
            int r9 = r15.length     // Catch: java.lang.Throwable -> L61
            int r10 = r8.length     // Catch: java.lang.Throwable -> L61
            if (r9 != r10) goto L5e
            r10 = r1
            r9 = r5
        L4a:
            int r11 = r15.length     // Catch: java.lang.Throwable -> L61
            if (r9 >= r11) goto L5b
            r11 = r15[r9]     // Catch: java.lang.Throwable -> L61
            r12 = r8[r9]     // Catch: java.lang.Throwable -> L61
            boolean r11 = isAssignableFrom(r11, r12)     // Catch: java.lang.Throwable -> L61
            if (r11 != 0) goto L58
            r10 = r5
        L58:
            int r9 = r9 + 1
            goto L4a
        L5b:
            if (r10 == 0) goto L5e
            r2 = r7
        L5e:
            int r6 = r6 + 1
            goto L2c
        L61:
            if (r2 == 0) goto L73
            r2.setAccessible(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r3 = com.bytedance.pangle.util.MethodUtils.sMethodCache
            monitor-enter(r3)
            java.util.Map<java.lang.String, java.lang.reflect.Method> r13 = com.bytedance.pangle.util.MethodUtils.sMethodCache     // Catch: java.lang.Throwable -> L70
            r13.put(r0, r2)     // Catch: java.lang.Throwable -> L70
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L70
            return r2
        L70:
            r13 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L70
            throw r13
        L73:
            java.lang.Class r13 = r13.getSuperclass()
            goto L1d
        L78:
            r13 = 0
            return r13
        L7a:
            r13 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L7a
            throw r13
    }

    private static java.lang.String getKey(java.lang.Class<?> r3, java.lang.String r4, java.lang.Class<?>... r5) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r3.toString()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            r0.append(r4)
            r0.append(r1)
            java.lang.ClassLoader r4 = r3.getClassLoader()
            if (r4 == 0) goto L2a
            java.lang.ClassLoader r3 = r3.getClassLoader()
            int r3 = r3.hashCode()
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            goto L2c
        L2a:
            java.lang.String r3 = ""
        L2c:
            r0.append(r3)
            if (r5 == 0) goto L47
            int r3 = r5.length
            if (r3 <= 0) goto L47
            int r3 = r5.length
            r4 = 0
        L36:
            if (r4 >= r3) goto L50
            r2 = r5[r4]
            java.lang.String r2 = r2.toString()
            r0.append(r2)
            r0.append(r1)
            int r4 = r4 + 1
            goto L36
        L47:
            java.lang.Class<java.lang.Void> r3 = java.lang.Void.class
            java.lang.String r3 = r3.toString()
            r0.append(r3)
        L50:
            java.lang.String r3 = r0.toString()
            return r3
    }

    public static <T> java.lang.reflect.Constructor<T> getMatchingAccessibleConstructor(java.lang.Class<T> r0, java.lang.Class<?>... r1) {
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r1)     // Catch: java.lang.NoSuchMethodException -> Lf
            boolean r1 = r0.isAccessible()     // Catch: java.lang.NoSuchMethodException -> Lf
            if (r1 != 0) goto Le
            r1 = 1
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchMethodException -> Lf
        Le:
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static <T> T invokeConstructor(java.lang.Class<T> r0, java.lang.Object[] r1, java.lang.Class<?>[] r2) {
            java.lang.reflect.Constructor r0 = getMatchingAccessibleConstructor(r0, r2)
            if (r0 == 0) goto Lb
            java.lang.Object r0 = r0.newInstance(r1)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.lang.Object invokeMethod(java.lang.Object r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class[] r0 = toClass(r3)
            java.lang.Object r1 = invokeMethod(r1, r2, r3, r0)
            return r1
    }

    public static java.lang.Object invokeMethod(java.lang.Object r1, java.lang.String r2, java.lang.Object[] r3, java.lang.Class<?>[] r4) {
            java.lang.Class r0 = r1.getClass()
            java.lang.reflect.Method r4 = getAccessibleMethod(r0, r2, r4)
            if (r4 == 0) goto Lf
            java.lang.Object r1 = r4.invoke(r1, r3)
            return r1
        Lf:
            java.lang.NoSuchMethodException r1 = new java.lang.NoSuchMethodException
            r1.<init>(r2)
            throw r1
    }

    public static java.lang.Object invokeStaticMethod(java.lang.Class r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class[] r0 = toClass(r3)
            java.lang.Object r1 = invokeStaticMethod(r1, r2, r3, r0)
            return r1
    }

    public static java.lang.Object invokeStaticMethod(java.lang.Class r0, java.lang.String r1, java.lang.Object[] r2, java.lang.Class<?>[] r3) {
            java.lang.reflect.Method r0 = getAccessibleMethod(r0, r1, r3)
            r1 = 0
            if (r0 == 0) goto Lc
            java.lang.Object r0 = r0.invoke(r1, r2)
            return r0
        Lc:
            return r1
    }

    public static boolean isAssignableFrom(java.lang.Class<?> r1, java.lang.Class<?> r2) {
            r0 = 0
            if (r2 != 0) goto L4
            return r0
        L4:
            if (r1 != 0) goto Lf
            boolean r1 = r2.isPrimitive()
            if (r1 != 0) goto Le
            r1 = 1
            return r1
        Le:
            return r0
        Lf:
            boolean r0 = r1.isPrimitive()
            if (r0 == 0) goto L23
            boolean r0 = r2.isPrimitive()
            if (r0 != 0) goto L23
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Object r1 = r0.get(r1)
            java.lang.Class r1 = (java.lang.Class) r1
        L23:
            boolean r0 = r2.isPrimitive()
            if (r0 == 0) goto L37
            boolean r0 = r1.isPrimitive()
            if (r0 != 0) goto L37
            java.util.HashMap<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.pangle.util.MethodUtils.sPrimitiveToWrapperMap
            java.lang.Object r2 = r0.get(r2)
            java.lang.Class r2 = (java.lang.Class) r2
        L37:
            boolean r1 = r2.isAssignableFrom(r1)
            return r1
    }

    public static java.lang.Class<?>[] toClass(java.lang.Object... r3) {
            if (r3 == 0) goto L1e
            int r0 = r3.length
            if (r0 == 0) goto L1e
            int r0 = r3.length
            java.lang.Class[] r0 = new java.lang.Class[r0]
            r1 = 0
        L9:
            int r2 = r3.length
            if (r1 >= r2) goto L1d
            r2 = r3[r1]
            if (r2 != 0) goto L12
            r2 = 0
            goto L18
        L12:
            r2 = r3[r1]
            java.lang.Class r2 = r2.getClass()
        L18:
            r0[r1] = r2
            int r1 = r1 + 1
            goto L9
        L1d:
            return r0
        L1e:
            java.lang.Class<?>[] r3 = com.bytedance.pangle.util.MethodUtils.EMPTY_CLASS_ARRAY
            return r3
    }
}
