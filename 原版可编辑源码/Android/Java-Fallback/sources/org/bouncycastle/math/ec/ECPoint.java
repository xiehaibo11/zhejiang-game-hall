package org.bouncycastle.math.ec;

public abstract class ECPoint {
    private static org.bouncycastle.asn1.x9.X9IntegerConverter converter;
    org.bouncycastle.math.ec.ECCurve curve;
    protected org.bouncycastle.math.ec.ECMultiplier multiplier;
    protected org.bouncycastle.math.ec.PreCompInfo preCompInfo;
    protected boolean withCompression;
    org.bouncycastle.math.ec.ECFieldElement x;
    org.bouncycastle.math.ec.ECFieldElement y;

    public static class F2m extends org.bouncycastle.math.ec.ECPoint {
        public F2m(org.bouncycastle.math.ec.ECCurve r2) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r0, r0)
                return
        }

        public F2m(org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECFieldElement r3, org.bouncycastle.math.ec.ECFieldElement r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r4, r0)
                return
        }

        public F2m(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECFieldElement r2, org.bouncycastle.math.ec.ECFieldElement r3, boolean r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                if (r2 == 0) goto L7
                if (r3 == 0) goto Lc
            L7:
                if (r2 != 0) goto L14
                if (r3 != 0) goto Lc
                goto L14
            Lc:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Exactly one of the field elements is null"
                r1.<init>(r2)
                throw r1
            L14:
                if (r2 == 0) goto L2a
                org.bouncycastle.math.ec.ECFieldElement r2 = r0.x
                org.bouncycastle.math.ec.ECFieldElement r3 = r0.y
                org.bouncycastle.math.ec.ECFieldElement.F2m.checkFieldElements(r2, r3)
                if (r1 == 0) goto L2a
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.x
                org.bouncycastle.math.ec.ECCurve r2 = r0.curve
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.getA()
                org.bouncycastle.math.ec.ECFieldElement.F2m.checkFieldElements(r1, r2)
            L2a:
                r0.withCompression = r4
                return
        }

        private static void checkPoints(org.bouncycastle.math.ec.ECPoint r0, org.bouncycastle.math.ec.ECPoint r1) {
                org.bouncycastle.math.ec.ECCurve r0 = r0.curve
                org.bouncycastle.math.ec.ECCurve r1 = r1.curve
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto Lb
                return
            Lb:
                java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
                java.lang.String r1 = "Only points on the same curve can be added or subtracted"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint add(org.bouncycastle.math.ec.ECPoint r1) {
                r0 = this;
                checkPoints(r0, r1)
                org.bouncycastle.math.ec.ECPoint$F2m r1 = (org.bouncycastle.math.ec.ECPoint.F2m) r1
                org.bouncycastle.math.ec.ECPoint$F2m r1 = r0.addSimple(r1)
                return r1
        }

        public org.bouncycastle.math.ec.ECPoint.F2m addSimple(org.bouncycastle.math.ec.ECPoint.F2m r5) {
                r4 = this;
                boolean r0 = r4.isInfinity()
                if (r0 == 0) goto L7
                return r5
            L7:
                boolean r0 = r5.isInfinity()
                if (r0 == 0) goto Le
                return r4
            Le:
                org.bouncycastle.math.ec.ECFieldElement r0 = r5.getX()
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r0
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.getY()
                org.bouncycastle.math.ec.ECFieldElement$F2m r5 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r5
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
                boolean r1 = r1.equals(r0)
                if (r1 == 0) goto L38
                org.bouncycastle.math.ec.ECFieldElement r0 = r4.y
                boolean r5 = r0.equals(r5)
                if (r5 == 0) goto L31
                org.bouncycastle.math.ec.ECPoint r5 = r4.twice()
            L2e:
                org.bouncycastle.math.ec.ECPoint$F2m r5 = (org.bouncycastle.math.ec.ECPoint.F2m) r5
                return r5
            L31:
                org.bouncycastle.math.ec.ECCurve r5 = r4.curve
                org.bouncycastle.math.ec.ECPoint r5 = r5.getInfinity()
                goto L2e
            L38:
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.y
                org.bouncycastle.math.ec.ECFieldElement r5 = r1.add(r5)
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r0)
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.divide(r1)
                org.bouncycastle.math.ec.ECFieldElement$F2m r5 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r5
                org.bouncycastle.math.ec.ECFieldElement r1 = r5.square()
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r5)
                org.bouncycastle.math.ec.ECFieldElement r2 = r4.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r2)
                org.bouncycastle.math.ec.ECFieldElement r0 = r1.add(r0)
                org.bouncycastle.math.ec.ECCurve r1 = r4.curve
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.getA()
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.add(r1)
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r0
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r0)
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.multiply(r1)
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.add(r0)
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.y
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.add(r1)
                org.bouncycastle.math.ec.ECFieldElement$F2m r5 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r5
                org.bouncycastle.math.ec.ECPoint$F2m r1 = new org.bouncycastle.math.ec.ECPoint$F2m
                org.bouncycastle.math.ec.ECCurve r2 = r4.curve
                boolean r3 = r4.withCompression
                r1.<init>(r2, r0, r5, r3)
                return r1
        }

        @Override
        public byte[] getEncoded() {
                r7 = this;
                boolean r0 = r7.isInfinity()
                r1 = 1
                if (r0 == 0) goto La
                byte[] r0 = new byte[r1]
                return r0
            La:
                org.bouncycastle.asn1.x9.X9IntegerConverter r0 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r2 = r7.x
                int r0 = r0.getByteLength(r2)
                org.bouncycastle.asn1.x9.X9IntegerConverter r2 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r3 = r7.getX()
                java.math.BigInteger r3 = r3.toBigInteger()
                byte[] r2 = r2.integerToBytes(r3, r0)
                boolean r3 = r7.withCompression
                r4 = 0
                if (r3 == 0) goto L61
                int r3 = r0 + 1
                byte[] r3 = new byte[r3]
                r5 = 2
                r3[r4] = r5
                org.bouncycastle.math.ec.ECFieldElement r5 = r7.getX()
                java.math.BigInteger r5 = r5.toBigInteger()
                java.math.BigInteger r6 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r5 = r5.equals(r6)
                if (r5 != 0) goto L5d
                org.bouncycastle.math.ec.ECFieldElement r5 = r7.getY()
                org.bouncycastle.math.ec.ECFieldElement r6 = r7.getX()
                org.bouncycastle.math.ec.ECFieldElement r6 = r6.invert()
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.multiply(r6)
                java.math.BigInteger r5 = r5.toBigInteger()
                boolean r5 = r5.testBit(r4)
                if (r5 == 0) goto L5d
                r5 = 3
                r3[r4] = r5
            L5d:
                java.lang.System.arraycopy(r2, r4, r3, r1, r0)
                goto L82
            L61:
                org.bouncycastle.asn1.x9.X9IntegerConverter r3 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r5 = r7.getY()
                java.math.BigInteger r5 = r5.toBigInteger()
                byte[] r3 = r3.integerToBytes(r5, r0)
                int r5 = r0 + r0
                int r5 = r5 + r1
                byte[] r5 = new byte[r5]
                r6 = 4
                r5[r4] = r6
                java.lang.System.arraycopy(r2, r4, r5, r1, r0)
                int r1 = r0 + 1
                java.lang.System.arraycopy(r3, r4, r5, r1, r0)
                r3 = r5
            L82:
                return r3
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint negate() {
                r5 = this;
                org.bouncycastle.math.ec.ECPoint$F2m r0 = new org.bouncycastle.math.ec.ECPoint$F2m
                org.bouncycastle.math.ec.ECCurve r1 = r5.curve
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.getX()
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.getY()
                org.bouncycastle.math.ec.ECFieldElement r4 = r5.getX()
                org.bouncycastle.math.ec.ECFieldElement r3 = r3.add(r4)
                boolean r4 = r5.withCompression
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint subtract(org.bouncycastle.math.ec.ECPoint r1) {
                r0 = this;
                checkPoints(r0, r1)
                org.bouncycastle.math.ec.ECPoint$F2m r1 = (org.bouncycastle.math.ec.ECPoint.F2m) r1
                org.bouncycastle.math.ec.ECPoint$F2m r1 = r0.subtractSimple(r1)
                return r1
        }

        public org.bouncycastle.math.ec.ECPoint.F2m subtractSimple(org.bouncycastle.math.ec.ECPoint.F2m r2) {
                r1 = this;
                boolean r0 = r2.isInfinity()
                if (r0 == 0) goto L7
                return r1
            L7:
                org.bouncycastle.math.ec.ECPoint r2 = r2.negate()
                org.bouncycastle.math.ec.ECPoint$F2m r2 = (org.bouncycastle.math.ec.ECPoint.F2m) r2
                org.bouncycastle.math.ec.ECPoint$F2m r2 = r1.addSimple(r2)
                return r2
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint twice() {
                r5 = this;
                boolean r0 = r5.isInfinity()
                if (r0 == 0) goto L7
                return r5
            L7:
                org.bouncycastle.math.ec.ECFieldElement r0 = r5.x
                java.math.BigInteger r0 = r0.toBigInteger()
                int r0 = r0.signum()
                if (r0 != 0) goto L1a
                org.bouncycastle.math.ec.ECCurve r0 = r5.curve
                org.bouncycastle.math.ec.ECPoint r0 = r0.getInfinity()
                return r0
            L1a:
                org.bouncycastle.math.ec.ECFieldElement r0 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r5.y
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.divide(r2)
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.add(r1)
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r0
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.square()
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r0)
                org.bouncycastle.math.ec.ECCurve r2 = r5.curve
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.getA()
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r2)
                org.bouncycastle.math.ec.ECFieldElement$F2m r1 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r1
                org.bouncycastle.math.ec.ECCurve r2 = r5.curve
                java.math.BigInteger r3 = org.bouncycastle.math.ec.ECConstants.ONE
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.fromBigInteger(r3)
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r3 = r3.square()
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.add(r2)
                org.bouncycastle.math.ec.ECFieldElement r0 = r1.multiply(r0)
                org.bouncycastle.math.ec.ECFieldElement r0 = r3.add(r0)
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r0
                org.bouncycastle.math.ec.ECPoint$F2m r2 = new org.bouncycastle.math.ec.ECPoint$F2m
                org.bouncycastle.math.ec.ECCurve r3 = r5.curve
                boolean r4 = r5.withCompression
                r2.<init>(r3, r1, r0, r4)
                return r2
        }
    }

    public static class Fp extends org.bouncycastle.math.ec.ECPoint {
        public Fp(org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECFieldElement r3, org.bouncycastle.math.ec.ECFieldElement r4) {
                r1 = this;
                r0 = 0
                r1.<init>(r2, r3, r4, r0)
                return
        }

        public Fp(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECFieldElement r2, org.bouncycastle.math.ec.ECFieldElement r3, boolean r4) {
                r0 = this;
                r0.<init>(r1, r2, r3)
                if (r2 == 0) goto L7
                if (r3 == 0) goto Lc
            L7:
                if (r2 != 0) goto L14
                if (r3 != 0) goto Lc
                goto L14
            Lc:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "Exactly one of the field elements is null"
                r1.<init>(r2)
                throw r1
            L14:
                r0.withCompression = r4
                return
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint add(org.bouncycastle.math.ec.ECPoint r4) {
                r3 = this;
                boolean r0 = r3.isInfinity()
                if (r0 == 0) goto L7
                return r4
            L7:
                boolean r0 = r4.isInfinity()
                if (r0 == 0) goto Le
                return r3
            Le:
                org.bouncycastle.math.ec.ECFieldElement r0 = r3.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L2e
                org.bouncycastle.math.ec.ECFieldElement r0 = r3.y
                org.bouncycastle.math.ec.ECFieldElement r4 = r4.y
                boolean r4 = r0.equals(r4)
                if (r4 == 0) goto L27
                org.bouncycastle.math.ec.ECPoint r4 = r3.twice()
                return r4
            L27:
                org.bouncycastle.math.ec.ECCurve r4 = r3.curve
                org.bouncycastle.math.ec.ECPoint r4 = r4.getInfinity()
                return r4
            L2e:
                org.bouncycastle.math.ec.ECFieldElement r0 = r4.y
                org.bouncycastle.math.ec.ECFieldElement r1 = r3.y
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.subtract(r1)
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
                org.bouncycastle.math.ec.ECFieldElement r2 = r3.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.subtract(r2)
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.divide(r1)
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.square()
                org.bouncycastle.math.ec.ECFieldElement r2 = r3.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.subtract(r2)
                org.bouncycastle.math.ec.ECFieldElement r4 = r4.x
                org.bouncycastle.math.ec.ECFieldElement r4 = r1.subtract(r4)
                org.bouncycastle.math.ec.ECFieldElement r1 = r3.x
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.subtract(r4)
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.multiply(r1)
                org.bouncycastle.math.ec.ECFieldElement r1 = r3.y
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.subtract(r1)
                org.bouncycastle.math.ec.ECPoint$Fp r1 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECCurve r2 = r3.curve
                r1.<init>(r2, r4, r0)
                return r1
        }

        @Override
        public byte[] getEncoded() {
                r6 = this;
                boolean r0 = r6.isInfinity()
                r1 = 1
                if (r0 == 0) goto La
                byte[] r0 = new byte[r1]
                return r0
            La:
                org.bouncycastle.asn1.x9.X9IntegerConverter r0 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r2 = r6.x
                int r0 = r0.getByteLength(r2)
                boolean r2 = r6.withCompression
                r3 = 0
                if (r2 == 0) goto L45
                org.bouncycastle.math.ec.ECFieldElement r2 = r6.getY()
                java.math.BigInteger r2 = r2.toBigInteger()
                boolean r2 = r2.testBit(r3)
                if (r2 == 0) goto L29
                r2 = 3
                goto L2a
            L29:
                r2 = 2
            L2a:
                org.bouncycastle.asn1.x9.X9IntegerConverter r4 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r5 = r6.getX()
                java.math.BigInteger r5 = r5.toBigInteger()
                byte[] r0 = r4.integerToBytes(r5, r0)
                int r4 = r0.length
                int r4 = r4 + r1
                byte[] r4 = new byte[r4]
                r4[r3] = r2
                int r2 = r0.length
                java.lang.System.arraycopy(r0, r3, r4, r1, r2)
                return r4
            L45:
                org.bouncycastle.asn1.x9.X9IntegerConverter r2 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r4 = r6.getX()
                java.math.BigInteger r4 = r4.toBigInteger()
                byte[] r2 = r2.integerToBytes(r4, r0)
                org.bouncycastle.asn1.x9.X9IntegerConverter r4 = org.bouncycastle.math.ec.ECPoint.access$000()
                org.bouncycastle.math.ec.ECFieldElement r5 = r6.getY()
                java.math.BigInteger r5 = r5.toBigInteger()
                byte[] r0 = r4.integerToBytes(r5, r0)
                int r4 = r2.length
                int r5 = r0.length
                int r4 = r4 + r5
                int r4 = r4 + r1
                byte[] r4 = new byte[r4]
                r5 = 4
                r4[r3] = r5
                int r5 = r2.length
                java.lang.System.arraycopy(r2, r3, r4, r1, r5)
                int r2 = r2.length
                int r2 = r2 + r1
                int r1 = r0.length
                java.lang.System.arraycopy(r0, r3, r4, r2, r1)
                return r4
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint negate() {
                r5 = this;
                org.bouncycastle.math.ec.ECPoint$Fp r0 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECCurve r1 = r5.curve
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.y
                org.bouncycastle.math.ec.ECFieldElement r3 = r3.negate()
                boolean r4 = r5.withCompression
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint subtract(org.bouncycastle.math.ec.ECPoint r2) {
                r1 = this;
                boolean r0 = r2.isInfinity()
                if (r0 == 0) goto L7
                return r1
            L7:
                org.bouncycastle.math.ec.ECPoint r2 = r2.negate()
                org.bouncycastle.math.ec.ECPoint r2 = r1.add(r2)
                return r2
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint twice() {
                r5 = this;
                boolean r0 = r5.isInfinity()
                if (r0 == 0) goto L7
                return r5
            L7:
                org.bouncycastle.math.ec.ECFieldElement r0 = r5.y
                java.math.BigInteger r0 = r0.toBigInteger()
                int r0 = r0.signum()
                if (r0 != 0) goto L1a
                org.bouncycastle.math.ec.ECCurve r0 = r5.curve
                org.bouncycastle.math.ec.ECPoint r0 = r0.getInfinity()
                return r0
            L1a:
                org.bouncycastle.math.ec.ECCurve r0 = r5.curve
                r1 = 2
                java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
                org.bouncycastle.math.ec.ECFieldElement r0 = r0.fromBigInteger(r1)
                org.bouncycastle.math.ec.ECCurve r1 = r5.curve
                r2 = 3
                java.math.BigInteger r2 = java.math.BigInteger.valueOf(r2)
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.fromBigInteger(r2)
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.square()
                org.bouncycastle.math.ec.ECFieldElement r1 = r2.multiply(r1)
                org.bouncycastle.math.ec.ECCurve r2 = r5.curve
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.a
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r2)
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.y
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.multiply(r0)
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.divide(r2)
                org.bouncycastle.math.ec.ECFieldElement r2 = r1.square()
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r0 = r3.multiply(r0)
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.subtract(r0)
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.x
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.subtract(r0)
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.multiply(r2)
                org.bouncycastle.math.ec.ECFieldElement r2 = r5.y
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.subtract(r2)
                org.bouncycastle.math.ec.ECPoint$Fp r2 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECCurve r3 = r5.curve
                boolean r4 = r5.withCompression
                r2.<init>(r3, r0, r1, r4)
                return r2
        }
    }

    static {
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = new org.bouncycastle.asn1.x9.X9IntegerConverter
            r0.<init>()
            org.bouncycastle.math.ec.ECPoint.converter = r0
            return
    }

    protected ECPoint(org.bouncycastle.math.ec.ECCurve r2, org.bouncycastle.math.ec.ECFieldElement r3, org.bouncycastle.math.ec.ECFieldElement r4) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.multiplier = r0
            r1.preCompInfo = r0
            r1.curve = r2
            r1.x = r3
            r1.y = r4
            return
    }

    static org.bouncycastle.asn1.x9.X9IntegerConverter access$000() {
            org.bouncycastle.asn1.x9.X9IntegerConverter r0 = org.bouncycastle.math.ec.ECPoint.converter
            return r0
    }

    public abstract org.bouncycastle.math.ec.ECPoint add(org.bouncycastle.math.ec.ECPoint r1);

    synchronized void assertECMultiplier() {
            r1 = this;
            monitor-enter(r1)
            org.bouncycastle.math.ec.ECMultiplier r0 = r1.multiplier     // Catch: java.lang.Throwable -> Le
            if (r0 != 0) goto Lc
            org.bouncycastle.math.ec.FpNafMultiplier r0 = new org.bouncycastle.math.ec.FpNafMultiplier     // Catch: java.lang.Throwable -> Le
            r0.<init>()     // Catch: java.lang.Throwable -> Le
            r1.multiplier = r0     // Catch: java.lang.Throwable -> Le
        Lc:
            monitor-exit(r1)
            return
        Le:
            r0 = move-exception
            monitor-exit(r1)
            throw r0
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r5 != r4) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof org.bouncycastle.math.ec.ECPoint
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            org.bouncycastle.math.ec.ECPoint r5 = (org.bouncycastle.math.ec.ECPoint) r5
            boolean r1 = r4.isInfinity()
            if (r1 == 0) goto L17
            boolean r5 = r5.isInfinity()
            return r5
        L17:
            org.bouncycastle.math.ec.ECFieldElement r1 = r4.x
            org.bouncycastle.math.ec.ECFieldElement r3 = r5.x
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L2c
            org.bouncycastle.math.ec.ECFieldElement r1 = r4.y
            org.bouncycastle.math.ec.ECFieldElement r5 = r5.y
            boolean r5 = r1.equals(r5)
            if (r5 == 0) goto L2c
            goto L2d
        L2c:
            r0 = 0
        L2d:
            return r0
    }

    public org.bouncycastle.math.ec.ECCurve getCurve() {
            r1 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r1.curve
            return r0
    }

    public abstract byte[] getEncoded();

    public org.bouncycastle.math.ec.ECFieldElement getX() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.x
            return r0
    }

    public org.bouncycastle.math.ec.ECFieldElement getY() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.y
            return r0
    }

    public int hashCode() {
            r2 = this;
            boolean r0 = r2.isInfinity()
            if (r0 == 0) goto L8
            r0 = 0
            return r0
        L8:
            org.bouncycastle.math.ec.ECFieldElement r0 = r2.x
            int r0 = r0.hashCode()
            org.bouncycastle.math.ec.ECFieldElement r1 = r2.y
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }

    public boolean isCompressed() {
            r1 = this;
            boolean r0 = r1.withCompression
            return r0
    }

    public boolean isInfinity() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.x
            if (r0 != 0) goto La
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.y
            if (r0 != 0) goto La
            r0 = 1
            goto Lb
        La:
            r0 = 0
        Lb:
            return r0
    }

    public org.bouncycastle.math.ec.ECPoint multiply(java.math.BigInteger r3) {
            r2 = this;
            boolean r0 = r2.isInfinity()
            if (r0 == 0) goto L7
            return r2
        L7:
            int r0 = r3.signum()
            if (r0 != 0) goto L14
            org.bouncycastle.math.ec.ECCurve r3 = r2.curve
            org.bouncycastle.math.ec.ECPoint r3 = r3.getInfinity()
            return r3
        L14:
            r2.assertECMultiplier()
            org.bouncycastle.math.ec.ECMultiplier r0 = r2.multiplier
            org.bouncycastle.math.ec.PreCompInfo r1 = r2.preCompInfo
            org.bouncycastle.math.ec.ECPoint r3 = r0.multiply(r2, r3, r1)
            return r3
    }

    public abstract org.bouncycastle.math.ec.ECPoint negate();

    void setPreCompInfo(org.bouncycastle.math.ec.PreCompInfo r1) {
            r0 = this;
            r0.preCompInfo = r1
            return
    }

    public abstract org.bouncycastle.math.ec.ECPoint subtract(org.bouncycastle.math.ec.ECPoint r1);

    public abstract org.bouncycastle.math.ec.ECPoint twice();
}
