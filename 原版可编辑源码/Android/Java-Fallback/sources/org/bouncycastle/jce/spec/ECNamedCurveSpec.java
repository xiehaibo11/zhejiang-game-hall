package org.bouncycastle.jce.spec;

public class ECNamedCurveSpec extends java.security.spec.ECParameterSpec {
    private java.lang.String name;

    public ECNamedCurveSpec(java.lang.String r2, java.security.spec.EllipticCurve r3, java.security.spec.ECPoint r4, java.math.BigInteger r5) {
            r1 = this;
            r0 = 1
            r1.<init>(r3, r4, r5, r0)
            r1.name = r2
            return
    }

    public ECNamedCurveSpec(java.lang.String r1, java.security.spec.EllipticCurve r2, java.security.spec.ECPoint r3, java.math.BigInteger r4, java.math.BigInteger r5) {
            r0 = this;
            int r5 = r5.intValue()
            r0.<init>(r2, r3, r4, r5)
            r0.name = r1
            return
    }

    public ECNamedCurveSpec(java.lang.String r2, org.bouncycastle.math.ec.ECCurve r3, org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5) {
            r1 = this;
            r0 = 0
            java.security.spec.EllipticCurve r3 = convertCurve(r3, r0)
            java.security.spec.ECPoint r4 = convertPoint(r4)
            r0 = 1
            r1.<init>(r3, r4, r5, r0)
            r1.name = r2
            return
    }

    public ECNamedCurveSpec(java.lang.String r2, org.bouncycastle.math.ec.ECCurve r3, org.bouncycastle.math.ec.ECPoint r4, java.math.BigInteger r5, java.math.BigInteger r6) {
            r1 = this;
            r0 = 0
            java.security.spec.EllipticCurve r3 = convertCurve(r3, r0)
            java.security.spec.ECPoint r4 = convertPoint(r4)
            int r6 = r6.intValue()
            r1.<init>(r3, r4, r5, r6)
            r1.name = r2
            return
    }

    public ECNamedCurveSpec(java.lang.String r1, org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECPoint r3, java.math.BigInteger r4, java.math.BigInteger r5, byte[] r6) {
            r0 = this;
            java.security.spec.EllipticCurve r2 = convertCurve(r2, r6)
            java.security.spec.ECPoint r3 = convertPoint(r3)
            int r5 = r5.intValue()
            r0.<init>(r2, r3, r4, r5)
            r0.name = r1
            return
    }

    private static java.security.spec.EllipticCurve convertCurve(org.bouncycastle.math.ec.ECCurve r5, byte[] r6) {
            boolean r0 = r5 instanceof org.bouncycastle.math.ec.ECCurve.Fp
            if (r0 == 0) goto L26
            java.security.spec.EllipticCurve r0 = new java.security.spec.EllipticCurve
            java.security.spec.ECFieldFp r1 = new java.security.spec.ECFieldFp
            r2 = r5
            org.bouncycastle.math.ec.ECCurve$Fp r2 = (org.bouncycastle.math.ec.ECCurve.Fp) r2
            java.math.BigInteger r2 = r2.getQ()
            r1.<init>(r2)
            org.bouncycastle.math.ec.ECFieldElement r2 = r5.getA()
            java.math.BigInteger r2 = r2.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r5 = r5.getB()
            java.math.BigInteger r5 = r5.toBigInteger()
            r0.<init>(r1, r2, r5, r6)
            return r0
        L26:
            r0 = r5
            org.bouncycastle.math.ec.ECCurve$F2m r0 = (org.bouncycastle.math.ec.ECCurve.F2m) r0
            boolean r1 = r0.isTrinomial()
            r2 = 1
            r3 = 0
            if (r1 == 0) goto L58
            int[] r1 = new int[r2]
            int r2 = r0.getK1()
            r1[r3] = r2
            java.security.spec.EllipticCurve r2 = new java.security.spec.EllipticCurve
            java.security.spec.ECFieldF2m r3 = new java.security.spec.ECFieldF2m
            int r0 = r0.getM()
            r3.<init>(r0, r1)
            org.bouncycastle.math.ec.ECFieldElement r0 = r5.getA()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r5 = r5.getB()
            java.math.BigInteger r5 = r5.toBigInteger()
            r2.<init>(r3, r0, r5, r6)
            return r2
        L58:
            r1 = 3
            int[] r1 = new int[r1]
            int r4 = r0.getK3()
            r1[r3] = r4
            int r3 = r0.getK2()
            r1[r2] = r3
            r2 = 2
            int r3 = r0.getK1()
            r1[r2] = r3
            java.security.spec.EllipticCurve r2 = new java.security.spec.EllipticCurve
            java.security.spec.ECFieldF2m r3 = new java.security.spec.ECFieldF2m
            int r0 = r0.getM()
            r3.<init>(r0, r1)
            org.bouncycastle.math.ec.ECFieldElement r0 = r5.getA()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r5 = r5.getB()
            java.math.BigInteger r5 = r5.toBigInteger()
            r2.<init>(r3, r0, r5, r6)
            return r2
    }

    private static java.security.spec.ECPoint convertPoint(org.bouncycastle.math.ec.ECPoint r2) {
            java.security.spec.ECPoint r0 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECFieldElement r1 = r2.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getY()
            java.math.BigInteger r2 = r2.toBigInteger()
            r0.<init>(r1, r2)
            return r0
    }

    public java.lang.String getName() {
            r1 = this;
            java.lang.String r0 = r1.name
            return r0
    }
}
