package com.tkay.basead.f.a;

public final class a {
    private static com.tkay.basead.f.a.a a;
    private android.content.Context b;


    private a(android.content.Context r1) {
            r0 = this;
            r0.<init>()
            android.content.Context r1 = r1.getApplicationContext()
            r0.b = r1
            return
    }

    public static com.tkay.basead.f.a.a a(android.content.Context r1) {
            com.tkay.basead.f.a.a r0 = com.tkay.basead.f.a.a.a
            if (r0 != 0) goto Lb
            com.tkay.basead.f.a.a r0 = new com.tkay.basead.f.a.a
            r0.<init>(r1)
            com.tkay.basead.f.a.a.a = r0
        Lb:
            com.tkay.basead.f.a.a r1 = com.tkay.basead.f.a.a.a
            return r1
    }

    private static boolean a(com.tkay.core.common.f.r r3) {
            com.tkay.core.common.b.m r0 = com.tkay.core.common.b.m.a()
            java.util.List r0 = r0.j()
            if (r0 == 0) goto L26
            java.util.Iterator r0 = r0.iterator()
        Le:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L26
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            java.lang.String r2 = r3.B()
            boolean r1 = android.text.TextUtils.equals(r2, r1)
            if (r1 == 0) goto Le
            r3 = 1
            return r3
        L26:
            r3 = 0
            return r3
    }

    public final com.tkay.core.common.f.r a(java.lang.String r2, java.lang.String r3) {
            r1 = this;
            android.content.Context r0 = r1.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r2 = r0.a(r2)
            if (r2 != 0) goto Le
            r2 = 0
            return r2
        Le:
            com.tkay.core.common.f.r r2 = r2.e(r3)
            return r2
    }

    public final void a(java.lang.String r9) {
            r8 = this;
            android.content.Context r0 = r8.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r0 = r0.a(r9)
            if (r0 != 0) goto Ld
            return
        Ld:
            java.util.List r1 = r0.F()
            if (r1 != 0) goto L14
            return
        L14:
            com.tkay.core.common.f.t r0 = r0.E()
            if (r0 != 0) goto L1b
            return
        L1b:
            com.tkay.basead.a.f.a()
            if (r1 == 0) goto L3c
            int r2 = r1.size()
            r3 = 0
        L25:
            if (r3 >= r2) goto L3c
            com.tkay.core.common.f.i r4 = new com.tkay.core.common.f.i
            r4.<init>()
            r4.m = r0
            java.lang.Object r5 = r1.get(r3)
            com.tkay.core.common.f.h r5 = (com.tkay.core.common.f.h) r5
            r6 = 0
            r7 = 1
            com.tkay.basead.a.f.a(r9, r7, r5, r4, r6)
            int r3 = r3 + 1
            goto L25
        L3c:
            return
    }

    public final void a(java.lang.String r2, com.tkay.core.common.f.r r3, com.tkay.core.common.f.i r4, com.tkay.basead.a.b.b.b r5) {
            r1 = this;
            boolean r0 = a(r3)
            if (r0 == 0) goto L12
            java.lang.String r2 = "20006"
            java.lang.String r3 = "The cross-promotion offer was filtered for exclude offers."
            com.tkay.basead.c.e r2 = com.tkay.basead.c.f.a(r2, r3)
            r5.a(r2)
            return
        L12:
            android.content.Context r0 = r1.b
            com.tkay.basead.f.a.b r0 = com.tkay.basead.f.a.b.a(r0)
            boolean r0 = r0.b(r3)
            if (r0 == 0) goto L2a
            java.lang.String r2 = "20003"
            java.lang.String r3 = "Ad is out of cap!"
            com.tkay.basead.c.e r2 = com.tkay.basead.c.f.a(r2, r3)
            r5.a(r2)
            return
        L2a:
            android.content.Context r0 = r1.b
            com.tkay.basead.f.a.b r0 = com.tkay.basead.f.a.b.a(r0)
            boolean r0 = r0.c(r3)
            if (r0 == 0) goto L42
            java.lang.String r2 = "20004"
            java.lang.String r3 = "Ad is in pacing!"
            com.tkay.basead.c.e r2 = com.tkay.basead.c.f.a(r2, r3)
            r5.a(r2)
            return
        L42:
            com.tkay.basead.a.f.a()
            com.tkay.basead.a.f.a(r2, r3, r4, r5)
            return
    }

    public final boolean a(com.tkay.core.common.f.r r3, com.tkay.core.common.f.i r4, boolean r5) {
            r2 = this;
            android.content.Context r0 = r2.b
            r1 = 0
            if (r0 == 0) goto L3c
            if (r3 != 0) goto L8
            goto L3c
        L8:
            boolean r0 = a(r3)
            if (r0 == 0) goto Lf
            return r1
        Lf:
            if (r5 == 0) goto L19
            com.tkay.basead.a.f.a()
            boolean r3 = com.tkay.basead.a.f.a(r3, r4)
            return r3
        L19:
            android.content.Context r5 = r2.b
            com.tkay.basead.f.a.b r5 = com.tkay.basead.f.a.b.a(r5)
            boolean r5 = r5.b(r3)
            if (r5 != 0) goto L3c
            android.content.Context r5 = r2.b
            com.tkay.basead.f.a.b r5 = com.tkay.basead.f.a.b.a(r5)
            boolean r5 = r5.c(r3)
            if (r5 != 0) goto L3c
            com.tkay.basead.a.f.a()
            boolean r3 = com.tkay.basead.a.f.a(r3, r4)
            if (r3 == 0) goto L3c
            r3 = 1
            return r3
        L3c:
            return r1
    }

    public final java.lang.String b(java.lang.String r8) {
            r7 = this;
            android.content.Context r0 = r7.b
            com.tkay.core.c.e r0 = com.tkay.core.c.e.a(r0)
            com.tkay.core.c.d r8 = r0.a(r8)
            java.lang.String r0 = ""
            if (r8 != 0) goto Lf
            return r0
        Lf:
            java.util.List r1 = r8.F()
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            if (r1 == 0) goto L6d
            int r3 = r1.size()
            if (r3 != 0) goto L21
            goto L6d
        L21:
            int r3 = r1.size()
            int r3 = r3 + (-1)
        L27:
            if (r3 < 0) goto L54
            java.lang.Object r4 = r1.get(r3)
            com.tkay.core.common.f.r r4 = (com.tkay.core.common.f.r) r4
            com.tkay.basead.a.f.a()
            int r5 = r8.Y()
            com.tkay.core.common.f.t r6 = r8.E()
            boolean r5 = com.tkay.basead.a.f.a(r4, r5, r6)
            if (r5 != 0) goto L44
            r1.remove(r3)
            goto L51
        L44:
            android.content.Context r5 = r7.b
            com.tkay.basead.f.a.b r5 = com.tkay.basead.f.a.b.a(r5)
            com.tkay.basead.c.c r4 = r5.d(r4)
            r2.add(r4)
        L51:
            int r3 = r3 + (-1)
            goto L27
        L54:
            int r8 = r2.size()
            if (r8 != 0) goto L5b
            return r0
        L5b:
            com.tkay.basead.f.a.a$1 r8 = new com.tkay.basead.f.a.a$1
            r8.<init>(r7)
            java.util.Collections.sort(r2, r8)
            r8 = 0
            java.lang.Object r8 = r2.get(r8)
            com.tkay.basead.c.c r8 = (com.tkay.basead.c.c) r8
            java.lang.String r8 = r8.a
            return r8
        L6d:
            return r0
    }
}
