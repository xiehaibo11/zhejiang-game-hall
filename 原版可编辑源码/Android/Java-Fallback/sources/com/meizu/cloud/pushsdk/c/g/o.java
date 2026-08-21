package com.meizu.cloud.pushsdk.c.g;

final class o {
    public static final java.nio.charset.Charset a = null;

    static {
            java.lang.String r0 = "UTF-8"
            java.nio.charset.Charset r0 = java.nio.charset.Charset.forName(r0)
            com.meizu.cloud.pushsdk.c.g.o.a = r0
            return
    }

    public static void a(long r4, long r6, long r8) {
            long r0 = r6 | r8
            r2 = 0
            int r0 = (r0 > r2 ? 1 : (r0 == r2 ? 0 : -1))
            if (r0 < 0) goto L13
            int r0 = (r6 > r4 ? 1 : (r6 == r4 ? 0 : -1))
            if (r0 > 0) goto L13
            long r0 = r4 - r6
            int r0 = (r0 > r8 ? 1 : (r0 == r8 ? 0 : -1))
            if (r0 < 0) goto L13
            return
        L13:
            java.lang.ArrayIndexOutOfBoundsException r0 = new java.lang.ArrayIndexOutOfBoundsException
            r1 = 3
            java.lang.Object[] r1 = new java.lang.Object[r1]
            r2 = 0
            java.lang.Long r4 = java.lang.Long.valueOf(r4)
            r1[r2] = r4
            r4 = 1
            java.lang.Long r5 = java.lang.Long.valueOf(r6)
            r1[r4] = r5
            r4 = 2
            java.lang.Long r5 = java.lang.Long.valueOf(r8)
            r1[r4] = r5
            java.lang.String r4 = "size=%s offset=%s byteCount=%s"
            java.lang.String r4 = java.lang.String.format(r4, r1)
            r0.<init>(r4)
            throw r0
    }

    public static void a(java.lang.Throwable r0) {
            b(r0)
            return
    }

    public static boolean a(byte[] r4, int r5, byte[] r6, int r7, int r8) {
            r0 = 0
            r1 = r0
        L2:
            if (r1 >= r8) goto L12
            int r2 = r1 + r5
            r2 = r4[r2]
            int r3 = r1 + r7
            r3 = r6[r3]
            if (r2 == r3) goto Lf
            return r0
        Lf:
            int r1 = r1 + 1
            goto L2
        L12:
            r4 = 1
            return r4
    }

    private static <T extends java.lang.Throwable> void b(java.lang.Throwable r0) {
            throw r0
    }
}
