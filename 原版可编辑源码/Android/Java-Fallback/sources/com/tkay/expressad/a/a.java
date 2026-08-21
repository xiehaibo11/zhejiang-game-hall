package com.tkay.expressad.a;

public final class a {
    public static final java.lang.String a = "Tkay SDK M";
    public static boolean b = false;
    public static java.util.Map<java.lang.String, java.lang.Long> c = null;
    public static java.util.Set<java.lang.String> d = null;
    public static final java.lang.String e = "2";
    private static final int f = 1;
    private java.lang.String g;
    private long h;
    private com.tkay.expressad.foundation.c.c i;
    private android.content.Context j;
    private com.tkay.expressad.a.c k;
    private com.tkay.expressad.out.a l;
    private com.tkay.expressad.out.j.c m;
    private com.tkay.expressad.d.a n;
    private boolean o;
    private boolean p;
    private boolean q;
    private boolean r;


    static {
            java.util.HashMap r0 = new java.util.HashMap
            r0.<init>()
            com.tkay.expressad.a.a.c = r0
            java.util.HashSet r0 = new java.util.HashSet
            r0.<init>()
            com.tkay.expressad.a.a.d = r0
            return
    }

    public a(android.content.Context r2, java.lang.String r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.i = r0
            r1.j = r0
            r1.m = r0
            r0 = 0
            r1.p = r0
            r0 = 1
            r1.q = r0
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.b()
            r1.n = r0
            if (r0 != 0) goto L24
            com.tkay.expressad.d.b.a()
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.c()
            r1.n = r0
        L24:
            com.tkay.expressad.d.a r0 = r1.n
            boolean r0 = r0.t()
            r1.o = r0
            android.content.Context r2 = r2.getApplicationContext()
            r1.j = r2
            r1.g = r3
            com.tkay.expressad.foundation.c.c r3 = r1.i
            if (r3 != 0) goto L3e
            com.tkay.expressad.foundation.c.c r2 = com.tkay.expressad.foundation.c.c.a(r2)
            r1.i = r2
        L3e:
            return
    }

    private void a(int r2, java.lang.String r3, com.tkay.expressad.foundation.d.c r4, com.tkay.expressad.out.j.c r5) {
            r1 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Throwable -> L15
            if (r0 != 0) goto L14
            r0 = 2
            if (r2 != r0) goto Lf
            android.content.Context r2 = r1.j     // Catch: java.lang.Throwable -> L15
            com.tkay.expressad.foundation.h.s.a(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L15
            return
        Lf:
            android.content.Context r2 = r1.j     // Catch: java.lang.Throwable -> L15
            com.tkay.expressad.foundation.h.s.a(r2, r3, r5)     // Catch: java.lang.Throwable -> L15
        L14:
            return
        L15:
            r2 = move-exception
            r2.getMessage()
            return
    }

    public static void a(android.content.Context r9, com.tkay.expressad.foundation.d.c r10, java.lang.String r11, java.lang.String r12, boolean r13) {
            if (r9 != 0) goto L3
            return
        L3:
            com.tkay.expressad.a.c r0 = new com.tkay.expressad.a.c
            android.content.Context r9 = r9.getApplicationContext()
            r0.<init>(r9)
            r4 = 0
            r6 = 0
            int r8 = com.tkay.expressad.a.a.a.h
            java.lang.String r1 = "2"
            r2 = r11
            r3 = r10
            r5 = r12
            r7 = r13
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r9, com.tkay.expressad.foundation.d.c r10, java.lang.String r11, java.lang.String r12, boolean r13, boolean r14, int r15) {
            if (r9 != 0) goto L3
            return
        L3:
            com.tkay.expressad.a.c r0 = new com.tkay.expressad.a.c
            android.content.Context r9 = r9.getApplicationContext()
            r0.<init>(r9)
            r4 = 0
            java.lang.String r1 = "2"
            r2 = r11
            r3 = r10
            r5 = r12
            r6 = r13
            r7 = r14
            r8 = r15
            r0.a(r1, r2, r3, r4, r5, r6, r7, r8)
            return
    }

    public static void a(android.content.Context r10, com.tkay.expressad.foundation.d.c r11, java.lang.String r12, java.lang.String[] r13, boolean r14) {
            if (r10 == 0) goto L2c
            if (r11 == 0) goto L2c
            boolean r0 = android.text.TextUtils.isEmpty(r12)
            if (r0 != 0) goto L2c
            if (r13 != 0) goto Ld
            goto L2c
        Ld:
            com.tkay.expressad.a.c r0 = new com.tkay.expressad.a.c
            android.content.Context r10 = r10.getApplicationContext()
            r0.<init>(r10)
            r10 = 0
        L17:
            int r1 = r13.length
            if (r10 >= r1) goto L2c
            r5 = 0
            r6 = r13[r10]
            r7 = 0
            int r9 = com.tkay.expressad.a.a.a.h
            java.lang.String r2 = "2"
            r1 = r0
            r3 = r12
            r4 = r11
            r8 = r14
            r1.a(r2, r3, r4, r5, r6, r7, r8, r9)
            int r10 = r10 + 1
            goto L17
        L2c:
            return
    }

    static void a(com.tkay.expressad.a.a r2) {
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L13
            r0.<init>()     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "ExitApp"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L13
            android.content.Context r2 = r2.j     // Catch: java.lang.Exception -> L13
            com.tkay.core.common.b.j r2 = com.tkay.core.common.b.j.a(r2)     // Catch: java.lang.Exception -> L13
            r2.a(r0)     // Catch: java.lang.Exception -> L13
        L13:
            return
    }

    private void a(com.tkay.expressad.a.c.b r8, com.tkay.expressad.foundation.d.c r9, boolean r10) {
            r7 = this;
            if (r9 == 0) goto Lf1
            if (r8 != 0) goto L6
            goto Lf1
        L6:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Led
            long r2 = r7.h     // Catch: java.lang.Throwable -> Led
            long r0 = r0 - r2
            com.tkay.expressad.foundation.d.f r2 = new com.tkay.expressad.foundation.d.f     // Catch: java.lang.Throwable -> Led
            r2.<init>()     // Catch: java.lang.Throwable -> Led
            java.lang.String r3 = r9.aa()     // Catch: java.lang.Throwable -> Led
            r2.i(r3)     // Catch: java.lang.Throwable -> Led
            r2.a()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Led
            r2.h(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r9.aZ()     // Catch: java.lang.Throwable -> Led
            r2.g(r0)     // Catch: java.lang.Throwable -> Led
            int r0 = r8.c()     // Catch: java.lang.Throwable -> Led
            r2.d(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r8.j()     // Catch: java.lang.Throwable -> Led
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r1 = "utf-8"
            if (r0 != 0) goto L48
            java.lang.String r0 = r8.j()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.lang.Throwable -> Led
            r2.f(r0)     // Catch: java.lang.Throwable -> Led
        L48:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Led
            r0.<init>()     // Catch: java.lang.Throwable -> Led
            long r3 = r7.h     // Catch: java.lang.Throwable -> Led
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            r0.append(r3)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Led
            r2.b(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r9.ac()     // Catch: java.lang.Throwable -> Led
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> Led
            r2.a(r0)     // Catch: java.lang.Throwable -> Led
            int r9 = r9.Q()     // Catch: java.lang.Throwable -> Led
            r2.b(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r7.g     // Catch: java.lang.Throwable -> Led
            r2.a(r9)     // Catch: java.lang.Throwable -> Led
            int r9 = r8.c()     // Catch: java.lang.Throwable -> Led
            r2.d(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r8.j()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto L8f
            java.lang.String r9 = r8.j()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r1)     // Catch: java.lang.Throwable -> Led
            r2.f(r9)     // Catch: java.lang.Throwable -> Led
        L8f:
            boolean r9 = r7.o     // Catch: java.lang.Throwable -> Led
            if (r9 == 0) goto Ldb
            int r9 = r8.a()     // Catch: java.lang.Throwable -> Led
            r2.c(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r8.d()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Laf
            java.lang.String r9 = r8.d()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r1)     // Catch: java.lang.Throwable -> Led
            r2.d(r9)     // Catch: java.lang.Throwable -> Led
        Laf:
            java.lang.String r9 = r8.f()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Lc6
            java.lang.String r9 = r8.f()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = "UTF-8"
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r0)     // Catch: java.lang.Throwable -> Led
            r2.e(r9)     // Catch: java.lang.Throwable -> Led
        Lc6:
            java.lang.String r9 = r8.e()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Ldb
            java.lang.String r8 = r8.e()     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r1)     // Catch: java.lang.Throwable -> Led
            r2.c(r8)     // Catch: java.lang.Throwable -> Led
        Ldb:
            if (r10 != 0) goto Lec
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Led
            r8.add(r2)     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = com.tkay.expressad.foundation.d.f.a(r8)     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.foundation.h.w.b(r8)     // Catch: java.lang.Throwable -> Led
        Lec:
            return
        Led:
            r8 = move-exception
            r8.printStackTrace()
        Lf1:
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r7, com.tkay.expressad.a.c.b r8, boolean r9, boolean r10) {
            r6 = this;
            boolean r0 = r6.q     // Catch: java.lang.Exception -> L151
            if (r0 != 0) goto L5
            return
        L5:
            r0 = 1
            if (r7 == 0) goto L141
            if (r8 != 0) goto Lc
            goto L141
        Lc:
            int r1 = r6.i()     // Catch: java.lang.Exception -> L151
            int r2 = r8.i()     // Catch: java.lang.Exception -> L151
            java.lang.String r3 = r8.j()     // Catch: java.lang.Exception -> L151
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L151
            r4 = 2
            r5 = 3
            if (r3 == 0) goto L52
            if (r9 == 0) goto L52
            int r10 = r7.Q()     // Catch: java.lang.Exception -> L151
            if (r10 != r4) goto L30
            int r10 = r6.i()     // Catch: java.lang.Exception -> L151
            r6.a(r7, r8, r9, r10)     // Catch: java.lang.Exception -> L151
            return
        L30:
            if (r10 != r5) goto L36
            r6.a(r7, r8, r9)     // Catch: java.lang.Exception -> L151
            return
        L36:
            android.content.Context r9 = r6.j     // Catch: java.lang.Exception -> L151
            java.lang.String r10 = r7.ad()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.foundation.h.s.a(r9, r10, r1)     // Catch: java.lang.Exception -> L151
            r6.b(r8, r7, r0)     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r9 = r6.m     // Catch: java.lang.Exception -> L151
            if (r9 == 0) goto L51
            com.tkay.expressad.out.j$c r9 = r6.m     // Catch: java.lang.Exception -> L151
            java.lang.String r8 = r8.j()     // Catch: java.lang.Exception -> L151
            r9.a(r7, r8)     // Catch: java.lang.Exception -> L151
        L51:
            return
        L52:
            if (r2 != r0) goto Lc8
            java.lang.String r2 = r7.ba()     // Catch: java.lang.Exception -> L151
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L151
            if (r2 != 0) goto L87
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L151
            if (r2 != 0) goto L87
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            java.lang.String r3 = r7.ba()     // Catch: java.lang.Exception -> L151
            boolean r2 = r2.contains(r3)     // Catch: java.lang.Exception -> L151
            if (r2 == 0) goto L87
            if (r9 == 0) goto L87
            android.content.Context r2 = r6.j     // Catch: java.lang.Exception -> L151
            java.lang.String r3 = r8.j()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r4 = r6.m     // Catch: java.lang.Exception -> L151
            boolean r2 = com.tkay.expressad.foundation.h.s.a.a(r2, r3, r4)     // Catch: java.lang.Exception -> L151
            if (r2 != 0) goto Lb8
            goto Laf
        L87:
            if (r9 == 0) goto Lb8
            java.lang.String r2 = r7.ba()     // Catch: java.lang.Exception -> L151
            boolean r2 = android.text.TextUtils.isEmpty(r2)     // Catch: java.lang.Exception -> L151
            if (r2 != 0) goto Laf
            android.content.Context r2 = r6.j     // Catch: java.lang.Exception -> L151
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L151
            java.lang.String r4 = "market://details?id="
            r3.<init>(r4)     // Catch: java.lang.Exception -> L151
            java.lang.String r4 = r7.ba()     // Catch: java.lang.Exception -> L151
            r3.append(r4)     // Catch: java.lang.Exception -> L151
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r4 = r6.m     // Catch: java.lang.Exception -> L151
            boolean r2 = com.tkay.expressad.foundation.h.s.a.a(r2, r3, r4)     // Catch: java.lang.Exception -> L151
            if (r2 != 0) goto Lb8
        Laf:
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r3 = r6.m     // Catch: java.lang.Exception -> L151
            r6.a(r1, r2, r7, r3)     // Catch: java.lang.Exception -> L151
        Lb8:
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            if (r1 == 0) goto L119
            if (r9 == 0) goto L119
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            r1.a(r7, r2)     // Catch: java.lang.Exception -> L151
            goto L119
        Lc8:
            if (r2 != r5) goto Le7
            if (r9 == 0) goto Ld7
            android.content.Context r1 = r6.j     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r3 = r6.m     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.foundation.h.s.a(r1, r2, r3)     // Catch: java.lang.Exception -> L151
        Ld7:
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            if (r1 == 0) goto L119
            if (r9 == 0) goto L119
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            r1.a(r7, r2)     // Catch: java.lang.Exception -> L151
            goto L119
        Le7:
            if (r9 == 0) goto L119
            int r1 = r7.Q()     // Catch: java.lang.Exception -> L151
            if (r5 != r1) goto Lf3
            r6.a(r7, r8, r9)     // Catch: java.lang.Exception -> L151
            return
        Lf3:
            int r1 = r7.Q()     // Catch: java.lang.Exception -> L151
            if (r4 != r1) goto L101
            int r10 = r6.i()     // Catch: java.lang.Exception -> L151
            r6.a(r7, r8, r9, r10)     // Catch: java.lang.Exception -> L151
            return
        L101:
            android.content.Context r1 = r6.j     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r3 = r6.m     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.foundation.h.s.a(r1, r2, r3)     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            if (r1 == 0) goto L119
            com.tkay.expressad.out.j$c r1 = r6.m     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            r1.a(r7, r2)     // Catch: java.lang.Exception -> L151
        L119:
            int r1 = r7.Q()     // Catch: java.lang.Exception -> L151
            java.lang.String r2 = r8.j()     // Catch: java.lang.Exception -> L151
            boolean r1 = a(r1, r2)     // Catch: java.lang.Exception -> L151
            if (r1 == 0) goto L12c
            r0 = 0
            r6.b(r8, r7, r0)     // Catch: java.lang.Exception -> L151
            goto L12f
        L12c:
            r6.b(r8, r7, r0)     // Catch: java.lang.Exception -> L151
        L12f:
            com.tkay.expressad.out.j$c r0 = r6.m     // Catch: java.lang.Exception -> L151
            if (r0 == 0) goto L140
            if (r9 != 0) goto L140
            if (r10 == 0) goto L140
            com.tkay.expressad.out.j$c r9 = r6.m     // Catch: java.lang.Exception -> L151
            java.lang.String r8 = r8.j()     // Catch: java.lang.Exception -> L151
            r9.a(r7, r8)     // Catch: java.lang.Exception -> L151
        L140:
            return
        L141:
            if (r9 == 0) goto L150
            r6.b(r8, r7, r0)     // Catch: java.lang.Exception -> L151
            com.tkay.expressad.out.j$c r7 = r6.m     // Catch: java.lang.Exception -> L151
            if (r7 == 0) goto L150
            com.tkay.expressad.out.j$c r7 = r6.m     // Catch: java.lang.Exception -> L151
            r8 = 0
            r7.b(r8, r8)     // Catch: java.lang.Exception -> L151
        L150:
            return
        L151:
            r7 = move-exception
            r7.printStackTrace()
            return
    }

    private void a(com.tkay.expressad.foundation.d.c r9, java.lang.String r10) {
            r8 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r10)
            if (r0 != 0) goto L13
            android.content.Context r1 = r8.j
            java.lang.String r3 = r8.g
            r5 = 1
            r6 = 0
            int r7 = com.tkay.expressad.a.a.a.k
            r2 = r9
            r4 = r10
            a(r1, r2, r3, r4, r5, r6, r7)
        L13:
            return
    }

    private void a(com.tkay.expressad.out.a r1) {
            r0 = this;
            r0.l = r1
            return
    }

    private void a(com.tkay.expressad.out.d r3, java.lang.String r4) {
            r2 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L70
            if (r0 != 0) goto L6f
            if (r3 != 0) goto L9
            goto L6f
        L9:
            r0 = 0
            boolean r1 = r3 instanceof com.tkay.expressad.foundation.d.c     // Catch: java.lang.Exception -> L70
            if (r1 == 0) goto L11
            r0 = r3
            com.tkay.expressad.foundation.d.c r0 = (com.tkay.expressad.foundation.d.c) r0     // Catch: java.lang.Exception -> L70
        L11:
            java.lang.String r3 = "market://"
            boolean r3 = r4.startsWith(r3)     // Catch: java.lang.Exception -> L70
            if (r3 != 0) goto L21
            java.lang.String r3 = "https://play.google.com/"
            boolean r3 = r4.startsWith(r3)     // Catch: java.lang.Exception -> L70
            if (r3 == 0) goto L6f
        L21:
            android.content.Context r3 = r2.j     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.out.j$c r1 = r2.m     // Catch: java.lang.Exception -> L70
            boolean r3 = com.tkay.expressad.foundation.h.s.a.a(r3, r4, r1)     // Catch: java.lang.Exception -> L70
            if (r3 != 0) goto L6f
            if (r0 == 0) goto L6f
            java.lang.String r3 = r0.ba()     // Catch: java.lang.Exception -> L70
            boolean r3 = android.text.TextUtils.isEmpty(r3)     // Catch: java.lang.Exception -> L70
            if (r3 != 0) goto L51
            android.content.Context r3 = r2.j     // Catch: java.lang.Exception -> L70
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L70
            java.lang.String r1 = "market://details?id="
            r4.<init>(r1)     // Catch: java.lang.Exception -> L70
            java.lang.String r0 = r0.ba()     // Catch: java.lang.Exception -> L70
            r4.append(r0)     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = r4.toString()     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.out.j$c r0 = r2.m     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.h.s.a.a(r3, r4, r0)     // Catch: java.lang.Exception -> L70
            return
        L51:
            int r3 = r2.i()     // Catch: java.lang.Exception -> L70
            r4 = 2
            if (r3 != r4) goto L64
            android.content.Context r3 = r2.j     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = r0.ad()     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.out.j$c r1 = r2.m     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.h.s.a(r3, r4, r0, r1)     // Catch: java.lang.Exception -> L70
            return
        L64:
            android.content.Context r3 = r2.j     // Catch: java.lang.Exception -> L70
            java.lang.String r4 = r0.ad()     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.out.j$c r0 = r2.m     // Catch: java.lang.Exception -> L70
            com.tkay.expressad.foundation.h.s.a(r3, r4, r0)     // Catch: java.lang.Exception -> L70
        L6f:
            return
        L70:
            r3 = move-exception
            r3.printStackTrace()
            return
    }

    private void a(java.lang.String r1) {
            r0 = this;
            r0.g = r1
            return
    }

    private void a(boolean r3, com.tkay.expressad.out.d r4) {
            r2 = this;
            android.os.Handler r0 = new android.os.Handler
            android.os.Looper r1 = android.os.Looper.getMainLooper()
            r0.<init>(r1)
            com.tkay.expressad.a.a$1 r1 = new com.tkay.expressad.a.a$1
            r1.<init>(r2, r3, r4)
            r0.post(r1)
            return
    }

    private static boolean a(int r3, java.lang.String r4) {
            r0 = 2
            r1 = 1
            r2 = 0
            if (r3 != r0) goto Lc
            boolean r3 = com.tkay.expressad.foundation.h.s.a.a(r4)     // Catch: java.lang.Exception -> L13
            if (r3 == 0) goto L17
            goto L18
        Lc:
            boolean r3 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Exception -> L13
            if (r3 != 0) goto L17
            goto L18
        L13:
            r3 = move-exception
            r3.printStackTrace()
        L17:
            r1 = r2
        L18:
            return r1
    }

    private static boolean a(com.tkay.expressad.foundation.d.c r6) {
            if (r6 == 0) goto L66
            r0 = 2
            int r1 = r6.Q()     // Catch: java.lang.Exception -> L5e
            if (r0 == r1) goto L10
            r0 = 3
            int r1 = r6.Q()     // Catch: java.lang.Exception -> L5e
            if (r0 != r1) goto L66
        L10:
            java.lang.String r0 = r6.aZ()     // Catch: java.lang.Exception -> L5e
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.a.a.c     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L66
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.a.a.c     // Catch: java.lang.Exception -> L5e
            boolean r1 = r1.containsKey(r0)     // Catch: java.lang.Exception -> L5e
            if (r1 == 0) goto L44
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.a.a.c     // Catch: java.lang.Exception -> L5e
            java.lang.Object r0 = r1.get(r0)     // Catch: java.lang.Exception -> L5e
            java.lang.Long r0 = (java.lang.Long) r0     // Catch: java.lang.Exception -> L5e
            if (r0 == 0) goto L44
            long r1 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5e
            long r3 = r0.longValue()     // Catch: java.lang.Exception -> L5e
            int r0 = (r3 > r1 ? 1 : (r3 == r1 ? 0 : -1))
            if (r0 > 0) goto L42
            java.util.Set<java.lang.String> r0 = com.tkay.expressad.a.a.d     // Catch: java.lang.Exception -> L5e
            java.lang.String r1 = r6.aZ()     // Catch: java.lang.Exception -> L5e
            boolean r0 = r0.contains(r1)     // Catch: java.lang.Exception -> L5e
            if (r0 == 0) goto L44
        L42:
            r6 = 0
            return r6
        L44:
            int r0 = r6.Y()     // Catch: java.lang.Exception -> L5e
            int r0 = r0 * 1000
            java.util.Map<java.lang.String, java.lang.Long> r1 = com.tkay.expressad.a.a.c     // Catch: java.lang.Exception -> L5e
            java.lang.String r6 = r6.aZ()     // Catch: java.lang.Exception -> L5e
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Exception -> L5e
            long r4 = (long) r0     // Catch: java.lang.Exception -> L5e
            long r2 = r2 + r4
            java.lang.Long r0 = java.lang.Long.valueOf(r2)     // Catch: java.lang.Exception -> L5e
            r1.put(r6, r0)     // Catch: java.lang.Exception -> L5e
            goto L66
        L5e:
            r6 = move-exception
            boolean r0 = com.tkay.expressad.b.a
            if (r0 == 0) goto L66
            r6.printStackTrace()
        L66:
            r6 = 1
            return r6
    }

    private boolean a(com.tkay.expressad.foundation.d.c r5, com.tkay.expressad.a.c.b r6, boolean r7) {
            r4 = this;
            r0 = 1
            r1 = 0
            if (r7 == 0) goto L10
            android.content.Context r7 = r4.j     // Catch: java.lang.Throwable -> L31
            java.lang.String r2 = r5.ad()     // Catch: java.lang.Throwable -> L31
            com.tkay.expressad.out.j$c r3 = r4.m     // Catch: java.lang.Throwable -> L31
            com.tkay.expressad.foundation.h.s.a(r7, r2, r3)     // Catch: java.lang.Throwable -> L31
            r1 = r0
        L10:
            r4.b(r6, r5, r0)     // Catch: java.lang.Throwable -> L31
            if (r1 == 0) goto L23
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L35
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            java.lang.String r6 = r6.j()     // Catch: java.lang.Throwable -> L31
            r7.a(r5, r6)     // Catch: java.lang.Throwable -> L31
            goto L35
        L23:
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            if (r7 == 0) goto L35
            com.tkay.expressad.out.j$c r7 = r4.m     // Catch: java.lang.Throwable -> L31
            java.lang.String r6 = r6.j()     // Catch: java.lang.Throwable -> L31
            r7.b(r5, r6)     // Catch: java.lang.Throwable -> L31
            goto L35
        L31:
            r5 = move-exception
            r5.getMessage()
        L35:
            return r1
    }

    private boolean a(com.tkay.expressad.foundation.d.c r6, com.tkay.expressad.a.c.b r7, boolean r8, int r9) {
            r5 = this;
            r0 = 0
            r1 = 1
            if (r8 == 0) goto L63
            java.lang.String r2 = r6.ac()     // Catch: java.lang.Throwable -> L61
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Throwable -> L61
            if (r2 != r1) goto L1b
            android.content.Context r9 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.h.s.a(r9, r2, r3)     // Catch: java.lang.Throwable -> L61
        L19:
            r0 = r1
            goto L63
        L1b:
            r3 = 2
            if (r2 != r3) goto L2a
            android.content.Context r9 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.foundation.h.s.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L19
        L2a:
            java.lang.String r2 = r6.ba()     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L57
            android.content.Context r2 = r5.j     // Catch: java.lang.Throwable -> L61
            java.lang.StringBuilder r3 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = "market://details?id="
            r3.<init>(r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r4 = r6.ba()     // Catch: java.lang.Throwable -> L61
            r3.append(r4)     // Catch: java.lang.Throwable -> L61
            java.lang.String r3 = r3.toString()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r4 = r5.m     // Catch: java.lang.Throwable -> L61
            boolean r2 = com.tkay.expressad.foundation.h.s.a.a(r2, r3, r4)     // Catch: java.lang.Throwable -> L61
            if (r2 == 0) goto L4d
            goto L19
        L4d:
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            r5.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L63
        L57:
            java.lang.String r2 = r7.j()     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r3 = r5.m     // Catch: java.lang.Throwable -> L61
            r5.a(r9, r2, r6, r3)     // Catch: java.lang.Throwable -> L61
            goto L63
        L61:
            r6 = move-exception
            goto L89
        L63:
            if (r0 == 0) goto L76
            r5.b(r7, r6, r1)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            if (r8 == 0) goto L8c
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            java.lang.String r7 = r7.j()     // Catch: java.lang.Throwable -> L61
            r8.a(r6, r7)     // Catch: java.lang.Throwable -> L61
            goto L8c
        L76:
            r5.b(r7, r6, r1)     // Catch: java.lang.Throwable -> L61
            com.tkay.expressad.out.j$c r9 = r5.m     // Catch: java.lang.Throwable -> L61
            if (r9 == 0) goto L8c
            if (r8 == 0) goto L8c
            com.tkay.expressad.out.j$c r8 = r5.m     // Catch: java.lang.Throwable -> L61
            java.lang.String r7 = r7.j()     // Catch: java.lang.Throwable -> L61
            r8.b(r6, r7)     // Catch: java.lang.Throwable -> L61
            goto L8c
        L89:
            r6.getMessage()
        L8c:
            return r0
    }

    static com.tkay.expressad.out.j.c b(com.tkay.expressad.a.a r0) {
            com.tkay.expressad.out.j$c r0 = r0.m
            return r0
    }

    private void b(com.tkay.expressad.a.c.b r8, com.tkay.expressad.foundation.d.c r9, boolean r10) {
            r7 = this;
            if (r9 == 0) goto Lf1
            if (r8 != 0) goto L6
            goto Lf1
        L6:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Led
            long r2 = r7.h     // Catch: java.lang.Throwable -> Led
            long r0 = r0 - r2
            com.tkay.expressad.foundation.d.f r2 = new com.tkay.expressad.foundation.d.f     // Catch: java.lang.Throwable -> Led
            r2.<init>()     // Catch: java.lang.Throwable -> Led
            java.lang.String r3 = r9.aa()     // Catch: java.lang.Throwable -> Led
            r2.i(r3)     // Catch: java.lang.Throwable -> Led
            r2.a()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = java.lang.String.valueOf(r0)     // Catch: java.lang.Throwable -> Led
            r2.h(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r9.aZ()     // Catch: java.lang.Throwable -> Led
            r2.g(r0)     // Catch: java.lang.Throwable -> Led
            int r0 = r8.c()     // Catch: java.lang.Throwable -> Led
            r2.d(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r8.j()     // Catch: java.lang.Throwable -> Led
            boolean r0 = android.text.TextUtils.isEmpty(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r1 = "utf-8"
            if (r0 != 0) goto L48
            java.lang.String r0 = r8.j()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = java.net.URLEncoder.encode(r0, r1)     // Catch: java.lang.Throwable -> Led
            r2.f(r0)     // Catch: java.lang.Throwable -> Led
        L48:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> Led
            r0.<init>()     // Catch: java.lang.Throwable -> Led
            long r3 = r7.h     // Catch: java.lang.Throwable -> Led
            r5 = 1000(0x3e8, double:4.94E-321)
            long r3 = r3 / r5
            r0.append(r3)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Throwable -> Led
            r2.b(r0)     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = r9.ac()     // Catch: java.lang.Throwable -> Led
            int r0 = java.lang.Integer.parseInt(r0)     // Catch: java.lang.Throwable -> Led
            r2.a(r0)     // Catch: java.lang.Throwable -> Led
            int r9 = r9.Q()     // Catch: java.lang.Throwable -> Led
            r2.b(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r7.g     // Catch: java.lang.Throwable -> Led
            r2.a(r9)     // Catch: java.lang.Throwable -> Led
            int r9 = r8.c()     // Catch: java.lang.Throwable -> Led
            r2.d(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r8.j()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto L8f
            java.lang.String r9 = r8.j()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r1)     // Catch: java.lang.Throwable -> Led
            r2.f(r9)     // Catch: java.lang.Throwable -> Led
        L8f:
            boolean r9 = r7.o     // Catch: java.lang.Throwable -> Led
            if (r9 == 0) goto Ldb
            int r9 = r8.a()     // Catch: java.lang.Throwable -> Led
            r2.c(r9)     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = r8.d()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Laf
            java.lang.String r9 = r8.d()     // Catch: java.lang.Throwable -> Led
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r1)     // Catch: java.lang.Throwable -> Led
            r2.d(r9)     // Catch: java.lang.Throwable -> Led
        Laf:
            java.lang.String r9 = r8.f()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Lc6
            java.lang.String r9 = r8.f()     // Catch: java.lang.Throwable -> Led
            java.lang.String r0 = "UTF-8"
            java.lang.String r9 = java.net.URLEncoder.encode(r9, r0)     // Catch: java.lang.Throwable -> Led
            r2.e(r9)     // Catch: java.lang.Throwable -> Led
        Lc6:
            java.lang.String r9 = r8.e()     // Catch: java.lang.Throwable -> Led
            boolean r9 = android.text.TextUtils.isEmpty(r9)     // Catch: java.lang.Throwable -> Led
            if (r9 != 0) goto Ldb
            java.lang.String r8 = r8.e()     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = java.net.URLEncoder.encode(r8, r1)     // Catch: java.lang.Throwable -> Led
            r2.c(r8)     // Catch: java.lang.Throwable -> Led
        Ldb:
            if (r10 != 0) goto Lec
            java.util.ArrayList r8 = new java.util.ArrayList     // Catch: java.lang.Throwable -> Led
            r8.<init>()     // Catch: java.lang.Throwable -> Led
            r8.add(r2)     // Catch: java.lang.Throwable -> Led
            java.lang.String r8 = com.tkay.expressad.foundation.d.f.a(r8)     // Catch: java.lang.Throwable -> Led
            com.tkay.expressad.foundation.h.w.b(r8)     // Catch: java.lang.Throwable -> Led
        Lec:
            return
        Led:
            r8 = move-exception
            r8.printStackTrace()
        Lf1:
            return
    }

    private void b(com.tkay.expressad.foundation.d.c r4) {
            r3 = this;
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L1c
            android.content.Context r1 = r3.j     // Catch: java.lang.Exception -> L1c
            java.lang.Class<com.tkay.expressad.out.LoadingActivity> r2 = com.tkay.expressad.out.LoadingActivity.class
            r0.<init>(r1, r2)     // Catch: java.lang.Exception -> L1c
            r1 = 268435456(0x10000000, float:2.524355E-29)
            r0.setFlags(r1)     // Catch: java.lang.Exception -> L1c
            java.lang.String r1 = "icon_url"
            java.lang.String r4 = r4.bd()     // Catch: java.lang.Exception -> L1c
            r0.putExtra(r1, r4)     // Catch: java.lang.Exception -> L1c
            android.content.Context r4 = r3.j     // Catch: java.lang.Exception -> L1c
            r4.startActivity(r0)     // Catch: java.lang.Exception -> L1c
        L1c:
            return
    }

    private boolean c() {
            r1 = this;
            boolean r0 = r1.q
            return r0
    }

    private com.tkay.expressad.out.a d() {
            r1 = this;
            com.tkay.expressad.out.a r0 = r1.l
            return r0
    }

    private com.tkay.expressad.foundation.c.c e() {
            r1 = this;
            com.tkay.expressad.foundation.c.c r0 = r1.i
            return r0
    }

    private static void f() {
            return
    }

    private void g() {
            r1 = this;
            com.tkay.expressad.a.c r0 = r1.k
            if (r0 == 0) goto Lf
            boolean r0 = r0.a()
            if (r0 == 0) goto Lf
            com.tkay.expressad.a.c r0 = r1.k
            r0.b()
        Lf:
            return
    }

    private static void h() {
            return
    }

    private int i() {
            r2 = this;
            r0 = 1
            com.tkay.expressad.d.a r1 = r2.n     // Catch: java.lang.Exception -> Lc
            if (r1 == 0) goto L10
            com.tkay.expressad.d.a r1 = r2.n     // Catch: java.lang.Exception -> Lc
            int r0 = r1.k()     // Catch: java.lang.Exception -> Lc
            goto L10
        Lc:
            r1 = move-exception
            r1.printStackTrace()
        L10:
            return r0
    }

    private void j() {
            r2 = this;
            android.content.Intent r0 = new android.content.Intent     // Catch: java.lang.Exception -> L13
            r0.<init>()     // Catch: java.lang.Exception -> L13
            java.lang.String r1 = "ExitApp"
            r0.setAction(r1)     // Catch: java.lang.Exception -> L13
            android.content.Context r1 = r2.j     // Catch: java.lang.Exception -> L13
            com.tkay.core.common.b.j r1 = com.tkay.core.common.b.j.a(r1)     // Catch: java.lang.Exception -> L13
            r1.a(r0)     // Catch: java.lang.Exception -> L13
        L13:
            return
    }

    public final void a() {
            r1 = this;
            r0 = 0
            r1.q = r0
            return
    }

    public final void a(com.tkay.expressad.out.j.c r1) {
            r0 = this;
            r0.m = r1
            return
    }

    public final void b() {
            r1 = this;
            r0 = 0
            r1.m = r0     // Catch: java.lang.Exception -> L4
            return
        L4:
            r0 = move-exception
            r0.printStackTrace()
            return
    }
}
