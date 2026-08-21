package org.bouncycastle.asn1.ocsp;

public class SingleResponse extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.ocsp.CertID certID;
    private org.bouncycastle.asn1.ocsp.CertStatus certStatus;
    private org.bouncycastle.asn1.DERGeneralizedTime nextUpdate;
    private org.bouncycastle.asn1.x509.X509Extensions singleExtensions;
    private org.bouncycastle.asn1.DERGeneralizedTime thisUpdate;

    public SingleResponse(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ocsp.CertID r0 = org.bouncycastle.asn1.ocsp.CertID.getInstance(r0)
            r4.certID = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ocsp.CertStatus r1 = org.bouncycastle.asn1.ocsp.CertStatus.getInstance(r1)
            r4.certStatus = r1
            r1 = 2
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = (org.bouncycastle.asn1.DERGeneralizedTime) r1
            r4.thisUpdate = r1
            int r1 = r5.size()
            r2 = 4
            r3 = 3
            if (r1 <= r2) goto L43
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            org.bouncycastle.asn1.DERGeneralizedTime r1 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r1, r0)
            r4.nextUpdate = r1
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r2)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
        L3c:
            org.bouncycastle.asn1.x509.X509Extensions r5 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r5, r0)
            r4.singleExtensions = r5
            goto L5b
        L43:
            int r1 = r5.size()
            if (r1 <= r3) goto L5b
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r3)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            int r1 = r5.getTagNo()
            if (r1 != 0) goto L3c
            org.bouncycastle.asn1.DERGeneralizedTime r5 = org.bouncycastle.asn1.DERGeneralizedTime.getInstance(r5, r0)
            r4.nextUpdate = r5
        L5b:
            return
    }

    public SingleResponse(org.bouncycastle.asn1.ocsp.CertID r1, org.bouncycastle.asn1.ocsp.CertStatus r2, org.bouncycastle.asn1.DERGeneralizedTime r3, org.bouncycastle.asn1.DERGeneralizedTime r4, org.bouncycastle.asn1.x509.X509Extensions r5) {
            r0 = this;
            r0.<init>()
            r0.certID = r1
            r0.certStatus = r2
            r0.thisUpdate = r3
            r0.nextUpdate = r4
            r0.singleExtensions = r5
            return
    }

    public static org.bouncycastle.asn1.ocsp.SingleResponse getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.SingleResponse
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = new org.bouncycastle.asn1.ocsp.SingleResponse
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
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
        L32:
            org.bouncycastle.asn1.ocsp.SingleResponse r3 = (org.bouncycastle.asn1.ocsp.SingleResponse) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.SingleResponse getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.SingleResponse r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ocsp.CertID getCertID() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertID r0 = r1.certID
            return r0
    }

    public org.bouncycastle.asn1.ocsp.CertStatus getCertStatus() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.CertStatus r0 = r1.certStatus
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getNextUpdate() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.nextUpdate
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getSingleExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.singleExtensions
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getThisUpdate() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.thisUpdate
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ocsp.CertID r1 = r5.certID
            r0.add(r1)
            org.bouncycastle.asn1.ocsp.CertStatus r1 = r5.certStatus
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.thisUpdate
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.nextUpdate
            r2 = 1
            if (r1 == 0) goto L24
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.DERGeneralizedTime r4 = r5.nextUpdate
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L24:
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.singleExtensions
            if (r1 == 0) goto L32
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.X509Extensions r3 = r5.singleExtensions
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L32:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
