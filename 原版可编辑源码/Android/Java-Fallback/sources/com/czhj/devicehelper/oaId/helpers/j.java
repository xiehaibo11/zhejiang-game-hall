package com.czhj.devicehelper.oaId.helpers;

public class j {
    private android.content.Context a;
    private java.lang.Class b;
    private java.lang.Object c;
    private java.lang.reflect.Method d;
    private java.lang.reflect.Method e;
    private java.lang.reflect.Method f;
    private java.lang.reflect.Method g;

    public j(android.content.Context r5) {
            r4 = this;
            r4.<init>()
            java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L26
            r4.b = r0     // Catch: java.lang.Exception -> L26
            java.lang.Object r0 = r0.newInstance()     // Catch: java.lang.Exception -> L26
            r4.c = r0     // Catch: java.lang.Exception -> L26
            r4.a = r5
            java.lang.Class r5 = r4.b     // Catch: java.lang.Exception -> L26
            java.lang.String r0 = "getOAID"
            r1 = 1
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L26
            r2 = 0
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r1[r2] = r3     // Catch: java.lang.Exception -> L26
            java.lang.reflect.Method r5 = r5.getMethod(r0, r1)     // Catch: java.lang.Exception -> L26
            r4.e = r5     // Catch: java.lang.Exception -> L26
            return
        L26:
            r5 = move-exception
            java.lang.String r5 = r5.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r5)
            return
    }

    private java.lang.String a(android.content.Context r4, java.lang.reflect.Method r5) {
            r3 = this;
            java.lang.Object r0 = r3.c
            if (r0 == 0) goto L1b
            if (r5 == 0) goto L1b
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L13
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L13
            java.lang.Object r4 = r5.invoke(r0, r1)     // Catch: java.lang.Exception -> L13
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L13
            goto L1c
        L13:
            r4 = move-exception
            java.lang.String r4 = r4.getMessage()
            com.czhj.sdk.logger.SigmobLog.e(r4)
        L1b:
            r4 = 0
        L1c:
            return r4
    }

    public java.lang.String a() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.reflect.Method r1 = r2.e
            java.lang.String r0 = r2.a(r0, r1)
            return r0
    }
}
