package com.alipay.sdk.m.j0;

public class b {
    public static final java.lang.String a = "IdentifierManager";
    public static java.lang.Object b;
    public static java.lang.Class<?> c;
    public static java.lang.reflect.Method d;
    public static java.lang.reflect.Method e;
    public static java.lang.reflect.Method f;
    public static java.lang.reflect.Method g;

    static {
            java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.c = r0     // Catch: java.lang.Exception -> L51
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.b = r0     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r0 = com.alipay.sdk.m.j0.b.c     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getUDID"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.d = r0     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r0 = com.alipay.sdk.m.j0.b.c     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getOAID"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.e = r0     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r0 = com.alipay.sdk.m.j0.b.c     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getVAID"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.f = r0     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r0 = com.alipay.sdk.m.j0.b.c     // Catch: java.lang.Exception -> L51
            java.lang.String r1 = "getAAID"
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r2[r5] = r3     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Exception -> L51
            com.alipay.sdk.m.j0.b.g = r0     // Catch: java.lang.Exception -> L51
            goto L59
        L51:
            r0 = move-exception
            java.lang.String r1 = "IdentifierManager"
            java.lang.String r2 = "reflect exception!"
            android.util.Log.e(r1, r2, r0)
        L59:
            return
    }

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r1) {
            java.lang.reflect.Method r0 = com.alipay.sdk.m.j0.b.g
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String a(android.content.Context r3, java.lang.reflect.Method r4) {
            java.lang.Object r0 = com.alipay.sdk.m.j0.b.b
            if (r0 == 0) goto L1d
            if (r4 == 0) goto L1d
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L15
            r2 = 0
            r1[r2] = r3     // Catch: java.lang.Exception -> L15
            java.lang.Object r3 = r4.invoke(r0, r1)     // Catch: java.lang.Exception -> L15
            if (r3 == 0) goto L1d
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L15
            return r3
        L15:
            r3 = move-exception
            java.lang.String r4 = "IdentifierManager"
            java.lang.String r0 = "invoke exception!"
            android.util.Log.e(r4, r0, r3)
        L1d:
            r3 = 0
            return r3
    }

    public static boolean a() {
            java.lang.Class<?> r0 = com.alipay.sdk.m.j0.b.c
            if (r0 == 0) goto La
            java.lang.Object r0 = com.alipay.sdk.m.j0.b.b
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public static java.lang.String b(android.content.Context r1) {
            java.lang.reflect.Method r0 = com.alipay.sdk.m.j0.b.e
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String c(android.content.Context r1) {
            java.lang.reflect.Method r0 = com.alipay.sdk.m.j0.b.d
            java.lang.String r1 = a(r1, r0)
            return r1
    }

    public static java.lang.String d(android.content.Context r1) {
            java.lang.reflect.Method r0 = com.alipay.sdk.m.j0.b.f
            java.lang.String r1 = a(r1, r0)
            return r1
    }
}
