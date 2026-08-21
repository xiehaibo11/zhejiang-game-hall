package com.loc;

public final class cy extends com.loc.cv {
    private static com.loc.cy b;

    static {
            com.loc.cy r0 = new com.loc.cy
            r0.<init>()
            com.loc.cy.b = r0
            return
    }

    private cy() {
            r1 = this;
            r0 = 5120(0x1400, float:7.175E-42)
            r1.<init>(r0)
            return
    }

    private static java.lang.String a(java.lang.String r0) {
            if (r0 != 0) goto L4
            java.lang.String r0 = ""
        L4:
            return r0
    }

    public static com.loc.cy b() {
            com.loc.cy r0 = com.loc.cy.b
            return r0
    }

    public final byte[] a(byte[] r9, byte[] r10, java.util.List<? extends com.loc.dc> r11) {
            r8 = this;
            r0 = 0
            if (r11 != 0) goto L4
            return r0
        L4:
            int r1 = r11.size()     // Catch: java.lang.Throwable -> L5b
            if (r1 <= 0) goto L5f
            if (r9 == 0) goto L5f
            r8.a()     // Catch: java.lang.Throwable -> L5b
            com.loc.cx r2 = r8.a     // Catch: java.lang.Throwable -> L5b
            int r9 = com.loc.df.a(r2, r9)     // Catch: java.lang.Throwable -> L5b
            int[] r2 = new int[r1]     // Catch: java.lang.Throwable -> L5b
            r3 = 0
            r4 = 0
        L19:
            if (r4 >= r1) goto L3b
            java.lang.Object r5 = r11.get(r4)     // Catch: java.lang.Throwable -> L5b
            com.loc.dc r5 = (com.loc.dc) r5     // Catch: java.lang.Throwable -> L5b
            com.loc.cx r6 = r8.a     // Catch: java.lang.Throwable -> L5b
            byte[] r7 = r5.b()     // Catch: java.lang.Throwable -> L5b
            int r6 = com.loc.dk.a(r6, r7)     // Catch: java.lang.Throwable -> L5b
            com.loc.cx r7 = r8.a     // Catch: java.lang.Throwable -> L5b
            int r5 = r5.a()     // Catch: java.lang.Throwable -> L5b
            byte r5 = (byte) r5     // Catch: java.lang.Throwable -> L5b
            int r5 = com.loc.dk.a(r7, r5, r6)     // Catch: java.lang.Throwable -> L5b
            r2[r4] = r5     // Catch: java.lang.Throwable -> L5b
            int r4 = r4 + 1
            goto L19
        L3b:
            com.loc.cx r11 = r8.a     // Catch: java.lang.Throwable -> L5b
            int r11 = com.loc.df.a(r11, r2)     // Catch: java.lang.Throwable -> L5b
            if (r10 == 0) goto L49
            com.loc.cx r1 = r8.a     // Catch: java.lang.Throwable -> L5b
            int r3 = com.loc.df.b(r1, r10)     // Catch: java.lang.Throwable -> L5b
        L49:
            com.loc.cx r10 = r8.a     // Catch: java.lang.Throwable -> L5b
            int r9 = com.loc.df.a(r10, r9, r3, r11)     // Catch: java.lang.Throwable -> L5b
            com.loc.cx r10 = r8.a     // Catch: java.lang.Throwable -> L5b
            r10.c(r9)     // Catch: java.lang.Throwable -> L5b
            com.loc.cx r9 = r8.a     // Catch: java.lang.Throwable -> L5b
            byte[] r0 = r9.c()     // Catch: java.lang.Throwable -> L5b
            goto L5f
        L5b:
            r9 = move-exception
            com.loc.ej.a(r9)
        L5f:
            return r0
    }

    public final byte[] c() {
            r18 = this;
            r1 = r18
            super.a()
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.f()     // Catch: java.lang.Exception -> L94
            int r5 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.c()     // Catch: java.lang.Exception -> L94
            int r6 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.i()     // Catch: java.lang.Exception -> L94
            int r8 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.h()     // Catch: java.lang.Exception -> L94
            int r9 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.g()     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L94
            int r10 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.j()     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = a(r2)     // Catch: java.lang.Exception -> L94
            int r11 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            java.lang.String r0 = com.loc.eh.n()     // Catch: java.lang.Exception -> L94
            long r12 = com.loc.eg.a(r0)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.l()     // Catch: java.lang.Exception -> L94
            int r14 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.k()     // Catch: java.lang.Exception -> L94
            int r15 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.d()     // Catch: java.lang.Exception -> L94
            int r16 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            java.lang.String r2 = com.loc.eh.e()     // Catch: java.lang.Exception -> L94
            int r17 = r0.a(r2)     // Catch: java.lang.Exception -> L94
            com.loc.cx r3 = r1.a     // Catch: java.lang.Exception -> L94
            byte r4 = com.loc.eh.a()     // Catch: java.lang.Exception -> L94
            int r0 = com.loc.eh.m()     // Catch: java.lang.Exception -> L94
            byte r7 = (byte) r0     // Catch: java.lang.Exception -> L94
            int r0 = com.loc.ei.a(r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r14, r15, r16, r17)     // Catch: java.lang.Exception -> L94
            com.loc.cx r2 = r1.a     // Catch: java.lang.Exception -> L94
            r2.c(r0)     // Catch: java.lang.Exception -> L94
            com.loc.cx r0 = r1.a     // Catch: java.lang.Exception -> L94
            byte[] r0 = r0.c()     // Catch: java.lang.Exception -> L94
            goto L99
        L94:
            r0 = move-exception
            com.loc.ej.a(r0)
            r0 = 0
        L99:
            return r0
    }
}
