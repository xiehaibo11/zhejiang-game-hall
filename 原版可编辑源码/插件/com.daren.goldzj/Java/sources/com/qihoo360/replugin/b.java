package com.qihoo360.replugin;

import java.lang.reflect.Method;
import library.h;

public class b {
    private ClassLoader a;
    private String b;
    private String c;
    private Class<?>[] d;
    private Method e = null;
    private boolean f = false;
    private boolean g = false;

    public b(ClassLoader classLoader, String str, String str2, Class<?>[] clsArr) {
        this.a = classLoader;
        this.b = str;
        this.c = str2;
        this.d = clsArr;
    }

    public Object a(Object obj, Object... objArr) {
        if (!this.f) {
            try {
                this.f = true;
                this.e = h.a(this.a, this.b, this.c, this.d);
                this.g = true;
            } catch (Exception unused) {
            }
        }
        Method method = this.e;
        if (method == null) {
            return null;
        }
        try {
            return h.a(method, obj, objArr);
        } catch (Exception unused2) {
            return null;
        }
    }
}
