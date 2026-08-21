package org.bouncycastle.asn1.x509;

public class AuthorityInformationAccess extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.AccessDescription[] descriptions;

    public AuthorityInformationAccess(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            int r0 = r4.size()
            org.bouncycastle.asn1.x509.AccessDescription[] r0 = new org.bouncycastle.asn1.x509.AccessDescription[r0]
            r3.descriptions = r0
            r0 = 0
        Lc:
            int r1 = r4.size()
            if (r0 == r1) goto L21
            org.bouncycastle.asn1.x509.AccessDescription[] r1 = r3.descriptions
            org.bouncycastle.asn1.DEREncodable r2 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.x509.AccessDescription r2 = org.bouncycastle.asn1.x509.AccessDescription.getInstance(r2)
            r1[r0] = r2
            int r0 = r0 + 1
            goto Lc
        L21:
            return
    }

    public AuthorityInformationAccess(org.bouncycastle.asn1.DERObjectIdentifier r3, org.bouncycastle.asn1.x509.GeneralName r4) {
            r2 = this;
            r2.<init>()
            r0 = 1
            org.bouncycastle.asn1.x509.AccessDescription[] r0 = new org.bouncycastle.asn1.x509.AccessDescription[r0]
            r2.descriptions = r0
            org.bouncycastle.asn1.x509.AccessDescription r1 = new org.bouncycastle.asn1.x509.AccessDescription
            r1.<init>(r3, r4)
            r3 = 0
            r0[r3] = r1
            return
    }

    public static org.bouncycastle.asn1.x509.AuthorityInformationAccess getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.AuthorityInformationAccess
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.x509.AuthorityInformationAccess r3 = (org.bouncycastle.asn1.x509.AuthorityInformationAccess) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.x509.AuthorityInformationAccess r0 = new org.bouncycastle.asn1.x509.AuthorityInformationAccess
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.x509.X509Extension
            if (r0 == 0) goto L22
            org.bouncycastle.asn1.x509.X509Extension r3 = (org.bouncycastle.asn1.x509.X509Extension) r3
            org.bouncycastle.asn1.ASN1Object r3 = org.bouncycastle.asn1.x509.X509Extension.convertValueToObject(r3)
            org.bouncycastle.asn1.x509.AuthorityInformationAccess r3 = getInstance(r3)
            return r3
        L22:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in factory: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.x509.AccessDescription[] getAccessDescriptions() {
            r1 = this;
            org.bouncycastle.asn1.x509.AccessDescription[] r0 = r1.descriptions
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r4 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            r1 = 0
        L6:
            org.bouncycastle.asn1.x509.AccessDescription[] r2 = r4.descriptions
            int r3 = r2.length
            if (r1 == r3) goto L13
            r2 = r2[r1]
            r0.add(r2)
            int r1 = r1 + 1
            goto L6
        L13:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }

    public java.lang.String toString() {
            r3 = this;
            java.lang.StringBuilder r0 = new java.lang.StringBuilder
            r0.<init>()
            java.lang.String r1 = "AuthorityInformationAccess: Oid("
            r0.append(r1)
            org.bouncycastle.asn1.x509.AccessDescription[] r1 = r3.descriptions
            r2 = 0
            r1 = r1[r2]
            org.bouncycastle.asn1.DERObjectIdentifier r1 = r1.getAccessMethod()
            java.lang.String r1 = r1.getId()
            r0.append(r1)
            java.lang.String r1 = ")"
            r0.append(r1)
            java.lang.String r0 = r0.toString()
            return r0
    }
}
