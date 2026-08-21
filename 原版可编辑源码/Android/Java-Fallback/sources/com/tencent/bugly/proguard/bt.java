package com.tencent.bugly.proguard;

public final class bt extends com.tencent.bugly.proguard.m implements java.lang.Cloneable {
    static com.tencent.bugly.proguard.bs m;
    static java.util.Map<java.lang.String, java.lang.String> n;
    static final boolean o = false;
    public boolean a;
    public boolean b;
    public boolean c;
    public java.lang.String d;
    public java.lang.String e;
    public com.tencent.bugly.proguard.bs f;
    public java.util.Map<java.lang.String, java.lang.String> g;
    public long h;
    public java.lang.String i;
    public java.lang.String j;
    public int k;
    public int l;

    static {
            java.lang.Class<com.tencent.bugly.proguard.bt> r0 = com.tencent.bugly.proguard.bt.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.tencent.bugly.proguard.bt.o = r0
            com.tencent.bugly.proguard.bs r0 = new com.tencent.bugly.proguard.bs
            r0.<init>()
            com.tencent.bugly.proguard.bt.m = r0
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tencent.bugly.proguard.bt.n = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bt.n
            java.lang.String r1 = ""
            r0.put(r1, r1)
            return
    }

    public bt() {
            r3 = this;
            r3.<init>()
            r0 = 1
            r3.a = r0
            r3.b = r0
            r3.c = r0
            java.lang.String r0 = ""
            r3.d = r0
            r3.e = r0
            r1 = 0
            r3.f = r1
            r3.g = r1
            r1 = 0
            r3.h = r1
            r3.i = r0
            r3.j = r0
            r0 = 0
            r3.k = r0
            r3.l = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r5) {
            r4 = this;
            r0 = 1
            r1 = 0
            boolean r2 = r5.a(r1, r0)
            r4.a = r2
            boolean r2 = r5.a(r0, r0)
            r4.b = r2
            r2 = 2
            boolean r0 = r5.a(r2, r0)
            r4.c = r0
            r0 = 3
            java.lang.String r0 = r5.b(r0, r1)
            r4.d = r0
            r0 = 4
            java.lang.String r0 = r5.b(r0, r1)
            r4.e = r0
            com.tencent.bugly.proguard.bs r0 = com.tencent.bugly.proguard.bt.m
            r2 = 5
            com.tencent.bugly.proguard.m r0 = r5.a(r0, r2, r1)
            com.tencent.bugly.proguard.bs r0 = (com.tencent.bugly.proguard.bs) r0
            r4.f = r0
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.bt.n
            r2 = 6
            java.lang.Object r0 = r5.a(r0, r2, r1)
            java.util.Map r0 = (java.util.Map) r0
            r4.g = r0
            long r2 = r4.h
            r0 = 7
            long r2 = r5.a(r2, r0, r1)
            r4.h = r2
            r0 = 8
            java.lang.String r0 = r5.b(r0, r1)
            r4.i = r0
            r0 = 9
            java.lang.String r0 = r5.b(r0, r1)
            r4.j = r0
            int r0 = r4.k
            r2 = 10
            int r0 = r5.a(r0, r2, r1)
            r4.k = r0
            int r0 = r4.l
            r2 = 11
            int r5 = r5.a(r0, r2, r1)
            r4.l = r5
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r4) {
            r3 = this;
            boolean r0 = r3.a
            r1 = 0
            r4.a(r0, r1)
            boolean r0 = r3.b
            r1 = 1
            r4.a(r0, r1)
            boolean r0 = r3.c
            r1 = 2
            r4.a(r0, r1)
            java.lang.String r0 = r3.d
            if (r0 == 0) goto L1a
            r1 = 3
            r4.a(r0, r1)
        L1a:
            java.lang.String r0 = r3.e
            if (r0 == 0) goto L22
            r1 = 4
            r4.a(r0, r1)
        L22:
            com.tencent.bugly.proguard.bs r0 = r3.f
            if (r0 == 0) goto L2a
            r1 = 5
            r4.a(r0, r1)
        L2a:
            java.util.Map<java.lang.String, java.lang.String> r0 = r3.g
            if (r0 == 0) goto L32
            r1 = 6
            r4.a(r0, r1)
        L32:
            long r0 = r3.h
            r2 = 7
            r4.a(r0, r2)
            java.lang.String r0 = r3.i
            if (r0 == 0) goto L41
            r1 = 8
            r4.a(r0, r1)
        L41:
            java.lang.String r0 = r3.j
            if (r0 == 0) goto L4a
            r1 = 9
            r4.a(r0, r1)
        L4a:
            int r0 = r3.k
            r1 = 10
            r4.a(r0, r1)
            int r0 = r3.l
            r1 = 11
            r4.a(r0, r1)
            return
    }

    @Override
    public final void a(java.lang.StringBuilder r3, int r4) {
            r2 = this;
            com.tencent.bugly.proguard.i r0 = new com.tencent.bugly.proguard.i
            r0.<init>(r3, r4)
            boolean r3 = r2.a
            java.lang.String r4 = "enable"
            r0.a(r3, r4)
            boolean r3 = r2.b
            java.lang.String r4 = "enableUserInfo"
            r0.a(r3, r4)
            boolean r3 = r2.c
            java.lang.String r4 = "enableQuery"
            r0.a(r3, r4)
            java.lang.String r3 = r2.d
            java.lang.String r4 = "url"
            r0.a(r3, r4)
            java.lang.String r3 = r2.e
            java.lang.String r4 = "expUrl"
            r0.a(r3, r4)
            com.tencent.bugly.proguard.bs r3 = r2.f
            java.lang.String r4 = "security"
            r0.a(r3, r4)
            java.util.Map<java.lang.String, java.lang.String> r3 = r2.g
            java.lang.String r4 = "valueMap"
            r0.a(r3, r4)
            long r3 = r2.h
            java.lang.String r1 = "strategylastUpdateTime"
            r0.a(r3, r1)
            java.lang.String r3 = r2.i
            java.lang.String r4 = "httpsUrl"
            r0.a(r3, r4)
            java.lang.String r3 = r2.j
            java.lang.String r4 = "httpsExpUrl"
            r0.a(r3, r4)
            int r3 = r2.k
            java.lang.String r4 = "eventRecordCount"
            r0.a(r3, r4)
            int r3 = r2.l
            java.lang.String r4 = "eventTimeInterval"
            r0.a(r3, r4)
            return
    }

    public final java.lang.Object clone() {
            r1 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L5
            goto La
        L5:
            boolean r0 = com.tencent.bugly.proguard.bt.o
            if (r0 == 0) goto Lb
            r0 = 0
        La:
            return r0
        Lb:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
    }

    public final boolean equals(java.lang.Object r6) {
            r5 = this;
            r0 = 0
            if (r6 != 0) goto L4
            return r0
        L4:
            com.tencent.bugly.proguard.bt r6 = (com.tencent.bugly.proguard.bt) r6
            boolean r1 = r5.a
            boolean r2 = r6.a
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            boolean r1 = r5.b
            boolean r2 = r6.b
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            boolean r1 = r5.c
            boolean r2 = r6.c
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            java.lang.String r1 = r5.d
            java.lang.String r2 = r6.d
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            java.lang.String r1 = r5.e
            java.lang.String r2 = r6.e
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            com.tencent.bugly.proguard.bs r1 = r5.f
            com.tencent.bugly.proguard.bs r2 = r6.f
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            java.util.Map<java.lang.String, java.lang.String> r1 = r5.g
            java.util.Map<java.lang.String, java.lang.String> r2 = r6.g
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            long r1 = r5.h
            long r3 = r6.h
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r3)
            if (r1 == 0) goto L80
            java.lang.String r1 = r5.i
            java.lang.String r2 = r6.i
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            java.lang.String r1 = r5.j
            java.lang.String r2 = r6.j
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            int r1 = r5.k
            int r2 = r6.k
            boolean r1 = com.tencent.bugly.proguard.n.a(r1, r2)
            if (r1 == 0) goto L80
            int r1 = r5.l
            int r6 = r6.l
            boolean r6 = com.tencent.bugly.proguard.n.a(r1, r6)
            if (r6 == 0) goto L80
            r6 = 1
            return r6
        L80:
            return r0
    }

    public final int hashCode() {
            r2 = this;
            java.lang.Exception r0 = new java.lang.Exception     // Catch: java.lang.Exception -> L8
            java.lang.String r1 = "Need define key first!"
            r0.<init>(r1)     // Catch: java.lang.Exception -> L8
            throw r0     // Catch: java.lang.Exception -> L8
        L8:
            r0 = move-exception
            r0.printStackTrace()
            r0 = 0
            return r0
    }
}
