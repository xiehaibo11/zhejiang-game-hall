package org.bouncycastle.math.ec;

class SimpleBigDecimal {
    private static final long serialVersionUID = 1;
    private final java.math.BigInteger bigInt;
    private final int scale;

    public SimpleBigDecimal(java.math.BigInteger r1, int r2) {
            r0 = this;
            r0.<init>()
            if (r2 < 0) goto La
            r0.bigInt = r1
            r0.scale = r2
            return
        La:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r2 = "scale may not be negative"
            r1.<init>(r2)
            throw r1
    }

    private SimpleBigDecimal(org.bouncycastle.math.ec.SimpleBigDecimal r2) {
            r1 = this;
            r1.<init>()
            java.math.BigInteger r0 = r2.bigInt
            r1.bigInt = r0
            int r2 = r2.scale
            r1.scale = r2
            return
    }

    private void checkScale(org.bouncycastle.math.ec.SimpleBigDecimal r2) {
            r1 = this;
            int r0 = r1.scale
            int r2 = r2.scale
            if (r0 != r2) goto L7
            return
        L7:
            java.lang.IllegalArgumentException r2 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "Only SimpleBigDecimal of same scale allowed in arithmetic operations"
            r2.<init>(r0)
            throw r2
    }

    public static org.bouncycastle.math.ec.SimpleBigDecimal getInstance(java.math.BigInteger r1, int r2) {
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r1.shiftLeft(r2)
            r0.<init>(r1, r2)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal add(java.math.BigInteger r4) {
            r3 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r3.bigInt
            int r2 = r3.scale
            java.math.BigInteger r4 = r4.shiftLeft(r2)
            java.math.BigInteger r4 = r1.add(r4)
            int r1 = r3.scale
            r0.<init>(r4, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal add(org.bouncycastle.math.ec.SimpleBigDecimal r3) {
            r2 = this;
            r2.checkScale(r3)
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r2.bigInt
            java.math.BigInteger r3 = r3.bigInt
            java.math.BigInteger r3 = r1.add(r3)
            int r1 = r2.scale
            r0.<init>(r3, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal adjustScale(int r4) {
            r3 = this;
            if (r4 < 0) goto L1c
            int r0 = r3.scale
            if (r4 != r0) goto Lc
            org.bouncycastle.math.ec.SimpleBigDecimal r4 = new org.bouncycastle.math.ec.SimpleBigDecimal
            r4.<init>(r3)
            return r4
        Lc:
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r3.bigInt
            int r2 = r3.scale
            int r2 = r4 - r2
            java.math.BigInteger r1 = r1.shiftLeft(r2)
            r0.<init>(r1, r4)
            return r0
        L1c:
            java.lang.IllegalArgumentException r4 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "scale may not be negative"
            r4.<init>(r0)
            throw r4
    }

    public int compareTo(java.math.BigInteger r3) {
            r2 = this;
            java.math.BigInteger r0 = r2.bigInt
            int r1 = r2.scale
            java.math.BigInteger r3 = r3.shiftLeft(r1)
            int r3 = r0.compareTo(r3)
            return r3
    }

    public int compareTo(org.bouncycastle.math.ec.SimpleBigDecimal r2) {
            r1 = this;
            r1.checkScale(r2)
            java.math.BigInteger r0 = r1.bigInt
            java.math.BigInteger r2 = r2.bigInt
            int r2 = r0.compareTo(r2)
            return r2
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal divide(java.math.BigInteger r3) {
            r2 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r2.bigInt
            java.math.BigInteger r3 = r1.divide(r3)
            int r1 = r2.scale
            r0.<init>(r3, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal divide(org.bouncycastle.math.ec.SimpleBigDecimal r3) {
            r2 = this;
            r2.checkScale(r3)
            java.math.BigInteger r0 = r2.bigInt
            int r1 = r2.scale
            java.math.BigInteger r0 = r0.shiftLeft(r1)
            org.bouncycastle.math.ec.SimpleBigDecimal r1 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r3 = r3.bigInt
            java.math.BigInteger r3 = r0.divide(r3)
            int r0 = r2.scale
            r1.<init>(r3, r0)
            return r1
    }

    public boolean equals(java.lang.Object r5) {
            r4 = this;
            r0 = 1
            if (r4 != r5) goto L4
            return r0
        L4:
            boolean r1 = r5 instanceof org.bouncycastle.math.ec.SimpleBigDecimal
            r2 = 0
            if (r1 != 0) goto La
            return r2
        La:
            org.bouncycastle.math.ec.SimpleBigDecimal r5 = (org.bouncycastle.math.ec.SimpleBigDecimal) r5
            java.math.BigInteger r1 = r4.bigInt
            java.math.BigInteger r3 = r5.bigInt
            boolean r1 = r1.equals(r3)
            if (r1 == 0) goto L1d
            int r1 = r4.scale
            int r5 = r5.scale
            if (r1 != r5) goto L1d
            goto L1e
        L1d:
            r0 = 0
        L1e:
            return r0
    }

    public java.math.BigInteger floor() {
            r2 = this;
            java.math.BigInteger r0 = r2.bigInt
            int r1 = r2.scale
            java.math.BigInteger r0 = r0.shiftRight(r1)
            return r0
    }

    public int getScale() {
            r1 = this;
            int r0 = r1.scale
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.bigInt
            int r0 = r0.hashCode()
            int r1 = r2.scale
            r0 = r0 ^ r1
            return r0
    }

    public int intValue() {
            r1 = this;
            java.math.BigInteger r0 = r1.floor()
            int r0 = r0.intValue()
            return r0
    }

    public long longValue() {
            r2 = this;
            java.math.BigInteger r0 = r2.floor()
            long r0 = r0.longValue()
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal multiply(java.math.BigInteger r3) {
            r2 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r2.bigInt
            java.math.BigInteger r3 = r1.multiply(r3)
            int r1 = r2.scale
            r0.<init>(r3, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal multiply(org.bouncycastle.math.ec.SimpleBigDecimal r3) {
            r2 = this;
            r2.checkScale(r3)
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r2.bigInt
            java.math.BigInteger r3 = r3.bigInt
            java.math.BigInteger r3 = r1.multiply(r3)
            int r1 = r2.scale
            int r1 = r1 + r1
            r0.<init>(r3, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal negate() {
            r3 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r3.bigInt
            java.math.BigInteger r1 = r1.negate()
            int r2 = r3.scale
            r0.<init>(r1, r2)
            return r0
    }

    public java.math.BigInteger round() {
            r3 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = org.bouncycastle.math.ec.ECConstants.ONE
            r2 = 1
            r0.<init>(r1, r2)
            int r1 = r3.scale
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = r0.adjustScale(r1)
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = r3.add(r0)
            java.math.BigInteger r0 = r0.floor()
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal shiftLeft(int r3) {
            r2 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r2.bigInt
            java.math.BigInteger r3 = r1.shiftLeft(r3)
            int r1 = r2.scale
            r0.<init>(r3, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal subtract(java.math.BigInteger r4) {
            r3 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r0 = new org.bouncycastle.math.ec.SimpleBigDecimal
            java.math.BigInteger r1 = r3.bigInt
            int r2 = r3.scale
            java.math.BigInteger r4 = r4.shiftLeft(r2)
            java.math.BigInteger r4 = r1.subtract(r4)
            int r1 = r3.scale
            r0.<init>(r4, r1)
            return r0
    }

    public org.bouncycastle.math.ec.SimpleBigDecimal subtract(org.bouncycastle.math.ec.SimpleBigDecimal r1) {
            r0 = this;
            org.bouncycastle.math.ec.SimpleBigDecimal r1 = r1.negate()
            org.bouncycastle.math.ec.SimpleBigDecimal r1 = r0.add(r1)
            return r1
    }

    public java.lang.String toString() {
            r8 = this;
            int r0 = r8.scale
            if (r0 != 0) goto Lb
            java.math.BigInteger r0 = r8.bigInt
            java.lang.String r0 = r0.toString()
            return r0
        Lb:
            java.math.BigInteger r0 = r8.floor()
            java.math.BigInteger r1 = r8.bigInt
            int r2 = r8.scale
            java.math.BigInteger r2 = r0.shiftLeft(r2)
            java.math.BigInteger r1 = r1.subtract(r2)
            java.math.BigInteger r2 = r8.bigInt
            int r2 = r2.signum()
            r3 = -1
            if (r2 != r3) goto L30
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
            int r4 = r8.scale
            java.math.BigInteger r2 = r2.shiftLeft(r4)
            java.math.BigInteger r1 = r2.subtract(r1)
        L30:
            int r2 = r0.signum()
            if (r2 != r3) goto L44
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ZERO
            boolean r2 = r1.equals(r2)
            if (r2 != 0) goto L44
            java.math.BigInteger r2 = org.bouncycastle.math.ec.ECConstants.ONE
            java.math.BigInteger r0 = r0.add(r2)
        L44:
            java.lang.String r0 = r0.toString()
            int r2 = r8.scale
            char[] r2 = new char[r2]
            r3 = 2
            java.lang.String r1 = r1.toString(r3)
            int r3 = r1.length()
            int r4 = r8.scale
            int r4 = r4 - r3
            r5 = 0
            r6 = 0
        L5a:
            if (r6 >= r4) goto L63
            r7 = 48
            r2[r6] = r7
            int r6 = r6 + 1
            goto L5a
        L63:
            if (r5 >= r3) goto L70
            int r6 = r4 + r5
            char r7 = r1.charAt(r5)
            r2[r6] = r7
            int r5 = r5 + 1
            goto L63
        L70:
            java.lang.String r1 = new java.lang.String
            r1.<init>(r2)
            java.lang.StringBuffer r2 = new java.lang.StringBuffer
            r2.<init>(r0)
            java.lang.String r0 = "."
            r2.append(r0)
            r2.append(r1)
            java.lang.String r0 = r2.toString()
            return r0
    }
}
