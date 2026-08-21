package com.bytedance.android.live.base.api;

public class JavaCallsUtils {
    private static final java.lang.String LOG_TAG = "JavaCalls";
    private static final java.util.Map<java.lang.Class<?>, java.lang.Class<?>> PRIMITIVE_MAP = null;

    public static class JavaParam<T> {
        public final java.lang.Class<? extends T> clazz;
        public final T obj;

        public JavaParam(java.lang.Class<? extends T> r1, T r2) {
                r0 = this;
                r0.<init>()
                r0.clazz = r1
                r0.obj = r2
                return
        }
    }

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP = r0
            java.lang.Class<java.lang.Boolean> r1 = java.lang.Boolean.class
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Byte> r1 = java.lang.Byte.class
            java.lang.Class r2 = java.lang.Byte.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Character> r1 = java.lang.Character.class
            java.lang.Class r2 = java.lang.Character.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Short> r1 = java.lang.Short.class
            java.lang.Class r2 = java.lang.Short.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Integer> r1 = java.lang.Integer.class
            java.lang.Class r2 = java.lang.Integer.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Float> r1 = java.lang.Float.class
            java.lang.Class r2 = java.lang.Float.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Long> r1 = java.lang.Long.class
            java.lang.Class r2 = java.lang.Long.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class<java.lang.Double> r1 = java.lang.Double.class
            java.lang.Class r2 = java.lang.Double.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Boolean.TYPE
            java.lang.Class r2 = java.lang.Boolean.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Byte.TYPE
            java.lang.Class r2 = java.lang.Byte.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Character.TYPE
            java.lang.Class r2 = java.lang.Character.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Short.TYPE
            java.lang.Class r2 = java.lang.Short.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Integer.TYPE
            java.lang.Class r2 = java.lang.Integer.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Float.TYPE
            java.lang.Class r2 = java.lang.Float.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Long.TYPE
            java.lang.Class r2 = java.lang.Long.TYPE
            r0.put(r1, r2)
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r0 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            java.lang.Class r1 = java.lang.Double.TYPE
            java.lang.Class r2 = java.lang.Double.TYPE
            r0.put(r1, r2)
            return
    }

    public JavaCallsUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static <T> T callMethod(java.lang.Object r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.Object r2 = callMethodOrThrow(r2, r3, r4)     // Catch: java.lang.Exception -> L5
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
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "JavaCalls"
            android.util.Log.w(r3, r2, r4)
            r2 = 0
            return r2
    }

    public static <T> T callMethodOrThrow(java.lang.Object r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.Class r0 = r2.getClass()
            java.lang.Class[] r1 = getParameterTypes(r4)
            java.lang.reflect.Method r3 = getDeclaredMethod(r0, r3, r1)
            java.lang.Object[] r4 = getParameters(r4)
            java.lang.Object r2 = r3.invoke(r2, r4)
            return r2
    }

    public static <T> T callStaticMethod(java.lang.String r2, java.lang.String r3, java.lang.Object... r4) {
            java.lang.Class r0 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L9
            java.lang.Object r2 = callStaticMethodOrThrow(r0, r3, r4)     // Catch: java.lang.Exception -> L9
            return r2
        L9:
            r4 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Meet exception when call Method '"
            r0.append(r1)
            r0.append(r3)
            java.lang.String r3 = "' in "
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r3 = "JavaCalls"
            android.util.Log.w(r3, r2, r4)
            r2 = 0
            return r2
    }

    public static <T> T callStaticMethodOrThrow(java.lang.Class<?> r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class[] r0 = getParameterTypes(r3)
            java.lang.reflect.Method r1 = getDeclaredMethod(r1, r2, r0)
            java.lang.Object[] r2 = getParameters(r3)
            r3 = 0
            java.lang.Object r1 = r1.invoke(r3, r2)
            return r1
    }

    public static <T> T callStaticMethodOrThrow(java.lang.String r1, java.lang.String r2, java.lang.Object... r3) {
            java.lang.Class r1 = java.lang.Class.forName(r1)
            java.lang.Class[] r0 = getParameterTypes(r3)
            java.lang.reflect.Method r1 = getDeclaredMethod(r1, r2, r0)
            java.lang.Object[] r2 = getParameters(r3)
            r3 = 0
            java.lang.Object r1 = r1.invoke(r3, r2)
            return r1
    }

    public static <T> T callStaticMethodWithClassLoader(java.lang.String r1, java.lang.String r2, java.lang.ClassLoader r3, java.lang.Object... r4) {
            r0 = 1
            java.lang.Class r3 = java.lang.Class.forName(r1, r0, r3)     // Catch: java.lang.Exception -> La
            java.lang.Object r1 = callStaticMethodOrThrow(r3, r2, r4)     // Catch: java.lang.Exception -> La
            return r1
        La:
            r3 = move-exception
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = "Meet exception when call Method '"
            r4.append(r0)
            r4.append(r2)
            java.lang.String r2 = "' in "
            r4.append(r2)
            r4.append(r1)
            java.lang.String r1 = r4.toString()
            java.lang.String r2 = "JavaCalls"
            android.util.Log.w(r2, r1, r3)
            r1 = 0
            return r1
    }

    private static boolean compareClassLists(java.lang.Class<?>[] r6, java.lang.Class<?>[] r7) {
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
            if (r2 >= r3) goto L4d
            r3 = r6[r2]
            r4 = r7[r2]
            boolean r3 = r3.isAssignableFrom(r4)
            if (r3 != 0) goto L4a
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r3 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            r4 = r6[r2]
            boolean r3 = r3.containsKey(r4)
            if (r3 == 0) goto L49
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r3 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            r4 = r6[r2]
            java.lang.Object r3 = r3.get(r4)
            java.lang.Class r3 = (java.lang.Class) r3
            java.util.Map<java.lang.Class<?>, java.lang.Class<?>> r4 = com.bytedance.android.live.base.api.JavaCallsUtils.PRIMITIVE_MAP
            r5 = r7[r2]
            java.lang.Object r4 = r4.get(r5)
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L4a
        L49:
            return r1
        L4a:
            int r2 = r2 + 1
            goto L1a
        L4d:
            return r0
    }

    private static java.lang.reflect.Method findMethodByName(java.lang.reflect.Method[] r4, java.lang.String r5, java.lang.Class<?>[] r6) {
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
            boolean r3 = compareClassLists(r3, r6)
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

    private static java.lang.reflect.Method getDeclaredMethod(java.lang.Class<?> r1, java.lang.String r2, java.lang.Class<?>... r3) {
            java.lang.reflect.Method[] r0 = r1.getDeclaredMethods()
            java.lang.reflect.Method r0 = findMethodByName(r0, r2, r3)
            if (r0 != 0) goto L1f
            java.lang.Class r0 = r1.getSuperclass()
            if (r0 == 0) goto L19
            java.lang.Class r1 = r1.getSuperclass()
            java.lang.reflect.Method r1 = getDeclaredMethod(r1, r2, r3)
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

    private static java.lang.Object getDefaultValue(java.lang.Class<?> r2) {
            java.lang.Class r0 = java.lang.Integer.TYPE
            boolean r0 = r0.equals(r2)
            r1 = 0
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Integer> r0 = java.lang.Integer.class
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class r0 = java.lang.Byte.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Byte> r0 = java.lang.Byte.class
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class r0 = java.lang.Short.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Short> r0 = java.lang.Short.class
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class r0 = java.lang.Long.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Long> r0 = java.lang.Long.class
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class r0 = java.lang.Double.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Double> r0 = java.lang.Double.class
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class r0 = java.lang.Float.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L90
            java.lang.Class<java.lang.Float> r0 = java.lang.Float.class
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L62
            goto L90
        L62:
            java.lang.Class r0 = java.lang.Boolean.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L8b
            java.lang.Class<java.lang.Boolean> r0 = java.lang.Boolean.class
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L73
            goto L8b
        L73:
            java.lang.Class r0 = java.lang.Character.TYPE
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L86
            java.lang.Class<java.lang.Character> r0 = java.lang.Character.class
            boolean r2 = r0.equals(r2)
            if (r2 == 0) goto L84
            goto L86
        L84:
            r2 = 0
            return r2
        L86:
            java.lang.Character r2 = java.lang.Character.valueOf(r1)
            return r2
        L8b:
            java.lang.Boolean r2 = java.lang.Boolean.valueOf(r1)
            return r2
        L90:
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            return r2
    }

    public static <T> T getField(java.lang.Object r0, java.lang.String r1) {
            java.lang.Object r0 = getFieldOrThrow(r0, r1)     // Catch: java.lang.IllegalAccessException -> L5 java.lang.NoSuchFieldException -> La
            return r0
        L5:
            r0 = move-exception
            r0.printStackTrace()
            goto Le
        La:
            r0 = move-exception
            r0.printStackTrace()
        Le:
            r0 = 0
            return r0
    }

    public static <T> T getFieldOrThrow(java.lang.Object r3, java.lang.String r4) {
            java.lang.Class r0 = r3.getClass()
            r1 = 0
        L5:
            r2 = 1
            if (r1 != 0) goto L1d
            java.lang.reflect.Field r1 = r0.getDeclaredField(r4)     // Catch: java.lang.NoSuchFieldException -> L10
            r1.setAccessible(r2)     // Catch: java.lang.NoSuchFieldException -> L10
            goto L14
        L10:
            java.lang.Class r0 = r0.getSuperclass()
        L14:
            if (r0 == 0) goto L17
            goto L5
        L17:
            java.lang.NoSuchFieldException r3 = new java.lang.NoSuchFieldException
            r3.<init>()
            throw r3
        L1d:
            r1.setAccessible(r2)
            java.lang.Object r3 = r1.get(r3)
            return r3
    }

    private static java.lang.Class<?>[] getParameterTypes(java.lang.Object... r5) {
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
            boolean r4 = r3 instanceof com.bytedance.android.live.base.api.JavaCallsUtils.JavaParam
            if (r4 == 0) goto L1c
            com.bytedance.android.live.base.api.JavaCallsUtils$JavaParam r3 = (com.bytedance.android.live.base.api.JavaCallsUtils.JavaParam) r3
            java.lang.Class<? extends T> r3 = r3.clazz
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

    private static java.lang.Object[] getParameters(java.lang.Object... r4) {
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
            boolean r3 = r2 instanceof com.bytedance.android.live.base.api.JavaCallsUtils.JavaParam
            if (r3 == 0) goto L1b
            com.bytedance.android.live.base.api.JavaCallsUtils$JavaParam r2 = (com.bytedance.android.live.base.api.JavaCallsUtils.JavaParam) r2
            T r2 = r2.obj
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

    public static <T> T newEmptyInstance(java.lang.Class<?> r3) {
            java.lang.Object r3 = newEmptyInstanceOrThrow(r3)     // Catch: java.lang.Exception -> L5
            return r3
        L5:
            r0 = move-exception
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Meet exception when make instance as a "
            r1.append(r2)
            java.lang.String r3 = r3.getSimpleName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            java.lang.String r1 = "JavaCalls"
            android.util.Log.w(r1, r3, r0)
            r3 = 0
            return r3
    }

    public static <T> T newEmptyInstanceOrThrow(java.lang.Class<?> r4) {
            java.lang.reflect.Constructor[] r0 = r4.getDeclaredConstructors()
            if (r0 == 0) goto L37
            int r1 = r0.length
            if (r1 == 0) goto L37
            r4 = 0
            r0 = r0[r4]
            r1 = 1
            r0.setAccessible(r1)
            java.lang.Class[] r1 = r0.getParameterTypes()
            if (r1 == 0) goto L30
            int r2 = r1.length
            if (r2 != 0) goto L1a
            goto L30
        L1a:
            int r2 = r1.length
            java.lang.Object[] r2 = new java.lang.Object[r2]
        L1d:
            int r3 = r1.length
            if (r4 >= r3) goto L2b
            r3 = r1[r4]
            java.lang.Object r3 = getDefaultValue(r3)
            r2[r4] = r3
            int r4 = r4 + 1
            goto L1d
        L2b:
            java.lang.Object r4 = r0.newInstance(r2)
            return r4
        L30:
            java.lang.Object[] r4 = new java.lang.Object[r4]
            java.lang.Object r4 = r0.newInstance(r4)
            return r4
        L37:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Can't get even one available constructor for "
            r1.append(r2)
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static <T> T newInstance(java.lang.Class<?> r2, java.lang.Object... r3) {
            java.lang.Object r2 = newInstanceOrThrow(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Meet exception when make instance as a "
            r0.append(r1)
            java.lang.String r2 = r2.getSimpleName()
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "JavaCalls"
            android.util.Log.w(r0, r2, r3)
            r2 = 0
            return r2
    }

    public static java.lang.Object newInstance(java.lang.String r2, java.lang.Object... r3) {
            java.lang.Object r2 = newInstanceOrThrow(r2, r3)     // Catch: java.lang.Exception -> L5
            return r2
        L5:
            r3 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "Meet exception when make instance as a "
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            java.lang.String r0 = "JavaCalls"
            android.util.Log.w(r0, r2, r3)
            r2 = 0
            return r2
    }

    public static <T> T newInstanceOrThrow(java.lang.Class<?> r1, java.lang.Object... r2) {
            java.lang.Class[] r0 = getParameterTypes(r2)
            java.lang.reflect.Constructor r1 = r1.getConstructor(r0)
            r0 = 1
            r1.setAccessible(r0)
            java.lang.Object[] r2 = getParameters(r2)
            java.lang.Object r1 = r1.newInstance(r2)
            return r1
    }

    public static java.lang.Object newInstanceOrThrow(java.lang.String r0, java.lang.Object... r1) {
            java.lang.Class r0 = java.lang.Class.forName(r0)
            java.lang.Object[] r1 = getParameters(r1)
            java.lang.Object r0 = newInstanceOrThrow(r0, r1)
            return r0
    }

    public static void setField(java.lang.Object r0, java.lang.String r1, java.lang.Object r2) {
            setFieldOrThrow(r0, r1, r2)     // Catch: java.lang.IllegalAccessException -> L4 java.lang.NoSuchFieldException -> L9
            goto Ld
        L4:
            r0 = move-exception
            r0.printStackTrace()
            goto Ld
        L9:
            r0 = move-exception
            r0.printStackTrace()
        Ld:
            return
    }

    public static void setFieldOrThrow(java.lang.Object r2, java.lang.String r3, java.lang.Object r4) {
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
