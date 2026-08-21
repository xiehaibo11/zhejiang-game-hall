package org.bouncycastle.asn1.oiw;

public class ElGamalParameter extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger g;
    org.bouncycastle.asn1.DERInteger p;

    public ElGamalParameter(java.math.BigInteger r2, java.math.BigInteger r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.p = r0
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.g = r2
            return
    }

    public ElGamalParameter(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.p = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.g = r2
            return
    }

    public java.math.BigInteger getG() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.g
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    public java.math.BigInteger getP() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.p
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.p
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.g
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
