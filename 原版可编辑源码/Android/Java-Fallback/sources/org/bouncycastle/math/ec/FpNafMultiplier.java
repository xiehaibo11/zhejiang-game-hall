package org.bouncycastle.math.ec;

class FpNafMultiplier implements org.bouncycastle.math.ec.ECMultiplier {
    FpNafMultiplier() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.math.ec.ECPoint multiply(org.bouncycastle.math.ec.ECPoint r6, java.math.BigInteger r7, org.bouncycastle.math.ec.PreCompInfo r8) {
            r5 = this;
            r0 = 3
            java.math.BigInteger r8 = java.math.BigInteger.valueOf(r0)
            java.math.BigInteger r8 = r7.multiply(r8)
            org.bouncycastle.math.ec.ECPoint r0 = r6.negate()
            int r1 = r8.bitLength()
            int r1 = r1 + (-2)
            r2 = r6
        L15:
            if (r1 <= 0) goto L31
            org.bouncycastle.math.ec.ECPoint r2 = r2.twice()
            boolean r3 = r8.testBit(r1)
            boolean r4 = r7.testBit(r1)
            if (r3 == r4) goto L2e
            if (r3 == 0) goto L29
            r3 = r6
            goto L2a
        L29:
            r3 = r0
        L2a:
            org.bouncycastle.math.ec.ECPoint r2 = r2.add(r3)
        L2e:
            int r1 = r1 + (-1)
            goto L15
        L31:
            return r2
    }
}
