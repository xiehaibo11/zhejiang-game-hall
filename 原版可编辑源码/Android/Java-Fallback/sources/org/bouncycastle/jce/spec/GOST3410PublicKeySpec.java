package org.bouncycastle.jce.spec;

public class GOST3410PublicKeySpec implements java.security.spec.KeySpec {
    private java.math.BigInteger a;
    private java.math.BigInteger p;
    private java.math.BigInteger q;
    private java.math.BigInteger y;

    public GOST3410PublicKeySpec(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4) {
            r0 = this;
            r0.<init>()
            r0.y = r1
            r0.p = r2
            r0.q = r3
            r0.a = r4
            return
    }

    public java.math.BigInteger getA() {
            r1 = this;
            java.math.BigInteger r0 = r1.a
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            java.math.BigInteger r0 = r1.p
            return r0
    }

    public java.math.BigInteger getQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.q
            return r0
    }

    public java.math.BigInteger getY() {
            r1 = this;
            java.math.BigInteger r0 = r1.y
            return r0
    }
}
