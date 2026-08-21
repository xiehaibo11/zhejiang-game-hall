package com.vivo.push.d;

final class d extends com.vivo.push.d.z {
    d(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.vivo.push.d.d r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context b(com.vivo.push.d.d r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    @Override
    protected final void a(com.vivo.push.o r7) {
            r6 = this;
            com.vivo.push.b.i r7 = (com.vivo.push.b.i) r7
            java.lang.String r0 = r7.e()
            com.vivo.push.e r1 = com.vivo.push.e.a()
            java.lang.String r2 = r7.g()
            int r3 = r7.h()
            r4 = 1
            java.lang.Object[] r4 = new java.lang.Object[r4]
            r5 = 0
            r4[r5] = r0
            r1.a(r2, r3, r4)
            java.lang.String r1 = r7.g()
            boolean r1 = android.text.TextUtils.isEmpty(r1)
            if (r1 == 0) goto L32
            boolean r1 = android.text.TextUtils.isEmpty(r0)
            if (r1 != 0) goto L32
            com.vivo.push.e r1 = com.vivo.push.e.a()
            r1.a(r0)
        L32:
            com.vivo.push.d.e r1 = new com.vivo.push.d.e
            r1.<init>(r6, r0, r7)
            com.vivo.push.m.b(r1)
            return
    }
}
