package org.bouncycastle.util;

public final class Arrays {
    private Arrays() {
            r0 = this;
            r0.<init>()
            return
    }

    public static boolean areEqual(byte[] r5, byte[] r6) {
            r0 = 1
            if (r5 != r6) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L1e
            if (r6 != 0) goto La
            goto L1e
        La:
            int r2 = r5.length
            int r3 = r6.length
            if (r2 == r3) goto Lf
            return r1
        Lf:
            r2 = 0
        L10:
            int r3 = r5.length
            if (r2 == r3) goto L1d
            r3 = r5[r2]
            r4 = r6[r2]
            if (r3 == r4) goto L1a
            return r1
        L1a:
            int r2 = r2 + 1
            goto L10
        L1d:
            return r0
        L1e:
            return r1
    }

    public static boolean areEqual(int[] r5, int[] r6) {
            r0 = 1
            if (r5 != r6) goto L4
            return r0
        L4:
            r1 = 0
            if (r5 == 0) goto L1e
            if (r6 != 0) goto La
            goto L1e
        La:
            int r2 = r5.length
            int r3 = r6.length
            if (r2 == r3) goto Lf
            return r1
        Lf:
            r2 = 0
        L10:
            int r3 = r5.length
            if (r2 == r3) goto L1d
            r3 = r5[r2]
            r4 = r6[r2]
            if (r3 == r4) goto L1a
            return r1
        L1a:
            int r2 = r2 + 1
            goto L10
        L1d:
            return r0
        L1e:
            return r1
    }

    public static byte[] clone(byte[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            byte[] r0 = new byte[r0]
            int r1 = r3.length
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r0, r2, r1)
            return r0
    }

    public static int[] clone(int[] r3) {
            if (r3 != 0) goto L4
            r3 = 0
            return r3
        L4:
            int r0 = r3.length
            int[] r0 = new int[r0]
            int r1 = r3.length
            r2 = 0
            java.lang.System.arraycopy(r3, r2, r0, r2, r1)
            return r0
    }

    public static void fill(byte[] r2, byte r3) {
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto L9
            r2[r0] = r3
            int r0 = r0 + 1
            goto L1
        L9:
            return
    }

    public static void fill(long[] r2, long r3) {
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto L9
            r2[r0] = r3
            int r0 = r0 + 1
            goto L1
        L9:
            return
    }

    public static void fill(short[] r2, short r3) {
            r0 = 0
        L1:
            int r1 = r2.length
            if (r0 >= r1) goto L9
            r2[r0] = r3
            int r0 = r0 + 1
            goto L1
        L9:
            return
    }

    public static int hashCode(byte[] r4) {
            r0 = 0
            if (r4 == 0) goto L13
            r1 = 0
        L4:
            int r2 = r4.length
            if (r0 == r2) goto L12
            r2 = r4[r0]
            r2 = r2 & 255(0xff, float:3.57E-43)
            int r3 = r0 % 4
            int r2 = r2 << r3
            r1 = r1 ^ r2
            int r0 = r0 + 1
            goto L4
        L12:
            r0 = r1
        L13:
            return r0
    }
}
