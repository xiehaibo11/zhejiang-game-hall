package org.bouncycastle.crypto.params;

public class DESParameters extends org.bouncycastle.crypto.params.KeyParameter {
    public static final int DES_KEY_LENGTH = 8;
    private static byte[] DES_weak_keys = null;
    private static final int N_DES_WEAK_KEYS = 16;

    static {
            r0 = 128(0x80, float:1.8E-43)
            byte[] r0 = new byte[r0]
            r0 = {x000a: FILL_ARRAY_DATA , data: [1, 1, 1, 1, 1, 1, 1, 1, 31, 31, 31, 31, 14, 14, 14, 14, -32, -32, -32, -32, -15, -15, -15, -15, -2, -2, -2, -2, -2, -2, -2, -2, 1, -2, 1, -2, 1, -2, 1, -2, 31, -32, 31, -32, 14, -15, 14, -15, 1, -32, 1, -32, 1, -15, 1, -15, 31, -2, 31, -2, 14, -2, 14, -2, 1, 31, 1, 31, 1, 14, 1, 14, -32, -2, -32, -2, -15, -2, -15, -2, -2, 1, -2, 1, -2, 1, -2, 1, -32, 31, -32, 31, -15, 14, -15, 14, -32, 1, -32, 1, -15, 1, -15, 1, -2, 31, -2, 31, -2, 14, -2, 14, 31, 1, 31, 1, 14, 1, 14, 1, -2, -32, -2, -32, -2, -15, -2, -15} // fill-array
            org.bouncycastle.crypto.params.DESParameters.DES_weak_keys = r0
            return
    }

    public DESParameters(byte[] r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            boolean r2 = isWeakKey(r2, r0)
            if (r2 != 0) goto Lb
            return
        Lb:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "attempt to create weak DES key"
            r2.<init>(r0)
            throw r2
    }

    public static boolean isWeakKey(byte[] r7, int r8) {
            int r0 = r7.length
            int r0 = r0 - r8
            r1 = 8
            if (r0 < r1) goto L25
            r0 = 0
            r2 = 0
        L8:
            r3 = 16
            if (r2 >= r3) goto L24
            r3 = 0
        Ld:
            if (r3 >= r1) goto L22
            int r4 = r3 + r8
            r4 = r7[r4]
            byte[] r5 = org.bouncycastle.crypto.params.DESParameters.DES_weak_keys
            int r6 = r2 * 8
            int r6 = r6 + r3
            r5 = r5[r6]
            if (r4 == r5) goto L1f
            int r2 = r2 + 1
            goto L8
        L1f:
            int r3 = r3 + 1
            goto Ld
        L22:
            r7 = 1
            return r7
        L24:
            return r0
        L25:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "key material too short."
            r7.<init>(r8)
            throw r7
    }

    public static void setOddParity(byte[] r5) {
            r0 = 0
        L1:
            int r1 = r5.length
            if (r0 >= r1) goto L27
            r1 = r5[r0]
            r2 = r1 & 254(0xfe, float:3.56E-43)
            int r3 = r1 >> 1
            int r4 = r1 >> 2
            r3 = r3 ^ r4
            int r4 = r1 >> 3
            r3 = r3 ^ r4
            int r4 = r1 >> 4
            r3 = r3 ^ r4
            int r4 = r1 >> 5
            r3 = r3 ^ r4
            int r4 = r1 >> 6
            r3 = r3 ^ r4
            int r1 = r1 >> 7
            r1 = r1 ^ r3
            r1 = r1 ^ 1
            r1 = r1 & 1
            r1 = r1 | r2
            byte r1 = (byte) r1
            r5[r0] = r1
            int r0 = r0 + 1
            goto L1
        L27:
            return
    }
}
