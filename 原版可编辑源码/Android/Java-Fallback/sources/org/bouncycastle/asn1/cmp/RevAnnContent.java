package org.bouncycastle.asn1.cmp;

public class RevAnnContent extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERGeneralizedTime badSinceDate;
    private org.bouncycastle.asn1.crmf.CertId certId;
    private org.bouncycastle.asn1.x509.X509Extensions crlDetails;
    private org.bouncycastle.asn1.cmp.PKIStatus status;
    private org.bouncycastle.asn1.DERGeneralizedTime willBeRevokedAt;

    private RevAnnContent(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.cmp.PKIStatus r0 = org.bouncycastle.asn1.cmp.PKIStatus.getInstance(r0)
            r2.status = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.crmf.CertId r0 = org.bouncycastle.asn1.crmf.CertId.getInstance(r0)
            r2.certId = r0
            r0 = 2
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0)
            r2.willBeRevokedAt = r0
            r0 = 3
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERGeneralizedTime r0 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r0)
            r2.badSinceDate = r0
            int r0 = r3.size()
            r1 = 4
            if (r0 <= r1) goto L40
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.x509.X509Extensions r3 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r3)
            r2.crlDetails = r3
        L40:
            return
    }

    public static org.bouncycastle.asn1.cmp.RevAnnContent getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.RevAnnContent
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.RevAnnContent r3 = (org.bouncycastle.asn1.cmp.RevAnnContent) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.RevAnnContent r0 = new org.bouncycastle.asn1.cmp.RevAnnContent
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "Invalid object: "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getBadSinceDate() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.badSinceDate
            return r0
    }

    public org.bouncycastle.asn1.crmf.CertId getCertId() {
            r1 = this;
            org.bouncycastle.asn1.crmf.CertId r0 = r1.certId
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getCrlDetails() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.crlDetails
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIStatus getStatus() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIStatus r0 = r1.status
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getWillBeRevokedAt() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.willBeRevokedAt
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIStatus r1 = r2.status
            r0.add(r1)
            org.bouncycastle.asn1.crmf.CertId r1 = r2.certId
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r2.willBeRevokedAt
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r2.badSinceDate
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r2.crlDetails
            if (r1 == 0) goto L20
            r0.add(r1)
        L20:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
