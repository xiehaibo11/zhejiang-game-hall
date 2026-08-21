package com.tkay.core.c;

public class b {
    public static final java.lang.String a = null;
    private static volatile com.tkay.core.c.b c;
    private static volatile com.tkay.core.c.a d;
    java.util.List<com.tkay.core.c.b.a> b;
    private android.content.Context e;
    private boolean f;
    private java.lang.Object g;



    final class 3 implements java.lang.Runnable {
        final com.tkay.core.c.b a;

        3(com.tkay.core.c.b r1) {
                r0 = this;
                r0.a = r1
                r0.<init>()
                return
        }

        @Override
        public final void run() {
                r2 = this;
                com.tkay.core.common.n r0 = com.tkay.core.common.n.a()
                com.tkay.core.c.a r1 = com.tkay.core.c.b.c()
                java.lang.String r1 = r1.c()
                r0.a(r1)
                return
        }
    }

    public interface a {
        void a();

        void b();
    }

    static {
            java.lang.Class<com.tkay.core.c.b> r0 = com.tkay.core.c.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.core.c.b.a = r0
            r0 = 0
            com.tkay.core.c.b.c = r0
            com.tkay.core.c.b.d = r0
            return
    }

    private b(android.content.Context r2) {
            r1 = this;
            r1.<init>()
            java.lang.Object r0 = new java.lang.Object
            r0.<init>()
            r1.g = r0
            r1.e = r2
            r2 = 0
            r1.f = r2
            java.util.ArrayList r2 = new java.util.ArrayList
            r0 = 3
            r2.<init>(r0)
            java.util.List r2 = java.util.Collections.synchronizedList(r2)
            r1.b = r2
            return
    }

    public static long a() {
            com.tkay.core.c.a r0 = com.tkay.core.c.b.d
            if (r0 == 0) goto L18
            com.tkay.core.c.a r0 = com.tkay.core.c.b.d
            long r0 = r0.J()
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 != 0) goto L11
            goto L18
        L11:
            com.tkay.core.c.a r0 = com.tkay.core.c.b.d
            long r0 = r0.J()
            return r0
        L18:
            r0 = 51200(0xc800, double:2.5296E-319)
            return r0
    }

    private static com.tkay.core.c.a a(android.content.Context r2, java.lang.String r3) {
            com.tkay.core.common.c.c r2 = com.tkay.core.common.c.c.a(r2)
            com.tkay.core.common.c.d r2 = com.tkay.core.common.c.d.a(r2)
            java.lang.String r0 = "AP_SY"
            java.util.List r2 = r2.a(r3, r0)
            r3 = 0
            if (r2 == 0) goto L35
            int r0 = r2.size()
            if (r0 <= 0) goto L35
            r0 = 0
            java.lang.Object r2 = r2.get(r0)
            com.tkay.core.common.f.af r2 = (com.tkay.core.common.f.af) r2
            if (r2 == 0) goto L35
            java.lang.String r3 = r2.d()
            com.tkay.core.c.a r3 = com.tkay.core.c.a.f(r3)
            if (r3 == 0) goto L35
            java.lang.String r2 = r2.a()
            long r0 = java.lang.Long.parseLong(r2)
            r3.a(r0)
        L35:
            return r3
    }

    private static com.tkay.core.c.a a(android.content.Context r2, java.lang.String r3, java.lang.String r4) {
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r2)
            com.tkay.core.common.c.d r0 = com.tkay.core.common.c.d.a(r0)
            java.lang.String r1 = "AP_SY"
            r0.a(r3, r4, r1)
            com.tkay.core.c.a r3 = com.tkay.core.c.a.f(r4)
            long r0 = java.lang.System.currentTimeMillis()
            r3.a(r0)
            int r4 = r3.U()
            java.lang.String r0 = "tkay_sdk"
            java.lang.String r1 = "EU_INFO"
            com.tkay.core.common.l.p.a(r2, r0, r1, r4)
            return r3
    }

    public static com.tkay.core.c.b a(android.content.Context r2) {
            com.tkay.core.c.b r0 = com.tkay.core.c.b.c
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.core.c.b> r0 = com.tkay.core.c.b.class
            monitor-enter(r0)
            com.tkay.core.c.b r1 = com.tkay.core.c.b.c     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.core.c.b r1 = new com.tkay.core.c.b     // Catch: java.lang.Throwable -> L14
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L14
            com.tkay.core.c.b.c = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
        L17:
            com.tkay.core.c.b r2 = com.tkay.core.c.b.c
            return r2
    }

    private static void a(android.content.Context r2, com.tkay.core.c.a r3) {
            if (r3 != 0) goto L3
            return
        L3:
            java.lang.String r3 = r3.n()
            boolean r0 = android.text.TextUtils.isEmpty(r3)
            if (r0 != 0) goto L1b
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r0 = new com.tkay.core.common.res.e
            r1 = 3
            r0.<init>(r1, r3)
            r3 = 0
            r2.a(r0, r3)
        L1b:
            return
    }

    private void a(android.content.Context r2, java.lang.Object r3, java.lang.String r4) {
            r1 = this;
            if (r3 == 0) goto L70
            java.lang.String r3 = r3.toString()
            com.tkay.core.c.a r3 = a(r2, r4, r3)
            com.tkay.core.c.b.d = r3
            if (r3 == 0) goto L6d
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            java.lang.String r3 = r3.s()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L2f
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.lang.String r4 = r4.x()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L2f
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            r4.i(r3)
        L2f:
            com.tkay.core.common.r r3 = com.tkay.core.common.r.a(r2)
            com.tkay.core.c.a r4 = com.tkay.core.c.b.d
            r3.a(r4)
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            if (r3 == 0) goto L54
            java.lang.String r3 = r3.n()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L54
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r4 = new com.tkay.core.common.res.e
            r0 = 3
            r4.<init>(r0, r3)
            r3 = 0
            r2.a(r4, r3)
        L54:
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.c.b$3 r3 = new com.tkay.core.c.b$3
            r3.<init>(r1)
            r2.a(r3)
            com.tkay.core.common.c r2 = com.tkay.core.common.c.a()
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            java.lang.String r3 = r3.b()
            r2.a(r3)
        L6d:
            r1.e()
        L70:
            return
    }

    private void a(com.tkay.core.c.b.a r3) {
            r2 = this;
            java.lang.Object r0 = r2.g
            monitor-enter(r0)
            java.lang.Object r1 = r2.g     // Catch: java.lang.Throwable -> Le
            if (r1 == 0) goto Lc
            java.util.List<com.tkay.core.c.b$a> r1 = r2.b     // Catch: java.lang.Throwable -> Le
            r1.add(r3)     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Le
            return
        Le:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static void a(com.tkay.core.c.b r1, android.content.Context r2, java.lang.Object r3, java.lang.String r4) {
            if (r3 == 0) goto L70
            java.lang.String r3 = r3.toString()
            com.tkay.core.c.a r3 = a(r2, r4, r3)
            com.tkay.core.c.b.d = r3
            if (r3 == 0) goto L6d
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            java.lang.String r3 = r3.s()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L2f
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.lang.String r4 = r4.x()
            boolean r4 = android.text.TextUtils.isEmpty(r4)
            if (r4 == 0) goto L2f
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            r4.i(r3)
        L2f:
            com.tkay.core.common.r r3 = com.tkay.core.common.r.a(r2)
            com.tkay.core.c.a r4 = com.tkay.core.c.b.d
            r3.a(r4)
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            if (r3 == 0) goto L54
            java.lang.String r3 = r3.n()
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L54
            com.tkay.core.common.res.b r2 = com.tkay.core.common.res.b.a(r2)
            com.tkay.core.common.res.e r4 = new com.tkay.core.common.res.e
            r0 = 3
            r4.<init>(r0, r3)
            r3 = 0
            r2.a(r4, r3)
        L54:
            com.tkay.core.common.l.b.a r2 = com.tkay.core.common.l.b.a.a()
            com.tkay.core.c.b$3 r3 = new com.tkay.core.c.b$3
            r3.<init>(r1)
            r2.a(r3)
            com.tkay.core.common.c r2 = com.tkay.core.common.c.a()
            com.tkay.core.c.a r3 = com.tkay.core.c.b.d
            java.lang.String r3 = r3.b()
            r2.a(r3)
        L6d:
            r1.e()
        L70:
            return
    }

    private void a(org.json.JSONObject r3) {
            r2 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L19
            java.lang.String r0 = r0.o()     // Catch: java.lang.Exception -> L19
            com.tkay.core.c.a r0 = r2.b(r0)     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L19
            org.json.JSONObject r0 = r0.am()     // Catch: java.lang.Exception -> L19
            if (r0 == 0) goto L19
            java.lang.String r1 = "a_c"
            r3.put(r1, r0)     // Catch: java.lang.Exception -> L19
        L19:
            return
    }

    static boolean a(com.tkay.core.c.b r1) {
            r0 = 0
            r1.f = r0
            return r0
    }

    static android.content.Context b(com.tkay.core.c.b r0) {
            android.content.Context r0 = r0.e
            return r0
    }

    private void b(android.content.Context r1) {
            r0 = this;
            r0.e = r1
            return
    }

    private void b(com.tkay.core.c.b.a r3) {
            r2 = this;
            java.lang.Object r0 = r2.g
            monitor-enter(r0)
            if (r3 == 0) goto La
            java.util.List<com.tkay.core.c.b$a> r1 = r2.b     // Catch: java.lang.Throwable -> Lc
            r1.remove(r3)     // Catch: java.lang.Throwable -> Lc
        La:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> Lc
            return
        Lc:
            r3 = move-exception
            monitor-exit(r0)
            throw r3
    }

    static com.tkay.core.c.a c() {
            com.tkay.core.c.a r0 = com.tkay.core.c.b.d
            return r0
    }

    static void c(com.tkay.core.c.b r0) {
            r0.e()
            return
    }

    private android.content.Context d() {
            r1 = this;
            android.content.Context r0 = r1.e
            return r0
    }

    private void e() {
            r3 = this;
            java.lang.Object r0 = r3.g
            monitor-enter(r0)
            java.util.List<com.tkay.core.c.b$a> r1 = r3.b     // Catch: java.lang.Throwable -> L1a
            java.util.Iterator r1 = r1.iterator()     // Catch: java.lang.Throwable -> L1a
        L9:
            boolean r2 = r1.hasNext()     // Catch: java.lang.Throwable -> L1a
            if (r2 == 0) goto L13
            r1.next()     // Catch: java.lang.Throwable -> L1a
            goto L9
        L13:
            java.util.List<com.tkay.core.c.b$a> r1 = r3.b     // Catch: java.lang.Throwable -> L1a
            r1.clear()     // Catch: java.lang.Throwable -> L1a
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L1a
            return
        L1a:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
    }

    private static com.tkay.core.c.a f() {
            com.tkay.core.c.a r0 = new com.tkay.core.c.a
            r0.<init>()
            r1 = 1
            r0.b = r1
            r0.Q()
            java.lang.String r1 = "0"
            r0.b(r1)
            r1 = 0
            r0.a(r1)
            r0.W()
            r0.Z()
            r0.ab()
            java.lang.String r1 = ""
            r0.c(r1)
            r0.ae()
            r0.ag()
            r0.d(r1)
            r0.O()
            r0.K()
            r0.C()
            r0.E()
            java.lang.String r1 = "[\"com.tkay\"]"
            r0.a(r1)
            r0.y()
            r0.e()
            r0.i()
            r0.g()
            r0.k()
            return r0
    }

    private boolean g() {
            r1 = this;
            boolean r0 = r1.f
            return r0
    }

    private static void h() {
            return
    }

    public final synchronized void a(java.lang.String r3, java.lang.String r4) {
            r2 = this;
            monitor-enter(r2)
            boolean r0 = r2.f     // Catch: java.lang.Throwable -> L1c
            if (r0 == 0) goto L7
            monitor-exit(r2)
            return
        L7:
            r0 = 1
            r2.f = r0     // Catch: java.lang.Throwable -> L1c
            com.tkay.core.common.h.d r0 = new com.tkay.core.common.h.d     // Catch: java.lang.Throwable -> L1c
            android.content.Context r1 = r2.e     // Catch: java.lang.Throwable -> L1c
            r0.<init>(r1, r3, r4)     // Catch: java.lang.Throwable -> L1c
            r4 = 0
            com.tkay.core.c.b$1 r1 = new com.tkay.core.c.b$1     // Catch: java.lang.Throwable -> L1c
            r1.<init>(r2, r3)     // Catch: java.lang.Throwable -> L1c
            r0.a(r4, r1)     // Catch: java.lang.Throwable -> L1c
            monitor-exit(r2)
            return
        L1c:
            r3 = move-exception
            monitor-exit(r2)
            throw r3
    }

    public final boolean a(java.lang.String r11) {
            r10 = this;
            com.tkay.core.c.a r11 = r10.b(r11)
            r0 = 1
            if (r11 == 0) goto L50
            com.tkay.core.c.c r1 = r11.a()
            long r2 = r11.P()
            long r4 = java.lang.System.currentTimeMillis()
            long r6 = r11.L()
            long r6 = r6 + r2
            int r2 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            r3 = 0
            if (r2 > 0) goto L1f
            r2 = r0
            goto L20
        L1f:
            r2 = r3
        L20:
            if (r1 == 0) goto L31
            long r6 = r11.L()
            long r8 = r1.a()
            long r6 = r6 + r8
            int r1 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r1 > 0) goto L31
            r1 = r0
            goto L32
        L31:
            r1 = r3
        L32:
            java.util.Map<java.lang.String, java.lang.Object> r11 = r11.c
            com.tkay.core.common.b.m r4 = com.tkay.core.common.b.m.a()
            java.util.Map r4 = r4.l()
            if (r11 == 0) goto L44
            boolean r11 = r11.equals(r4)
            r11 = r11 ^ r0
            goto L49
        L44:
            if (r4 == 0) goto L48
            r11 = r0
            goto L49
        L48:
            r11 = r3
        L49:
            if (r2 != 0) goto L50
            if (r1 != 0) goto L50
            if (r11 != 0) goto L50
            return r3
        L50:
            return r0
    }

    public final synchronized com.tkay.core.c.a b(java.lang.String r4) {
            r3 = this;
            monitor-enter(r3)
            com.tkay.core.c.a r0 = com.tkay.core.c.b.d     // Catch: java.lang.Throwable -> La2
            if (r0 != 0) goto L9e
            android.content.Context r0 = r3.e     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            if (r0 != 0) goto L13
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            android.content.Context r0 = r0.f()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r3.e = r0     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
        L13:
            android.content.Context r0 = r3.e     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            com.tkay.core.common.c.c r0 = com.tkay.core.common.c.c.a(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            com.tkay.core.common.c.d r0 = com.tkay.core.common.c.d.a(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            java.lang.String r1 = "AP_SY"
            java.util.List r4 = r0.a(r4, r1)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r0 = 0
            if (r4 == 0) goto L4a
            int r1 = r4.size()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            if (r1 <= 0) goto L4a
            r1 = 0
            java.lang.Object r4 = r4.get(r1)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            com.tkay.core.common.f.af r4 = (com.tkay.core.common.f.af) r4     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            if (r4 == 0) goto L4a
            java.lang.String r0 = r4.d()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            com.tkay.core.c.a r0 = com.tkay.core.c.a.f(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            if (r0 == 0) goto L4a
            java.lang.String r4 = r4.a()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            long r1 = java.lang.Long.parseLong(r4)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r0.a(r1)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
        L4a:
            com.tkay.core.c.b.d = r0     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            if (r0 != 0) goto L9e
            com.tkay.core.c.a r4 = new com.tkay.core.c.a     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.<init>()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r0 = 1
            r4.b = r0     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.Q()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            java.lang.String r0 = "0"
            r4.b(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r0 = 0
            r4.a(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.W()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.Z()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.ab()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            java.lang.String r0 = ""
            r4.c(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.ae()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.ag()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            java.lang.String r0 = ""
            r4.d(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.O()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.K()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.C()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.E()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            java.lang.String r0 = "[\"com.tkay\"]"
            r4.a(r0)     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.y()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.e()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.i()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.g()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            r4.k()     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
            com.tkay.core.c.b.d = r4     // Catch: java.lang.Exception -> L9e java.lang.Throwable -> La2
        L9e:
            com.tkay.core.c.a r4 = com.tkay.core.c.b.d     // Catch: java.lang.Throwable -> La2
            monitor-exit(r3)
            return r4
        La2:
            r4 = move-exception
            monitor-exit(r3)
            throw r4
    }

    public final void b() {
            r5 = this;
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.lang.String r1 = r0.o()
            java.lang.String r0 = r0.p()
            android.content.Context r2 = r5.e
            if (r2 == 0) goto L2b
            boolean r3 = android.text.TextUtils.isEmpty(r1)
            if (r3 != 0) goto L2b
            boolean r3 = android.text.TextUtils.isEmpty(r0)
            if (r3 == 0) goto L1d
            goto L2b
        L1d:
            com.tkay.core.common.h.g r3 = new com.tkay.core.common.h.g
            r3.<init>(r2, r1, r0)
            r0 = 0
            com.tkay.core.c.b$2 r4 = new com.tkay.core.c.b$2
            r4.<init>(r5, r2, r1)
            r3.a(r0, r4)
        L2b:
            return
    }
}
