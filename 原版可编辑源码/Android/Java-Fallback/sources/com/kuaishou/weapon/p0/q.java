package com.kuaishou.weapon.p0;

public class q {
    public static final int a = 3;
    private static com.kuaishou.weapon.p0.q b = null;
    private static final java.lang.String g = "1";
    private volatile boolean c;
    private com.kuaishou.weapon.p0.dp d;
    private android.content.Context e;
    private com.kuaishou.weapon.p0.t f;


    private q(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.c = r0
            r1.e = r2
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a(r2)
            r1.d = r0
            com.kuaishou.weapon.p0.t r2 = com.kuaishou.weapon.p0.t.a(r2)
            r1.f = r2
            return
    }

    static android.content.Context a(com.kuaishou.weapon.p0.q r0) {
            android.content.Context r0 = r0.e
            return r0
    }

    public static synchronized com.kuaishou.weapon.p0.q a(android.content.Context r2) {
            java.lang.Class<com.kuaishou.weapon.p0.q> r0 = com.kuaishou.weapon.p0.q.class
            monitor-enter(r0)
            com.kuaishou.weapon.p0.q r1 = com.kuaishou.weapon.p0.q.b     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            if (r1 != 0) goto Le
            com.kuaishou.weapon.p0.q r1 = new com.kuaishou.weapon.p0.q     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            com.kuaishou.weapon.p0.q.b = r1     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
        Le:
            com.kuaishou.weapon.p0.q r2 = com.kuaishou.weapon.p0.q.b     // Catch: java.lang.Throwable -> L12 java.lang.Exception -> L15
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L15:
            r2 = 0
            monitor-exit(r0)
            return r2
    }

    private synchronized boolean a(int r5, java.lang.String r6, java.lang.String r7, boolean r8, android.content.pm.PackageInfo r9) {
            r4 = this;
            monitor-enter(r4)
            r7 = 0
            r0 = 1
            if (r8 == 0) goto Lf
            com.kuaishou.weapon.p0.t r8 = r4.f     // Catch: java.lang.Throwable -> Led
            int r8 = r8.c(r5)     // Catch: java.lang.Throwable -> Led
            if (r8 == r0) goto Lf
            monitor-exit(r4)
            return r7
        Lf:
            com.kuaishou.weapon.p0.t r8 = r4.f     // Catch: java.lang.Throwable -> Led
            com.kuaishou.weapon.p0.s r8 = r8.a(r5)     // Catch: java.lang.Throwable -> Led
            r1 = -1
            if (r8 != 0) goto L48
            com.kuaishou.weapon.p0.t r8 = r4.f     // Catch: java.lang.Throwable -> Led
            r8.b(r5, r1)     // Catch: java.lang.Throwable -> Led
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Throwable -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = "pk"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Led
            r0.<init>()     // Catch: java.lang.Throwable -> Led
            r0.append(r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> Led
            r8.put(r9, r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "pv"
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "e"
            java.lang.String r6 = com.kuaishou.weapon.p0.cj.m     // Catch: java.lang.Throwable -> Led
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            android.content.Context r5 = r4.e     // Catch: java.lang.Throwable -> Led
            java.lang.String r6 = "1002001"
            com.kuaishou.weapon.p0.bg.a(r5, r6, r8)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r4)
            return r7
        L48:
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Led
            java.lang.String r3 = r8.e     // Catch: java.lang.Throwable -> Led
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Led
            boolean r2 = com.kuaishou.weapon.p0.dn.a(r2)     // Catch: java.lang.Throwable -> Led
            if (r2 != 0) goto L8c
            com.kuaishou.weapon.p0.t r8 = r4.f     // Catch: java.lang.Throwable -> Led
            r8.b(r5, r1)     // Catch: java.lang.Throwable -> Led
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Throwable -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = "pk"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Led
            r0.<init>()     // Catch: java.lang.Throwable -> Led
            r0.append(r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> Led
            r8.put(r9, r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "pv"
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "e"
            java.lang.String r6 = com.kuaishou.weapon.p0.cj.n     // Catch: java.lang.Throwable -> Led
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "l"
            java.lang.String r6 = "CBH"
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            android.content.Context r5 = r4.e     // Catch: java.lang.Throwable -> Led
            java.lang.String r6 = "1002001"
            com.kuaishou.weapon.p0.bg.a(r5, r6, r8)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r4)
            return r7
        L8c:
            if (r9 == 0) goto L90
            r8.r = r9     // Catch: java.lang.Throwable -> Led
        L90:
            android.content.Context r9 = r4.e     // Catch: java.lang.Throwable -> Led
            android.content.Context r9 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> Led
            com.kuaishou.weapon.p0.r r9 = com.kuaishou.weapon.p0.r.a(r9, r0)     // Catch: java.lang.Throwable -> Led
            boolean r2 = r9.a(r8, r7)     // Catch: java.lang.Throwable -> Led
            if (r2 != 0) goto Ldc
            com.kuaishou.weapon.p0.t r0 = r4.f     // Catch: java.lang.Throwable -> Led
            r0.b(r5, r1)     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = r8.e     // Catch: java.lang.Throwable -> Led
            r9.a(r8)     // Catch: java.lang.Throwable -> Led
            java.util.HashMap r8 = new java.util.HashMap     // Catch: java.lang.Throwable -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = "pk"
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Led
            r0.<init>()     // Catch: java.lang.Throwable -> Led
            r0.append(r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = r0.toString()     // Catch: java.lang.Throwable -> Led
            r8.put(r9, r5)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "pv"
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "e"
            java.lang.String r6 = com.kuaishou.weapon.p0.cj.o     // Catch: java.lang.Throwable -> Led
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            java.lang.String r5 = "l"
            java.lang.String r6 = "CBH"
            r8.put(r5, r6)     // Catch: java.lang.Throwable -> Led
            android.content.Context r5 = r4.e     // Catch: java.lang.Throwable -> Led
            java.lang.String r6 = "1002001"
            com.kuaishou.weapon.p0.bg.a(r5, r6, r8)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r4)
            return r7
        Ldc:
            java.lang.String r5 = r8.e     // Catch: java.lang.Throwable -> Led
            com.kuaishou.weapon.p0.s r5 = r9.c(r5)     // Catch: java.lang.Throwable -> Led
            r5.b = r0     // Catch: java.lang.Throwable -> Led
            r5.p = r0     // Catch: java.lang.Throwable -> Led
            com.kuaishou.weapon.p0.t r6 = r4.f     // Catch: java.lang.Throwable -> Led
            r6.a(r5)     // Catch: java.lang.Throwable -> Led
            monitor-exit(r4)
            return r0
        Led:
            r5 = move-exception
            monitor-exit(r4)
            throw r5
    }

    static com.kuaishou.weapon.p0.t b(com.kuaishou.weapon.p0.q r0) {
            com.kuaishou.weapon.p0.t r0 = r0.f
            return r0
    }

    private static void d() {
            com.kuaishou.weapon.p0.dp r0 = com.kuaishou.weapon.p0.dp.a()     // Catch: java.lang.Exception -> Ld
            if (r0 == 0) goto Ld
            java.lang.String r1 = "W_S_V"
            java.lang.String r2 = "1"
            r0.b(r1, r2)     // Catch: java.lang.Exception -> Ld
        Ld:
            return
    }

    public void a() {
            r0 = this;
            d()
            r0.b()
            return
    }

    public void a(java.lang.String r3) {
            r2 = this;
            com.kuaishou.weapon.p0.n r0 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> Lc
            com.kuaishou.weapon.p0.q$1 r1 = new com.kuaishou.weapon.p0.q$1     // Catch: java.lang.Throwable -> Lc
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> Lc
            r0.a(r1)     // Catch: java.lang.Throwable -> Lc
        Lc:
            return
    }

    public void a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            com.kuaishou.weapon.p0.t r0 = r1.f
            r0.a(r2)
            java.io.File r2 = new java.io.File
            r2.<init>(r3)
            boolean r3 = r2.exists()
            if (r3 == 0) goto L13
            r2.delete()
        L13:
            return
    }

    public synchronized boolean a(int r7, java.lang.String r8, android.content.pm.PackageInfo r9) {
            r6 = this;
            monitor-enter(r6)
            r3 = 0
            r4 = 0
            r0 = r6
            r1 = r7
            r2 = r8
            r5 = r9
            boolean r7 = r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Ld
            monitor-exit(r6)
            return r7
        Ld:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    public boolean a(com.kuaishou.weapon.p0.s r15, java.lang.String r16, java.lang.String r17) {
            r14 = this;
            r6 = r14
            r7 = r15
            java.lang.String r8 = "1002001"
            java.lang.String r9 = "CBH"
            java.lang.String r10 = "l"
            java.lang.String r11 = "e"
            r12 = 0
            if (r7 != 0) goto L20
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = com.kuaishou.weapon.p0.cj.r
        L14:
            r0.put(r11, r1)
            r0.put(r10, r9)
            android.content.Context r1 = r6.e
            com.kuaishou.weapon.p0.bg.a(r1, r8, r0)
            return r12
        L20:
            java.io.File r0 = new java.io.File
            java.lang.String r1 = r7.e
            r0.<init>(r1)
            boolean r1 = com.kuaishou.weapon.p0.dn.a(r0)
            if (r1 != 0) goto L35
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            java.lang.String r1 = com.kuaishou.weapon.p0.cj.t
            goto L14
        L35:
            r13 = 1
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lb4
            int r2 = r7.a     // Catch: java.lang.Throwable -> Lb4
            boolean r1 = r1.b(r2)     // Catch: java.lang.Throwable -> Lb4
            if (r1 != 0) goto L45
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lb4
            r1.a(r15)     // Catch: java.lang.Throwable -> Lb4
        L45:
            android.content.Context r1 = r6.e     // Catch: java.lang.Throwable -> Lb4
            android.content.Context r1 = r1.getApplicationContext()     // Catch: java.lang.Throwable -> Lb4
            com.kuaishou.weapon.p0.r r1 = com.kuaishou.weapon.p0.r.a(r1, r13)     // Catch: java.lang.Throwable -> Lb4
            com.kuaishou.weapon.p0.t r2 = r6.f     // Catch: java.lang.Throwable -> Lb4
            int r3 = r7.a     // Catch: java.lang.Throwable -> Lb4
            r2.a(r3, r13)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = r7.c     // Catch: java.lang.Throwable -> Lb4
            r14.b(r2)     // Catch: java.lang.Throwable -> Lb4
            boolean r2 = r1.a(r15, r13)     // Catch: java.lang.Throwable -> Lb4
            if (r2 != 0) goto L92
            r0.delete()     // Catch: java.lang.Throwable -> Lb4
            int r1 = r7.a     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r2 = r7.d     // Catch: java.lang.Throwable -> Lb4
            r3 = 0
            r4 = 1
            r5 = 0
            r0 = r14
            r0.a(r1, r2, r3, r4, r5)     // Catch: java.lang.Throwable -> Lb4
            com.kuaishou.weapon.p0.t r0 = r6.f     // Catch: java.lang.Throwable -> Lb4
            int r1 = r7.a     // Catch: java.lang.Throwable -> Lb4
            r0.a(r1, r12)     // Catch: java.lang.Throwable -> Lb4
            java.util.HashMap r0 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lb4
            r0.<init>()     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = com.kuaishou.weapon.p0.cj.u     // Catch: java.lang.Throwable -> Lb4
            r0.put(r11, r1)     // Catch: java.lang.Throwable -> Lb4
            r0.put(r10, r9)     // Catch: java.lang.Throwable -> Lb4
            java.lang.String r1 = "apk"
            java.lang.String r2 = r15.toString()     // Catch: java.lang.Throwable -> Lb4
            r0.put(r1, r2)     // Catch: java.lang.Throwable -> Lb4
            android.content.Context r1 = r6.e     // Catch: java.lang.Throwable -> Lb4
            com.kuaishou.weapon.p0.bg.a(r1, r8, r0)     // Catch: java.lang.Throwable -> Lb4
            return r12
        L92:
            java.lang.String r0 = r7.e     // Catch: java.lang.Throwable -> Lb4
            com.kuaishou.weapon.p0.s r0 = r1.c(r0)     // Catch: java.lang.Throwable -> Lb4
            if (r0 != 0) goto Lb5
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lb5
            int r2 = r0.a     // Catch: java.lang.Throwable -> Lb5
            r1.a(r2, r12)     // Catch: java.lang.Throwable -> Lb5
            java.util.HashMap r1 = new java.util.HashMap     // Catch: java.lang.Throwable -> Lb5
            r1.<init>()     // Catch: java.lang.Throwable -> Lb5
            java.lang.String r2 = com.kuaishou.weapon.p0.cj.s     // Catch: java.lang.Throwable -> Lb5
            r1.put(r11, r2)     // Catch: java.lang.Throwable -> Lb5
            r1.put(r10, r9)     // Catch: java.lang.Throwable -> Lb5
            android.content.Context r2 = r6.e     // Catch: java.lang.Throwable -> Lb5
            com.kuaishou.weapon.p0.bg.a(r2, r8, r1)     // Catch: java.lang.Throwable -> Lb5
            return r12
        Lb4:
            r0 = r7
        Lb5:
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lf4
            int r2 = r0.a     // Catch: java.lang.Throwable -> Lf4
            com.kuaishou.weapon.p0.s r1 = r1.a(r2)     // Catch: java.lang.Throwable -> Lf4
            r2 = 0
            if (r1 == 0) goto Ld1
            java.lang.String r3 = r1.d     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r4 = r0.d     // Catch: java.lang.Throwable -> Lf4
            boolean r3 = r3.equals(r4)     // Catch: java.lang.Throwable -> Lf4
            if (r3 != 0) goto Ld1
            java.io.File r2 = new java.io.File     // Catch: java.lang.Throwable -> Lf4
            java.lang.String r1 = r1.e     // Catch: java.lang.Throwable -> Lf4
            r2.<init>(r1)     // Catch: java.lang.Throwable -> Lf4
        Ld1:
            r0.b = r13     // Catch: java.lang.Throwable -> Lf4
            r0.p = r13     // Catch: java.lang.Throwable -> Lf4
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lf4
            long r3 = r1.a(r0)     // Catch: java.lang.Throwable -> Lf4
            r7 = 0
            int r1 = (r3 > r7 ? 1 : (r3 == r7 ? 0 : -1))
            if (r1 <= 0) goto Lec
            if (r2 == 0) goto Lec
            boolean r1 = r2.exists()     // Catch: java.lang.Throwable -> Lf4
            if (r1 == 0) goto Lec
            r2.delete()     // Catch: java.lang.Throwable -> Lf4
        Lec:
            com.kuaishou.weapon.p0.t r1 = r6.f     // Catch: java.lang.Throwable -> Lf4
            int r0 = r0.a     // Catch: java.lang.Throwable -> Lf4
            r1.a(r0, r12)     // Catch: java.lang.Throwable -> Lf4
            return r13
        Lf4:
            return r12
    }

    public synchronized void b() {
            r5 = this;
            monitor-enter(r5)
            boolean r0 = r5.c     // Catch: java.lang.Throwable -> L90
            if (r0 == 0) goto L7
            monitor-exit(r5)
            return
        L7:
            r0 = 1
            r5.c = r0     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.t r1 = r5.f     // Catch: java.lang.Throwable -> L90
            java.util.List r1 = r1.a()     // Catch: java.lang.Throwable -> L90
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L90
        L14:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L90
            if (r2 == 0) goto L61
            java.lang.Object r2 = r1.next()     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.s r2 = (com.kuaishou.weapon.p0.s) r2     // Catch: java.lang.Throwable -> L90
            r3 = 0
            android.content.Context r4 = r5.e     // Catch: java.lang.Throwable -> L2b
            java.io.File r4 = r4.getFilesDir()     // Catch: java.lang.Throwable -> L2b
            java.lang.String r3 = r4.getCanonicalPath()     // Catch: java.lang.Throwable -> L2b
        L2b:
            if (r3 == 0) goto L14
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r4.<init>()     // Catch: java.lang.Throwable -> L90
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = "/."
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            int r3 = r2.a     // Catch: java.lang.Throwable -> L90
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L90
            r2.m = r3     // Catch: java.lang.Throwable -> L90
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r3.<init>()     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = r2.m     // Catch: java.lang.Throwable -> L90
            r3.append(r4)     // Catch: java.lang.Throwable -> L90
            java.lang.String r4 = "/lib"
            r3.append(r4)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.dn.c(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = r2.m     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.dn.b(r2)     // Catch: java.lang.Throwable -> L90
            goto L14
        L61:
            com.kuaishou.weapon.p0.t r1 = r5.f     // Catch: java.lang.Throwable -> L90
            r1.b()     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.dp r1 = r5.d     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = "wiipaot"
            boolean r1 = r1.b(r2)     // Catch: java.lang.Throwable -> L90
            if (r1 != 0) goto L7a
            com.kuaishou.weapon.p0.dp r1 = r5.d     // Catch: java.lang.Throwable -> L90
            java.lang.String r2 = "wiipaot"
            java.lang.Boolean r3 = java.lang.Boolean.TRUE     // Catch: java.lang.Throwable -> L90
            r1.a(r2, r3, r0)     // Catch: java.lang.Throwable -> L90
            goto L7f
        L7a:
            com.kuaishou.weapon.p0.t r1 = r5.f     // Catch: java.lang.Throwable -> L90
            r1.c()     // Catch: java.lang.Throwable -> L90
        L7f:
            com.kuaishou.weapon.p0.n r1 = com.kuaishou.weapon.p0.n.a()     // Catch: java.lang.Throwable -> L90
            com.kuaishou.weapon.p0.u r2 = new com.kuaishou.weapon.p0.u     // Catch: java.lang.Throwable -> L90
            android.content.Context r3 = r5.e     // Catch: java.lang.Throwable -> L90
            r4 = 0
            r2.<init>(r3, r0, r4)     // Catch: java.lang.Throwable -> L90
            r1.a(r2)     // Catch: java.lang.Throwable -> L90
            monitor-exit(r5)
            return
        L90:
            monitor-exit(r5)
            return
    }

    public void b(java.lang.String r2) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Throwable -> L11
            if (r0 == 0) goto L7
            return
        L7:
            com.kuaishou.weapon.p0.r r0 = com.kuaishou.weapon.p0.r.a()     // Catch: java.lang.Throwable -> L11
            if (r0 != 0) goto Le
            return
        Le:
            r0.b(r2)     // Catch: java.lang.Throwable -> L11
        L11:
            return
    }

    public void c() {
            r5 = this;
            com.kuaishou.weapon.p0.t r0 = r5.f
            java.util.List r0 = r0.a()
            java.util.Iterator r0 = r0.iterator()
        La:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L2f
            java.lang.Object r1 = r0.next()
            com.kuaishou.weapon.p0.s r1 = (com.kuaishou.weapon.p0.s) r1
            com.kuaishou.weapon.p0.r r2 = com.kuaishou.weapon.p0.r.a()
            r3 = 0
            if (r2 == 0) goto L24
            java.lang.String r4 = r1.c
            com.kuaishou.weapon.p0.s r2 = r2.d(r4)
            goto L25
        L24:
            r2 = r3
        L25:
            if (r2 != 0) goto La
            int r2 = r1.a
            java.lang.String r1 = r1.d
            r5.a(r2, r1, r3)
            goto La
        L2f:
            return
    }
}
