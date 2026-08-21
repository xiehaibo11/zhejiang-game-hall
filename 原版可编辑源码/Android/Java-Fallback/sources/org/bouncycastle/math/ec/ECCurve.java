package org.bouncycastle.math.ec;

public abstract class ECCurve {
    org.bouncycastle.math.ec.ECFieldElement a;
    org.bouncycastle.math.ec.ECFieldElement b;

    public static class F2m extends org.bouncycastle.math.ec.ECCurve {
        private java.math.BigInteger h;
        private org.bouncycastle.math.ec.ECPoint.F2m infinity;
        private int k1;
        private int k2;
        private int k3;
        private int m;
        private byte mu;
        private java.math.BigInteger n;
        private java.math.BigInteger[] si;

        public F2m(int r10, int r11, int r12, int r13, java.math.BigInteger r14, java.math.BigInteger r15) {
                r9 = this;
                r7 = 0
                r8 = 0
                r0 = r9
                r1 = r10
                r2 = r11
                r3 = r12
                r4 = r13
                r5 = r14
                r6 = r15
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return
        }

        public F2m(int r2, int r3, int r4, int r5, java.math.BigInteger r6, java.math.BigInteger r7, java.math.BigInteger r8, java.math.BigInteger r9) {
                r1 = this;
                r1.<init>()
                r0 = 0
                r1.mu = r0
                r0 = 0
                r1.si = r0
                r1.m = r2
                r1.k1 = r3
                r1.k2 = r4
                r1.k3 = r5
                r1.n = r8
                r1.h = r9
                if (r3 == 0) goto L4c
                if (r4 != 0) goto L24
                if (r5 != 0) goto L1c
                goto L28
            L1c:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "k3 must be 0 if k2 == 0"
                r2.<init>(r3)
                throw r2
            L24:
                if (r4 <= r3) goto L44
                if (r5 <= r4) goto L3c
            L28:
                org.bouncycastle.math.ec.ECFieldElement r2 = r1.fromBigInteger(r6)
                r1.a = r2
                org.bouncycastle.math.ec.ECFieldElement r2 = r1.fromBigInteger(r7)
                r1.b = r2
                org.bouncycastle.math.ec.ECPoint$F2m r2 = new org.bouncycastle.math.ec.ECPoint$F2m
                r2.<init>(r1, r0, r0)
                r1.infinity = r2
                return
            L3c:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "k3 must be > k2"
                r2.<init>(r3)
                throw r2
            L44:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "k2 must be > k1"
                r2.<init>(r3)
                throw r2
            L4c:
                java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
                java.lang.String r3 = "k1 must be > 0"
                r2.<init>(r3)
                throw r2
        }

        public F2m(int r10, int r11, java.math.BigInteger r12, java.math.BigInteger r13) {
                r9 = this;
                r3 = 0
                r4 = 0
                r7 = 0
                r8 = 0
                r0 = r9
                r1 = r10
                r2 = r11
                r5 = r12
                r6 = r13
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return
        }

        public F2m(int r10, int r11, java.math.BigInteger r12, java.math.BigInteger r13, java.math.BigInteger r14, java.math.BigInteger r15) {
                r9 = this;
                r3 = 0
                r4 = 0
                r0 = r9
                r1 = r10
                r2 = r11
                r5 = r12
                r6 = r13
                r7 = r14
                r8 = r15
                r0.<init>(r1, r2, r3, r4, r5, r6, r7, r8)
                return
        }

        private org.bouncycastle.math.ec.ECPoint decompressPoint(byte[] r14, int r15) {
                r13 = this;
                org.bouncycastle.math.ec.ECFieldElement$F2m r6 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r1 = r13.m
                int r2 = r13.k1
                int r3 = r13.k2
                int r4 = r13.k3
                java.math.BigInteger r5 = new java.math.BigInteger
                r7 = 1
                r5.<init>(r7, r14)
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                java.math.BigInteger r14 = r6.toBigInteger()
                java.math.BigInteger r0 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r14 = r14.equals(r0)
                r0 = 0
                if (r14 == 0) goto L31
                org.bouncycastle.math.ec.ECFieldElement r14 = r13.b
                org.bouncycastle.math.ec.ECFieldElement$F2m r14 = (org.bouncycastle.math.ec.ECFieldElement.F2m) r14
            L25:
                int r15 = r13.m
                int r15 = r15 - r7
                if (r0 >= r15) goto L71
                org.bouncycastle.math.ec.ECFieldElement r14 = r14.square()
                int r0 = r0 + 1
                goto L25
            L31:
                org.bouncycastle.math.ec.ECFieldElement r14 = r13.a
                org.bouncycastle.math.ec.ECFieldElement r14 = r6.add(r14)
                org.bouncycastle.math.ec.ECFieldElement r1 = r13.b
                org.bouncycastle.math.ec.ECFieldElement r2 = r6.square()
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.invert()
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.multiply(r2)
                org.bouncycastle.math.ec.ECFieldElement r14 = r14.add(r1)
                org.bouncycastle.math.ec.ECFieldElement r14 = r13.solveQuadradicEquation(r14)
                if (r14 == 0) goto L77
                java.math.BigInteger r1 = r14.toBigInteger()
                boolean r0 = r1.testBit(r0)
                if (r0 == r15) goto L6d
                org.bouncycastle.math.ec.ECFieldElement$F2m r15 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r8 = r13.m
                int r9 = r13.k1
                int r10 = r13.k2
                int r11 = r13.k3
                java.math.BigInteger r12 = org.bouncycastle.math.ec.ECConstants.ONE
                r7 = r15
                r7.<init>(r8, r9, r10, r11, r12)
                org.bouncycastle.math.ec.ECFieldElement r14 = r14.add(r15)
            L6d:
                org.bouncycastle.math.ec.ECFieldElement r14 = r6.multiply(r14)
            L71:
                org.bouncycastle.math.ec.ECPoint$F2m r15 = new org.bouncycastle.math.ec.ECPoint$F2m
                r15.<init>(r13, r6, r14)
                return r15
            L77:
                java.lang.RuntimeException r14 = new java.lang.RuntimeException
                java.lang.String r15 = "Invalid point compression"
                r14.<init>(r15)
                throw r14
        }

        private org.bouncycastle.math.ec.ECFieldElement solveQuadradicEquation(org.bouncycastle.math.ec.ECFieldElement r14) {
                r13 = this;
                org.bouncycastle.math.ec.ECFieldElement$F2m r6 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r1 = r13.m
                int r2 = r13.k1
                int r3 = r13.k2
                int r4 = r13.k3
                java.math.BigInteger r5 = org.bouncycastle.math.ec.ECConstants.ZERO
                r0 = r6
                r0.<init>(r1, r2, r3, r4, r5)
                java.math.BigInteger r0 = r14.toBigInteger()
                java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L1d
                return r6
            L1d:
                java.util.Random r0 = new java.util.Random
                r0.<init>()
            L22:
                org.bouncycastle.math.ec.ECFieldElement$F2m r1 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r8 = r13.m
                int r9 = r13.k1
                int r10 = r13.k2
                int r11 = r13.k3
                java.math.BigInteger r12 = new java.math.BigInteger
                int r2 = r13.m
                r12.<init>(r2, r0)
                r7 = r1
                r7.<init>(r8, r9, r10, r11, r12)
                r2 = 1
                r4 = r14
                r5 = r6
                r3 = 1
            L3b:
                int r7 = r13.m
                int r7 = r7 - r2
                if (r3 > r7) goto L57
                org.bouncycastle.math.ec.ECFieldElement r4 = r4.square()
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.square()
                org.bouncycastle.math.ec.ECFieldElement r7 = r4.multiply(r1)
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.add(r7)
                org.bouncycastle.math.ec.ECFieldElement r4 = r4.add(r14)
                int r3 = r3 + 1
                goto L3b
            L57:
                java.math.BigInteger r1 = r4.toBigInteger()
                java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r1 = r1.equals(r2)
                if (r1 != 0) goto L65
                r14 = 0
                return r14
            L65:
                org.bouncycastle.math.ec.ECFieldElement r1 = r5.square()
                org.bouncycastle.math.ec.ECFieldElement r1 = r1.add(r5)
                java.math.BigInteger r1 = r1.toBigInteger()
                java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r1 = r1.equals(r2)
                if (r1 != 0) goto L22
                return r5
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint createPoint(java.math.BigInteger r2, java.math.BigInteger r3, boolean r4) {
                r1 = this;
                org.bouncycastle.math.ec.ECPoint$F2m r0 = new org.bouncycastle.math.ec.ECPoint$F2m
                org.bouncycastle.math.ec.ECFieldElement r2 = r1.fromBigInteger(r2)
                org.bouncycastle.math.ec.ECFieldElement r3 = r1.fromBigInteger(r3)
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint decodePoint(byte[] r20) {
                r19 = this;
                r0 = r19
                r1 = r20
                r2 = 0
                r3 = r1[r2]
                if (r3 == 0) goto L91
                r4 = 2
                r5 = 1
                if (r3 == r4) goto L7c
                r6 = 3
                if (r3 == r6) goto L7c
                r6 = 4
                if (r3 == r6) goto L39
                r6 = 6
                if (r3 == r6) goto L39
                r6 = 7
                if (r3 != r6) goto L1a
                goto L39
            L1a:
                java.lang.RuntimeException r3 = new java.lang.RuntimeException
                java.lang.StringBuilder r4 = new java.lang.StringBuilder
                r4.<init>()
                java.lang.String r5 = "Invalid point encoding 0x"
                r4.append(r5)
                r1 = r1[r2]
                r2 = 16
                java.lang.String r1 = java.lang.Integer.toString(r1, r2)
                r4.append(r1)
                java.lang.String r1 = r4.toString()
                r3.<init>(r1)
                throw r3
            L39:
                int r3 = r1.length
                int r3 = r3 - r5
                int r3 = r3 / r4
                byte[] r6 = new byte[r3]
                int r7 = r1.length
                int r7 = r7 - r5
                int r7 = r7 / r4
                byte[] r4 = new byte[r7]
                java.lang.System.arraycopy(r1, r5, r6, r2, r3)
                int r3 = r3 + r5
                java.lang.System.arraycopy(r1, r3, r4, r2, r7)
                org.bouncycastle.math.ec.ECPoint$F2m r1 = new org.bouncycastle.math.ec.ECPoint$F2m
                org.bouncycastle.math.ec.ECFieldElement$F2m r3 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r8 = r0.m
                int r9 = r0.k1
                int r10 = r0.k2
                int r11 = r0.k3
                java.math.BigInteger r12 = new java.math.BigInteger
                r12.<init>(r5, r6)
                r7 = r3
                r7.<init>(r8, r9, r10, r11, r12)
                org.bouncycastle.math.ec.ECFieldElement$F2m r6 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r14 = r0.m
                int r15 = r0.k1
                int r7 = r0.k2
                int r8 = r0.k3
                java.math.BigInteger r9 = new java.math.BigInteger
                r9.<init>(r5, r4)
                r13 = r6
                r16 = r7
                r17 = r8
                r18 = r9
                r13.<init>(r14, r15, r16, r17, r18)
                r1.<init>(r0, r3, r6, r2)
                goto L95
            L7c:
                int r3 = r1.length
                int r3 = r3 - r5
                byte[] r6 = new byte[r3]
                java.lang.System.arraycopy(r1, r5, r6, r2, r3)
                r1 = r1[r2]
                if (r1 != r4) goto L8c
                org.bouncycastle.math.ec.ECPoint r1 = r0.decompressPoint(r6, r2)
                goto L95
            L8c:
                org.bouncycastle.math.ec.ECPoint r1 = r0.decompressPoint(r6, r5)
                goto L95
            L91:
                org.bouncycastle.math.ec.ECPoint r1 = r19.getInfinity()
            L95:
                return r1
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof org.bouncycastle.math.ec.ECCurve.F2m
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                org.bouncycastle.math.ec.ECCurve$F2m r5 = (org.bouncycastle.math.ec.ECCurve.F2m) r5
                int r1 = r4.m
                int r3 = r5.m
                if (r1 != r3) goto L39
                int r1 = r4.k1
                int r3 = r5.k1
                if (r1 != r3) goto L39
                int r1 = r4.k2
                int r3 = r5.k2
                if (r1 != r3) goto L39
                int r1 = r4.k3
                int r3 = r5.k3
                if (r1 != r3) goto L39
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.a
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.a
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L39
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.b
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.b
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L39
                goto L3a
            L39:
                r0 = 0
            L3a:
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement fromBigInteger(java.math.BigInteger r8) {
                r7 = this;
                org.bouncycastle.math.ec.ECFieldElement$F2m r6 = new org.bouncycastle.math.ec.ECFieldElement$F2m
                int r1 = r7.m
                int r2 = r7.k1
                int r3 = r7.k2
                int r4 = r7.k3
                r0 = r6
                r5 = r8
                r0.<init>(r1, r2, r3, r4, r5)
                return r6
        }

        @Override
        public int getFieldSize() {
                r1 = this;
                int r0 = r1.m
                return r0
        }

        public java.math.BigInteger getH() {
                r1 = this;
                java.math.BigInteger r0 = r1.h
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint getInfinity() {
                r1 = this;
                org.bouncycastle.math.ec.ECPoint$F2m r0 = r1.infinity
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

        synchronized byte getMu() {
                r1 = this;
                monitor-enter(r1)
                byte r0 = r1.mu     // Catch: java.lang.Throwable -> Lf
                if (r0 != 0) goto Lb
                byte r0 = org.bouncycastle.math.ec.Tnaf.getMu(r1)     // Catch: java.lang.Throwable -> Lf
                r1.mu = r0     // Catch: java.lang.Throwable -> Lf
            Lb:
                byte r0 = r1.mu     // Catch: java.lang.Throwable -> Lf
                monitor-exit(r1)
                return r0
            Lf:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public java.math.BigInteger getN() {
                r1 = this;
                java.math.BigInteger r0 = r1.n
                return r0
        }

        synchronized java.math.BigInteger[] getSi() {
                r1 = this;
                monitor-enter(r1)
                java.math.BigInteger[] r0 = r1.si     // Catch: java.lang.Throwable -> Lf
                if (r0 != 0) goto Lb
                java.math.BigInteger[] r0 = org.bouncycastle.math.ec.Tnaf.getSi(r1)     // Catch: java.lang.Throwable -> Lf
                r1.si = r0     // Catch: java.lang.Throwable -> Lf
            Lb:
                java.math.BigInteger[] r0 = r1.si     // Catch: java.lang.Throwable -> Lf
                monitor-exit(r1)
                return r0
            Lf:
                r0 = move-exception
                monitor-exit(r1)
                throw r0
        }

        public int hashCode() {
                r2 = this;
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.a
                int r0 = r0.hashCode()
                org.bouncycastle.math.ec.ECFieldElement r1 = r2.b
                int r1 = r1.hashCode()
                r0 = r0 ^ r1
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

        public boolean isKoblitz() {
                r2 = this;
                java.math.BigInteger r0 = r2.n
                if (r0 == 0) goto L34
                java.math.BigInteger r0 = r2.h
                if (r0 == 0) goto L34
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.a
                java.math.BigInteger r0 = r0.toBigInteger()
                java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ZERO
                boolean r0 = r0.equals(r1)
                if (r0 != 0) goto L24
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.a
                java.math.BigInteger r0 = r0.toBigInteger()
                java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L34
            L24:
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.b
                java.math.BigInteger r0 = r0.toBigInteger()
                java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
                boolean r0 = r0.equals(r1)
                if (r0 == 0) goto L34
                r0 = 1
                goto L35
            L34:
                r0 = 0
            L35:
                return r0
        }

        public boolean isTrinomial() {
                r1 = this;
                int r0 = r1.k2
                if (r0 != 0) goto La
                int r0 = r1.k3
                if (r0 != 0) goto La
                r0 = 1
                goto Lb
            La:
                r0 = 0
            Lb:
                return r0
        }
    }

    public static class Fp extends org.bouncycastle.math.ec.ECCurve {
        org.bouncycastle.math.ec.ECPoint.Fp infinity;
        java.math.BigInteger q;

        public Fp(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3) {
                r0 = this;
                r0.<init>()
                r0.q = r1
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.fromBigInteger(r2)
                r0.a = r1
                org.bouncycastle.math.ec.ECFieldElement r1 = r0.fromBigInteger(r3)
                r0.b = r1
                org.bouncycastle.math.ec.ECPoint$Fp r1 = new org.bouncycastle.math.ec.ECPoint$Fp
                r2 = 0
                r1.<init>(r0, r2, r2)
                r0.infinity = r1
                return
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint createPoint(java.math.BigInteger r2, java.math.BigInteger r3, boolean r4) {
                r1 = this;
                org.bouncycastle.math.ec.ECPoint$Fp r0 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECFieldElement r2 = r1.fromBigInteger(r2)
                org.bouncycastle.math.ec.ECFieldElement r3 = r1.fromBigInteger(r3)
                r0.<init>(r1, r2, r3, r4)
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint decodePoint(byte[] r7) {
                r6 = this;
                r0 = 0
                r1 = r7[r0]
                if (r1 == 0) goto Lc2
                r2 = 2
                r3 = 1
                if (r1 == r2) goto L64
                r4 = 3
                if (r1 == r4) goto L64
                r4 = 4
                if (r1 == r4) goto L35
                r4 = 6
                if (r1 == r4) goto L35
                r4 = 7
                if (r1 != r4) goto L16
                goto L35
            L16:
                java.lang.RuntimeException r1 = new java.lang.RuntimeException
                java.lang.StringBuilder r2 = new java.lang.StringBuilder
                r2.<init>()
                java.lang.String r3 = "Invalid point encoding 0x"
                r2.append(r3)
                r7 = r7[r0]
                r0 = 16
                java.lang.String r7 = java.lang.Integer.toString(r7, r0)
                r2.append(r7)
                java.lang.String r7 = r2.toString()
                r1.<init>(r7)
                throw r1
            L35:
                int r1 = r7.length
                int r1 = r1 - r3
                int r1 = r1 / r2
                byte[] r4 = new byte[r1]
                int r5 = r7.length
                int r5 = r5 - r3
                int r5 = r5 / r2
                byte[] r2 = new byte[r5]
                java.lang.System.arraycopy(r7, r3, r4, r0, r1)
                int r1 = r1 + r3
                java.lang.System.arraycopy(r7, r1, r2, r0, r5)
                org.bouncycastle.math.ec.ECPoint$Fp r7 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r6.q
                java.math.BigInteger r5 = new java.math.BigInteger
                r5.<init>(r3, r4)
                r0.<init>(r1, r5)
                org.bouncycastle.math.ec.ECFieldElement$Fp r1 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r4 = r6.q
                java.math.BigInteger r5 = new java.math.BigInteger
                r5.<init>(r3, r2)
                r1.<init>(r4, r5)
                r7.<init>(r6, r0, r1)
                goto Lc6
            L64:
                r1 = r7[r0]
                r1 = r1 & r3
                int r2 = r7.length
                int r2 = r2 - r3
                byte[] r4 = new byte[r2]
                java.lang.System.arraycopy(r7, r3, r4, r0, r2)
                org.bouncycastle.math.ec.ECFieldElement$Fp r7 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r2 = r6.q
                java.math.BigInteger r5 = new java.math.BigInteger
                r5.<init>(r3, r4)
                r7.<init>(r2, r5)
                org.bouncycastle.math.ec.ECFieldElement r2 = r7.square()
                org.bouncycastle.math.ec.ECFieldElement r4 = r6.a
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.add(r4)
                org.bouncycastle.math.ec.ECFieldElement r2 = r7.multiply(r2)
                org.bouncycastle.math.ec.ECFieldElement r4 = r6.b
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.add(r4)
                org.bouncycastle.math.ec.ECFieldElement r2 = r2.sqrt()
                if (r2 == 0) goto Lba
                java.math.BigInteger r4 = r2.toBigInteger()
                boolean r0 = r4.testBit(r0)
                if (r0 != r1) goto La4
                org.bouncycastle.math.ec.ECPoint$Fp r0 = new org.bouncycastle.math.ec.ECPoint$Fp
                r0.<init>(r6, r7, r2, r3)
                goto Lb8
            La4:
                org.bouncycastle.math.ec.ECPoint$Fp r0 = new org.bouncycastle.math.ec.ECPoint$Fp
                org.bouncycastle.math.ec.ECFieldElement$Fp r1 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r4 = r6.q
                java.math.BigInteger r2 = r2.toBigInteger()
                java.math.BigInteger r2 = r4.subtract(r2)
                r1.<init>(r4, r2)
                r0.<init>(r6, r7, r1, r3)
            Lb8:
                r7 = r0
                goto Lc6
            Lba:
                java.lang.RuntimeException r7 = new java.lang.RuntimeException
                java.lang.String r0 = "Invalid point compression"
                r7.<init>(r0)
                throw r7
            Lc2:
                org.bouncycastle.math.ec.ECPoint r7 = r6.getInfinity()
            Lc6:
                return r7
        }

        public boolean equals(java.lang.Object r5) {
                r4 = this;
                r0 = 1
                if (r5 != r4) goto L4
                return r0
            L4:
                boolean r1 = r5 instanceof org.bouncycastle.math.ec.ECCurve.Fp
                r2 = 0
                if (r1 != 0) goto La
                return r2
            La:
                org.bouncycastle.math.ec.ECCurve$Fp r5 = (org.bouncycastle.math.ec.ECCurve.Fp) r5
                java.math.BigInteger r1 = r4.q
                java.math.BigInteger r3 = r5.q
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2b
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.a
                org.bouncycastle.math.ec.ECFieldElement r3 = r5.a
                boolean r1 = r1.equals(r3)
                if (r1 == 0) goto L2b
                org.bouncycastle.math.ec.ECFieldElement r1 = r4.b
                org.bouncycastle.math.ec.ECFieldElement r5 = r5.b
                boolean r5 = r1.equals(r5)
                if (r5 == 0) goto L2b
                goto L2c
            L2b:
                r0 = 0
            L2c:
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECFieldElement fromBigInteger(java.math.BigInteger r3) {
                r2 = this;
                org.bouncycastle.math.ec.ECFieldElement$Fp r0 = new org.bouncycastle.math.ec.ECFieldElement$Fp
                java.math.BigInteger r1 = r2.q
                r0.<init>(r1, r3)
                return r0
        }

        @Override
        public int getFieldSize() {
                r1 = this;
                java.math.BigInteger r0 = r1.q
                int r0 = r0.bitLength()
                return r0
        }

        @Override
        public org.bouncycastle.math.ec.ECPoint getInfinity() {
                r1 = this;
                org.bouncycastle.math.ec.ECPoint$Fp r0 = r1.infinity
                return r0
        }

        public java.math.BigInteger getQ() {
                r1 = this;
                java.math.BigInteger r0 = r1.q
                return r0
        }

        public int hashCode() {
                r2 = this;
                org.bouncycastle.math.ec.ECFieldElement r0 = r2.a
                int r0 = r0.hashCode()
                org.bouncycastle.math.ec.ECFieldElement r1 = r2.b
                int r1 = r1.hashCode()
                r0 = r0 ^ r1
                java.math.BigInteger r1 = r2.q
                int r1 = r1.hashCode()
                r0 = r0 ^ r1
                return r0
        }
    }

    public ECCurve() {
            r0 = this;
            r0.<init>()
            return
    }

    public abstract org.bouncycastle.math.ec.ECPoint createPoint(java.math.BigInteger r1, java.math.BigInteger r2, boolean r3);

    public abstract org.bouncycastle.math.ec.ECPoint decodePoint(byte[] r1);

    public abstract org.bouncycastle.math.ec.ECFieldElement fromBigInteger(java.math.BigInteger r1);

    public org.bouncycastle.math.ec.ECFieldElement getA() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.a
            return r0
    }

    public org.bouncycastle.math.ec.ECFieldElement getB() {
            r1 = this;
            org.bouncycastle.math.ec.ECFieldElement r0 = r1.b
            return r0
    }

    public abstract int getFieldSize();

    public abstract org.bouncycastle.math.ec.ECPoint getInfinity();
}
