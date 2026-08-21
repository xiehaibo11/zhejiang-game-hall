package library;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public final class h {
    public static Object a(ClassLoader classLoader, String str, String str2, Object obj, Class<?>[] clsArr, Object... objArr) {
        if (obj == null) {
            return null;
        }
        return a(a(classLoader, str, str2, clsArr), obj, objArr);
    }

    public static Object a(Method method, Object obj, Object... objArr) throws IllegalAccessException, InvocationTargetException {
        if (method == null) {
            return null;
        }
        boolean zIsAccessible = method.isAccessible();
        if (!zIsAccessible) {
            method.setAccessible(true);
        }
        Object objInvoke = method.invoke(obj, objArr);
        if (!zIsAccessible) {
            method.setAccessible(false);
        }
        return objInvoke;
    }

    public static Method a(ClassLoader classLoader, String str, String str2, Class<?>[] clsArr) throws ClassNotFoundException {
        Class<?> cls = Class.forName(str, false, classLoader);
        if (cls != null) {
            return cls.getDeclaredMethod(str2, clsArr);
        }
        return null;
    }
}
