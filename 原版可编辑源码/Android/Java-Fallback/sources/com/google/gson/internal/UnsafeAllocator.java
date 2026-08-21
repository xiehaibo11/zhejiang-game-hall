package com.google.gson.internal;

public abstract class UnsafeAllocator {





    public UnsafeAllocator() {
            r0 = this;
            r0.<init>()
            return
    }

    static void assertInstantiable(java.lang.Class<?> r4) {
            int r0 = r4.getModifiers()
            boolean r1 = java.lang.reflect.Modifier.isInterface(r0)
            if (r1 != 0) goto L2c
            boolean r1 = java.lang.reflect.Modifier.isAbstract(r0)
            if (r1 != 0) goto L11
            return
        L11:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Abstract class can't be instantiated! Class name: "
            r2.append(r3)
            java.lang.String r3 = r4.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
        L2c:
            java.lang.UnsupportedOperationException r1 = new java.lang.UnsupportedOperationException
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "Interface can't be instantiated! Interface name: "
            r2.append(r3)
            java.lang.String r3 = r4.getName()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            r1.<init>(r2)
            throw r1
    }

    public static com.google.gson.internal.UnsafeAllocator create() {
            java.lang.String r0 = "newInstance"
            java.lang.String r1 = "sun.misc.Unsafe"
            r2 = 0
            r3 = 0
            r4 = 1
            java.lang.Class r1 = java.lang.Class.forName(r1)     // Catch: java.lang.Exception -> L2a
            java.lang.String r5 = "theUnsafe"
            java.lang.reflect.Field r5 = r1.getDeclaredField(r5)     // Catch: java.lang.Exception -> L2a
            r5.setAccessible(r4)     // Catch: java.lang.Exception -> L2a
            java.lang.Object r6 = r5.get(r2)     // Catch: java.lang.Exception -> L2a
            java.lang.String r7 = "allocateInstance"
            java.lang.Class[] r8 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L2a
            java.lang.Class<java.lang.Class> r9 = java.lang.Class.class
            r8[r3] = r9     // Catch: java.lang.Exception -> L2a
            java.lang.reflect.Method r7 = r1.getMethod(r7, r8)     // Catch: java.lang.Exception -> L2a
            com.google.gson.internal.UnsafeAllocator$1 r8 = new com.google.gson.internal.UnsafeAllocator$1     // Catch: java.lang.Exception -> L2a
            r8.<init>(r7, r6)     // Catch: java.lang.Exception -> L2a
            return r8
        L2a:
            r1 = move-exception
            r1 = 2
            java.lang.Class<java.io.ObjectStreamClass> r5 = java.io.ObjectStreamClass.class
            java.lang.String r6 = "getConstructorId"
            java.lang.Class[] r7 = new java.lang.Class[r4]     // Catch: java.lang.Exception -> L66
            java.lang.Class<java.lang.Class> r8 = java.lang.Class.class
            r7[r3] = r8     // Catch: java.lang.Exception -> L66
            java.lang.reflect.Method r5 = r5.getDeclaredMethod(r6, r7)     // Catch: java.lang.Exception -> L66
            r5.setAccessible(r4)     // Catch: java.lang.Exception -> L66
            java.lang.Object[] r6 = new java.lang.Object[r4]     // Catch: java.lang.Exception -> L66
            java.lang.Class<java.lang.Object> r7 = java.lang.Object.class
            r6[r3] = r7     // Catch: java.lang.Exception -> L66
            java.lang.Object r2 = r5.invoke(r2, r6)     // Catch: java.lang.Exception -> L66
            java.lang.Integer r2 = (java.lang.Integer) r2     // Catch: java.lang.Exception -> L66
            int r2 = r2.intValue()     // Catch: java.lang.Exception -> L66
            java.lang.Class<java.io.ObjectStreamClass> r6 = java.io.ObjectStreamClass.class
            java.lang.Class[] r7 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L66
            java.lang.Class<java.lang.Class> r8 = java.lang.Class.class
            r7[r3] = r8     // Catch: java.lang.Exception -> L66
            java.lang.Class r8 = java.lang.Integer.TYPE     // Catch: java.lang.Exception -> L66
            r7[r4] = r8     // Catch: java.lang.Exception -> L66
            java.lang.reflect.Method r6 = r6.getDeclaredMethod(r0, r7)     // Catch: java.lang.Exception -> L66
            r6.setAccessible(r4)     // Catch: java.lang.Exception -> L66
            com.google.gson.internal.UnsafeAllocator$2 r7 = new com.google.gson.internal.UnsafeAllocator$2     // Catch: java.lang.Exception -> L66
            r7.<init>(r6, r2)     // Catch: java.lang.Exception -> L66
            return r7
        L66:
            r2 = move-exception
            java.lang.Class<java.io.ObjectInputStream> r2 = java.io.ObjectInputStream.class
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L80
            java.lang.Class<java.lang.Class> r5 = java.lang.Class.class
            r1[r3] = r5     // Catch: java.lang.Exception -> L80
            java.lang.Class<java.lang.Class> r3 = java.lang.Class.class
            r1[r4] = r3     // Catch: java.lang.Exception -> L80
            java.lang.reflect.Method r0 = r2.getDeclaredMethod(r0, r1)     // Catch: java.lang.Exception -> L80
            r0.setAccessible(r4)     // Catch: java.lang.Exception -> L80
            com.google.gson.internal.UnsafeAllocator$3 r1 = new com.google.gson.internal.UnsafeAllocator$3     // Catch: java.lang.Exception -> L80
            r1.<init>(r0)     // Catch: java.lang.Exception -> L80
            return r1
        L80:
            r0 = move-exception
            com.google.gson.internal.UnsafeAllocator$4 r0 = new com.google.gson.internal.UnsafeAllocator$4
            r0.<init>()
            return r0
    }

    public abstract <T> T newInstance(java.lang.Class<T> r1) throws java.lang.Exception;
}
