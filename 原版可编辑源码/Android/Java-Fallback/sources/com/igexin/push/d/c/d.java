package com.igexin.push.d.c;

public class d extends com.igexin.push.d.c.c {
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    java.lang.String d;

    public d() {
            r1 = this;
            r1.<init>()
            r0 = 6
            r1.i = r0
            r0 = 20
            r1.j = r0
            java.lang.String r0 = ""
            r1.a = r0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            return
    }

    public d(java.lang.String r2, java.lang.String r3, java.lang.String r4, java.lang.String r5) {
            r1 = this;
            r1.<init>()
            r0 = 6
            r1.i = r0
            r0 = 20
            r1.j = r0
            java.lang.String r0 = ""
            if (r2 != 0) goto Lf
            r2 = r0
        Lf:
            r1.a = r2
            if (r3 != 0) goto L14
            r3 = r0
        L14:
            r1.b = r3
            if (r4 != 0) goto L19
            r4 = r0
        L19:
            r1.c = r4
            if (r5 != 0) goto L1e
            r5 = r0
        L1e:
            r1.d = r5
            return
    }

    @Override
    public void a(byte[] r6) {
            r5 = this;
            java.lang.String r0 = "utf-8"
            r1 = 0
            int r1 = com.igexin.b.a.b.f.a(r6, r1)     // Catch: java.lang.Exception -> L36
            java.lang.String r2 = new java.lang.String     // Catch: java.lang.Exception -> L36
            r3 = 1
            r2.<init>(r6, r3, r1, r0)     // Catch: java.lang.Exception -> L36
            r5.a = r2     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r3
            int r2 = com.igexin.b.a.b.f.a(r6, r1)     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r3
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L36
            r4.<init>(r6, r1, r2, r0)     // Catch: java.lang.Exception -> L36
            r5.b = r4     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r2
            int r2 = com.igexin.b.a.b.f.a(r6, r1)     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r3
            java.lang.String r4 = new java.lang.String     // Catch: java.lang.Exception -> L36
            r4.<init>(r6, r1, r2, r0)     // Catch: java.lang.Exception -> L36
            r5.c = r4     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r2
            int r2 = com.igexin.b.a.b.f.a(r6, r1)     // Catch: java.lang.Exception -> L36
            int r1 = r1 + r3
            java.lang.String r3 = new java.lang.String     // Catch: java.lang.Exception -> L36
            r3.<init>(r6, r1, r2, r0)     // Catch: java.lang.Exception -> L36
            r5.d = r3     // Catch: java.lang.Exception -> L36
        L36:
            return
    }

    @Override
    public byte[] c() {
            r8 = this;
            java.lang.String r0 = r8.b
            byte[] r0 = r0.getBytes()
            java.lang.String r1 = r8.a
            byte[] r1 = r1.getBytes()
            java.lang.String r2 = r8.c
            byte[] r2 = r2.getBytes()
            java.lang.String r3 = r8.d
            byte[] r3 = r3.getBytes()
            int r4 = r0.length
            int r5 = r1.length
            int r4 = r4 + r5
            int r5 = r2.length
            int r4 = r4 + r5
            int r5 = r3.length
            int r4 = r4 + r5
            int r4 = r4 + 4
            byte[] r4 = new byte[r4]
            int r5 = r0.length
            r6 = 0
            com.igexin.b.a.b.f.c(r5, r4, r6)
            int r5 = r0.length
            r7 = 1
            java.lang.System.arraycopy(r0, r6, r4, r7, r5)
            int r0 = r0.length
            int r7 = r7 + r0
            int r0 = r1.length
            int r5 = r7 + 1
            com.igexin.b.a.b.f.c(r0, r4, r7)
            int r0 = r1.length
            java.lang.System.arraycopy(r1, r6, r4, r5, r0)
            int r0 = r1.length
            int r5 = r5 + r0
            int r0 = r2.length
            int r1 = r5 + 1
            com.igexin.b.a.b.f.c(r0, r4, r5)
            int r0 = r2.length
            java.lang.System.arraycopy(r2, r6, r4, r1, r0)
            int r0 = r2.length
            int r1 = r1 + r0
            int r0 = r3.length
            int r2 = r1 + 1
            com.igexin.b.a.b.f.c(r0, r4, r1)
            int r0 = r3.length
            java.lang.System.arraycopy(r3, r6, r4, r2, r0)
            int r0 = r3.length
            return r4
    }
}
