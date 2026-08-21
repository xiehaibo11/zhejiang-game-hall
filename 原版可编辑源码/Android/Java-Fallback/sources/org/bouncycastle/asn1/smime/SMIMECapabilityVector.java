package org.bouncycastle.asn1.smime;

public class SMIMECapabilityVector {
    private org.bouncycastle.asn1.ASN1EncodableVector capabilities;

    public SMIMECapabilityVector() {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1.capabilities = r0
            return
    }

    public void addCapability(org.bouncycastle.asn1.DERObjectIdentifier r3) {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r2.capabilities
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r3)
            r0.add(r1)
            return
    }

    public void addCapability(org.bouncycastle.asn1.DERObjectIdentifier r2, int r3) {
            r1 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r2)
            org.bouncycastle.asn1.DERInteger r2 = new org.bouncycastle.asn1.DERInteger
            r2.<init>(r3)
            r0.add(r2)
            org.bouncycastle.asn1.ASN1EncodableVector r2 = r1.capabilities
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r0)
            r2.add(r3)
            return
    }

    public void addCapability(org.bouncycastle.asn1.DERObjectIdentifier r2, org.bouncycastle.asn1.DEREncodable r3) {
            r1 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r0.add(r2)
            r0.add(r3)
            org.bouncycastle.asn1.ASN1EncodableVector r2 = r1.capabilities
            org.bouncycastle.asn1.DERSequence r3 = new org.bouncycastle.asn1.DERSequence
            r3.<init>(r0)
            r2.add(r3)
            return
    }

    public org.bouncycastle.asn1.DEREncodableVector toDEREncodableVector() {
            r1 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = r1.capabilities
            return r0
    }
}
