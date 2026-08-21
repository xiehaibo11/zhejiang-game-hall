package org.bouncycastle.asn1.pkcs;

public class EncryptionScheme extends org.bouncycastle.asn1.x509.AlgorithmIdentifier {
    org.bouncycastle.asn1.DERObject obj;
    org.bouncycastle.asn1.DERObject objectId;

    EncryptionScheme(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>(r2)
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r0 = (org.bouncycastle.asn1.DERObject) r0
            r1.objectId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERObject r2 = (org.bouncycastle.asn1.DERObject) r2
            r1.obj = r2
            return
    }

    @Override
    public org.bouncycastle.asn1.DERObject getDERObject() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObject r1 = r2.objectId
            r0.add(r1)
            org.bouncycastle.asn1.DERObject r1 = r2.obj
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public org.bouncycastle.asn1.DERObject getObject() {
            r1 = this;
            org.bouncycastle.asn1.DERObject r0 = r1.obj
            return r0
    }
}
