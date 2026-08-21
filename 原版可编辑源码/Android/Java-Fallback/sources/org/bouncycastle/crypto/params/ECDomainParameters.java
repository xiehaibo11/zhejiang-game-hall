package org.bouncycastle.crypto.params;

public class ECDomainParameters implements org.bouncycastle.math.ec.ECConstants {
    org.bouncycastle.math.ec.ECPoint G;
    org.bouncycastle.math.ec.ECCurve curve;
    java.math.BigInteger h;
    java.math.BigInteger n;
    byte[] seed;

    public ECDomainParameters(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.G = r2
            r0.n = r3
            java.math.BigInteger r1 = org.bouncycastle.crypto.params.ECDomainParameters.ONE
            r0.h = r1
            r1 = 0
            r0.seed = r1
            return
    }

    public ECDomainParameters(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, java.math.BigInteger r4) {
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

    public ECDomainParameters(org.bouncycastle.math.ec.ECCurve r1, org.bouncycastle.math.ec.ECPoint r2, java.math.BigInteger r3, java.math.BigInteger r4, byte[] r5) {
            r0 = this;
            r0.<init>()
            r0.curve = r1
            r0.G = r2
            r0.n = r3
            r0.h = r4
            r0.seed = r5
            return
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
}
