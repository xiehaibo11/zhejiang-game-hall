package com.tencent.bugly.proguard;

public final class g extends com.tencent.bugly.proguard.m {
    static byte[] k;
    static java.util.Map<java.lang.String, java.lang.String> l;
    static final boolean m = false;
    public short a;
    public byte b;
    public int c;
    public int d;
    public java.lang.String e;
    public java.lang.String f;
    public byte[] g;
    public int h;
    public java.util.Map<java.lang.String, java.lang.String> i;
    public java.util.Map<java.lang.String, java.lang.String> j;

    static {
            java.lang.Class<com.tencent.bugly.proguard.g> r0 = com.tencent.bugly.proguard.g.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.tencent.bugly.proguard.g.m = r0
            r0 = 0
            com.tencent.bugly.proguard.g.k = r0
            com.tencent.bugly.proguard.g.l = r0
            return
    }

    public g() {
            r2 = this;
            r2.<init>()
            r0 = 0
            r2.a = r0
            r2.b = r0
            r2.c = r0
            r2.d = r0
            r1 = 0
            r2.e = r1
            r2.f = r1
            r2.h = r0
            return
    }

    @Override
    public final void a(com.tencent.bugly.proguard.k r5) {
            r4 = this;
            short r0 = r4.a     // Catch: java.lang.Exception -> L87
            r1 = 1
            short r0 = r5.a(r0, r1, r1)     // Catch: java.lang.Exception -> L87
            r4.a = r0     // Catch: java.lang.Exception -> L87
            byte r0 = r4.b     // Catch: java.lang.Exception -> L87
            r2 = 2
            byte r0 = r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            r4.b = r0     // Catch: java.lang.Exception -> L87
            int r0 = r4.c     // Catch: java.lang.Exception -> L87
            r2 = 3
            int r0 = r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            r4.c = r0     // Catch: java.lang.Exception -> L87
            int r0 = r4.d     // Catch: java.lang.Exception -> L87
            r2 = 4
            int r0 = r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            r4.d = r0     // Catch: java.lang.Exception -> L87
            r0 = 5
            java.lang.String r0 = r5.b(r0, r1)     // Catch: java.lang.Exception -> L87
            r4.e = r0     // Catch: java.lang.Exception -> L87
            r0 = 6
            java.lang.String r0 = r5.b(r0, r1)     // Catch: java.lang.Exception -> L87
            r4.f = r0     // Catch: java.lang.Exception -> L87
            byte[] r0 = com.tencent.bugly.proguard.g.k     // Catch: java.lang.Exception -> L87
            if (r0 != 0) goto L3d
            byte[] r0 = new byte[r1]     // Catch: java.lang.Exception -> L87
            r2 = 0
            r0[r2] = r2     // Catch: java.lang.Exception -> L87
            com.tencent.bugly.proguard.g.k = r0     // Catch: java.lang.Exception -> L87
        L3d:
            r0 = 7
            byte[] r0 = r5.c(r0, r1)     // Catch: java.lang.Exception -> L87
            byte[] r0 = (byte[]) r0     // Catch: java.lang.Exception -> L87
            r4.g = r0     // Catch: java.lang.Exception -> L87
            int r0 = r4.h     // Catch: java.lang.Exception -> L87
            r2 = 8
            int r0 = r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            r4.h = r0     // Catch: java.lang.Exception -> L87
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.g.l     // Catch: java.lang.Exception -> L87
            java.lang.String r2 = ""
            if (r0 != 0) goto L60
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L87
            r0.<init>()     // Catch: java.lang.Exception -> L87
            com.tencent.bugly.proguard.g.l = r0     // Catch: java.lang.Exception -> L87
            r0.put(r2, r2)     // Catch: java.lang.Exception -> L87
        L60:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.g.l     // Catch: java.lang.Exception -> L87
            r3 = 9
            java.lang.Object r0 = r5.a(r0, r3, r1)     // Catch: java.lang.Exception -> L87
            java.util.Map r0 = (java.util.Map) r0     // Catch: java.lang.Exception -> L87
            r4.i = r0     // Catch: java.lang.Exception -> L87
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.g.l     // Catch: java.lang.Exception -> L87
            if (r0 != 0) goto L7a
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Exception -> L87
            r0.<init>()     // Catch: java.lang.Exception -> L87
            com.tencent.bugly.proguard.g.l = r0     // Catch: java.lang.Exception -> L87
            r0.put(r2, r2)     // Catch: java.lang.Exception -> L87
        L7a:
            java.util.Map<java.lang.String, java.lang.String> r0 = com.tencent.bugly.proguard.g.l     // Catch: java.lang.Exception -> L87
            r2 = 10
            java.lang.Object r5 = r5.a(r0, r2, r1)     // Catch: java.lang.Exception -> L87
            java.util.Map r5 = (java.util.Map) r5     // Catch: java.lang.Exception -> L87
            r4.j = r5     // Catch: java.lang.Exception -> L87
            return
        L87:
            r5 = move-exception
            r5.printStackTrace()
            java.io.PrintStream r0 = java.lang.System.out
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            java.lang.String r2 = "RequestPacket decode error "
            r1.<init>(r2)
            byte[] r2 = r4.g
            java.lang.String r2 = com.tencent.bugly.proguard.f.a(r2)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.println(r1)
            java.lang.RuntimeException r0 = new java.lang.RuntimeException
            r0.<init>(r5)
            throw r0
    }

    @Override
    public final void a(com.tencent.bugly.proguard.l r3) {
            r2 = this;
            short r0 = r2.a
            r1 = 1
            r3.a(r0, r1)
            byte r0 = r2.b
            r1 = 2
            r3.a(r0, r1)
            int r0 = r2.c
            r1 = 3
            r3.a(r0, r1)
            int r0 = r2.d
            r1 = 4
            r3.a(r0, r1)
            java.lang.String r0 = r2.e
            r1 = 5
            r3.a(r0, r1)
            java.lang.String r0 = r2.f
            r1 = 6
            r3.a(r0, r1)
            byte[] r0 = r2.g
            r1 = 7
            r3.a(r0, r1)
            int r0 = r2.h
            r1 = 8
            r3.a(r0, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.i
            r1 = 9
            r3.a(r0, r1)
            java.util.Map<java.lang.String, java.lang.String> r0 = r2.j
            r1 = 10
            r3.a(r0, r1)
            return
    }

    @Override
    public final void a(java.lang.StringBuilder r2, int r3) {
            r1 = this;
            com.tencent.bugly.proguard.i r0 = new com.tencent.bugly.proguard.i
            r0.<init>(r2, r3)
            short r2 = r1.a
            java.lang.String r3 = "iVersion"
            r0.a(r2, r3)
            byte r2 = r1.b
            java.lang.String r3 = "cPacketType"
            r0.a(r2, r3)
            int r2 = r1.c
            java.lang.String r3 = "iMessageType"
            r0.a(r2, r3)
            int r2 = r1.d
            java.lang.String r3 = "iRequestId"
            r0.a(r2, r3)
            java.lang.String r2 = r1.e
            java.lang.String r3 = "sServantName"
            r0.a(r2, r3)
            java.lang.String r2 = r1.f
            java.lang.String r3 = "sFuncName"
            r0.a(r2, r3)
            byte[] r2 = r1.g
            java.lang.String r3 = "sBuffer"
            r0.a(r2, r3)
            int r2 = r1.h
            java.lang.String r3 = "iTimeout"
            r0.a(r2, r3)
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.i
            java.lang.String r3 = "context"
            r0.a(r2, r3)
            java.util.Map<java.lang.String, java.lang.String> r2 = r1.j
            java.lang.String r3 = "status"
            r0.a(r2, r3)
            return
    }

    public final java.lang.Object clone() {
            r1 = this;
            java.lang.Object r0 = super.clone()     // Catch: java.lang.CloneNotSupportedException -> L5
            goto La
        L5:
            boolean r0 = com.tencent.bugly.proguard.g.m
            if (r0 == 0) goto Lb
            r0 = 0
        La:
            return r0
        Lb:
            java.lang.AssertionError r0 = new java.lang.AssertionError
            r0.<init>()
            throw r0
    }

    public final boolean equals(java.lang.Object r4) {
            r3 = this;
            com.tencent.bugly.proguard.g r4 = (com.tencent.bugly.proguard.g) r4
            short r0 = r4.a
            r1 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r1)
            boolean r0 = com.tencent.bugly.proguard.n.a(r1, r0)
            if (r0 == 0) goto L58
            byte r0 = r4.b
            boolean r0 = com.tencent.bugly.proguard.n.a(r1, r0)
            if (r0 == 0) goto L58
            int r0 = r4.c
            boolean r0 = com.tencent.bugly.proguard.n.a(r1, r0)
            if (r0 == 0) goto L58
            int r0 = r4.d
            boolean r0 = com.tencent.bugly.proguard.n.a(r1, r0)
            if (r0 == 0) goto L58
            java.lang.String r0 = r4.e
            boolean r0 = com.tencent.bugly.proguard.n.a(r2, r0)
            if (r0 == 0) goto L58
            java.lang.String r0 = r4.f
            boolean r0 = com.tencent.bugly.proguard.n.a(r2, r0)
            if (r0 == 0) goto L58
            byte[] r0 = r4.g
            boolean r0 = com.tencent.bugly.proguard.n.a(r2, r0)
            if (r0 == 0) goto L58
            int r0 = r4.h
            boolean r0 = com.tencent.bugly.proguard.n.a(r1, r0)
            if (r0 == 0) goto L58
            java.util.Map<java.lang.String, java.lang.String> r0 = r4.i
            boolean r0 = com.tencent.bugly.proguard.n.a(r2, r0)
            if (r0 == 0) goto L58
            java.util.Map<java.lang.String, java.lang.String> r4 = r4.j
            boolean r4 = com.tencent.bugly.proguard.n.a(r2, r4)
            if (r4 == 0) goto L58
            return r1
        L58:
            r4 = 0
            return r4
    }
}
