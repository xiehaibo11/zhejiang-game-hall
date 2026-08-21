package org.bouncycastle.math.ec;

public class ECAlgorithms {
    public ECAlgorithms() {
            r0 = this;
            r0.<init>()
            return
    }

    private static org.bouncycastle.math.ec.ECPoint implShamirsTrick(org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5, org.bouncycastle.math.ec.ECPoint r6, java.math.BigInteger r7) {
            int r0 = r5.bitLength()
            int r1 = r7.bitLength()
            int r0 = java.lang.Math.max(r0, r1)
            org.bouncycastle.math.ec.ECPoint r1 = r4.add(r6)
            org.bouncycastle.math.ec.ECCurve r2 = r4.getCurve()
            org.bouncycastle.math.ec.ECPoint r2 = r2.getInfinity()
            int r0 = r0 + (-1)
        L1a:
            if (r0 < 0) goto L43
            org.bouncycastle.math.ec.ECPoint r2 = r2.twice()
            boolean r3 = r5.testBit(r0)
            if (r3 == 0) goto L36
            boolean r3 = r7.testBit(r0)
            if (r3 == 0) goto L31
            org.bouncycastle.math.ec.ECPoint r2 = r2.add(r1)
            goto L40
        L31:
            org.bouncycastle.math.ec.ECPoint r2 = r2.add(r4)
            goto L40
        L36:
            boolean r3 = r7.testBit(r0)
            if (r3 == 0) goto L40
            org.bouncycastle.math.ec.ECPoint r2 = r2.add(r6)
        L40:
            int r0 = r0 + (-1)
            goto L1a
        L43:
            return r2
    }

    public static org.bouncycastle.math.ec.ECPoint shamirsTrick(org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5) {
            org.bouncycastle.math.ec.ECCurve r0 = r2.getCurve()
            org.bouncycastle.math.ec.ECCurve r1 = r4.getCurve()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L13
            org.bouncycastle.math.ec.ECPoint r2 = implShamirsTrick(r2, r3, r4, r5)
            return r2
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "P and Q must be on same curve"
            r2.<init>(r3)
            throw r2
    }

    public static org.bouncycastle.math.ec.ECPoint sumOfTwoMultiplies(org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5) {
            org.bouncycastle.math.ec.ECCurve r0 = r2.getCurve()
            org.bouncycastle.math.ec.ECCurve r1 = r4.getCurve()
            boolean r0 = r0.equals(r1)
            if (r0 == 0) goto L13
            org.bouncycastle.math.ec.ECPoint r2 = implShamirsTrick(r2, r3, r4, r5)
            return r2
        L13:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "P and Q must be on same curve"
            r2.<init>(r3)
            throw r2
    }
}
