package com.tencent.bugly.proguard;

public class d extends com.tencent.bugly.proguard.c {
    protected java.util.HashMap<java.lang.String, byte[]> e;
    com.tencent.bugly.proguard.k f;
    private java.util.HashMap<java.lang.String, java.lang.Object> g;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.e = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.g = r0
            com.tencent.bugly.proguard.k r0 = new com.tencent.bugly.proguard.k
            r0.<init>()
            r1.f = r0
            return
    }

    private void c(java.lang.String r2, java.lang.Object r3) {
            r1 = this;
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r1.g
            r0.put(r2, r3)
            return
    }

    @Override
    public final void a(java.lang.String r1) {
            r0 = this;
            super.a(r1)
            return
    }

    @Override
    public <T> void a(java.lang.String r3, T r4) {
            r2 = this;
            java.util.HashMap<java.lang.String, byte[]> r0 = r2.e
            if (r0 == 0) goto L3e
            if (r3 == 0) goto L36
            if (r4 == 0) goto L2e
            boolean r0 = r4 instanceof java.util.Set
            if (r0 != 0) goto L26
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r0.<init>()
            java.lang.String r1 = r2.c
            r0.a(r1)
            r1 = 0
            r0.a(r4, r1)
            java.nio.ByteBuffer r4 = r0.a
            byte[] r4 = com.tencent.bugly.proguard.n.a(r4)
            java.util.HashMap<java.lang.String, byte[]> r0 = r2.e
            r0.put(r3, r4)
            return
        L26:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "can not support Set"
            r3.<init>(r4)
            throw r3
        L2e:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "put value can not is null"
            r3.<init>(r4)
            throw r3
        L36:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "put key can not is null"
            r3.<init>(r4)
            throw r3
        L3e:
            super.a(r3, r4)
            return
    }

    @Override
    public void a(byte[] r4) {
            r3 = this;
            super.a(r4)     // Catch: java.lang.Exception -> L4
            return
        L4:
            com.tencent.bugly.proguard.k r0 = r3.f
            r0.a(r4)
            com.tencent.bugly.proguard.k r4 = r3.f
            java.lang.String r0 = r3.c
            r4.a(r0)
            java.util.HashMap r4 = new java.util.HashMap
            r0 = 1
            r4.<init>(r0)
            r0 = 0
            byte[] r1 = new byte[r0]
            java.lang.String r2 = ""
            r4.put(r2, r1)
            com.tencent.bugly.proguard.k r1 = r3.f
            java.util.HashMap r4 = r1.a(r4, r0, r0)
            r3.e = r4
            return
    }

    @Override
    public byte[] a() {
            r3 = this;
            java.util.HashMap<java.lang.String, byte[]> r0 = r3.e
            if (r0 == 0) goto L1b
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r1 = 0
            r0.<init>(r1)
            java.lang.String r2 = r3.c
            r0.a(r2)
            java.util.HashMap<java.lang.String, byte[]> r2 = r3.e
            r0.a(r2, r1)
            java.nio.ByteBuffer r0 = r0.a
            byte[] r0 = com.tencent.bugly.proguard.n.a(r0)
            return r0
        L1b:
            byte[] r0 = super.a()
            return r0
    }

    public final <T> T b(java.lang.String r6, T r7) throws com.tencent.bugly.proguard.b {
            r5 = this;
            java.util.HashMap<java.lang.String, byte[]> r0 = r5.e
            r1 = 1
            r2 = 0
            r3 = 0
            if (r0 == 0) goto L44
            boolean r0 = r0.containsKey(r6)
            if (r0 != 0) goto Le
            return r2
        Le:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r5.g
            boolean r0 = r0.containsKey(r6)
            if (r0 == 0) goto L1d
            java.util.HashMap<java.lang.String, java.lang.Object> r7 = r5.g
            java.lang.Object r6 = r7.get(r6)
            return r6
        L1d:
            java.util.HashMap<java.lang.String, byte[]> r0 = r5.e
            java.lang.Object r0 = r0.get(r6)
            byte[] r0 = (byte[]) r0
            com.tencent.bugly.proguard.k r2 = r5.f     // Catch: java.lang.Exception -> L3d
            r2.a(r0)     // Catch: java.lang.Exception -> L3d
            com.tencent.bugly.proguard.k r0 = r5.f     // Catch: java.lang.Exception -> L3d
            java.lang.String r2 = r5.c     // Catch: java.lang.Exception -> L3d
            r0.a(r2)     // Catch: java.lang.Exception -> L3d
            com.tencent.bugly.proguard.k r0 = r5.f     // Catch: java.lang.Exception -> L3d
            java.lang.Object r7 = r0.a(r7, r3, r1)     // Catch: java.lang.Exception -> L3d
            if (r7 == 0) goto L3c
            r5.c(r6, r7)     // Catch: java.lang.Exception -> L3d
        L3c:
            return r7
        L3d:
            r6 = move-exception
            com.tencent.bugly.proguard.b r7 = new com.tencent.bugly.proguard.b
            r7.<init>(r6)
            throw r7
        L44:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r0 = r5.a
            boolean r0 = r0.containsKey(r6)
            if (r0 != 0) goto L4d
            return r2
        L4d:
            java.util.HashMap<java.lang.String, java.lang.Object> r0 = r5.g
            boolean r0 = r0.containsKey(r6)
            if (r0 == 0) goto L5c
            java.util.HashMap<java.lang.String, java.lang.Object> r7 = r5.g
            java.lang.Object r6 = r7.get(r6)
            return r6
        L5c:
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r0 = r5.a
            java.lang.Object r0 = r0.get(r6)
            java.util.HashMap r0 = (java.util.HashMap) r0
            byte[] r2 = new byte[r3]
            java.util.Set r0 = r0.entrySet()
            java.util.Iterator r0 = r0.iterator()
            boolean r4 = r0.hasNext()
            if (r4 == 0) goto L84
            java.lang.Object r0 = r0.next()
            java.util.Map$Entry r0 = (java.util.Map.Entry) r0
            r0.getKey()
            java.lang.Object r0 = r0.getValue()
            r2 = r0
            byte[] r2 = (byte[]) r2
        L84:
            com.tencent.bugly.proguard.k r0 = r5.f     // Catch: java.lang.Exception -> L9a
            r0.a(r2)     // Catch: java.lang.Exception -> L9a
            com.tencent.bugly.proguard.k r0 = r5.f     // Catch: java.lang.Exception -> L9a
            java.lang.String r2 = r5.c     // Catch: java.lang.Exception -> L9a
            r0.a(r2)     // Catch: java.lang.Exception -> L9a
            com.tencent.bugly.proguard.k r0 = r5.f     // Catch: java.lang.Exception -> L9a
            java.lang.Object r7 = r0.a(r7, r3, r1)     // Catch: java.lang.Exception -> L9a
            r5.c(r6, r7)     // Catch: java.lang.Exception -> L9a
            return r7
        L9a:
            r6 = move-exception
            com.tencent.bugly.proguard.b r7 = new com.tencent.bugly.proguard.b
            r7.<init>(r6)
            throw r7
    }

    public void b() {
            r1 = this;
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
            return
    }
}
