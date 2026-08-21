package com.tkay.expressad.atsignalcommon.b;

import com.tkay.expressad.atsignalcommon.b.b;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

/* JADX INFO: loaded from: classes3.dex */
public final class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static a f6408a;

    public interface a {
        boolean a();
    }

    public static abstract class b {

        public static class a extends Throwable {
            private static final long d = 1;

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private Class<?> f6409a;
            private String b;
            private String c;

            public a(String str) {
                super(str);
            }

            public a(Exception exc) {
                super(exc);
            }

            @Override // java.lang.Throwable
            public final String toString() {
                if (getCause() == null) {
                    return super.toString();
                }
                return getClass().getName() + ": " + getCause();
            }

            public final Class<?> a() {
                return this.f6409a;
            }

            public final void a(Class<?> cls) {
                this.f6409a = cls;
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private Object f6412a;
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
                return (T) this.b.get(this.f6412a);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            }
        }

        private void a(Object obj) {
            try {
                this.b.set(this.f6412a, obj);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            }
        }

        private void a(b.AbstractC0431b<?> abstractC0431b) {
            T tA = a();
            if (tA == null) {
                throw new IllegalStateException("Cannot mapping null");
            }
            try {
                this.b.set(this.f6412a, com.tkay.expressad.atsignalcommon.b.b.a(tA, abstractC0431b, tA.getClass().getInterfaces()));
            } catch (IllegalAccessException e) {
                e.printStackTrace();
            }
        }

        private e<C, T> b(C c) {
            this.f6412a = c;
            return this;
        }

        e(Class<C> cls, String str, int i) {
            Field declaredField = null;
            if (cls == null) {
                return;
            }
            try {
                this.f6412a = null;
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

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected final Method f6413a;

        public final Object a(Object obj, Object... objArr) {
            try {
                return this.f6413a.invoke(obj, objArr);
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
                this.f6413a = declaredMethod;
            }
        }

        public final Method a() {
            return this.f6413a;
        }
    }

    public static class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected Constructor<?> f6411a;

        d(Class<?> cls, Class<?>[] clsArr) throws b.a {
            if (cls == null) {
                return;
            }
            try {
                this.f6411a = cls.getDeclaredConstructor(clsArr);
            } catch (NoSuchMethodException e) {
                b.a aVar = new b.a(e);
                aVar.a(cls);
                c.b(aVar);
            }
        }

        private Object a(Object... objArr) {
            this.f6411a.setAccessible(true);
            try {
                return this.f6411a.newInstance(objArr);
            } catch (Exception e) {
                e.printStackTrace();
                return null;
            }
        }
    }

    /* JADX INFO: renamed from: com.tkay.expressad.atsignalcommon.b.c$c, reason: collision with other inner class name */
    public static class C0432c<C> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected Class<C> f6410a;

        private e<C, Object> a(String str) {
            return new e<>(this.f6410a, str, 8);
        }

        private e<C, Object> b(String str) {
            return new e<>(this.f6410a, str, 0);
        }

        private f b(String str, Class<?>... clsArr) {
            return new f(this.f6410a, str, clsArr, 8);
        }

        public final f a(String str, Class<?>... clsArr) {
            return new f(this.f6410a, str, clsArr, 0);
        }

        private d a(Class<?>... clsArr) {
            return new d(this.f6410a, clsArr);
        }

        public C0432c(Class<C> cls) {
            this.f6410a = cls;
        }

        private Class<C> a() {
            return this.f6410a;
        }
    }

    private static <T> C0432c<T> a(Class<T> cls) {
        return new C0432c<>(cls);
    }

    private static <T> C0432c<T> a(String str) throws b.a {
        try {
            return new C0432c<>(Class.forName(str));
        } catch (ClassNotFoundException e2) {
            b(new b.a(e2));
            return new C0432c<>(null);
        }
    }

    public static <T> C0432c<T> a(ClassLoader classLoader, String str) throws b.a {
        try {
            return new C0432c<>(classLoader.loadClass(str));
        } catch (Exception e2) {
            b(new b.a(e2));
            return new C0432c<>(null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(b.a aVar) throws b.a {
        a aVar2 = f6408a;
        if (aVar2 == null || !aVar2.a()) {
            throw aVar;
        }
    }

    private static void a(a aVar) {
        f6408a = aVar;
    }

    private c() {
    }
}
