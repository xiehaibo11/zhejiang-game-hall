package com.tkay.expressad.atsignalcommon.b;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

/* JADX INFO: loaded from: classes3.dex */
public class b {

    private interface a {
    }

    /* JADX INFO: renamed from: com.tkay.expressad.atsignalcommon.b.b$b, reason: collision with other inner class name */
    public static abstract class AbstractC0431b<T> implements InvocationHandler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private T f6407a;

        private T a() {
            return this.f6407a;
        }

        final void a(T t) {
            this.f6407a = t;
        }

        @Override // java.lang.reflect.InvocationHandler
        public Object invoke(Object obj, Method method, Object[] objArr) throws Throwable {
            try {
                return method.invoke(this.f6407a, objArr);
            } catch (IllegalAccessException e) {
                e.printStackTrace();
                return null;
            } catch (IllegalArgumentException e2) {
                e2.printStackTrace();
                return null;
            } catch (InvocationTargetException e3) {
                throw e3.getTargetException();
            }
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static <T> T a(Object obj, Class<T> cls, AbstractC0431b<T> abstractC0431b) {
        if (obj instanceof a) {
            return obj;
        }
        abstractC0431b.a(obj);
        return (T) Proxy.newProxyInstance(b.class.getClassLoader(), new Class[]{cls, a.class}, abstractC0431b);
    }

    public static <T> T a(Object obj, AbstractC0431b<T> abstractC0431b, Class<?>... clsArr) {
        abstractC0431b.a(obj);
        return (T) Proxy.newProxyInstance(b.class.getClassLoader(), clsArr, abstractC0431b);
    }

    private b() {
    }
}
