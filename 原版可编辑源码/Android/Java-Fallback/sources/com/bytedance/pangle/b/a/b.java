package com.bytedance.pangle.b.a;

public class b {
    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.reflect.Constructor a(java.lang.Class<?> r0, java.lang.Class<?>... r1) {
            java.lang.reflect.Constructor r0 = r0.getDeclaredConstructor(r1)
            if (r0 == 0) goto L10
            boolean r1 = r0.isAccessible()
            if (r1 != 0) goto L10
            r1 = 1
            r0.setAccessible(r1)
        L10:
            return r0
    }

    public static java.lang.reflect.Field a(java.lang.Class<?> r0, java.lang.String r1) {
            java.lang.reflect.Field r0 = r0.getDeclaredField(r1)
            if (r0 == 0) goto L10
            boolean r1 = r0.isAccessible()
            if (r1 != 0) goto L10
            r1 = 1
            r0.setAccessible(r1)
        L10:
            return r0
    }

    public static java.lang.reflect.Method a(java.lang.Class<?> r0, java.lang.String r1, java.lang.Class<?>... r2) {
            java.lang.reflect.Method r0 = r0.getDeclaredMethod(r1, r2)
            if (r0 == 0) goto L10
            boolean r1 = r0.isAccessible()
            if (r1 != 0) goto L10
            r1 = 1
            r0.setAccessible(r1)
        L10:
            return r0
    }
}
