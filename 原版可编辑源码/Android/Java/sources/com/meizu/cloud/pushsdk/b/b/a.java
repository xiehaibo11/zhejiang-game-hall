package com.meizu.cloud.pushsdk.b.b;

import java.util.HashMap;

public class a {
    private static final HashMap<String, Class<?>> a = new HashMap<>();
    private Class<?> b;
    private String c;
    private Object d;

    private a(Object obj) {
        this.d = obj;
    }

    private a(String str) {
        this.c = str;
    }

    public static a a(Object obj) {
        return new a(obj);
    }

    public static a a(String str) {
        return new a(str);
    }

    public b a(Class<?>... clsArr) {
        return new b(this, clsArr);
    }

    public c a(String str, Class<?>... clsArr) {
        return new c(this, str, clsArr);
    }

    Class<?> a() throws ClassNotFoundException {
        Class<?> cls = this.b;
        if (cls != null) {
            return cls;
        }
        Object obj = this.d;
        if (obj != null) {
            return obj.getClass();
        }
        Class<?> cls2 = a.get(this.c);
        if (cls2 != null) {
            return cls2;
        }
        Class<?> cls3 = Class.forName(this.c);
        a.put(this.c, cls3);
        return cls3;
    }
}
