package com.tkay.expressad.atsignalcommon.b;

import com.tkay.expressad.atsignalcommon.b.b;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public final class c {
    private static a a;

    public interface a {
        boolean a();
    }

    public static abstract class b {

        public static class a extends Throwable {
            private static final long d = 1;
            private Class<?> a;
            private String b;
            private String c;

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

            public final Class<?> a() {
                return this.a;
            }

            public final void a(Class<?> cls) {
                this.a = cls;
            }

            public final String b() {
                return this.c;
            }

            public final void a(String str) {
                this.c = str;
            }

            public final String c() {
                return this.b;
            }

            public final void b(String str) {
                this.b = str;
            }
        }
    }

    public static class e<C, T> {
        private Object a;
        private final Field b;

        /* JADX WARN: Multi-variable type inference failed */
        private <T2> e<C, T2> a(Class<?> cls) throws b.a {
            Field field = this.b;
            if (field != null && !cls.isAssignableFrom(field.getType())) {
                c.b(new b.a(new ClassCastException(this.b + " is not of type " + cls)));
            }
            return this;
        }

        /* JADX WARN: Multi-variable type inference failed */
        private <T2> e<C, T2> b(Class<T2> cls) throws b.a {
            Field field = this.b;
            if (field != null && !cls.isAssignableFrom(field.getType())) {
                c.b(new b.a(new ClassCastException(this.b + " is not of type " + cls)));
            }
            return this;
        }

        private e<C, T> a(String str) throws b.a {
            try {
                Class<?> cls = Class.forName(str);
                if (this.b != null && !cls.isAssignableFrom(this.b.getType())) {
                    c.b(new b.a(new ClassCastException(this.b + " is not of type " + cls)));
                }
                return this;
            } catch (ClassNotFoundException e) {
                c.b(new b.a(e));
                return this;
            }
        }

        private T a() {
            try {
                return (T) this.b.get(this.a);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            }
        }

        private void a(Object obj) {
            try {
                this.b.set(this.a, obj);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            }
        }

        private void a(b.b<?> bVar) {
            T tA = a();
            if (tA == null) {
                throw new IllegalStateException("Cannot mapping null");
            }
            try {
                this.b.set(this.a, com.tkay.expressad.atsignalcommon.b.b.a(tA, bVar, tA.getClass().getInterfaces()));
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            }
        }

        private e<C, T> b(C c) {
            this.a = c;
            return this;
        }

        e(Class<C> cls, String str, int i) {
            Field declaredField = null;
            if (cls == null) {
                return;
            }
            try {
                this.a = null;
                declaredField = cls.getDeclaredField(str);
                if (i > 0 && (declaredField.getModifiers() & i) != i) {
                    c.b(new b.a(declaredField + " does not match modifiers: " + i));
                }
                declaredField.setAccessible(true);
            } catch (NoSuchFieldException e) {
                b.a aVar = new b.a(e);
                aVar.a((Class<?>) cls);
                aVar.b(str);
                c.b(aVar);
            } finally {
                this.b = declaredField;
            }
        }

        private Field b() {
            return this.b;
        }
    }

    public static class f {
        protected final Method a;

        public final Object a(Object obj, Object... objArr) {
            try {
                return this.a.invoke(obj, objArr);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            }
        }

        f(Class<?> cls, String str, Class<?>[] clsArr, int i) {
            Method declaredMethod = null;
            if (cls == null) {
                return;
            }
            try {
                declaredMethod = cls.getDeclaredMethod(str, clsArr);
                if (i > 0 && (declaredMethod.getModifiers() & i) != i) {
                    c.b(new b.a(declaredMethod + " does not match modifiers: " + i));
                }
                declaredMethod.setAccessible(true);
            } catch (NoSuchMethodException e) {
                b.a aVar = new b.a(e);
                aVar.a(cls);
                aVar.a(str);
                c.b(aVar);
            } finally {
                this.a = declaredMethod;
            }
        }

        public final Method a() {
            return this.a;
        }
    }

    public static class d {
        protected Constructor<?> a;

        d(Class<?> cls, Class<?>[] clsArr) throws b.a {
            if (cls == null) {
                return;
            }
            try {
                this.a = cls.getDeclaredConstructor(clsArr);
            } catch (NoSuchMethodException e) {
                b.a aVar = new b.a(e);
                aVar.a(cls);
                c.b(aVar);
            }
        }

        private Object a(Object... objArr) {
            this.a.setAccessible(true);
            try {
                return this.a.newInstance(objArr);
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
    }

    public static class c<C> {
        protected Class<C> a;

        private e<C, Object> a(String str) {
            return new e<>(this.a, str, 8);
        }

        private e<C, Object> b(String str) {
            return new e<>(this.a, str, 0);
        }

        private f b(String str, Class<?>... clsArr) {
            return new f(this.a, str, clsArr, 8);
        }

        public final f a(String str, Class<?>... clsArr) {
            return new f(this.a, str, clsArr, 0);
        }

        private d a(Class<?>... clsArr) {
            return new d(this.a, clsArr);
        }

        public c(Class<C> cls) {
            this.a = cls;
        }

        private Class<C> a() {
            return this.a;
        }
    }

    private static <T> c<T> a(Class<T> cls) {
        return new c<>(cls);
    }

    private static <T> c<T> a(String str) throws b.a {
        try {
            return new c<>(Class.forName(str));
        } catch (ClassNotFoundException e2) {
            b(new b.a(e2));
            return new c<>(null);
        }
    }

    public static <T> c<T> a(ClassLoader classLoader, String str) throws b.a {
        try {
            return new c<>(classLoader.loadClass(str));
        } catch (Exception e2) {
            b(new b.a(e2));
            return new c<>(null);
        }
    }

    private static void b(b.a aVar) throws b.a {
        a aVar2 = a;
        if (aVar2 == null || !aVar2.a()) {
            throw aVar;
        }
    }

    private static void a(a aVar) {
        a = aVar;
    }

    private c() {
    }
}
