package com.igexin.push.d.c;

public class l extends com.igexin.push.d.c.c {
    public boolean a;
    public boolean b;
    public java.lang.String c;
    public java.lang.String d;
    public long e;

    public l() {
            r1 = this;
            r1.<init>()
            r0 = 37
            r1.i = r0
            return
    }

    @Override
    public void a(byte[] r6) {
            r5 = this;
            r0 = 0
            r1 = r6[r0]
            r2 = r1 & 64
            r3 = 1
            if (r2 == 0) goto La
            r2 = r3
            goto Lb
        La:
            r2 = r0
        Lb:
            r5.a = r2
            r2 = r1 & 128(0x80, float:1.8E-43)
            if (r2 == 0) goto L12
            r0 = r3
        L12:
            r5.b = r0
            if (r0 == 0) goto L2d
            java.lang.String r0 = r5.a(r1)
            r5.c = r0
            int r0 = com.igexin.b.a.b.f.c(r6, r3)
            int r1 = r0 + 2
            int r3 = r3 + r1
            java.lang.String r1 = new java.lang.String     // Catch: java.lang.Exception -> L2d
            r2 = 3
            java.lang.String r4 = r5.c     // Catch: java.lang.Exception -> L2d
            r1.<init>(r6, r2, r0, r4)     // Catch: java.lang.Exception -> L2d
            r5.d = r1     // Catch: java.lang.Exception -> L2d
        L2d:
            int r0 = r6.length
            if (r0 <= r3) goto L36
            long r0 = com.igexin.b.a.b.f.e(r6, r3)
            r5.e = r0
        L36:
            return
    }

    @Override
    public byte[] c() {
            r6 = this;
            boolean r0 = r6.a
            r1 = 0
            if (r0 == 0) goto L9
            r0 = 64
            byte r0 = (byte) r0
            goto La
        L9:
            r0 = r1
        La:
            boolean r2 = r6.b
            r3 = 0
            if (r2 == 0) goto L28
            r0 = r0 | 128(0x80, float:1.8E-43)
            byte r0 = (byte) r0
            r2 = 3
            java.lang.String r4 = r6.d     // Catch: java.lang.Exception -> L1e
            java.lang.String r5 = r6.c     // Catch: java.lang.Exception -> L1e
            byte[] r3 = r4.getBytes(r5)     // Catch: java.lang.Exception -> L1e
            int r4 = r3.length     // Catch: java.lang.Exception -> L1e
            int r2 = r2 + r4
            goto L1f
        L1e:
            r4 = r1
        L1f:
            java.lang.String r5 = r6.c
            int r5 = r6.a(r5)
            r0 = r0 | r5
            byte r0 = (byte) r0
            goto L2a
        L28:
            r2 = 1
            r4 = r1
        L2a:
            int r2 = r2 + 8
            byte[] r2 = new byte[r2]
            int r0 = com.igexin.b.a.b.f.c(r0, r2, r1)
            boolean r5 = r6.b
            if (r5 == 0) goto L41
            int r0 = com.igexin.b.a.b.f.b(r4, r2, r0)
            if (r3 == 0) goto L41
            int r1 = com.igexin.b.a.b.f.a(r3, r1, r2, r0, r4)
            int r0 = r0 + r1
        L41:
            long r3 = r6.e
            com.igexin.b.a.b.f.a(r3, r2, r0)
            return r2
    }
}
