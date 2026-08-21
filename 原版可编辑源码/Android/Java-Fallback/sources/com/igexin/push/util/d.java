package com.igexin.push.util;

public class d {
    static final boolean a = false;

    static {
            java.lang.Class<com.igexin.push.util.d> r0 = com.igexin.push.util.d.class
            boolean r0 = r0.desiredAssertionStatus()
            r0 = r0 ^ 1
            com.igexin.push.util.d.a = r0
            return
    }

    private d() {
            r0 = this;
            r0.<init>()
            return
    }

    public static byte[] a(java.lang.String r0, int r1) {
            byte[] r0 = r0.getBytes()
            byte[] r0 = a(r0, r1)
            return r0
    }

    public static byte[] a(byte[] r2, int r3) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = a(r2, r1, r0, r3)
            return r2
    }

    public static byte[] a(byte[] r2, int r3, int r4, int r5) {
            com.igexin.push.util.f r0 = new com.igexin.push.util.f
            int r1 = r4 * 3
            int r1 = r1 / 4
            byte[] r1 = new byte[r1]
            r0.<init>(r5, r1)
            r5 = 1
            boolean r2 = r0.a(r2, r3, r4, r5)
            if (r2 == 0) goto L29
            int r2 = r0.b
            byte[] r3 = r0.a
            int r3 = r3.length
            if (r2 != r3) goto L1c
            byte[] r2 = r0.a
            return r2
        L1c:
            int r2 = r0.b
            byte[] r2 = new byte[r2]
            byte[] r3 = r0.a
            int r4 = r0.b
            r5 = 0
            java.lang.System.arraycopy(r3, r5, r2, r5, r4)
            return r2
        L29:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "bad base-64"
            r2.<init>(r3)
            throw r2
    }

    public static java.lang.String b(byte[] r1, int r2) {
            java.lang.String r0 = new java.lang.String     // Catch: java.io.UnsupportedEncodingException -> Lc
            byte[] r1 = c(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            java.lang.String r2 = "US-ASCII"
            r0.<init>(r1, r2)     // Catch: java.io.UnsupportedEncodingException -> Lc
            return r0
        Lc:
            r1 = move-exception
            java.lang.AssertionError r2 = new java.lang.AssertionError
            r2.<init>(r1)
            throw r2
    }

    public static byte[] b(byte[] r5, int r6, int r7, int r8) {
            com.igexin.push.util.g r0 = new com.igexin.push.util.g
            r1 = 0
            r0.<init>(r8, r1)
            int r8 = r7 / 3
            int r8 = r8 * 4
            boolean r1 = r0.d
            r2 = 2
            r3 = 1
            if (r1 == 0) goto L17
            int r1 = r7 % 3
            if (r1 <= 0) goto L23
            int r8 = r8 + 4
            goto L23
        L17:
            int r1 = r7 % 3
            if (r1 == r3) goto L21
            if (r1 == r2) goto L1e
            goto L23
        L1e:
            int r8 = r8 + 3
            goto L23
        L21:
            int r8 = r8 + 2
        L23:
            boolean r1 = r0.e
            if (r1 == 0) goto L36
            if (r7 <= 0) goto L36
            int r1 = r7 + (-1)
            int r1 = r1 / 57
            int r1 = r1 + r3
            boolean r4 = r0.f
            if (r4 == 0) goto L33
            goto L34
        L33:
            r2 = r3
        L34:
            int r1 = r1 * r2
            int r8 = r8 + r1
        L36:
            byte[] r1 = new byte[r8]
            r0.a = r1
            r0.a(r5, r6, r7, r3)
            boolean r5 = com.igexin.push.util.d.a
            if (r5 != 0) goto L4c
            int r5 = r0.b
            if (r5 != r8) goto L46
            goto L4c
        L46:
            java.lang.AssertionError r5 = new java.lang.AssertionError
            r5.<init>()
            throw r5
        L4c:
            byte[] r5 = r0.a
            return r5
    }

    public static byte[] c(byte[] r2, int r3) {
            int r0 = r2.length
            r1 = 0
            byte[] r2 = b(r2, r1, r0, r3)
            return r2
    }
}
