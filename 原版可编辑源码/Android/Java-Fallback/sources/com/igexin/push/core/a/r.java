package com.igexin.push.core.a;

public class r extends com.igexin.push.core.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = com.igexin.push.config.i.a
            r0.append(r1)
            java.lang.String r1 = "_RegisterFailResultAction"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            com.igexin.push.core.a.r.a = r0
            return
    }

    public r() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public boolean a(com.igexin.b.a.d.e r1) {
            r0 = this;
            r1 = 0
            return r1
    }

    @Override
    public boolean a(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof com.igexin.push.d.c.p
            r1 = 1
            if (r0 == 0) goto L4b
            com.igexin.push.d.c.p r4 = (com.igexin.push.d.c.p) r4
            int r4 = r4.a
            if (r4 != r1) goto L4b
            java.lang.StringBuilder r4 = new java.lang.StringBuilder
            r4.<init>()
            java.lang.String r0 = com.igexin.push.core.a.r.a
            r4.append(r0)
            java.lang.String r0 = "|Register failed because of the wrong appid"
            r4.append(r0)
            java.lang.String r4 = r4.toString()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            com.igexin.b.a.c.b.a(r4, r0)
            com.igexin.b.a.c.a.f r4 = com.igexin.b.a.c.a.f.a()
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r2 = "Register failed because of the wrong appid = "
            r0.append(r2)
            java.lang.String r2 = com.igexin.push.core.d.a
            r0.append(r2)
            java.lang.String r0 = r0.toString()
            r4.a(r0)
            com.igexin.push.core.d.j = r1
            com.igexin.push.core.c r4 = com.igexin.push.core.c.a()
            com.igexin.push.e.a r4 = r4.i()
            r4.c()
        L4b:
            return r1
    }
}
