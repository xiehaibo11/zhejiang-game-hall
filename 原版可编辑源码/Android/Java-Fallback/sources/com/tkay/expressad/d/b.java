package com.tkay.expressad.d;

public class b {
    public static final java.lang.String a = null;
    public static final int b = 500;
    public static final java.lang.String c = "tkay";
    private static volatile com.tkay.expressad.d.b d;
    private static java.util.HashMap<java.lang.String, com.tkay.expressad.d.c> e;
    private static com.tkay.expressad.d.a f;

    static {
            java.lang.Class<com.tkay.expressad.d.b> r0 = com.tkay.expressad.d.b.class
            java.lang.String r0 = r0.getSimpleName()
            com.tkay.expressad.d.b.a = r0
            r0 = 0
            com.tkay.expressad.d.b.d = r0
            java.util.HashMap r1 = new java.util.HashMap
            r1.<init>()
            com.tkay.expressad.d.b.e = r1
            com.tkay.expressad.d.b.f = r0
            return
    }

    private b() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.tkay.expressad.d.b a() {
            com.tkay.expressad.d.b r0 = com.tkay.expressad.d.b.d
            if (r0 != 0) goto L17
            java.lang.Class<com.tkay.expressad.d.b> r0 = com.tkay.expressad.d.b.class
            monitor-enter(r0)
            com.tkay.expressad.d.b r1 = com.tkay.expressad.d.b.d     // Catch: java.lang.Throwable -> L14
            if (r1 != 0) goto L12
            com.tkay.expressad.d.b r1 = new com.tkay.expressad.d.b     // Catch: java.lang.Throwable -> L14
            r1.<init>()     // Catch: java.lang.Throwable -> L14
            com.tkay.expressad.d.b.d = r1     // Catch: java.lang.Throwable -> L14
        L12:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L14
            goto L17
        L14:
            r1 = move-exception
            monitor-exit(r0)
            throw r1
        L17:
            com.tkay.expressad.d.b r0 = com.tkay.expressad.d.b.d
            return r0
    }

    public static com.tkay.expressad.d.c a(java.lang.String r0, java.lang.String r1) {
            com.tkay.expressad.d.c r0 = c(r0, r1)
            if (r0 != 0) goto Lb
            com.tkay.expressad.d.c r0 = new com.tkay.expressad.d.c
            r0.<init>()
        Lb:
            return r0
    }

    public static java.lang.String a(java.lang.String r0) {
            if (r0 != 0) goto L5
            java.lang.String r0 = ""
            return r0
        L5:
            com.tkay.expressad.d.a r0 = b()
            java.lang.String r0 = r0.R()
            return r0
    }

    private static void a(android.content.Context r4, java.lang.String r5) {
            java.lang.String r0 = "tkay_expressad"
            r1 = 0
            android.content.SharedPreferences r4 = r4.getSharedPreferences(r0, r1)     // Catch: java.lang.Exception -> L47
            java.util.Map r4 = r4.getAll()     // Catch: java.lang.Exception -> L47
            java.util.Set r0 = r4.keySet()     // Catch: java.lang.Exception -> L47
            java.util.Iterator r0 = r0.iterator()     // Catch: java.lang.Exception -> L47
        L13:
            boolean r1 = r0.hasNext()     // Catch: java.lang.Exception -> L47
            if (r1 == 0) goto L46
            java.lang.Object r1 = r0.next()     // Catch: java.lang.Exception -> L47
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Exception -> L47
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> L47
            r2.<init>()     // Catch: java.lang.Exception -> L47
            r2.append(r5)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = "_"
            r2.append(r3)     // Catch: java.lang.Exception -> L47
            java.lang.String r2 = r2.toString()     // Catch: java.lang.Exception -> L47
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Exception -> L47
            if (r2 == 0) goto L13
            java.util.HashMap<java.lang.String, com.tkay.expressad.d.c> r2 = com.tkay.expressad.d.b.e     // Catch: java.lang.Exception -> L47
            java.lang.Object r3 = r4.get(r1)     // Catch: java.lang.Exception -> L47
            java.lang.String r3 = (java.lang.String) r3     // Catch: java.lang.Exception -> L47
            com.tkay.expressad.d.c r3 = com.tkay.expressad.d.c.b(r3)     // Catch: java.lang.Exception -> L47
            r2.put(r1, r3)     // Catch: java.lang.Exception -> L47
            goto L13
        L46:
            return
        L47:
            r4 = move-exception
            r4.printStackTrace()
            return
    }

    private static void a(java.lang.String r1, java.lang.String r2, java.lang.String r3) {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            com.tkay.expressad.foundation.a.a.a r2 = com.tkay.expressad.foundation.a.a.a.a()
            r2.a(r1, r3)
            com.tkay.expressad.d.c r2 = com.tkay.expressad.d.c.b(r3)
            java.util.HashMap<java.lang.String, com.tkay.expressad.d.c> r3 = com.tkay.expressad.d.b.e
            r3.put(r1, r2)
            return
    }

    public static com.tkay.expressad.d.a b() {
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.f
            if (r0 != 0) goto La
            com.tkay.expressad.d.a r0 = c()
            com.tkay.expressad.d.b.f = r0
        La:
            com.tkay.expressad.d.a r0 = com.tkay.expressad.d.b.f
            return r0
    }

    public static com.tkay.expressad.d.c b(java.lang.String r0, java.lang.String r1) {
            com.tkay.expressad.d.c r0 = g(r0, r1)
            if (r0 != 0) goto Lb
            com.tkay.expressad.d.c r0 = new com.tkay.expressad.d.c
            r0.<init>()
        Lb:
            return r0
    }

    public static java.lang.String b(java.lang.String r2) {
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.a()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "ivreward_"
            java.lang.String r2 = r1.concat(r2)
            java.lang.String r2 = r0.a(r2)
            return r2
    }

    public static com.tkay.expressad.d.a c() {
            com.tkay.expressad.d.a r0 = new com.tkay.expressad.d.a
            r0.<init>()
            r0.A()
            r0.B()
            r0.y()
            r0.z()
            r0.w()
            r0.u()
            r0.m()
            java.lang.String r1 = "tkay"
            r0.a(r1)
            r0.j()
            r0.p()
            r0.o()
            r0.s()
            r0.e()
            r0.d()
            r0.f()
            r0.g()
            r0.h()
            r0.i()
            r0.c()
            java.lang.String r1 = "https://cdn-adn-https.rayjump.com/cdn-adn/v2/portal/19/08/20/11/06/5d5b63cb457e2.js"
            r0.c(r1)
            r1 = 120(0x78, float:1.68E-43)
            r0.a(r1)
            r0.O()
            r0.N()
            r1 = 100
            r0.a(r1)
            r0.Q()
            int r1 = com.tkay.expressad.foundation.g.a.cH
            r0.e(r1)
            int r1 = com.tkay.expressad.foundation.g.a.cJ
            r0.d(r1)
            int r1 = com.tkay.expressad.foundation.g.a.cI
            r0.c(r1)
            r0.a()
            int r1 = com.tkay.expressad.foundation.g.a.cO
            r0.f(r1)
            r1 = 10
            r0.b(r1)
            return r0
    }

    public static com.tkay.expressad.d.c c(java.lang.String r0, java.lang.String r1) {
            com.tkay.expressad.d.c r0 = g(r0, r1)
            if (r0 == 0) goto Lf
            int r1 = r0.k()
            if (r1 != 0) goto Lf
            r0.l()
        Lf:
            return r0
    }

    public static void c(java.lang.String r2) {
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.a()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "ivreward_"
            java.lang.String r2 = r1.concat(r2)
            r0.b(r2)
            return
    }

    private static com.tkay.expressad.d.c d(java.lang.String r4) {
            com.tkay.expressad.d.c r0 = new com.tkay.expressad.d.c
            r0.<init>()
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r2 = 1
            java.lang.Integer r2 = java.lang.Integer.valueOf(r2)
            r1.add(r2)
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r3 = 8
            java.lang.Integer r3 = java.lang.Integer.valueOf(r3)
            r2.add(r3)
            r2.add(r3)
            r0.v()
            r0.u()
            r0.a(r4)
            r0.a(r1)
            r0.b(r2)
            r0.p()
            r0.r()
            r0.q()
            r0.o()
            r0.n()
            r0.j()
            r0.l()
            r4 = 100
            r0.c(r4)
            r4 = 0
            r0.d(r4)
            r0.h()
            r0.e()
            r0.c()
            r0.w()
            r0.x()
            return r0
    }

    public static com.tkay.expressad.d.c d(java.lang.String r0, java.lang.String r1) {
            com.tkay.expressad.d.c r0 = g(r0, r1)
            return r0
    }

    public static void e(java.lang.String r2, java.lang.String r3) {
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.a()
            java.lang.String r2 = java.lang.String.valueOf(r2)
            java.lang.String r1 = "ivreward_"
            java.lang.String r2 = r1.concat(r2)
            r0.a(r2, r3)
            return
    }

    private static void f(java.lang.String r1, java.lang.String r2) {
            com.tkay.expressad.foundation.a.a.a r0 = com.tkay.expressad.foundation.a.a.a.a()
            r0.a(r1, r2)
            com.tkay.expressad.d.a r1 = com.tkay.expressad.d.a.b(r2)
            com.tkay.expressad.d.b.f = r1
            if (r1 == 0) goto L12
            r1.G()
        L12:
            return
    }

    private static com.tkay.expressad.d.c g(java.lang.String r1, java.lang.String r2) {
            boolean r0 = android.text.TextUtils.isEmpty(r1)
            if (r0 == 0) goto Le
            com.tkay.expressad.foundation.b.b r1 = com.tkay.expressad.foundation.b.b.b()
            java.lang.String r1 = r1.e()
        Le:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "_"
            r0.append(r1)
            r0.append(r2)
            java.lang.String r1 = r0.toString()
            r2 = 0
            java.util.HashMap<java.lang.String, com.tkay.expressad.d.c> r0 = com.tkay.expressad.d.b.e
            boolean r0 = r0.containsKey(r1)
            if (r0 == 0) goto L34
            java.util.HashMap<java.lang.String, com.tkay.expressad.d.c> r2 = com.tkay.expressad.d.b.e
            java.lang.Object r1 = r2.get(r1)
            r2 = r1
            com.tkay.expressad.d.c r2 = (com.tkay.expressad.d.c) r2
        L34:
            return r2
    }
}
