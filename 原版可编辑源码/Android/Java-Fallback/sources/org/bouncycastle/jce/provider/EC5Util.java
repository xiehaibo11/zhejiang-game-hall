package org.bouncycastle.jce.provider;

public class EC5Util {
    public EC5Util() {
            r0 = this;
            r0.<init>()
            return
    }

    static java.security.spec.EllipticCurve convertCurve(org.bouncycastle.math.ec.ECCurve r5, byte[] r6) {
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

    static org.bouncycastle.math.ec.ECCurve convertCurve(java.security.spec.EllipticCurve r8) {
            java.security.spec.ECField r0 = r8.getField()
            java.math.BigInteger r6 = r8.getA()
            java.math.BigInteger r7 = r8.getB()
            boolean r8 = r0 instanceof java.security.spec.ECFieldFp
            if (r8 == 0) goto L1c
            org.bouncycastle.math.ec.ECCurve$Fp r8 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.security.spec.ECFieldFp r0 = (java.security.spec.ECFieldFp) r0
            java.math.BigInteger r0 = r0.getP()
            r8.<init>(r0, r6, r7)
            return r8
        L1c:
            java.security.spec.ECFieldF2m r0 = (java.security.spec.ECFieldF2m) r0
            int r2 = r0.getM()
            int[] r8 = r0.getMidTermsOfReductionPolynomial()
            int[] r8 = org.bouncycastle.jce.provider.ECUtil.convertMidTerms(r8)
            org.bouncycastle.math.ec.ECCurve$F2m r0 = new org.bouncycastle.math.ec.ECCurve$F2m
            r1 = 0
            r3 = r8[r1]
            r1 = 1
            r4 = r8[r1]
            r1 = 2
            r5 = r8[r1]
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6, r7)
            return r0
    }

    static org.bouncycastle.math.ec.ECPoint convertPoint(java.security.spec.ECParameterSpec r0, java.security.spec.ECPoint r1, boolean r2) {
            java.security.spec.EllipticCurve r0 = r0.getCurve()
            org.bouncycastle.math.ec.ECCurve r0 = convertCurve(r0)
            org.bouncycastle.math.ec.ECPoint r0 = convertPoint(r0, r1, r2)
            return r0
    }

    static org.bouncycastle.math.ec.ECPoint convertPoint(org.bouncycastle.math.ec.ECCurve r1, java.security.spec.ECPoint r2, boolean r3) {
            java.math.BigInteger r0 = r2.getAffineX()
            java.math.BigInteger r2 = r2.getAffineY()
            org.bouncycastle.math.ec.ECPoint r1 = r1.createPoint(r0, r2, r3)
            return r1
    }

    static java.security.spec.ECParameterSpec convertSpec(java.security.spec.EllipticCurve r7, org.bouncycastle.jce.spec.ECParameterSpec r8) {
            boolean r0 = r8 instanceof org.bouncycastle.jce.spec.ECNamedCurveParameterSpec
            if (r0 == 0) goto L38
            org.bouncycastle.jce.spec.ECNamedCurveSpec r0 = new org.bouncycastle.jce.spec.ECNamedCurveSpec
            r1 = r8
            org.bouncycastle.jce.spec.ECNamedCurveParameterSpec r1 = (org.bouncycastle.jce.spec.ECNamedCurveParameterSpec) r1
            java.lang.String r2 = r1.getName()
            java.security.spec.ECPoint r4 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r1 = r8.getG()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getX()
            java.math.BigInteger r1 = r1.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r3 = r8.getG()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            java.math.BigInteger r3 = r3.toBigInteger()
            r4.<init>(r1, r3)
            java.math.BigInteger r5 = r8.getN()
            java.math.BigInteger r6 = r8.getH()
            r1 = r0
            r3 = r7
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
        L38:
            java.security.spec.ECParameterSpec r0 = new java.security.spec.ECParameterSpec
            java.security.spec.ECPoint r1 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECPoint r2 = r8.getG()
            org.bouncycastle.math.ec.ECFieldElement r2 = r2.getX()
            java.math.BigInteger r2 = r2.toBigInteger()
            org.bouncycastle.math.ec.ECPoint r3 = r8.getG()
            org.bouncycastle.math.ec.ECFieldElement r3 = r3.getY()
            java.math.BigInteger r3 = r3.toBigInteger()
            r1.<init>(r2, r3)
            java.math.BigInteger r2 = r8.getN()
            java.math.BigInteger r8 = r8.getH()
            int r8 = r8.intValue()
            r0.<init>(r7, r1, r2, r8)
            return r0
    }

    static org.bouncycastle.jce.spec.ECParameterSpec convertSpec(java.security.spec.ECParameterSpec r7, boolean r8) {
            java.security.spec.EllipticCurve r0 = r7.getCurve()
            org.bouncycastle.math.ec.ECCurve r2 = convertCurve(r0)
            org.bouncycastle.jce.spec.ECParameterSpec r0 = new org.bouncycastle.jce.spec.ECParameterSpec
            java.security.spec.ECPoint r1 = r7.getGenerator()
            org.bouncycastle.math.ec.ECPoint r3 = convertPoint(r2, r1, r8)
            java.math.BigInteger r4 = r7.getOrder()
            int r8 = r7.getCofactor()
            long r5 = (long) r8
            java.math.BigInteger r5 = java.math.BigInteger.valueOf(r5)
            java.security.spec.EllipticCurve r7 = r7.getCurve()
            byte[] r6 = r7.getSeed()
            r1 = r0
            r1.<init>(r2, r3, r4, r5, r6)
            return r0
    }
}
