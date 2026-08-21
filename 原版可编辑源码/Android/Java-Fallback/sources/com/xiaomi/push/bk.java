package com.xiaomi.push;

public class bk {
    private static final java.util.Map<java.lang.Class<?>, java.lang.Class<?>> a = null;

    public class a<T> {
        public final java.lang.Class<? extends T> a;
        public final T a;
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.xiaomi.push.bk.a = r0
            java.lang.Class<java.lang.Boolean> r1 = java.lang.Boolean.class
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Byte> r1 = java.lang.Byte.class
            java.lang.Class r2 = java.lang.Byte.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Character> r1 = java.lang.Character.class
            java.lang.Class r2 = java.lang.Character.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Short> r1 = java.lang.Short.class
            java.lang.Class r2 = java.lang.Short.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            java.lang.Class r2 = java.lang.Integer.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            java.lang.Class r2 = java.lang.Float.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
            java.lang.Class r2 = java.lang.Long.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class<java.lang.Double> r1 = java.lang.Double.class
            java.lang.Class r2 = java.lang.Double.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Boolean.TYPE
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Byte.TYPE
            java.lang.Class r2 = java.lang.Byte.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Character.TYPE
            java.lang.Class r2 = java.lang.Character.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Short.TYPE
            java.lang.Class r2 = java.lang.Short.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Integer.TYPE
            java.lang.Class r2 = java.lang.Integer.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Float.TYPE
            java.lang.Class r2 = java.lang.Float.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Long.TYPE
            java.lang.Class r2 = java.lang.Long.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.xiaomi.push.bk.a
            java.lang.Class r1 = java.lang.Double.TYPE
            java.lang.Class r2 = java.lang.Double.TYPE
            r0.put(r1, r2)
            return
    }

    public static <T> T a(java.lang.Class<? extends java.lang.Object> r2, java.lang.Object r3, java.lang.String r4) {
            r0 = 0
        L1:
            r1 = 1
            if (r0 != 0) goto L19
            java.lang.reflect.Field r0 = r2.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> Lc
            r0.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> Lc
            goto L10
        Lc:
            java.lang.Class r2 = r2.getSuperclass()
        L10:
            if (r2 == 0) goto L13
            goto L1
        L13:
            java.lang.NoSuchFieldException r2 = new java.lang.NoSuchFieldException
            r2.<init>()
            throw r2
        L19:
            r0.setAccessible(r1)
            java.lang.Object r2 = r0.get(r3)
            return r2
    }

    public static <T> T a(java.lang.Class<? extends java.lang.Object> r4, java.lang.String r5) {
            r0 = 0
            java.lang.Object r4 = a(r4, r0, r5)     // Catch: java.lang.Exception -> L6
            return r4
        L6:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Meet exception when call getStaticField '"
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = "' in "
            r2.append(r5)
            if (r4 == 0) goto L20
            java.lang.String r4 = r4.getSimpleName()
            goto L22
        L20:
            java.lang.String r4 = ""
        L22:
            r2.append(r4)
            java.lang.String r4 = ", "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r4 = r2.toString()
            java.lang.String r5 = "JavaCalls"
            android.util.Log.w(r5, r4)
            return r0
    }

    public static <T> T a(java.lang.Class<?> r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class[] r0 = a(r3)
            java.lang.reflect.Method r1 = a(r1, r2, r0)
            java.lang.Object[] r2 = a(r3)
            r3 = 0
            java.lang.Object r1 = r1.invoke(r3, r2)
            return r1
    }

    public static <T> T a(java.lang.Object r3, java.lang.String r4) {
            java.lang.Class r0 = r3.getClass()     // Catch: java.lang.Exception -> L9
            java.lang.Object r3 = a(r0, r3, r4)     // Catch: java.lang.Exception -> L9
            return r3
        L9:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Meet exception when call getField '"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "' in "
            r1.append(r4)
            r1.append(r3)
            java.lang.String r3 = ", "
            r1.append(r3)
            r1.append(r0)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "JavaCalls"
            android.util.Log.w(r4, r3)
            r3 = 0
            return r3
    }

    public static <T> T a(java.lang.Object r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.Object r2 = b(r2, r3, r4)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Meet exception when call Method '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' in "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "JavaCalls"
            android.util.Log.w(r3, r2)
            r2 = 0
            return r2
    }

    public static <T> T a(java.lang.String r4, java.lang.String r5) {
            r0 = 0
            java.lang.Class r1 = com.xiaomi.push.v.a(r0, r4)     // Catch: java.lang.Exception -> La
            java.lang.Object r4 = a(r1, r0, r5)     // Catch: java.lang.Exception -> La
            return r4
        La:
            r1 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Meet exception when call getStaticField '"
            r2.append(r3)
            r2.append(r5)
            java.lang.String r5 = "' in "
            r2.append(r5)
            r2.append(r4)
            java.lang.String r4 = ", "
            r2.append(r4)
            r2.append(r1)
            java.lang.String r4 = r2.toString()
            java.lang.String r5 = "JavaCalls"
            android.util.Log.w(r5, r4)
            return r0
    }

    public static <T> T a(java.lang.String r3, java.lang.String r4, java.lang.Object... r5) {
            r0 = 0
            java.lang.Class r1 = com.xiaomi.push.v.a(r0, r3)     // Catch: java.lang.Exception -> La
            java.lang.Object r3 = a(r1, r4, r5)     // Catch: java.lang.Exception -> La
            return r3
        La:
            r5 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Meet exception when call Method '"
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = "' in "
            r1.append(r4)
            r1.append(r3)
            java.lang.String r3 = ", "
            r1.append(r3)
            r1.append(r5)
            java.lang.String r3 = r1.toString()
            java.lang.String r4 = "JavaCalls"
            android.util.Log.w(r4, r3)
            return r0
    }

    private static java.lang.reflect.Method a(java.lang.Class<?> r1, java.lang.String r2, java.lang.Class<?>... r3) {
            java.lang.reflect.Method[] r0 = r1.getDeclaredMethods()
            java.lang.reflect.Method r0 = a(r0, r2, r3)
            if (r0 != 0) goto L1f
            java.lang.Class r0 = r1.getSuperclass()
            if (r0 == 0) goto L19
            java.lang.Class r1 = r1.getSuperclass()
            java.lang.reflect.Method r1 = a(r1, r2, r3)
            return r1
        L19:
            java.lang.NoSuchMethodException r1 = new java.lang.NoSuchMethodException
            r1.<init>()
            throw r1
        L1f:
            r1 = 1
            r0.setAccessible(r1)
            return r0
    }

    private static java.lang.reflect.Method a(java.lang.reflect.Method[] r4, java.lang.String r5, java.lang.Class<?>[] r6) {
            if (r5 == 0) goto L22
            int r0 = r4.length
            r1 = 0
        L4:
            if (r1 >= r0) goto L20
            r2 = r4[r1]
            java.lang.String r3 = r2.getName()
            boolean r3 = r3.equals(r5)
            if (r3 == 0) goto L1d
            java.lang.Class[] r3 = r2.getParameterTypes()
            boolean r3 = a(r3, r6)
            if (r3 == 0) goto L1d
            return r2
        L1d:
            int r1 = r1 + 1
            goto L4
        L20:
            r4 = 0
            return r4
        L22:
            java.lang.NullPointerException r4 = new java.lang.NullPointerException
            java.lang.String r5 = "Method name must not be null."
            r4.<init>(r5)
            throw r4
    }

    public static void a(java.lang.Object r2, java.lang.String r3, java.lang.Object r4) {
            b(r2, r3, r4)     // Catch: java.lang.Exception -> L4
            goto L2b
        L4:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Meet exception when call setField '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' in "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = ", "
            r0.append(r2)
            r0.append(r4)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "JavaCalls"
            android.util.Log.w(r3, r2)
        L2b:
            return
    }

    private static boolean a(java.lang.Class<?>[] r6, java.lang.Class<?>[] r7) {
            r0 = 1
            r1 = 0
            if (r6 != 0) goto Lc
            if (r7 == 0) goto Lb
            int r6 = r7.length
            if (r6 != 0) goto La
            goto Lb
        La:
            r0 = r1
        Lb:
            return r0
        Lc:
            if (r7 != 0) goto L14
            int r6 = r6.length
            if (r6 != 0) goto L12
            goto L13
        L12:
            r0 = r1
        L13:
            return r0
        L14:
            int r2 = r6.length
            int r3 = r7.length
            if (r2 == r3) goto L19
            return r1
        L19:
            r2 = r1
        L1a:
            int r3 = r6.length
            if (r2 >= r3) goto L51
            r3 = r7[r2]
            if (r3 == 0) goto L4e
            r3 = r6[r2]
            r4 = r7[r2]
            boolean r3 = r3.isAssignableFrom(r4)
            if (r3 != 0) goto L4e
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r3 = com.xiaomi.push.bk.a
            r4 = r6[r2]
            boolean r3 = r3.containsKey(r4)
            if (r3 == 0) goto L4d
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r3 = com.xiaomi.push.bk.a
            r4 = r6[r2]
            java.lang.Object r3 = r3.get(r4)
            java.lang.Class r3 = (java.lang.Class) r3
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r4 = com.xiaomi.push.bk.a
            r5 = r7[r2]
            java.lang.Object r4 = r4.get(r5)
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L4e
        L4d:
            return r1
        L4e:
            int r2 = r2 + 1
            goto L1a
        L51:
            return r0
    }

    private static java.lang.Class<?>[] a(java.lang.Object... r5) {
            r0 = 0
            if (r5 == 0) goto L2a
            int r1 = r5.length
            if (r1 <= 0) goto L2a
            int r1 = r5.length
            java.lang.Class[] r1 = new java.lang.Class[r1]
            r2 = 0
        La:
            int r3 = r5.length
            if (r2 >= r3) goto L29
            r3 = r5[r2]
            if (r3 == 0) goto L1c
            boolean r4 = r3 instanceof com.xiaomi.push.bk.a
            if (r4 == 0) goto L1c
            com.xiaomi.push.bk$a r3 = (com.xiaomi.push.bk.a) r3
            java.lang.Class<? extends T> r3 = r3.a
            r1[r2] = r3
            goto L26
        L1c:
            if (r3 != 0) goto L20
            r3 = r0
            goto L24
        L20:
            java.lang.Class r3 = r3.getClass()
        L24:
            r1[r2] = r3
        L26:
            int r2 = r2 + 1
            goto La
        L29:
            r0 = r1
        L2a:
            return r0
    }

    private static java.lang.Object[] a(java.lang.Object... r4) {
            if (r4 == 0) goto L20
            int r0 = r4.length
            if (r0 <= 0) goto L20
            int r0 = r4.length
            java.lang.Object[] r0 = new java.lang.Object[r0]
            r1 = 0
        L9:
            int r2 = r4.length
            if (r1 >= r2) goto L21
            r2 = r4[r1]
            if (r2 == 0) goto L1b
            boolean r3 = r2 instanceof com.xiaomi.push.bk.a
            if (r3 == 0) goto L1b
            com.xiaomi.push.bk$a r2 = (com.xiaomi.push.bk.a) r2
            T r2 = r2.a
            r0[r1] = r2
            goto L1d
        L1b:
            r0[r1] = r2
        L1d:
            int r1 = r1 + 1
            goto L9
        L20:
            r0 = 0
        L21:
            return r0
    }

    public static <T> T b(java.lang.Object r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.Class r0 = r2.getClass()
            java.lang.Class[] r1 = a(r4)
            java.lang.reflect.Method r3 = a(r0, r3, r1)
            java.lang.Object[] r4 = a(r4)
            java.lang.Object r2 = r3.invoke(r2, r4)
            return r2
    }

    public static void b(java.lang.Object r2, java.lang.String r3, java.lang.Object r4) {
            java.lang.Class r0 = r2.getClass()
            r1 = 0
        L5:
            if (r1 != 0) goto L19
            java.lang.reflect.Field r1 = r0.getDeclaredField(r3)     // Catch: java.lang.NoSuchFieldException -> Lc
            goto L10
        Lc:
            java.lang.Class r0 = r0.getSuperclass()
        L10:
            if (r0 == 0) goto L13
            goto L5
        L13:
            java.lang.NoSuchFieldException r2 = new java.lang.NoSuchFieldException
            r2.<init>()
            throw r2
        L19:
            r3 = 1
            r1.setAccessible(r3)
            r1.set(r2, r4)
            return
    }
}
