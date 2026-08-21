package com.igexin.push.d.c;

public class i extends com.igexin.push.d.c.c {
    public long a;
    public byte b;
    public int c;
    public java.lang.String d;
    public java.util.List<com.igexin.push.d.c.j> e;

    public i() {
            r1 = this;
            r1.<init>()
            r0 = 4
            r1.i = r0
            r0 = 20
            r1.j = r0
            return
    }

    private java.lang.String a(byte[] r3, int r4, int r5) {
            r2 = this;
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L8
            java.lang.String r1 = "UTF-8"
            r0.<init>(r3, r4, r5, r1)     // Catch: java.lang.Exception -> L8
            return r0
        L8:
            java.lang.String r3 = ""
            return r3
    }

    @Override
    public void a(byte[] r7) {
            r6 = this;
            r0 = 0
            long r0 = com.igexin.b.a.b.f.e(r7, r0)
            r6.a = r0
            r0 = 8
            r0 = r7[r0]
            r6.b = r0
            r0 = 9
            int r0 = com.igexin.b.a.b.f.d(r7, r0)
            r0 = r0 & (-1)
            r6.c = r0
            int r0 = r7.length
            r1 = 13
            if (r0 <= r1) goto L60
            r0 = 14
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            if (r1 <= 0) goto L5f
            java.util.ArrayList r2 = new java.util.ArrayList
            r2.<init>()
            r6.e = r2
            int r1 = r1 + r0
        L2c:
            if (r0 >= r1) goto L5f
            com.igexin.push.d.c.j r2 = new com.igexin.push.d.c.j
            r2.<init>()
            java.util.List<com.igexin.push.d.c.j> r3 = r6.e
            r3.add(r2)
            int r3 = r0 + 1
            int r0 = com.igexin.b.a.b.f.a(r7, r0)
            r0 = r0 & 255(0xff, float:3.57E-43)
            int r4 = r3 + 1
            int r3 = com.igexin.b.a.b.f.a(r7, r3)
            r3 = r3 & 255(0xff, float:3.57E-43)
            byte r5 = (byte) r0
            r2.a = r5
            r5 = 1
            if (r0 == r5) goto L51
            r5 = 4
            if (r0 != r5) goto L5c
        L51:
            if (r3 <= 0) goto L5c
            java.lang.String r0 = new java.lang.String     // Catch: java.lang.Exception -> L5c
            java.lang.String r5 = "UTF-8"
            r0.<init>(r7, r4, r3, r5)     // Catch: java.lang.Exception -> L5c
            r2.b = r0     // Catch: java.lang.Exception -> L5c
        L5c:
            int r0 = r4 + r3
            goto L2c
        L5f:
            r1 = r0
        L60:
            int r0 = r7.length
            if (r0 <= r1) goto L6f
            int r0 = r1 + 1
            r1 = r7[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r7 = r6.a(r7, r0, r1)
            r6.d = r7
        L6f:
            return
    }

    @Override
    public byte[] c() {
            r7 = this;
            java.util.List<com.igexin.push.d.c.j> r0 = r7.e
            r1 = 0
            if (r0 == 0) goto L31
            int r0 = r0.size()
            if (r0 <= 0) goto L31
            java.io.ByteArrayOutputStream r0 = new java.io.ByteArrayOutputStream
            r0.<init>()
            java.util.List<com.igexin.push.d.c.j> r2 = r7.e
            java.util.Iterator r2 = r2.iterator()
        L16:
            boolean r3 = r2.hasNext()
            if (r3 == 0) goto L2e
            java.lang.Object r3 = r2.next()
            com.igexin.push.d.c.j r3 = (com.igexin.push.d.c.j) r3
            byte[] r3 = r3.c()
            r0.write(r3)     // Catch: java.io.IOException -> L16
            byte[] r1 = r0.toByteArray()     // Catch: java.io.IOException -> L16
            goto L16
        L2e:
            r0.close()     // Catch: java.io.IOException -> L31
        L31:
            r0 = 0
            r2 = 1
            if (r1 == 0) goto L39
            int r3 = r1.length
            int r4 = r3 + 1
            goto L3b
        L39:
            r3 = r0
            r4 = r2
        L3b:
            int r4 = r4 + 12
            java.lang.String r5 = r7.d
            byte[] r5 = r5.getBytes()
            int r5 = r5.length
            int r4 = r4 + r5
            int r4 = r4 + r2
            byte[] r2 = new byte[r4]
            long r4 = r7.a
            int r4 = com.igexin.b.a.b.f.a(r4, r2, r0)
            byte r5 = r7.b
            r5 = r5 & 255(0xff, float:3.57E-43)
            int r5 = r5 << 24
            int r6 = r7.c
            r5 = r5 | r6
            int r5 = com.igexin.b.a.b.f.a(r5, r2, r4)
            int r4 = r4 + r5
            int r5 = com.igexin.b.a.b.f.c(r3, r2, r4)
            int r4 = r4 + r5
            if (r3 <= 0) goto L68
            int r1 = com.igexin.b.a.b.f.a(r1, r0, r2, r4, r3)
            int r4 = r4 + r1
        L68:
            java.lang.String r1 = r7.d
            byte[] r1 = r1.getBytes()
            int r3 = r1.length
            int r5 = r4 + 1
            com.igexin.b.a.b.f.c(r3, r2, r4)
            int r3 = r1.length
            java.lang.System.arraycopy(r1, r0, r2, r5, r3)
            int r0 = r1.length
            return r2
    }
}
