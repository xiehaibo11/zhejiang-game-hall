package com.igexin.push.d.c;

public abstract class c extends com.igexin.b.a.d.a {
    public int i;
    public byte j;
    public byte k;

    public c() {
            r1 = this;
            r1.<init>()
            r0 = 11
            r1.k = r0
            return
    }

    protected int a(java.lang.String r3) {
            r2 = this;
            java.lang.String r0 = "UTF-8"
            boolean r0 = r3.equals(r0)
            r1 = 1
            if (r0 == 0) goto La
            return r1
        La:
            java.lang.String r0 = "UTF-16"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L14
            r3 = 2
            return r3
        L14:
            java.lang.String r0 = "UTF-16BE"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L1f
            r3 = 16
            return r3
        L1f:
            java.lang.String r0 = "UTF-16LE"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L2a
            r3 = 17
            return r3
        L2a:
            java.lang.String r0 = "GBK"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L35
            r3 = 25
            return r3
        L35:
            java.lang.String r0 = "GB2312"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L40
            r3 = 26
            return r3
        L40:
            java.lang.String r0 = "GB18030"
            boolean r0 = r3.equals(r0)
            if (r0 == 0) goto L4b
            r3 = 27
            return r3
        L4b:
            java.lang.String r0 = "ISO-8859-1"
            boolean r3 = r3.equals(r0)
            if (r3 == 0) goto L56
            r3 = 33
            return r3
        L56:
            return r1
    }

    protected java.lang.String a(byte r3) {
            r2 = this;
            r3 = r3 & 63
            r0 = 1
            java.lang.String r1 = "UTF-8"
            if (r3 == r0) goto L2e
            r0 = 2
            if (r3 == r0) goto L2c
            r0 = 16
            if (r3 == r0) goto L29
            r0 = 17
            if (r3 == r0) goto L26
            r0 = 33
            if (r3 == r0) goto L23
            switch(r3) {
                case 25: goto L20;
                case 26: goto L1d;
                case 27: goto L1a;
                default: goto L19;
            }
        L19:
            goto L2e
        L1a:
            java.lang.String r1 = "GB18030"
            goto L2e
        L1d:
            java.lang.String r1 = "GB2312"
            goto L2e
        L20:
            java.lang.String r1 = "GBK"
            goto L2e
        L23:
            java.lang.String r1 = "ISO-8859-1"
            goto L2e
        L26:
            java.lang.String r1 = "UTF-16LE"
            goto L2e
        L29:
            java.lang.String r1 = "UTF-16BE"
            goto L2e
        L2c:
            java.lang.String r1 = "UTF-16"
        L2e:
            return r1
    }

    public abstract void a(byte[] r1);

    @Override
    public int b_() {
            r1 = this;
            int r0 = r1.i
            return r0
    }

    public abstract byte[] c();
}
