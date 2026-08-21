package com.reyun.tracking.b;

final class m {
    private static java.lang.Object e;
    private static java.lang.Class f;
    private static java.lang.reflect.Method g;
    private static java.lang.reflect.Method h;
    private static java.lang.reflect.Method i;
    private static java.lang.reflect.Method j;
    final java.lang.String a;
    final java.lang.String b;
    final java.lang.String c;
    final java.lang.String d;

    static {
            java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.f = r0     // Catch: java.lang.Throwable -> L50
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.e = r0     // Catch: java.lang.Throwable -> L50
            java.lang.Class r0 = com.reyun.tracking.b.m.f     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "getUDID"
            r2 = 1
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r5 = 0
            r3[r5] = r4     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.g = r0     // Catch: java.lang.Throwable -> L50
            java.lang.Class r0 = com.reyun.tracking.b.m.f     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "getOAID"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.h = r0     // Catch: java.lang.Throwable -> L50
            java.lang.Class r0 = com.reyun.tracking.b.m.f     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "getVAID"
            java.lang.Class[] r3 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r3[r5] = r4     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r0 = r0.getMethod(r1, r3)     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.i = r0     // Catch: java.lang.Throwable -> L50
            java.lang.Class r0 = com.reyun.tracking.b.m.f     // Catch: java.lang.Throwable -> L50
            java.lang.String r1 = "getAAID"
            java.lang.Class[] r2 = new java.lang.Class[r2]     // Catch: java.lang.Throwable -> L50
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r2[r5] = r3     // Catch: java.lang.Throwable -> L50
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Throwable -> L50
            com.reyun.tracking.b.m.j = r0     // Catch: java.lang.Throwable -> L50
        L50:
            return
    }

    m(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.reflect.Method r0 = com.reyun.tracking.b.m.g
            java.lang.String r0 = a(r2, r0)
            r1.a = r0
            java.lang.reflect.Method r0 = com.reyun.tracking.b.m.h
            java.lang.String r0 = a(r2, r0)
            r1.b = r0
            java.lang.reflect.Method r0 = com.reyun.tracking.b.m.i
            java.lang.String r0 = a(r2, r0)
            r1.c = r0
            java.lang.reflect.Method r0 = com.reyun.tracking.b.m.j
            java.lang.String r2 = a(r2, r0)
            r1.d = r2
            return
    }

    private static java.lang.String a(android.content.Context r3, java.lang.reflect.Method r4) {
            java.lang.Object r0 = com.reyun.tracking.b.m.e
            if (r0 == 0) goto L15
            if (r4 == 0) goto L15
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Throwable -> L15
            r2 = 0
            r1[r2] = r3     // Catch: java.lang.Throwable -> L15
            java.lang.Object r3 = r4.invoke(r0, r1)     // Catch: java.lang.Throwable -> L15
            if (r3 == 0) goto L15
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Throwable -> L15
            return r3
        L15:
            r3 = 0
            return r3
    }
}
