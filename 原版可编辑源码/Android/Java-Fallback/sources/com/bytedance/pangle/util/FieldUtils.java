package com.bytedance.pangle.util;

public class FieldUtils {
    private static java.util.Map<java.lang.String, java.lang.reflect.Field> sFieldCache;

    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.bytedance.pangle.util.FieldUtils.sFieldCache = r0
            return
    }

    public FieldUtils() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.reflect.Field getField(java.lang.Class<?> r5, java.lang.String r6) {
            java.lang.String r0 = getKey(r5, r6)
            java.util.Map<java.lang.String, java.lang.reflect.Field> r1 = com.bytedance.pangle.util.FieldUtils.sFieldCache
            monitor-enter(r1)
            java.util.Map<java.lang.String, java.lang.reflect.Field> r2 = com.bytedance.pangle.util.FieldUtils.sFieldCache     // Catch: java.lang.Throwable -> L40
            java.lang.Object r2 = r2.get(r0)     // Catch: java.lang.Throwable -> L40
            java.lang.reflect.Field r2 = (java.lang.reflect.Field) r2     // Catch: java.lang.Throwable -> L40
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L40
            r1 = 1
            if (r2 == 0) goto L1d
            boolean r5 = r2.isAccessible()
            if (r5 != 0) goto L1c
            r2.setAccessible(r1)
        L1c:
            return r2
        L1d:
            if (r5 == 0) goto L3e
            java.lang.reflect.Field r2 = r5.getDeclaredField(r6)     // Catch: java.lang.NoSuchFieldException -> L39
            boolean r3 = r2.isAccessible()     // Catch: java.lang.NoSuchFieldException -> L39
            if (r3 != 0) goto L2c
            r2.setAccessible(r1)     // Catch: java.lang.NoSuchFieldException -> L39
        L2c:
            java.util.Map<java.lang.String, java.lang.reflect.Field> r3 = com.bytedance.pangle.util.FieldUtils.sFieldCache     // Catch: java.lang.NoSuchFieldException -> L39
            monitor-enter(r3)     // Catch: java.lang.NoSuchFieldException -> L39
            java.util.Map<java.lang.String, java.lang.reflect.Field> r4 = com.bytedance.pangle.util.FieldUtils.sFieldCache     // Catch: java.lang.Throwable -> L36
            r4.put(r0, r2)     // Catch: java.lang.Throwable -> L36
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L36
            return r2
        L36:
            r2 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L36
            throw r2     // Catch: java.lang.NoSuchFieldException -> L39
        L39:
            java.lang.Class r5 = r5.getSuperclass()
            goto L1d
        L3e:
            r5 = 0
            return r5
        L40:
            r5 = move-exception
            monitor-exit(r1)     // Catch: java.lang.Throwable -> L40
            throw r5
    }

    private static java.lang.String getKey(java.lang.Class<?> r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = r2.toString()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            r0.append(r3)
            r0.append(r1)
            java.lang.ClassLoader r3 = r2.getClassLoader()
            if (r3 == 0) goto L2a
            java.lang.ClassLoader r2 = r2.getClassLoader()
            int r2 = r2.hashCode()
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            goto L2c
        L2a:
            java.lang.String r2 = ""
        L2c:
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            return r2
    }

    public static java.lang.Object readField(java.lang.Object r1, java.lang.String r2) {
            java.lang.Class r0 = r1.getClass()
            java.lang.reflect.Field r2 = getField(r0, r2)
            if (r2 == 0) goto Lf
            java.lang.Object r1 = readField(r2, r1)
            return r1
        Lf:
            r1 = 0
            return r1
    }

    public static java.lang.Object readField(java.lang.reflect.Field r1, java.lang.Object r2) {
            boolean r0 = r1.isAccessible()
            if (r0 != 0) goto La
            r0 = 1
            r1.setAccessible(r0)
        La:
            java.lang.Object r1 = r1.get(r2)
            return r1
    }

    public static java.lang.Object readStaticField(java.lang.Class<?> r0, java.lang.String r1) {
            java.lang.reflect.Field r0 = getField(r0, r1)
            if (r0 == 0) goto Lb
            java.lang.Object r0 = readStaticField(r0)
            return r0
        Lb:
            r0 = 0
            return r0
    }

    public static java.lang.Object readStaticField(java.lang.reflect.Field r1) {
            r0 = 0
            java.lang.Object r1 = readField(r1, r0)
            return r1
    }

    public static void writeField(java.lang.Object r1, java.lang.String r2, java.lang.Object r3) {
            java.lang.Class r0 = r1.getClass()
            java.lang.reflect.Field r2 = getField(r0, r2)
            if (r2 == 0) goto Ld
            writeField(r2, r1, r3)
        Ld:
            return
    }

    public static void writeField(java.lang.reflect.Field r1, java.lang.Object r2, java.lang.Object r3) {
            boolean r0 = r1.isAccessible()
            if (r0 != 0) goto La
            r0 = 1
            r1.setAccessible(r0)
        La:
            r1.set(r2, r3)
            return
    }

    public static void writeStaticField(java.lang.Class<?> r0, java.lang.String r1, java.lang.Object r2) {
            java.lang.reflect.Field r0 = getField(r0, r1)
            if (r0 == 0) goto L9
            writeStaticField(r0, r2)
        L9:
            return
    }

    public static void writeStaticField(java.lang.reflect.Field r1, java.lang.Object r2) {
            r0 = 0
            writeField(r1, r0, r2)
            return
    }
}
