package com.mbridge.msdk.mbjscommon.b;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public final class a {
    private static a a;

    public interface a {
        boolean a(b.a aVar);
    }

    public static abstract class b {

        public static class a extends Throwable {
            private Class<?> a;
            private String b;

            public a(String str) {
                super(str);
            }

            public a(Exception exc) {
                super(exc);
            }

            @Override
            public final String toString() {
                if (getCause() == null) {
                    return super.toString();
                }
                return getClass().getName() + ": " + getCause();
            }

            public final void a(Class<?> cls) {
                this.a = cls;
            }

            public final void a(String str) {
                this.b = str;
            }
        }
    }

    public static class d {
        protected final Method a;

        public final Object a(Object obj, Object... objArr) throws IllegalArgumentException, InvocationTargetException {
            try {
                return this.a.invoke(obj, objArr);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            }
        }

        d(Class<?> cls, String str, Class<?>[] clsArr, int i) throws b.a {
            Method declaredMethod = null;
            if (cls == null) {
                return;
            }
            while (cls != Object.class) {
                try {
                    declaredMethod = cls.getDeclaredMethod(str, clsArr);
                    break;
                } catch (NoSuchMethodException e) {
                    e.printStackTrace();
                    cls = cls.getSuperclass();
                } catch (SecurityException e2) {
                    try {
                        try {
                            e2.printStackTrace();
                            cls = cls.getSuperclass();
                        } catch (Exception e3) {
                            b.a aVar = new b.a(e3);
                            aVar.a(cls);
                            aVar.a(str);
                            a.b(aVar);
                        }
                    } finally {
                        this.a = declaredMethod;
                    }
                }
            }
            if (i > 0 && (declaredMethod.getModifiers() & i) != i) {
                a.b(new b.a(declaredMethod + " does not match modifiers: " + i));
            }
            declaredMethod.setAccessible(true);
        }

        public final Method a() {
            return this.a;
        }
    }

    public static class c<C> {
        protected Class<C> a;

        public final d a(String str, Class<?>... clsArr) throws b.a {
            return new d(this.a, str, clsArr, 0);
        }

        public c(Class<C> cls) {
            this.a = cls;
        }
    }

    public static <T> c<T> a(ClassLoader classLoader, String str) throws b.a {
        try {
            return new c<>(classLoader.loadClass(str));
        } catch (Exception e) {
            b(new b.a(e));
            return new c<>(null);
        }
    }

    private static void b(b.a aVar) throws b.a {
        a aVar2 = a;
        if (aVar2 == null || !aVar2.a(aVar)) {
            throw aVar;
        }
    }
}
