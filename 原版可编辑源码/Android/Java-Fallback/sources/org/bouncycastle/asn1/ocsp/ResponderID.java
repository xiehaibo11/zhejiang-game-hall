package org.bouncycastle.asn1.ocsp;

public class ResponderID extends org.bouncycastle.asn1.ASN1Encodable implements org.bouncycastle.asn1.ASN1Choice {
    private org.bouncycastle.asn1.DEREncodable value;

    public ResponderID(org.bouncycastle.asn1.ASN1OctetString r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public ResponderID(org.bouncycastle.asn1.x509.X509Name r1) {
            r0 = this;
            r0.<init>()
            r0.value = r1
            return
    }

    public static org.bouncycastle.asn1.ocsp.ResponderID getInstance(java.lang.Object r2) {
            if (r2 == 0) goto L3e
            boolean r0 = r2 instanceof org.bouncycastle.asn1.ocsp.ResponderID
            if (r0 == 0) goto L7
            goto L3e
        L7:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.DEROctetString
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID
            org.bouncycastle.asn1.DEROctetString r2 = (org.bouncycastle.asn1.DEROctetString) r2
            r0.<init>(r2)
            return r0
        L13:
            boolean r0 = r2 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r0 == 0) goto L34
            org.bouncycastle.asn1.ASN1TaggedObject r2 = (org.bouncycastle.asn1.ASN1TaggedObject) r2
            int r0 = r2.getTagNo()
            r1 = 1
            if (r0 != r1) goto L2a
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID
            org.bouncycastle.asn1.x509.X509Name r2 = org.bouncycastle.asn1.x509.X509Name.getInstance(r2, r1)
            r0.<init>(r2)
            return r0
        L2a:
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID
            org.bouncycastle.asn1.ASN1OctetString r2 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r2, r1)
            r0.<init>(r2)
            return r0
        L34:
            org.bouncycastle.asn1.ocsp.ResponderID r0 = new org.bouncycastle.asn1.ocsp.ResponderID
            org.bouncycastle.asn1.x509.X509Name r2 = org.bouncycastle.asn1.x509.X509Name.getInstance(r2)
            r0.<init>(r2)
            return r0
        L3e:
            org.bouncycastle.asn1.ocsp.ResponderID r2 = (org.bouncycastle.asn1.ocsp.ResponderID) r2
            return r2
    }

    public static org.bouncycastle.asn1.ocsp.ResponderID getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.DERObject r0 = r0.getObject()
            org.bouncycastle.asn1.ocsp.ResponderID r0 = getInstance(r0)
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.DEREncodable r0 = r4.value
            boolean r0 = r0 instanceof org.bouncycastle.asn1.ASN1OctetString
            r1 = 1
            if (r0 == 0) goto L10
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 2
            org.bouncycastle.asn1.DEREncodable r3 = r4.value
            r0.<init>(r1, r2, r3)
            return r0
        L10:
            org.bouncycastle.asn1.DERTaggedObject r0 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.DEREncodable r2 = r4.value
            r0.<init>(r1, r1, r2)
            return r0
    }
}
