package com.meizu.cloud.pushsdk.b.b;

import com.meizu.cloud.pushinternal.DebugLogger;
import java.lang.reflect.Method;
import java.util.Arrays;
import java.util.HashMap;

/* JADX INFO: loaded from: classes3.dex */
public class c {

    /* JADX INFO: renamed from: a, reason: collision with root package name */
    private static final HashMap<String, Method> f4493a = new HashMap<>();
    private final com.meizu.cloud.pushsdk.b.b.a b;
    private final String c;
    private Class<?>[] d;

    class a {
    }

    c(com.meizu.cloud.pushsdk.b.b.a aVar, String str, Class<?>... clsArr) {
        this.b = aVar;
        this.c = str;
        this.d = clsArr;
    }

    private Class<?> a(Class<?> cls) {
        if (cls == null) {
            return null;
        }
        return cls.isPrimitive() ? Boolean.TYPE == cls ? Boolean.class : Integer.TYPE == cls ? Integer.class : Long.TYPE == cls ? Long.class : Short.TYPE == cls ? Short.class : Byte.TYPE == cls ? Byte.class : Double.TYPE == cls ? Double.class : Float.TYPE == cls ? Float.class : Character.TYPE == cls ? Character.class : Void.TYPE == cls ? Void.class : cls : cls;
    }

    private Method a() throws NoSuchMethodException {
        Class<?> clsA = this.b.a();
        for (Method method : clsA.getMethods()) {
            if (a(method, this.c, this.d)) {
                return method;
            }
        }
        for (Method method2 : clsA.getDeclaredMethods()) {
            if (a(method2, this.c, this.d)) {
                return method2;
            }
        }
        throw new NoSuchMethodException("No similar method " + this.c + " with params " + Arrays.toString(this.d) + " could be found on type " + clsA);
    }

    private boolean a(Method method, String str, Class<?>[] clsArr) {
        return method.getName().equals(str) && a(method.getParameterTypes(), clsArr);
    }

    private boolean a(Class<?>[] clsArr, Class<?>[] clsArr2) {
        if (clsArr.length != clsArr2.length) {
            return false;
        }
        for (int i = 0; i < clsArr2.length; i++) {
            if (clsArr2[i] != a.class && !a(clsArr[i]).isAssignableFrom(a(clsArr2[i]))) {
                return false;
            }
        }
        return true;
    }

    private String b() {
        StringBuilder sb = new StringBuilder(this.b.a().getName());
        sb.append(this.c);
        for (Class<?> cls : this.d) {
            sb.append(cls.getName());
        }
        return sb.toString();
    }

    public <T> d<T> a(Object obj, Object... objArr) {
        d<T> dVar = new d<>();
        try {
            String strB = b();
            Method methodA = f4493a.get(strB);
            if (methodA == null) {
                if (this.d.length == objArr.length) {
                    methodA = this.b.a().getMethod(this.c, this.d);
                } else {
                    if (objArr.length > 0) {
                        this.d = new Class[objArr.length];
                        for (int i = 0; i < objArr.length; i++) {
                            this.d[i] = objArr[i].getClass();
                        }
                    }
                    methodA = a();
                }
                f4493a.put(strB, methodA);
            }
            methodA.setAccessible(true);
            dVar.b = (T) methodA.invoke(obj, objArr);
            dVar.f4494a = true;
        } catch (Exception e) {
            DebugLogger.d("ReflectMethod", "invoke exception, " + e.getMessage());
        }
        return dVar;
    }

    public <T> d<T> a(Object... objArr) {
        try {
            return a(this.b.a(), objArr);
        } catch (ClassNotFoundException unused) {
            return new d<>();
        }
    }
}
