package com.tkay.expressad.exoplayer.j;

public final class n implements com.tkay.expressad.exoplayer.j.h {
    private static final java.lang.String a = "DefaultDataSource";
    private static final java.lang.String b = "asset";
    private static final java.lang.String c = "content";
    private static final java.lang.String d = "rtmp";
    private static final java.lang.String e = "rawresource";
    private final android.content.Context f;
    private final com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> g;
    private final com.tkay.expressad.exoplayer.j.h h;
    private com.tkay.expressad.exoplayer.j.h i;
    private com.tkay.expressad.exoplayer.j.h j;
    private com.tkay.expressad.exoplayer.j.h k;
    private com.tkay.expressad.exoplayer.j.h l;
    private com.tkay.expressad.exoplayer.j.h m;
    private com.tkay.expressad.exoplayer.j.h n;
    private com.tkay.expressad.exoplayer.j.h o;

    public n(android.content.Context r1, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2, com.tkay.expressad.exoplayer.j.h r3) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.f = r1
            r0.g = r2
            java.lang.Object r1 = com.tkay.expressad.exoplayer.k.a.a(r3)
            com.tkay.expressad.exoplayer.j.h r1 = (com.tkay.expressad.exoplayer.j.h) r1
            r0.h = r1
            return
    }

    private n(android.content.Context r7, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r8, java.lang.String r9, boolean r10) {
            r6 = this;
            r5 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r3 = r9
            r4 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    private n(android.content.Context r9, com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r10, java.lang.String r11, boolean r12, byte r13) {
            r8 = this;
            com.tkay.expressad.exoplayer.j.p r13 = new com.tkay.expressad.exoplayer.j.p
            r2 = 0
            r4 = 8000(0x1f40, float:1.121E-41)
            r5 = 8000(0x1f40, float:1.121E-41)
            r7 = 0
            r0 = r13
            r1 = r11
            r3 = r10
            r6 = r12
            r0.<init>(r1, r2, r3, r4, r5, r6, r7)
            r8.<init>(r9, r10, r13)
            return
    }

    private com.tkay.expressad.exoplayer.j.h c() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r2.i
            if (r0 != 0) goto Ld
            com.tkay.expressad.exoplayer.j.r r0 = new com.tkay.expressad.exoplayer.j.r
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r1 = r2.g
            r0.<init>(r1)
            r2.i = r0
        Ld:
            com.tkay.expressad.exoplayer.j.h r0 = r2.i
            return r0
    }

    private com.tkay.expressad.exoplayer.j.h d() {
            r3 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r3.j
            if (r0 != 0) goto Lf
            com.tkay.expressad.exoplayer.j.c r0 = new com.tkay.expressad.exoplayer.j.c
            android.content.Context r1 = r3.f
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2 = r3.g
            r0.<init>(r1, r2)
            r3.j = r0
        Lf:
            com.tkay.expressad.exoplayer.j.h r0 = r3.j
            return r0
    }

    private com.tkay.expressad.exoplayer.j.h e() {
            r3 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r3.k
            if (r0 != 0) goto Lf
            com.tkay.expressad.exoplayer.j.e r0 = new com.tkay.expressad.exoplayer.j.e
            android.content.Context r1 = r3.f
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2 = r3.g
            r0.<init>(r1, r2)
            r3.k = r0
        Lf:
            com.tkay.expressad.exoplayer.j.h r0 = r3.k
            return r0
    }

    private com.tkay.expressad.exoplayer.j.h f() {
            r3 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r3.l
            if (r0 != 0) goto L34
            java.lang.String r0 = "com.tkay.expressad.exoplayer.ext.rtmp.RtmpDataSource"
            java.lang.Class r0 = java.lang.Class.forName(r0)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            r1 = 0
            java.lang.Class[] r2 = new java.lang.Class[r1]     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.reflect.Constructor r0 = r0.getConstructor(r2)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            java.lang.Object r0 = r0.newInstance(r1)     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            com.tkay.expressad.exoplayer.j.h r0 = (com.tkay.expressad.exoplayer.j.h) r0     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            r3.l = r0     // Catch: java.lang.Exception -> L1c java.lang.ClassNotFoundException -> L25
            goto L2c
        L1c:
            r0 = move-exception
            java.lang.RuntimeException r1 = new java.lang.RuntimeException
            java.lang.String r2 = "Error instantiating RTMP extension"
            r1.<init>(r2, r0)
            throw r1
        L25:
            java.lang.String r0 = "DefaultDataSource"
            java.lang.String r1 = "Attempting to play RTMP stream without depending on the RTMP extension"
            android.util.Log.w(r0, r1)
        L2c:
            com.tkay.expressad.exoplayer.j.h r0 = r3.l
            if (r0 != 0) goto L34
            com.tkay.expressad.exoplayer.j.h r0 = r3.h
            r3.l = r0
        L34:
            com.tkay.expressad.exoplayer.j.h r0 = r3.l
            return r0
    }

    private com.tkay.expressad.exoplayer.j.h g() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.m
            if (r0 != 0) goto Lb
            com.tkay.expressad.exoplayer.j.f r0 = new com.tkay.expressad.exoplayer.j.f
            r0.<init>()
            r1.m = r0
        Lb:
            com.tkay.expressad.exoplayer.j.h r0 = r1.m
            return r0
    }

    private com.tkay.expressad.exoplayer.j.h h() {
            r3 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r3.n
            if (r0 != 0) goto Lf
            com.tkay.expressad.exoplayer.j.y r0 = new com.tkay.expressad.exoplayer.j.y
            android.content.Context r1 = r3.f
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2 = r3.g
            r0.<init>(r1, r2)
            r3.n = r0
        Lf:
            com.tkay.expressad.exoplayer.j.h r0 = r3.n
            return r0
    }

    @Override
    public final int a(byte[] r2, int r3, int r4) {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.o
            int r2 = r0.a(r2, r3, r4)
            return r2
    }

    @Override
    public final long a(com.tkay.expressad.exoplayer.j.k r4) {
            r3 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r3.o
            if (r0 != 0) goto L6
            r0 = 1
            goto L7
        L6:
            r0 = 0
        L7:
            com.tkay.expressad.exoplayer.k.a.b(r0)
            android.net.Uri r0 = r4.c
            java.lang.String r0 = r0.getScheme()
            android.net.Uri r1 = r4.c
            boolean r1 = com.tkay.expressad.exoplayer.k.af.a(r1)
            if (r1 == 0) goto L41
            android.net.Uri r0 = r4.c
            java.lang.String r0 = r0.getPath()
            java.lang.String r1 = "/android_asset/"
            boolean r0 = r0.startsWith(r1)
            if (r0 == 0) goto L2e
            com.tkay.expressad.exoplayer.j.h r0 = r3.d()
            r3.o = r0
            goto Lb3
        L2e:
            com.tkay.expressad.exoplayer.j.h r0 = r3.i
            if (r0 != 0) goto L3b
            com.tkay.expressad.exoplayer.j.r r0 = new com.tkay.expressad.exoplayer.j.r
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r1 = r3.g
            r0.<init>(r1)
            r3.i = r0
        L3b:
            com.tkay.expressad.exoplayer.j.h r0 = r3.i
            r3.o = r0
            goto Lb3
        L41:
            java.lang.String r1 = "asset"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L50
            com.tkay.expressad.exoplayer.j.h r0 = r3.d()
            r3.o = r0
            goto Lb3
        L50:
            java.lang.String r1 = "content"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L6c
            com.tkay.expressad.exoplayer.j.h r0 = r3.k
            if (r0 != 0) goto L67
            com.tkay.expressad.exoplayer.j.e r0 = new com.tkay.expressad.exoplayer.j.e
            android.content.Context r1 = r3.f
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2 = r3.g
            r0.<init>(r1, r2)
            r3.k = r0
        L67:
            com.tkay.expressad.exoplayer.j.h r0 = r3.k
            r3.o = r0
            goto Lb3
        L6c:
            java.lang.String r1 = "rtmp"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L7b
            com.tkay.expressad.exoplayer.j.h r0 = r3.f()
            r3.o = r0
            goto Lb3
        L7b:
            java.lang.String r1 = "data"
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L93
            com.tkay.expressad.exoplayer.j.h r0 = r3.m
            if (r0 != 0) goto L8e
            com.tkay.expressad.exoplayer.j.f r0 = new com.tkay.expressad.exoplayer.j.f
            r0.<init>()
            r3.m = r0
        L8e:
            com.tkay.expressad.exoplayer.j.h r0 = r3.m
            r3.o = r0
            goto Lb3
        L93:
            java.lang.String r1 = "rawresource"
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto Laf
            com.tkay.expressad.exoplayer.j.h r0 = r3.n
            if (r0 != 0) goto Laa
            com.tkay.expressad.exoplayer.j.y r0 = new com.tkay.expressad.exoplayer.j.y
            android.content.Context r1 = r3.f
            com.tkay.expressad.exoplayer.j.aa<? super com.tkay.expressad.exoplayer.j.h> r2 = r3.g
            r0.<init>(r1, r2)
            r3.n = r0
        Laa:
            com.tkay.expressad.exoplayer.j.h r0 = r3.n
            r3.o = r0
            goto Lb3
        Laf:
            com.tkay.expressad.exoplayer.j.h r0 = r3.h
            r3.o = r0
        Lb3:
            com.tkay.expressad.exoplayer.j.h r0 = r3.o
            long r0 = r0.a(r4)
            return r0
    }

    @Override
    public final android.net.Uri a() {
            r1 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r1.o
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            android.net.Uri r0 = r0.a()
            return r0
    }

    @Override
    public final void b() {
            r2 = this;
            com.tkay.expressad.exoplayer.j.h r0 = r2.o
            if (r0 == 0) goto Lf
            r1 = 0
            r0.b()     // Catch: java.lang.Throwable -> Lb
            r2.o = r1
            return
        Lb:
            r0 = move-exception
            r2.o = r1
            throw r0
        Lf:
            return
    }
}
