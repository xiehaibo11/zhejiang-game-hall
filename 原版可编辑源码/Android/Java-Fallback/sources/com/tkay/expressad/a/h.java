package com.tkay.expressad.a;

public final class h extends com.tkay.expressad.a.d implements com.tkay.expressad.foundation.g.g.a.b {
    public static final int a = 1;
    public static final int i = 2;
    private static final java.lang.String j = "302";
    private boolean k;
    private long l;
    private com.tkay.expressad.a.e m;
    private com.tkay.expressad.a.c.b n;
    private boolean o;
    private boolean p;
    private android.content.Context q;
    private com.tkay.expressad.foundation.g.g.c r;
    private com.tkay.expressad.a.f.a s;
    private android.os.Handler t;
    private boolean u;


    private class a extends com.tkay.expressad.foundation.g.g.a {
        private static final int h = 10;
        final com.tkay.expressad.a.h a;
        private final java.util.concurrent.Semaphore e;
        private final android.content.Context f;
        private java.lang.String g;
        private java.lang.String i;
        private java.lang.String j;
        private java.lang.String k;
        private com.tkay.expressad.c.b l;
        private com.tkay.expressad.foundation.d.c m;
        private boolean n;
        private boolean o;
        private int p;
        private com.tkay.expressad.a.g.a q;


        public a(com.tkay.expressad.a.h r2, android.content.Context r3, java.lang.String r4, java.lang.String r5, java.lang.String r6, java.lang.String r7, com.tkay.expressad.c.b r8, com.tkay.expressad.foundation.d.c r9, boolean r10, boolean r11, int r12) {
                r1 = this;
                r1.a = r2
                r1.<init>()
                java.util.concurrent.Semaphore r2 = new java.util.concurrent.Semaphore
                r0 = 0
                r2.<init>(r0)
                r1.e = r2
                com.tkay.expressad.a.h$a$1 r2 = new com.tkay.expressad.a.h$a$1
                r2.<init>(r1)
                r1.q = r2
                r1.f = r3
                r1.g = r4
                r1.i = r5
                r1.j = r6
                r1.k = r7
                r1.l = r8
                r1.m = r9
                r1.n = r10
                r1.o = r11
                r1.p = r12
                return
        }

        private com.tkay.expressad.a.c.b a(java.lang.String r16, boolean r17, boolean r18, com.tkay.expressad.foundation.d.c r19, int r20) {
                r15 = this;
                r0 = r15
                r1 = r16
                java.lang.String r2 = ""
                com.tkay.expressad.a.h r3 = r0.a
                boolean r3 = com.tkay.expressad.a.h.a(r3)
                if (r3 == 0) goto L28
                android.content.Context r3 = r0.f
                java.lang.String r3 = com.tkay.expressad.d.a.a(r3, r1)
                boolean r4 = android.text.TextUtils.isEmpty(r3)
                if (r4 != 0) goto L28
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                r4.append(r1)
                r4.append(r3)
                java.lang.String r1 = r4.toString()
            L28:
                com.tkay.expressad.foundation.d.c r3 = r0.m
                if (r3 == 0) goto L30
                java.lang.String r1 = r3.u(r1)
            L30:
                com.tkay.expressad.a.c$b r3 = new com.tkay.expressad.a.c$b
                r3.<init>()
                com.tkay.expressad.a.f r4 = new com.tkay.expressad.a.f
                r4.<init>()
                boolean r5 = b(r1)     // Catch: java.lang.Exception -> L4f
                if (r5 != 0) goto L4d
                java.net.URI r5 = java.net.URI.create(r1)     // Catch: java.lang.Exception -> L4f
                java.lang.String r6 = r5.getScheme()     // Catch: java.lang.Exception -> L4f
                java.lang.String r2 = r5.getHost()     // Catch: java.lang.Exception -> L50
                goto L50
            L4d:
                r5 = r2
                goto L52
            L4f:
                r6 = r2
            L50:
                r5 = r2
                r2 = r6
            L52:
                r6 = 0
                r8 = r1
                r1 = r6
            L55:
                r7 = 10
                if (r1 >= r7) goto L21e
                com.tkay.expressad.a.h r7 = r0.a
                boolean r7 = com.tkay.expressad.a.h.b(r7)
                r9 = 0
                if (r7 != 0) goto L63
                return r9
            L63:
                java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r7 = r0.a
                r12 = r17
                r13 = r18
                r10 = r19
                com.tkay.expressad.a.f$a r11 = r4.a(r8, r12, r13, r10)
                com.tkay.expressad.a.h.a(r7, r11)
                java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.f$a r7 = com.tkay.expressad.a.h.c(r7)
                if (r7 != 0) goto L8e
                r3.e(r8)
                r3.a(r6)
                com.tkay.expressad.c.b r1 = r0.l
                if (r1 == 0) goto L21e
                int r1 = com.tkay.expressad.c.a.a
                goto L21e
            L8e:
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.f$a r7 = com.tkay.expressad.a.h.c(r7)
                java.lang.String r7 = r7.h
                boolean r7 = android.text.TextUtils.isEmpty(r7)
                r11 = 1
                if (r7 != 0) goto Lf0
                r3.e(r8)
                com.tkay.expressad.a.h r2 = r0.a
                com.tkay.expressad.a.f$a r2 = com.tkay.expressad.a.h.c(r2)
                java.lang.String r2 = r2.h
                r3.b(r2)
                r3.b(r11)
                com.tkay.expressad.a.h r2 = r0.a
                com.tkay.expressad.a.f$a r2 = com.tkay.expressad.a.h.c(r2)
                java.lang.String r2 = r2.a()
                r3.a(r2)
                r3.a(r6)
                if (r1 != 0) goto Ld9
                com.tkay.expressad.a.a.a r7 = com.tkay.expressad.a.a.a.a()
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r9 = r1.h
                java.lang.String r11 = r0.k
                r10 = r19
                r12 = r17
                r13 = r18
                r14 = r20
                r7.a(r8, r9, r10, r11, r12, r13, r14)
            Ld9:
                com.tkay.expressad.c.b r1 = r0.l
                if (r1 == 0) goto L21e
                int r1 = com.tkay.expressad.c.a.a
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.h.c(r1)
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.h.c(r1)
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.h.c(r1)
                goto L21e
            Lf0:
                r3.a(r11)
                com.tkay.expressad.c.b r7 = r0.l
                if (r7 == 0) goto L108
                int r7 = com.tkay.expressad.c.a.a
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.h.c(r7)
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.h.c(r7)
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.h.c(r7)
            L108:
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.f$a r7 = com.tkay.expressad.a.h.c(r7)
                int r7 = r7.f
                r14 = 301(0x12d, float:4.22E-43)
                if (r7 == r14) goto L11f
                r14 = 302(0x12e, float:4.23E-43)
                if (r7 == r14) goto L11f
                r14 = 307(0x133, float:4.3E-43)
                if (r7 != r14) goto L11d
                goto L11f
            L11d:
                r7 = r6
                goto L120
            L11f:
                r7 = r11
            L120:
                if (r7 == 0) goto L1cf
                r3.b()
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.f$a r7 = com.tkay.expressad.a.h.c(r7)
                java.lang.String r7 = r7.a
                boolean r7 = android.text.TextUtils.isEmpty(r7)
                if (r7 == 0) goto L13b
                r3.b(r11)
                r3.e(r8)
                goto L21e
            L13b:
                com.tkay.expressad.a.h r7 = r0.a
                com.tkay.expressad.a.f$a r7 = com.tkay.expressad.a.h.c(r7)
                java.lang.String r7 = r7.a
                boolean r8 = b(r7)
                if (r8 == 0) goto L17f
                java.lang.String r8 = "/"
                boolean r8 = r7.startsWith(r8)
                if (r8 == 0) goto L177
                boolean r8 = android.text.TextUtils.isEmpty(r2)
                if (r8 != 0) goto L177
                boolean r8 = android.text.TextUtils.isEmpty(r5)
                if (r8 != 0) goto L177
                java.lang.StringBuilder r8 = new java.lang.StringBuilder
                r8.<init>()
                r8.append(r2)
                java.lang.String r2 = "://"
                r8.append(r2)
                r8.append(r5)
                r8.append(r7)
                java.lang.String r7 = r8.toString()
                r2 = r9
                r5 = r2
                goto L191
            L177:
                r3.b(r11)
                r3.e(r7)
                goto L21e
            L17f:
                boolean r8 = b(r7)
                if (r8 != 0) goto L191
                java.net.URI r8 = java.net.URI.create(r7)     // Catch: java.lang.Exception -> L191
                java.lang.String r2 = r8.getScheme()     // Catch: java.lang.Exception -> L191
                java.lang.String r5 = r8.getHost()     // Catch: java.lang.Exception -> L191
            L191:
                boolean r8 = com.tkay.expressad.foundation.h.s.a.a(r7)
                if (r8 == 0) goto L19f
                r3.b(r11)
                r3.e(r7)
                goto L21e
            L19f:
                com.tkay.expressad.a.h r8 = r0.a
                boolean r8 = com.tkay.expressad.a.h.a(r8)
                if (r8 == 0) goto L1c2
                android.content.Context r8 = r0.f
                java.lang.String r8 = com.tkay.expressad.d.a.a(r8, r7)
                boolean r9 = android.text.TextUtils.isEmpty(r8)
                if (r9 != 0) goto L1c2
                java.lang.StringBuilder r9 = new java.lang.StringBuilder
                r9.<init>()
                r9.append(r7)
                r9.append(r8)
                java.lang.String r7 = r9.toString()
            L1c2:
                com.tkay.expressad.foundation.d.c r8 = r0.m
                if (r8 == 0) goto L1ca
                java.lang.String r7 = r8.u(r7)
            L1ca:
                r8 = r7
                int r1 = r1 + 1
                goto L55
            L1cf:
                com.tkay.expressad.a.h r2 = r0.a
                com.tkay.expressad.a.f$a r2 = com.tkay.expressad.a.h.c(r2)
                int r2 = r2.f
                r4 = 200(0xc8, float:2.8E-43)
                if (r2 != r4) goto L1dd
                r2 = r11
                goto L1de
            L1dd:
                r2 = r6
            L1de:
                if (r2 == 0) goto L1fd
                r3.b(r11)
                r3.e(r8)
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r1 = r1.g
                if (r1 != 0) goto L1f1
                goto L1f9
            L1f1:
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r9 = r1.g
            L1f9:
                r3.c(r9)
                goto L21e
            L1fd:
                r3.b(r6)
                r3.e(r8)
                if (r1 != 0) goto L21e
                com.tkay.expressad.a.a.a r7 = com.tkay.expressad.a.a.a.a()
                com.tkay.expressad.a.h r1 = r0.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r9 = r1.h
                java.lang.String r11 = r0.k
                r10 = r19
                r12 = r17
                r13 = r18
                r14 = r20
                r7.a(r8, r9, r10, r11, r12, r13, r14)
            L21e:
                return r3
        }

        static void a(com.tkay.expressad.a.h.a r0) {
                java.util.concurrent.Semaphore r0 = r0.e
                r0.release()
                return
        }

        static void a(com.tkay.expressad.a.h.a r4, boolean r5, boolean r6) {
                com.tkay.expressad.a.h r0 = r4.a
                long r0 = com.tkay.expressad.a.h.d(r0)
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 != 0) goto L16
                long r0 = java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r2 = r4.a
                com.tkay.expressad.a.h.a(r2, r0)
                goto L1f
            L16:
                long r0 = java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r2 = r4.a
                com.tkay.expressad.a.h.a(r2, r0)
            L1f:
                if (r5 == 0) goto L4b
                if (r6 == 0) goto L37
                com.tkay.expressad.c.b r5 = r4.l
                if (r5 == 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                boolean r5 = com.tkay.expressad.a.h.e(r5)
                if (r5 != 0) goto L51
                com.tkay.expressad.a.h r4 = r4.a
                com.tkay.expressad.a.h.f(r4)
                int r4 = com.tkay.expressad.c.a.b
                return
            L37:
                com.tkay.expressad.c.b r5 = r4.l
                if (r5 == 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                boolean r5 = com.tkay.expressad.a.h.e(r5)
                if (r5 != 0) goto L51
                com.tkay.expressad.a.h r4 = r4.a
                com.tkay.expressad.a.h.f(r4)
                int r4 = com.tkay.expressad.c.a.b
                return
            L4b:
                com.tkay.expressad.c.b r4 = r4.l
                if (r4 == 0) goto L51
                int r4 = com.tkay.expressad.c.a.b
            L51:
                return
        }

        private void a(boolean r5, boolean r6) {
                r4 = this;
                com.tkay.expressad.a.h r0 = r4.a
                long r0 = com.tkay.expressad.a.h.d(r0)
                r2 = 0
                int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
                if (r0 != 0) goto L16
                long r0 = java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r2 = r4.a
                com.tkay.expressad.a.h.a(r2, r0)
                goto L1f
            L16:
                long r0 = java.lang.System.currentTimeMillis()
                com.tkay.expressad.a.h r2 = r4.a
                com.tkay.expressad.a.h.a(r2, r0)
            L1f:
                if (r5 == 0) goto L4b
                if (r6 == 0) goto L37
                com.tkay.expressad.c.b r5 = r4.l
                if (r5 == 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                boolean r5 = com.tkay.expressad.a.h.e(r5)
                if (r5 != 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                com.tkay.expressad.a.h.f(r5)
                int r5 = com.tkay.expressad.c.a.b
                return
            L37:
                com.tkay.expressad.c.b r5 = r4.l
                if (r5 == 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                boolean r5 = com.tkay.expressad.a.h.e(r5)
                if (r5 != 0) goto L51
                com.tkay.expressad.a.h r5 = r4.a
                com.tkay.expressad.a.h.f(r5)
                int r5 = com.tkay.expressad.c.a.b
                return
            L4b:
                com.tkay.expressad.c.b r5 = r4.l
                if (r5 == 0) goto L51
                int r5 = com.tkay.expressad.c.a.b
            L51:
                return
        }

        private static boolean a(int r1) {
                r0 = 200(0xc8, float:2.8E-43)
                if (r1 != r0) goto L6
                r1 = 1
                return r1
            L6:
                r1 = 0
                return r1
        }

        static boolean a(com.tkay.expressad.a.h.a r0, java.lang.String r1) {
                boolean r0 = r0.a(r1)
                return r0
        }

        private boolean a(java.lang.String r4) {
                r3 = this;
                com.tkay.expressad.foundation.d.c r0 = r3.m
                if (r0 == 0) goto L7
                r0.Q()
            L7:
                boolean r0 = com.tkay.expressad.foundation.h.s.a.a(r4)
                r1 = 1
                if (r0 == 0) goto L2a
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.c(r1)
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.e(r4)
                com.tkay.expressad.a.h r4 = r3.a
                com.tkay.expressad.a.c$b r4 = com.tkay.expressad.a.h.g(r4)
                r4.b(r1)
                return r1
            L2a:
                boolean r0 = e(r4)
                if (r0 == 0) goto L4d
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r2 = 3
                r0.c(r2)
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.e(r4)
                com.tkay.expressad.a.h r4 = r3.a
                com.tkay.expressad.a.c$b r4 = com.tkay.expressad.a.h.g(r4)
                r4.b(r1)
                return r1
            L4d:
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r1 = 2
                r0.c(r1)
                com.tkay.expressad.a.h r0 = r3.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.e(r4)
                r4 = 0
                return r4
        }

        private static boolean b(int r1) {
                r0 = 301(0x12d, float:4.22E-43)
                if (r1 == r0) goto Lf
                r0 = 302(0x12e, float:4.23E-43)
                if (r1 == r0) goto Lf
                r0 = 307(0x133, float:4.3E-43)
                if (r1 != r0) goto Ld
                goto Lf
            Ld:
                r1 = 0
                return r1
            Lf:
                r1 = 1
                return r1
        }

        private static boolean b(java.lang.String r0) {
                boolean r0 = android.webkit.URLUtil.isNetworkUrl(r0)
                if (r0 != 0) goto L8
                r0 = 1
                return r0
            L8:
                r0 = 0
                return r0
        }

        private static boolean c(java.lang.String r1) {
                java.lang.String r0 = "/"
                boolean r1 = r1.startsWith(r0)
                return r1
        }

        private void d() {
                r1 = this;
                java.util.concurrent.Semaphore r0 = r1.e
                r0.acquireUninterruptibly()
                return
        }

        private static boolean d(java.lang.String r0) {
                boolean r0 = com.tkay.expressad.foundation.h.s.a.a(r0)
                return r0
        }

        private static boolean e(java.lang.String r1) {
                boolean r0 = android.text.TextUtils.isEmpty(r1)
                if (r0 != 0) goto L14
                java.lang.String r1 = r1.toLowerCase()
                java.lang.String r0 = "apk"
                boolean r1 = r1.contains(r0)
                if (r1 == 0) goto L14
                r1 = 1
                return r1
            L14:
                r1 = 0
                return r1
        }

        private void h() {
                r1 = this;
                java.util.concurrent.Semaphore r0 = r1.e
                r0.release()
                return
        }

        @Override
        public final void a() {
                r22 = this;
                r6 = r22
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.e r0 = com.tkay.expressad.a.h.h(r0)
                if (r0 == 0) goto Lf
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.h.h(r0)
            Lf:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r1 = new com.tkay.expressad.a.c$b
                r1.<init>()
                com.tkay.expressad.a.h.a(r0, r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r1 = r6.g
                r0.e(r1)
                com.tkay.expressad.a.h r7 = r6.a
                java.lang.String r1 = r6.g
                boolean r2 = r6.n
                boolean r3 = r6.o
                com.tkay.expressad.foundation.d.c r4 = r6.m
                int r5 = r6.p
                r0 = r22
                com.tkay.expressad.a.c$b r0 = r0.a(r1, r2, r3, r4, r5)
                com.tkay.expressad.a.h.a(r7, r0)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.e()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                r1 = 1
                if (r0 != 0) goto L53
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.a(r1)
            L53:
                com.tkay.expressad.a.h r0 = r6.a
                boolean r0 = com.tkay.expressad.a.h.b(r0)
                if (r0 != 0) goto L5c
                return
            L5c:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                boolean r0 = r0.g()
                if (r0 != 0) goto L69
                return
            L69:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.f$a r0 = com.tkay.expressad.a.h.c(r0)
                if (r0 == 0) goto L82
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                com.tkay.expressad.a.h r2 = r6.a
                com.tkay.expressad.a.f$a r2 = com.tkay.expressad.a.h.c(r2)
                int r2 = r2.f
                r0.a(r2)
            L82:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.j()
                boolean r0 = e(r0)
                if (r0 != 0) goto L150
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.j()
                boolean r0 = com.tkay.expressad.foundation.h.s.a.a(r0)
                if (r0 != 0) goto L150
                r0 = 200(0xc8, float:2.8E-43)
                com.tkay.expressad.a.h r2 = r6.a
                com.tkay.expressad.a.f$a r2 = com.tkay.expressad.a.h.c(r2)
                int r2 = r2.f
                if (r0 != r2) goto L150
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.f()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L150
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.f()
                java.lang.String r2 = "EXCEPTION_CAMPAIGN_NOT_ACTIVE"
                boolean r0 = r0.contains(r2)
                if (r0 != 0) goto L150
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r1 = 2
                r0.b(r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.f()
                boolean r0 = android.text.TextUtils.isEmpty(r0)
                if (r0 != 0) goto L11e
                java.lang.String r0 = "302"
                java.lang.String r1 = "startWebViewHtmlParser"
                android.util.Log.e(r0, r1)
                com.tkay.expressad.a.g r7 = new com.tkay.expressad.a.g
                com.tkay.expressad.a.h r0 = r6.a
                boolean r0 = com.tkay.expressad.a.h.i(r0)
                r7.<init>(r0)
                java.lang.String r8 = r6.i
                java.lang.String r9 = r6.j
                java.lang.String r10 = r6.k
                android.content.Context r11 = r6.f
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r12 = r0.j()
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r13 = r0.f()
                com.tkay.expressad.a.g$a r14 = r6.q
                r7.a(r8, r9, r10, r11, r12, r13, r14)
                goto L14a
            L11e:
                com.tkay.expressad.a.g r15 = new com.tkay.expressad.a.g     // Catch: java.lang.Exception -> L14a
                com.tkay.expressad.a.h r0 = r6.a     // Catch: java.lang.Exception -> L14a
                boolean r0 = com.tkay.expressad.a.h.i(r0)     // Catch: java.lang.Exception -> L14a
                r15.<init>(r0)     // Catch: java.lang.Exception -> L14a
                java.lang.String r0 = r6.i     // Catch: java.lang.Exception -> L14a
                java.lang.String r1 = r6.j     // Catch: java.lang.Exception -> L14a
                java.lang.String r2 = r6.k     // Catch: java.lang.Exception -> L14a
                android.content.Context r3 = r6.f     // Catch: java.lang.Exception -> L14a
                com.tkay.expressad.a.h r4 = r6.a     // Catch: java.lang.Exception -> L14a
                com.tkay.expressad.a.c$b r4 = com.tkay.expressad.a.h.g(r4)     // Catch: java.lang.Exception -> L14a
                java.lang.String r20 = r4.j()     // Catch: java.lang.Exception -> L14a
                com.tkay.expressad.a.g$a r4 = r6.q     // Catch: java.lang.Exception -> L14a
                r16 = r0
                r17 = r1
                r18 = r2
                r19 = r3
                r21 = r4
                r15.a(r16, r17, r18, r19, r20, r21)     // Catch: java.lang.Exception -> L14a
            L14a:
                java.util.concurrent.Semaphore r0 = r6.e
                r0.acquireUninterruptibly()
                return
            L150:
                com.tkay.expressad.c.b r0 = r6.l
                if (r0 == 0) goto L15f
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.j()
                int r0 = com.tkay.expressad.c.a.a
            L15f:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.f$a r0 = com.tkay.expressad.a.h.c(r0)
                if (r0 == 0) goto L1b6
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                r0.b(r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                com.tkay.expressad.a.h r1 = r6.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r1 = r1.h
                r0.b(r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                com.tkay.expressad.a.h r1 = r6.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                int r1 = r1.f
                r0.a(r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                com.tkay.expressad.a.h r1 = r6.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r1 = r1.a()
                r0.a(r1)
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                com.tkay.expressad.a.h r1 = r6.a
                com.tkay.expressad.a.f$a r1 = com.tkay.expressad.a.h.c(r1)
                java.lang.String r1 = r1.g
                r0.c(r1)
            L1b6:
                com.tkay.expressad.a.h r0 = r6.a
                com.tkay.expressad.a.c$b r0 = com.tkay.expressad.a.h.g(r0)
                java.lang.String r0 = r0.j()
                r6.a(r0)
                return
        }

        @Override
        public final void b() {
                r0 = this;
                return
        }

        @Override
        public final void c() {
                r0 = this;
                return
        }
    }

    public h(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.k = r0
            r0 = 0
            r3.l = r0
            r0 = 1
            r3.o = r0
            android.os.Handler r1 = new android.os.Handler
            android.os.Looper r2 = android.os.Looper.getMainLooper()
            r1.<init>(r2)
            r3.t = r1
            r3.q = r4
            r3.u = r0
            com.tkay.expressad.foundation.g.g.c r0 = new com.tkay.expressad.foundation.g.g.c
            r1 = 2
            r0.<init>(r4, r1)
            r3.r = r0
            return
    }

    static long a(com.tkay.expressad.a.h r0, long r1) {
            r0.l = r1
            return r1
    }

    static com.tkay.expressad.a.c.b a(com.tkay.expressad.a.h r0, com.tkay.expressad.a.c.b r1) {
            r0.n = r1
            return r1
    }

    static com.tkay.expressad.a.f.a a(com.tkay.expressad.a.h r0, com.tkay.expressad.a.f.a r1) {
            r0.s = r1
            return r1
    }

    private boolean a() {
            r1 = this;
            boolean r0 = r1.o
            return r0
    }

    static boolean a(com.tkay.expressad.a.h r0) {
            boolean r0 = r0.p
            return r0
    }

    static boolean b(com.tkay.expressad.a.h r0) {
            boolean r0 = r0.o
            return r0
    }

    static com.tkay.expressad.a.f.a c(com.tkay.expressad.a.h r0) {
            com.tkay.expressad.a.f$a r0 = r0.s
            return r0
    }

    static long d(com.tkay.expressad.a.h r2) {
            long r0 = r2.l
            return r0
    }

    static boolean e(com.tkay.expressad.a.h r0) {
            boolean r0 = r0.k
            return r0
    }

    static boolean f(com.tkay.expressad.a.h r1) {
            r0 = 1
            r1.k = r0
            return r0
    }

    static com.tkay.expressad.a.c.b g(com.tkay.expressad.a.h r0) {
            com.tkay.expressad.a.c$b r0 = r0.n
            return r0
    }

    static com.tkay.expressad.a.e h(com.tkay.expressad.a.h r0) {
            com.tkay.expressad.a.e r0 = r0.m
            return r0
    }

    static boolean i(com.tkay.expressad.a.h r0) {
            boolean r0 = r0.u
            return r0
    }

    @Override
    public final void a(com.tkay.expressad.foundation.g.g.a.a r2) {
            r1 = this;
            com.tkay.expressad.foundation.g.g.a$a r0 = com.tkay.expressad.foundation.g.g.a.a.e
            if (r2 != r0) goto L13
            boolean r2 = r1.o
            if (r2 != 0) goto L9
            return
        L9:
            android.os.Handler r2 = r1.t
            com.tkay.expressad.a.h$1 r0 = new com.tkay.expressad.a.h$1
            r0.<init>(r1)
            r2.post(r0)
        L13:
            return
    }

    public final void a(java.lang.String r16, com.tkay.expressad.a.e r17, boolean r18, java.lang.String r19, java.lang.String r20, java.lang.String r21, com.tkay.expressad.c.b r22, com.tkay.expressad.foundation.d.c r23, boolean r24, boolean r25, int r26) {
            r15 = this;
            r12 = r15
            r0 = r17
            r12.m = r0
            r0 = r18
            r12.p = r0
            com.tkay.expressad.foundation.g.g.c r13 = r12.r
            com.tkay.expressad.a.h$a r14 = new com.tkay.expressad.a.h$a
            android.content.Context r2 = r12.q
            r0 = r14
            r1 = r15
            r3 = r16
            r4 = r19
            r5 = r20
            r6 = r21
            r7 = r22
            r8 = r23
            r9 = r24
            r10 = r25
            r11 = r26
            r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11)
            r13.a(r14, r15)
            return
    }

    @Override
    public final void b() {
            r1 = this;
            r0 = 0
            r1.o = r0
            return
    }
}
