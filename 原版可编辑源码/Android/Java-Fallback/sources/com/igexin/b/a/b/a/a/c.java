package com.igexin.b.a.b.a.a;

public final class c extends com.igexin.b.a.b.a.a.a {
    private com.igexin.b.a.b.a.a.a.d i;
    private java.net.Socket j;

    public c(com.igexin.b.a.b.a.a.a.d r3) {
            r2 = this;
            r0 = 0
            r1 = -2037(0xfffffffffffff80b, float:NaN)
            r2.<init>(r1, r0, r0)
            r2.i = r3
            return
    }

    @Override
    public void b() {
            r7 = this;
            super.b()
            com.igexin.push.c.i r0 = com.igexin.push.c.i.a()
            com.igexin.push.c.a r0 = r0.d()
            r0.a()
            java.lang.String r0 = com.igexin.push.config.SDKUrlConfig.getCmAddress()
            r1 = 0
            java.lang.String[] r2 = com.igexin.b.a.b.f.a(r0)     // Catch: java.lang.Exception -> Lb8
            r3 = 1
            r4 = r2[r3]     // Catch: java.lang.Exception -> Lb8
            r5 = 2
            r2 = r2[r5]     // Catch: java.lang.Exception -> Lb8
            int r2 = java.lang.Integer.parseInt(r2)     // Catch: java.lang.Exception -> Lb8
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r6 = "GS-C|start connect :  "
            r5.append(r6)
            r5.append(r0)
            java.lang.String r6 = " *********"
            r5.append(r6)
            java.lang.String r5 = r5.toString()
            java.lang.Object[] r6 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r5, r6)
            com.igexin.b.a.b.a.a.a.d r5 = r7.i
            if (r5 == 0) goto L43
            r5.a(r0)
        L43:
            java.net.Socket r5 = new java.net.Socket
            r5.<init>()
            r7.j = r5
            java.net.InetSocketAddress r6 = new java.net.InetSocketAddress     // Catch: java.lang.Exception -> La4
            r6.<init>(r4, r2)     // Catch: java.lang.Exception -> La4
            r2 = 10000(0x2710, float:1.4013E-41)
            r5.connect(r6, r2)     // Catch: java.lang.Exception -> La4
            java.lang.StringBuilder r2 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La4
            r2.<init>()     // Catch: java.lang.Exception -> La4
            java.lang.String r4 = "GS-C|connected :  "
            r2.append(r4)     // Catch: java.lang.Exception -> La4
            r2.append(r0)     // Catch: java.lang.Exception -> La4
            java.lang.String r0 = " #########"
            r2.append(r0)     // Catch: java.lang.Exception -> La4
            java.lang.String r0 = r2.toString()     // Catch: java.lang.Exception -> La4
            java.lang.Object[] r2 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> La4
            com.igexin.b.a.c.b.a(r0, r2)     // Catch: java.lang.Exception -> La4
            java.lang.StringBuilder r0 = new java.lang.StringBuilder     // Catch: java.lang.Exception -> La4
            r0.<init>()     // Catch: java.lang.Exception -> La4
            java.lang.String r2 = "GS-C|local-"
            r0.append(r2)     // Catch: java.lang.Exception -> La4
            java.net.Socket r2 = r7.j     // Catch: java.lang.Exception -> La4
            java.net.InetAddress r2 = r2.getLocalAddress()     // Catch: java.lang.Exception -> La4
            r0.append(r2)     // Catch: java.lang.Exception -> La4
            java.lang.String r2 = ":"
            r0.append(r2)     // Catch: java.lang.Exception -> La4
            java.net.Socket r2 = r7.j     // Catch: java.lang.Exception -> La4
            int r2 = r2.getLocalPort()     // Catch: java.lang.Exception -> La4
            r0.append(r2)     // Catch: java.lang.Exception -> La4
            java.lang.String r0 = r0.toString()     // Catch: java.lang.Exception -> La4
            java.lang.Object[] r1 = new java.lang.Object[r1]     // Catch: java.lang.Exception -> La4
            com.igexin.b.a.c.b.a(r0, r1)     // Catch: java.lang.Exception -> La4
            com.igexin.b.a.b.a.a.b r0 = r7.f     // Catch: java.lang.Exception -> La4
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.c     // Catch: java.lang.Exception -> La4
            if (r0 == r1) goto Lb5
            com.igexin.b.a.b.a.a.b r0 = com.igexin.b.a.b.a.a.b.a     // Catch: java.lang.Exception -> La4
            r7.f = r0     // Catch: java.lang.Exception -> La4
            goto Lb5
        La4:
            r0 = move-exception
            com.igexin.b.a.b.a.a.b r1 = r7.f
            com.igexin.b.a.b.a.a.b r2 = com.igexin.b.a.b.a.a.b.c
            if (r1 == r2) goto Lb5
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.b
            r7.f = r1
            java.lang.String r0 = r0.toString()
            r7.g = r0
        Lb5:
            r7.e = r3
            return
        Lb8:
            r0 = move-exception
            java.lang.StringBuilder r2 = new java.lang.StringBuilder
            r2.<init>()
            java.lang.String r3 = "GS-C|ips invalid, "
            r2.append(r3)
            java.lang.String r3 = r0.toString()
            r2.append(r3)
            java.lang.String r2 = r2.toString()
            java.lang.Object[] r1 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r2, r1)
            throw r0
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2037(0xfffffffffffff80b, float:NaN)
            return r0
    }

    @Override
    public void f() {
            r3 = this;
            super.f()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-C|sc dispose"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.b.a.a.a.d r0 = r3.i
            if (r0 == 0) goto L45
            com.igexin.b.a.b.a.a.b r0 = r3.f
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.c
            if (r0 != r1) goto L1b
            com.igexin.b.a.b.a.a.a.d r0 = r3.i
            r0.a(r3)
            goto L45
        L1b:
            com.igexin.b.a.b.a.a.b r0 = r3.f
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.b
            if (r0 != r1) goto L36
            java.lang.String r0 = r3.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L45
            com.igexin.b.a.b.a.a.a.d r0 = r3.i
            java.lang.Exception r1 = new java.lang.Exception
            java.lang.String r2 = r3.g
            r1.<init>(r2)
            r0.a(r1)
            goto L45
        L36:
            com.igexin.b.a.b.a.a.b r0 = r3.f
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.a
            if (r0 != r1) goto L45
            java.net.Socket r0 = r3.j
            if (r0 == 0) goto L45
            com.igexin.b.a.b.a.a.a.d r1 = r3.i
            r1.a(r0)
        L45:
            r0 = 0
            r3.i = r0
            return
    }

    public void j() {
            r1 = this;
            com.igexin.b.a.b.a.a.b r0 = com.igexin.b.a.b.a.a.b.c
            r1.f = r0
            return
    }
}
