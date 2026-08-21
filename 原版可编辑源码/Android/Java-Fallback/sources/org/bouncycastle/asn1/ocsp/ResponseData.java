package org.bouncycastle.asn1.ocsp;

public class ResponseData extends org.bouncycastle.asn1.ASN1Encodable {
    private static final org.bouncycastle.asn1.DERInteger V1 = null;
    private org.bouncycastle.asn1.DERGeneralizedTime producedAt;
    private org.bouncycastle.asn1.ocsp.ResponderID responderID;
    private org.bouncycastle.asn1.x509.X509Extensions responseExtensions;
    private org.bouncycastle.asn1.ASN1Sequence responses;
    private org.bouncycastle.asn1.DERInteger version;
    private boolean versionPresent;

    static {
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            org.bouncycastle.asn1.ocsp.ResponseData.V1 = r0
            return
    }

    public ResponseData(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r2 = 1
            if (r1 == 0) goto L29
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            int r1 = r1.getTagNo()
            if (r1 != 0) goto L29
            r3.versionPresent = r2
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r3.version = r0
            r0 = 1
            goto L2d
        L29:
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.ocsp.ResponseData.V1
            r3.version = r1
        L2d:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ocsp.ResponderID r0 = org.bouncycastle.asn1.ocsp.ResponderID.getInstance(r0)
            r3.responderID = r0
            int r0 = r1 + 1
            org.bouncycastle.asn1.DEREncodable r1 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = (org.bouncycastle.asn1.DERGeneralizedTime) r1
            r3.producedAt = r1
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r3.responses = r0
            int r0 = r4.size()
            if (r0 <= r1) goto L5f
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r4 = (org.bouncycastle.asn1.ASN1TaggedObject) r4
            org.bouncycastle.asn1.x509.X509Extensions r4 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r4, r2)
            r3.responseExtensions = r4
        L5f:
            return
    }

    public ResponseData(org.bouncycastle.asn1.DERInteger r1, org.bouncycastle.asn1.ocsp.ResponderID r2, org.bouncycastle.asn1.DERGeneralizedTime r3, org.bouncycastle.asn1.ASN1Sequence r4, org.bouncycastle.asn1.x509.X509Extensions r5) {
            r0 = this;
            r0.<init>()
            r0.version = r1
            r0.responderID = r2
            r0.producedAt = r3
            r0.responses = r4
            r0.responseExtensions = r5
            return
    }

    public ResponseData(org.bouncycastle.asn1.ocsp.ResponderID r7, org.bouncycastle.asn1.DERGeneralizedTime r8, org.bouncycastle.asn1.ASN1Sequence r9, org.bouncycastle.asn1.x509.X509Extensions r10) {
            r6 = this;
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.ocsp.ResponseData.V1
            r0 = r6
            r2 = r7
            r3 = r8
            r4 = r9
            r5 = r10
            r0.<init>(r1, r2, r3, r4, r5)
            return
    }

    public static org.bouncycastle.asn1.ocsp.ResponseData getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.ResponseData
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.ResponseData r0 = new org.bouncycastle.asn1.ocsp.ResponseData
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
            org.bouncycastle.asn1.ocsp.ResponseData r3 = (org.bouncycastle.asn1.ocsp.ResponseData) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.ResponseData getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.ResponseData r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getProducedAt() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.producedAt
            return r0
    }

    public org.bouncycastle.asn1.ocsp.ResponderID getResponderID() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponderID r0 = r1.responderID
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getResponseExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.responseExtensions
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getResponses() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.responses
            return r0
    }

    public org.bouncycastle.asn1.DERInteger getVersion() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.version
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            boolean r1 = r5.versionPresent
            r2 = 1
            if (r1 != 0) goto L14
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            org.bouncycastle.asn1.DERInteger r3 = org.bouncycastle.asn1.ocsp.ResponseData.V1
            boolean r1 = r1.equals(r3)
            if (r1 != 0) goto L1f
        L14:
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.DERInteger r4 = r5.version
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1f:
            org.bouncycastle.asn1.ocsp.ResponderID r1 = r5.responderID
            r0.add(r1)
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.producedAt
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.responses
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.responseExtensions
            if (r1 == 0) goto L3c
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.X509Extensions r3 = r5.responseExtensions
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L3c:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
