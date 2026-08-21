package com.vivo.push.d;

final class h extends com.vivo.push.d.z {
    h(com.vivo.push.o r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    static android.content.Context a(com.vivo.push.d.h r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    static android.content.Context b(com.vivo.push.d.h r0) {
            android.content.Context r0 = r0.a
            return r0
    }

    @Override
    protected final void a(com.vivo.push.o r14) {
            r13 = this;
            com.vivo.push.b.t r14 = (com.vivo.push.b.t) r14
            java.util.ArrayList r0 = r14.d()
            java.util.List r1 = r14.e()
            java.util.ArrayList r5 = new java.util.ArrayList
            r5.<init>()
            java.util.ArrayList r9 = new java.util.ArrayList
            r9.<init>()
            java.util.ArrayList r6 = new java.util.ArrayList
            r6.<init>()
            java.util.ArrayList r10 = new java.util.ArrayList
            r10.<init>()
            int r8 = r14.h()
            java.lang.String r11 = r14.g()
            java.lang.String r2 = ""
            java.lang.String r3 = "tag/"
            java.lang.String r4 = "ali/"
            if (r0 == 0) goto L5a
            java.util.Iterator r0 = r0.iterator()
        L32:
            boolean r7 = r0.hasNext()
            if (r7 == 0) goto L5a
            java.lang.Object r7 = r0.next()
            java.lang.String r7 = (java.lang.String) r7
            boolean r12 = r7.startsWith(r4)
            if (r12 == 0) goto L4c
            java.lang.String r7 = r7.replace(r4, r2)
            r9.add(r7)
            goto L32
        L4c:
            boolean r12 = r7.startsWith(r3)
            if (r12 == 0) goto L32
            java.lang.String r7 = r7.replace(r3, r2)
            r5.add(r7)
            goto L32
        L5a:
            if (r1 == 0) goto L88
            java.util.Iterator r0 = r1.iterator()
        L60:
            boolean r1 = r0.hasNext()
            if (r1 == 0) goto L88
            java.lang.Object r1 = r0.next()
            java.lang.String r1 = (java.lang.String) r1
            boolean r7 = r1.startsWith(r4)
            if (r7 == 0) goto L7a
            java.lang.String r1 = r1.replace(r4, r2)
            r10.add(r1)
            goto L60
        L7a:
            boolean r7 = r1.startsWith(r3)
            if (r7 == 0) goto L60
            java.lang.String r1 = r1.replace(r3, r2)
            r6.add(r1)
            goto L60
        L88:
            int r0 = r5.size()
            if (r0 > 0) goto L94
            int r0 = r6.size()
            if (r0 <= 0) goto Lc2
        L94:
            int r0 = r5.size()
            if (r0 <= 0) goto La1
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.b(r5)
        La1:
            com.vivo.push.e r0 = com.vivo.push.e.a()
            java.lang.String r1 = r14.g()
            int r2 = r6.size()
            if (r2 <= 0) goto Lb2
            r2 = 10000(0x2710, float:1.4013E-41)
            goto Lb3
        Lb2:
            r2 = r8
        Lb3:
            r0.a(r1, r2)
            com.vivo.push.d.i r0 = new com.vivo.push.d.i
            r2 = r0
            r3 = r13
            r4 = r8
            r7 = r11
            r2.<init>(r3, r4, r5, r6, r7)
            com.vivo.push.m.b(r0)
        Lc2:
            int r0 = r9.size()
            if (r0 > 0) goto Lce
            int r0 = r10.size()
            if (r0 <= 0) goto Lf0
        Lce:
            int r0 = r9.size()
            if (r0 <= 0) goto Ldb
            com.vivo.push.e r0 = com.vivo.push.e.a()
            r0.c(r9)
        Ldb:
            com.vivo.push.e r0 = com.vivo.push.e.a()
            java.lang.String r14 = r14.g()
            r0.a(r14, r8)
            com.vivo.push.d.j r14 = new com.vivo.push.d.j
            r6 = r14
            r7 = r13
            r6.<init>(r7, r8, r9, r10, r11)
            com.vivo.push.m.b(r14)
        Lf0:
            return
    }
}
