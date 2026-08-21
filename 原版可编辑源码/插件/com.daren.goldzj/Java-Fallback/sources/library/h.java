package library;

import java.lang.reflect.Method;

public final class h {
    public static Object a(ClassLoader r0, String r1, String r2, Object r3, Class<?>[] r4, Object... r5) {
        if (r3 != null) goto L6;
        return null;
    L6:
        return a(a(r0, r1, r2, r4), r3, r5);
    }

    public static Object a(Method r2, Object r3, Object... r4) {
        if (r2 == null) goto L10;
        boolean r0 = r2.isAccessible();
        if (r0 == true) goto L6;
        r2.setAccessible(true);
    L6:
        Object r32 = r2.invoke(r3, r4);
        if (r0 == true) goto L9;
        r2.setAccessible(false);
    L9:
        return r32;
    L10:
        return null;
    }

    public static Method a(ClassLoader r1, String r2, String r3, Class<?>[] r4) {
        Class<?> r12 = Class.forName(r2, false, r1);
        if (r12 != null) goto L5;
        return null;
    L5:
        return r12.getDeclaredMethod(r3, r4);
    }
}
