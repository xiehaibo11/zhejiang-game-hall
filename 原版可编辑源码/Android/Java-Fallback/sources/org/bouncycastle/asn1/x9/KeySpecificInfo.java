package org.bouncycastle.asn1.x9;

public class KeySpecificInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERObjectIdentifier algorithm;
    private org.bouncycastle.asn1.ASN1OctetString counter;

    public KeySpecificInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.DERObjectIdentifier r0 = (org.bouncycastle.asn1.DERObjectIdentifier) r0
            r1.algorithm = r0
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.ASN1OctetString r2 = (org.bouncycastle.asn1.ASN1OctetString) r2
            r1.counter = r2
            return
    }

    public KeySpecificInfo(org.bouncycastle.asn1.DERObjectIdentifier r1, org.bouncycastle.asn1.ASN1OctetString r2) {
            r0 = this;
            r0.<init>()
            r0.algorithm = r1
            r0.counter = r2
            return
    }

    public org.bouncycastle.asn1.DERObjectIdentifier getAlgorithm() {
            r1 = this;
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r1.algorithm
            return r0
    }

    public org.bouncycastle.asn1.ASN1OctetString getCounter() {
            r1 = this;
            org.bouncycastle.asn1.ASN1OctetString r0 = r1.counter
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r2.algorithm
            r0.add(r1)
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.counter
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
