package org.bouncycastle.crypto.params;

public class RSAKeyParameters extends org.bouncycastle.crypto.params.AsymmetricKeyParameter {
    private java.math.BigInteger exponent;
    private java.math.BigInteger modulus;

    public RSAKeyParameters(boolean r1, java.math.BigInteger r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>(r1)
            r0.modulus = r2
            r0.exponent = r3
            return
    }

    public java.math.BigInteger getExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.exponent
            return r0
    }

    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            return r0
    }
}
