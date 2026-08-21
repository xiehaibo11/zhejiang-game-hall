package org.bouncycastle.math.ec;

class Tnaf {
    private static final java.math.BigInteger MINUS_ONE = null;
    private static final java.math.BigInteger MINUS_THREE = null;
    private static final java.math.BigInteger MINUS_TWO = null;
    public static final byte POW_2_WIDTH = 16;
    public static final byte WIDTH = 4;
    public static final org.bouncycastle.math.ec.ZTauElement[] alpha0 = null;
    public static final byte[][] alpha0Tnaf = null;
    public static final org.bouncycastle.math.ec.ZTauElement[] alpha1 = null;
    public static final byte[][] alpha1Tnaf = null;

    static {
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r0 = r0.negate()
            org.bouncycastle.math.ec.Tnaf.MINUS_ONE = r0
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.TWO
            java.math.BigInteger r0 = r0.negate()
            org.bouncycastle.math.ec.Tnaf.MINUS_TWO = r0
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.THREE
            java.math.BigInteger r0 = r0.negate()
            org.bouncycastle.math.ec.Tnaf.MINUS_THREE = r0
            r0 = 9
            org.bouncycastle.math.ec.ZTauElement[] r1 = new org.bouncycastle.math.ec.ZTauElement[r0]
            r2 = 0
            r3 = 0
            r1[r2] = r3
            org.bouncycastle.math.ec.ZTauElement r4 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ZERO
            r4.<init>(r5, r6)
            r5 = 1
            r1[r5] = r4
            r4 = 2
            r1[r4] = r3
            org.bouncycastle.math.ec.ZTauElement r6 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r7 = org.bouncycastle.math.ec.Tnaf.MINUS_THREE
            java.math.BigInteger r8 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            r6.<init>(r7, r8)
            r7 = 3
            r1[r7] = r6
            r6 = 4
            r1[r6] = r3
            org.bouncycastle.math.ec.ZTauElement r8 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r9 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            r8.<init>(r9, r9)
            r9 = 5
            r1[r9] = r8
            r8 = 6
            r1[r8] = r3
            org.bouncycastle.math.ec.ZTauElement r10 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r11 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r12 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            r10.<init>(r11, r12)
            r11 = 7
            r1[r11] = r10
            r10 = 8
            r1[r10] = r3
            org.bouncycastle.math.ec.Tnaf.alpha0 = r1
            byte[][] r1 = new byte[r10][]
            r1[r2] = r3
            byte[] r12 = new byte[r5]
            r12[r2] = r5
            r1[r5] = r12
            r1[r4] = r3
            byte[] r12 = new byte[r7]
            r12 = {x00e6: FILL_ARRAY_DATA , data: [-1, 0, 1} // fill-array
            r1[r7] = r12
            r1[r6] = r3
            byte[] r12 = new byte[r7]
            r12 = {x00ec: FILL_ARRAY_DATA , data: [1, 0, 1} // fill-array
            r1[r9] = r12
            r1[r8] = r3
            byte[] r12 = new byte[r6]
            r12 = {x00f2: FILL_ARRAY_DATA , data: [-1, 0, 0, 1} // fill-array
            r1[r11] = r12
            org.bouncycastle.math.ec.Tnaf.alpha0Tnaf = r1
            org.bouncycastle.math.ec.ZTauElement[] r0 = new org.bouncycastle.math.ec.ZTauElement[r0]
            r0[r2] = r3
            org.bouncycastle.math.ec.ZTauElement r1 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r12 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r13 = org.bouncycastle.math.ec.ECConstants.ZERO
            r1.<init>(r12, r13)
            r0[r5] = r1
            r0[r4] = r3
            org.bouncycastle.math.ec.ZTauElement r1 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r12 = org.bouncycastle.math.ec.Tnaf.MINUS_THREE
            java.math.BigInteger r13 = org.bouncycastle.math.ec.ECConstants.ONE
            r1.<init>(r12, r13)
            r0[r7] = r1
            r0[r6] = r3
            org.bouncycastle.math.ec.ZTauElement r1 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r12 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            java.math.BigInteger r13 = org.bouncycastle.math.ec.ECConstants.ONE
            r1.<init>(r12, r13)
            r0[r9] = r1
            r0[r8] = r3
            org.bouncycastle.math.ec.ZTauElement r1 = new org.bouncycastle.math.ec.ZTauElement
            java.math.BigInteger r12 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r13 = org.bouncycastle.math.ec.ECConstants.ONE
            r1.<init>(r12, r13)
            r0[r11] = r1
            r0[r10] = r3
            org.bouncycastle.math.ec.Tnaf.alpha1 = r0
            byte[][] r0 = new byte[r10][]
            r0[r2] = r3
            byte[] r1 = new byte[r5]
            r1[r2] = r5
            r0[r5] = r1
            r0[r4] = r3
            byte[] r1 = new byte[r7]
            r1 = {x00f8: FILL_ARRAY_DATA , data: [-1, 0, 1} // fill-array
            r0[r7] = r1
            r0[r6] = r3
            byte[] r1 = new byte[r7]
            r1 = {x00fe: FILL_ARRAY_DATA , data: [1, 0, 1} // fill-array
            r0[r9] = r1
            r0[r8] = r3
            byte[] r1 = new byte[r6]
            r1 = {x0104: FILL_ARRAY_DATA , data: [-1, 0, 0, -1} // fill-array
            r0[r11] = r1
            org.bouncycastle.math.ec.Tnaf.alpha1Tnaf = r0
            return
    }

    Tnaf() {
            r0 = this;
            r0.<init>()
            return
    }

    public static org.bouncycastle.math.ec.SimpleBigDecimal approximateDivisionByN(java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4, byte r5, int r6, int r7) {
            int r0 = r6 + 5
            int r0 = r0 / 2
            int r0 = r0 + r7
            int r1 = r6 - r0
            int r1 = r1 + (-2)
            int r1 = r1 + r5
            java.math.BigInteger r2 = r2.shiftRight(r1)
            java.math.BigInteger r2 = r3.multiply(r2)
            java.math.BigInteger r3 = r2.shiftRight(r6)
            java.math.BigInteger r3 = r4.multiply(r3)
            java.math.BigInteger r2 = r2.add(r3)
            int r0 = r0 - r7
            java.math.BigInteger r3 = r2.shiftRight(r0)
            int r0 = r0 + (-1)
            boolean r2 = r2.testBit(r0)
            if (r2 == 0) goto L31
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r3 = r3.add(r2)
        L31:
            org.bouncycastle.math.ec.SimpleBigDecimal r2 = new org.bouncycastle.math.ec.SimpleBigDecimal
            r2.<init>(r3, r7)
            return r2
    }

    public static java.math.BigInteger[] getLucas(byte r5, int r6, boolean r7) {
            r0 = 1
            if (r5 == r0) goto Lf
            r1 = -1
            if (r5 != r1) goto L7
            goto Lf
        L7:
            java.lang.IllegalArgumentException r5 = new java.lang.IllegalArgumentException
            java.lang.String r6 = "mu must be 1 or -1"
            r5.<init>(r6)
            throw r5
        Lf:
            if (r7 == 0) goto L19
            java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.TWO
            long r1 = (long) r5
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            goto L1d
        L19:
            java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.ZERO
            java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
        L1d:
            r2 = 1
        L1e:
            if (r2 >= r6) goto L36
            if (r5 != r0) goto L24
            r3 = r1
            goto L28
        L24:
            java.math.BigInteger r3 = r1.negate()
        L28:
            java.math.BigInteger r7 = r7.shiftLeft(r0)
            java.math.BigInteger r7 = r3.subtract(r7)
            int r2 = r2 + 1
            r4 = r1
            r1 = r7
            r7 = r4
            goto L1e
        L36:
            r5 = 2
            java.math.BigInteger[] r5 = new java.math.BigInteger[r5]
            r6 = 0
            r5[r6] = r7
            r5[r0] = r1
            return r5
    }

    public static byte getMu(org.bouncycastle.math.ec.ECCurve.F2m r1) {
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.getA()
            java.math.BigInteger r1 = r1.toBigInteger()
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r0 = r1.equals(r0)
            if (r0 == 0) goto L12
            r1 = -1
            goto L1b
        L12:
            java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ONE
            boolean r1 = r1.equals(r0)
            if (r1 == 0) goto L1c
            r1 = 1
        L1b:
            return r1
        L1c:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "No Koblitz curve (ABC), TNAF multiplication not possible"
            r1.<init>(r0)
            throw r1
    }

    public static org.bouncycastle.math.ec.ECPoint.F2m[] getPreComp(org.bouncycastle.math.ec.ECPoint.F2m r4, byte r5) {
            r0 = 16
            org.bouncycastle.math.ec.ECPoint$F2m[] r0 = new org.bouncycastle.math.ec.ECPoint.F2m[r0]
            r1 = 1
            r0[r1] = r4
            if (r5 != 0) goto Lc
            byte[][] r5 = org.bouncycastle.math.ec.Tnaf.alpha0Tnaf
            goto Le
        Lc:
            byte[][] r5 = org.bouncycastle.math.ec.Tnaf.alpha1Tnaf
        Le:
            int r1 = r5.length
            r2 = 3
        L10:
            if (r2 >= r1) goto L1d
            r3 = r5[r2]
            org.bouncycastle.math.ec.ECPoint$F2m r3 = multiplyFromTnaf(r4, r3)
            r0[r2] = r3
            int r2 = r2 + 2
            goto L10
        L1d:
            return r0
    }

    public static java.math.BigInteger[] getSi(org.bouncycastle.math.ec.ECCurve.F2m r7) {
            boolean r0 = r7.isKoblitz()
            if (r0 == 0) goto L8b
            int r0 = r7.getM()
            org.bouncycastle.math.ec.ECFieldElement r1 = r7.getA()
            java.math.BigInteger r1 = r1.toBigInteger()
            int r1 = r1.intValue()
            byte r2 = r7.getMu()
            java.math.BigInteger r7 = r7.getH()
            int r7 = r7.intValue()
            int r0 = r0 + 3
            int r0 = r0 - r1
            r1 = 0
            java.math.BigInteger[] r0 = getLucas(r2, r0, r1)
            r3 = 1
            if (r2 != r3) goto L3e
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
            r4 = r0[r3]
            java.math.BigInteger r2 = r2.subtract(r4)
            java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.ONE
            r0 = r0[r1]
            java.math.BigInteger r0 = r4.subtract(r0)
            goto L51
        L3e:
            r4 = -1
            if (r2 != r4) goto L83
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
            r4 = r0[r3]
            java.math.BigInteger r2 = r2.add(r4)
            java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.ONE
            r0 = r0[r1]
            java.math.BigInteger r0 = r4.add(r0)
        L51:
            r4 = 2
            java.math.BigInteger[] r5 = new java.math.BigInteger[r4]
            if (r7 != r4) goto L67
            java.math.BigInteger r7 = r2.shiftRight(r3)
            r5[r1] = r7
            java.math.BigInteger r7 = r0.shiftRight(r3)
            java.math.BigInteger r7 = r7.negate()
            r5[r3] = r7
            goto L7a
        L67:
            r6 = 4
            if (r7 != r6) goto L7b
            java.math.BigInteger r7 = r2.shiftRight(r4)
            r5[r1] = r7
            java.math.BigInteger r7 = r0.shiftRight(r4)
            java.math.BigInteger r7 = r7.negate()
            r5[r3] = r7
        L7a:
            return r5
        L7b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "h (Cofactor) must be 2 or 4"
            r7.<init>(r0)
            throw r7
        L83:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "mu must be 1 or -1"
            r7.<init>(r0)
            throw r7
        L8b:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "si is defined for Koblitz curves only"
            r7.<init>(r0)
            throw r7
    }

    public static java.math.BigInteger getTw(byte r3, int r4) {
            r0 = 1
            r1 = 4
            if (r4 != r1) goto L14
            if (r3 != r0) goto Ld
            r3 = 6
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            return r3
        Ld:
            r3 = 10
            java.math.BigInteger r3 = java.math.BigInteger.valueOf(r3)
            return r3
        L14:
            r1 = 0
            java.math.BigInteger[] r3 = getLucas(r3, r4, r1)
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ZERO
            java.math.BigInteger r4 = r2.setBit(r4)
            r0 = r3[r0]
            java.math.BigInteger r0 = r0.modInverse(r4)
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.TWO
            r3 = r3[r1]
            java.math.BigInteger r3 = r2.multiply(r3)
            java.math.BigInteger r3 = r3.multiply(r0)
            java.math.BigInteger r3 = r3.mod(r4)
            return r3
    }

    public static org.bouncycastle.math.ec.ECPoint.F2m multiplyFromTnaf(org.bouncycastle.math.ec.ECPoint.F2m r5, byte[] r6) {
            org.bouncycastle.math.ec.ECCurve r0 = r5.getCurve()
            org.bouncycastle.math.ec.ECCurve$F2m r0 = (org.bouncycastle.math.ec.ECCurve.F2m) r0
            org.bouncycastle.math.ec.ECPoint r0 = r0.getInfinity()
            org.bouncycastle.math.ec.ECPoint$F2m r0 = (org.bouncycastle.math.ec.ECPoint.F2m) r0
            int r1 = r6.length
            r2 = 1
            int r1 = r1 - r2
        Lf:
            if (r1 < 0) goto L2a
            org.bouncycastle.math.ec.ECPoint$F2m r0 = tau(r0)
            r3 = r6[r1]
            if (r3 != r2) goto L1e
            org.bouncycastle.math.ec.ECPoint$F2m r0 = r0.addSimple(r5)
            goto L27
        L1e:
            r3 = r6[r1]
            r4 = -1
            if (r3 != r4) goto L27
            org.bouncycastle.math.ec.ECPoint$F2m r0 = r0.subtractSimple(r5)
        L27:
            int r1 = r1 + (-1)
            goto Lf
        L2a:
            return r0
    }

    public static org.bouncycastle.math.ec.ECPoint.F2m multiplyRTnaf(org.bouncycastle.math.ec.ECPoint.F2m r7, java.math.BigInteger r8) {
            org.bouncycastle.math.ec.ECCurve r0 = r7.getCurve()
            org.bouncycastle.math.ec.ECCurve$F2m r0 = (org.bouncycastle.math.ec.ECCurve.F2m) r0
            int r2 = r0.getM()
            org.bouncycastle.math.ec.ECFieldElement r1 = r0.getA()
            java.math.BigInteger r1 = r1.toBigInteger()
            int r1 = r1.intValue()
            byte r3 = (byte) r1
            byte r5 = r0.getMu()
            java.math.BigInteger[] r4 = r0.getSi()
            r6 = 10
            r1 = r8
            org.bouncycastle.math.ec.ZTauElement r8 = partModReduction(r1, r2, r3, r4, r5, r6)
            org.bouncycastle.math.ec.ECPoint$F2m r7 = multiplyTnaf(r7, r8)
            return r7
    }

    public static org.bouncycastle.math.ec.ECPoint.F2m multiplyTnaf(org.bouncycastle.math.ec.ECPoint.F2m r1, org.bouncycastle.math.ec.ZTauElement r2) {
            org.bouncycastle.math.ec.ECCurve r0 = r1.getCurve()
            org.bouncycastle.math.ec.ECCurve$F2m r0 = (org.bouncycastle.math.ec.ECCurve.F2m) r0
            byte r0 = r0.getMu()
            byte[] r2 = tauAdicNaf(r0, r2)
            org.bouncycastle.math.ec.ECPoint$F2m r1 = multiplyFromTnaf(r1, r2)
            return r1
    }

    public static java.math.BigInteger norm(byte r3, org.bouncycastle.math.ec.ZTauElement r4) {
            java.math.BigInteger r0 = r4.u
            java.math.BigInteger r1 = r4.u
            java.math.BigInteger r0 = r0.multiply(r1)
            java.math.BigInteger r1 = r4.u
            java.math.BigInteger r2 = r4.v
            java.math.BigInteger r1 = r1.multiply(r2)
            java.math.BigInteger r2 = r4.v
            java.math.BigInteger r4 = r4.v
            java.math.BigInteger r4 = r2.multiply(r4)
            r2 = 1
            java.math.BigInteger r4 = r4.shiftLeft(r2)
            if (r3 != r2) goto L28
            java.math.BigInteger r3 = r0.add(r1)
        L23:
            java.math.BigInteger r3 = r3.add(r4)
            goto L30
        L28:
            r2 = -1
            if (r3 != r2) goto L31
            java.math.BigInteger r3 = r0.subtract(r1)
            goto L23
        L30:
            return r3
        L31:
            java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
            java.lang.String r4 = "mu must be 1 or -1"
            r3.<init>(r4)
            throw r3
    }

    public static org.bouncycastle.math.ec.SimpleBigDecimal norm(byte r2, org.bouncycastle.math.ec.SimpleBigDecimal r3, org.bouncycastle.math.ec.SimpleBigDecimal r4) {
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = r3.multiply(r3)
            org.bouncycastle.math.ec.SimpleBigDecimal r3 = r3.multiply(r4)
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = r4.multiply(r4)
            r1 = 1
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = r4.shiftLeft(r1)
            if (r2 != r1) goto L1c
            org.bouncycastle.math.ec.SimpleBigDecimal r2 = r0.add(r3)
        L17:
            org.bouncycastle.math.ec.SimpleBigDecimal r2 = r2.add(r4)
            goto L24
        L1c:
            r1 = -1
            if (r2 != r1) goto L25
            org.bouncycastle.math.ec.SimpleBigDecimal r2 = r0.subtract(r3)
            goto L17
        L24:
            return r2
        L25:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r3 = "mu must be 1 or -1"
            r2.<init>(r3)
            throw r2
    }

    public static org.bouncycastle.math.ec.ZTauElement partModReduction(java.math.BigInteger r13, int r14, byte r15, java.math.BigInteger[] r16, byte r17, byte r18) {
            r0 = r17
            r1 = 0
            r2 = 1
            if (r0 != r2) goto Lf
            r3 = r16[r1]
            r4 = r16[r2]
            java.math.BigInteger r3 = r3.add(r4)
            goto L17
        Lf:
            r3 = r16[r1]
            r4 = r16[r2]
            java.math.BigInteger r3 = r3.subtract(r4)
        L17:
            r10 = r14
            java.math.BigInteger[] r4 = getLucas(r0, r14, r2)
            r11 = r4[r2]
            r5 = r16[r1]
            r4 = r13
            r6 = r11
            r7 = r15
            r8 = r14
            r9 = r18
            org.bouncycastle.math.ec.SimpleBigDecimal r12 = approximateDivisionByN(r4, r5, r6, r7, r8, r9)
            r5 = r16[r2]
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = approximateDivisionByN(r4, r5, r6, r7, r8, r9)
            org.bouncycastle.math.ec.ZTauElement r0 = round(r12, r4, r0)
            java.math.BigInteger r4 = r0.u
            java.math.BigInteger r3 = r3.multiply(r4)
            r4 = r13
            java.math.BigInteger r3 = r13.subtract(r3)
            r4 = 2
            java.math.BigInteger r4 = java.math.BigInteger.valueOf(r4)
            r5 = r16[r2]
            java.math.BigInteger r4 = r4.multiply(r5)
            java.math.BigInteger r5 = r0.v
            java.math.BigInteger r4 = r4.multiply(r5)
            java.math.BigInteger r3 = r3.subtract(r4)
            r2 = r16[r2]
            java.math.BigInteger r4 = r0.u
            java.math.BigInteger r2 = r2.multiply(r4)
            r1 = r16[r1]
            java.math.BigInteger r0 = r0.v
            java.math.BigInteger r0 = r1.multiply(r0)
            java.math.BigInteger r0 = r2.subtract(r0)
            org.bouncycastle.math.ec.ZTauElement r1 = new org.bouncycastle.math.ec.ZTauElement
            r1.<init>(r3, r0)
            return r1
    }

    public static org.bouncycastle.math.ec.ZTauElement round(org.bouncycastle.math.ec.SimpleBigDecimal r7, org.bouncycastle.math.ec.SimpleBigDecimal r8, byte r9) {
            int r0 = r7.getScale()
            int r1 = r8.getScale()
            if (r1 != r0) goto La7
            r0 = -1
            r1 = 1
            if (r9 == r1) goto L19
            if (r9 != r0) goto L11
            goto L19
        L11:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "mu must be 1 or -1"
            r7.<init>(r8)
            throw r7
        L19:
            java.math.BigInteger r2 = r7.round()
            java.math.BigInteger r3 = r8.round()
            org.bouncycastle.math.ec.SimpleBigDecimal r7 = r7.subtract(r2)
            org.bouncycastle.math.ec.SimpleBigDecimal r8 = r8.subtract(r3)
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = r7.add(r7)
            if (r9 != r1) goto L34
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = r4.add(r8)
            goto L38
        L34:
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = r4.subtract(r8)
        L38:
            org.bouncycastle.math.ec.SimpleBigDecimal r5 = r8.add(r8)
            org.bouncycastle.math.ec.SimpleBigDecimal r5 = r5.add(r8)
            org.bouncycastle.math.ec.SimpleBigDecimal r8 = r5.add(r8)
            if (r9 != r1) goto L4f
            org.bouncycastle.math.ec.SimpleBigDecimal r5 = r7.subtract(r5)
            org.bouncycastle.math.ec.SimpleBigDecimal r7 = r7.add(r8)
            goto L57
        L4f:
            org.bouncycastle.math.ec.SimpleBigDecimal r5 = r7.add(r5)
            org.bouncycastle.math.ec.SimpleBigDecimal r7 = r7.subtract(r8)
        L57:
            java.math.BigInteger r8 = org.bouncycastle.math.ec.ECConstants.ONE
            int r8 = r4.compareTo(r8)
            r6 = 0
            if (r8 < 0) goto L69
            java.math.BigInteger r8 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            int r8 = r5.compareTo(r8)
            if (r8 >= 0) goto L73
            goto L71
        L69:
            java.math.BigInteger r8 = org.bouncycastle.math.ec.ECConstants.TWO
            int r8 = r7.compareTo(r8)
            if (r8 < 0) goto L72
        L71:
            r6 = r9
        L72:
            r1 = 0
        L73:
            java.math.BigInteger r8 = org.bouncycastle.math.ec.Tnaf.MINUS_ONE
            int r8 = r4.compareTo(r8)
            if (r8 >= 0) goto L84
            java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.ONE
            int r7 = r5.compareTo(r7)
            if (r7 < 0) goto L8f
            goto L8c
        L84:
            java.math.BigInteger r8 = org.bouncycastle.math.ec.Tnaf.MINUS_TWO
            int r7 = r7.compareTo(r8)
            if (r7 >= 0) goto L8e
        L8c:
            int r7 = -r9
            byte r6 = (byte) r7
        L8e:
            r0 = r1
        L8f:
            long r7 = (long) r0
            java.math.BigInteger r7 = java.math.BigInteger.valueOf(r7)
            java.math.BigInteger r7 = r2.add(r7)
            long r8 = (long) r6
            java.math.BigInteger r8 = java.math.BigInteger.valueOf(r8)
            java.math.BigInteger r8 = r3.add(r8)
            org.bouncycastle.math.ec.ZTauElement r9 = new org.bouncycastle.math.ec.ZTauElement
            r9.<init>(r7, r8)
            return r9
        La7:
            java.lang.IllegalArgumentException r7 = new java.lang.IllegalArgumentException
            java.lang.String r8 = "lambda0 and lambda1 do not have same scale"
            r7.<init>(r8)
            throw r7
    }

    public static org.bouncycastle.math.ec.ECPoint.F2m tau(org.bouncycastle.math.ec.ECPoint.F2m r4) {
            boolean r0 = r4.isInfinity()
            if (r0 == 0) goto L7
            return r4
        L7:
            org.bouncycastle.math.ec.ECFieldElement r0 = r4.getX()
            org.bouncycastle.math.ec.ECFieldElement r1 = r4.getY()
            org.bouncycastle.math.ec.ECPoint$F2m r2 = new org.bouncycastle.math.ec.ECPoint$F2m
            org.bouncycastle.math.ec.ECCurve r3 = r4.getCurve()
            org.bouncycastle.math.ec.ECFieldElement r0 = r0.square()
            org.bouncycastle.math.ec.ECFieldElement r1 = r1.square()
            boolean r4 = r4.isCompressed()
            r2.<init>(r3, r0, r1, r4)
            return r2
    }

    public static byte[] tauAdicNaf(byte r9, org.bouncycastle.math.ec.ZTauElement r10) {
            r0 = 1
            if (r9 == r0) goto Lf
            r1 = -1
            if (r9 != r1) goto L7
            goto Lf
        L7:
            java.lang.IllegalArgumentException r9 = new java.lang.IllegalArgumentException
            java.lang.String r10 = "mu must be 1 or -1"
            r9.<init>(r10)
            throw r9
        Lf:
            java.math.BigInteger r1 = norm(r9, r10)
            int r1 = r1.bitLength()
            r2 = 30
            if (r1 <= r2) goto L1e
            int r1 = r1 + 4
            goto L20
        L1e:
            r1 = 34
        L20:
            byte[] r1 = new byte[r1]
            java.math.BigInteger r2 = r10.u
            java.math.BigInteger r10 = r10.v
            r3 = 0
            r4 = 0
            r5 = 0
        L29:
            java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r6 = r2.equals(r6)
            if (r6 == 0) goto L41
            java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r6 = r10.equals(r6)
            if (r6 != 0) goto L3a
            goto L41
        L3a:
            int r4 = r4 + r0
            byte[] r9 = new byte[r4]
            java.lang.System.arraycopy(r1, r3, r9, r3, r4)
            return r9
        L41:
            boolean r6 = r2.testBit(r3)
            if (r6 == 0) goto L73
            java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.TWO
            java.math.BigInteger r6 = r10.shiftLeft(r0)
            java.math.BigInteger r6 = r2.subtract(r6)
            java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.FOUR
            java.math.BigInteger r6 = r6.mod(r7)
            java.math.BigInteger r4 = r4.subtract(r6)
            int r4 = r4.intValue()
            byte r4 = (byte) r4
            r1[r5] = r4
            r4 = r1[r5]
            if (r4 != r0) goto L6b
            java.math.BigInteger r2 = r2.clearBit(r3)
            goto L71
        L6b:
            java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r2 = r2.add(r4)
        L71:
            r4 = r5
            goto L75
        L73:
            r1[r5] = r3
        L75:
            java.math.BigInteger r6 = r2.shiftRight(r0)
            if (r9 != r0) goto L80
            java.math.BigInteger r10 = r10.add(r6)
            goto L84
        L80:
            java.math.BigInteger r10 = r10.subtract(r6)
        L84:
            java.math.BigInteger r2 = r2.shiftRight(r0)
            java.math.BigInteger r2 = r2.negate()
            int r5 = r5 + 1
            r8 = r2
            r2 = r10
            r10 = r8
            goto L29
    }

    public static byte[] tauAdicWNaf(byte r8, org.bouncycastle.math.ec.ZTauElement r9, byte r10, java.math.BigInteger r11, java.math.BigInteger r12, org.bouncycastle.math.ec.ZTauElement[] r13) {
            r0 = 1
            if (r8 == r0) goto Lf
            r1 = -1
            if (r8 != r1) goto L7
            goto Lf
        L7:
            java.lang.IllegalArgumentException r8 = new java.lang.IllegalArgumentException
            java.lang.String r9 = "mu must be 1 or -1"
            r8.<init>(r9)
            throw r8
        Lf:
            java.math.BigInteger r1 = norm(r8, r9)
            int r1 = r1.bitLength()
            r2 = 30
            if (r1 <= r2) goto L1f
            int r1 = r1 + 4
            int r1 = r1 + r10
            goto L21
        L1f:
            int r1 = r10 + 34
        L21:
            byte[] r10 = new byte[r1]
            java.math.BigInteger r1 = r11.shiftRight(r0)
            java.math.BigInteger r2 = r9.u
            java.math.BigInteger r9 = r9.v
            r3 = 0
            r4 = 0
        L2d:
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r5 = r2.equals(r5)
            if (r5 == 0) goto L3f
            java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r5 = r9.equals(r5)
            if (r5 != 0) goto L3e
            goto L3f
        L3e:
            return r10
        L3f:
            boolean r5 = r2.testBit(r3)
            if (r5 == 0) goto L8d
            java.math.BigInteger r5 = r9.multiply(r12)
            java.math.BigInteger r5 = r2.add(r5)
            java.math.BigInteger r5 = r5.mod(r11)
            int r6 = r5.compareTo(r1)
            if (r6 < 0) goto L5b
            java.math.BigInteger r5 = r5.subtract(r11)
        L5b:
            int r5 = r5.intValue()
            byte r5 = (byte) r5
            r10[r4] = r5
            if (r5 >= 0) goto L68
            int r5 = -r5
            byte r5 = (byte) r5
            r6 = 0
            goto L69
        L68:
            r6 = 1
        L69:
            if (r6 == 0) goto L7c
            r6 = r13[r5]
            java.math.BigInteger r6 = r6.u
            java.math.BigInteger r2 = r2.subtract(r6)
            r5 = r13[r5]
            java.math.BigInteger r5 = r5.v
            java.math.BigInteger r9 = r9.subtract(r5)
            goto L8f
        L7c:
            r6 = r13[r5]
            java.math.BigInteger r6 = r6.u
            java.math.BigInteger r2 = r2.add(r6)
            r5 = r13[r5]
            java.math.BigInteger r5 = r5.v
            java.math.BigInteger r9 = r9.add(r5)
            goto L8f
        L8d:
            r10[r4] = r3
        L8f:
            java.math.BigInteger r5 = r2.shiftRight(r0)
            if (r8 != r0) goto L9a
            java.math.BigInteger r9 = r9.add(r5)
            goto L9e
        L9a:
            java.math.BigInteger r9 = r9.subtract(r5)
        L9e:
            java.math.BigInteger r2 = r2.shiftRight(r0)
            java.math.BigInteger r2 = r2.negate()
            int r4 = r4 + 1
            r7 = r2
            r2 = r9
            r9 = r7
            goto L2d
    }
}
