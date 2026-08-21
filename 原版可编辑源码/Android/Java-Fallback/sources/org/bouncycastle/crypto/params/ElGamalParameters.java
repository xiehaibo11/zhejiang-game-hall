package org.bouncycastle.crypto.params;

public class ElGamalParameters implements org.bouncycastle.crypto.CipherParameters {
    private java.math.BigInteger g;
    private int l;
    private java.math.BigInteger p;

    public ElGamalParameters(java.math.BigInteger r2, java.math.BigInteger r3) {
            r1 = this;
            r0 = 0
            r1.<init>(r2, r3, r0)
            return
    }

    public ElGamalParameters(java.math.BigInteger r1, java.math.BigInteger r2, int r3) {
            r0 = this;
            r0.<init>()
            r0.g = r2
            r0.p = r1
            r0.l = r3
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.crypto.params.ElGamalParameters
            r1 = 0
            if (r0 != 0) goto L6
            return r1
        L6:
            org.bouncycastle.crypto.params.ElGamalParameters r4 = (org.bouncycastle.crypto.params.ElGamalParameters) r4
            java.math.BigInteger r0 = r4.getP()
            java.math.BigInteger r2 = r3.p
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L29
            java.math.BigInteger r0 = r4.getG()
            java.math.BigInteger r2 = r3.g
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L29
            int r4 = r4.getL()
            int r0 = r3.l
            if (r4 != r0) goto L29
            r1 = 1
        L29:
            return r1
    }

    public java.math.BigInteger getG() {
            r1 = this;
            java.math.BigInteger r0 = r1.g
            return r0
    }

    public int getL() {
            r1 = this;
            int r0 = r1.l
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            java.math.BigInteger r0 = r1.p
            return r0
    }

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.getP()
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.getG()
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            int r1 = r2.l
            int r0 = r0 + r1
            return r0
    }
}
