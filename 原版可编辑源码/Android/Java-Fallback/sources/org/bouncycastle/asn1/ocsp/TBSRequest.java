package org.bouncycastle.asn1.ocsp;

public class TBSRequest extends org.bouncycastle.asn1.ASN1Encodable {
    private static final org.bouncycastle.asn1.DERInteger V1 = null;
    org.bouncycastle.asn1.x509.X509Extensions requestExtensions;
    org.bouncycastle.asn1.ASN1Sequence requestList;
    org.bouncycastle.asn1.x509.GeneralName requestorName;
    org.bouncycastle.asn1.DERInteger version;

    static {
            org.bouncycastle.asn1.DERInteger r0 = new org.bouncycastle.asn1.DERInteger
            r1 = 0
            r0.<init>(r1)
            org.bouncycastle.asn1.ocsp.TBSRequest.V1 = r0
            return
    }

    public TBSRequest(org.bouncycastle.asn1.ASN1Sequence r5) {
            r4 = this;
            r4.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            r2 = 1
            if (r1 == 0) goto L27
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r1 = (org.bouncycastle.asn1.ASN1TaggedObject) r1
            int r1 = r1.getTagNo()
            if (r1 != 0) goto L27
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0, r2)
            r4.version = r0
            r0 = 1
            goto L2b
        L27:
            org.bouncycastle.asn1.DERInteger r1 = org.bouncycastle.asn1.ocsp.TBSRequest.V1
            r4.version = r1
        L2b:
            org.bouncycastle.asn1.DEREncodable r1 = r5.getObjectAt(r0)
            boolean r1 = r1 instanceof org.bouncycastle.asn1.ASN1TaggedObject
            if (r1 == 0) goto L42
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r0 = (org.bouncycastle.asn1.ASN1TaggedObject) r0
            org.bouncycastle.asn1.x509.GeneralName r0 = org.bouncycastle.asn1.x509.GeneralName.getInstance(r0, r2)
            r4.requestorName = r0
            r0 = r1
        L42:
            int r1 = r0 + 1
            org.bouncycastle.asn1.DEREncodable r0 = r5.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r0 = (org.bouncycastle.asn1.ASN1Sequence) r0
            r4.requestList = r0
            int r0 = r5.size()
            int r3 = r1 + 1
            if (r0 != r3) goto L60
            org.bouncycastle.asn1.DEREncodable r5 = r5.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r5 = (org.bouncycastle.asn1.ASN1TaggedObject) r5
            org.bouncycastle.asn1.x509.X509Extensions r5 = org.bouncycastle.asn1.x509.X509Extensions.getInstance(r5, r2)
            r4.requestExtensions = r5
        L60:
            return
    }

    public TBSRequest(org.bouncycastle.asn1.x509.GeneralName r2, org.bouncycastle.asn1.ASN1Sequence r3, org.bouncycastle.asn1.x509.X509Extensions r4) {
            r1 = this;
            r1.<init>()
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.ocsp.TBSRequest.V1
            r1.version = r0
            r1.requestorName = r2
            r1.requestList = r3
            r1.requestExtensions = r4
            return
    }

    public static org.bouncycastle.asn1.ocsp.TBSRequest getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.TBSRequest
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = new org.bouncycastle.asn1.ocsp.TBSRequest
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
            org.bouncycastle.asn1.ocsp.TBSRequest r3 = (org.bouncycastle.asn1.ocsp.TBSRequest) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.TBSRequest getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.X509Extensions getRequestExtensions() {
            r1 = this;
            org.bouncycastle.asn1.x509.X509Extensions r0 = r1.requestExtensions
            return r0
    }

    public org.bouncycastle.asn1.ASN1Sequence getRequestList() {
            r1 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r1.requestList
            return r0
    }

    public org.bouncycastle.asn1.x509.GeneralName getRequestorName() {
            r1 = this;
            org.bouncycastle.asn1.x509.GeneralName r0 = r1.requestorName
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
            org.bouncycastle.asn1.DERInteger r1 = r5.version
            org.bouncycastle.asn1.DERInteger r2 = org.bouncycastle.asn1.ocsp.TBSRequest.V1
            boolean r1 = r1.equals(r2)
            r2 = 1
            if (r1 != 0) goto L1b
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 0
            org.bouncycastle.asn1.DERInteger r4 = r5.version
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1b:
            org.bouncycastle.asn1.x509.GeneralName r1 = r5.requestorName
            if (r1 == 0) goto L29
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            org.bouncycastle.asn1.x509.GeneralName r3 = r5.requestorName
            r1.<init>(r2, r2, r3)
            r0.add(r1)
        L29:
            org.bouncycastle.asn1.ASN1Sequence r1 = r5.requestList
            r0.add(r1)
            org.bouncycastle.asn1.x509.X509Extensions r1 = r5.requestExtensions
            if (r1 == 0) goto L3d
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r3 = 2
            org.bouncycastle.asn1.x509.X509Extensions r4 = r5.requestExtensions
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L3d:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
