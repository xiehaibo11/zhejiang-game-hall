package com.xiaomi.push;

class ay implements com.xiaomi.push.au {
    private android.content.Context a;
    private java.lang.Class<?> a;
    private java.lang.Object a;
    private java.lang.reflect.Method a;
    private java.lang.reflect.Method b;
    private java.lang.reflect.Method c;
    private java.lang.reflect.Method d;

    public ay(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.a = r2
            r1.a(r2)
            return
    }

    private java.lang.String a(android.content.Context r4, java.lang.reflect.Method r5) {
            r3 = this;
            java.lang.Object r0 = r3.a
            if (r0 == 0) goto L1b
            if (r5 == 0) goto L1b
            r1 = 1
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L15
            r2 = 0
            r1[r2] = r4     // Catch: java.lang.Exception -> L15
            java.lang.Object r4 = r5.invoke(r0, r1)     // Catch: java.lang.Exception -> L15
            if (r4 == 0) goto L1b
            java.lang.String r4 = (java.lang.String) r4     // Catch: java.lang.Exception -> L15
            return r4
        L15:
            r4 = move-exception
            java.lang.String r5 = "miui invoke error"
            com.xiaomi.channel.commonutils.logger.b.a(r5, r4)
        L1b:
            r4 = 0
            return r4
    }

    private void a(android.content.Context r6) {
            r5 = this;
            java.lang.String r0 = "com.android.id.impl.IdProviderImpl"
            java.lang.Class r6 = com.xiaomi.push.v.a(r6, r0)     // Catch: java.lang.Exception -> L51
            r5.a = r6     // Catch: java.lang.Exception -> L51
            java.lang.Object r6 = r6.newInstance()     // Catch: java.lang.Exception -> L51
            r5.a = r6     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r6 = r5.a     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = "getUDID"
            r1 = 1
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r4 = 0
            r2[r4] = r3     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r6 = r6.getMethod(r0, r2)     // Catch: java.lang.Exception -> L51
            r5.a = r6     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r6 = r5.a     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = "getOAID"
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r2[r4] = r3     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r6 = r6.getMethod(r0, r2)     // Catch: java.lang.Exception -> L51
            r5.b = r6     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r6 = r5.a     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = "getVAID"
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r3 = android.content.Context.class
            r2[r4] = r3     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r6 = r6.getMethod(r0, r2)     // Catch: java.lang.Exception -> L51
            r5.c = r6     // Catch: java.lang.Exception -> L51
            java.lang.Class<?> r6 = r5.a     // Catch: java.lang.Exception -> L51
            java.lang.String r0 = "getAAID"
            java.lang.Class[] r1 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L51
            java.lang.Class<android.content.Context> r2 = android.content.Context.class
            r1[r4] = r2     // Catch: java.lang.Exception -> L51
            java.lang.reflect.Method r6 = r6.getMethod(r0, r1)     // Catch: java.lang.Exception -> L51
            r5.d = r6     // Catch: java.lang.Exception -> L51
            goto L57
        L51:
            r6 = move-exception
            java.lang.String r0 = "miui load class error"
            com.xiaomi.channel.commonutils.logger.b.a(r0, r6)
        L57:
            return
    }

    @Override
    public java.lang.String a() {
            r2 = this;
            android.content.Context r0 = r2.a
            java.lang.reflect.Method r1 = r2.b
            java.lang.String r0 = r2.a(r0, r1)
            return r0
    }

    @Override
    public boolean a() {
            r1 = this;
            java.lang.Class<?> r0 = r1.a
            if (r0 == 0) goto La
            java.lang.Object r0 = r1.a
            if (r0 == 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }
}
