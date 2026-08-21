package org.bouncycastle.asn1.x509;

public class RSAPublicKeyStructure extends org.bouncycastle.asn1.ASN1Encodable {
    private java.math.BigInteger modulus;
    private java.math.BigInteger publicExponent;

    public RSAPublicKeyStructure(java.math.BigInteger r1, java.math.BigInteger r2) {
            r0 = this;
            r0.<init>()
            r0.modulus = r1
            r0.publicExponent = r2
            return
    }

    public RSAPublicKeyStructure(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 2
            if (r0 != r1) goto L2b
            java.util.Enumeration r4 = r4.getObjects()
            java.lang.Object r0 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            java.math.BigInteger r0 = r0.getPositiveValue()
            r3.modulus = r0
            java.lang.Object r4 = r4.nextElement()
            org.bouncycastle.asn1.DERInteger r4 = org.bouncycastle.asn1.DERInteger.getInstance(r4)
            java.math.BigInteger r4 = r4.getPositiveValue()
            r3.publicExponent = r4
            return
        L2b:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Bad sequence size: "
            r1.append(r2)
            int r4 = r4.size()
            r1.append(r4)
            java.lang.String r4 = r1.toString()
            r0.<init>(r4)
            throw r0
    }

    public static org.bouncycastle.asn1.x509.RSAPublicKeyStructure getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.RSAPublicKeyStructure
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r0 = new org.bouncycastle.asn1.x509.RSAPublicKeyStructure
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid RSAPublicKeyStructure: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L32:
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r3 = (org.bouncycastle.asn1.x509.RSAPublicKeyStructure) r3
            return r3
    }

    public static org.bouncycastle.asn1.x509.RSAPublicKeyStructure getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.x509.RSAPublicKeyStructure r0 = getInstance(r0)
            return r0
    }

    public java.math.BigInteger getModulus() {
            r1 = this;
            java.math.BigInteger r0 = r1.modulus
            return r0
    }

    public java.math.BigInteger getPublicExponent() {
            r1 = this;
            java.math.BigInteger r0 = r1.publicExponent
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r3 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getModulus()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            java.math.BigInteger r2 = r3.getPublicExponent()
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
