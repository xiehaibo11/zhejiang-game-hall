package org.bouncycastle.asn1.cmp;

public class CertResponse extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger certReqId;
    private org.bouncycastle.asn1.cmp.CertifiedKeyPair certifiedKeyPair;
    private org.bouncycastle.asn1.ASN1OctetString rspInfo;
    private org.bouncycastle.asn1.cmp.PKIStatusInfo status;

    private CertResponse(org.bouncycastle.asn1.ASN1Sequence r4) {
            r3 = this;
            r3.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r3.certReqId = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r0)
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = org.bouncycastle.asn1.cmp.PKIStatusInfo.getInstance(r0)
            r3.status = r0
            int r0 = r4.size()
            r1 = 3
            if (r0 < r1) goto L4b
            int r0 = r4.size()
            r2 = 2
            if (r0 != r1) goto L37
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r2)
            boolean r0 = r4 instanceof org.bouncycastle.asn1.ASN1OctetString
            if (r0 == 0) goto L30
            goto L45
        L30:
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r4 = org.bouncycastle.asn1.cmp.CertifiedKeyPair.getInstance(r4)
            r3.certifiedKeyPair = r4
            goto L4b
        L37:
            org.bouncycastle.asn1.DEREncodable r0 = r4.getObjectAt(r2)
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r0 = org.bouncycastle.asn1.cmp.CertifiedKeyPair.getInstance(r0)
            r3.certifiedKeyPair = r0
            org.bouncycastle.asn1.DEREncodable r4 = r4.getObjectAt(r1)
        L45:
            org.bouncycastle.asn1.ASN1OctetString r4 = org.bouncycastle.asn1.ASN1OctetString.getInstance(r4)
            r3.rspInfo = r4
        L4b:
            return
    }

    public static org.bouncycastle.asn1.cmp.CertResponse getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.cmp.CertResponse
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.cmp.CertResponse r3 = (org.bouncycastle.asn1.cmp.CertResponse) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.cmp.CertResponse r0 = new org.bouncycastle.asn1.cmp.CertResponse
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

    public org.bouncycastle.asn1.DERInteger getCertReqId() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.certReqId
            return r0
    }

    public org.bouncycastle.asn1.cmp.CertifiedKeyPair getCertifiedKeyPair() {
            r1 = this;
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r0 = r1.certifiedKeyPair
            return r0
    }

    public org.bouncycastle.asn1.cmp.PKIStatusInfo getStatus() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = r1.status
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.certReqId
            r0.add(r1)
            org.bouncycastle.asn1.cmp.PKIStatusInfo r1 = r2.status
            r0.add(r1)
            org.bouncycastle.asn1.cmp.CertifiedKeyPair r1 = r2.certifiedKeyPair
            if (r1 == 0) goto L16
            r0.add(r1)
        L16:
            org.bouncycastle.asn1.ASN1OctetString r1 = r2.rspInfo
            if (r1 == 0) goto L1d
            r0.add(r1)
        L1d:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
