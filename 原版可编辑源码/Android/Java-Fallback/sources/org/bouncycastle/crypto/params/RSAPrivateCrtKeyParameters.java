package org.bouncycastle.crypto.params;

public class RSAPrivateCrtKeyParameters extends org.bouncycastle.crypto.params.RSAKeyParameters {
    private java.math.BigInteger dP;
    private java.math.BigInteger dQ;
    private java.math.BigInteger e;
    private java.math.BigInteger p;
    private java.math.BigInteger q;
    private java.math.BigInteger qInv;

    public RSAPrivateCrtKeyParameters(java.math.BigInteger r2, java.math.BigInteger r3, java.math.BigInteger r4, java.math.BigInteger r5, java.math.BigInteger r6, java.math.BigInteger r7, java.math.BigInteger r8, java.math.BigInteger r9) {
            r1 = this;
            r0 = 1
            r1.<init>(r0, r2, r4)
            r1.e = r3
            r1.p = r5
            r1.q = r6
            r1.dP = r7
            r1.dQ = r8
            r1.qInv = r9
            return
    }

    public java.math.BigInteger getDP() {
            r1 = this;
            java.math.BigInteger r0 = r1.dP
            return r0
    }

    public java.math.BigInteger getDQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.dQ
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            java.math.BigInteger r0 = r1.p
            return r0
    }

    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.e
            return r0
    }

    public java.math.BigInteger getQ() {
            r1 = this;
            java.math.BigInteger r0 = r1.q
            return r0
    }

    public java.math.BigInteger getQInv() {
            r1 = this;
            java.math.BigInteger r0 = r1.qInv
            return r0
    }
}
