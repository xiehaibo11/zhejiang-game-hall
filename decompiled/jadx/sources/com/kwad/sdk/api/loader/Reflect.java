package com.kwad.sdk.api.loader;

import java.lang.reflect.AccessibleObject;
import java.lang.reflect.Constructor;
import java.lang.reflect.Field;
import java.lang.reflect.Member;
import java.lang.reflect.Method;
import java.lang.reflect.Modifier;
import java.util.Arrays;

/* JADX INFO: loaded from: classes2.dex */
public final class Reflect {
    private final Class<?> aiX;
    private final Object aiY;

    public static class ReflectException extends RuntimeException {
        private static final long serialVersionUID = -6213149635297151442L;

        public ReflectException() {
        }

        public ReflectException(String str) {
            super(str);
        }

        public ReflectException(String str, Throwable th) {
            super(str, th);
        }

        public ReflectException(Throwable th) {
            super(th);
        }
    }

    static class a {
        private static final Method aiZ;
        private static final Method aja;
        private static final Method ajb;
        private static final Method ajc;
        private static final Method ajd;
        private static final Method aje;
        private static final Method ajf;
        private static final Method ajg;
        private static final Method ajh;
        private static final Method aji;
        private static final Method ajj;
        private static final Method ajk;
        private static final Method ajl;
        private static final Method ajm;

        static {
            try {
                aiZ = Class.class.getDeclaredMethod("forName", String.class);
                aja = Class.class.getDeclaredMethod("forName", String.class, Boolean.TYPE, ClassLoader.class);
                ajb = Class.class.getDeclaredMethod("getDeclaredField", String.class);
                ajc = Class.class.getDeclaredMethod("getDeclaredFields", new Class[0]);
                ajd = Class.class.getDeclaredMethod("getDeclaredMethod", String.class, Class[].class);
                aje = Class.class.getDeclaredMethod("getDeclaredMethods", new Class[0]);
                ajf = Class.class.getDeclaredMethod("getDeclaredConstructor", Class[].class);
                ajg = Class.class.getDeclaredMethod("getDeclaredConstructors", new Class[0]);
                ajh = Class.class.getDeclaredMethod("getField", String.class);
                aji = Class.class.getDeclaredMethod("getFields", new Class[0]);
                ajj = Class.class.getDeclaredMethod("getMethod", String.class, Class[].class);
                ajk = Class.class.getDeclaredMethod("getMethods", new Class[0]);
                ajl = Class.class.getDeclaredMethod("getConstructor", Class[].class);
                ajm = Class.class.getDeclaredMethod("getConstructors", new Class[0]);
            } catch (NoSuchMethodException e) {
                throw new ReflectException(e);
            }
        }

        static Constructor a(Class cls, Class<?>... clsArr) throws NoSuchMethodException {
            try {
                return (Constructor) ajf.invoke(cls, clsArr);
            } catch (Exception e) {
                NoSuchMethodException noSuchMethodException = new NoSuchMethodException();
                noSuchMethodException.initCause(e);
                throw noSuchMethodException;
            }
        }

        static Field a(Class cls, String str) throws NoSuchFieldException {
            try {
                return (Field) ajb.invoke(cls, str);
            } catch (Exception e) {
                NoSuchFieldException noSuchFieldException = new NoSuchFieldException();
                noSuchFieldException.initCause(e);
                throw noSuchFieldException;
            }
        }

        static Field b(Class cls, String str) throws NoSuchFieldException {
            try {
                return (Field) ajh.invoke(cls, str);
            } catch (Exception e) {
                NoSuchFieldException noSuchFieldException = new NoSuchFieldException();
                noSuchFieldException.initCause(e);
                throw noSuchFieldException;
            }
        }

        static Method c(Class cls, String str, Class<?>... clsArr) throws NoSuchMethodException {
            try {
                return (Method) ajd.invoke(cls, str, clsArr);
            } catch (Exception e) {
                NoSuchMethodException noSuchMethodException = new NoSuchMethodException();
                noSuchMethodException.initCause(e);
                throw noSuchMethodException;
            }
        }

        static Method[] c(Class cls) {
            try {
                return (Method[]) aje.invoke(cls, new Object[0]);
            } catch (Exception e) {
                throw new ReflectException(e);
            }
        }

        static Method d(Class cls, String str, Class<?>... clsArr) throws NoSuchMethodException {
            try {
                return (Method) ajj.invoke(cls, str, clsArr);
            } catch (Exception e) {
                NoSuchMethodException noSuchMethodException = new NoSuchMethodException();
                noSuchMethodException.initCause(e);
                throw noSuchMethodException;
            }
        }

        static Method[] d(Class cls) {
            try {
                return (Method[]) ajk.invoke(cls, new Object[0]);
            } catch (Exception e) {
                throw new ReflectException(e);
            }
        }

        static Constructor[] e(Class cls) {
            try {
                return (Constructor[]) ajg.invoke(cls, new Object[0]);
            } catch (Exception e) {
                throw new ReflectException(e);
            }
        }

        static Class forName(String str) throws ClassNotFoundException {
            try {
                return (Class) aiZ.invoke(null, str);
            } catch (Exception e) {
                ClassNotFoundException classNotFoundException = new ClassNotFoundException();
                classNotFoundException.initCause(e);
                throw classNotFoundException;
            }
        }
    }

    static class b {
        private b() {
        }
    }

    private Reflect(Class<?> cls) {
        this(cls, cls);
    }

    private Reflect(Class<?> cls, Object obj) {
        this.aiX = cls;
        this.aiY = obj;
    }

    public static Reflect a(Class<?> cls) {
        return new Reflect(cls);
    }

    private static Reflect a(Class<?> cls, Object obj) {
        return new Reflect(cls, obj);
    }

    private static Reflect a(Constructor<?> constructor, Object... objArr) {
        try {
            return a(constructor.getDeclaringClass(), ((Constructor) a(constructor)).newInstance(objArr));
        } catch (Exception e) {
            throw new ReflectException(e);
        }
    }

    private static Reflect a(Method method, Object obj, Object... objArr) {
        try {
            a(method);
            if (method.getReturnType() != Void.TYPE) {
                return h(method.invoke(obj, objArr));
            }
            method.invoke(obj, objArr);
            return h(obj);
        } catch (Exception e) {
            throw new ReflectException(e);
        }
    }

    private Reflect a(Object... objArr) {
        return a(b(objArr), objArr);
    }

    private static <T extends AccessibleObject> T a(T t) {
        if (t == null) {
            return null;
        }
        if (t instanceof Member) {
            Member member = (Member) t;
            if (Modifier.isPublic(member.getModifiers()) && Modifier.isPublic(member.getDeclaringClass().getModifiers())) {
                return t;
            }
        }
        if (!t.isAccessible()) {
            t.setAccessible(true);
        }
        return t;
    }

    private Method a(String str, Class<?>[] clsArr) throws NoSuchMethodException {
        Class<?> clsType = type();
        try {
            return a.d(clsType, str, clsArr);
        } catch (NoSuchMethodException unused) {
            do {
                try {
                    return a.c(clsType, str, clsArr);
                } catch (NoSuchMethodException unused2) {
                    clsType = clsType.getSuperclass();
                }
            } while (clsType != null);
            throw new NoSuchMethodException();
        }
    }

    private boolean a(Method method, String str, Class<?>[] clsArr) {
        return method.getName().equals(str) && a(method.getParameterTypes(), clsArr);
    }

    private static boolean a(Class<?>[] clsArr, Class<?>[] clsArr2) {
        if (clsArr.length != clsArr2.length) {
            return false;
        }
        for (int i = 0; i < clsArr2.length; i++) {
            if (clsArr2[i] != b.class && !b(clsArr[i]).isAssignableFrom(b(clsArr2[i]))) {
                return false;
            }
        }
        return true;
    }

    private static Class<?> b(Class<?> cls) {
        if (cls == null) {
            return null;
        }
        return cls.isPrimitive() ? Boolean.TYPE == cls ? Boolean.class : Integer.TYPE == cls ? Integer.class : Long.TYPE == cls ? Long.class : Short.TYPE == cls ? Short.class : Byte.TYPE == cls ? Byte.class : Double.TYPE == cls ? Double.class : Float.TYPE == cls ? Float.class : Character.TYPE == cls ? Character.class : Void.TYPE == cls ? Void.class : cls : cls;
    }

    private Method b(String str, Class<?>[] clsArr) throws NoSuchMethodException {
        Class<?> clsType = type();
        for (Method method : a.d(clsType)) {
            if (a(method, str, clsArr)) {
                return method;
            }
        }
        do {
            for (Method method2 : a.c(clsType)) {
                if (a(method2, str, clsArr)) {
                    return method2;
                }
            }
            clsType = clsType.getSuperclass();
        } while (clsType != null);
        throw new NoSuchMethodException("No similar method " + str + " with params " + Arrays.toString(clsArr) + " could be found on type " + type() + ".");
    }

    private static Class<?>[] b(Object... objArr) {
        if (objArr == null) {
            return new Class[0];
        }
        Class<?>[] clsArr = new Class[objArr.length];
        for (int i = 0; i < objArr.length; i++) {
            Object obj = objArr[i];
            clsArr[i] = obj == null ? b.class : obj.getClass();
        }
        return clsArr;
    }

    public static Reflect ca(String str) {
        return a(forName(str));
    }

    private Reflect cb(String str) {
        try {
            Field fieldCc = cc(str);
            return a(fieldCc.getType(), fieldCc.get(this.aiY));
        } catch (Exception e) {
            throw new ReflectException(e);
        }
    }

    private Field cc(String str) {
        Class<?> clsType = type();
        try {
            return (Field) a(a.b(clsType, str));
        } catch (NoSuchFieldException e) {
            do {
                try {
                    return (Field) a(a.a(clsType, str));
                } catch (NoSuchFieldException unused) {
                    clsType = clsType.getSuperclass();
                    if (clsType == null) {
                        throw new ReflectException(e);
                    }
                }
            } while (clsType == null);
            throw new ReflectException(e);
        }
    }

    private Reflect f(String str, Object... objArr) {
        return a(str, b(objArr), objArr);
    }

    private static Class<?> forName(String str) {
        try {
            return a.forName(str);
        } catch (Exception e) {
            throw new ReflectException(e);
        }
    }

    public static Reflect h(Object obj) {
        return new Reflect(obj == null ? Object.class : obj.getClass(), obj);
    }

    private static Object i(Object obj) {
        return obj instanceof Reflect ? ((Reflect) obj).get() : obj;
    }

    private Class<?> type() {
        return this.aiX;
    }

    public final Reflect a(String str, Class<?>[] clsArr, Object... objArr) {
        try {
            try {
                return a(a(str, clsArr), this.aiY, objArr);
            } catch (NoSuchMethodException unused) {
                return a(b(str, clsArr), this.aiY, objArr);
            }
        } catch (NoSuchMethodException e) {
            throw new ReflectException(e);
        }
    }

    public final Reflect a(Class<?>[] clsArr, Object... objArr) {
        try {
            return a((Constructor<?>) a.a(type(), clsArr), objArr);
        } catch (NoSuchMethodException e) {
            for (Constructor constructor : a.e(type())) {
                if (a(constructor.getParameterTypes(), clsArr)) {
                    return a((Constructor<?>) constructor, objArr);
                }
            }
            throw new ReflectException(e);
        }
    }

    public final Reflect b(String str, Object obj) {
        try {
            Field fieldCc = cc(str);
            if ((fieldCc.getModifiers() & 16) == 16) {
                try {
                    Field fieldA = a.a(Field.class, "modifiers");
                    fieldA.setAccessible(true);
                    fieldA.setInt(fieldCc, fieldCc.getModifiers() & (-17));
                } catch (NoSuchFieldException unused) {
                }
            }
            fieldCc.set(this.aiY, i(obj));
            return this;
        } catch (Exception e) {
            throw new ReflectException(e);
        }
    }

    public final Reflect cd(String str) {
        return f(str, new Object[0]);
    }

    public final boolean equals(Object obj) {
        if (obj instanceof Reflect) {
            return this.aiY.equals(((Reflect) obj).get());
        }
        return false;
    }

    public final <T> T get() {
        return (T) this.aiY;
    }

    public final <T> T get(String str) {
        return (T) cb(str).get();
    }

    public final int hashCode() {
        return this.aiY.hashCode();
    }

    public final String toString() {
        return String.valueOf(this.aiY);
    }

    public final Reflect yx() {
        return a(new Object[0]);
    }
}
