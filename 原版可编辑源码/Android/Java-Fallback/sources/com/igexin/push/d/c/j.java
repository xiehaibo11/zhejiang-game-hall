package com.igexin.push.d.c;

public class j extends com.igexin.push.d.c.c {
    public byte a;
    public java.lang.Object b;

    public j() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public void a(byte[] r1) {
            r0 = this;
            return
    }

    @Override
    public byte[] c() {
            r6 = this;
            byte r0 = r6.a
            r1 = 1
            r2 = 0
            r3 = 2
            if (r0 != r1) goto L10
        L7:
            java.lang.Object r0 = r6.b
            java.lang.String r0 = (java.lang.String) r0
            byte[] r0 = r0.getBytes()
            goto L20
        L10:
            if (r0 != r3) goto L13
            goto L7
        L13:
            r4 = 3
            if (r0 != r4) goto L17
            goto L1f
        L17:
            r4 = 4
            if (r0 != r4) goto L1b
            goto L7
        L1b:
            r4 = 5
            if (r0 != r4) goto L1f
            goto L7
        L1f:
            r0 = r2
        L20:
            if (r0 == 0) goto L33
            int r2 = r0.length
            int r2 = r2 + r3
            byte[] r2 = new byte[r2]
            byte r4 = r6.a
            r5 = 0
            r2[r5] = r4
            int r4 = r0.length
            byte r4 = (byte) r4
            r2[r1] = r4
            int r1 = r0.length
            java.lang.System.arraycopy(r0, r5, r2, r3, r1)
        L33:
            return r2
    }
}
