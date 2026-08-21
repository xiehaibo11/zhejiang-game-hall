package org.bouncycastle.asn1.ocsp;

public class RevokedInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.x509.CRLReason revocationReason;
    private org.bouncycastle.asn1.DERGeneralizedTime revocationTime;

    public RevokedInfo(org.bouncycastle.asn1.ASN1Sequence r3) {
            r2 = this;
            r2.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r3.getObjectAt(r0)
            org.bouncycastle.asn1.DERGeneralizedTime r0 = (org.bouncycastle.asn1.DERGeneralizedTime) r0
            r2.revocationTime = r0
            int r0 = r3.size()
            r1 = 1
            if (r0 <= r1) goto L24
            org.bouncycastle.asn1.x509.CRLReason r0 = new org.bouncycastle.asn1.x509.CRLReason
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r1)
            org.bouncycastle.asn1.ASN1TaggedObject r3 = (org.bouncycastle.asn1.ASN1TaggedObject) r3
            org.bouncycastle.asn1.DEREnumerated r3 = org.bouncycastle.asn1.DEREnumerated.getInstance(r3, r1)
            r0.<init>(r3)
            r2.revocationReason = r0
        L24:
            return
    }

    public RevokedInfo(org.bouncycastle.asn1.DERGeneralizedTime r1, org.bouncycastle.asn1.x509.CRLReason r2) {
            r0 = this;
            r0.<init>()
            r0.revocationTime = r1
            r0.revocationReason = r2
            return
    }

    public static org.bouncycastle.asn1.ocsp.RevokedInfo getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L32
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ocsp.RevokedInfo
            if (r0 == 0) goto L7
            goto L32
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = new org.bouncycastle.asn1.ocsp.RevokedInfo
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
            org.bouncycastle.asn1.ocsp.RevokedInfo r3 = (org.bouncycastle.asn1.ocsp.RevokedInfo) r3
            return r3
    }

    public static org.bouncycastle.asn1.ocsp.RevokedInfo getInstance(org.bouncycastle.asn1.ASN1TaggedObject r0, boolean r1) {
            org.bouncycastle.asn1.ASN1Sequence r0 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r0, r1)
            org.bouncycastle.asn1.ocsp.RevokedInfo r0 = getInstance(r0)
            return r0
    }

    public org.bouncycastle.asn1.x509.CRLReason getRevocationReason() {
            r1 = this;
            org.bouncycastle.asn1.x509.CRLReason r0 = r1.revocationReason
            return r0
    }

    public org.bouncycastle.asn1.DERGeneralizedTime getRevocationTime() {
            r1 = this;
            org.bouncycastle.asn1.DERGeneralizedTime r0 = r1.revocationTime
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r5 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERGeneralizedTime r1 = r5.revocationTime
            r0.add(r1)
            org.bouncycastle.asn1.x509.CRLReason r1 = r5.revocationReason
            if (r1 == 0) goto L1a
            org.bouncycastle.asn1.DERTaggedObject r1 = new org.bouncycastle.asn1.DERTaggedObject
            r2 = 1
            r3 = 0
            org.bouncycastle.asn1.x509.CRLReason r4 = r5.revocationReason
            r1.<init>(r2, r3, r4)
            r0.add(r1)
        L1a:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
