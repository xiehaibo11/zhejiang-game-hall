package com.igexin.push.core;

public class m {
    private static com.igexin.push.core.m a;

    public m() {
            r0 = this;
            r0.<init>()
            return
    }

    public static com.igexin.push.core.m a() {
            com.igexin.push.core.m r0 = com.igexin.push.core.m.a
            if (r0 != 0) goto Lb
            com.igexin.push.core.m r0 = new com.igexin.push.core.m
            r0.<init>()
            com.igexin.push.core.m.a = r0
        Lb:
            com.igexin.push.core.m r0 = com.igexin.push.core.m.a
            return r0
    }

    private void a(java.util.List<com.igexin.push.d.c.j> r4) {
            r3 = this;
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            android.util.Pair<java.lang.Integer, java.lang.String> r0 = r0.b
            if (r0 != 0) goto L9
            return
        L9:
            com.igexin.push.core.x r0 = com.igexin.push.core.x.a()
            android.util.Pair<java.lang.Integer, java.lang.String> r0 = r0.b
            java.lang.Object r0 = r0.first
            java.lang.Integer r0 = (java.lang.Integer) r0
            int r0 = r0.intValue()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            r1.append(r0)
            java.lang.String r2 = ""
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 1
            if (r0 != r2) goto L49
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            r0.append(r1)
            java.lang.String r1 = "#"
            r0.append(r1)
            com.igexin.push.core.x r1 = com.igexin.push.core.x.a()
            android.util.Pair<java.lang.Integer, java.lang.String> r1 = r1.b
            java.lang.Object r1 = r1.second
            java.lang.String r1 = (java.lang.String) r1
            r0.append(r1)
            java.lang.String r1 = r0.toString()
        L49:
            com.igexin.push.d.c.j r0 = new com.igexin.push.d.c.j
            r0.<init>()
            r2 = 5
            r0.a = r2
            r0.b = r1
            r4.add(r0)
            return
    }

    public int b() {
            r5 = this;
            boolean r0 = com.igexin.push.core.d.k
            r1 = 0
            if (r0 == 0) goto L32
            long r2 = java.lang.System.currentTimeMillis()
            boolean r0 = com.igexin.push.util.a.a(r2)
            if (r0 != 0) goto L32
            boolean r0 = com.igexin.push.util.a.a()
            if (r0 != 0) goto L16
            goto L32
        L16:
            com.igexin.push.d.c.g r0 = new com.igexin.push.d.c.g
            r0.<init>()
            java.lang.String r2 = com.igexin.push.core.d.a
            r0.a = r2
            com.igexin.push.core.c r2 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r2 = r2.i()
            r3 = 1
            java.lang.String r4 = "K-"
            int r0 = r2.a(r4, r0, r3)
            if (r0 >= 0) goto L31
            return r1
        L31:
            return r3
        L32:
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r1 = "LoginInteractor|keyNegotiate stop ++++++++++"
            com.igexin.b.a.c.b.a(r1, r0)
            r0 = -1
            return r0
    }

    public void c() {
            r7 = this;
            com.igexin.b.a.c.a.f r0 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Start login appid = "
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.a
            r1.append(r2)
            java.lang.String r2 = " appkey = "
            r1.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.b
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r0.a(r1)
            boolean r0 = com.igexin.push.core.d.m
            r1 = 0
            if (r0 == 0) goto L2b
            com.igexin.push.core.d.m = r1
        L2b:
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            r0.g()
            long r2 = com.igexin.push.core.d.t
            r4 = 0
            int r0 = (r2 > r4 ? 1 : (r2 == r4 ? 0 : -1))
            r2 = 1
            if (r0 != 0) goto L96
            java.lang.Object[] r0 = new java.lang.Object[r1]
            java.lang.String r3 = "registerReq #####"
            com.igexin.b.a.c.b.a(r3, r0)
            com.igexin.push.d.c.d r0 = new com.igexin.push.d.c.d
            java.lang.String r3 = com.igexin.push.core.d.w
            java.lang.String r4 = com.igexin.push.core.d.x
            java.lang.String r5 = com.igexin.push.core.d.D
            java.lang.String r6 = com.igexin.push.core.d.a
            r0.<init>(r3, r4, r5, r6)
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r3 = r3.i()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "R-"
            r4.append(r5)
            java.lang.String r5 = com.igexin.push.core.d.D
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            int r0 = r3.a(r4, r0, r2)
            if (r0 >= 0) goto L75
            r2 = r1
        L75:
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r3 = "registerReq|"
            r0.append(r3)
            r0.append(r2)
            java.lang.String r2 = "|"
            r0.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.D
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
            return
        L96:
            com.igexin.push.d.c.i r0 = r7.d()
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = "loginReqBefore|"
            r3.append(r4)
            long r4 = r0.a
            r3.append(r4)
            java.lang.String r3 = r3.toString()
            java.lang.Object[] r4 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r3, r4)
            com.igexin.push.core.c r3 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r3 = r3.i()
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r5 = "S-"
            r4.append(r5)
            long r5 = com.igexin.push.core.d.t
            java.lang.String r5 = java.lang.String.valueOf(r5)
            r4.append(r5)
            java.lang.String r4 = r4.toString()
            int r0 = r3.a(r4, r0, r2)
            if (r0 >= 0) goto Ld8
            r2 = r1
        Ld8:
            if (r2 == 0) goto Lf2
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "LoginInteractor|loginReq|"
            r0.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.u
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r0, r1)
        Lf2:
            return
    }

    public com.igexin.push.d.c.i d() {
            r3 = this;
            com.igexin.push.d.c.i r0 = new com.igexin.push.d.c.i
            r0.<init>()
            long r1 = com.igexin.push.core.d.t
            r0.a = r1
            r1 = 0
            r0.b = r1
            r1 = 65280(0xff00, float:9.1477E-41)
            r0.c = r1
            java.lang.String r1 = com.igexin.push.core.d.a
            r0.d = r1
            java.util.ArrayList r1 = new java.util.ArrayList     // Catch: java.lang.Throwable -> L25
            r1.<init>()     // Catch: java.lang.Throwable -> L25
            r3.a(r1)     // Catch: java.lang.Throwable -> L25
            boolean r2 = r1.isEmpty()     // Catch: java.lang.Throwable -> L25
            if (r2 != 0) goto L25
            r0.e = r1     // Catch: java.lang.Throwable -> L25
        L25:
            return r0
    }
}
