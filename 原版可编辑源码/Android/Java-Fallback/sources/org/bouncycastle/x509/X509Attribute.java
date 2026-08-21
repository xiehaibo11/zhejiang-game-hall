package org.bouncycastle.x509;

public class X509Attribute extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.x509.Attribute attr;

    public X509Attribute(java.lang.String r3, org.bouncycastle.asn1.ASN1Encodable r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.x509.Attribute r0 = new org.bouncycastle.asn1.x509.Attribute
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            org.bouncycastle.asn1.DERSet r3 = new org.bouncycastle.asn1.DERSet
            r3.<init>(r4)
            r0.<init>(r1, r3)
            r2.attr = r0
            return
    }

    public X509Attribute(java.lang.String r3, org.bouncycastle.asn1.ASN1EncodableVector r4) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.x509.Attribute r0 = new org.bouncycastle.asn1.x509.Attribute
            org.bouncycastle.asn1.DERObjectIdentifier r1 = new org.bouncycastle.asn1.DERObjectIdentifier
            r1.<init>(r3)
            org.bouncycastle.asn1.DERSet r3 = new org.bouncycastle.asn1.DERSet
            r3.<init>(r4)
            r0.<init>(r1, r3)
            r2.attr = r0
            return
    }

    X509Attribute(org.bouncycastle.asn1.ASN1Encodable r1) {
            r0 = this;
            r0.<init>()
            org.bouncycastle.asn1.x509.Attribute r1 = org.bouncycastle.asn1.x509.Attribute.getInstance(r1)
            r0.attr = r1
            return
    }

    public java.lang.String getOID() {
            r1 = this;
            org.bouncycastle.asn1.x509.Attribute r0 = r1.attr
            org.bouncycastle.asn1.DERObjectIdentifier r0 = r0.getAttrType()
            java.lang.String r0 = r0.getId()
            return r0
    }

    public org.bouncycastle.asn1.ASN1Encodable[] getValues() {
            r4 = this;
            org.bouncycastle.asn1.x509.Attribute r0 = r4.attr
            org.bouncycastle.asn1.ASN1Set r0 = r0.getAttrValues()
            int r1 = r0.size()
            org.bouncycastle.asn1.ASN1Encodable[] r1 = new org.bouncycastle.asn1.ASN1Encodable[r1]
            r2 = 0
        Ld:
            int r3 = r0.size()
            if (r2 == r3) goto L1e
            org.bouncycastle.asn1.DEREncodable r3 = r0.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1Encodable r3 = (org.bouncycastle.asn1.ASN1Encodable) r3
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r1 = this;
            org.bouncycastle.asn1.x509.Attribute r0 = r1.attr
            org.bouncycastle.asn1.DERObject r0 = r0.toASN1Object()
            return r0
    }
}
