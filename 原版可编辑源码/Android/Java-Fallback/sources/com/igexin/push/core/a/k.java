package com.igexin.push.core.a;

public class k extends com.igexin.push.core.a.a {
    private static final java.lang.String a = null;

    static {
            java.lang.Class<com.igexin.push.core.a.k> r0 = com.igexin.push.core.a.k.class
            java.lang.String r0 = r0.getName()
            com.igexin.push.core.a.k.a = r0
            return
    }

    public k() {
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
    public boolean a(java.lang.Object r6) {
            r5 = this;
            boolean r0 = r6 instanceof com.igexin.push.d.c.h
            r1 = 1
            if (r0 == 0) goto L4d
            com.igexin.push.d.c.h r6 = (com.igexin.push.d.c.h) r6
            byte r0 = r6.a
            r2 = 0
            if (r0 != 0) goto Le
            r0 = r1
            goto Lf
        Le:
            r0 = r2
        Lf:
            java.lang.StringBuilder r3 = new java.lang.StringBuilder
            r3.<init>()
            java.lang.String r4 = com.igexin.push.core.a.k.a
            r3.append(r4)
            java.lang.String r4 = "|KeyNego result = "
            r3.append(r4)
            byte r6 = r6.a
            r3.append(r6)
            java.lang.String r6 = r3.toString()
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r6, r3)
            if (r0 == 0) goto L4d
            java.lang.StringBuilder r6 = new java.lang.StringBuilder
            r6.<init>()
            java.lang.String r0 = com.igexin.push.core.a.k.a
            r6.append(r0)
            java.lang.String r0 = "|KeyNego success and login"
            r6.append(r0)
            java.lang.String r6 = r6.toString()
            java.lang.Object[] r0 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r6, r0)
            com.igexin.push.core.m r6 = com.igexin.push.core.m.a()
            r6.c()
        L4d:
            return r1
    }
}
