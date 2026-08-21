package com.igexin.b.a.b.a.a;

public final class l extends com.igexin.b.a.b.a.a.a {
    private com.igexin.b.a.b.a.a.a.b L;
    private byte[] M;
    private com.igexin.b.a.b.d N;
    com.igexin.b.a.b.a.a.o i;
    com.igexin.b.a.b.b j;

    public l(com.igexin.b.a.b.a.a.o r3, com.igexin.b.a.b.b r4, com.igexin.b.a.b.d r5) {
            r2 = this;
            r0 = -2035(0xfffffffffffff80d, float:NaN)
            r1 = 0
            r2.<init>(r0, r1, r4)
            r2.j = r4
            r2.i = r3
            r2.N = r5
            return
    }

    public void a(com.igexin.b.a.b.a.a.a.b r1) {
            r0 = this;
            r0.L = r1
            return
    }

    @Override
    public void b() {
            r6 = this;
            super.b()
            java.lang.Thread r0 = java.lang.Thread.currentThread()
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "GS-R|"
            r1.append(r2)
            r1.append(r0)
            java.lang.String r2 = " running"
            r1.append(r2)
            java.lang.String r1 = r1.toString()
            r2 = 0
            java.lang.Object[] r3 = new java.lang.Object[r2]
            com.igexin.b.a.c.b.a(r1, r3)
        L23:
            boolean r1 = r6.h
            if (r1 == 0) goto L69
            boolean r1 = r0.isInterrupted()
            if (r1 != 0) goto L69
            boolean r1 = r6.e
            if (r1 != 0) goto L69
            com.igexin.b.a.b.b r1 = r6.j     // Catch: java.lang.Throwable -> L40
            r3 = 0
            com.igexin.b.a.b.d r4 = r6.N     // Catch: java.lang.Throwable -> L40
            com.igexin.b.a.b.a.a.o r5 = r6.i     // Catch: java.lang.Throwable -> L40
            r1.c(r3, r4, r5)     // Catch: java.lang.Throwable -> L40
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.a     // Catch: java.lang.Throwable -> L40
            r6.f = r1     // Catch: java.lang.Throwable -> L40
            goto L23
        L40:
            r1 = move-exception
            r6.h = r2
            com.igexin.b.a.b.a.a.b r3 = r6.f
            com.igexin.b.a.b.a.a.b r4 = com.igexin.b.a.b.a.a.b.c
            if (r3 == r4) goto L23
            com.igexin.b.a.b.a.a.b r3 = com.igexin.b.a.b.a.a.b.b
            r6.f = r3
            java.lang.String r3 = r1.getMessage()
            if (r3 == 0) goto L62
            java.lang.String r3 = r1.getMessage()
            java.lang.String r4 = "read = -1, end of stream !"
            boolean r3 = r3.equals(r4)
            if (r3 == 0) goto L62
            java.lang.String r1 = "end of stream"
            goto L66
        L62:
            java.lang.String r1 = r1.toString()
        L66:
            r6.g = r1
            goto L23
        L69:
            r0 = 1
            r6.e = r0
            java.lang.Object[] r0 = new java.lang.Object[r2]
            java.lang.String r1 = "GS-R|finish ~~~~~~"
            com.igexin.b.a.c.b.a(r1, r0)
            return
    }

    @Override
    public final int b_() {
            r1 = this;
            r0 = -2035(0xfffffffffffff80d, float:NaN)
            return r0
    }

    @Override
    public void f() {
            r3 = this;
            super.f()
            r0 = 0
            java.lang.Object[] r0 = new java.lang.Object[r0]
            java.lang.String r1 = "GS-R|rt dispose"
            com.igexin.b.a.c.b.a(r1, r0)
            com.igexin.b.a.b.a.a.a.b r0 = r3.L
            if (r0 == 0) goto L2f
            com.igexin.b.a.b.a.a.b r0 = r3.f
            com.igexin.b.a.b.a.a.b r1 = com.igexin.b.a.b.a.a.b.b
            if (r0 != r1) goto L2a
            java.lang.String r0 = r3.g
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L2f
            com.igexin.b.a.b.a.a.a.b r0 = r3.L
            java.lang.Exception r1 = new java.lang.Exception
            java.lang.String r2 = r3.g
            r1.<init>(r2)
            r0.a(r1)
            goto L2f
        L2a:
            com.igexin.b.a.b.a.a.a.b r0 = r3.L
            r0.a(r3)
        L2f:
            byte[] r0 = r3.M
            r1 = 0
            if (r0 == 0) goto L36
            r3.M = r1
        L36:
            r3.L = r1
            return
    }

    public void j() {
            r1 = this;
            r0 = 0
            r1.h = r0
            com.igexin.b.a.b.a.a.b r0 = com.igexin.b.a.b.a.a.b.c
            r1.f = r0
            return
    }
}
