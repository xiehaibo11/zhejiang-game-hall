package com.qihoo360.replugin;

public class b {
    private java.lang.ClassLoader a;
    private java.lang.String b;
    private java.lang.String c;
    private java.lang.Class<?>[] d;
    private java.lang.reflect.Method e;
    private boolean f;
    private boolean g;

    public b(java.lang.ClassLoader r1, java.lang.String r2, java.lang.String r3, java.lang.Class<?>[] r4) {
            r0 = this;
            r0.<init>()
            r0.a = r1
            r0.b = r2
            r0.c = r3
            r0.d = r4
            r1 = 0
            r0.e = r1
            r1 = 0
            r0.f = r1
            r0.g = r1
            return
    }

    public java.lang.Object a(java.lang.Object r6, java.lang.Object... r7) {
            r5 = this;
            boolean r0 = r5.f
            if (r0 != 0) goto L19
            r0 = 1
            r5.f = r0     // Catch: java.lang.Exception -> L18
            java.lang.ClassLoader r1 = r5.a     // Catch: java.lang.Exception -> L18
            java.lang.String r2 = r5.b     // Catch: java.lang.Exception -> L18
            java.lang.String r3 = r5.c     // Catch: java.lang.Exception -> L18
            java.lang.Class<?>[] r4 = r5.d     // Catch: java.lang.Exception -> L18
            java.lang.reflect.Method r1 = library.h.a(r1, r2, r3, r4)     // Catch: java.lang.Exception -> L18
            r5.e = r1     // Catch: java.lang.Exception -> L18
            r5.g = r0     // Catch: java.lang.Exception -> L18
            goto L19
        L18:
        L19:
            java.lang.reflect.Method r0 = r5.e
            if (r0 == 0) goto L22
            java.lang.Object r6 = library.h.a(r0, r6, r7)     // Catch: java.lang.Exception -> L22
            return r6
        L22:
            r6 = 0
            return r6
    }
}
