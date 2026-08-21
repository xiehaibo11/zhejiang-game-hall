package com.tencent.bugly.proguard;

public final class e extends com.tencent.bugly.proguard.d {
    static java.util.HashMap<java.lang.String, byte[]> h;
    static java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> i;
    protected com.tencent.bugly.proguard.g g;
    private int j;

    static {
            return
    }

    public e() {
            r2 = this;
            r2.<init>()
            com.tencent.bugly.proguard.g r0 = new com.tencent.bugly.proguard.g
            r0.<init>()
            r2.g = r0
            r0 = 0
            r2.j = r0
            com.tencent.bugly.proguard.g r0 = r2.g
            r1 = 2
            r0.a = r1
            return
    }

    @Override
    public final <T> void a(java.lang.String r2, T r3) {
            r1 = this;
            java.lang.String r0 = "."
            boolean r0 = r2.startsWith(r0)
            if (r0 != 0) goto Lc
            super.a(r2, r3)
            return
        Lc:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r0 = "put name can not startwith . , now is "
            java.lang.String r2 = r0.concat(r2)
            r3.<init>(r2)
            throw r3
    }

    @Override
    public final void a(byte[] r5) {
            r4 = this;
            int r0 = r5.length
            r1 = 4
            if (r0 < r1) goto L83
            com.tencent.bugly.proguard.k r0 = new com.tencent.bugly.proguard.k     // Catch: java.lang.Exception -> L7c
            r1 = 0
            r0.<init>(r5, r1)     // Catch: java.lang.Exception -> L7c
            java.lang.String r5 = r4.c     // Catch: java.lang.Exception -> L7c
            r0.a(r5)     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.g r5 = r4.g     // Catch: java.lang.Exception -> L7c
            r5.a(r0)     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.g r5 = r4.g     // Catch: java.lang.Exception -> L7c
            short r5 = r5.a     // Catch: java.lang.Exception -> L7c
            r0 = 3
            java.lang.String r2 = ""
            if (r5 != r0) goto L44
            com.tencent.bugly.proguard.k r5 = new com.tencent.bugly.proguard.k     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.g r0 = r4.g     // Catch: java.lang.Exception -> L7c
            byte[] r0 = r0.g     // Catch: java.lang.Exception -> L7c
            r5.<init>(r0)     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r4.c     // Catch: java.lang.Exception -> L7c
            r5.a(r0)     // Catch: java.lang.Exception -> L7c
            java.util.HashMap<java.lang.String, byte[]> r0 = com.tencent.bugly.proguard.e.h     // Catch: java.lang.Exception -> L7c
            if (r0 != 0) goto L3b
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.e.h = r0     // Catch: java.lang.Exception -> L7c
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L7c
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L7c
        L3b:
            java.util.HashMap<java.lang.String, byte[]> r0 = com.tencent.bugly.proguard.e.h     // Catch: java.lang.Exception -> L7c
            java.util.HashMap r5 = r5.a(r0, r1, r1)     // Catch: java.lang.Exception -> L7c
            r4.e = r5     // Catch: java.lang.Exception -> L7c
            return
        L44:
            com.tencent.bugly.proguard.k r5 = new com.tencent.bugly.proguard.k     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.g r0 = r4.g     // Catch: java.lang.Exception -> L7c
            byte[] r0 = r0.g     // Catch: java.lang.Exception -> L7c
            r5.<init>(r0)     // Catch: java.lang.Exception -> L7c
            java.lang.String r0 = r4.c     // Catch: java.lang.Exception -> L7c
            r5.a(r0)     // Catch: java.lang.Exception -> L7c
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r0 = com.tencent.bugly.proguard.e.i     // Catch: java.lang.Exception -> L7c
            if (r0 != 0) goto L6c
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Exception -> L7c
            com.tencent.bugly.proguard.e.i = r0     // Catch: java.lang.Exception -> L7c
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L7c
            r0.<init>()     // Catch: java.lang.Exception -> L7c
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L7c
            r0.put(r2, r3)     // Catch: java.lang.Exception -> L7c
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r3 = com.tencent.bugly.proguard.e.i     // Catch: java.lang.Exception -> L7c
            r3.put(r2, r0)     // Catch: java.lang.Exception -> L7c
        L6c:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r0 = com.tencent.bugly.proguard.e.i     // Catch: java.lang.Exception -> L7c
            java.util.HashMap r5 = r5.a(r0, r1, r1)     // Catch: java.lang.Exception -> L7c
            r4.a = r5     // Catch: java.lang.Exception -> L7c
            java.util.HashMap r5 = new java.util.HashMap     // Catch: java.lang.Exception -> L7c
            r5.<init>()     // Catch: java.lang.Exception -> L7c
            r4.b = r5     // Catch: java.lang.Exception -> L7c
            return
        L7c:
            r5 = move-exception
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r5)
            throw r0
        L83:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "decode package must include size head"
            r5.<init>(r0)
            throw r5
    }

    @Override
    public final byte[] a() {
            r4 = this;
            com.tencent.bugly.proguard.g r0 = r4.g
            short r0 = r0.a
            r1 = 2
            java.lang.String r2 = ""
            if (r0 != r1) goto L2e
            com.tencent.bugly.proguard.g r0 = r4.g
            java.lang.String r0 = r0.e
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L26
            com.tencent.bugly.proguard.g r0 = r4.g
            java.lang.String r0 = r0.f
            boolean r0 = r0.equals(r2)
            if (r0 != 0) goto L1e
            goto L42
        L1e:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "funcName can not is null"
            r0.<init>(r1)
            throw r0
        L26:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.String r1 = "servantName can not is null"
            r0.<init>(r1)
            throw r0
        L2e:
            com.tencent.bugly.proguard.g r0 = r4.g
            java.lang.String r0 = r0.e
            if (r0 != 0) goto L38
            com.tencent.bugly.proguard.g r0 = r4.g
            r0.e = r2
        L38:
            com.tencent.bugly.proguard.g r0 = r4.g
            java.lang.String r0 = r0.f
            if (r0 != 0) goto L42
            com.tencent.bugly.proguard.g r0 = r4.g
            r0.f = r2
        L42:
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r2 = 0
            r0.<init>(r2)
            java.lang.String r3 = r4.c
            r0.a(r3)
            com.tencent.bugly.proguard.g r3 = r4.g
            short r3 = r3.a
            if (r3 != r1) goto L59
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r1 = r4.a
            r0.a(r1, r2)
            goto L5e
        L59:
            java.util.HashMap<java.lang.String, byte[]> r1 = r4.e
            r0.a(r1, r2)
        L5e:
            com.tencent.bugly.proguard.g r1 = r4.g
            java.nio.ByteBuffer r0 = r0.a
            byte[] r0 = com.tencent.bugly.proguard.n.a(r0)
            r1.g = r0
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r0.<init>(r2)
            java.lang.String r1 = r4.c
            r0.a(r1)
            com.tencent.bugly.proguard.g r1 = r4.g
            r1.a(r0)
            java.nio.ByteBuffer r0 = r0.a
            byte[] r0 = com.tencent.bugly.proguard.n.a(r0)
            int r1 = r0.length
            int r1 = r1 + 4
            java.nio.ByteBuffer r2 = java.nio.ByteBuffer.allocate(r1)
            java.nio.ByteBuffer r1 = r2.putInt(r1)
            java.nio.ByteBuffer r0 = r1.put(r0)
            r0.flip()
            byte[] r0 = r2.array()
            return r0
    }

    @Override
    public final void b() {
            r2 = this;
            super.b()
            com.tencent.bugly.proguard.g r0 = r2.g
            r1 = 3
            r0.a = r1
            return
    }

    public final void b(java.lang.String r2) {
            r1 = this;
            com.tencent.bugly.proguard.g r0 = r1.g
            r0.e = r2
            return
    }

    public final void c() {
            r2 = this;
            com.tencent.bugly.proguard.g r0 = r2.g
            r1 = 1
            r0.d = r1
            return
    }

    public final void c(java.lang.String r2) {
            r1 = this;
            com.tencent.bugly.proguard.g r0 = r1.g
            r0.f = r2
            return
    }
}
