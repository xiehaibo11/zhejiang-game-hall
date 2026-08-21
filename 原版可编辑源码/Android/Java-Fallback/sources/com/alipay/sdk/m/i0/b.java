package com.alipay.sdk.m.i0;

public class b {
    public static final java.lang.String a = "OpenIdHelper";
    public static java.lang.reflect.Method b;

    public b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(android.content.Context r2) {
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.a()
            android.content.Context r2 = r2.getApplicationContext()
            com.alipay.sdk.m.i0.a r1 = r0.c
            java.lang.String r2 = r0.a(r2, r1)
            return r2
    }

    public static void a(boolean r0) {
            com.alipay.sdk.m.i0.f.a()
            com.alipay.sdk.m.i0.f.a(r0)
            return
    }

    public static final boolean a() {
            r0 = 0
            r1 = 0
            java.lang.reflect.Method r2 = com.alipay.sdk.m.i0.b.b     // Catch: java.lang.Exception -> L26
            if (r2 != 0) goto L1a
            java.lang.String r2 = "android.app.ActivityThread"
            java.lang.Class r2 = java.lang.Class.forName(r2)     // Catch: java.lang.Exception -> L26
            java.lang.String r3 = "currentApplication"
            java.lang.Class[] r4 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L26
            java.lang.reflect.Method r2 = r2.getMethod(r3, r4)     // Catch: java.lang.Exception -> L26
            com.alipay.sdk.m.i0.b.b = r2     // Catch: java.lang.Exception -> L26
            r3 = 1
            r2.setAccessible(r3)     // Catch: java.lang.Exception -> L26
        L1a:
            java.lang.reflect.Method r2 = com.alipay.sdk.m.i0.b.b     // Catch: java.lang.Exception -> L26
            java.lang.Object[] r3 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L26
            java.lang.Object r2 = r2.invoke(r0, r3)     // Catch: java.lang.Exception -> L26
            android.content.Context r2 = (android.content.Context) r2     // Catch: java.lang.Exception -> L26
            r0 = r2
            goto L3e
        L26:
            r2 = move-exception
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            java.lang.String r4 = "ActivityThread:currentApplication --> "
            r3.<init>(r4)
            java.lang.String r2 = r2.toString()
            r3.append(r2)
            java.lang.String r2 = r3.toString()
            java.lang.String r3 = "OpenIdHelper"
            android.util.Log.e(r3, r2)
        L3e:
            if (r0 != 0) goto L41
            return r1
        L41:
            com.alipay.sdk.m.i0.f r2 = com.alipay.sdk.m.i0.f.a()
            boolean r0 = r2.a(r0, r1)
            return r0
    }

    public static java.lang.String b(android.content.Context r2) {
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.a()
            android.content.Context r2 = r2.getApplicationContext()
            com.alipay.sdk.m.i0.a r1 = r0.b
            java.lang.String r2 = r0.a(r2, r1)
            return r2
    }

    public static java.lang.String c(android.content.Context r2) {
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.a()
            android.content.Context r2 = r2.getApplicationContext()
            com.alipay.sdk.m.i0.a r1 = r0.a
            java.lang.String r2 = r0.a(r2, r1)
            return r2
    }

    public static java.lang.String d(android.content.Context r2) {
            com.alipay.sdk.m.i0.f r0 = com.alipay.sdk.m.i0.f.a()
            android.content.Context r2 = r2.getApplicationContext()
            com.alipay.sdk.m.i0.a r1 = r0.d
            java.lang.String r2 = r0.a(r2, r1)
            return r2
    }
}
