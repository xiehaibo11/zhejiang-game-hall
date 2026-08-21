package org.bouncycastle.asn1.tsp;

public class TimeStampResp extends org.bouncycastle.asn1.ASN1Encodable {
    org.bouncycastle.asn1.cmp.PKIStatusInfo pkiStatusInfo;
    org.bouncycastle.asn1.cms.ContentInfo timeStampToken;

    public TimeStampResp(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            java.util.Enumeration r2 = r2.getObjects()
            java.lang.Object r0 = r2.nextElement()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = org.bouncycastle.asn1.cmp.PKIStatusInfo.getInstance(r0)
            r1.pkiStatusInfo = r0
            boolean r0 = r2.hasMoreElements()
            if (r0 == 0) goto L21
            java.lang.Object r2 = r2.nextElement()
            org.bouncycastle.asn1.cms.ContentInfo r2 = org.bouncycastle.asn1.cms.ContentInfo.getInstance(r2)
            r1.timeStampToken = r2
        L21:
            return
    }

    public TimeStampResp(org.bouncycastle.asn1.cmp.PKIStatusInfo r1, org.bouncycastle.asn1.cms.ContentInfo r2) {
            r0 = this;
            r0.<init>()
            r0.pkiStatusInfo = r1
            r0.timeStampToken = r2
            return
    }

    public static org.bouncycastle.asn1.tsp.TimeStampResp getInstance(java.lang.Object r3) {
            if (r3 == 0) goto L37
            boolean r0 = r3 instanceof org.bouncycastle.asn1.tsp.TimeStampResp
            if (r0 == 0) goto L7
            goto L37
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.tsp.TimeStampResp r0 = new org.bouncycastle.asn1.tsp.TimeStampResp
            org.bouncycastle.asn1.ASN1Sequence r3 = (org.bouncycastle.asn1.ASN1Sequence) r3
            r0.<init>(r3)
            return r0
        L13:
            java.lang.IllegalArgumentException r0 = new java.lang.IllegalArgumentException
            java.lang.StringBuilder r1 = new java.lang.StringBuilder
            r1.<init>()
            java.lang.String r2 = "unknown object in 'TimeStampResp' factory : "
            r1.append(r2)
            java.lang.Class r3 = r3.getClass()
            java.lang.String r3 = r3.getName()
            r1.append(r3)
            java.lang.String r3 = "."
            r1.append(r3)
            java.lang.String r3 = r1.toString()
            r0.<init>(r3)
            throw r0
        L37:
            org.bouncycastle.asn1.tsp.TimeStampResp r3 = (org.bouncycastle.asn1.tsp.TimeStampResp) r3
            return r3
    }

    public org.bouncycastle.asn1.cmp.PKIStatusInfo getStatus() {
            r1 = this;
            org.bouncycastle.asn1.cmp.PKIStatusInfo r0 = r1.pkiStatusInfo
            return r0
    }

    public org.bouncycastle.asn1.cms.ContentInfo getTimeStampToken() {
            r1 = this;
            org.bouncycastle.asn1.cms.ContentInfo r0 = r1.timeStampToken
            return r0
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.cmp.PKIStatusInfo r1 = r2.pkiStatusInfo
            r0.add(r1)
            org.bouncycastle.asn1.cms.ContentInfo r1 = r2.timeStampToken
            if (r1 == 0) goto L11
            r0.add(r1)
        L11:
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
