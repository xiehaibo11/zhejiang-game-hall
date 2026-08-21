package com.qihoo360.replugin;

import java.lang.reflect.Method;
import library.h;

public class b {
    private ClassLoader a;
    private String b;
    private String c;
    private Class<?>[] d;
    private Method e;
    private boolean f;
    private boolean g;

    public b(ClassLoader r1, String r2, String r3, Class<?>[] r4) {
        this.a = r1;
        this.b = r2;
        this.c = r3;
        this.d = r4;
        this.e = null;
        this.f = false;
        this.g = false;
    }

    public Object a(Object r6, Object... r7) {
        if (this.f == false) goto L15;
    L8:
        Method r0 = this.e;
        if (r0 != null) goto L17;
        return null;
    L17:
        return h.a(r0, r6, r7);
    L19:
        return null;
    L15:
        this.f = true;     // Catch: Exception -> L7
        this.e = h.a(this.a, this.b, this.c, this.d);     // Catch: Exception -> L7
        this.g = true;     // Catch: Exception -> L7
        goto L8
    }
}
