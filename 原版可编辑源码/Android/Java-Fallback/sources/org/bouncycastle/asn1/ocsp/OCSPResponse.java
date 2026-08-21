package org.bouncycastle.asn1.ocsp;

public class OCSPResponse extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.ocsp.ResponseBytes responseBytes;
    org.bouncycastle.asn1.ocsp.OCSPResponseStatus responseStatus;

    public OCSPResponse(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r0 = new org.bouncycastle.asn1.ocsp.OCSPResponseStatus
            r1 = 0
            org.bouncycastle.asn1.DEREncodable r1 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.DEREnumerated r1 = org.bouncycastle.asn1.DEREnumerated.getInstance(r1)
            r0.<init>(r1)
            r2.responseStatus = r0
            int r0 = r3.size()
            r1 = 2
            if (r0 != r1) goto L27
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.ocsp.ResponseBytes r3 = org.bouncycastle.asn1.ocsp.ResponseBytes.getInstance(r3, r0)
            r2.responseBytes = r3
        L27:
            return
    }

    public OCSPResponse(org.bouncycastle.asn1.ocsp.OCSPResponseStatus r1, org.bouncycastle.asn1.ocsp.ResponseBytes r2) {
            r0 = this;
            r0.<init>()
            r0.responseStatus = r1
            r0.responseBytes = r2
            return
    }

    public static org.bouncycastle.asn1.ocsp.OCSPResponse getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.OCSPResponse
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = new org.bouncycastle.asn1.ocsp.OCSPResponse
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
            org.bouncycastle.asn1.ocsp.OCSPResponse r3 = (org.bouncycastle.asn1.ocsp.OCSPResponse) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.OCSPResponse getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.OCSPResponse r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.ocsp.ResponseBytes getResponseBytes() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.ResponseBytes r0 = r1.responseBytes
            return r0
    }

    public org.bouncycastle.asn1.ocsp.OCSPResponseStatus getResponseStatus() {
            r1 = this;
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r0 = r1.responseStatus
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.ocsp.OCSPResponseStatus r1 = r5.responseStatus
            r0.add(r1)
            org.bouncycastle.asn1.ocsp.ResponseBytes r1 = r5.responseBytes
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            r3 = 0
            org.bouncycastle.asn1.ocsp.ResponseBytes r4 = r5.responseBytes
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
