package com.google.gson.internal.reflect;

final class UnsafeReflectionAccessor extends com.google.gson.internal.reflect.ReflectionAccessor {
    private static java.lang.Class unsafeClass;
    private final java.lang.reflect.Field overrideField;
    private final java.lang.Object theUnsafe;

    UnsafeReflectionAccessor() {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = getUnsafeInstance()
            r1.theUnsafe = r0
            java.lang.reflect.Field r0 = getOverrideField()
            r1.overrideField = r0
            return
    }

    private static java.lang.reflect.Field getOverrideField() {
            java.lang.Class<java.lang.reflect.AccessibleObject> r0 = java.lang.reflect.AccessibleObject.class
            java.lang.String r1 = "override"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)     // Catch: java.lang.NoSuchFieldException -> L9
            return r0
        L9:
            r0 = move-exception
            r1 = 0
            return r1
    }

    private static java.lang.Object getUnsafeInstance() {
            java.lang.String r0 = "sun.misc.Unsafe"
            r1 = 0
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L1a
            com.google.gson.internal.reflect.UnsafeReflectionAccessor.unsafeClass = r0     // Catch: java.lang.Exception -> L1a
            java.lang.Class r0 = com.google.gson.internal.reflect.UnsafeReflectionAccessor.unsafeClass     // Catch: java.lang.Exception -> L1a
            java.lang.String r2 = "theUnsafe"
            java.lang.reflect.Field r0 = r0.getDeclaredField(r2)     // Catch: java.lang.Exception -> L1a
            r2 = 1
            r0.setAccessible(r2)     // Catch: java.lang.Exception -> L1a
            java.lang.Object r1 = r0.get(r1)     // Catch: java.lang.Exception -> L1a
            return r1
        L1a:
            r0 = move-exception
            return r1
    }

    @Override
    public void makeAccessible(java.lang.reflect.AccessibleObject r6) {
            r5 = this;
            boolean r0 = r5.makeAccessibleWithUnsafe(r6)
            if (r0 != 0) goto L28
            r1 = 1
            r6.setAccessible(r1)     // Catch: java.lang.SecurityException -> Lb
            goto L28
        Lb:
            r1 = move-exception
            com.google.gson.JsonIOException r2 = new com.google.gson.JsonIOException
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "Gson couldn't modify fields for "
            r3.append(r4)
            r3.append(r6)
            java.lang.String r4 = "\nand sun.misc.Unsafe not found.\nEither write a custom type adapter, or make fields accessible, or include sun.misc.Unsafe."
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            r2.<init>(r3, r1)
            throw r2
        L28:
            return
    }

    boolean makeAccessibleWithUnsafe(java.lang.reflect.AccessibleObject r12) {
            r11 = this;
            java.lang.Object r0 = r11.theUnsafe
            r1 = 0
            if (r0 == 0) goto L59
            java.lang.reflect.Field r0 = r11.overrideField
            if (r0 == 0) goto L59
            java.lang.Class r0 = com.google.gson.internal.reflect.UnsafeReflectionAccessor.unsafeClass     // Catch: java.lang.Exception -> L58
            java.lang.String r2 = "objectFieldOffset"
            r3 = 1
            java.lang.Class[] r4 = new java.lang.Class[r3]     // Catch: java.lang.Exception -> L58
            java.lang.Class<java.lang.reflect.Field> r5 = java.lang.reflect.Field.class
            r4[r1] = r5     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Method r0 = r0.getMethod(r2, r4)     // Catch: java.lang.Exception -> L58
            java.lang.Object r2 = r11.theUnsafe     // Catch: java.lang.Exception -> L58
            java.lang.Object[] r4 = new java.lang.Object[r3]     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Field r5 = r11.overrideField     // Catch: java.lang.Exception -> L58
            r4[r1] = r5     // Catch: java.lang.Exception -> L58
            java.lang.Object r2 = r0.invoke(r2, r4)     // Catch: java.lang.Exception -> L58
            java.lang.Long r2 = (java.lang.Long) r2     // Catch: java.lang.Exception -> L58
            long r4 = r2.longValue()     // Catch: java.lang.Exception -> L58
            java.lang.Class r2 = com.google.gson.internal.reflect.UnsafeReflectionAccessor.unsafeClass     // Catch: java.lang.Exception -> L58
            java.lang.String r6 = "putBoolean"
            r7 = 3
            java.lang.Class[] r8 = new java.lang.Class[r7]     // Catch: java.lang.Exception -> L58
            java.lang.Class<java.lang.Object> r9 = java.lang.Object.class
            r8[r1] = r9     // Catch: java.lang.Exception -> L58
            java.lang.Class r9 = java.lang.Long.TYPE     // Catch: java.lang.Exception -> L58
            r8[r3] = r9     // Catch: java.lang.Exception -> L58
            java.lang.Class r9 = java.lang.Boolean.TYPE     // Catch: java.lang.Exception -> L58
            r10 = 2
            r8[r10] = r9     // Catch: java.lang.Exception -> L58
            java.lang.reflect.Method r2 = r2.getMethod(r6, r8)     // Catch: java.lang.Exception -> L58
            java.lang.Object r6 = r11.theUnsafe     // Catch: java.lang.Exception -> L58
            java.lang.Object[] r7 = new java.lang.Object[r7]     // Catch: java.lang.Exception -> L58
            r7[r1] = r12     // Catch: java.lang.Exception -> L58
            java.lang.Long r8 = java.lang.Long.valueOf(r4)     // Catch: java.lang.Exception -> L58
            r7[r3] = r8     // Catch: java.lang.Exception -> L58
            java.lang.Boolean r8 = java.lang.Boolean.valueOf(r3)     // Catch: java.lang.Exception -> L58
            r7[r10] = r8     // Catch: java.lang.Exception -> L58
            r2.invoke(r6, r7)     // Catch: java.lang.Exception -> L58
            return r3
        L58:
            r0 = move-exception
        L59:
            return r1
    }
}
