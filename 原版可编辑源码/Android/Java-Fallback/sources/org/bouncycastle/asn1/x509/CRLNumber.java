package org.bouncycastle.asn1.x509;

public class CRLNumber extends org.bouncycastle.asn1.DERInteger {
    public CRLNumber(java.math.BigInteger r1) {
            r0 = this;
            r0.<init>(r1)
            return
    }

    public java.math.BigInteger getCRLNumber() {
            r1 = this;
            java.math.BigInteger r0 = r1.getPositiveValue()
            return r0
    }

    @Override
    public java.lang.String toString() {
            r2 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "CRLNumber: "
            r0.append(r1)
            java.math.BigInteger r1 = r2.getCRLNumber()
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
