package org.bouncycastle.asn1.pkcs;

public class RC2CBCParameter extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString iv;
    org.bouncycastle.asn1.DERInteger version;

    public RC2CBCParameter(int r2, byte[] r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r0.<init>(r2)
            r1.version = r0
            org.bouncycastle.asn1.DEROctetString r2 = new org.bouncycastle.asn1.DEROctetString
            r2.<init>(r3)
            r1.iv = r2
            return
    }

    public RC2CBCParameter(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            r1 = 0
            r2 = 1
            if (r0 != r2) goto L13
            r0 = 0
            r3.version = r0
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            goto L1f
        L13:
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERInteger r0 = (org.bouncycastle.asn1.DERInteger) r0
            r3.version = r0
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
        L1f:
            org.bouncycastle.asn1.ASN1OctetString r4 = (org.bouncycastle.asn1.ASN1OctetString) r4
            r3.iv = r4
            return
    }

    public RC2CBCParameter(byte[] r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            r1.version = r0
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.iv = r0
            return
    }

    public static org.bouncycastle.asn1.pkcs.RC2CBCParameter getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto Lc
            org.bouncycastle.asn1.pkcs.RC2CBCParameter r0 = new org.bouncycastle.asn1.pkcs.RC2CBCParameter
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        Lc:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in RC2CBCParameter factory"
            r1.<init>(r0)
            throw r1
    }

    public byte[] getIV() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.iv
            byte[] r0 = r0.getOctets()
            return r0
    }

    public java.math.BigInteger getRC2ParameterVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            java.math.BigInteger r0 = r0.getValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.version
            if (r1 == 0) goto Lc
            r0.add(r1)
        Lc:
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.iv
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
