package com.loc;

public final class fk {
    public static int a = 1;
    public static int b = 2;
    private static com.loc.fk e;
    private long c;
    private boolean d;
    private java.util.ArrayList<java.lang.String> f;
    private com.loc.et g;
    private com.loc.et h;
    private long i;
    private android.content.Context j;
    private java.lang.String k;
    private boolean l;


    static {
            return
    }

    private fk(android.content.Context r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            r3.c = r0
            r0 = 0
            r3.d = r0
            java.util.ArrayList r1 = new java.util.ArrayList
            r1.<init>()
            r3.f = r1
            com.loc.et r1 = new com.loc.et
            r1.<init>()
            r3.g = r1
            com.loc.et r1 = new com.loc.et
            r1.<init>()
            r3.h = r1
            r1 = 120000(0x1d4c0, double:5.9288E-319)
            r3.i = r1
            r3.l = r0
            r3.j = r4
            return
    }

    static long a(com.loc.fk r0, long r1) {
            r0.i = r1
            return r1
    }

    static android.content.Context a(com.loc.fk r0) {
            android.content.Context r0 = r0.j
            return r0
    }

    static com.loc.et a(com.loc.fk r0, int r1) {
            com.loc.et r0 = r0.b(r1)
            return r0
    }

    public static synchronized com.loc.fk a(android.content.Context r2) {
            java.lang.Class<com.loc.fk> r0 = com.loc.fk.class
            monitor-enter(r0)
            com.loc.fk r1 = com.loc.fk.e     // Catch: java.lang.Throwable -> L12
            if (r1 != 0) goto Le
            com.loc.fk r1 = new com.loc.fk     // Catch: java.lang.Throwable -> L12
            r1.<init>(r2)     // Catch: java.lang.Throwable -> L12
            com.loc.fk.e = r1     // Catch: java.lang.Throwable -> L12
        Le:
            com.loc.fk r2 = com.loc.fk.e     // Catch: java.lang.Throwable -> L12
            monitor-exit(r0)
            return r2
        L12:
            r2 = move-exception
            monitor-exit(r0)
            throw r2
    }

    static boolean a(java.lang.String[] r0, java.lang.String[] r1) {
            boolean r0 = b(r0, r1)
            return r0
    }

    static java.lang.String[] a(org.json.JSONArray r0, int r1) throws org.json.JSONException {
            java.lang.String[] r0 = b(r0, r1)
            return r0
    }

    private com.loc.et b(int r2) {
            r1 = this;
            int r0 = com.loc.fk.b
            if (r2 != r0) goto L7
            com.loc.et r2 = r1.h
            return r2
        L7:
            com.loc.et r2 = r1.g
            return r2
    }

    static void b(com.loc.fk r0, int r1) {
            r0.f(r1)
            return
    }

    private synchronized void b(boolean r7, int r8) {
            r6 = this;
            monitor-enter(r6)
            if (r7 != 0) goto Lf
            boolean r7 = com.loc.fq.p()     // Catch: java.lang.Throwable -> L90
            if (r7 != 0) goto Lf
            boolean r7 = r6.l     // Catch: java.lang.Throwable -> L90
            if (r7 == 0) goto Lf
            monitor-exit(r6)
            return
        Lf:
            long r0 = r6.c     // Catch: java.lang.Throwable -> L90
            r2 = 0
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 == 0) goto L33
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L90
            long r2 = r6.c     // Catch: java.lang.Throwable -> L90
            long r2 = r0 - r2
            long r4 = r6.i     // Catch: java.lang.Throwable -> L90
            int r7 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r7 >= 0) goto L27
            monitor-exit(r6)
            return
        L27:
            long r2 = r6.c     // Catch: java.lang.Throwable -> L90
            long r0 = r0 - r2
            r2 = 60000(0xea60, double:2.9644E-319)
            int r7 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r7 >= 0) goto L33
            monitor-exit(r6)
            return
        L33:
            long r0 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> L90
            r6.c = r0     // Catch: java.lang.Throwable -> L90
            r7 = 1
            r6.l = r7     // Catch: java.lang.Throwable -> L90
            java.lang.Thread r7 = java.lang.Thread.currentThread()     // Catch: java.lang.Throwable -> L90
            java.lang.StackTraceElement[] r7 = r7.getStackTrace()     // Catch: java.lang.Throwable -> L90
            java.lang.StringBuffer r0 = new java.lang.StringBuffer     // Catch: java.lang.Throwable -> L90
            r0.<init>()     // Catch: java.lang.Throwable -> L90
            int r1 = r7.length     // Catch: java.lang.Throwable -> L90
            r2 = 0
        L4b:
            if (r2 >= r1) goto L82
            r3 = r7[r2]     // Catch: java.lang.Throwable -> L90
            java.lang.StringBuilder r4 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L90
            r4.<init>()     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r3.getClassName()     // Catch: java.lang.Throwable -> L90
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = "("
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = r3.getMethodName()     // Catch: java.lang.Throwable -> L90
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            java.lang.String r5 = ":"
            r4.append(r5)     // Catch: java.lang.Throwable -> L90
            int r3 = r3.getLineNumber()     // Catch: java.lang.Throwable -> L90
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = "),"
            r4.append(r3)     // Catch: java.lang.Throwable -> L90
            java.lang.String r3 = r4.toString()     // Catch: java.lang.Throwable -> L90
            r0.append(r3)     // Catch: java.lang.Throwable -> L90
            int r2 = r2 + 1
            goto L4b
        L82:
            com.loc.cr r7 = com.loc.cr.a()     // Catch: java.lang.Throwable -> L90
            com.loc.fk$1 r0 = new com.loc.fk$1     // Catch: java.lang.Throwable -> L90
            r0.<init>(r6, r8)     // Catch: java.lang.Throwable -> L90
            r7.b(r0)     // Catch: java.lang.Throwable -> L90
            monitor-exit(r6)
            return
        L90:
            r7 = move-exception
            monitor-exit(r6)
            throw r7
    }

    private static boolean b(java.lang.String[] r5, java.lang.String[] r6) {
            r0 = 0
            if (r5 == 0) goto L26
            int r1 = r5.length
            if (r1 != 0) goto L7
            goto L26
        L7:
            if (r6 == 0) goto L26
            int r1 = r6.length
            if (r1 != 0) goto Ld
            goto L26
        Ld:
            int r1 = r5.length
            int r2 = r6.length
            if (r1 == r2) goto L12
            return r0
        L12:
            int r1 = r5.length
            r2 = 0
        L14:
            if (r2 >= r1) goto L24
            r3 = r5[r2]
            r4 = r6[r2]
            boolean r3 = r3.equals(r4)
            if (r3 != 0) goto L21
            return r0
        L21:
            int r2 = r2 + 1
            goto L14
        L24:
            r5 = 1
            return r5
        L26:
            return r0
    }

    private static java.lang.String[] b(org.json.JSONArray r6, int r7) throws org.json.JSONException {
            r0 = 0
            if (r6 == 0) goto L39
            int r1 = r6.length()
            if (r1 != 0) goto La
            goto L39
        La:
            int r1 = r6.length()
            java.lang.String[] r2 = new java.lang.String[r1]
        L10:
            if (r0 >= r1) goto L38
            java.lang.String r3 = r6.getString(r0)
            boolean r4 = android.text.TextUtils.isEmpty(r3)
            if (r4 != 0) goto L35
            int r4 = com.loc.fk.b
            if (r7 != r4) goto L33
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            java.lang.String r5 = "["
            r4.<init>(r5)
            r4.append(r3)
            java.lang.String r3 = "]"
            r4.append(r3)
            java.lang.String r3 = r4.toString()
        L33:
            r2[r0] = r3
        L35:
            int r0 = r0 + 1
            goto L10
        L38:
            return r2
        L39:
            java.lang.String[] r6 = new java.lang.String[r0]
            return r6
    }

    private static java.lang.String c(int r1) {
            int r0 = com.loc.fk.b
            if (r1 != r0) goto L7
            java.lang.String r1 = "last_ip_6"
            return r1
        L7:
            java.lang.String r1 = "last_ip_4"
            return r1
    }

    private void d(int r3) {
            r2 = this;
            com.loc.et r0 = r2.b(r3)
            boolean r0 = r0.d()
            if (r0 == 0) goto L24
            android.content.Context r0 = r2.j
            java.lang.String r1 = "cbG9jaXA"
            android.content.SharedPreferences$Editor r0 = com.loc.fy.a(r0, r1)
            java.lang.String r1 = c(r3)
            com.loc.fy.a(r0, r1)
            com.loc.fy.a(r0)
            com.loc.et r3 = r2.b(r3)
            r0 = 0
            r3.a(r0)
        L24:
            return
    }

    private java.lang.String e(int r7) {
            r6 = this;
            r0 = 0
            r6.b(r0, r7)
            com.loc.et r1 = r6.b(r7)
            java.lang.String[] r1 = r1.a()
            if (r1 == 0) goto L33
            int r2 = r1.length
            if (r2 <= 0) goto L33
            int r2 = r1.length
        L12:
            r3 = 0
            if (r0 >= r2) goto L23
            r4 = r1[r0]
            java.util.ArrayList<java.lang.String> r5 = r6.f
            boolean r5 = r5.contains(r4)
            if (r5 != 0) goto L20
            goto L24
        L20:
            int r0 = r0 + 1
            goto L12
        L23:
            r4 = r3
        L24:
            boolean r0 = android.text.TextUtils.isEmpty(r4)
            if (r0 == 0) goto L2b
            return r3
        L2b:
            com.loc.et r7 = r6.b(r7)
            r7.a(r4)
            return r4
        L33:
            r6.g(r7)
            com.loc.et r7 = r6.b(r7)
            java.lang.String r7 = r7.b()
            return r7
    }

    private void f(int r4) {
            r3 = this;
            com.loc.et r0 = r3.b(r4)
            java.lang.String[] r0 = r0.a()
            if (r0 == 0) goto L45
            com.loc.et r0 = r3.b(r4)
            java.lang.String[] r0 = r0.a()
            int r0 = r0.length
            if (r0 > 0) goto L16
            goto L45
        L16:
            com.loc.et r0 = r3.b(r4)
            java.lang.String[] r0 = r0.a()
            r1 = 0
            r0 = r0[r1]
            java.lang.String r1 = r3.k
            boolean r1 = r0.equals(r1)
            if (r1 != 0) goto L45
            java.util.ArrayList<java.lang.String> r1 = r3.f
            boolean r1 = r1.contains(r0)
            if (r1 != 0) goto L45
            r3.k = r0
            android.content.Context r1 = r3.j
            java.lang.String r2 = "cbG9jaXA"
            android.content.SharedPreferences$Editor r1 = com.loc.fy.a(r1, r2)
            java.lang.String r4 = c(r4)
            com.loc.fy.a(r1, r4, r0)
            com.loc.fy.a(r1)
        L45:
            return
    }

    private void g(int r5) {
            r4 = this;
            android.content.Context r0 = r4.j
            java.lang.String r1 = c(r5)
            java.lang.String r2 = "cbG9jaXA"
            r3 = 0
            java.lang.String r0 = com.loc.fy.a(r0, r2, r1, r3)
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L31
            java.util.ArrayList<java.lang.String> r1 = r4.f
            boolean r1 = r1.contains(r0)
            if (r1 != 0) goto L31
            com.loc.et r1 = r4.b(r5)
            r1.a(r0)
            com.loc.et r1 = r4.b(r5)
            r1.b(r0)
            com.loc.et r5 = r4.b(r5)
            r0 = 1
            r5.a(r0)
        L31:
            return
    }

    public final java.lang.String a(com.loc.fn r7, int r8) {
            r6 = this;
            r0 = 0
            boolean r1 = com.loc.fq.q()     // Catch: java.lang.Throwable -> L63
            if (r1 != 0) goto L8
            return r0
        L8:
            if (r7 == 0) goto L63
            java.lang.String r1 = r7.b()     // Catch: java.lang.Throwable -> L63
            java.net.URL r2 = new java.net.URL     // Catch: java.lang.Throwable -> L63
            r2.<init>(r1)     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = r2.getHost()     // Catch: java.lang.Throwable -> L63
            java.lang.String r3 = "http://abroad.apilocate.amap.com/mobile/binary"
            boolean r3 = r3.equals(r1)     // Catch: java.lang.Throwable -> L63
            if (r3 != 0) goto L63
            java.lang.String r3 = "abroad.apilocate.amap.com"
            boolean r3 = r3.equals(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L28
            goto L63
        L28:
            java.lang.String r3 = "apilocate.amap.com"
            boolean r3 = r3.equalsIgnoreCase(r2)     // Catch: java.lang.Throwable -> L63
            if (r3 == 0) goto L33
            java.lang.String r3 = "httpdns.apilocate.amap.com"
            goto L34
        L33:
            r3 = r2
        L34:
            boolean r4 = com.loc.m.g(r3)     // Catch: java.lang.Throwable -> L63
            if (r4 != 0) goto L3b
            return r0
        L3b:
            java.lang.String r4 = r6.e(r8)     // Catch: java.lang.Throwable -> L63
            boolean r5 = android.text.TextUtils.isEmpty(r4)     // Catch: java.lang.Throwable -> L63
            if (r5 != 0) goto L63
            java.lang.String r1 = r1.replace(r2, r4)     // Catch: java.lang.Throwable -> L63
            r7.d(r1)     // Catch: java.lang.Throwable -> L63
            java.util.Map r1 = r7.a()     // Catch: java.lang.Throwable -> L63
            java.lang.String r2 = "host"
            r1.put(r2, r3)     // Catch: java.lang.Throwable -> L63
            r7.e(r3)     // Catch: java.lang.Throwable -> L63
            int r1 = com.loc.fk.b     // Catch: java.lang.Throwable -> L63
            if (r8 != r1) goto L5e
            r8 = 1
            goto L5f
        L5e:
            r8 = 0
        L5f:
            r7.a(r8)     // Catch: java.lang.Throwable -> L63
            return r4
        L63:
            return r0
    }

    public final void a(int r3) {
            r2 = this;
            com.loc.et r0 = r2.b(r3)
            boolean r0 = r0.e()
            if (r0 != 0) goto L1f
            java.util.ArrayList<java.lang.String> r0 = r2.f
            com.loc.et r1 = r2.b(r3)
            java.lang.String r1 = r1.b()
            r0.add(r1)
            r2.d(r3)
            r0 = 1
            r2.b(r0, r3)
            return
        L1f:
            r2.d(r3)
            return
    }

    public final void a(boolean r3, int r4) {
            r2 = this;
            com.loc.et r0 = r2.b(r4)
            r0.b(r3)
            if (r3 == 0) goto L37
            com.loc.et r3 = r2.b(r4)
            java.lang.String r3 = r3.c()
            com.loc.et r0 = r2.b(r4)
            java.lang.String r0 = r0.b()
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L37
            boolean r3 = r0.equals(r3)
            if (r3 != 0) goto L37
            android.content.Context r3 = r2.j
            java.lang.String r1 = "cbG9jaXA"
            android.content.SharedPreferences$Editor r3 = com.loc.fy.a(r3, r1)
            java.lang.String r4 = c(r4)
            com.loc.fy.a(r3, r4, r0)
            com.loc.fy.a(r3)
        L37:
            return
    }
}
