package org.bouncycastle.jce;

public class ECPointUtil {
    public ECPointUtil() {
            r0 = this;
            r0.<init>()
            return
    }

    public static java.security.spec.ECPoint decodePoint(java.security.spec.EllipticCurve r11, byte[] r12) {
            java.security.spec.ECField r0 = r11.getField()
            boolean r0 = r0 instanceof java.security.spec.ECFieldFp
            if (r0 == 0) goto L20
            org.bouncycastle.math.ec.ECCurve$Fp r0 = new org.bouncycastle.math.ec.ECCurve$Fp
            java.security.spec.ECField r1 = r11.getField()
            java.security.spec.ECFieldFp r1 = (java.security.spec.ECFieldFp) r1
            java.math.BigInteger r1 = r1.getP()
            java.math.BigInteger r2 = r11.getA()
            java.math.BigInteger r11 = r11.getB()
            r0.<init>(r1, r2, r11)
            goto L6a
        L20:
            java.security.spec.ECField r0 = r11.getField()
            java.security.spec.ECFieldF2m r0 = (java.security.spec.ECFieldF2m) r0
            int[] r0 = r0.getMidTermsOfReductionPolynomial()
            int r1 = r0.length
            r2 = 3
            r3 = 0
            if (r1 != r2) goto L50
            org.bouncycastle.math.ec.ECCurve$F2m r1 = new org.bouncycastle.math.ec.ECCurve$F2m
            java.security.spec.ECField r2 = r11.getField()
            java.security.spec.ECFieldF2m r2 = (java.security.spec.ECFieldF2m) r2
            int r5 = r2.getM()
            r2 = 2
            r6 = r0[r2]
            r2 = 1
            r7 = r0[r2]
            r8 = r0[r3]
            java.math.BigInteger r9 = r11.getA()
            java.math.BigInteger r10 = r11.getB()
            r4 = r1
            r4.<init>(r5, r6, r7, r8, r9, r10)
            goto L69
        L50:
            org.bouncycastle.math.ec.ECCurve$F2m r1 = new org.bouncycastle.math.ec.ECCurve$F2m
            java.security.spec.ECField r2 = r11.getField()
            java.security.spec.ECFieldF2m r2 = (java.security.spec.ECFieldF2m) r2
            int r2 = r2.getM()
            r0 = r0[r3]
            java.math.BigInteger r3 = r11.getA()
            java.math.BigInteger r11 = r11.getB()
            r1.<init>(r2, r0, r3, r11)
        L69:
            r0 = r1
        L6a:
            org.bouncycastle.math.ec.ECPoint r11 = r0.decodePoint(r12)
            java.security.spec.ECPoint r12 = new java.security.spec.ECPoint
            org.bouncycastle.math.ec.ECFieldElement r0 = r11.getX()
            java.math.BigInteger r0 = r0.toBigInteger()
            org.bouncycastle.math.ec.ECFieldElement r11 = r11.getY()
            java.math.BigInteger r11 = r11.toBigInteger()
            r12.<init>(r0, r11)
            return r12
    }
}
