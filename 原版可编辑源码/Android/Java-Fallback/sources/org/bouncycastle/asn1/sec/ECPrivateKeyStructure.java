package org.bouncycastle.asn1.sec;

public class ECPrivateKeyStructure extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ASN1Sequence seq;

    public ECPrivateKeyStructure(java.math.BigInteger r5) {
            r4 = this;
            r4.<init>()
            byte[] r5 = r5.toByteArray()
            r0 = 0
            r1 = r5[r0]
            r2 = 1
            if (r1 != 0) goto L15
            int r1 = r5.length
            int r1 = r1 - r2
            byte[] r3 = new byte[r1]
            java.lang.System.arraycopy(r5, r2, r3, r0, r1)
            r5 = r3
        L15:
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = new org.bouncycastle.asn1.DERInteger
            r1.<init>(r2)
            r0.add(r1)
            org.bouncycastle.asn1.DEROctetString r1 = new org.bouncycastle.asn1.DEROctetString
            r1.<init>(r5)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r5 = new org.bouncycastle.asn1.DERSequence
            r5.<init>(r0)
            r4.seq = r5
            return
    }

    public ECPrivateKeyStructure(org.bouncycastle.asn1.ASN1Sequence r1) {
            r0 = this;
            r0.<init>()
            r0.seq = r1
            return
    }

    private org.bouncycastle.asn1.ASN1Object getObjectInTag(int r4) {
            r3 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r3.seq
            java.util.Enumeration r0 = r0.getObjects()
        L6:
            boolean r1 = r0.hasMoreElements()
            if (r1 == 0) goto L29
            java.lang.Object r1 = r0.nextElement()
            org.bouncycastle.asn1.DEREncodable r1 = (org.bouncycastle.asn1.DEREncodable) r1
            boolean r2 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r2 == 0) goto L6
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            int r2 = r1.getTagNo()
            if (r2 != r4) goto L6
            org.bouncycastle.asn1.DERObject r4 = r1.getObject()
            org.bouncycastle.asn1.DERObject r4 = r4.getDERObject()
            org.bouncycastle.asn1.ASN1Object r4 = (org.bouncycastle.asn1.ASN1Object) r4
            return r4
        L29:
            r4 = 0
            return r4
    }

    public java.math.BigInteger getKey() {
            r3 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r3.seq
            r1 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r0.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1OctetString r0 = (org.bouncycastle.asn1.ASN1OctetString) r0
            java.math.BigInteger r2 = new java.math.BigInteger
            byte[] r0 = r0.getOctets()
            r2.<init>(r1, r0)
            return r2
    }

    public org.bouncycastle.asn1.ASN1Object getParameters() {
            r1 = this;
            r0 = 0
            org.bouncycastle.asn1.ASN1Object r0 = r1.getObjectInTag(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERBitString getPublicKey() {
            r1 = this;
            r0 = 1
            org.bouncycastle.asn1.ASN1Object r0 = r1.getObjectInTag(r0)
            org.bouncycastle.asn1.DERBitString r0 = (org.bouncycastle.asn1.DERBitString) r0
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.seq
            return r0
    }
}
