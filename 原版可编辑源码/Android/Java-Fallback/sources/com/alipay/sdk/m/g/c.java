package com.alipay.sdk.m.g;

public class c {
    public static volatile java.security.SecureRandom a;
    public static final char[] b = null;

    static {
            java.lang.String r0 = "0123456789ABCDEF"
            char[] r0 = r0.toCharArray()
            com.alipay.sdk.m.g.c.b = r0
            return
    }

    public c() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.lang.String a(byte[] r1) {
            r0 = 3
            java.lang.String r1 = android.util.Base64.encodeToString(r1, r0)
            return r1
    }

    public static java.security.SecureRandom a() {
            java.security.SecureRandom r0 = com.alipay.sdk.m.g.c.a
            if (r0 == 0) goto L7
            java.security.SecureRandom r0 = com.alipay.sdk.m.g.c.a
            return r0
        L7:
            java.lang.Class<com.alipay.sdk.m.g.c> r0 = com.alipay.sdk.m.g.c.class
            monitor-enter(r0)
            java.security.SecureRandom r1 = com.alipay.sdk.m.g.c.a     // Catch: java.lang.Throwable -> L19
            if (r1 != 0) goto L15
            java.security.SecureRandom r1 = new java.security.SecureRandom     // Catch: java.lang.Throwable -> L19
            r1.<init>()     // Catch: java.lang.Throwable -> L19
            com.alipay.sdk.m.g.c.a = r1     // Catch: java.lang.Throwable -> L19
        L15:
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            java.security.SecureRandom r0 = com.alipay.sdk.m.g.c.a
            return r0
        L19:
            r1 = move-exception
            monitor-exit(r0)     // Catch: java.lang.Throwable -> L19
            throw r1
    }

    public static byte[] a(byte r2) {
            r0 = 1
            byte[] r0 = new byte[r0]
            r1 = 0
            r0[r1] = r2
            return r0
    }

    public static byte[] a(char r2) {
            r0 = 1
            byte[] r0 = new byte[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r1 = 0
            r0[r1] = r2
            return r0
    }

    public static byte[] a(char r2, char r3) {
            r0 = 2
            byte[] r0 = new byte[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r1 = 0
            r0[r1] = r2
            r2 = r3 & 255(0xff, float:3.57E-43)
            byte r2 = (byte) r2
            r3 = 1
            r0[r3] = r2
            return r0
    }

    public static byte[] a(int r3) {
            r0 = 4
            byte[] r0 = new byte[r0]
            byte r1 = (byte) r3
            r2 = 0
            r0[r2] = r1
            int r1 = r3 >> 8
            byte r1 = (byte) r1
            r2 = 1
            r0[r2] = r1
            int r1 = r3 >> 16
            byte r1 = (byte) r1
            r2 = 2
            r0[r2] = r1
            int r3 = r3 >> 24
            byte r3 = (byte) r3
            r1 = 3
            r0[r1] = r3
            return r0
    }

    public static byte[] a(long r4) {
            r0 = 8
            byte[] r1 = new byte[r0]
            int r2 = (int) r4
            byte r2 = (byte) r2
            r3 = 0
            r1[r3] = r2
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 1
            r1[r2] = r0
            r0 = 16
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 2
            r1[r2] = r0
            r0 = 24
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 3
            r1[r2] = r0
            r0 = 32
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 4
            r1[r2] = r0
            r0 = 40
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 5
            r1[r2] = r0
            r0 = 48
            long r2 = r4 >> r0
            int r0 = (int) r2
            byte r0 = (byte) r0
            r2 = 6
            r1[r2] = r0
            r0 = 56
            long r4 = r4 >> r0
            int r5 = (int) r4
            byte r4 = (byte) r5
            r5 = 7
            r1[r5] = r4
            return r1
    }

    public static byte[] a(short r3) {
            r0 = 2
            byte[] r0 = new byte[r0]
            byte r1 = (byte) r3
            r2 = 0
            r0[r2] = r1
            int r3 = r3 >> 8
            byte r3 = (byte) r3
            r1 = 1
            r0[r1] = r3
            return r0
    }

    public static byte[] a(byte[]... r8) {
            int r0 = r8.length
            r1 = 0
            r2 = 0
            r3 = 0
        L4:
            if (r2 >= r0) goto Ld
            r4 = r8[r2]
            int r4 = r4.length
            int r3 = r3 + r4
            int r2 = r2 + 1
            goto L4
        Ld:
            r0 = 0
            int r2 = r8.length
            r4 = 0
            r5 = 0
        L11:
            if (r4 >= r2) goto L26
            r6 = r8[r4]
            if (r0 != 0) goto L1d
            byte[] r0 = java.util.Arrays.copyOf(r6, r3)
            int r5 = r6.length
            goto L23
        L1d:
            int r7 = r6.length
            java.lang.System.arraycopy(r6, r1, r0, r5, r7)
            int r6 = r6.length
            int r5 = r5 + r6
        L23:
            int r4 = r4 + 1
            goto L11
        L26:
            return r0
    }

    public static java.lang.String b(byte[] r6) {
            int r0 = r6.length
            int r0 = r0 * 2
            char[] r0 = new char[r0]
            r1 = 0
        L6:
            int r2 = r6.length
            if (r1 >= r2) goto L22
            r2 = r6[r1]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = r1 * 2
            char[] r4 = com.alipay.sdk.m.g.c.b
            int r5 = r2 >>> 4
            char r5 = r4[r5]
            r0[r3] = r5
            int r3 = r3 + 1
            r2 = r2 & 15
            char r2 = r4[r2]
            r0[r3] = r2
            int r1 = r1 + 1
            goto L6
        L22:
            java.lang.String r6 = new java.lang.String
            r6.<init>(r0)
            return r6
    }

    public static byte[] b() {
            r0 = 2
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = a()
            r1.nextBytes(r0)
            return r0
    }

    public static byte[] c() {
            r0 = 4
            byte[] r0 = new byte[r0]
            java.security.SecureRandom r1 = a()
            r1.nextBytes(r0)
            return r0
    }
}
