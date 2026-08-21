package com.igexin.b.a.b;

public class a extends java.io.OutputStream {
    private java.io.OutputStream a;
    private int b;
    private int c;
    private int d;
    private int e;

    public a(java.io.OutputStream r2, int r3) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.a = r0
            r0 = 0
            r1.b = r0
            r1.c = r0
            r1.d = r0
            r1.e = r0
            r1.a = r2
            r1.e = r3
            return
    }

    protected void a() {
            r8 = this;
            int r0 = r8.c
            if (r0 <= 0) goto L71
            int r0 = r8.e
            r1 = 0
            if (r0 <= 0) goto L1a
            int r2 = r8.d
            if (r2 != r0) goto L1a
            java.io.OutputStream r0 = r8.a
            java.lang.String r2 = "\r\n"
            byte[] r2 = r2.getBytes()
            r0.write(r2)
            r8.d = r1
        L1a:
            int r0 = r8.b
            int r0 = r0 << 8
            int r0 = r0 >>> 26
            java.lang.String r2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/"
            char r0 = r2.charAt(r0)
            int r3 = r8.b
            int r3 = r3 << 14
            int r3 = r3 >>> 26
            char r3 = r2.charAt(r3)
            int r4 = r8.c
            r5 = 2
            r6 = 61
            if (r4 >= r5) goto L39
            r4 = r6
            goto L43
        L39:
            int r4 = r8.b
            int r4 = r4 << 20
            int r4 = r4 >>> 26
            char r4 = r2.charAt(r4)
        L43:
            int r5 = r8.c
            r7 = 3
            if (r5 >= r7) goto L49
            goto L53
        L49:
            int r5 = r8.b
            int r5 = r5 << 26
            int r5 = r5 >>> 26
            char r6 = r2.charAt(r5)
        L53:
            java.io.OutputStream r2 = r8.a
            r2.write(r0)
            java.io.OutputStream r0 = r8.a
            r0.write(r3)
            java.io.OutputStream r0 = r8.a
            r0.write(r4)
            java.io.OutputStream r0 = r8.a
            r0.write(r6)
            int r0 = r8.d
            int r0 = r0 + 4
            r8.d = r0
            r8.c = r1
            r8.b = r1
        L71:
            return
    }

    @Override
    public void close() {
            r1 = this;
            r1.a()
            java.io.OutputStream r0 = r1.a
            r0.close()
            return
    }

    @Override
    public void write(int r3) {
            r2 = this;
            r3 = r3 & 255(0xff, float:3.57E-43)
            int r0 = r2.c
            int r1 = r0 * 8
            int r1 = 16 - r1
            int r3 = r3 << r1
            int r1 = r2.b
            r3 = r3 | r1
            r2.b = r3
            int r0 = r0 + 1
            r2.c = r0
            r3 = 3
            if (r0 != r3) goto L18
            r2.a()
        L18:
            return
    }
}
