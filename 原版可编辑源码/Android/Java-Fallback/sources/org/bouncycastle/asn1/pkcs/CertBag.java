package org.bouncycastle.asn1.pkcs;

public class CertBag extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.DERObjectIdentifier certId;
    org.bouncycastle.asn1.DERObject certValue;
    org.bouncycastle.asn1.ASN1Sequence seq;

    public CertBag(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r1.seq = r2
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.certId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERTaggedObject r2 = (org.bouncycastle.asn1.DERTaggedObject) r2
            org.bouncycastle.asn1.DERObject r2 = r2.getObject()
            r1.certValue = r2
            return
    }

    public CertBag(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.DERObject r2) {
            r0 = this;
            r0.<init>()
            r0.certId = r1
            r0.certValue = r2
            return
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getCertId() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.certId
            return r0
    }

    public org.bouncycastle.asn1.DERObject getCertValue() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.certValue
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r4.certId
            r0.add(r1)
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DERObject r2 = r4.certValue
            r3 = 0
            r1.<init>(r3, r2)
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
