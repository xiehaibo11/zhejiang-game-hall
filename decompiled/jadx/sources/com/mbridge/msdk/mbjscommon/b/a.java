package com.mbridge.msdk.mbjscommon.b;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

/* JADX INFO: compiled from: Hack.java */
/* JADX INFO: loaded from: classes2.dex */
public final class a {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static InterfaceC0269a f3689a;

    /* JADX INFO: renamed from: com.mbridge.msdk.mbjscommon.b.a$a, reason: collision with other inner class name */
    /* JADX INFO: compiled from: Hack.java */
    public interface InterfaceC0269a {
        boolean a(b.C0270a c0270a);
    }

    /* JADX INFO: compiled from: Hack.java */
    public static abstract class b {

        /* JADX INFO: renamed from: com.mbridge.msdk.mbjscommon.b.a$b$a, reason: collision with other inner class name */
        /* JADX INFO: compiled from: Hack.java */
        public static class C0270a extends Throwable {

            /* JADX INFO: renamed from: a, reason: collision with root package name */
            private Class<?> f3690a;
            private String b;

            public C0270a(String str) {
                super(str);
            }

            public C0270a(Exception exc) {
                super(exc);
            }

            @Override // java.lang.Throwable
            public final String toString() {
                if (getCause() == null) {
                    return super.toString();
                }
                return getClass().getName() + ": " + getCause();
            }

            public final void a(Class<?> cls) {
                this.f3690a = cls;
            }

            public final void a(String str) {
                this.b = str;
            }
        }
    }

    /* JADX INFO: compiled from: Hack.java */
    public static class d {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected final Method f3692a;

        public final Object a(Object obj, Object... objArr) throws IllegalArgumentException, InvocationTargetException {
            try {
                return this.f3692a.invoke(obj, objArr);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            }
        }

        d(Class<?> cls, String str, Class<?>[] clsArr, int i) throws b.C0270a {
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
                            b.C0270a c0270a = new b.C0270a(e3);
                            c0270a.a(cls);
                            c0270a.a(str);
                            a.b(c0270a);
                        }
                    } finally {
                        this.f3692a = declaredMethod;
                    }
                }
            }
            if (i > 0 && (declaredMethod.getModifiers() & i) != i) {
                a.b(new b.C0270a(declaredMethod + " does not match modifiers: " + i));
            }
            declaredMethod.setAccessible(true);
        }

        public final Method a() {
            return this.f3692a;
        }
    }

    /* JADX INFO: compiled from: Hack.java */
    public static class c<C> {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        protected Class<C> f3691a;

        public final d a(String str, Class<?>... clsArr) throws b.C0270a {
            return new d(this.f3691a, str, clsArr, 0);
        }

        public c(Class<C> cls) {
            this.f3691a = cls;
        }
    }

    public static <T> c<T> a(ClassLoader classLoader, String str) throws b.C0270a {
        try {
            return new c<>(classLoader.loadClass(str));
        } catch (Exception e) {
            b(new b.C0270a(e));
            return new c<>(null);
        }
    }

    /* JADX INFO: Access modifiers changed from: private */
    public static void b(b.C0270a c0270a) throws b.C0270a {
        InterfaceC0269a interfaceC0269a = f3689a;
        if (interfaceC0269a == null || !interfaceC0269a.a(c0270a)) {
            throw c0270a;
        }
    }
}
