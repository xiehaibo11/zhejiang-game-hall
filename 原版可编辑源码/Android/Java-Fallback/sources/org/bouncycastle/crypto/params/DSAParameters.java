package org.bouncycastle.crypto.params;

public class DSAParameters implements org.bouncycastle.crypto.CipherParameters {
    private java.math.BigInteger g;
    private java.math.BigInteger p;
    private java.math.BigInteger q;
    private org.bouncycastle.crypto.params.DSAValidationParameters validation;

    public DSAParameters(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>()
            r0.g = r3
            r0.p = r1
            r0.q = r2
            return
    }

    public DSAParameters(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3, org.bouncycastle.crypto.params.DSAValidationParameters r4) {
            r0 = this;
            r0.<init>()
            r0.g = r3
            r0.p = r1
            r0.q = r2
            r0.validation = r4
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.DSAParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.DSAParameters r4 = (org.bouncycastle.crypto.params.DSAParameters) r4
            java.math.BigInteger r0 = r4.getP()
            java.math.BigInteger r2 = r3.p
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L2d
            java.math.BigInteger r0 = r4.getQ()
            java.math.BigInteger r2 = r3.q
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L2d
            java.math.BigInteger r4 = r4.getG()
            java.math.BigInteger r0 = r3.g
            boolean r4 = r4.equals(r0)
            if (r4 == 0) goto L2d
            r1 = 1
        L2d:
            return r1
    }

    public java.math.BigInteger getG() {
            r1 = this;
            java.math.BigInteger r0 = r1.g
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

    public org.bouncycastle.crypto.params.DSAValidationParameters getValidationParameters() {
            r1 = this;
            org.bouncycastle.crypto.params.DSAValidationParameters r0 = r1.validation
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getP()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getQ()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.math.BigInteger r1 = r2.getG()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }
}
