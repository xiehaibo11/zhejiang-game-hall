package org.bouncycastle.asn1.crmf;

public class PKIPublicationInfo extends org.bouncycastle.asn1.ASN1Encodable {
    private org.bouncycastle.asn1.DERInteger action;
    private org.bouncycastle.asn1.ASN1Sequence pubInfos;

    private PKIPublicationInfo(org.bouncycastle.asn1.ASN1Sequence r2) {
            r1 = this;
            r1.<init>()
            r0 = 0
            org.bouncycastle.asn1.DEREncodable r0 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.DERInteger r0 = org.bouncycastle.asn1.DERInteger.getInstance(r0)
            r1.action = r0
            r0 = 1
            org.bouncycastle.asn1.DEREncodable r2 = r2.getObjectAt(r0)
            org.bouncycastle.asn1.ASN1Sequence r2 = org.bouncycastle.asn1.ASN1Sequence.getInstance(r2)
            r1.pubInfos = r2
            return
    }

    public static org.bouncycastle.asn1.crmf.PKIPublicationInfo getInstance(java.lang.Object r3) {
            boolean r0 = r3 instanceof org.bouncycastle.asn1.crmf.PKIPublicationInfo
            if (r0 == 0) goto L7
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r3 = (org.bouncycastle.asn1.crmf.PKIPublicationInfo) r3
            return r3
        L7:
            boolean r0 = r3 instanceof org.bouncycastle.asn1.ASN1Sequence
            if (r0 == 0) goto L13
            org.bouncycastle.asn1.crmf.PKIPublicationInfo r0 = new org.bouncycastle.asn1.crmf.PKIPublicationInfo
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

    public org.bouncycastle.asn1.DERInteger getAction() {
            r1 = this;
            org.bouncycastle.asn1.DERInteger r0 = r1.action
            return r0
    }

    public org.bouncycastle.asn1.crmf.SinglePubInfo[] getPubInfos() {
            r4 = this;
            org.bouncycastle.asn1.ASN1Sequence r0 = r4.pubInfos
            if (r0 != 0) goto L6
            r0 = 0
            return r0
        L6:
            int r0 = r0.size()
            org.bouncycastle.asn1.crmf.SinglePubInfo[] r1 = new org.bouncycastle.asn1.crmf.SinglePubInfo[r0]
            r2 = 0
        Ld:
            if (r2 == r0) goto L1e
            org.bouncycastle.asn1.ASN1Sequence r3 = r4.pubInfos
            org.bouncycastle.asn1.DEREncodable r3 = r3.getObjectAt(r2)
            org.bouncycastle.asn1.crmf.SinglePubInfo r3 = org.bouncycastle.asn1.crmf.SinglePubInfo.getInstance(r3)
            r1[r2] = r3
            int r2 = r2 + 1
            goto Ld
        L1e:
            return r1
    }

    @Override
    public org.bouncycastle.asn1.DERObject toASN1Object() {
            r2 = this;
            org.bouncycastle.asn1.ASN1EncodableVector r0 = new org.bouncycastle.asn1.ASN1EncodableVector
            r0.<init>()
            org.bouncycastle.asn1.DERInteger r1 = r2.action
            r0.add(r1)
            org.bouncycastle.asn1.ASN1Sequence r1 = r2.pubInfos
            r0.add(r1)
            org.bouncycastle.asn1.DERSequence r1 = new org.bouncycastle.asn1.DERSequence
            r1.<init>(r0)
            return r1
    }
}
