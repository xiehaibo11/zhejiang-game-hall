package com.igexin.push.d.c;

public class b extends com.igexin.push.d.c.c {
    public int a;
    public int b;
    public long c;
    public java.lang.String d;
    public java.lang.Object e;
    public java.lang.Object f;
    public java.lang.String g;
    public java.lang.String h;

    public b() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.g = r0
            java.lang.String r0 = "UTF-8"
            r1.h = r0
            r0 = 25
            r1.i = r0
            r0 = 20
            r1.j = r0
            return
    }

    @Override
    public void a(byte[] r7) {
            r6 = this;
            r0 = 0
            int r1 = com.igexin.b.a.b.f.c(r7, r0)
            r6.a = r1
            r1 = 2
            r2 = r7[r1]
            r3 = 192(0xc0, float:2.69E-43)
            r2 = r2 & r3
            r6.b = r2
            r1 = r7[r1]
            java.lang.String r1 = r6.a(r1)
            r6.h = r1
            r1 = 3
            long r1 = com.igexin.b.a.b.f.e(r7, r1)
            r6.c = r1
            r1 = 11
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            r2 = 12
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L2f
            java.lang.String r5 = r6.h     // Catch: java.lang.Exception -> L2f
            r4.<init>(r7, r2, r1, r5)     // Catch: java.lang.Exception -> L2f
            r6.d = r4     // Catch: java.lang.Exception -> L2f
        L2f:
            int r2 = r2 + r1
            r1 = r0
        L31:
            r4 = r7[r2]
            r4 = r4 & 127(0x7f, float:1.78E-43)
            r1 = r1 | r4
            r4 = r7[r2]
            r4 = r4 & 128(0x80, float:1.8E-43)
            if (r4 == 0) goto L41
            int r1 = r1 << 7
            int r2 = r2 + 1
            goto L31
        L41:
            int r2 = r2 + 1
            if (r1 <= 0) goto L5a
            int r4 = r6.b
            if (r4 != r3) goto L51
            byte[] r3 = new byte[r1]
            r6.e = r3
            java.lang.System.arraycopy(r7, r2, r3, r0, r1)
            goto L5a
        L51:
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L5a
            java.lang.String r4 = r6.h     // Catch: java.lang.Exception -> L5a
            r3.<init>(r7, r2, r1, r4)     // Catch: java.lang.Exception -> L5a
            r6.e = r3     // Catch: java.lang.Exception -> L5a
        L5a:
            int r2 = r2 + r1
            r1 = r0
        L5c:
            r3 = r7[r2]
            r3 = r3 & 127(0x7f, float:1.78E-43)
            r1 = r1 | r3
            r3 = r7[r2]
            r3 = r3 & 128(0x80, float:1.8E-43)
            if (r3 == 0) goto L6c
            int r1 = r1 << 7
            int r2 = r2 + 1
            goto L5c
        L6c:
            int r2 = r2 + 1
            if (r1 <= 0) goto L77
            byte[] r3 = new byte[r1]
            r6.f = r3
            java.lang.System.arraycopy(r7, r2, r3, r0, r1)
        L77:
            int r2 = r2 + r1
            int r0 = r7.length
            if (r0 <= r2) goto L8a
            int r0 = r2 + 1
            r1 = r7[r2]
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L8a
            java.lang.String r3 = r6.h     // Catch: java.lang.Exception -> L8a
            r2.<init>(r7, r0, r1, r3)     // Catch: java.lang.Exception -> L8a
            r6.g = r2     // Catch: java.lang.Exception -> L8a
        L8a:
            return
    }

    public final void b() {
            r1 = this;
            r0 = 128(0x80, float:1.8E-43)
            r1.b = r0
            return
    }

    @Override
    public byte[] c() {
            r13 = this;
            r0 = 0
            java.lang.String r1 = r13.d     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = r13.h     // Catch: java.lang.Exception -> Lab
            byte[] r1 = r1.getBytes(r2)     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = ""
            java.lang.Object r3 = r13.e     // Catch: java.lang.Exception -> Lab
            boolean r2 = r2.equals(r3)     // Catch: java.lang.Exception -> Lab
            if (r2 != 0) goto L2b
            int r2 = r13.b     // Catch: java.lang.Exception -> Lab
            r3 = 192(0xc0, float:2.69E-43)
            if (r2 != r3) goto L20
            java.lang.Object r2 = r13.e     // Catch: java.lang.Exception -> Lab
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> Lab
            byte[] r2 = (byte[]) r2     // Catch: java.lang.Exception -> Lab
            goto L2c
        L20:
            java.lang.Object r2 = r13.e     // Catch: java.lang.Exception -> Lab
            java.lang.String r2 = (java.lang.String) r2     // Catch: java.lang.Exception -> Lab
            java.lang.String r3 = r13.h     // Catch: java.lang.Exception -> Lab
            byte[] r2 = r2.getBytes(r3)     // Catch: java.lang.Exception -> Lab
            goto L2c
        L2b:
            r2 = r0
        L2c:
            java.lang.Object r3 = r13.f     // Catch: java.lang.Exception -> Lab
            if (r3 == 0) goto L37
            java.lang.Object r3 = r13.f     // Catch: java.lang.Exception -> Lab
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> Lab
            byte[] r3 = (byte[]) r3     // Catch: java.lang.Exception -> Lab
            goto L38
        L37:
            r3 = r0
        L38:
            java.lang.String r4 = r13.g     // Catch: java.lang.Exception -> Lab
            java.lang.String r5 = r13.h     // Catch: java.lang.Exception -> Lab
            byte[] r4 = r4.getBytes(r5)     // Catch: java.lang.Exception -> Lab
            r5 = 0
            if (r2 != 0) goto L45
            r6 = r5
            goto L46
        L45:
            int r6 = r2.length     // Catch: java.lang.Exception -> Lab
        L46:
            if (r3 != 0) goto L4a
            r7 = r5
            goto L4b
        L4a:
            int r7 = r3.length     // Catch: java.lang.Exception -> Lab
        L4b:
            byte[] r8 = com.igexin.b.a.b.f.a(r6)     // Catch: java.lang.Exception -> Lab
            byte[] r9 = com.igexin.b.a.b.f.a(r7)     // Catch: java.lang.Exception -> Lab
            int r10 = r1.length     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + 13
            int r11 = r8.length     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            int r10 = r10 + r6
            int r11 = r9.length     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            int r10 = r10 + r7
            int r11 = r4.length     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            byte[] r0 = new byte[r10]     // Catch: java.lang.Exception -> Lab
            int r10 = r13.a     // Catch: java.lang.Exception -> Lab
            int r10 = com.igexin.b.a.b.f.b(r10, r0, r5)     // Catch: java.lang.Exception -> Lab
            int r11 = r13.b     // Catch: java.lang.Exception -> Lab
            java.lang.String r12 = r13.h     // Catch: java.lang.Exception -> Lab
            int r12 = r13.a(r12)     // Catch: java.lang.Exception -> Lab
            r11 = r11 | r12
            int r11 = com.igexin.b.a.b.f.c(r11, r0, r10)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            long r11 = r13.c     // Catch: java.lang.Exception -> Lab
            int r11 = com.igexin.b.a.b.f.a(r11, r0, r10)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            int r11 = r1.length     // Catch: java.lang.Exception -> Lab
            int r11 = com.igexin.b.a.b.f.c(r11, r0, r10)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r11
            int r11 = r1.length     // Catch: java.lang.Exception -> Lab
            int r1 = com.igexin.b.a.b.f.a(r1, r5, r0, r10, r11)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
            int r1 = r8.length     // Catch: java.lang.Exception -> Lab
            int r1 = com.igexin.b.a.b.f.a(r8, r5, r0, r10, r1)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
            if (r6 <= 0) goto L94
            int r1 = com.igexin.b.a.b.f.a(r2, r5, r0, r10, r6)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
        L94:
            int r1 = r9.length     // Catch: java.lang.Exception -> Lab
            int r1 = com.igexin.b.a.b.f.a(r9, r5, r0, r10, r1)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
            if (r7 <= 0) goto La1
            int r1 = com.igexin.b.a.b.f.a(r3, r5, r0, r10, r7)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
        La1:
            int r1 = r4.length     // Catch: java.lang.Exception -> Lab
            int r1 = com.igexin.b.a.b.f.c(r1, r0, r10)     // Catch: java.lang.Exception -> Lab
            int r10 = r10 + r1
            int r1 = r4.length     // Catch: java.lang.Exception -> Lab
            com.igexin.b.a.b.f.a(r4, r5, r0, r10, r1)     // Catch: java.lang.Exception -> Lab
        Lab:
            if (r0 == 0) goto Lbc
            int r1 = r0.length
            long r1 = (long) r1
            long r3 = com.igexin.push.config.j.t
            int r1 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r1 < 0) goto Lbc
            byte r1 = r13.j
            r1 = r1 | 128(0x80, float:1.8E-43)
            byte r1 = (byte) r1
            r13.j = r1
        Lbc:
            return r0
    }
}
