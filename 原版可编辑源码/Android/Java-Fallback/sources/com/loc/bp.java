package com.loc;

public abstract class bp extends com.loc.r {
    protected android.content.Context a;
    protected com.loc.w b;
    protected byte[] c;

    public bp(android.content.Context r1, com.loc.w r2) {
            r0 = this;
            r0.<init>()
            if (r1 == 0) goto Lb
            android.content.Context r1 = r1.getApplicationContext()
            r0.a = r1
        Lb:
            r0.b = r2
            r0.r()
            return
    }

    private static byte[] A() {
            java.lang.String r0 = "gbh"
            java.lang.String r1 = "bre"
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            java.lang.String r3 = "PANDORA$"
            byte[] r3 = com.loc.x.a(r3)     // Catch: java.lang.Throwable -> L2f
            r2.write(r3)     // Catch: java.lang.Throwable -> L2f
            r3 = 1
            byte[] r4 = new byte[r3]     // Catch: java.lang.Throwable -> L2f
            r5 = 0
            r4[r5] = r3     // Catch: java.lang.Throwable -> L2f
            r2.write(r4)     // Catch: java.lang.Throwable -> L2f
            byte[] r3 = new byte[r3]     // Catch: java.lang.Throwable -> L2f
            r3[r5] = r5     // Catch: java.lang.Throwable -> L2f
            r2.write(r3)     // Catch: java.lang.Throwable -> L2f
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L2f
            r2.close()     // Catch: java.lang.Throwable -> L2a
            goto L2e
        L2a:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L2e:
            return r3
        L2f:
            r3 = move-exception
            com.loc.as.a(r3, r1, r0)     // Catch: java.lang.Throwable -> L3d
            r2.close()     // Catch: java.lang.Throwable -> L37
            goto L3b
        L37:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L3b:
            r0 = 0
            return r0
        L3d:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L42
            goto L46
        L42:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L46:
            throw r3
    }

    private byte[] B() {
            r10 = this;
            java.lang.String r0 = "gred"
            java.lang.String r1 = "bre"
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            r3 = 1
            r4 = 0
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L9c
            r6 = 3
            r5[r4] = r6     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
            boolean r5 = r10.i()     // Catch: java.lang.Throwable -> L9c
            r6 = 2
            if (r5 == 0) goto L44
            android.content.Context r5 = r10.a     // Catch: java.lang.Throwable -> L9c
            boolean r7 = r10.k()     // Catch: java.lang.Throwable -> L9c
            com.loc.w r8 = r10.b     // Catch: java.lang.Throwable -> L9c
            if (r8 == 0) goto L34
            java.lang.String r8 = "navi"
            com.loc.w r9 = r10.b     // Catch: java.lang.Throwable -> L9c
            java.lang.String r9 = r9.a()     // Catch: java.lang.Throwable -> L9c
            boolean r8 = r8.equals(r9)     // Catch: java.lang.Throwable -> L9c
            if (r8 == 0) goto L34
            r8 = 1
            goto L35
        L34:
            r8 = 0
        L35:
            byte[] r5 = com.loc.n.a(r5, r7, r8)     // Catch: java.lang.Throwable -> L9c
            byte[] r7 = a(r5)     // Catch: java.lang.Throwable -> L9c
            r2.write(r7)     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
            goto L4d
        L44:
            byte[] r5 = new byte[r6]     // Catch: java.lang.Throwable -> L9c
            r5[r4] = r4     // Catch: java.lang.Throwable -> L9c
            r5[r3] = r4     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
        L4d:
            java.lang.String r5 = r10.f()     // Catch: java.lang.Throwable -> L9c
            byte[] r5 = com.loc.x.a(r5)     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L65
            int r7 = r5.length     // Catch: java.lang.Throwable -> L9c
            if (r7 <= 0) goto L65
            byte[] r7 = a(r5)     // Catch: java.lang.Throwable -> L9c
            r2.write(r7)     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
            goto L6e
        L65:
            byte[] r5 = new byte[r6]     // Catch: java.lang.Throwable -> L9c
            r5[r4] = r4     // Catch: java.lang.Throwable -> L9c
            r5[r3] = r4     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
        L6e:
            java.lang.String r5 = r10.j()     // Catch: java.lang.Throwable -> L9c
            byte[] r5 = com.loc.x.a(r5)     // Catch: java.lang.Throwable -> L9c
            if (r5 == 0) goto L86
            int r7 = r5.length     // Catch: java.lang.Throwable -> L9c
            if (r7 <= 0) goto L86
            byte[] r6 = a(r5)     // Catch: java.lang.Throwable -> L9c
            r2.write(r6)     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
            goto L8f
        L86:
            byte[] r5 = new byte[r6]     // Catch: java.lang.Throwable -> L9c
            r5[r4] = r4     // Catch: java.lang.Throwable -> L9c
            r5[r3] = r4     // Catch: java.lang.Throwable -> L9c
            r2.write(r5)     // Catch: java.lang.Throwable -> L9c
        L8f:
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L9c
            r2.close()     // Catch: java.lang.Throwable -> L97
            goto L9b
        L97:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L9b:
            return r3
        L9c:
            r5 = move-exception
            java.lang.String r6 = "gpd"
            com.loc.as.a(r5, r1, r6)     // Catch: java.lang.Throwable -> Laf
            r2.close()     // Catch: java.lang.Throwable -> La6
            goto Laa
        La6:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        Laa:
            byte[] r0 = new byte[r3]
            r0[r4] = r4
            return r0
        Laf:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> Lb4
            goto Lb8
        Lb4:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        Lb8:
            throw r3
    }

    private byte[] C() {
            r7 = this;
            java.lang.String r0 = "grrd"
            java.lang.String r1 = "bre"
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            r3 = 1
            r4 = 0
            byte[] r5 = r7.a_()     // Catch: java.lang.Throwable -> L47
            if (r5 == 0) goto L33
            int r6 = r5.length     // Catch: java.lang.Throwable -> L47
            if (r6 != 0) goto L15
            goto L33
        L15:
            byte[] r6 = new byte[r3]     // Catch: java.lang.Throwable -> L47
            r6[r4] = r3     // Catch: java.lang.Throwable -> L47
            r2.write(r6)     // Catch: java.lang.Throwable -> L47
            byte[] r6 = a(r5)     // Catch: java.lang.Throwable -> L47
            r2.write(r6)     // Catch: java.lang.Throwable -> L47
            r2.write(r5)     // Catch: java.lang.Throwable -> L47
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L47
            r2.close()     // Catch: java.lang.Throwable -> L2e
            goto L32
        L2e:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L32:
            return r3
        L33:
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L47
            r5[r4] = r4     // Catch: java.lang.Throwable -> L47
            r2.write(r5)     // Catch: java.lang.Throwable -> L47
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L47
            r2.close()     // Catch: java.lang.Throwable -> L42
            goto L46
        L42:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L46:
            return r3
        L47:
            r5 = move-exception
            com.loc.as.a(r5, r1, r0)     // Catch: java.lang.Throwable -> L58
            r2.close()     // Catch: java.lang.Throwable -> L4f
            goto L53
        L4f:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L53:
            byte[] r0 = new byte[r3]
            r0[r4] = r4
            return r0
        L58:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L5d
            goto L61
        L5d:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L61:
            throw r3
    }

    private byte[] D() {
            r7 = this;
            java.lang.String r0 = "gred"
            java.lang.String r1 = "bre"
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            r3 = 1
            r4 = 0
            byte[] r5 = r7.b_()     // Catch: java.lang.Throwable -> L4b
            if (r5 == 0) goto L37
            int r6 = r5.length     // Catch: java.lang.Throwable -> L4b
            if (r6 != 0) goto L15
            goto L37
        L15:
            byte[] r6 = new byte[r3]     // Catch: java.lang.Throwable -> L4b
            r6[r4] = r3     // Catch: java.lang.Throwable -> L4b
            r2.write(r6)     // Catch: java.lang.Throwable -> L4b
            byte[] r5 = com.loc.n.a(r5)     // Catch: java.lang.Throwable -> L4b
            byte[] r6 = a(r5)     // Catch: java.lang.Throwable -> L4b
            r2.write(r6)     // Catch: java.lang.Throwable -> L4b
            r2.write(r5)     // Catch: java.lang.Throwable -> L4b
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L4b
            r2.close()     // Catch: java.lang.Throwable -> L32
            goto L36
        L32:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L36:
            return r3
        L37:
            byte[] r5 = new byte[r3]     // Catch: java.lang.Throwable -> L4b
            r5[r4] = r4     // Catch: java.lang.Throwable -> L4b
            r2.write(r5)     // Catch: java.lang.Throwable -> L4b
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L4b
            r2.close()     // Catch: java.lang.Throwable -> L46
            goto L4a
        L46:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L4a:
            return r3
        L4b:
            r5 = move-exception
            com.loc.as.a(r5, r1, r0)     // Catch: java.lang.Throwable -> L5c
            r2.close()     // Catch: java.lang.Throwable -> L53
            goto L57
        L53:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L57:
            byte[] r0 = new byte[r3]
            r0[r4] = r4
            return r0
        L5c:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L61
            goto L65
        L61:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L65:
            throw r3
    }

    protected static byte[] a(byte[] r0) {
            int r0 = r0.length
            byte[] r0 = com.loc.x.a(r0)
            return r0
    }

    public abstract byte[] a_();

    public abstract byte[] b_();

    @Override
    public final byte[] d() {
            r4 = this;
            java.lang.String r0 = "geb"
            java.lang.String r1 = "bre"
            byte[] r2 = r4.c
            if (r2 == 0) goto L9
            return r2
        L9:
            java.io.ByteArrayOutputStream r2 = new java.io.ByteArrayOutputStream
            r2.<init>()
            byte[] r3 = A()     // Catch: java.lang.Throwable -> L39
            r2.write(r3)     // Catch: java.lang.Throwable -> L39
            byte[] r3 = r4.B()     // Catch: java.lang.Throwable -> L39
            r2.write(r3)     // Catch: java.lang.Throwable -> L39
            byte[] r3 = r4.C()     // Catch: java.lang.Throwable -> L39
            r2.write(r3)     // Catch: java.lang.Throwable -> L39
            byte[] r3 = r4.D()     // Catch: java.lang.Throwable -> L39
            r2.write(r3)     // Catch: java.lang.Throwable -> L39
            byte[] r3 = r2.toByteArray()     // Catch: java.lang.Throwable -> L39
            r4.c = r3     // Catch: java.lang.Throwable -> L39
            r2.close()     // Catch: java.lang.Throwable -> L34
            goto L38
        L34:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L38:
            return r3
        L39:
            r3 = move-exception
            com.loc.as.a(r3, r1, r0)     // Catch: java.lang.Throwable -> L47
            r2.close()     // Catch: java.lang.Throwable -> L41
            goto L45
        L41:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L45:
            r0 = 0
            return r0
        L47:
            r3 = move-exception
            r2.close()     // Catch: java.lang.Throwable -> L4c
            goto L50
        L4c:
            r2 = move-exception
            com.loc.as.a(r2, r1, r0)
        L50:
            throw r3
    }

    @Override
    public java.util.Map<java.lang.String, java.lang.String> e() {
            r5 = this;
            android.content.Context r0 = r5.a
            java.lang.String r0 = com.loc.l.f(r0)
            java.lang.String r1 = com.loc.n.a()
            android.content.Context r2 = r5.a
            java.lang.String r3 = java.lang.String.valueOf(r0)
            java.lang.String r4 = "key="
            java.lang.String r3 = r4.concat(r3)
            java.lang.String r2 = com.loc.n.a(r2, r1, r3)
            java.util.HashMap r3 = new java.util.HashMap
            r3.<init>()
            java.lang.String r4 = "ts"
            r3.put(r4, r1)
            java.lang.String r1 = "key"
            r3.put(r1, r0)
            java.lang.String r0 = "scode"
            r3.put(r0, r2)
            return r3
    }

    protected java.lang.String f() {
            r1 = this;
            java.lang.String r0 = "2.1"
            return r0
    }

    public boolean i() {
            r1 = this;
            r0 = 1
            return r0
    }

    public java.lang.String j() {
            r3 = this;
            r0 = 2
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.loc.w r1 = r3.b
            java.lang.String r1 = r1.c()
            r2 = 0
            r0[r2] = r1
            com.loc.w r1 = r3.b
            java.lang.String r1 = r1.a()
            r2 = 1
            r0[r2] = r1
            java.lang.String r1 = "platform=Android&sdkversion=%s&product=%s"
            java.lang.String r0 = java.lang.String.format(r1, r0)
            return r0
    }

    protected boolean k() {
            r1 = this;
            r0 = 0
            return r0
    }
}
