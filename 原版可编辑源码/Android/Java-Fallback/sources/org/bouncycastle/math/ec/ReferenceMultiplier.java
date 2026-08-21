package org.bouncycastle.math.ec;

class ReferenceMultiplier implements org.bouncycastle.math.ec.ECMultiplier {
    ReferenceMultiplier() {
            r0 = this;
            r0.<init>()
            return
    }

    @Override
    public org.bouncycastle.math.ec.ECPoint multiply(org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5, org.bouncycastle.math.ec.PreCompInfo r6) {
            r3 = this;
            org.bouncycastle.math.ec.ECCurve r6 = r4.getCurve()
            org.bouncycastle.math.ec.ECPoint r6 = r6.getInfinity()
            int r0 = r5.bitLength()
            r1 = 0
        Ld:
            if (r1 >= r0) goto L20
            boolean r2 = r5.testBit(r1)
            if (r2 == 0) goto L19
            org.bouncycastle.math.ec.ECPoint r6 = r6.add(r4)
        L19:
            org.bouncycastle.math.ec.ECPoint r4 = r4.twice()
            int r1 = r1 + 1
            goto Ld
        L20:
            return r6
    }
}
