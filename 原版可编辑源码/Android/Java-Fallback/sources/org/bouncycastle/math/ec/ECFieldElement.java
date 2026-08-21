package org.bouncycastle.math.ec;

public abstract class ECFieldElement implements org.bouncycastle.math.ec.ECConstants {

    public static class F2m extends org.bouncycastle.math.ec.ECFieldElement {
        public static final int GNB = 1;
        public static final int PPB = 3;
        public static final int TPB = 2;
        private int k1;
        private int k2;
        private int k3;
        private int m;
        private int representation;
        private int t;
        private org.bouncycastle.math.ec.IntArray x;

        public F2m(int r3, int r4, int r5, int r6, java.math.BigInteger r7) {
                r2 = this;
                r2.<init>()
                int r0 = r3 + 31
                int r0 = r0 >> 5
                r2.t = r0
                org.bouncycastle.math.ec.IntArray r0 = new org.bouncycastle.math.ec.IntArray
                int r1 = r2.t
                r0.<init>(r7, r1)
                r2.x = r0
                if (r5 != 0) goto L1a
                if (r6 != 0) goto L1a
                r0 = 2
            L17:
                r2.representation = r0
                goto L20
            L1a:
                if (r5 >= r6) goto L3f
                if (r5 <= 0) goto L37
                r0 = 3
                goto L17
            L20:
                int r7 = r7.signum()
                if (r7 < 0) goto L2f
                r2.m = r3
                r2.k1 = r4
                r2.k2 = r5
                r2.k3 = r6
                return
            L2f:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "x value cannot be negative"
                r3.<init>(r4)
                throw r3
            L37:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "k2 must be larger than 0"
                r3.<init>(r4)
                throw r3
            L3f:
                java.lang.IllegalArgumentException r3 = new java.lang.IllegalArgumentException
                java.lang.String r4 = "k2 must be smaller than k3"
                r3.<init>(r4)
                throw r3
        }

        private F2m(int r2, int r3, int r4, int r5, org.bouncycastle.math.ec.IntArray r6) {
                r1 = this;
                r1.<init>()
                int r0 = r2 + 31
                int r0 = r0 >> 5
                r1.t = r0
                r1.x = r6
                r1.m = r2
                r1.k1 = r3
                r1.k2 = r4
                r1.k3 = r5
                if (r4 != 0) goto L19
                if (r5 != 0) goto L19
                r2 = 2
                goto L1a
            L19:
                r2 = 3
            L1a:
                r1.representation = r2
                return
        }

        public F2m(int r7, int r8, java.math.BigInteger r9) {
                r6 = this;
                r3 = 0
                r4 = 0
                r0 = r6
                r1 = r7
                r2 = r8
                r5 = r9
                r0.<init>(r1, r2, r3, r4, r5)
                return
        }

        public static void checkFieldElements(org.bouncycastle.math.ec.ECFieldElement r2, org.bouncycastle.math.ec.ECFieldElement r3) {
                boolean r0 = r2 instanceof org.bouncycastle.math.ec.ECFieldElement.F2m
                if (r0 == 0) goto L3b
                boolean r0 = r3 instanceof org.bouncycastle.math.ec.ECFieldElement.F2m
                if (r0 == 0) goto L3b
                org.bouncycastle.math.ec.ECFieldElement$F2m r2 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r2
                org.bouncycastle.math.ec.ECFieldElement$F2m r3 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r3
                int r0 = r2.m
                int r1 = r3.m
                if (r0 != r1) goto L33
                int r0 = r2.k1
                int r1 = r3.k1
                if (r0 != r1) goto L33
                int r0 = r2.k2
                int r1 = r3.k2
                if (r0 != r1) goto L33
                int r0 = r2.k3
                int r1 = r3.k3
                if (r0 != r1) goto L33
                int r2 = r2.representation
                int r3 = r3.representation
                if (r2 != r3) goto L2b
                return
            L2b:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "One of the field elements are not elements has incorrect representation"
                r2.<init>(r3)
                throw r2
            L33:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "Field elements are not elements of the same field F2m"
                r2.<init>(r3)
                throw r2
            L3b:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "Field elements are not both instances of ECFieldElement.F2m"
                r2.<init>(r3)
                throw r2
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement add(org.bouncycastle.math.ec.ECFieldElement r8) {
                r7 = this;
                org.bouncycastle.math.ec.IntArray r0 = r7.x
                java.lang.Object r0 = r0.clone()
                r6 = r0
                org.bouncycastle.math.ec.IntArray r6 = (org.bouncycastle.math.ec.IntArray) r6
                org.bouncycastle.math.ec.ECFieldElement$F2m r8 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r8
                org.bouncycastle.math.ec.IntArray r8 = r8.x
                r0 = 0
                r6.addShifted(r8, r0)
                org.bouncycastle.math.ec.ECFieldElement$F2m r8 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r2 = r7.m
                int r3 = r7.k1
                int r4 = r7.k2
                int r5 = r7.k3
                r1 = r8
                r1.<init>(r2, r3, r4, r5, r6)
                return r8
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement divide(org.bouncycastle.math.ec.ECFieldElement r1) {
                r0 = this;
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.invert()
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.multiply(r1)
                return r1
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof org.bouncycastle.math.ec.ECFieldElement.F2m
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                org.bouncycastle.math.ec.ECFieldElement$F2m r5 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r5
                int r1 = r4.m
                int r3 = r5.m
                if (r1 != r3) goto L35
                int r1 = r4.k1
                int r3 = r5.k1
                if (r1 != r3) goto L35
                int r1 = r4.k2
                int r3 = r5.k2
                if (r1 != r3) goto L35
                int r1 = r4.k3
                int r3 = r5.k3
                if (r1 != r3) goto L35
                int r1 = r4.representation
                int r3 = r5.representation
                if (r1 != r3) goto L35
                org.bouncycastle.math.ec.IntArray r1 = r4.x
                org.bouncycastle.math.ec.IntArray r5 = r5.x
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L35
                goto L36
            L35:
                r0 = 0
            L36:
                return r0
        }

        @Override
        public java.lang.String getFieldName() {
                r1 = this;
                java.lang.String r0 = "F2m"
                return r0
        }

        @Override
        public int getFieldSize() {
                r1 = this;
                int r0 = r1.m
                return r0
        }

        public int getK1() {
                r1 = this;
                int r0 = r1.k1
                return r0
        }

        public int getK2() {
                r1 = this;
                int r0 = r1.k2
                return r0
        }

        public int getK3() {
                r1 = this;
                int r0 = r1.k3
                return r0
        }

        public int getM() {
                r1 = this;
                int r0 = r1.m
                return r0
        }

        public int getRepresentation() {
                r1 = this;
                int r0 = r1.representation
                return r0
        }

        public int hashCode() {
                r2 = this;
                org.bouncycastle.math.ec.IntArray r0 = r2.x
                int r0 = r0.hashCode()
                int r1 = r2.m
                r0 = r0 ^ r1
                int r1 = r2.k1
                r0 = r0 ^ r1
                int r1 = r2.k2
                r0 = r0 ^ r1
                int r1 = r2.k3
                r0 = r0 ^ r1
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement invert() {
                r10 = this;
                org.bouncycastle.math.ec.IntArray r0 = r10.x
                java.lang.Object r0 = r0.clone()
                org.bouncycastle.math.ec.IntArray r0 = (org.bouncycastle.math.ec.IntArray) r0
                org.bouncycastle.math.ec.IntArray r1 = new org.bouncycastle.math.ec.IntArray
                int r2 = r10.t
                r1.<init>(r2)
                int r2 = r10.m
                r1.setBit(r2)
                r2 = 0
                r1.setBit(r2)
                int r3 = r10.k1
                r1.setBit(r3)
                int r3 = r10.representation
                r4 = 3
                if (r3 != r4) goto L2c
                int r3 = r10.k2
                r1.setBit(r3)
                int r3 = r10.k3
                r1.setBit(r3)
            L2c:
                org.bouncycastle.math.ec.IntArray r3 = new org.bouncycastle.math.ec.IntArray
                int r4 = r10.t
                r3.<init>(r4)
                r3.setBit(r2)
                org.bouncycastle.math.ec.IntArray r2 = new org.bouncycastle.math.ec.IntArray
                int r4 = r10.t
                r2.<init>(r4)
                r7 = r2
            L3e:
                boolean r2 = r0.isZero()
                if (r2 != 0) goto L69
                int r2 = r0.bitLength()
                int r4 = r1.bitLength()
                int r2 = r2 - r4
                if (r2 >= 0) goto L56
                int r2 = -r2
                r8 = r1
                r1 = r0
                r0 = r8
                r9 = r7
                r7 = r3
                r3 = r9
            L56:
                int r4 = r2 >> 5
                r2 = r2 & 31
                org.bouncycastle.math.ec.IntArray r5 = r1.shiftLeft(r2)
                r0.addShifted(r5, r4)
                org.bouncycastle.math.ec.IntArray r2 = r7.shiftLeft(r2)
                r3.addShifted(r2, r4)
                goto L3e
            L69:
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r3 = r10.m
                int r4 = r10.k1
                int r5 = r10.k2
                int r6 = r10.k3
                r2 = r0
                r2.<init>(r3, r4, r5, r6, r7)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement multiply(org.bouncycastle.math.ec.ECFieldElement r9) {
                r8 = this;
                org.bouncycastle.math.ec.ECFieldElement$F2m r9 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r9
                org.bouncycastle.math.ec.IntArray r0 = r8.x
                org.bouncycastle.math.ec.IntArray r9 = r9.x
                int r1 = r8.m
                org.bouncycastle.math.ec.IntArray r7 = r0.multiply(r9, r1)
                int r9 = r8.m
                r0 = 3
                int[] r0 = new int[r0]
                int r1 = r8.k1
                r2 = 0
                r0[r2] = r1
                int r1 = r8.k2
                r2 = 1
                r0[r2] = r1
                int r1 = r8.k3
                r2 = 2
                r0[r2] = r1
                r7.reduce(r9, r0)
                org.bouncycastle.math.ec.ECFieldElement$F2m r9 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r3 = r8.m
                int r4 = r8.k1
                int r5 = r8.k2
                int r6 = r8.k3
                r2 = r9
                r2.<init>(r3, r4, r5, r6, r7)
                return r9
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement negate() {
                r0 = this;
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement sqrt() {
                r2 = this;
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "Not implemented"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement square() {
                r8 = this;
                org.bouncycastle.math.ec.IntArray r0 = r8.x
                int r1 = r8.m
                org.bouncycastle.math.ec.IntArray r7 = r0.square(r1)
                int r0 = r8.m
                r1 = 3
                int[] r1 = new int[r1]
                int r2 = r8.k1
                r3 = 0
                r1[r3] = r2
                int r2 = r8.k2
                r3 = 1
                r1[r3] = r2
                int r2 = r8.k3
                r3 = 2
                r1[r3] = r2
                r7.reduce(r0, r1)
                org.bouncycastle.math.ec.ECFieldElement$F2m r0 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r3 = r8.m
                int r4 = r8.k1
                int r5 = r8.k2
                int r6 = r8.k3
                r2 = r0
                r2.<init>(r3, r4, r5, r6, r7)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement subtract(org.bouncycastle.math.ec.ECFieldElement r1) {
                r0 = this;
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.add(r1)
                return r1
        }

        @Override
        public java.math.BigInteger toBigInteger() {
                r1 = this;
                org.bouncycastle.math.ec.IntArray r0 = r1.x
                java.math.BigInteger r0 = r0.toBigInteger()
                return r0
        }
    }

    public static class Fp extends org.bouncycastle.math.ec.ECFieldElement {
        java.math.BigInteger q;
        java.math.BigInteger x;

        public Fp(java.math.BigInteger r1, java.math.BigInteger r2) {
                r0 = this;
                r0.<init>()
                r0.x = r2
                int r2 = r2.compareTo(r1)
                if (r2 >= 0) goto Le
                r0.q = r1
                return
            Le:
                java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
                java.lang.String r2 = "x value too large in field element"
                r1.<init>(r2)
                throw r1
        }

        private static java.math.BigInteger[] lucasSequence(java.math.BigInteger r9, java.math.BigInteger r10, java.math.BigInteger r11, java.math.BigInteger r12) {
                int r0 = r12.bitLength()
                int r1 = r12.getLowestSetBit()
                java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
                java.math.BigInteger r3 = org.bouncycastle.math.ec.ECConstants.TWO
                java.math.BigInteger r4 = org.bouncycastle.math.ec.ECConstants.ONE
                java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ONE
                r6 = 1
                int r0 = r0 - r6
                r7 = r10
            L13:
                int r8 = r1 + 1
                if (r0 < r8) goto L87
                java.math.BigInteger r4 = r4.multiply(r5)
                java.math.BigInteger r4 = r4.mod(r9)
                boolean r5 = r12.testBit(r0)
                if (r5 == 0) goto L56
                java.math.BigInteger r5 = r4.multiply(r11)
                java.math.BigInteger r5 = r5.mod(r9)
                java.math.BigInteger r2 = r2.multiply(r7)
                java.math.BigInteger r2 = r2.mod(r9)
                java.math.BigInteger r3 = r7.multiply(r3)
                java.math.BigInteger r8 = r10.multiply(r4)
                java.math.BigInteger r3 = r3.subtract(r8)
                java.math.BigInteger r3 = r3.mod(r9)
                java.math.BigInteger r7 = r7.multiply(r7)
                java.math.BigInteger r8 = r5.shiftLeft(r6)
                java.math.BigInteger r7 = r7.subtract(r8)
                java.math.BigInteger r7 = r7.mod(r9)
                goto L84
            L56:
                java.math.BigInteger r2 = r2.multiply(r3)
                java.math.BigInteger r2 = r2.subtract(r4)
                java.math.BigInteger r2 = r2.mod(r9)
                java.math.BigInteger r5 = r7.multiply(r3)
                java.math.BigInteger r7 = r10.multiply(r4)
                java.math.BigInteger r5 = r5.subtract(r7)
                java.math.BigInteger r5 = r5.mod(r9)
                java.math.BigInteger r3 = r3.multiply(r3)
                java.math.BigInteger r7 = r4.shiftLeft(r6)
                java.math.BigInteger r3 = r3.subtract(r7)
                java.math.BigInteger r3 = r3.mod(r9)
                r7 = r5
                r5 = r4
            L84:
                int r0 = r0 + (-1)
                goto L13
            L87:
                java.math.BigInteger r12 = r4.multiply(r5)
                java.math.BigInteger r12 = r12.mod(r9)
                java.math.BigInteger r11 = r12.multiply(r11)
                java.math.BigInteger r11 = r11.mod(r9)
                java.math.BigInteger r0 = r2.multiply(r3)
                java.math.BigInteger r0 = r0.subtract(r12)
                java.math.BigInteger r0 = r0.mod(r9)
                java.math.BigInteger r2 = r7.multiply(r3)
                java.math.BigInteger r10 = r10.multiply(r12)
                java.math.BigInteger r10 = r2.subtract(r10)
                java.math.BigInteger r10 = r10.mod(r9)
                java.math.BigInteger r11 = r12.multiply(r11)
                java.math.BigInteger r11 = r11.mod(r9)
                r12 = 1
            Lbc:
                if (r12 > r1) goto Le1
                java.math.BigInteger r0 = r0.multiply(r10)
                java.math.BigInteger r0 = r0.mod(r9)
                java.math.BigInteger r10 = r10.multiply(r10)
                java.math.BigInteger r2 = r11.shiftLeft(r6)
                java.math.BigInteger r10 = r10.subtract(r2)
                java.math.BigInteger r10 = r10.mod(r9)
                java.math.BigInteger r11 = r11.multiply(r11)
                java.math.BigInteger r11 = r11.mod(r9)
                int r12 = r12 + 1
                goto Lbc
            Le1:
                r9 = 2
                java.math.BigInteger[] r9 = new java.math.BigInteger[r9]
                r11 = 0
                r9[r11] = r0
                r9[r6] = r10
                return r9
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement add(org.bouncycastle.math.ec.ECFieldElement r4) {
                r3 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r3.q
                java.math.BigInteger r2 = r3.x
                java.math.BigInteger r4 = r4.toBigInteger()
                java.math.BigInteger r4 = r2.add(r4)
                java.math.BigInteger r2 = r3.q
                java.math.BigInteger r4 = r4.mod(r2)
                r0.<init>(r1, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement divide(org.bouncycastle.math.ec.ECFieldElement r5) {
                r4 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r4.q
                java.math.BigInteger r2 = r4.x
                java.math.BigInteger r5 = r5.toBigInteger()
                java.math.BigInteger r3 = r4.q
                java.math.BigInteger r5 = r5.modInverse(r3)
                java.math.BigInteger r5 = r2.multiply(r5)
                java.math.BigInteger r2 = r4.q
                java.math.BigInteger r5 = r5.mod(r2)
                r0.<init>(r1, r5)
                return r0
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof org.bouncycastle.math.ec.ECFieldElement.Fp
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                org.bouncycastle.math.ec.ECFieldElement$Fp r5 = (org.bouncycastle.math.ec.ECFieldElement.Fp) r5
                java.math.BigInteger r1 = r4.q
                java.math.BigInteger r3 = r5.q
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L21
                java.math.BigInteger r1 = r4.x
                java.math.BigInteger r5 = r5.x
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L21
                goto L22
            L21:
                r0 = 0
            L22:
                return r0
        }

        @Override
        public java.lang.String getFieldName() {
                r1 = this;
                java.lang.String r0 = "Fp"
                return r0
        }

        @Override
        public int getFieldSize() {
                r1 = this;
                java.math.BigInteger r0 = r1.q
                int r0 = r0.bitLength()
                return r0
        }

        public java.math.BigInteger getQ() {
                r1 = this;
                java.math.BigInteger r0 = r1.q
                return r0
        }

        public int hashCode() {
                r2 = this;
                java.math.BigInteger r0 = r2.q
                int r0 = r0.hashCode()
                java.math.BigInteger r1 = r2.x
                int r1 = r1.hashCode()
                r0 = r0 ^ r1
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement invert() {
                r3 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r3.q
                java.math.BigInteger r2 = r3.x
                java.math.BigInteger r2 = r2.modInverse(r1)
                r0.<init>(r1, r2)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement multiply(org.bouncycastle.math.ec.ECFieldElement r4) {
                r3 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r3.q
                java.math.BigInteger r2 = r3.x
                java.math.BigInteger r4 = r4.toBigInteger()
                java.math.BigInteger r4 = r2.multiply(r4)
                java.math.BigInteger r2 = r3.q
                java.math.BigInteger r4 = r4.mod(r2)
                r0.<init>(r1, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement negate() {
                r4 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r4.q
                java.math.BigInteger r2 = r4.x
                java.math.BigInteger r2 = r2.negate()
                java.math.BigInteger r3 = r4.q
                java.math.BigInteger r2 = r2.mod(r3)
                r0.<init>(r1, r2)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement sqrt() {
                r13 = this;
                java.math.BigInteger r0 = r13.q
                r1 = 0
                boolean r0 = r0.testBit(r1)
                if (r0 == 0) goto Ldd
                java.math.BigInteger r0 = r13.q
                r2 = 1
                boolean r0 = r0.testBit(r2)
                r3 = 0
                r4 = 2
                if (r0 == 0) goto L39
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r13.q
                java.math.BigInteger r2 = r13.x
                java.math.BigInteger r4 = r1.shiftRight(r4)
                java.math.BigInteger r5 = org.bouncycastle.math.ec.ECFieldElement.Fp.ONE
                java.math.BigInteger r4 = r4.add(r5)
                java.math.BigInteger r5 = r13.q
                java.math.BigInteger r2 = r2.modPow(r4, r5)
                r0.<init>(r1, r2)
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.square()
                boolean r1 = r1.equals(r13)
                if (r1 == 0) goto L38
                r3 = r0
            L38:
                return r3
            L39:
                java.math.BigInteger r0 = r13.q
                java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ONE
                java.math.BigInteger r0 = r0.subtract(r5)
                java.math.BigInteger r5 = r0.shiftRight(r2)
                java.math.BigInteger r6 = r13.x
                java.math.BigInteger r7 = r13.q
                java.math.BigInteger r6 = r6.modPow(r5, r7)
                java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.ONE
                boolean r6 = r6.equals(r7)
                if (r6 != 0) goto L56
                return r3
            L56:
                java.math.BigInteger r6 = r0.shiftRight(r4)
                java.math.BigInteger r6 = r6.shiftLeft(r2)
                java.math.BigInteger r7 = org.bouncycastle.math.ec.ECConstants.ONE
                java.math.BigInteger r6 = r6.add(r7)
                java.math.BigInteger r7 = r13.x
                java.math.BigInteger r4 = r7.shiftLeft(r4)
                java.math.BigInteger r8 = r13.q
                java.math.BigInteger r4 = r4.mod(r8)
                java.util.Random r8 = new java.util.Random
                r8.<init>()
            L75:
                java.math.BigInteger r9 = new java.math.BigInteger
                java.math.BigInteger r10 = r13.q
                int r10 = r10.bitLength()
                r9.<init>(r10, r8)
                java.math.BigInteger r10 = r13.q
                int r10 = r9.compareTo(r10)
                if (r10 >= 0) goto L75
                java.math.BigInteger r10 = r9.multiply(r9)
                java.math.BigInteger r10 = r10.subtract(r4)
                java.math.BigInteger r11 = r13.q
                java.math.BigInteger r10 = r10.modPow(r5, r11)
                boolean r10 = r10.equals(r0)
                if (r10 == 0) goto L75
                java.math.BigInteger r10 = r13.q
                java.math.BigInteger[] r9 = lucasSequence(r10, r9, r7, r6)
                r10 = r9[r1]
                r9 = r9[r2]
                java.math.BigInteger r11 = r9.multiply(r9)
                java.math.BigInteger r12 = r13.q
                java.math.BigInteger r11 = r11.mod(r12)
                boolean r11 = r11.equals(r4)
                if (r11 == 0) goto Lce
                boolean r0 = r9.testBit(r1)
                if (r0 == 0) goto Lc2
                java.math.BigInteger r0 = r13.q
                java.math.BigInteger r9 = r9.add(r0)
            Lc2:
                java.math.BigInteger r0 = r9.shiftRight(r2)
                org.bouncycastle.math.ec.ECFieldElement$Fp r1 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r2 = r13.q
                r1.<init>(r2, r0)
                return r1
            Lce:
                java.math.BigInteger r9 = org.bouncycastle.math.ec.ECConstants.ONE
                boolean r9 = r10.equals(r9)
                if (r9 != 0) goto L75
                boolean r9 = r10.equals(r0)
                if (r9 != 0) goto L75
                return r3
            Ldd:
                java.lang.RuntimeException r0 = new java.lang.RuntimeException
                java.lang.String r1 = "not done yet"
                r0.<init>(r1)
                throw r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement square() {
                r4 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r4.q
                java.math.BigInteger r2 = r4.x
                java.math.BigInteger r2 = r2.multiply(r2)
                java.math.BigInteger r3 = r4.q
                java.math.BigInteger r2 = r2.mod(r3)
                r0.<init>(r1, r2)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement subtract(org.bouncycastle.math.ec.ECFieldElement r4) {
                r3 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r3.q
                java.math.BigInteger r2 = r3.x
                java.math.BigInteger r4 = r4.toBigInteger()
                java.math.BigInteger r4 = r2.subtract(r4)
                java.math.BigInteger r2 = r3.q
                java.math.BigInteger r4 = r4.mod(r2)
                r0.<init>(r1, r4)
                return r0
        }

        @Override
        public java.math.BigInteger toBigInteger() {
                r1 = this;
                java.math.BigInteger r0 = r1.x
                return r0
        }
    }

    public ECFieldElement() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract org.bouncycastle.math.ec.ECFieldElement add(org.bouncycastle.math.ec.ECFieldElement r1);

    public abstract org.bouncycastle.math.ec.ECFieldElement divide(org.bouncycastle.math.ec.ECFieldElement r1);

    public abstract java.lang.String getFieldName();

    public abstract int getFieldSize();

    public abstract org.bouncycastle.math.ec.ECFieldElement invert();

    public abstract org.bouncycastle.math.ec.ECFieldElement multiply(org.bouncycastle.math.ec.ECFieldElement r1);

    public abstract org.bouncycastle.math.ec.ECFieldElement negate();

    public abstract org.bouncycastle.math.ec.ECFieldElement sqrt();

    public abstract org.bouncycastle.math.ec.ECFieldElement square();

    public abstract org.bouncycastle.math.ec.ECFieldElement subtract(org.bouncycastle.math.ec.ECFieldElement r1);

    public abstract java.math.BigInteger toBigInteger();

    public java.lang.String toString() {
            r2 = this;
            java.math.BigInteger r0 = r2.toBigInteger()
            r1 = 2
            java.lang.String r0 = r0.toString(r1)
            return r0
    }
}
