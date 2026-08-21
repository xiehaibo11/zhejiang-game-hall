package com.tkay.expressad.atsignalcommon.b;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

public class b {

    private interface a {
    }

    public static abstract class b<T> implements InvocationHandler {
        private T a;

        private T a() {
            return this.a;
        }

        final void a(T t) {
            this.a = t;
        }

        @Override
        public Object invoke(Object obj, Method method, Object[] objArr) throws Throwable {
            try {
                return method.invoke(this.a, objArr);
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
    private static <T> T a(Object obj, Class<T> cls, b<T> bVar) {
        if (obj instanceof a) {
            return obj;
        }
        bVar.a(obj);
        return (T) Proxy.newProxyInstance(b.class.getClassLoader(), new Class[]{cls, a.class}, bVar);
    }

    public static <T> T a(Object obj, b<T> bVar, Class<?>... clsArr) {
        bVar.a(obj);
        return (T) Proxy.newProxyInstance(b.class.getClassLoader(), clsArr, bVar);
    }

    private b() {
    }
}
