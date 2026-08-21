package library;

public final class h {
    public static java.lang.Object a(java.lang.ClassLoader r0, java.lang.String r1, java.lang.String r2, java.lang.Object r3, java.lang.Class<?>[] r4, java.lang.Object... r5) {
            if (r3 != 0) goto L4
            r0 = 0
            return r0
        L4:
            java.lang.reflect.Method r0 = a(r0, r1, r2, r4)
            java.lang.Object r0 = a(r0, r3, r5)
            return r0
    }

    public static java.lang.Object a(java.lang.reflect.Method r2, java.lang.Object r3, java.lang.Object... r4) {
            if (r2 == 0) goto L17
            boolean r0 = r2.isAccessible()
            if (r0 != 0) goto Lc
            r1 = 1
            r2.setAccessible(r1)
        Lc:
            java.lang.Object r3 = r2.invoke(r3, r4)
            if (r0 != 0) goto L16
            r4 = 0
            r2.setAccessible(r4)
        L16:
            return r3
        L17:
            r2 = 0
            return r2
    }

    public static java.lang.reflect.Method a(java.lang.ClassLoader r1, java.lang.String r2, java.lang.String r3, java.lang.Class<?>[] r4) {
            r0 = 0
            java.lang.Class r1 = java.lang.Class.forName(r2, r0, r1)
            if (r1 == 0) goto Lc
            java.lang.reflect.Method r1 = r1.getDeclaredMethod(r3, r4)
            return r1
        Lc:
            r1 = 0
            return r1
    }
}
