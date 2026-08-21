package org.bouncycastle.crypto.generators;

class DHKeyGeneratorHelper {
    static final org.bouncycastle.crypto.generators.DHKeyGeneratorHelper INSTANCE = null;
    private static final int MAX_ITERATIONS = 1000;
    private static final java.math.BigInteger TWO = null;
    private static final java.math.BigInteger ZERO = null;

    static {
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper r0 = new org.bouncycastle.crypto.generators.DHKeyGeneratorHelper
            r0.<init>()
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.INSTANCE = r0
            r0 = 0
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.ZERO = r0
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.TWO = r0
            return
    }

    private DHKeyGeneratorHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private java.math.BigInteger createInRange(java.math.BigInteger r7, java.security.SecureRandom r8) {
            r6 = this;
            int r0 = r7.bitLength()
            r1 = 0
            r2 = 0
        L6:
            java.math.BigInteger r3 = new java.math.BigInteger
            r3.<init>(r0, r8)
            int r2 = r2 + 1
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.ZERO
            boolean r4 = r3.equals(r4)
            r5 = 1000(0x3e8, float:1.401E-42)
            if (r4 != 0) goto L1d
            int r4 = r3.compareTo(r7)
            if (r4 <= 0) goto L1f
        L1d:
            if (r2 != r5) goto L6
        L1f:
            if (r2 != r5) goto L2d
            java.math.BigInteger r7 = new java.math.BigInteger
            int r0 = r0 + (-1)
            r7.<init>(r0, r8)
            java.math.BigInteger r7 = r7.setBit(r1)
            return r7
        L2d:
            return r3
    }

    java.math.BigInteger calculatePrivate(java.math.BigInteger r2, java.security.SecureRandom r3, int r4) {
            r1 = this;
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.TWO
            java.math.BigInteger r2 = r2.subtract(r0)
            if (r4 != 0) goto Ld
            java.math.BigInteger r2 = r1.createInRange(r2, r3)
            goto L1b
        Ld:
            java.math.BigInteger r2 = new java.math.BigInteger
            r0 = 0
            r2.<init>(r4, r0, r3)
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.DHKeyGeneratorHelper.ZERO
            boolean r0 = r2.equals(r0)
            if (r0 != 0) goto Ld
        L1b:
            return r2
    }

    java.math.BigInteger calculatePublic(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3) {
            r0 = this;
            java.math.BigInteger r1 = r2.modPow(r3, r1)
            return r1
    }
}
