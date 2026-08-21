package org.bouncycastle.asn1.pkcs;

public class DHParameter extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERInteger g;
    org.bouncycastle.asn1.DERInteger l;
    org.bouncycastle.asn1.DERInteger p;

    public DHParameter(java.math.BigInteger r2, java.math.BigInteger r3, int r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.p = r0
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.g = r2
            if (r4 == 0) goto L19
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r4)
            goto L1a
        L19:
            r2 = 0
        L1a:
            r1.l = r2
            return
    }

    public DHParameter(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.p = r0
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r1.g = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L24
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            goto L25
        L24:
            r2 = 0
        L25:
            r1.l = r2
            return
    }

    public java.math.BigInteger getG() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.g
            java.math.BigInteger r0 = r0.getPositiveValue()
            return r0
    }

    public java.math.BigInteger getL() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.l
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
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
            java.math.BigInteger r1 = r2.getL()
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERInteger r1 = r2.l
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
