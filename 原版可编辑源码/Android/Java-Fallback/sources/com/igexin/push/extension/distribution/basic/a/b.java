package com.igexin.push.extension.distribution.basic.a;

class b implements com.igexin.push.extension.distribution.basic.f.e {
    final com.igexin.push.core.bean.BaseAction a;
    final java.lang.String b;
    final java.lang.String c;
    final java.lang.String d;
    final int e;
    final com.igexin.push.extension.distribution.basic.a.a f;

    b(com.igexin.push.extension.distribution.basic.a.a r1, com.igexin.push.core.bean.BaseAction r2, java.lang.String r3, java.lang.String r4, java.lang.String r5, int r6) {
            r0 = this;
            r0.f = r1
            r0.a = r2
            r0.b = r3
            r0.c = r4
            r0.d = r5
            r0.e = r6
            r0.<init>()
            return
    }

    @Override
    public void a(com.igexin.push.core.bean.BaseAction r4) {
            r3 = this;
            int r0 = r3.e
            r1 = 1
            r2 = 2
            if (r0 != r2) goto Le
            com.igexin.push.core.bean.BaseAction r0 = r3.a
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            r0.d(r1)
            goto L19
        Le:
            r2 = 8
            if (r0 != r2) goto L19
            com.igexin.push.core.bean.BaseAction r0 = r3.a
            com.igexin.push.extension.distribution.basic.b.a r0 = (com.igexin.push.extension.distribution.basic.b.a) r0
            r0.c(r1)
        L19:
            com.igexin.push.extension.distribution.basic.b.a r4 = (com.igexin.push.extension.distribution.basic.b.a) r4
            boolean r0 = r4.s()
            if (r0 == 0) goto L3c
            boolean r4 = r4.k()
            if (r4 == 0) goto L3c
            java.lang.String r4 = r3.b
            int r4 = com.igexin.push.core.d.a(r4, r1)
            if (r4 != 0) goto L3c
            com.igexin.push.core.a.e r4 = com.igexin.push.core.a.e.a()
            java.lang.String r0 = r3.b
            java.lang.String r1 = r3.c
            java.lang.String r2 = "1"
            r4.a(r0, r1, r2)
        L3c:
            return
    }

    @Override
    public void a(java.lang.Exception r10) {
            r9 = this;
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            int r10 = r10.t()
            r0 = 3
            r1 = 1
            if (r10 < r0) goto L13
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            r10.d(r1)
        L13:
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            int r10 = r10.l()
            if (r10 < r0) goto L24
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            r10.c(r1)
        L24:
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            boolean r10 = r10.s()
            if (r10 == 0) goto L4e
            com.igexin.push.core.bean.BaseAction r10 = r9.a
            com.igexin.push.extension.distribution.basic.b.a r10 = (com.igexin.push.extension.distribution.basic.b.a) r10
            boolean r10 = r10.k()
            if (r10 == 0) goto L4e
            java.lang.String r10 = r9.b
            int r10 = com.igexin.push.core.d.a(r10, r1)
            if (r10 != 0) goto L5d
            com.igexin.push.core.a.e r10 = com.igexin.push.core.a.e.a()
            java.lang.String r0 = r9.b
            java.lang.String r1 = r9.c
            java.lang.String r2 = "1"
            r10.a(r0, r1, r2)
            goto L5d
        L4e:
            com.igexin.push.extension.distribution.basic.a.a r3 = r9.f
            java.lang.String r4 = r9.d
            java.lang.String r5 = r9.b
            java.lang.String r6 = r9.c
            com.igexin.push.core.bean.BaseAction r7 = r9.a
            int r8 = r9.e
            r3.a(r4, r5, r6, r7, r8)
        L5d:
            return
    }
}
