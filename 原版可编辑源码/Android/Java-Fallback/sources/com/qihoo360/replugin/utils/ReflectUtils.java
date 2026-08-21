package com.qihoo360.replugin.utils;

/* JADX WARN: Classes with same name are omitted, all sources:
  classes.dex
  classes3.dex
 */
public final class ReflectUtils {
    public ReflectUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static final void dumpObject(java.lang.Object r6, java.io.FileDescriptor r7, java.io.PrintWriter r8, java.lang.String[] r9) {
            java.lang.Class r7 = r6.getClass()     // Catch: java.lang.Throwable -> L6e
        L4:
            java.lang.StringBuilder r9 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L6e
            r9.<init>()     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = "c="
            r9.append(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r0 = r7.getName()     // Catch: java.lang.Throwable -> L6e
            r9.append(r0)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r9 = r9.toString()     // Catch: java.lang.Throwable -> L6e
            r8.println(r9)     // Catch: java.lang.Throwable -> L6e
            java.lang.reflect.Field[] r9 = r7.getDeclaredFields()     // Catch: java.lang.Throwable -> L6e
            int r0 = r9.length     // Catch: java.lang.Throwable -> L6e
            r1 = 0
        L22:
            if (r1 >= r0) goto L57
            r2 = r9[r1]     // Catch: java.lang.Throwable -> L6e
            boolean r3 = r2.isAccessible()     // Catch: java.lang.Throwable -> L6e
            if (r3 != 0) goto L30
            r4 = 1
            r2.setAccessible(r4)     // Catch: java.lang.Throwable -> L6e
        L30:
            java.lang.Object r4 = r2.get(r6)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = r2.getName()     // Catch: java.lang.Throwable -> L6e
            r8.print(r5)     // Catch: java.lang.Throwable -> L6e
            java.lang.String r5 = "="
            r8.print(r5)     // Catch: java.lang.Throwable -> L6e
            if (r4 == 0) goto L4a
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Throwable -> L6e
            r8.println(r4)     // Catch: java.lang.Throwable -> L6e
            goto L4f
        L4a:
            java.lang.String r4 = "null"
            r8.println(r4)     // Catch: java.lang.Throwable -> L6e
        L4f:
            if (r3 != 0) goto L54
            r2.setAccessible(r3)     // Catch: java.lang.Throwable -> L6e
        L54:
            int r1 = r1 + 1
            goto L22
        L57:
            java.lang.Class r7 = r7.getSuperclass()     // Catch: java.lang.Throwable -> L6e
            if (r7 == 0) goto L78
            java.lang.Class<java.lang.Object> r9 = java.lang.Object.class
            boolean r9 = r7.equals(r9)     // Catch: java.lang.Throwable -> L6e
            if (r9 != 0) goto L78
            java.lang.Class<android.content.Context> r9 = android.content.Context.class
            boolean r9 = r7.equals(r9)     // Catch: java.lang.Throwable -> L6e
            if (r9 == 0) goto L4
            goto L78
        L6e:
            r6 = move-exception
            java.lang.String r7 = r6.getMessage()
            java.lang.String r8 = "ws002"
            com.qihoo360.replugin.helper.LogRelease.e(r8, r7, r6)
        L78:
            return
    }

    public static java.util.List<java.lang.reflect.Field> getAllFieldsList(java.lang.Class<?> r6) {
            r0 = 0
            if (r6 == 0) goto L5
            r1 = 1
            goto L6
        L5:
            r1 = r0
        L6:
            java.lang.Object[] r2 = new java.lang.Object[r0]
            java.lang.String r3 = "The class must not be null"
            com.qihoo360.replugin.utils.Validate.isTrue(r1, r3, r2)
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
        L12:
            if (r6 == 0) goto L29
            java.lang.reflect.Field[] r2 = r6.getDeclaredFields()
            int r3 = r2.length
            r4 = r0
        L1a:
            if (r4 >= r3) goto L24
            r5 = r2[r4]
            r1.add(r5)
            int r4 = r4 + 1
            goto L1a
        L24:
            java.lang.Class r6 = r6.getSuperclass()
            goto L12
        L29:
            return r1
    }

    public static java.lang.Class<?> getClass(java.lang.String r0) throws java.lang.ClassNotFoundException {
            java.lang.Class r0 = java.lang.Class.forName(r0)
            return r0
    }

    public static java.lang.reflect.Field getField(java.lang.Class<?> r10, java.lang.String r11) {
            r0 = r10
        L1:
            r1 = 1
            if (r0 == 0) goto L11
            java.lang.reflect.Field r2 = r0.getDeclaredField(r11)     // Catch: java.lang.NoSuchFieldException -> Lc
            setAccessible(r2, r1)     // Catch: java.lang.NoSuchFieldException -> Lc
            return r2
        Lc:
            java.lang.Class r0 = r0.getSuperclass()
            goto L1
        L11:
            r0 = 0
            java.lang.Class[] r2 = r10.getInterfaces()
            int r3 = r2.length
            r4 = 0
            r5 = r4
        L19:
            if (r5 >= r3) goto L36
            r6 = r2[r5]
            java.lang.reflect.Field r6 = r6.getField(r11)     // Catch: java.lang.NoSuchFieldException -> L33
            if (r0 != 0) goto L25
            r7 = r1
            goto L26
        L25:
            r7 = r4
        L26:
            java.lang.String r8 = "Reference to field %s is ambiguous relative to %s; a matching field exists on two or more implemented interfaces."
            r9 = 2
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.NoSuchFieldException -> L33
            r9[r4] = r11     // Catch: java.lang.NoSuchFieldException -> L33
            r9[r1] = r10     // Catch: java.lang.NoSuchFieldException -> L33
            com.qihoo360.replugin.utils.Validate.isTrue(r7, r8, r9)     // Catch: java.lang.NoSuchFieldException -> L33
            r0 = r6
        L33:
            int r5 = r5 + 1
            goto L19
        L36:
            return r0
    }

    public static java.lang.reflect.Method getMethod(java.lang.Class<?> r10, java.lang.String r11, java.lang.Class<?>... r12) {
            r0 = r10
        L1:
            r1 = 1
            if (r0 == 0) goto L11
            java.lang.reflect.Method r2 = r0.getDeclaredMethod(r11, r12)     // Catch: java.lang.NoSuchMethodException -> Lc
            setAccessible(r2, r1)     // Catch: java.lang.NoSuchMethodException -> Lc
            return r2
        Lc:
            java.lang.Class r0 = r0.getSuperclass()
            goto L1
        L11:
            r0 = 0
            java.lang.Class[] r2 = r10.getInterfaces()
            int r3 = r2.length
            r4 = 0
            r5 = r4
        L19:
            if (r5 >= r3) goto L36
            r6 = r2[r5]
            java.lang.reflect.Method r6 = r6.getMethod(r11, r12)     // Catch: java.lang.NoSuchMethodException -> L33
            if (r0 != 0) goto L25
            r7 = r1
            goto L26
        L25:
            r7 = r4
        L26:
            java.lang.String r8 = "Reference to field %s is ambiguous relative to %s; a matching field exists on two or more implemented interfaces."
            r9 = 2
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.NoSuchMethodException -> L33
            r9[r4] = r11     // Catch: java.lang.NoSuchMethodException -> L33
            r9[r1] = r10     // Catch: java.lang.NoSuchMethodException -> L33
            com.qihoo360.replugin.utils.Validate.isTrue(r7, r8, r9)     // Catch: java.lang.NoSuchMethodException -> L33
            r0 = r6
        L33:
            int r5 = r5 + 1
            goto L19
        L36:
            return r0
    }

    public static <T> T invokeConstructor(java.lang.Class<T> r0, java.lang.Class[] r1, java.lang.Object... r2) throws java.lang.NoSuchMethodException, java.lang.IllegalAccessException, java.lang.reflect.InvocationTargetException, java.lang.InstantiationException {
            java.lang.reflect.Constructor r0 = r0.getConstructor(r1)
            if (r0 == 0) goto Lf
            r1 = 1
            r0.setAccessible(r1)
            java.lang.Object r0 = r0.newInstance(r2)
            return r0
        Lf:
            r0 = 0
            return r0
    }

    public static java.lang.Object invokeMethod(java.lang.ClassLoader r2, java.lang.String r3, java.lang.String r4, java.lang.Object r5, java.lang.Class<?>[] r6, java.lang.Object... r7) throws java.lang.ClassNotFoundException, java.lang.NoSuchMethodException, java.lang.reflect.InvocationTargetException, java.lang.IllegalAccessException {
            r0 = 0
            if (r5 != 0) goto L4
            return r0
        L4:
            r1 = 0
            java.lang.Class r2 = java.lang.Class.forName(r3, r1, r2)
            if (r2 == 0) goto L1a
            java.lang.reflect.Method r2 = r2.getMethod(r4, r6)
            if (r2 == 0) goto L1a
            r3 = 1
            r2.setAccessible(r3)
            java.lang.Object r2 = r2.invoke(r5, r7)
            return r2
        L1a:
            return r0
    }

    public static java.lang.Object invokeMethod(java.lang.Object r0, java.lang.String r1, java.lang.Class<?>[] r2, java.lang.Object... r3) throws java.lang.NoSuchMethodException, java.lang.IllegalAccessException, java.lang.reflect.InvocationTargetException {
            java.lang.Class r0 = r0.getClass()
            java.lang.reflect.Method r0 = getMethod(r0, r1, r2)
            r1 = 0
            java.lang.Object[] r1 = new java.lang.Object[r1]
            java.lang.Object r0 = r0.invoke(r3, r1)
            return r0
    }

    public static java.lang.Object readField(java.lang.Class<?> r0, java.lang.Object r1, java.lang.String r2) throws java.lang.IllegalAccessException, java.lang.NoSuchFieldException {
            java.lang.reflect.Field r0 = getField(r0, r2)
            java.lang.Object r0 = readField(r0, r1)
            return r0
    }

    public static java.lang.Object readField(java.lang.Object r1, java.lang.String r2) throws java.lang.IllegalAccessException, java.lang.NoSuchFieldException {
            java.lang.Class r0 = r1.getClass()
            java.lang.Object r1 = readField(r0, r1, r2)
            return r1
    }

    public static java.lang.Object readField(java.lang.reflect.Field r0, java.lang.Object r1) throws java.lang.IllegalAccessException {
            java.lang.Object r0 = r0.get(r1)
            return r0
    }

    public static java.lang.Object readStaticField(java.lang.Class<?> r1, java.lang.String r2) throws java.lang.NoSuchFieldException, java.lang.IllegalAccessException {
            r0 = 0
            java.lang.Object r1 = readField(r1, r0, r2)
            return r1
    }

    public static void removeFieldFinalModifier(java.lang.reflect.Field r5) {
            r0 = 1
            r1 = 0
            if (r5 == 0) goto L6
            r2 = r0
            goto L7
        L6:
            r2 = r1
        L7:
            java.lang.Object[] r3 = new java.lang.Object[r1]
            java.lang.String r4 = "The field must not be null"
            com.qihoo360.replugin.utils.Validate.isTrue(r2, r4, r3)
            int r2 = r5.getModifiers()     // Catch: java.lang.Throwable -> L40
            boolean r2 = java.lang.reflect.Modifier.isFinal(r2)     // Catch: java.lang.Throwable -> L40
            if (r2 == 0) goto L40
            java.lang.Class<java.lang.reflect.Field> r2 = java.lang.reflect.Field.class
            java.lang.String r3 = "modifiers"
            java.lang.reflect.Field r2 = r2.getDeclaredField(r3)     // Catch: java.lang.Throwable -> L40
            boolean r3 = r2.isAccessible()     // Catch: java.lang.Throwable -> L40
            r3 = r3 ^ r0
            if (r3 == 0) goto L2a
            r2.setAccessible(r0)     // Catch: java.lang.Throwable -> L40
        L2a:
            int r0 = r5.getModifiers()     // Catch: java.lang.Throwable -> L39
            r0 = r0 & (-17)
            r2.setInt(r5, r0)     // Catch: java.lang.Throwable -> L39
            if (r3 == 0) goto L40
            r2.setAccessible(r1)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L40
            goto L40
        L39:
            r5 = move-exception
            if (r3 == 0) goto L3f
            r2.setAccessible(r1)     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L40
        L3f:
            throw r5     // Catch: java.lang.Throwable -> L40 java.lang.Throwable -> L40
        L40:
            return
    }

    public static void setAccessible(java.lang.reflect.AccessibleObject r1, boolean r2) {
            boolean r0 = r1.isAccessible()
            if (r0 == r2) goto L9
            r1.setAccessible(r2)
        L9:
            return
    }

    public static void writeField(java.lang.Class<?> r0, java.lang.Object r1, java.lang.String r2, java.lang.Object r3) throws java.lang.NoSuchFieldException, java.lang.IllegalAccessException {
            java.lang.reflect.Field r0 = getField(r0, r2)
            writeField(r0, r1, r3)
            return
    }

    public static void writeField(java.lang.Object r1, java.lang.String r2, java.lang.Object r3) throws java.lang.NoSuchFieldException, java.lang.IllegalAccessException {
            java.lang.Class r0 = r1.getClass()
            writeField(r0, r1, r2, r3)
            return
    }

    public static void writeField(java.lang.reflect.Field r0, java.lang.Object r1, java.lang.Object r2) throws java.lang.IllegalAccessException {
            r0.set(r1, r2)
            return
    }
}
