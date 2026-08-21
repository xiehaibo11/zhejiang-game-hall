package com.igexin.push.d.c;

public class g extends com.igexin.push.d.c.c {
    public java.lang.String a;
    public byte[] b;
    public byte c;
    public java.lang.String d;

    public g() {
            r1 = this;
            r1.<init>()
            r0 = 96
            r1.i = r0
            r0 = 4
            r1.j = r0
            byte r0 = r1.k
            r0 = r0 | 16
            byte r0 = (byte) r0
            r1.k = r0
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
    public void a(byte[] r5) {
            r4 = this;
            r0 = 0
            r1 = r5[r0]     // Catch: java.lang.Exception -> L2c
            r4.c = r1     // Catch: java.lang.Exception -> L2c
            r1 = 2
            r2 = 1
            r2 = r5[r2]     // Catch: java.lang.Exception -> L2c
            r2 = r2 & 255(0xff, float:3.57E-43)
            java.lang.String r3 = r4.a(r5, r1, r2)     // Catch: java.lang.Exception -> L2c
            r4.a = r3     // Catch: java.lang.Exception -> L2c
            int r1 = r1 + r2
            int r2 = r1 + 1
            r1 = r5[r1]     // Catch: java.lang.Exception -> L2c
            r1 = r1 & 255(0xff, float:3.57E-43)
            byte[] r3 = new byte[r1]     // Catch: java.lang.Exception -> L2c
            r4.b = r3     // Catch: java.lang.Exception -> L2c
            java.lang.System.arraycopy(r5, r2, r3, r0, r1)     // Catch: java.lang.Exception -> L2c
            int r2 = r2 + r1
            int r0 = r2 + 1
            r1 = r5[r2]     // Catch: java.lang.Exception -> L2c
            r1 = r1 & 255(0xff, float:3.57E-43)
            java.lang.String r5 = r4.a(r5, r0, r1)     // Catch: java.lang.Exception -> L2c
            r4.d = r5     // Catch: java.lang.Exception -> L2c
        L2c:
            return
    }

    @Override
    public byte[] c() {
            r7 = this;
            java.lang.String r0 = r7.a
            byte[] r0 = r0.getBytes()
            long r1 = java.lang.System.currentTimeMillis()
            r3 = 1000(0x3e8, double:4.94E-321)
            long r1 = r1 / r3
            int r1 = (int) r1
            byte[] r1 = com.igexin.b.a.b.f.b(r1)
            byte[] r1 = com.igexin.push.util.EncryptUtils.getIV(r1)
            byte[] r2 = com.igexin.push.util.EncryptUtils.getSocketAESKey()
            int r3 = r0.length
            int r3 = r3 + 2
            int r3 = r3 + 2
            int r4 = r2.length
            int r3 = r3 + r4
            int r3 = r3 + 1
            int r4 = r1.length
            int r3 = r3 + r4
            byte[] r3 = new byte[r3]
            r4 = 0
            int r5 = com.igexin.b.a.b.f.c(r4, r3, r4)
            int r6 = r0.length
            byte r6 = (byte) r6
            int r6 = com.igexin.b.a.b.f.c(r6, r3, r5)
            int r5 = r5 + r6
            int r6 = r0.length
            int r0 = com.igexin.b.a.b.f.a(r0, r4, r3, r5, r6)
            int r5 = r5 + r0
            int r0 = r2.length
            short r0 = (short) r0
            int r0 = com.igexin.b.a.b.f.b(r0, r3, r5)
            int r5 = r5 + r0
            int r0 = r2.length
            int r0 = com.igexin.b.a.b.f.a(r2, r4, r3, r5, r0)
            int r5 = r5 + r0
            int r0 = r1.length
            byte r0 = (byte) r0
            int r0 = com.igexin.b.a.b.f.c(r0, r3, r5)
            int r5 = r5 + r0
            int r0 = r1.length
            com.igexin.b.a.b.f.a(r1, r4, r3, r5, r0)
            return r3
    }
}
