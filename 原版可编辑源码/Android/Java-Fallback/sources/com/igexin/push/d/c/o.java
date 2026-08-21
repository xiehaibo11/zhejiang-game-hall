package com.igexin.push.d.c;

public class o extends com.igexin.push.d.c.c {
    public long a;
    public java.lang.String b;
    public java.lang.String c;
    public java.lang.String d;

    public o() {
            r1 = this;
            r1.<init>()
            java.lang.String r0 = ""
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r0 = 9
            r1.i = r0
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
    public void a(byte[] r4) {
            r3 = this;
            r0 = 0
            long r0 = com.igexin.b.a.b.f.e(r4, r0)
            r3.a = r0
            int r0 = r4.length
            r1 = 8
            if (r0 <= r1) goto L1d
            r0 = 9
            r1 = r4[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            if (r1 <= 0) goto L1c
            java.lang.String r2 = r3.a(r4, r0, r1)
            r3.b = r2
            int r1 = r1 + r0
            goto L1d
        L1c:
            r1 = r0
        L1d:
            int r0 = r4.length
            if (r0 <= r1) goto L31
            int r0 = r1 + 1
            r1 = r4[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            if (r1 <= 0) goto L30
            java.lang.String r2 = r3.a(r4, r0, r1)
            r3.c = r2
            int r1 = r1 + r0
            goto L31
        L30:
            r1 = r0
        L31:
            int r0 = r4.length
            if (r0 <= r1) goto L42
            int r0 = r1 + 1
            r1 = r4[r1]
            r1 = r1 & 255(0xff, float:3.57E-43)
            if (r1 <= 0) goto L42
            java.lang.String r4 = r3.a(r4, r0, r1)
            r3.d = r4
        L42:
            return
    }

    @Override
    public byte[] c() {
            r9 = this;
            java.lang.String r0 = r9.c
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            r1 = 9
            r2 = 8
            r3 = 0
            if (r0 != 0) goto L57
            java.lang.String r0 = r9.d
            boolean r0 = android.text.TextUtils.isEmpty(r0)
            if (r0 != 0) goto L57
            java.lang.String r0 = r9.b
            byte[] r0 = r0.getBytes()
            java.lang.String r4 = r9.c
            byte[] r4 = r4.getBytes()
            java.lang.String r5 = r9.d
            byte[] r5 = r5.getBytes()
            int r6 = r0.length
            int r6 = r6 + r2
            int r7 = r4.length
            int r6 = r6 + r7
            int r7 = r5.length
            int r6 = r6 + r7
            int r6 = r6 + 3
            byte[] r6 = new byte[r6]
            long r7 = r9.a
            com.igexin.b.a.b.f.a(r7, r6, r3)
            int r7 = r0.length
            com.igexin.b.a.b.f.c(r7, r6, r2)
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r6, r1, r2)
            int r0 = r0.length
            int r1 = r1 + r0
            int r0 = r4.length
            int r2 = r1 + 1
            com.igexin.b.a.b.f.c(r0, r6, r1)
            int r0 = r4.length
            java.lang.System.arraycopy(r4, r3, r6, r2, r0)
            int r0 = r4.length
            int r2 = r2 + r0
            int r0 = r5.length
            int r1 = r2 + 1
            com.igexin.b.a.b.f.c(r0, r6, r2)
            int r0 = r5.length
            java.lang.System.arraycopy(r5, r3, r6, r1, r0)
            goto L70
        L57:
            java.lang.String r0 = r9.b
            byte[] r0 = r0.getBytes()
            int r4 = r0.length
            int r4 = r4 + r2
            int r4 = r4 + 1
            byte[] r6 = new byte[r4]
            long r4 = r9.a
            com.igexin.b.a.b.f.a(r4, r6, r3)
            int r4 = r0.length
            com.igexin.b.a.b.f.c(r4, r6, r2)
            int r2 = r0.length
            java.lang.System.arraycopy(r0, r3, r6, r1, r2)
        L70:
            return r6
    }
}
