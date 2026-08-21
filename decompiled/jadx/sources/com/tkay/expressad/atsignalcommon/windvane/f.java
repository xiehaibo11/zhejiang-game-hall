package com.tkay.expressad.atsignalcommon.windvane;

import java.lang.reflect.InvocationHandler;
import java.lang.reflect.Method;
import java.lang.reflect.Proxy;

/* JADX INFO: loaded from: classes3.dex */
public class f {

    private interface a {
    }

    public static abstract class b<T> implements InvocationHandler {

        /* JADX INFO: renamed from: a, reason: collision with root package name */
        private T f6440a;

        private T a() {
            return this.f6440a;
        }

        final void a(T t) {
            this.f6440a = t;
        }

        @Override // java.lang.reflect.InvocationHandler
        public Object invoke(Object obj, Method method, Object[] objArr) {
            return method.invoke(this.f6440a, objArr);
        }
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static <T> T a(Object obj, Class<T> cls, b<T> bVar) {
        if (obj instanceof a) {
            return obj;
        }
        bVar.a(obj);
        return (T) Proxy.newProxyInstance(f.class.getClassLoader(), new Class[]{cls, a.class}, bVar);
    }

    /* JADX WARN: Multi-variable type inference failed */
    private static <T> T a(Object obj, b<T> bVar, Class<?>... clsArr) {
        if (Proxy.isProxyClass(obj.getClass())) {
            return obj;
        }
        bVar.a(obj);
        return (T) Proxy.newProxyInstance(f.class.getClassLoader(), clsArr, bVar);
    }

    private f() {
    }
}
