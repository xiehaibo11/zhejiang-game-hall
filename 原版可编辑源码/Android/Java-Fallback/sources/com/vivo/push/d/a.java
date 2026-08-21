package com.vivo.push.d;

final class a extends com.vivo.push.l {
    a(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    @Override
    protected final void a(com.vivo.push.o r5) {
            r4 = this;
            r0 = r5
            com.vivo.push.b.c r0 = (com.vivo.push.b.c) r0
            android.content.Context r1 = r4.a
            com.vivo.push.model.b r1 = com.vivo.push.util.t.a(r1)
            r2 = 0
            if (r1 != 0) goto L1c
            com.vivo.push.e r5 = com.vivo.push.e.a()
            java.lang.String r0 = r0.h()
            r1 = 1005(0x3ed, float:1.408E-42)
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r5.a(r0, r1, r2)
            return
        L1c:
            java.lang.String r3 = r1.a()
            boolean r1 = r1.c()
            if (r1 == 0) goto L3b
            com.vivo.push.e r5 = com.vivo.push.e.a()
            java.lang.String r0 = r0.h()
            r1 = 1004(0x3ec, float:1.407E-42)
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r5.a(r0, r1, r2)
            com.vivo.push.b.e r5 = new com.vivo.push.b.e
            r5.<init>()
            goto L4f
        L3b:
            int r1 = com.vivo.push.util.s.a(r0)
            if (r1 == 0) goto L4f
            com.vivo.push.e r5 = com.vivo.push.e.a()
            java.lang.String r0 = r0.h()
            java.lang.Object[] r2 = new java.lang.Object[r2]
            r5.a(r0, r1, r2)
            return
        L4f:
            android.content.Context r0 = r4.a
            com.vivo.push.a.a.a(r0, r3, r5)
            return
    }
}
