package com.xiaomi.push;

class av implements com.xiaomi.push.au, java.lang.reflect.InvocationHandler {
    private static final java.lang.String[][] a = null;
    private volatile int a;
    private volatile long a;
    private android.content.Context a;
    private volatile com.xiaomi.push.av.a a;
    private java.lang.Class a;
    private final java.lang.Object a;
    private java.lang.reflect.Method a;
    private java.lang.Class b;
    private java.lang.reflect.Method b;
    private java.lang.reflect.Method c;
    private java.lang.reflect.Method d;
    private java.lang.reflect.Method e;
    private java.lang.reflect.Method f;
    private java.lang.reflect.Method g;

    class a {
        final com.xiaomi.push.av a;
        java.lang.Boolean a;
        java.lang.String a;
        java.lang.String b;
        java.lang.String c;
        java.lang.String d;

        private a(com.xiaomi.push.av r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                r1 = 0
                r0.a = r1
                r0.a = r1
                r0.b = r1
                r0.c = r1
                r0.d = r1
                return
        }

        a(com.xiaomi.push.av r1, com.xiaomi.push.aw r2) {
                r0 = this;
                r0.<init>(r1)
                return
        }

        boolean a() {
                r2 = this;
                java.lang.String r0 = r2.a
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 1
                if (r0 == 0) goto L21
                java.lang.String r0 = r2.b
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L21
                java.lang.String r0 = r2.c
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 == 0) goto L21
                java.lang.String r0 = r2.d
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L27
            L21:
                java.lang.Boolean r0 = java.lang.Boolean.valueOf(r1)
                r2.a = r0
            L27:
                java.lang.Boolean r0 = r2.a
                if (r0 == 0) goto L2c
                goto L2d
            L2c:
                r1 = 0
            L2d:
                return r1
        }
    }

    static {
            r0 = 2
            java.lang.String[][] r0 = new java.lang.String[r0][]
            java.lang.String r1 = "com.bun.supplier.IIdentifierListener"
            java.lang.String r2 = "com.bun.supplier.IdSupplier"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            r2 = 0
            r0[r2] = r1
            java.lang.String r1 = "com.bun.miitmdid.core.IIdentifierListener"
            java.lang.String r2 = "com.bun.miitmdid.supplier.IdSupplier"
            java.lang.String[] r1 = new java.lang.String[]{r1, r2}
            r2 = 1
            r0[r2] = r1
            com.xiaomi.push.av.a = r0
            return
    }

    public av(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.a = r0
            r3.b = r0
            r3.a = r0
            r3.b = r0
            r3.c = r0
            r3.d = r0
            r3.e = r0
            r3.f = r0
            r3.g = r0
            java.lang.Object r1 = new java.lang.Object
            r1.<init>()
            r3.a = r1
            r1 = 0
            r3.a = r1
            r1 = 0
            r3.a = r1
            r3.a = r0
            android.content.Context r0 = r4.getApplicationContext()
            r3.a = r0
            r3.a(r4)
            r3.b(r4)
            return
    }

    private static java.lang.Class<?> a(android.content.Context r0, java.lang.String r1) {
            java.lang.Class r0 = com.xiaomi.push.v.a(r0, r1)     // Catch: java.lang.Throwable -> L5
            return r0
        L5:
            r0 = 0
            return r0
    }

    private static <T> T a(java.lang.reflect.Method r0, java.lang.Object r1, java.lang.Object... r2) {
            if (r0 == 0) goto L9
            java.lang.Object r0 = r0.invoke(r1, r2)     // Catch: java.lang.Throwable -> L9
            if (r0 == 0) goto L9
            return r0
        L9:
            r0 = 0
            return r0
    }

    private static java.lang.reflect.Method a(java.lang.Class<?> r0, java.lang.String r1, java.lang.Class<?>... r2) {
            if (r0 == 0) goto L7
            java.lang.reflect.Method r0 = r0.getMethod(r1, r2)     // Catch: java.lang.Throwable -> L7
            return r0
        L7:
            r0 = 0
            return r0
    }

    private void a() {
            r2 = this;
            java.lang.Object r0 = r2.a
            monitor-enter(r0)
            java.lang.Object r1 = r2.a     // Catch: java.lang.Throwable -> L9 java.lang.Exception -> Lb
            r1.notifyAll()     // Catch: java.lang.Throwable -> L9 java.lang.Exception -> Lb
            goto Lb
        L9:
            r1 = move-exception
            goto Ld
        Lb:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            return
        Ld:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L9
            throw r1
    }

    private void a(android.content.Context r10) {
            r9 = this;
            java.lang.String r0 = "com.bun.miitmdid.core.MdidSdk"
            java.lang.Class r0 = a(r10, r0)
            r1 = 0
            r2 = 0
            r3 = r1
            r4 = r2
        La:
            java.lang.String[][] r5 = com.xiaomi.push.av.a
            int r6 = r5.length
            r7 = 1
            if (r4 >= r6) goto L40
            r1 = r5[r4]
            r3 = r1[r2]
            java.lang.Class r3 = a(r10, r3)
            r1 = r1[r7]
            java.lang.Class r1 = a(r10, r1)
            if (r3 == 0) goto L3a
            if (r1 == 0) goto L3a
            java.lang.StringBuilder r10 = new java.lang.StringBuilder
            r10.<init>()
            java.lang.String r5 = "found class in index "
            r10.append(r5)
            r10.append(r4)
            java.lang.String r10 = r10.toString()
            b(r10)
            r8 = r3
            r3 = r1
            r1 = r8
            goto L40
        L3a:
            int r4 = r4 + 1
            r8 = r3
            r3 = r1
            r1 = r8
            goto La
        L40:
            r9.a = r0
            r10 = 2
            java.lang.Class[] r10 = new java.lang.Class[r10]
            java.lang.Class<android.content.Context> r4 = android.content.Context.class
            r10[r2] = r4
            r10[r7] = r1
            java.lang.String r4 = "InitSdk"
            java.lang.reflect.Method r10 = a(r0, r4, r10)
            r9.a = r10
            r9.b = r1
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "getUDID"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.b = r10
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "getOAID"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.c = r10
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "getVAID"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.d = r10
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "getAAID"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.e = r10
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "isSupported"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.f = r10
            java.lang.Class[] r10 = new java.lang.Class[r2]
            java.lang.String r0 = "shutDown"
            java.lang.reflect.Method r10 = a(r3, r0, r10)
            r9.g = r10
            return
    }

    private void a(java.lang.String r11) {
            r10 = this;
            com.xiaomi.push.av$a r0 = r10.a
            if (r0 == 0) goto L5
            return
        L5:
            long r0 = r10.a
            long r2 = android.os.SystemClock.elapsedRealtime()
            long r4 = java.lang.Math.abs(r0)
            long r2 = r2 - r4
            int r4 = r10.a
            r5 = 3000(0xbb8, double:1.482E-320)
            int r7 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r7 <= 0) goto L57
            r7 = 3
            if (r4 >= r7) goto L57
            java.lang.Object r7 = r10.a
            monitor-enter(r7)
            long r8 = r10.a     // Catch: java.lang.Throwable -> L54
            int r8 = (r8 > r0 ? 1 : (r8 == r0 ? 0 : -1))
            if (r8 != 0) goto L52
            int r8 = r10.a     // Catch: java.lang.Throwable -> L54
            if (r8 != r4) goto L52
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L54
            r0.<init>()     // Catch: java.lang.Throwable -> L54
            java.lang.String r1 = "retry, current count is "
            r0.append(r1)     // Catch: java.lang.Throwable -> L54
            r0.append(r4)     // Catch: java.lang.Throwable -> L54
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> L54
            b(r0)     // Catch: java.lang.Throwable -> L54
            int r0 = r10.a     // Catch: java.lang.Throwable -> L54
            int r0 = r0 + 1
            r10.a = r0     // Catch: java.lang.Throwable -> L54
            android.content.Context r0 = r10.a     // Catch: java.lang.Throwable -> L54
            r10.b(r0)     // Catch: java.lang.Throwable -> L54
            long r0 = r10.a     // Catch: java.lang.Throwable -> L54
            long r2 = android.os.SystemClock.elapsedRealtime()     // Catch: java.lang.Throwable -> L54
            long r8 = java.lang.Math.abs(r0)     // Catch: java.lang.Throwable -> L54
            long r2 = r2 - r8
        L52:
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L54
            goto L57
        L54:
            r11 = move-exception
            monitor-exit(r7)     // Catch: java.lang.Throwable -> L54
            throw r11
        L57:
            com.xiaomi.push.av$a r4 = r10.a
            if (r4 != 0) goto L94
            r7 = 0
            int r0 = (r0 > r7 ? 1 : (r0 == r7 ? 0 : -1))
            if (r0 < 0) goto L94
            int r0 = (r2 > r5 ? 1 : (r2 == r5 ? 0 : -1))
            if (r0 > 0) goto L94
            android.os.Looper r0 = android.os.Looper.myLooper()
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            if (r0 == r1) goto L94
            java.lang.Object r0 = r10.a
            monitor-enter(r0)
            com.xiaomi.push.av$a r1 = r10.a     // Catch: java.lang.Throwable -> L91
            if (r1 != 0) goto L8f
            java.lang.StringBuilder r1 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            r1.<init>()     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            r1.append(r11)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            java.lang.String r11 = " wait..."
            r1.append(r11)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            java.lang.String r11 = r1.toString()     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            b(r11)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            java.lang.Object r11 = r10.a     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
            r11.wait(r5)     // Catch: java.lang.Exception -> L8f java.lang.Throwable -> L91
        L8f:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L91
            goto L94
        L91:
            r11 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L91
            throw r11
        L94:
            return
    }

    private static boolean a(java.lang.Object r1) {
            boolean r0 = r1 instanceof java.lang.Boolean
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Character
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Byte
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Short
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Integer
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Long
            if (r0 != 0) goto L23
            boolean r0 = r1 instanceof java.lang.Float
            if (r0 != 0) goto L23
            boolean r1 = r1 instanceof java.lang.Double
            if (r1 == 0) goto L21
            goto L23
        L21:
            r1 = 0
            goto L24
        L23:
            r1 = 1
        L24:
            return r1
    }

    private void b(android.content.Context r11) {
            r10 = this;
            long r0 = android.os.SystemClock.elapsedRealtime()
            long r2 = -r0
            java.lang.Class r4 = r10.b
            if (r4 == 0) goto L47
            java.lang.ClassLoader r4 = r4.getClassLoader()     // Catch: java.lang.Throwable -> L32
            if (r4 != 0) goto L13
            java.lang.ClassLoader r4 = r11.getClassLoader()     // Catch: java.lang.Throwable -> L32
        L13:
            r5 = 1
            java.lang.Class[] r6 = new java.lang.Class[r5]     // Catch: java.lang.Throwable -> L32
            java.lang.Class r7 = r10.b     // Catch: java.lang.Throwable -> L32
            r8 = 0
            r6[r8] = r7     // Catch: java.lang.Throwable -> L32
            java.lang.Object r4 = java.lang.reflect.Proxy.newProxyInstance(r4, r6, r10)     // Catch: java.lang.Throwable -> L32
            java.lang.reflect.Method r6 = r10.a     // Catch: java.lang.Throwable -> L32
            java.lang.Class r7 = r10.a     // Catch: java.lang.Throwable -> L32
            java.lang.Object r7 = r7.newInstance()     // Catch: java.lang.Throwable -> L32
            r9 = 2
            java.lang.Object[] r9 = new java.lang.Object[r9]     // Catch: java.lang.Throwable -> L32
            r9[r8] = r11     // Catch: java.lang.Throwable -> L32
            r9[r5] = r4     // Catch: java.lang.Throwable -> L32
            a(r6, r7, r9)     // Catch: java.lang.Throwable -> L32
            goto L48
        L32:
            r11 = move-exception
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "call init sdk error:"
            r0.append(r1)
            r0.append(r11)
            java.lang.String r11 = r0.toString()
            b(r11)
        L47:
            r0 = r2
        L48:
            r10.a = r0
            return
    }

    private static void b(java.lang.String r2) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "mdid:"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r2 = r0.toString()
            com.xiaomi.channel.commonutils.logger.b.a(r2)
            return
    }

    @Override
    public java.lang.String a() {
            r1 = this;
            java.lang.String r0 = "getOAID"
            r1.a(r0)
            com.xiaomi.push.av$a r0 = r1.a
            if (r0 != 0) goto Lb
            r0 = 0
            goto Lf
        Lb:
            com.xiaomi.push.av$a r0 = r1.a
            java.lang.String r0 = r0.b
        Lf:
            return r0
    }

    @Override
    public boolean a() {
            r2 = this;
            java.lang.String r0 = "isSupported"
            r2.a(r0)
            com.xiaomi.push.av$a r0 = r2.a
            if (r0 == 0) goto L17
            java.lang.Boolean r0 = java.lang.Boolean.TRUE
            com.xiaomi.push.av$a r1 = r2.a
            java.lang.Boolean r1 = r1.a
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L17
            r0 = 1
            goto L18
        L17:
            r0 = 0
        L18:
            return r0
    }

    @Override
    public java.lang.Object invoke(java.lang.Object r7, java.lang.reflect.Method r8, java.lang.Object[] r9) {
            r6 = this;
            long r7 = android.os.SystemClock.elapsedRealtime()
            r6.a = r7
            r7 = 0
            if (r9 == 0) goto L91
            com.xiaomi.push.av$a r8 = new com.xiaomi.push.av$a
            r8.<init>(r6, r7)
            int r0 = r9.length
            r1 = 0
            r2 = r1
        L11:
            if (r2 >= r0) goto L91
            r3 = r9[r2]
            if (r3 == 0) goto L8e
            boolean r4 = a(r3)
            if (r4 == 0) goto L1e
            goto L8e
        L1e:
            java.lang.reflect.Method r4 = r6.b
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.Object r4 = a(r4, r3, r5)
            java.lang.String r4 = (java.lang.String) r4
            r8.a = r4
            java.lang.reflect.Method r4 = r6.c
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.Object r4 = a(r4, r3, r5)
            java.lang.String r4 = (java.lang.String) r4
            r8.b = r4
            java.lang.reflect.Method r4 = r6.d
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.Object r4 = a(r4, r3, r5)
            java.lang.String r4 = (java.lang.String) r4
            r8.c = r4
            java.lang.reflect.Method r4 = r6.e
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.Object r4 = a(r4, r3, r5)
            java.lang.String r4 = (java.lang.String) r4
            r8.d = r4
            java.lang.reflect.Method r4 = r6.f
            java.lang.Object[] r5 = new java.lang.Object[r1]
            java.lang.Object r4 = a(r4, r3, r5)
            java.lang.Boolean r4 = (java.lang.Boolean) r4
            r8.a = r4
            java.lang.reflect.Method r4 = r6.g
            java.lang.Object[] r5 = new java.lang.Object[r1]
            a(r4, r3, r5)
            boolean r3 = r8.a()
            if (r3 == 0) goto L8e
            java.lang.StringBuilder r9 = new java.lang.StringBuilder
            r9.<init>()
            java.lang.String r0 = "has get succ, check duplicate:"
            r9.append(r0)
            com.xiaomi.push.av$a r0 = r6.a
            if (r0 == 0) goto L76
            r1 = 1
        L76:
            r9.append(r1)
            java.lang.String r9 = r9.toString()
            b(r9)
            java.lang.Class<com.xiaomi.push.av> r3 = com.xiaomi.push.av.class
            monitor-enter(r3)
            com.xiaomi.push.av$a r9 = r6.a     // Catch: java.lang.Throwable -> L8b
            if (r9 != 0) goto L89
            r6.a = r8     // Catch: java.lang.Throwable -> L8b
        L89:
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8b
            goto L91
        L8b:
            r7 = move-exception
            monitor-exit(r3)     // Catch: java.lang.Throwable -> L8b
            throw r7
        L8e:
            int r2 = r2 + 1
            goto L11
        L91:
            r6.a()
            return r7
    }
}
