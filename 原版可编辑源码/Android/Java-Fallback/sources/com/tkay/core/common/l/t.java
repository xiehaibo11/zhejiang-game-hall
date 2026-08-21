package com.tkay.core.common.l;

public final class t {
    public t() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean a(com.tkay.core.common.f.aj r2) {
            int r0 = r2.c()
            r1 = 15
            if (r0 != r1) goto L10
            boolean r2 = r2.j()
            if (r2 != 0) goto L10
            r2 = 1
            return r2
        L10:
            r2 = 0
            return r2
    }

    public static boolean a(java.lang.String r2, com.tkay.core.common.f.aj r3) {
            r0 = 0
            if (r3 != 0) goto L4
            return r0
        L4:
            com.tkay.core.common.a r1 = com.tkay.core.common.a.a()
            com.tkay.core.common.f.a r2 = r1.a(r2, r3)
            r1 = 1
            if (r2 == 0) goto L10
            return r1
        L10:
            com.tkay.core.b.c r2 = com.tkay.core.b.c.a()
            com.tkay.core.common.f.l r2 = r2.a(r3)
            if (r2 == 0) goto L21
            boolean r2 = r2.a()
            if (r2 != 0) goto L21
            return r1
        L21:
            return r0
    }

    public static boolean a(java.util.List<com.tkay.core.common.f.aj> r4) {
            r0 = 0
            if (r4 == 0) goto L1d
            int r1 = r4.size()
            r2 = r0
        L8:
            if (r2 >= r1) goto L1d
            java.lang.Object r3 = r4.get(r2)
            com.tkay.core.common.f.aj r3 = (com.tkay.core.common.f.aj) r3
            if (r3 == 0) goto L1a
            boolean r3 = r3.Z()
            if (r3 == 0) goto L1a
            r4 = 1
            return r4
        L1a:
            int r2 = r2 + 1
            goto L8
        L1d:
            return r0
    }
}
