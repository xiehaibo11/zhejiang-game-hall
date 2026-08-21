package org.bouncycastle.jce.spec;

public class ECParameterSpec implements java.security.spec.AlgorithmParameterSpec {
    private org.bouncycastle.math.ec.ECPoint G;
    private org.bouncycastle.math.ec.ECCurve curve;
    private java.math.BigInteger h;
    private java.math.BigInteger n;
    private byte[] seed;

    public ECParameterSpec(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.G = r2
            r0.n = r3
            r1 = 1
            java.math.BigInteger r1 = java.math.BigInteger.valueOf(r1)
            r0.h = r1
            r1 = 0
            r0.seed = r1
            return
    }

    public ECParameterSpec(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, java.math.BigInteger r4) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.G = r2
            r0.n = r3
            r0.h = r4
            r1 = 0
            r0.seed = r1
            return
    }

    public ECParameterSpec(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, java.math.BigInteger r4, byte[] r5) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.G = r2
            r0.n = r3
            r0.h = r4
            r0.seed = r5
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.spec.ECParameterSpec
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.jce.spec.ECParameterSpec r4 = (org.bouncycastle.jce.spec.ECParameterSpec) r4
            org.bouncycastle.math.ec.ECCurve r0 = r3.getCurve()
            org.bouncycastle.math.ec.ECCurve r2 = r4.getCurve()
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L25
            org.bouncycastle.math.ec.ECPoint r0 = r3.getG()
            org.bouncycastle.math.ec.ECPoint r4 = r4.getG()
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L25
            r1 = 1
        L25:
            return r1
    }

    public org.bouncycastle.math.ec.ECCurve getCurve() {
            r1 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r1.curve
            return r0
    }

    public org.bouncycastle.math.ec.ECPoint getG() {
            r1 = this;
            org.bouncycastle.math.ec.ECPoint r0 = r1.G
            return r0
    }

    public java.math.BigInteger getH() {
            r1 = this;
            java.math.BigInteger r0 = r1.h
            return r0
    }

    public java.math.BigInteger getN() {
            r1 = this;
            java.math.BigInteger r0 = r1.n
            return r0
    }

    public byte[] getSeed() {
            r1 = this;
            byte[] r0 = r1.seed
            return r0
    }

    public int hashCode() {
            r2 = this;
            org.bouncycastle.math.ec.ECCurve r0 = r2.getCurve()
            int r0 = r0.hashCode()
            org.bouncycastle.math.ec.ECPoint r1 = r2.getG()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }
}
