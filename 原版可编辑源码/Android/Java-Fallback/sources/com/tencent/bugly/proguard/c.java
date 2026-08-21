package com.tencent.bugly.proguard;

class c {
    protected java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> a;
    protected java.util.HashMap<java.lang.String, java.lang.Object> b;
    protected java.lang.String c;
    com.tencent.bugly.proguard.k d;
    private java.util.HashMap<java.lang.String, java.lang.Object> e;

    c() {
            r1 = this;
            r1.<init>()
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.a = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.b = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            r1.e = r0
            java.lang.String r0 = "GBK"
            r1.c = r0
            com.tencent.bugly.proguard.k r0 = new com.tencent.bugly.proguard.k
            r0.<init>()
            r1.d = r0
            return
    }

    private static void a(java.util.ArrayList<java.lang.String> r5, java.lang.Object r6) {
        L0:
            java.lang.Class r0 = r6.getClass()
            boolean r0 = r0.isArray()
            r1 = 0
            java.lang.String r2 = "java.util.List"
            java.lang.String r3 = "?"
            if (r0 == 0) goto L42
            java.lang.Class r0 = r6.getClass()
            java.lang.Class r0 = r0.getComponentType()
            java.lang.String r0 = r0.toString()
            java.lang.String r4 = "byte"
            boolean r0 = r0.equals(r4)
            if (r0 == 0) goto L3a
            int r0 = java.lang.reflect.Array.getLength(r6)
            if (r0 <= 0) goto L31
            r5.add(r2)
            java.lang.Object r6 = java.lang.reflect.Array.get(r6, r1)
            goto L0
        L31:
            java.lang.String r6 = "Array"
            r5.add(r6)
            r5.add(r3)
            return
        L3a:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "only byte[] is supported"
            r5.<init>(r6)
            throw r5
        L42:
            boolean r0 = r6 instanceof java.lang.reflect.Array
            if (r0 != 0) goto L9f
            boolean r0 = r6 instanceof java.util.List
            if (r0 == 0) goto L5e
            r5.add(r2)
            java.util.List r6 = (java.util.List) r6
            int r0 = r6.size()
            if (r0 <= 0) goto L5a
            java.lang.Object r6 = r6.get(r1)
            goto L0
        L5a:
            r5.add(r3)
            return
        L5e:
            boolean r0 = r6 instanceof java.util.Map
            if (r0 == 0) goto L93
            java.lang.String r0 = "java.util.Map"
            r5.add(r0)
            java.util.Map r6 = (java.util.Map) r6
            int r0 = r6.size()
            if (r0 <= 0) goto L8c
            java.util.Set r0 = r6.keySet()
            java.util.Iterator r0 = r0.iterator()
            java.lang.Object r0 = r0.next()
            java.lang.Object r6 = r6.get(r0)
            java.lang.Class r0 = r0.getClass()
            java.lang.String r0 = r0.getName()
            r5.add(r0)
            goto L0
        L8c:
            r5.add(r3)
            r5.add(r3)
            return
        L93:
            java.lang.Class r6 = r6.getClass()
            java.lang.String r6 = r6.getName()
            r5.add(r6)
            return
        L9f:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "can not support Array, please use List"
            r5.<init>(r6)
            throw r5
    }

    public void a(java.lang.String r1) {
            r0 = this;
            r0.c = r1
            return
    }

    public <T> void a(java.lang.String r5, T r6) {
            r4 = this;
            if (r5 == 0) goto L4c
            if (r6 == 0) goto L44
            boolean r0 = r6 instanceof java.util.Set
            if (r0 != 0) goto L3c
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r0.<init>()
            java.lang.String r1 = r4.c
            r0.a(r1)
            r1 = 0
            r0.a(r6, r1)
            java.nio.ByteBuffer r0 = r0.a
            byte[] r0 = com.tencent.bugly.proguard.n.a(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r2 = 1
            r1.<init>(r2)
            java.util.ArrayList r3 = new java.util.ArrayList
            r3.<init>(r2)
            a(r3, r6)
            java.lang.String r6 = com.tencent.bugly.proguard.a.a(r3)
            r1.put(r6, r0)
            java.util.HashMap<java.lang.String, java.lang.Object> r6 = r4.e
            r6.remove(r5)
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r6 = r4.a
            r6.put(r5, r1)
            return
        L3c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "can not support Set"
            r5.<init>(r6)
            throw r5
        L44:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "put value can not is null"
            r5.<init>(r6)
            throw r5
        L4c:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "put key can not is null"
            r5.<init>(r6)
            throw r5
    }

    public void a(byte[] r5) {
            r4 = this;
            com.tencent.bugly.proguard.k r0 = r4.d
            r0.a(r5)
            com.tencent.bugly.proguard.k r5 = r4.d
            java.lang.String r0 = r4.c
            r5.a(r0)
            java.util.HashMap r5 = new java.util.HashMap
            r0 = 1
            r5.<init>(r0)
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>(r0)
            r0 = 0
            byte[] r2 = new byte[r0]
            java.lang.String r3 = ""
            r1.put(r3, r2)
            r5.put(r3, r1)
            com.tencent.bugly.proguard.k r1 = r4.d
            java.util.HashMap r5 = r1.a(r5, r0, r0)
            r4.a = r5
            return
    }

    public byte[] a() {
            r3 = this;
            com.tencent.bugly.proguard.l r0 = new com.tencent.bugly.proguard.l
            r1 = 0
            r0.<init>(r1)
            java.lang.String r2 = r3.c
            r0.a(r2)
            java.util.HashMap<java.lang.String, java.util.HashMap<java.lang.String, byte[]>> r2 = r3.a
            r0.a(r2, r1)
            java.nio.ByteBuffer r0 = r0.a
            byte[] r0 = com.tencent.bugly.proguard.n.a(r0)
            return r0
    }
}
