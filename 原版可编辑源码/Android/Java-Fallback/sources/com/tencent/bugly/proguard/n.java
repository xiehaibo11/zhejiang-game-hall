package com.tencent.bugly.proguard;

public final class n {
    private static final byte[] a = null;
    private static final byte[] b = null;

    static {
            r0 = 16
            byte[] r0 = new byte[r0]
            r0 = {x0024: FILL_ARRAY_DATA , data: [48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70} // fill-array
            r1 = 256(0x100, float:3.59E-43)
            byte[] r2 = new byte[r1]
            byte[] r3 = new byte[r1]
            r4 = 0
        Le:
            if (r4 >= r1) goto L1f
            int r5 = r4 >>> 4
            r5 = r0[r5]
            r2[r4] = r5
            r5 = r4 & 15
            r5 = r0[r5]
            r3[r4] = r5
            int r4 = r4 + 1
            goto Le
        L1f:
            com.tencent.bugly.proguard.n.a = r2
            com.tencent.bugly.proguard.n.b = r3
            return
    }

    public static boolean a(int r0, int r1) {
            if (r0 != r1) goto L4
            r0 = 1
            return r0
        L4:
            r0 = 0
            return r0
    }

    public static boolean a(long r1, long r3) {
            int r0 = (r1 > r3 ? 1 : (r1 == r3 ? 0 : -1))
            if (r0 != 0) goto L6
            r1 = 1
            return r1
        L6:
            r1 = 0
            return r1
    }

    public static boolean a(java.lang.Object r0, java.lang.Object r1) {
            boolean r0 = r0.equals(r1)
            return r0
    }

    public static boolean a(boolean r0, boolean r1) {
            if (r0 != r1) goto L4
            r0 = 1
            return r0
        L4:
            r0 = 0
            return r0
    }

    public static byte[] a(java.nio.ByteBuffer r3) {
            int r0 = r3.position()
            byte[] r0 = new byte[r0]
            byte[] r3 = r3.array()
            int r1 = r0.length
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r0, r2, r1)
            return r0
    }
}
