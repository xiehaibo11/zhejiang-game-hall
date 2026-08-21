package com.mbridge.msdk.c;

public class c {
    private static final java.lang.String a = null;




    static {
            java.lang.Class<com.mbridge.msdk.c.c> r0 = com.mbridge.msdk.c.c.class
            java.lang.String r0 = r0.getSimpleName()
            com.mbridge.msdk.c.c.a = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.lang.String a() {
            java.lang.String r0 = com.mbridge.msdk.c.c.a
            return r0
    }

    static java.lang.String a(com.mbridge.msdk.c.c r0) {
            java.lang.String r0 = r0.b()
            return r0
    }

    static void a(com.mbridge.msdk.c.c r1, int r2, int r3, java.lang.String r4, java.lang.String r5) {
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L11
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L11
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L11
            r1.a(r2, r3, r4, r5)     // Catch: java.lang.Throwable -> L11
            goto L1b
        L11:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.c.c.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L1b:
            return
    }

    static void a(com.mbridge.msdk.c.c r2, int r3, java.lang.String r4) {
            com.mbridge.msdk.foundation.same.report.d r2 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L2c
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L2c
            r2.<init>(r0)     // Catch: java.lang.Throwable -> L2c
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            boolean r0 = r0.i     // Catch: java.lang.Throwable -> L2c
            if (r0 == 0) goto L1c
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r0 = r0.v     // Catch: java.lang.Throwable -> L2c
            goto L22
        L1c:
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            java.lang.String r0 = r0.q     // Catch: java.lang.Throwable -> L2c
        L22:
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L2c
            int r1 = r1.j     // Catch: java.lang.Throwable -> L2c
            r2.a(r3, r1, r4, r0)     // Catch: java.lang.Throwable -> L2c
            goto L36
        L2c:
            r2 = move-exception
            java.lang.String r3 = com.mbridge.msdk.c.c.a
            java.lang.String r2 = r2.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r2)
        L36:
            return
    }

    static void a(com.mbridge.msdk.c.c r0, android.content.Context r1, java.lang.String r2) {
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            if (r0 == 0) goto L18
            com.mbridge.msdk.c.a r0 = r0.b(r2)
            if (r0 == 0) goto L18
            java.lang.String r2 = r0.aM()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_SERVICE_URL = r2
            java.lang.String r0 = r0.aL()
            com.mbridge.msdk.MBridgeConstans.OMID_JS_H5_URL = r0
        L18:
            com.mbridge.msdk.a.b.a(r1)
            com.mbridge.msdk.a.b.b(r1)
            return
    }

    static void a(com.mbridge.msdk.c.c r0, android.content.Context r1, java.lang.String r2, java.lang.String r3) {
            r0.b(r1, r2, r3)
            return
    }

    private java.lang.String b() {
            r3 = this;
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            boolean r0 = r0.i
            if (r0 == 0) goto Lf
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.v
            goto L15
        Lf:
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r0 = r0.q
        L15:
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            boolean r1 = r1.i     // Catch: java.lang.Throwable -> L71
            if (r1 == 0) goto L7b
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            boolean r1 = r1.F     // Catch: java.lang.Throwable -> L71
            if (r1 == 0) goto L7b
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            int r1 = r1.E     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            java.util.ArrayList<java.lang.String> r2 = r2.H     // Catch: java.lang.Throwable -> L71
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L71
            if (r1 >= r2) goto L7b
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            java.util.ArrayList<java.lang.String> r1 = r1.H     // Catch: java.lang.Throwable -> L71
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L71
            int r2 = r2.E     // Catch: java.lang.Throwable -> L71
            java.lang.Object r1 = r1.get(r2)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = (java.lang.String) r1     // Catch: java.lang.Throwable -> L71
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L71
            if (r2 != 0) goto L7b
            java.lang.String r2 = "http"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L71
            if (r2 != 0) goto L5f
            java.lang.String r2 = "https"
            boolean r2 = r1.startsWith(r2)     // Catch: java.lang.Throwable -> L71
            if (r2 == 0) goto L7b
        L5f:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L71
            r2.<init>()     // Catch: java.lang.Throwable -> L71
            r2.append(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r1 = "/setting"
            r2.append(r1)     // Catch: java.lang.Throwable -> L71
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Throwable -> L71
            goto L7b
        L71:
            r1 = move-exception
            java.lang.String r2 = com.mbridge.msdk.c.c.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r1)
        L7b:
            return r0
    }

    private void b(android.content.Context r9, java.lang.String r10, java.lang.String r11) {
            r8 = this;
            com.mbridge.msdk.foundation.same.net.f.d r0 = com.mbridge.msdk.foundation.same.net.f.d.a()
            boolean r0 = r0.d()
            r1 = 1
            r0 = r0 ^ r1
            if (r0 == 0) goto Lbc
            r0 = 0
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            boolean r2 = r2.F     // Catch: java.lang.Throwable -> Lab
            if (r2 == 0) goto L17
            goto Lbf
        L17:
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            r2.F = r1     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "mkey_spare_host_ts"
            java.lang.Long r1 = r1.a(r2)     // Catch: java.lang.Throwable -> Lab
            long r2 = java.lang.System.currentTimeMillis()     // Catch: java.lang.Throwable -> Lab
            long r4 = r1.longValue()     // Catch: java.lang.Throwable -> Lab
            r6 = 86400000(0x5265c00, double:4.2687272E-316)
            long r4 = r4 + r6
            int r1 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            if (r1 < 0) goto L8e
            com.mbridge.msdk.foundation.a.a.a r1 = com.mbridge.msdk.foundation.a.a.a.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r2 = "mkey_spare_host"
            java.lang.String r1 = r1.b(r2)     // Catch: java.lang.Throwable -> Lab
            boolean r2 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> Lab
            if (r2 != 0) goto L8e
            java.lang.String r2 = "\n"
            java.lang.String[] r1 = r1.split(r2)     // Catch: java.lang.Throwable -> Lab
            int r2 = r1.length     // Catch: java.lang.Throwable -> Lab
            r3 = r0
        L4f:
            if (r3 >= r2) goto L8a
            r4 = r1[r3]     // Catch: java.lang.Throwable -> Lab
            java.lang.String r5 = r4.trim()     // Catch: java.lang.Throwable -> Lab
            boolean r5 = android.text.TextUtils.isEmpty(r5)     // Catch: java.lang.Throwable -> Lab
            if (r5 != 0) goto L87
            com.mbridge.msdk.foundation.same.net.f.d r5 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            java.util.ArrayList<java.lang.String> r5 = r5.G     // Catch: java.lang.Throwable -> Lab
            java.lang.String r6 = r4.trim()     // Catch: java.lang.Throwable -> Lab
            boolean r5 = r5.contains(r6)     // Catch: java.lang.Throwable -> Lab
            if (r5 != 0) goto L87
            com.mbridge.msdk.foundation.same.net.f.d r5 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            java.util.ArrayList<java.lang.String> r5 = r5.G     // Catch: java.lang.Throwable -> Lab
            java.lang.String r6 = r4.trim()     // Catch: java.lang.Throwable -> Lab
            r5.add(r6)     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.foundation.same.net.f.d r5 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            java.util.ArrayList<java.lang.String> r5 = r5.H     // Catch: java.lang.Throwable -> Lab
            java.lang.String r4 = r4.trim()     // Catch: java.lang.Throwable -> Lab
            r5.add(r4)     // Catch: java.lang.Throwable -> Lab
        L87:
            int r3 = r3 + 1
            goto L4f
        L8a:
            r8.b(r9, r10, r11)     // Catch: java.lang.Throwable -> Lab
            goto Lbf
        L8e:
            com.mbridge.msdk.foundation.same.net.g.d r1 = new com.mbridge.msdk.foundation.same.net.g.d     // Catch: java.lang.Throwable -> Lab
            r1.<init>()     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.foundation.same.net.g.b r2 = new com.mbridge.msdk.foundation.same.net.g.b     // Catch: java.lang.Throwable -> Lab
            android.content.Context r3 = r9.getApplicationContext()     // Catch: java.lang.Throwable -> Lab
            r2.<init>(r3)     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> Lab
            java.lang.String r3 = r3.C     // Catch: java.lang.Throwable -> Lab
            com.mbridge.msdk.c.c$2 r4 = new com.mbridge.msdk.c.c$2     // Catch: java.lang.Throwable -> Lab
            r4.<init>(r8, r9, r10, r11)     // Catch: java.lang.Throwable -> Lab
            r2.get(r0, r3, r1, r4)     // Catch: java.lang.Throwable -> Lab
            goto Lbf
        Lab:
            r9 = move-exception
            com.mbridge.msdk.foundation.same.net.f.d r10 = com.mbridge.msdk.foundation.same.net.f.d.a()
            r10.F = r0
            java.lang.String r10 = com.mbridge.msdk.c.c.a
            java.lang.String r9 = r9.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r10, r9)
            goto Lbf
        Lbc:
            r8.a(r9, r10, r11)
        Lbf:
            return
    }

    static void b(com.mbridge.msdk.c.c r1) {
            com.mbridge.msdk.foundation.same.report.d r1 = new com.mbridge.msdk.foundation.same.report.d     // Catch: java.lang.Throwable -> L11
            com.mbridge.msdk.foundation.controller.a r0 = com.mbridge.msdk.foundation.controller.a.f()     // Catch: java.lang.Throwable -> L11
            android.content.Context r0 = r0.j()     // Catch: java.lang.Throwable -> L11
            r1.<init>(r0)     // Catch: java.lang.Throwable -> L11
            r1.a()     // Catch: java.lang.Throwable -> L11
            goto L1b
        L11:
            r1 = move-exception
            java.lang.String r0 = com.mbridge.msdk.c.c.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r0, r1)
        L1b:
            return
    }

    public final void a(android.content.Context r6, java.lang.String r7, java.lang.String r8) {
            r5 = this;
            if (r6 != 0) goto L3
            return
        L3:
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            java.lang.String r1 = "app_id"
            r0.a(r1, r7)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r7)
            r1.append(r8)
            java.lang.String r1 = r1.toString()
            java.lang.String r1 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r1)
            java.lang.String r2 = "sign"
            r0.a(r2, r1)
            com.mbridge.msdk.d.b r1 = com.mbridge.msdk.d.b.a(r6)
            java.lang.String r1 = r1.c()
            java.lang.String r2 = "jm_a"
            r0.a(r2, r1)
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.d.b r2 = com.mbridge.msdk.d.b.a(r6)
            int r2 = r2.a()
            r1.append(r2)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r3 = "jm_n"
            r0.a(r3, r1)
            com.mbridge.msdk.d.b r1 = com.mbridge.msdk.d.b.a(r6)
            java.lang.String r1 = r1.b()
            java.lang.String r3 = "launcher"
            r0.a(r3, r1)
            com.mbridge.msdk.c.b r1 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L76
            com.mbridge.msdk.c.a r1 = r1.g(r7)     // Catch: java.lang.Throwable -> L76
            java.lang.String r1 = r1.bc()     // Catch: java.lang.Throwable -> L76
            java.lang.String r3 = "vtag"
            boolean r4 = android.text.TextUtils.isEmpty(r1)     // Catch: java.lang.Throwable -> L76
            if (r4 == 0) goto L72
            r1 = r2
        L72:
            r0.a(r3, r1)     // Catch: java.lang.Throwable -> L76
            goto L80
        L76:
            r1 = move-exception
            java.lang.String r3 = com.mbridge.msdk.c.c.a
            java.lang.String r1 = r1.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r3, r1)
        L80:
            com.mbridge.msdk.foundation.same.net.f.d r1 = com.mbridge.msdk.foundation.same.net.f.d.a()
            boolean r1 = r1.F
            if (r1 == 0) goto La2
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            com.mbridge.msdk.foundation.same.net.f.d r3 = com.mbridge.msdk.foundation.same.net.f.d.a()
            int r3 = r3.j
            r1.append(r3)
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "st_net"
            r0.a(r2, r1)
        La2:
            com.mbridge.msdk.c.c$1 r1 = new com.mbridge.msdk.c.c$1
            r1.<init>(r5, r7, r6, r8)
            com.mbridge.msdk.c.a.c r7 = new com.mbridge.msdk.c.a.c
            r7.<init>(r6)
            com.mbridge.msdk.foundation.same.net.f.d r6 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r6 = r6.q
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            boolean r8 = r8.i     // Catch: java.lang.Throwable -> L10e
            if (r8 == 0) goto L118
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            boolean r8 = r8.F     // Catch: java.lang.Throwable -> L10e
            if (r8 == 0) goto L118
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            int r8 = r8.E     // Catch: java.lang.Throwable -> L10e
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            java.util.ArrayList<java.lang.String> r2 = r2.H     // Catch: java.lang.Throwable -> L10e
            int r2 = r2.size()     // Catch: java.lang.Throwable -> L10e
            if (r8 >= r2) goto L118
            com.mbridge.msdk.foundation.same.net.f.d r8 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            java.util.ArrayList<java.lang.String> r8 = r8.H     // Catch: java.lang.Throwable -> L10e
            com.mbridge.msdk.foundation.same.net.f.d r2 = com.mbridge.msdk.foundation.same.net.f.d.a()     // Catch: java.lang.Throwable -> L10e
            int r2 = r2.E     // Catch: java.lang.Throwable -> L10e
            java.lang.Object r8 = r8.get(r2)     // Catch: java.lang.Throwable -> L10e
            java.lang.String r8 = (java.lang.String) r8     // Catch: java.lang.Throwable -> L10e
            boolean r2 = android.text.TextUtils.isEmpty(r8)     // Catch: java.lang.Throwable -> L10e
            if (r2 != 0) goto L118
            java.lang.String r2 = "http"
            boolean r2 = r8.startsWith(r2)     // Catch: java.lang.Throwable -> L10e
            if (r2 != 0) goto Lfc
            java.lang.String r2 = "https"
            boolean r2 = r8.startsWith(r2)     // Catch: java.lang.Throwable -> L10e
            if (r2 == 0) goto L118
        Lfc:
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Throwable -> L10e
            r2.<init>()     // Catch: java.lang.Throwable -> L10e
            r2.append(r8)     // Catch: java.lang.Throwable -> L10e
            java.lang.String r8 = "/setting"
            r2.append(r8)     // Catch: java.lang.Throwable -> L10e
            java.lang.String r6 = r2.toString()     // Catch: java.lang.Throwable -> L10e
            goto L118
        L10e:
            r8 = move-exception
            java.lang.String r2 = com.mbridge.msdk.c.c.a
            java.lang.String r8 = r8.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r2, r8)
        L118:
            r8 = 1
            r7.get(r8, r6, r0, r1)
            return
    }

    public final void a(android.content.Context r4, java.lang.String r5, java.lang.String r6, java.lang.String r7) {
            r3 = this;
            boolean r0 = android.text.TextUtils.isEmpty(r5)
            if (r0 != 0) goto Ld
            boolean r0 = android.text.TextUtils.isEmpty(r6)
            if (r0 != 0) goto Ld
            goto L1d
        Ld:
            com.mbridge.msdk.foundation.controller.a r5 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r5 = r5.k()
            com.mbridge.msdk.foundation.controller.a r6 = com.mbridge.msdk.foundation.controller.a.f()
            java.lang.String r6 = r6.l()
        L1d:
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            boolean r0 = r0.a(r7, r5)
            if (r0 == 0) goto La7
            com.mbridge.msdk.c.b r0 = com.mbridge.msdk.c.b.a()
            r1 = 2
            boolean r0 = r0.a(r5, r1, r7)
            if (r0 == 0) goto La7
            com.mbridge.msdk.foundation.same.net.g.d r0 = new com.mbridge.msdk.foundation.same.net.g.d
            r0.<init>()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "["
            r1.append(r2)
            r1.append(r7)
            java.lang.String r2 = "]"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            java.lang.String r2 = "unit_ids"
            r0.a(r2, r1)
            java.lang.String r2 = "app_id"
            r0.a(r2, r5)
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            r2.append(r5)
            r2.append(r6)
            java.lang.String r6 = r2.toString()
            java.lang.String r6 = com.mbridge.msdk.foundation.tools.SameMD5.getMD5(r6)
            java.lang.String r2 = "sign"
            r0.a(r2, r6)
            com.mbridge.msdk.c.b r6 = com.mbridge.msdk.c.b.a()     // Catch: java.lang.Throwable -> L89
            com.mbridge.msdk.c.d r6 = r6.c(r5, r1)     // Catch: java.lang.Throwable -> L89
            java.lang.String r6 = r6.y()     // Catch: java.lang.Throwable -> L89
            java.lang.String r1 = "vtag"
            boolean r2 = android.text.TextUtils.isEmpty(r6)     // Catch: java.lang.Throwable -> L89
            if (r2 == 0) goto L85
            java.lang.String r6 = ""
        L85:
            r0.a(r1, r6)     // Catch: java.lang.Throwable -> L89
            goto L93
        L89:
            r6 = move-exception
            java.lang.String r1 = com.mbridge.msdk.c.c.a
            java.lang.String r6 = r6.getMessage()
            com.mbridge.msdk.foundation.tools.z.d(r1, r6)
        L93:
            com.mbridge.msdk.c.c$3 r6 = new com.mbridge.msdk.c.c$3
            r6.<init>(r3, r5, r7)
            com.mbridge.msdk.c.a.c r5 = new com.mbridge.msdk.c.a.c
            r5.<init>(r4)
            r4 = 1
            com.mbridge.msdk.foundation.same.net.f.d r7 = com.mbridge.msdk.foundation.same.net.f.d.a()
            java.lang.String r7 = r7.q
            r5.get(r4, r7, r0, r6)
        La7:
            return
    }
}
