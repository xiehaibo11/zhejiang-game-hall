package org.bouncycastle.asn1.ocsp;

public class OCSPRequest extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ocsp.Signature optionalSignature;
    org.bouncycastle.asn1.ocsp.TBSRequest tbsRequest;

    public OCSPRequest(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = org.bouncycastle.asn1.ocsp.TBSRequest.getInstance(r0)
            r2.tbsRequest = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 != r1) goto L22
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.ocsp.Signature r3 = org.bouncycastle.asn1.ocsp.Signature.getInstance(r3, r0)
            r2.optionalSignature = r3
        L22:
            return
    }

    public OCSPRequest(org.bouncycastle.asn1.ocsp.TBSRequest r1, org.bouncycastle.asn1.ocsp.Signature r2) {
            r0 = this;
            r0.<init>()
            r0.tbsRequest = r1
            r0.optionalSignature = r2
            return
    }

    public static org.bouncycastle.asn1.ocsp.OCSPRequest getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.OCSPRequest
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = new org.bouncycastle.asn1.ocsp.OCSPRequest
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
            org.bouncycastle.asn1.ocsp.OCSPRequest r3 = (org.bouncycastle.asn1.ocsp.OCSPRequest) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.OCSPRequest getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.OCSPRequest r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ocsp.Signature getOptionalSignature() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.Signature r0 = r1.optionalSignature
            return r0
    }

    public org.bouncycastle.asn1.ocsp.TBSRequest getTbsRequest() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.TBSRequest r0 = r1.tbsRequest
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ocsp.TBSRequest r1 = r5.tbsRequest
            r0.add(r1)
            org.bouncycastle.asn1.ocsp.Signature r1 = r5.optionalSignature
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            r3 = 0
            org.bouncycastle.asn1.ocsp.Signature r4 = r5.optionalSignature
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
