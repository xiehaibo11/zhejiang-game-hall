package org.bouncycastle.asn1.misc;

public class CAST5CBCParameters extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ASN1OctetString iv;
    org.bouncycastle.asn1.DERInteger keyLength;

    public CAST5CBCParameters(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            r1.iv = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r2 = (org.bouncycastle.asn1.DERInteger) r2
            r1.keyLength = r2
            return
    }

    public CAST5CBCParameters(byte[] r2, int r3) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DEROctetString r0 = new org.bouncycastle.asn1.DEROctetString
            r0.<init>(r2)
            r1.iv = r0
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r1.keyLength = r2
            return
    }

    public static org.bouncycastle.asn1.misc.CAST5CBCParameters getInstance(java.lang.Object r1) {
            boolean r0 = r1 instanceof org.bouncycastle.asn1.misc.CAST5CBCParameters
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.misc.CAST5CBCParameters r1 = (org.bouncycastle.asn1.misc.CAST5CBCParameters) r1
            return r1
        L7:
            boolean r0 = r1 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.misc.CAST5CBCParameters r0 = new org.bouncycastle.asn1.misc.CAST5CBCParameters
            org.bouncycastle.asn1.ASN1Sequence r1 = (org.bouncycastle.asn1.ASN1Sequence) r1
            r0.<init>(r1)
            return r0
        L13:
            java.lang.IllegalArgumentException r1 = new java.lang.IllegalArgumentException
            java.lang.String r0 = "unknown object in CAST5CBCParameter factory"
            r1.<init>(r0)
            throw r1
    }

    public byte[] getIV() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.iv
            byte[] r0 = r0.getOctets()
            return r0
    }

    public int getKeyLength() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.keyLength
            java.math.BigInteger r0 = r0.getValue()
            int r0 = r0.intValue()
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.iv
            r0.add(r1)
            org.bouncycastle.asn1.DERInteger r1 = r2.keyLength
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
