package org.bouncycastle.jce.spec;

public class GOST3410PublicKeyParameterSetSpec {
    private java.math.BigInteger a;
    private java.math.BigInteger p;
    private java.math.BigInteger q;

    public GOST3410PublicKeyParameterSetSpec(java.math.BigInteger r1, java.math.BigInteger r2, java.math.BigInteger r3) {
            r0 = this;
            r0.<init>()
            r0.p = r1
            r0.q = r2
            r0.a = r3
            return
    }

    public boolean equals(java.lang.Object r4) {
            r3 = this;
            boolean r0 = r4 instanceof org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec
            r1 = 0
            if (r0 == 0) goto L26
            org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec r4 = (org.bouncycastle.jce.spec.GOST3410PublicKeyParameterSetSpec) r4
            java.math.BigInteger r0 = r3.a
            java.math.BigInteger r2 = r4.a
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L26
            java.math.BigInteger r0 = r3.p
            java.math.BigInteger r2 = r4.p
            boolean r0 = r0.equals(r2)
            if (r0 == 0) goto L26
            java.math.BigInteger r0 = r3.q
            java.math.BigInteger r4 = r4.q
            boolean r4 = r0.equals(r4)
            if (r4 == 0) goto L26
            r1 = 1
        L26:
            return r1
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

    public int hashCode() {
            r2 = this;
            java.math.BigInteger r0 = r2.a
            int r0 = r0.hashCode()
            java.math.BigInteger r1 = r2.p
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            java.math.BigInteger r1 = r2.q
            int r1 = r1.hashCode()
            r0 = r0 ^ r1
            return r0
    }
}
