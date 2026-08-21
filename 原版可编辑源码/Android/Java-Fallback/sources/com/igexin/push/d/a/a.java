package com.igexin.push.d.a;

public class a extends com.igexin.b.a.b.b {
    public a(java.lang.String r2, com.igexin.b.a.b.b r3) {
            r1 = this;
            r0 = 1
            r1.<init>(r2, r0)
            r1.a(r3)
            return
    }

    private boolean a(com.igexin.push.d.c.a r4, com.igexin.push.d.c.c r5) {
            r3 = this;
            java.lang.String r0 = "action"
            byte r4 = r4.b
            r1 = 0
            r2 = 26
            if (r4 == r2) goto La
            return r1
        La:
            com.igexin.push.d.c.m r5 = (com.igexin.push.d.c.m) r5
            boolean r4 = r5.b()
            if (r4 == 0) goto L50
            java.lang.Object r4 = r5.e
            if (r4 == 0) goto L50
            org.json.JSONObject r4 = new org.json.JSONObject     // Catch: java.lang.Exception -> L35
            java.lang.Object r5 = r5.e     // Catch: java.lang.Exception -> L35
            java.lang.String r5 = (java.lang.String) r5     // Catch: java.lang.Exception -> L35
            r4.<init>(r5)     // Catch: java.lang.Exception -> L35
            boolean r5 = r4.has(r0)     // Catch: java.lang.Exception -> L35
            if (r5 == 0) goto L50
            java.lang.String r4 = r4.getString(r0)     // Catch: java.lang.Exception -> L35
            if (r4 == 0) goto L50
            java.lang.String r5 = "redirect_server"
            boolean r4 = r4.equals(r5)     // Catch: java.lang.Exception -> L35
            if (r4 == 0) goto L50
            r4 = 1
            return r4
        L35:
            r4 = move-exception
            java.lang.StringBuilder r5 = new java.lang.StringBuilder
            r5.<init>()
            java.lang.String r0 = "CommandFilter|"
            r5.append(r0)
            java.lang.String r4 = r4.toString()
            r5.append(r4)
            java.lang.String r4 = r5.toString()
            java.lang.Object[] r5 = new java.lang.Object[r1]
            com.igexin.b.a.c.b.a(r4, r5)
        L50:
            return r1
    }

    @Override
    public java.lang.Object a(com.igexin.b.a.b.e r3, com.igexin.b.a.b.d r4, java.lang.Object r5) {
            r2 = this;
            boolean r3 = r5 instanceof com.igexin.push.d.c.c
            if (r3 == 0) goto L20
            com.igexin.push.d.c.c r5 = (com.igexin.push.d.c.c) r5
            com.igexin.push.d.c.a r3 = new com.igexin.push.d.c.a
            r3.<init>()
            int r4 = r5.i
            byte r4 = (byte) r4
            r3.b = r4
            byte[] r4 = r5.c()
            r3.a(r4)
            byte r4 = r5.j
            r3.c = r4
            byte r4 = r5.k
            r3.d = r4
            return r3
        L20:
            boolean r3 = r5 instanceof com.igexin.push.d.c.c[]
            if (r3 == 0) goto L4e
            com.igexin.push.d.c.c[] r5 = (com.igexin.push.d.c.c[]) r5
            com.igexin.push.d.c.c[] r5 = (com.igexin.push.d.c.c[]) r5
            int r3 = r5.length
            com.igexin.push.d.c.a[] r3 = new com.igexin.push.d.c.a[r3]
            r4 = 0
        L2c:
            int r0 = r5.length
            if (r4 >= r0) goto L4d
            com.igexin.push.d.c.a r0 = new com.igexin.push.d.c.a
            r0.<init>()
            r3[r4] = r0
            r0 = r3[r4]
            r1 = r5[r4]
            int r1 = r1.i
            byte r1 = (byte) r1
            r0.b = r1
            r0 = r3[r4]
            r1 = r5[r4]
            byte[] r1 = r1.c()
            r0.a(r1)
            int r4 = r4 + 1
            goto L2c
        L4d:
            return r3
        L4e:
            r3 = 0
            return r3
    }

    public com.igexin.b.a.d.a.e b(com.igexin.b.a.b.e r4, com.igexin.b.a.b.d r5, java.lang.Object r6) {
            r3 = this;
            r4 = 0
            if (r6 != 0) goto L4
            return r4
        L4:
            boolean r5 = r6 instanceof com.igexin.push.d.c.f
            if (r5 == 0) goto Lb
            com.igexin.b.a.d.a.e r6 = (com.igexin.b.a.d.a.e) r6
            return r6
        Lb:
            com.igexin.push.d.c.a r6 = (com.igexin.push.d.c.a) r6
            byte r5 = r6.b
            r0 = 5
            if (r5 == r0) goto L46
            r0 = 9
            if (r5 == r0) goto L40
            r0 = 20
            if (r5 == r0) goto L3a
            r0 = 26
            if (r5 == r0) goto L34
            r0 = 37
            if (r5 == r0) goto L2e
            r0 = 97
            if (r5 == r0) goto L28
            r5 = r4
            goto L4b
        L28:
            com.igexin.push.d.c.h r5 = new com.igexin.push.d.c.h
            r5.<init>()
            goto L4b
        L2e:
            com.igexin.push.d.c.l r5 = new com.igexin.push.d.c.l
            r5.<init>()
            goto L4b
        L34:
            com.igexin.push.d.c.m r5 = new com.igexin.push.d.c.m
            r5.<init>()
            goto L4b
        L3a:
            com.igexin.push.d.c.p r5 = new com.igexin.push.d.c.p
            r5.<init>()
            goto L4b
        L40:
            com.igexin.push.d.c.o r5 = new com.igexin.push.d.c.o
            r5.<init>()
            goto L4b
        L46:
            com.igexin.push.d.c.k r5 = new com.igexin.push.d.c.k
            r5.<init>()
        L4b:
            int r0 = r6.f
            r1 = 1
            r2 = 7
            if (r0 == r1) goto L55
            int r0 = r6.f
            if (r0 != r2) goto L57
        L55:
            if (r5 != 0) goto L58
        L57:
            return r4
        L58:
            byte[] r0 = r6.e
            r5.a(r0)
            int r0 = r6.f
            if (r0 != r2) goto L6f
            byte r0 = r6.g
            r1 = 32
            if (r0 != r1) goto L6e
            boolean r6 = r3.a(r6, r5)
            if (r6 != 0) goto L6e
            return r4
        L6e:
            return r5
        L6f:
            boolean r6 = r3.a(r6, r5)
            if (r6 == 0) goto L76
            r4 = r5
        L76:
            return r4
    }

    @Override
    public java.lang.Object c(com.igexin.b.a.b.e r1, com.igexin.b.a.b.d r2, java.lang.Object r3) {
            r0 = this;
            com.igexin.b.a.d.a.e r1 = r0.b(r1, r2, r3)
            return r1
    }
}
