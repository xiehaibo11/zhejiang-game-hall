package org.bouncycastle.crypto.generators;

class DHParametersHelper {
    private static final java.math.BigInteger ONE = null;
    private static final java.math.BigInteger TWO = null;

    static {
            r0 = 1
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DHParametersHelper.ONE = r0
            r0 = 2
            java.math.BigInteger r0 = java.math.BigInteger.valueOf(r0)
            org.bouncycastle.crypto.generators.DHParametersHelper.TWO = r0
            return
    }

    DHParametersHelper() {
            r0 = this;
            r0.<init>()
            return
    }

    private static java.math.BigInteger createInRange(java.math.BigInteger r2, java.math.BigInteger r3, java.security.SecureRandom r4) {
        L0:
            java.math.BigInteger r0 = new java.math.BigInteger
            int r1 = r3.bitLength()
            r0.<init>(r1, r4)
            int r1 = r0.compareTo(r2)
            if (r1 < 0) goto L0
            int r1 = r0.compareTo(r3)
            if (r1 > 0) goto L0
            return r0
    }

    static java.math.BigInteger[] generateSafePrimes(int r5, int r6, java.security.SecureRandom r7) {
            r0 = 1
            int r5 = r5 - r0
        L2:
            java.math.BigInteger r1 = new java.math.BigInteger
            r2 = 2
            r1.<init>(r5, r2, r7)
            java.math.BigInteger r3 = r1.shiftLeft(r0)
            java.math.BigInteger r4 = org.bouncycastle.crypto.generators.DHParametersHelper.ONE
            java.math.BigInteger r3 = r3.add(r4)
            boolean r4 = r3.isProbablePrime(r6)
            if (r4 == 0) goto L2
            if (r6 <= r2) goto L20
            boolean r4 = r1.isProbablePrime(r6)
            if (r4 == 0) goto L2
        L20:
            java.math.BigInteger[] r5 = new java.math.BigInteger[r2]
            r6 = 0
            r5[r6] = r3
            r5[r0] = r1
            return r5
    }

    static java.math.BigInteger selectGenerator(java.math.BigInteger r4, java.math.BigInteger r5, java.security.SecureRandom r6) {
            java.math.BigInteger r0 = org.bouncycastle.crypto.generators.DHParametersHelper.TWO
            java.math.BigInteger r0 = r4.subtract(r0)
        L6:
            java.math.BigInteger r1 = org.bouncycastle.crypto.generators.DHParametersHelper.TWO
            java.math.BigInteger r1 = createInRange(r1, r0, r6)
            java.math.BigInteger r2 = org.bouncycastle.crypto.generators.DHParametersHelper.TWO
            java.math.BigInteger r2 = r1.modPow(r2, r4)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.DHParametersHelper.ONE
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L6
            java.math.BigInteger r2 = r1.modPow(r5, r4)
            java.math.BigInteger r3 = org.bouncycastle.crypto.generators.DHParametersHelper.ONE
            boolean r2 = r2.equals(r3)
            if (r2 != 0) goto L6
            return r1
    }
}
